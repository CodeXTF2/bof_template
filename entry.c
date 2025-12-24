#include <windows.h>
#include <stdio.h>
#include "beacon.h"

void go(char* args, int length)
{
    // 1. Kernel32: GetCurrentProcessId returns a DWORD directly
    BeaconPrintf(CALLBACK_OUTPUT, "[Kernel32] GetCurrentProcessId() returns: %d", GetCurrentProcessId());

    // 2. Msvcrt: rand() returns an int (Standard C function)
    BeaconPrintf(CALLBACK_OUTPUT, "[Msvcrt] rand() returns: %d", rand());

    // 3. Ucrt: atoi() returns an int (Standard C function)
    // Note: The linker decides if this comes from UCRT or MSVCRT based on your library order
    BeaconPrintf(CALLBACK_OUTPUT, "[Ucrt] atoi(\"12345\") returns: %d", atoi("12345"));

    // 4. Advapi32: GetSidLengthRequired returns a DWORD length
    // This avoids the complexity of buffer management just for a link test
    BeaconPrintf(CALLBACK_OUTPUT, "[Advapi32] GetSidLengthRequired(1) returns: %d", GetSidLengthRequired(1));
}
