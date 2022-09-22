#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int x, y, x1;
	float rez;

	printf("Введите два числа через пробел:");
	scanf_s("%d %d", &x, &y);

	if (x > y) {
		if ((x < 10) && (x > -10) && (y < 10) && (y > -10)) {
			rez = x - y;
		}
		else if ((x < -10) && (y < -10)) {
			rez = x * x + y * y;
		}
		else if ((x > 10) && (y > 10)) {
			rez = sqrt(x) + sqrt(y);
		}
		else if (((x = -10) || (x = 10)) && ((y = -10) || (y = 10))) {
		}
		else {
			printf("Нельзя так 0_0\n");
		}
	}
	else {
		x = 1 + rand();
		y = 1 + rand();
		printf("Новые числа: x = %d, y = %d\n", x, y);
		x1 = x;
		x = y;
		y = x1;
		rez = sqrt(abs(x) - abs(y));
	}
	printf("%.2f", rez);
	return 0;
}

