#include "FunctionLibrary.h"
#include "variables.h"


void init_variables()
{
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = 0;
	coord.Y = 0;
}

void close_variables()
{
	CloseHandle(handle);
}

void print_info()
{
	std::cout << "Function Library FerrumNitka" << tab << "v" << version << std::endl;
	std::cout << "Copyright (c) 2025 FerrumNitka" << std::endl;
}

void set_color(uc color_text, uc color_background)
{
	SetConsoleTextAttribute(handle, color_text + 16 * color_background);

}
