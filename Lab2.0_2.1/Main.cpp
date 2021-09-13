// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 2.1
// Варіант 13

#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;	// вхідний параметр
	double x1;	// вхідний параметр
	double y;	//результат обчислення 1-го виразу
	double y1;  //результат обчислення 2-го виразу

	std::cout << "Введіть значення першої змінної(x): "; std::cin >> x;
	std::cout << "Введіть значення другої змінної(x1): "; std::cin >> x1;

	y = (std::sin(x) + std::cos(2 * x1 - x))		//		sin(a) + cos(2b - a)
						/							//		--------------------
		(std::cos(x) - std::sin(2 * x1 - x));		//		cos(a) - sin(2b - a)

	y1 = (1 + std::sin(2 * x1))			//		1 + sin(2b)
				 /						//		-----------
		  std::cos(2 * x1);				//		  cos(2b)

	std::cout << "Результат першого виразу: " << y << std::endl;
	std::cout << "Результат другого виразу: " << y1 << std::endl;
}