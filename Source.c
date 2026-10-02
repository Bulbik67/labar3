#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define		 D		2.54
#define		 M		2.32166

int main()
{
	setlocale(0, "rus");
	task1();
	task2();
	task3();


	return 0;
}



int task1()
{
	int num, num2;
	puts("¬ведите число:");
	scanf_s("%d", &num);
	printf("¬ведено число %d\n", num);
	scanf_s("%d", &num2);
	printf("¬ведено число %d\n", num2);
	printf("%d %d %d %d %d\n", num + num2, num - num2, num * num2, num / num2, num % num2);
	return 0;


}

int task2()
{
	int dym;
	float result;

	puts("¬ведите число дл€ расчета:");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("d дюймов - это % .1f см\n", dym, result);
	return 0;

}

int task3()
{
	int a, b;
	puts("¬ведите число a\n");
	scanf_s("%d", &a);
	puts("¬ведите число b\n");
	scanf_s("%d", &b);
	printf("-----------------------------------\n");
	printf("|%7s   |%7s   |%7s   |\n", "a*b", "a+b", "a-b");
	printf("-----------------------------------\n");
	printf("|%5d*%-4d|%5d+%-4d|%5d-%-4d|\n", a, b, a, b, a, b);
	printf("-----------------------------------\n");
	printf("|%7d   |%7d   |%7d   |\n", a * b, a + b, a - b);
	return 0;
}