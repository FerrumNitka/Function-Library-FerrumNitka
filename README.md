# Function-Library-FerrumNitka
Эта небольшая библиотека предназначена для работы с терминалом Windows

# === Приступая к работе ====
1. Добавьте файлы библиотеки в проект 
2. Подключите заголовочный файл "FunctionLibrary.h"
3. Перед тем как использовать функции из библиотеки, необходимо вызвать функцию init_variables
4. В конце кода нужно вызвать функцию close_variables

# пример простой программы:
#include "FunctionLibrary.h"
#include "colors.h"
#include "transparency.h"


int main()
{
	transparency();
	init_variables();

	set_color(color_red, color_gray);
	print_info();

	std::cin.ignore();
	close_variables();
	return 0;
}
