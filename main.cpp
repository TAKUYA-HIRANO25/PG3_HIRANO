#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <functional>  
#include "Enemy.h"
#include <iostream>

template <typename T, typename T2>
class TemplateClass
{
public:
	TemplateClass(T number1, T2 number2) : Number(number1), Number2(number2) {}

	T Min() {
		if (Number < Number2) {
			return static_cast<T>(Number);
		}
		else {
			return static_cast<T>(Number2);
		}
	}
private:
	T Number;
	T2 Number2;
};

int main() {

	TemplateClass<int, float>Template(10, 50.0f);
	TemplateClass<int, double>Template2(80, 13.0);
	TemplateClass<float, int>Template3(2.0f, 9);
	TemplateClass<float, double>Template4(11.0f, 3.5);
	TemplateClass<double, int>Template5(666.0, 333);
	TemplateClass<double, float>Template6(435.8, 563.5f);

	printf("intとfoatを比べて小さい方を返す : %d\n", Template.Min());
	printf("intとdoubleを比べて小さい方を返す : %.d\n", Template2.Min());
	printf("floatとintを比べて小さい方を返す : %.2f\n", Template3.Min());
	printf("floatとdoubleを比べて小さい方を返す : %.2f\n", Template4.Min());
	printf("doubleとintを比べて小さい方を返す : %.2f\n", Template5.Min());
	printf("doubleとfloatを比べて小さい方を返す : %.2f\n\n", Template6.Min());

	std::cout << "intとfoatを比べて小さい方を返す : " << Template.Min() << std::endl;
	std::cout << "intとdoubleを比べて小さい方を返す : " << Template2.Min() << std::endl;
	std::cout << "floatとintを比べて小さい方を返す : " << Template3.Min() << std::endl;
	std::cout << "floatとdoubleを比べて小さい方を返す : " << Template4.Min() << std::endl;
	std::cout << "doubleとintを比べて小さい方を返す : " << Template5.Min() << std::endl;
	std::cout << "doubleとfloatを比べて小さい方を返す : " << Template6.Min() << std::endl;

	return 0;
}