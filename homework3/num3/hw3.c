#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	int summ = 0;
	int numb = -1;

	while (numb != 0) {
		scanf_s("%d", &numb);
		if (numb > 0) {
			summ += numb;
		}
	}
	printf("Сумма положит. чисел: %d\n", summ);
	system("pause");

	return 0;
}