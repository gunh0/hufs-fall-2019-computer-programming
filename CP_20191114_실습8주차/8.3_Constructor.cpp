#include <iostream>

using namespace std;

class AAA
{
public:
	AAA() {
		cout << "AAA() ȣ��" << endl;
	}
	AAA(int i) {
		cout << "AAA(int i) ȣ��" << endl;
	}
	AAA(const AAA& a) {
		cout << "AAA(const AAA& a) ȣ��" << endl;
	}
};

int main()
{
	AAA obj1;
	AAA obj2(10);
	AAA obj3(obj2);

	return 0;
}