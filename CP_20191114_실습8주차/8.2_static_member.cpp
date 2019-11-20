#include <iostream>

using namespace std;

class Led {
public:
	Led(bool onoff);
	~Led();
	void turnOn();
	void turnOff();
	static int iCount; // ���� ��� ����
	//static int iCount = 0; // ���� �߻�
private:
	bool light;
};

int Led::iCount = 0;
// Ŭ���� �ܺο��� ���� ����ó�� �ʱ�ȭ���Ѿ� �Ѵ�.

Led::Led(bool onoff) { //������
	light = onoff;
	iCount++; // �ν��Ͻ� ���� �� �ϳ� ����
	cout << "LED Count : " << iCount << endl;
}

Led::~Led() { //�Ҹ���
	iCount--; // �ν��Ͻ� �Ҹ� �� �ϳ� ����
	cout << "LED Count : " << iCount << endl;
}

int main()
{
	Led led1(true);
	Led led2(true);
	Led led3(true);
	Led led4(false);
	Led led5(false);

	return 0;
}

