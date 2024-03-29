#include <iostream>

using namespace std;

class super
{
public:
	void print()
	{
		cout << "내가 조상이다." << endl;
		printf("%p\n", &super::print);
	}
};

class parent : public super
{
public:
	void print()
	{
		cout << "내가 부모다." << endl;
		printf("%p\n", &parent::print);
	}
};

class child : public parent
{
public:
	void print()
	{
		cout << "내가 자식이다." << endl;
		printf("%p\n", &child::print);
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

