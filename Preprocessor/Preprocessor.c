#include "Header.h"
#define A 5
#define B 1
#define Kvadrat(a) (a*a)

double Triangle()
{
	int x1, x2, x3;
	int y1, y2, y3;

	printf("Введите координаты первой точки:\n");
	scanf_s("%d %d", &x1, &y1);
	printf("Введите координаты первой точки:\n");
	scanf_s("%d %d", &x2, &y2);
	printf("Введите координаты первой точки:\n");
	scanf_s("%d %d", &x3, &y3);


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
