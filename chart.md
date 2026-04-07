```mermaid
graph TD
    Start([啟動硬體]) --> LoadTileC[鎖定目標 Tile Cij (例如 C_00)]
    LoadTileC --> InitK[設定 K_tile = 0]
    
    InitK --> StreamData[連續將 A_{i, k} 與 B_{k, j} 進行 Skewing 後送入陣列]
    StreamData --> Compute[陣列依時序進行 MAC 運算並累積於 PE 暫存器]
    
    Compute --> CheckK{K_tile 達到 3 嗎? (K=12/4)}
    CheckK -- 否 --> IncK[K_tile ++, 不排空PE, 直接載入下一組 A, B] --> StreamData
    CheckK -- 是 --> Drain[K維度運算完畢, 啟動 Drain 機制將 C_ij 結果依序移出陣列寫回 SRAM]
    
    Drain --> CheckJ{矩陣 B 的所有管柱計算完畢?}
    CheckJ -- 否 --> MoveJ[移動到下一個 C_i(j+1)] --> LoadTileC
    CheckJ -- 是 --> CheckI{矩陣 A 的所有列計算完畢?}
    
    CheckI -- 否 --> MoveI[移動到下一個 C_(i+1)0] --> LoadTileC
    CheckI -- 是 --> Done([矩陣乘法完成])
```