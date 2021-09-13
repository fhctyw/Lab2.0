// Main.cpp
// ˳������ �����
// ����������� ������ � 2.1
// ������ 13

#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;	// ������� ��������
	double x1;	// ������� ��������
	double y;	//��������� ���������� 1-�� ������
	double y1;  //��������� ���������� 2-�� ������

	std::cout << "������ �������� ����� �����(x): "; std::cin >> x;
	std::cout << "������ �������� ����� �����(x1): "; std::cin >> x1;

	y = (std::sin(x) + std::cos(2 * x1 - x))		//		sin(a) + cos(2b - a)
						/							//		--------------------
		(std::cos(x) - std::sin(2 * x1 - x));		//		cos(a) - sin(2b - a)

	y1 = (1 + std::sin(2 * x1))			//		1 + sin(2b)
				 /						//		-----------
		  std::cos(2 * x1);				//		  cos(2b)

	std::cout << "��������� ������� ������: " << y << std::endl;
	std::cout << "��������� ������� ������: " << y1 << std::endl;
}