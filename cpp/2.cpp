#include "FunctionLibrary.h"


std::string in_parentheses(std::string text, uc type)
{
	if (type == 0)
	{
		return "(" + text + ")";
	}
	else
	{
		return "[" + text + "]";
	}
}

void print_line(uc length)
{
	for (uc i = 0; i < length; i++)
	{
		std::cout << "=";
	}
	std::cout << std::endl;
}

void print_message(whose_message whose_message, std::string text)
{
	std::cout << in_parentheses(whose_message, square_brackets) << tab << text << std::endl;
}

void clear()
{
	system("cls");	// Это временно, В будущих версиях это изменится!
}