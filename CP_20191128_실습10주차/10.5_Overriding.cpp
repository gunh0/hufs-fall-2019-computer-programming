#include <iostream>
using namespace std;

class Person
{
protected:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// ���� Ŭ���� �������� ���� 
	void ShowPersonInfo();
};

Person::Person(const string& name, int age)	// ���� Ŭ���� �������� ���� 
{
	name_ = name;
	age_ = age;
}

void Person::ShowPersonInfo()
{
	cout << "�̸��� " << name_ << "�̰�, ���̴� " << age_ << "���Դϴ�." << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Student : public Person
{
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age);	// �Ļ� Ŭ���� �������� ����
	void ShowPersonInfo();
};

Student::Student(int sid, const string& name, int age) : Person(name, age)	// �Ļ� Ŭ���� �������� ���� 
{
	student_id_ = sid;
}

void Student::ShowPersonInfo()
{
	cout << name_ <<" �л��� �й��� " << student_id_ << "�Դϴ�." << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Professor : public Person
{
private:
	int professor_id_;
	string major;
public:
	Professor(int pid, string m, const string& name, int age);	// �Ļ� Ŭ���� �������� ����
	void ShowPersonInfo();
};

Professor::Professor(int pid, string m, const string& name, int age) : Person(name, age)	// �Ļ� Ŭ���� �������� ���� 
{
	professor_id_ = pid;
	major = m;
}

void Professor::ShowPersonInfo()
{
	cout << "�������� �̸��� " << name_ << ", ������ " << major << "�Դϴ�." << endl;
}

int main(void)
{
	Person lee("�̼���", 25);
	lee.ShowPersonInfo();
	Student hong(123456789, "ȫ�浿", 20);
	hong.ShowPersonInfo();
	Professor kim(123456777, "��ǻ�����ڽý��۰��к�", "��浿", 50);
	kim.ShowPersonInfo();

	return 0;
}