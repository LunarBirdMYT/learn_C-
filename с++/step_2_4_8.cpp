#include <iostream>

/*
Напишите функцию поиска первого вхождения шаблона в текст. 
В качестве первого параметра функция принимает текст (C-style строка), 
в которой нужно искать шаблон. В качестве второго параметра 
строку-шаблон (C-style строка), которую нужно найти. Функция 
возвращает позицию первого вхождения строки-шаблона, если он 
присутствует в строке (помните, что в C++ принято считать с 0), 
и -1, если шаблона в тексте нет.

Учтите, что пустой шаблон (строка длины 0) можно найти в любом месте текста.

Требования к реализации: при выполнении данного задания 
вы можете определять любые вспомогательные функции, если 
они вам нужны. Вводить или выводить что-либо не нужно. 
Реализовывать функцию main не нужно.
*/


int strin(const char *text, const char *pattern)
{
	int a = 0;
	int b = 0;
	if (pattern == '\0' || text == pattern) {
		return 0;
	} else {
		for (int i = 0; pattern[i] != '\0'; i++){
			for (int j = 0; text[j] != '\0'; j++) {
				if (pattern[i] == text[j]){
					a++;
				} else {
					b++;
				}
		}
	}	
	
	
}

int main() {
    // Test 1
    char text1[] = "ababc";
    char pattern1[] = "abc";
    //strin(text1, pattern1);
    std::cout << strin(text1, pattern1) << std::endl;
    
    system("pause");
    return 0;
}