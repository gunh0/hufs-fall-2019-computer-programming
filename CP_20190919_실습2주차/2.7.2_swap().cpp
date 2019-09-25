#include <iostream>

using namespace std;

void swapVal(int a, int b)
{
	cout << &a << " " << &b << endl;
	int temp = a;
	a = b;
	b = temp;
}

// ��ȣ ���� & �� "�ּ� ������"�� �ƴ϶�
// "���� ������"�̰� C++������ ����
void swapRef(int& a, int& b) {
	cout << &a << " " << &b << endl;
	int temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int i = 300, j = 500;
	
	cout << "i = " << i << "j = " << j << endl;
	cout << &i << " " << &j << endl;

	swapVal(i, j);
	cout << "i = " << i << "j = " << j << endl;
	
	swapRef(i, j);	// ����(Reference)�� ���� ȣ��
	cout << "i = " << i << "j = " << j << endl;

	return 0;
}