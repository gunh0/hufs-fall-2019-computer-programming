#include <iostream>

using namespace std;

class A {
public:
	int a;
	A& B() {	// ���� Ÿ���� �ڱ��ڽ��� ������
		//return *this;
		// �ڱ� �ڽſ� ���� �����ڸ� ����
	}
};

int main()
{
	int aaa;
	cin >> aaa;

	A a;
	A& b = a.B();
	a.B().a = aaa;	// �̿� ���� ������ ����
	cout << a.a << endl;
	return 0;
}