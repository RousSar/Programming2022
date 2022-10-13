#include <stdio.h>
#include <malloc.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int size = 0, choice, choice1, Flag = 1, obrez;
	char* str;
	char* cstr;
	str = (char*)malloc(sizeof(char) * 100);
	cstr = (char*)malloc(sizeof(char) * 100);

	printf("Введите строку: ");
	gets(str);
	system("cls");


	printf("Выберете действия над строкой:\n");
	printf("1) заменить строку\n");
	printf("2) обрезать строку\n");
	printf("3) развернуть строку\n");
	printf("4) сменить регистр\n");
	printf("0) выход\n");

	
	while (Flag) {
		scanf_s("%d", &choice);
		if (choice == 1) {

		}
		else if (choice == 2) {
			cstr = str;
			printf("Ваш выбор: 2\n");
			printf("Введите значение:");
			scanf_s("%d", &obrez);
			printf("Результат: ");
			cstr[obrez] = '\0';
			puts(cstr);
		}
		else if (choice == 3) {

		}
		else if (choice == 4) {

		}
		else if (choice == 0) {
			system("cls");
		}



	}


	free(str);
	return 0;
}