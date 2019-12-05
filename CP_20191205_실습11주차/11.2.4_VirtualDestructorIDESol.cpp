#include <iostream>
#include <array>

class Abstract
{
public:
	Abstract()
	{
		std::cout << "Abstract()" << std::endl;
	}

	virtual ~Abstract()
	{
		std::cout << "~Abstract()" << std::endl;
	}
};

class Foo : public Abstract
{
public:
	Foo()
	{
		std::cout << "Foo()" << std::endl;
	}
	~Foo()
	{
		std::cout << "~Foo()" << std::endl;
	}
private:
};

class Bar : public Abstract
{
public:
	Bar()
	{
		std::cout << "Bar()" << std::endl;
	}
	~Bar()
	{
		std::cout << "~Bar()" << std::endl;
	}
private:
};

int main()
{

	{ // 1. �������� �Ҹ��� ȣ��� �޸� ���� �߻����� �ʴ´�.
		Foo* p = new Foo();
		delete p;
	}

	std::cout << std::endl;

	{ // 2. ~Foo(); �� ȣ������� ������ �޸� ���� �߻����� �ʴ´�.
		Abstract* p = new Foo();
		delete p;
	}

	std::cout << std::endl;

	{ // 3. �������� �Ҹ��� ȣ��� �޸� ���� �߻����� �ʴ´�.
		Bar* p = new Bar();
		delete p;
	}

	std::cout << std::endl;

	{ // 4. ~Bar(); �� ȣ������� �ʰ�, �޸𸮸��� �߻�!
		Abstract* p = new Bar();
		delete p;
	}

	std::cout << std::endl;

	return 0;
}
