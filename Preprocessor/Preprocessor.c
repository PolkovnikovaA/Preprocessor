#include "Header.h"
#define A 5
#define B 1
#define Kvadrat(a) (a * a)
#define x1 4
#define x2 -6
#define x3 0
#define y1 2
#define y2 -3
#define y3 8
#define POW(x) pow(x, 2)
#define SQRT(x, y) sqrtf(x + y)
#define Division 2	//	������� �� 2
#define SQ(x1, x2, x3, y1, y2, y3) p * ((p - AB) + (p - BC) + (p - AC))
#define ABC(x) abs(x)
#define AB (SQRT(pow(x2 - x1, 2), pow(y2 - y1, 2)))
#define BC (SQRT(pow(x3 - x2, 2), pow(y3 - y2, 2)))
#define AC (SQRT(pow(x3 - x1, 2), pow(y3 - y1, 2)))

double Triangle()
{
	/*double x1, x2, x3;
	double y1, y2, y3;*/
	double P, p, S;

	printf("���������� ������ �����: (%d, %d)\n", x1, y1);
	printf("���������� ������ �����: (%d, %d)\n", x2, y2);
	printf("���������� ������� �����: (%d, %d)\n", x3, y3);
	/*printf("������� ���������� ������ �����:\n");
	scanf_s("%.2f %.2f", x1, y1);
	printf("������� ���������� ������ �����:\n");
	scanf_s("%.2f %.2f", x2, y2);
	printf("������� ���������� ������ �����:\n");
	scanf_s("%.2f %.2f", x3, y3);*/

	/*a = (SQRT(pow(x2 - x1, 2), pow(y2 - y1, 2)));*/
	/*BC = (SQRT(pow(x3 - x2, 2), pow(y3 - y2, 2)));
	AC = (SQRT(pow(x3 - x1, 2), pow(y3 - y1, 2)));*/

	printf("����� AB: %.2f\n", AB);
	printf("����� BC: %.2f\n", BC);
	printf("����� AC: %.2f\n", AC);

	P = AB + BC + AC;
	printf("�������� ������������: %.2f\n", P);

	p = P / Division;
	S = ABC(SQ(x1, x2, x3, y1, y2, y3)) / Division;
	printf("������� ������������: %.2f\n", S);
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
