#include <iostream>

void incrementAndPrint()
{
	int value = 1; // �⺻������ '�ڵ� ���� �ֱ�'
	++value;
	std::cout << value << '\n';
} // value�� ���⼭ �Ҹ�ȴ�.

int main()
{
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();

	return 0;
}

