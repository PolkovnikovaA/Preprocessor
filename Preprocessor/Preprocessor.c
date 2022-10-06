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
#define ABC(x) abs(x)	//	Модуль
#define AB (SQRT(pow(x2 - x1, 2), pow(y2 - y1, 2)))	//	Нахождение стороны AB
#define BC (SQRT(pow(x3 - x2, 2), pow(y3 - y2, 2)))	//	Нахождение стороны BC
#define AC (SQRT(pow(x3 - x1, 2), pow(y3 - y1, 2)))	//	Нахождение стороны AC
#define Proverka(x1,x2,x3,y1,y2,y3) (x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)	//	Проверка
#define PL (Proverka(x1, x2, x3, y1, y2, y3)) / Division

double Triangle()
{
	double P, p, S;

#if ((x1 == x2) && (x2 == x3))
	{
		printf("Три точки образуют вектор");
	}
#elif ( PL == 0)
	{
		printf("Стороны лежат на одной прямой");
	}
#elif ((y1 == y2) && (y2 == y3))
	{
		printf("Три точки образуют вектор");
	}
#elif ((y1 == y2) && (x1 == x2))
	{
		printf("Три точки образуют вектор");
	}
#elif ((y2 == y3) && (x2 == x3))
	{
		printf("Три точки образуют вектор");
	}
#elif ((y1 == y3) && (x1 == x3))
	{
		printf("Три точки образуют вектор");
	}

#else
	{
		printf("Координаты первой точки: (%d, %d)\n", x1, y1);
		printf("Координаты второй точки: (%d, %d)\n", x2, y2);
		printf("Координаты третьей точки: (%d, %d)\n", x3, y3);

		printf("Длина AB: %.2f\n", AB);
		printf("Длина BC: %.2f\n", BC);
		printf("Длина AC: %.2f\n", AC);

		P = AB + BC + AC;
		printf("Периметр треугольника: %.2f\n", P);

		p = P / Division;
		S = ABC(SQ(x1, x2, x3, y1, y2, y3)) / Division;
		printf("Площадь треугольника: %.2f\n", S);
	}
#endif
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
