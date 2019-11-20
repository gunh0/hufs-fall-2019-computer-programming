#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char myname[], int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);  // strcpy(name, myname) ���� ������ �Լ�
		age = myage;
	}
	Person(const Person& copy) : age(copy.age)
	{
		int len = strlen(copy.name) + 1;
		name = new char[len];
		strcpy_s(name, len, copy.name);  // strcpy(name, copy.name) ���� ������ �Լ�
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main()
{
	Person man1("hong", 20);
	Person man2 = man1;  // ���� ������ ȣ�� (���� ���� ����), Person man2(man1)�� ���� ǥ��
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}