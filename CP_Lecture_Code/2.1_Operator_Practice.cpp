#include <iostream>

using namespace std;

int main()
{
	int input1 = 0, input2 = 0;
	cin >> input1 >> input2;

	cout << "�� ���� AND���� ��� : " << (input1 & input2) << endl;
	cout << "�� ���� OR���� ��� : " << (input1 | input2) << endl;
	cout << "�� ���� XOR���� ��� : " << (input1 ^ input2) << endl;

	return 0;
}

