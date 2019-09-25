#include <iostream>

using namespace std;

/*
int main()
{
	int input = 0;
	cin >> input;	// 0���� 15������ ������ �Է�

	if (input & 1)    // & �����ڷ� 0001 ��Ʈ�� ���� �ִ��� Ȯ��
		printf("0001 is ON!\n");
	else
		printf("0001 is OFF\n");

	if (input & 2)    // & �����ڷ� 0010 ��Ʈ�� ���� �ִ��� Ȯ��
		printf("0010 is ON!\n");
	else
		printf("0010 is OFF\n");

	if (input & 4)    // & �����ڷ� 0100 ��Ʈ�� ���� �ִ��� Ȯ��
		printf("0100 is ON!\n");
	else
		printf("0100 is OFF\n");

	if (input & 8)    // & �����ڷ� 1000 ��Ʈ�� ���� �ִ��� Ȯ��
		printf("1000 is ON!\n");
	else
		printf("1000 is OFF\n");

	return 0;
}
*/

int main() {	// 3�� �����ڷ� ���̸�?
	int input = 0;
	cin >> input;	// 0���� 15������ ������ �Է�

	cout << "0001 is " << ((input & 1) ? "ON!" : "OFF") << endl;
	cout << "0010 is " << ((input & 2) ? "ON!" : "OFF") << endl;
	cout << "0100 is " << ((input & 4) ? "ON!" : "OFF") << endl;
	cout << "1000 is " << ((input & 8) ? "ON!" : "OFF") << endl;
	return 0;
}

