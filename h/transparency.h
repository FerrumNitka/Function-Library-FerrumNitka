#pragma once
#include <Windows.h>
#define hwnd GetConsoleWindow()
#define transparency() (SetLayeredWindowAttributes(hwnd, RGB(0, 0, 0), 255, LWA_ALPHA))