#include <iostream>
#include <Windows.h>	// Sleep();	// ��������� �����ּ���.
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
	std::array<char, 1024 * 1024> _data;	// ���� ����� �����ּ���.
};

class Bar : public Abstract
{
public:
	Bar()
		: _data(std::make_unique<char[]>(1024 * 1024))	// ���� ����� �����ּ���.
	{
		std::cout << "Bar()" << std::endl;
	}
	~Bar()
	{
		std::cout << "~Bar()" << std::endl;
	}
private:
	std::unique_ptr<char[]> _data;	// ���� ����� �����ּ���.
};

int main()
{
	::Sleep(1000);

	{ // 1. �������� �Ҹ��� ȣ��� �޸� ���� �߻����� �ʴ´�.
		Foo* p = new Foo();
		::Sleep(1000);
		delete p;
	}

	std::cout << std::endl;
	::Sleep(1000);

	{ // 2. ~Foo(); �� ȣ������� ������ �޸� ���� �߻����� �ʴ´�.
		Abstract* p = new Foo();
		::Sleep(1000);
		delete p;
	}

	std::cout << std::endl;
	::Sleep(1000);

	{ // 3. �������� �Ҹ��� ȣ��� �޸� ���� �߻����� �ʴ´�.
		Bar* p = new Bar();
		::Sleep(1000);
		delete p;
	}

	std::cout << std::endl;
	::Sleep(1000);

	{ // 4. ~Bar(); �� ȣ������� �ʰ�, �޸𸮸��� �߻�!
		Abstract* p = new Bar();
		::Sleep(1000);
		delete p;
	}

	std::cout << std::endl;
	::Sleep(1000);

	return 0;
}
