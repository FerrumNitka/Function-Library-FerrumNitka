#include "FunctionLibrary.h"
#include "variables.h"


void print_info()
{
	std::cout << "Function Library FerrumNitka" << tab << "v" << version << std::endl;
	std::cout << "Copyright (c) 2025 FerrumNitka" << std::endl;
}

void set_color(uc color_text, uc color_background)
{
	if (init == true)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_text + 16 * color_background);
	}
	else
	{
		std::cout << "Error!" << std::endl;
	}
}