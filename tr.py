def transpose_hex_matrix(input_file, output_file):
    # 1. 讀取 hex 檔案內容
    with open(input_file, 'r') as f:
        # 去除空白字元並存入清單
        data = [line.strip() for line in f.readlines() if line.strip()]
    
    if len(data) != 256:
        print(f"警告：資料長度不符。預期 256 個元素，實際讀取到 {len(data)} 個。")
        return

    # 2. 將一維清單轉換為 16x16 矩陣 (Row-Major)
    matrix = []
    for i in range(0, 256, 16):
        matrix.append(data[i:i+10]) # 這裡的 i+16 是切片

    # 修正：更精確的寫法
    matrix = [data[i:i+16] for i in range(0, 256, 16)]

    # 3. 執行轉置 (Row 變 Column)
    # zip(*matrix) 會將每一列的第 n 個元素打包在一起，形成新的列
    transposed_matrix = list(zip(*matrix))

    # 4. 寫回新的 hex 檔案
    with open(output_file, 'w') as f:
        for row in transposed_matrix:
            for item in row:
                f.write(f"{item}\n")

    print(f"轉置完成！結果已儲存至 {output_file}")

# 執行
transpose_hex_matrix('FSA\golden_ans\V.hex', 'output_transposed.hex')