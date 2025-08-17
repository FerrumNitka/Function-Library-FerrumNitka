#pragma once

#include <iostream>
#include <string>
#include <Windows.h>

#define version "1.0.0"
#define tab "    "
#define parentheses 0
#define square_brackets 1


typedef unsigned char uc;
typedef std::string whose_message;


void init_variables();	// Инициализирует переменные
void close_variables();	// CloseHandle(handle);
void print_info();	// Выводит версию библиотеки

std::string in_parentheses(std::string text, uc type);	// Возвращает текст в скобках

void print_line(uc length);	// Выводит символ "=" определённое количество раз
void set_color(uc color_text, uc color_background);	// Задаёт цвет
void clear();	// Очищает экран терминала

void print_message(whose_message whose_message, std::string text);	// Выводит текст: [whose_message]	text