#include <iostream>

using namespace std;

class super
{
public:
	virtual void print()
	{
		cout << "���� �����̴�." << endl;
		printf("%p\n", &super::print);
	}
};

class parent : public super
{
public:
	virtual void print()
	{
		cout << "���� �θ��." << endl;
		printf("%p\n", &super::print);
	}
};

class child : public parent
{
public:
	virtual void print()
	{
		cout << "���� �ڽ��̴�." << endl;
		printf("%p\n", &super::print);
	}
};

int main()
{
	super* superPointer = new super;
	parent* parentPointer = new parent;
	child* childPointer = new child;

	superPointer->print();

	superPointer = parentPointer;
	superPointer->print();

	superPointer = childPointer;
	superPointer->print();

	return 0;
}

