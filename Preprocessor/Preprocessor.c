#include "Header.h"
#define A 5
#define B 1
#define Kvadrat(a) (a*a)

double Triangle()
{
	int x1, x2, x3;
	int y1, y2, y3;

	printf("������� ���������� ������ �����:\n");
	scanf_s("%d %d", &x1, &y1);
	printf("������� ���������� ������ �����:\n");
	scanf_s("%d %d", &x2, &y2);
	printf("������� ���������� ������ �����:\n");
	scanf_s("%d %d", &x3, &y3);


}

int V()
{
	printf(".................................\n");
	printf("������ �����: %d\n", A);
	printf("������ �����: %d\n", B);
}

int V1()
{
	printf(".................................\n");
	printf("�����: %d\n", A);
	
}

int main()
{
	system("chcp 1251>nul");

	printf("�����\n");
	V();
	printf("���������: %d", Summ(A, B));

	printf("\n\n��������\n");
	V();
	printf("���������: %d", Raz(A, B));

	printf("\n\n���������� � �������\n");
	V1();
	printf("���������: %d", Kvadrat(A));
	printf("\n���������� � ������� ����� ������: %d", Kvadrat(3));


	printf("\n\n���������� � ���\n");
	V1();
	printf("���������: %d", Kyb(A));

	printf("\n\n����������� �����\n");
	printf(".................................\n");
	char* aa = "��������� ";
	char* bb = "����";
	printf("%s\n", associations(aa, bb));


	printf("\n\n\n������ �� ������������\n");
	printf(".................................\n");

	Triangle();
	printf("\n");
}

char* associations(char* a, char* b)
{
	int l1 = 0, l2 = 0;
	while (a[l1] != '\0')
	{
		l1++;
	}
	while (a[l2] != '\0')
	{
		l2++;
	}
	char* c = calloc(l1 + l2, sizeof(char));
	for (int i = 0; i < l1; i++) {
		c[i] = a[i];
	}
	for (int i = 0; i < l2; i++) {
		c[i + l1] = b[i];
	}
	c[l1 + l2] = '\0';
	return c;
}
