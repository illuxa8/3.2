// Lab_03_2.cpp
// ��������� ����
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 15
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a; //������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double x; // ������� ��������
	double F; // ��������� ���������
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "x = ";
	cin >> x;
	// ����� 1: ������������ � ��������� ����
	if (x < 0 && b != 0)
		F = -a * pow(x, 2) + b;
	if (x > 0 && b == 0)
		F = (x / (x - c)) + 5.5;
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0)) 
		F = x / (-c);
	cout << "F =" << F << endl;
	// ����� 2: ������������ � ����� ����
	if (x < 0 && b != 0)
		F = -a * pow(x, 2) + b;
	else 
		if(x > 0 && b == 0)
			 F = (x / (x - c)) + 5.5;
		else
			F = x / (-c);
	cout << "F = " << F << endl;

}