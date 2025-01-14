#include <common.h>

FUNC VOID HwbpNtTrace(
    _In_ PEXCEPTION_POINTERS pExceptionInfo
){
    BLACKOUT_INSTANCE    

    PVOID Return = NULL;

    Return = pExceptionInfo->ContextRecord->Rip;
    pExceptionInfo->ContextRecord->Rsp += sizeof(PVOID);
    pExceptionInfo->ContextRecord->Rip = Return;
}