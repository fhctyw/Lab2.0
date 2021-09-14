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


	std::cout << "������ �������� ����� �����(x): "; std::cin >> x, x1;
	std::cout << "������ �������� ����� �����(x1): "; std::cin >> x1;


	//		sin(a) + cos(2b - a)
	//		--------------------
	//		cos(a) - sin(2b - a)
	y = (std::sin (x) + std::cos(2 * x1 - x))		
						/							
		(std::cos(x) - std::sin(2 * x1 - x));		

	//		1 + sin(2b)
	//		-----------
	//		  cos(2b)
	y1 = (1 + std::sin(2 * x1))			
				 /						
		  std::cos(2 * x1);				
	
	std::cout << "��������� ������� ������: " << y << std::endl;
	std::cout << "��������� ������� ������: " << y1 << std::endl;

}