function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["untitled.c:59"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
