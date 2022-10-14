#include "hook_macro.h"

#define WAVEOUTSETVOLUME

#include <Windows.h>

FAKE(MMRESULT, __stdcall, waveOutSetVolume, HWAVEOUT hwo, DWORD dwVolume) { // currently, the parsing code only support __cdecl functions.
	return 0;
}
