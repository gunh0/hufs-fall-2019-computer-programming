#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student s = { 201901123, "ȫ�浿", 4.5 };
	struct student* p;

	p = &s;

	printf("�й�=%d �̸�=%s ����=%.2f\n", s.number, s.name, s.grade);
	printf("�й�=%d �̸�=%s ����=%.2f\n", (*p).number, (*p).name, (*p).grade);
	printf("�й�=%d �̸�=%s ����=%.2f\n", p->number, p->name, p->grade);

	return 0;
}