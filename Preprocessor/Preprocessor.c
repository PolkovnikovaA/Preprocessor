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
#define Division 2	//	Деление на 2
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

	printf("Координаты первой точки: (%d, %d)\n", x1, y1);
	printf("Координаты второй точки: (%d, %d)\n", x2, y2);
	printf("Координаты третьей точки: (%d, %d)\n", x3, y3);
	/*printf("Введите координаты первой точки:\n");
	scanf_s("%.2f %.2f", x1, y1);
	printf("Введите координаты первой точки:\n");
	scanf_s("%.2f %.2f", x2, y2);
	printf("Введите координаты первой точки:\n");
	scanf_s("%.2f %.2f", x3, y3);*/

	/*a = (SQRT(pow(x2 - x1, 2), pow(y2 - y1, 2)));*/
	/*BC = (SQRT(pow(x3 - x2, 2), pow(y3 - y2, 2)));
	AC = (SQRT(pow(x3 - x1, 2), pow(y3 - y1, 2)));*/

	printf("Длина AB: %.2f\n", AB);
	printf("Длина BC: %.2f\n", BC);
	printf("Длина AC: %.2f\n", AC);

	P = AB + BC + AC;
	printf("Периметр треугольника: %.2f\n", P);

	p = P / Division;
	S = ABC(SQ(x1, x2, x3, y1, y2, y3)) / Division;
	printf("Площадь треугольника: %.2f\n", S);
}

int V()
{
	printf(".................................\n");
	printf("Первое число: %d\n", A);
	printf("Второе число: %d\n", B);
}

int V1()
{
	printf(".................................\n");
	printf("Число: %d\n", A);
	
}

int main()
{
	system("chcp 1251>nul");

	printf("Сумма\n");
	V();
	printf("Результат: %d", Summ(A, B));

	printf("\n\nРазность\n");
	V();
	printf("Результат: %d", Raz(A, B));

	printf("\n\nВозведение в квадрат\n");
	V1();
	printf("Результат: %d", Kvadrat(A));
	printf("\nВозведение в квадрат через макрос: %d", Kvadrat(3));


	printf("\n\nВозведение в куб\n");
	V1();
	printf("Результат: %d", Kyb(A));

	printf("\n\nОбъединение строк\n");
	printf(".................................\n");
	char* aa = "Спокойной ";
	char* bb = "ночи";
	printf("%s\n", associations(aa, bb));


	printf("\n\n\nЗадача на треугольники\n");
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
