#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;//������� ������������
	cin >> a >> b >> c;//���������� ������ ������������
	//������������� �������� �� ��������� ��� ����������� ���� ������������
	if (c * c < a * a + b * b)
		cout << "����������� �������������";
	if (c * c > a * a + b * b)
		cout << "����������� ������������";
	if (c * c == a * a + b * b)
		cout << "����������� �������������";
	return 0;
}