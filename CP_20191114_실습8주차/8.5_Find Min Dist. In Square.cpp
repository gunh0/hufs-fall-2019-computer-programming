#include <iostream>
#include <algorithm>
using namespace std;

int x, y; //�� ��ġ
int w, h; //������ �� ������

int minStepToBoundary(void)
{
	int step = 0;

	//�켱 �� �Ʒ� Ȯ��
	step = min(w - x, x);

	//���� ������ Ȯ��
	step = min(step, min(h - y, y));

	return step;
}


int main(void)
{
	cin >> x >> y >> w >> h;

	cout << minStepToBoundary() << endl;
	return 0;
}