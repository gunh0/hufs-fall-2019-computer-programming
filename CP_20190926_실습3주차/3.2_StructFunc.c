#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student	// ����ü ����
{
	char name[50];
	int age;
};

// �Լ� ������Ÿ�� ����
void display(struct student s);

int main()
{
	struct student s1;
	strcpy(s1.name, "ȫ�浿");	// c�� string.h
	printf("%s\n\n", s1.name);

	printf("Enter name: ");
	scanf("%s", s1.name);
	printf("Enter age: ");
	scanf("%d", &s1.age);	// ����ü ����� �ּ� ����

	display(s1);   // �����ִ� �Լ� ȣ��

	return 0;
}

void display(struct student s)
{
	printf("\nDisplaying information\n");
	printf("Name: %s", s.name);
	printf("\nAge: %d", s.age);
}