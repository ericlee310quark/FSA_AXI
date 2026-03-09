# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTestDriver.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTestDriver \
	VTestDriver___024root__DepSet_h662e1026__0 \
	VTestDriver___024root__DepSet_h662e1026__1 \
	VTestDriver___024root__DepSet_h662e1026__2 \
	VTestDriver___024root__DepSet_h662e1026__3 \
	VTestDriver___024root__DepSet_h662e1026__4 \
	VTestDriver___024root__DepSet_h662e1026__5 \
	VTestDriver___024root__DepSet_h662e1026__6 \
	VTestDriver___024root__DepSet_h662e1026__7 \
	VTestDriver___024root__DepSet_h662e1026__8 \
	VTestDriver___024root__DepSet_h662e1026__9 \
	VTestDriver___024root__DepSet_h662e1026__10 \
	VTestDriver___024root__DepSet_h662e1026__11 \
	VTestDriver___024root__DepSet_h662e1026__12 \
	VTestDriver___024root__DepSet_hbb6e3b65__0 \
	VTestDriver___024root__DepSet_hbb6e3b65__1 \
	VTestDriver___024root__DepSet_hbb6e3b65__2 \
	VTestDriver___024root__DepSet_hbb6e3b65__3 \
	VTestDriver___024root__DepSet_hbb6e3b65__4 \
	VTestDriver___024root__DepSet_hbb6e3b65__5 \
	VTestDriver___024root__DepSet_hbb6e3b65__6 \
	VTestDriver___024root__DepSet_hbb6e3b65__7 \
	VTestDriver___024root__DepSet_hbb6e3b65__8 \
	VTestDriver___024root__DepSet_hbb6e3b65__9 \
	VTestDriver___024root__DepSet_hbb6e3b65__10 \
	VTestDriver___024root__DepSet_hbb6e3b65__11 \
	VTestDriver___024root__DepSet_hbb6e3b65__12 \
	VTestDriver___024root__DepSet_hbb6e3b65__13 \
	VTestDriver___024root__DepSet_hbb6e3b65__14 \
	VTestDriver___024root__DepSet_hbb6e3b65__15 \
	VTestDriver___024root__DepSet_hbb6e3b65__16 \
	VTestDriver___024root__DepSet_hbb6e3b65__17 \
	VTestDriver___024root__DepSet_hbb6e3b65__18 \
	VTestDriver___024root__DepSet_hbb6e3b65__19 \
	VTestDriver___024root__DepSet_hbb6e3b65__20 \
	VTestDriver___024root__DepSet_hbb6e3b65__21 \
	VTestDriver___024root__DepSet_hbb6e3b65__22 \
	VTestDriver___024root__DepSet_hbb6e3b65__23 \
	VTestDriver___024root__DepSet_hbb6e3b65__24 \
	VTestDriver___024root__DepSet_hbb6e3b65__25 \
	VTestDriver___024root__DepSet_hbb6e3b65__26 \
	VTestDriver___024root__DepSet_hbb6e3b65__27 \
	VTestDriver___024root__DepSet_hbb6e3b65__28 \
	VTestDriver___024root__DepSet_hbb6e3b65__29 \
	VTestDriver___024root__DepSet_hbb6e3b65__30 \
	VTestDriver___024root__DepSet_hbb6e3b65__31 \
	VTestDriver___024root__DepSet_hbb6e3b65__32 \
	VTestDriver___024root__DepSet_hbb6e3b65__33 \
	VTestDriver___024root__DepSet_hbb6e3b65__34 \
	VTestDriver___024root__DepSet_hbb6e3b65__35 \
	VTestDriver___024root__DepSet_hbb6e3b65__36 \
	VTestDriver___024root__DepSet_hbb6e3b65__37 \
	VTestDriver___024root__DepSet_hbb6e3b65__38 \
	VTestDriver___024root__DepSet_hbb6e3b65__39 \
	VTestDriver___024root__DepSet_hbb6e3b65__40 \
	VTestDriver___024root__DepSet_hbb6e3b65__41 \
	VTestDriver___024root__DepSet_hbb6e3b65__42 \
	VTestDriver___024root__DepSet_hbb6e3b65__43 \
	VTestDriver___024root__DepSet_hbb6e3b65__44 \
	VTestDriver___024root__DepSet_hbb6e3b65__45 \
	VTestDriver___024root__DepSet_hbb6e3b65__46 \
	VTestDriver___024root__DepSet_hbb6e3b65__47 \
	VTestDriver___024root__DepSet_hbb6e3b65__48 \
	VTestDriver___024root__DepSet_hbb6e3b65__49 \
	VTestDriver___024root__DepSet_hbb6e3b65__50 \
	VTestDriver___024root__DepSet_hbb6e3b65__51 \
	VTestDriver___024root__DepSet_hbb6e3b65__52 \
	VTestDriver___024root__DepSet_hbb6e3b65__53 \
	VTestDriver___024root__DepSet_hbb6e3b65__54 \
	VTestDriver___024root__DepSet_hbb6e3b65__55 \
	VTestDriver___024root__DepSet_hbb6e3b65__56 \
	VTestDriver___024root__DepSet_hbb6e3b65__57 \
	VTestDriver___024root__DepSet_hbb6e3b65__58 \
	VTestDriver___024root__DepSet_hbb6e3b65__59 \
	VTestDriver___024root__DepSet_hbb6e3b65__60 \
	VTestDriver___024root__DepSet_hbb6e3b65__61 \
	VTestDriver___024root__DepSet_hbb6e3b65__62 \
	VTestDriver___024root__DepSet_hbb6e3b65__63 \
	VTestDriver___024root__DepSet_hbb6e3b65__64 \
	VTestDriver___024root__DepSet_hbb6e3b65__65 \
	VTestDriver___024root__DepSet_hbb6e3b65__66 \
	VTestDriver___024root__DepSet_hbb6e3b65__67 \
	VTestDriver___024unit__DepSet_hf172cd27__0 \
	VTestDriver__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTestDriver__ConstPool_0 \
	VTestDriver___024root__Slow \
	VTestDriver___024root__DepSet_h662e1026__0__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__0__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__1__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__2__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__3__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__4__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__5__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__6__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__7__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__8__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__9__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__10__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__11__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__12__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__13__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__14__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__15__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__16__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__17__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__18__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__19__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__20__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__21__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__22__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__23__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__24__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__25__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__26__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__27__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__28__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__29__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__30__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__31__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__32__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__33__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__34__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__35__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__36__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__37__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__38__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__39__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__40__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__41__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__42__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__43__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__44__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__45__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__46__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__47__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__48__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__49__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__50__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__51__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__52__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__53__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__54__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__55__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__56__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__57__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__58__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__59__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__60__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__61__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__62__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__63__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__64__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__65__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__66__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__67__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__68__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__69__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__70__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__71__Slow \
	VTestDriver___024root__DepSet_hbb6e3b65__72__Slow \
	VTestDriver___024unit__Slow \
	VTestDriver___024unit__DepSet_h44496666__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTestDriver__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTestDriver__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vpi \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
