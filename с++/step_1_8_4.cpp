# include <iostream >
// using namespace std;

/*
Напишите функцию power, реализующую возведение целого числа в неотрицательную целую степень. Функция power должна принимать на вход два целых числа и возвращать 
целое число (смотрите шаблон кода). При выполнении задания учтите, что функция обязательно должна называться power, функция ничего не должна читать со входа или выводить.

Требования к реализации: в этом задании вам нужно реализовать только функцию power. Вы можете определять вспомогательные функции, если они вам нужны. Реализовывать функции main не нужно.

Ограничения: библиотеку cmath (и math.h) использовать запрещено.
*/

int power(int x, unsigned p) {
    int answer = x;
    if (p == 0) {
    	answer = 1;
    	return answer;
	} else {
	
    for (int i = 1; i < p; i++) {
    	answer *= x;
	}
    return answer;
}
}

int main()
{
	
	int x = 3;
	unsigned p = 0;
	std::cout << "answer = " << power(x, p) << "\n";

  system("pause");
  return 0;
}