#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define min -10
#define max 10

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int mass[10000], size, deg;

	printf("¬ведите размер массива:");
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++) {
		mass[i] = min + rand() % (max - min) + 1;
		printf("%d ", mass[i]);
	}

	printf("¬ведите степень от 2 до 5");
	scanf_s("%d", &deg);
	for (int i = size; i > -1; i--) {
		if (size % mass[i] == 0) {
			for (int count = 1; count > deg + 1; i++) {

			}
		}
	}



	return 0;
}