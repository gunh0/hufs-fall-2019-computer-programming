#include <iostream>

void incrementAndPrint()
{
	static int s_value = 1; // 'static' Ű���带 ����� '���� ���� �ֱ�', �� ���� �ѹ��� ����ȴ�.
	++s_value;
	std::cout << s_value << '\n';
} // s_value�� ���⼭ �Ҹ���� ������, ������ �� ���Եȴ�.

int main()
{
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();

	return 0;
}

/*
�� ���α׷����� s_value�� static���� ����Ǿ��� ������ s_value�� �� ���� �����ǰ� 1�� �ʱ�ȭ�ȴ�.
������(= ����)�� ����� �Ҹ����� �ʴ´�.
incrementAndPrint() �Լ��� ȣ��� ������ s_value ���� ������ ���ܵ� ���̴�.
g_�� ����Ͽ� ���� ������ ���ξ �����ϴ� ��ó�� s_�� ����Ͽ� ���� ������ ���λ縦 �����ϴ� ���� �Ϲ����̴�.
*/