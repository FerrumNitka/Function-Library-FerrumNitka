# Function-Library-FerrumNitka
Эта небольшая библиотека предназначена для работы с терминалом Windows
[Документация](https://github.com/FerrumNitka/Function-Library-FerrumNitka/blob/main/%D0%94%D0%BE%D0%BA%D1%83%D0%BC%D0%B5%D0%BD%D1%82%D0%B0%D1%86%D0%B8%D1%8F.txt)

# Приступая к работе

1. Добавьте файлы библиотеки в проект 
2. Подключите заголовочный файл "FunctionLibrary.h"
3. Перед тем как использовать функции из библиотеки, необходимо вызвать функцию init_variables
4. В конце кода нужно вызвать функцию close_variables

# пример простой программы:

```
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
```
