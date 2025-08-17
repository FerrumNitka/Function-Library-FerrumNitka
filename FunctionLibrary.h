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


void init_variables();	// �������������� ����������
void close_variables();	// CloseHandle(handle);
void print_info();	// ������� ������ ����������

std::string in_parentheses(std::string text, uc type);	// ���������� ����� � �������

void print_line(uc length);	// ������� ������ "=" ����������� ���������� ���
void set_color(uc color_text, uc color_background);	// ����� ����
void clear();	// ������� ����� ���������

void print_message(whose_message whose_message, std::string text);	// ������� �����: [whose_message]	text