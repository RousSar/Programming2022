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

	printf("������� ������: ");
	gets(str);
	system("cls");


	printf("�������� �������� ��� �������:\n");
	printf("1) �������� ������\n");
	printf("2) �������� ������\n");
	printf("3) ���������� ������\n");
	printf("4) ������� �������\n");
	printf("0) �����\n");

	
	while (Flag) {
		scanf_s("%d", &choice);
		if (choice == 1) {

		}
		else if (choice == 2) {
			cstr = str;
			printf("��� �����: 2\n");
			printf("������� ��������:");
			scanf_s("%d", &obrez);
			printf("���������: ");
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