#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

#include <windows.h>
#include <conio.h>

#define MENU_SIZE 3

#define KEY_EXIT 27
#define KEY_ENTER 13
#define ARROW_KEY 224
#define KEY_SPACE 0
#define KEY_BACKSPACE 8

#define KEY_ARROW_RIGHT 77
#define KEY_ARROW_LEFT 75
#define KEY_ARROW_UP 72
#define KEY_ARROW_DOWN 80

void BubbleSort(int* mass, int size, int* count_swap, int* count_comp) {
    *count_comp = 0;
    *count_swap = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            count_comp++;
            if (mass[i] = mass[j]) {
                int tmp = mass[i];
                mass[]
            }
        }
    }


}

int main() {

    system("title MassiveWorker(Matrix edition)");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(hStdOut, &structCursorInfo);
    structCursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hStdOut, &structCursorInfo);

    SetConsoleTextAttribute(hStdOut, 2);

    system("cls");

    int choose_pos;
    int iKey;
    int exit_flag;
    int back_flag, back_flag1;
    COORD cursorPos;

    char* menu[MENU_SIZE] = { "Алгоритмы", "Настройки", "Выход" };
    char* settings[MENU_SIZE] = { "Задать массив", "Посмотреть текущий массив", "Назад" };
    char* algor[MENU_SIZE] = { "Поиск", "Сортировки", "Назад" };
    char* search[MENU_SIZE] = { "Наивный поиск", "Бинарный поиск", "Назад" };
    char* sort[MENU_SIZE - 1] = { "Пузырьковая сортировка", "Назад" };

    back_flag1 = 0;
    exit_flag = 0;
    choose_pos = 0;

    while (!exit_flag) {

        back_flag = 0;

        system("cls");
        iKey = 67;
        cursorPos = (COORD){ 0, 0 };
        SetConsoleCursorPosition(hStdOut, cursorPos);

        while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
            switch (iKey) {
            case KEY_ARROW_UP:
                choose_pos--;
                break;
            case KEY_ARROW_DOWN:
                choose_pos++;
                break;
            }

            system("cls");

            if (choose_pos < 0) { choose_pos = MENU_SIZE - 1; }
            if (choose_pos > MENU_SIZE - 1) { choose_pos = 0; }

            for (int i = 0; i < MENU_SIZE; i++) {
                cursorPos = (COORD){ 3, i };
                SetConsoleCursorPosition(hStdOut, cursorPos);
                printf("%s \n", menu[i]);
            }

            cursorPos = (COORD){ 0, choose_pos };
            SetConsoleCursorPosition(hStdOut, cursorPos);
            printf("<<", iKey);
            cursorPos = (COORD){ strlen(menu[choose_pos]) + 3 + 1, choose_pos };
            SetConsoleCursorPosition(hStdOut, cursorPos);
            printf(">>");

            iKey = _getch();
        }

        switch (choose_pos) {
        case 0:

            while (!back_flag) {

                back_flag1 = 0;

                system("cls");
                iKey = 67;
                cursorPos = (COORD){ 0, 0 };
                SetConsoleCursorPosition(hStdOut, cursorPos);

                while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
                    switch (iKey) {
                    case KEY_ARROW_UP:
                        choose_pos--;
                        break;
                    case KEY_ARROW_DOWN:
                        choose_pos++;
                        break;
                    }

                    system("cls");

                    if (choose_pos < 0) { choose_pos = MENU_SIZE - 1; }
                    if (choose_pos > MENU_SIZE - 1) { choose_pos = 0; }

                    for (int i = 0; i < MENU_SIZE; i++) {
                        cursorPos = (COORD){ 3, i };
                        SetConsoleCursorPosition(hStdOut, cursorPos);
                        printf("%s \n", algor[i]);
                    }

                    cursorPos = (COORD){ 0, choose_pos };
                    SetConsoleCursorPosition(hStdOut, cursorPos);
                    printf("<<", iKey);
                    cursorPos = (COORD){ strlen(algor[choose_pos]) + 3 + 1, choose_pos };
                    SetConsoleCursorPosition(hStdOut, cursorPos);
                    printf(">>");

                    iKey = _getch();
                }

                switch (choose_pos) {
                case 0:
                    while (!back_flag1) {

                        system("cls");
                        iKey = 67;
                        cursorPos = (COORD){ 0, 0 };
                        SetConsoleCursorPosition(hStdOut, cursorPos);

                        while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
                            switch (iKey) {
                            case KEY_ARROW_UP:
                                choose_pos--;
                                break;
                            case KEY_ARROW_DOWN:
                                choose_pos++;
                                break;
                            }

                            system("cls");

                            if (choose_pos < 0) { choose_pos = MENU_SIZE - 1; }
                            if (choose_pos > MENU_SIZE - 1) { choose_pos = 0; }

                            for (int i = 0; i < MENU_SIZE; i++) {
                                cursorPos = (COORD){ 3, i };
                                SetConsoleCursorPosition(hStdOut, cursorPos);
                                printf("%s \n", search[i]);
                            }

                            cursorPos = (COORD){ 0, choose_pos };
                            SetConsoleCursorPosition(hStdOut, cursorPos);
                            printf("<<", iKey);
                            cursorPos = (COORD){ strlen(search[choose_pos]) + 3 + 1, choose_pos };
                            SetConsoleCursorPosition(hStdOut, cursorPos);
                            printf(">>");

                            iKey = _getch();
                        }

                        switch (choose_pos) {
                        case 0:
                            system("cls");
                            printf("nothing\n");
                            system("pause");
                            break;
                        case 1:
                            system("cls");
                            printf("nothing\n");
                            system("pause");
                            break;
                        case 2:
                            back_flag1 = 1;
                            break;
                        }
                    }
                    break;
                case 1:
                    while (!back_flag1) {

                        system("cls");
                        iKey = 67;
                        cursorPos = (COORD){ 0, 0 };
                        SetConsoleCursorPosition(hStdOut, cursorPos);

                        while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
                            switch (iKey) {
                            case KEY_ARROW_UP:
                                choose_pos--;
                                break;
                            case KEY_ARROW_DOWN:
                                choose_pos++;
                                break;
                            }

                            system("cls");

                            if (choose_pos < 0) { choose_pos = MENU_SIZE -2; }
                            if (choose_pos > MENU_SIZE - 2) { choose_pos = 0; }

                            for (int i = 0; i < MENU_SIZE - 1; i++) {
                                cursorPos = (COORD){ 3, i };
                                SetConsoleCursorPosition(hStdOut, cursorPos);
                                printf("%s \n", sort[i]);
                            }

                            cursorPos = (COORD){ 0, choose_pos };
                            SetConsoleCursorPosition(hStdOut, cursorPos);
                            printf("<<", iKey);
                            cursorPos = (COORD){ strlen(sort[choose_pos]) + 3 + 1, choose_pos };
                            SetConsoleCursorPosition(hStdOut, cursorPos);
                            printf(">>");

                            iKey = _getch();
                        }

                        switch (choose_pos) {
                        case 0:
                            system("cls");
                            printf("nothing\n");
                            system("pause");
                            break;
                        case 1:
                            back_flag1 = 1;
                            break;
                        }
                    }
                    break;
                case 2:
                    back_flag = 1;
                    break;
                }
            }
            break;
        case 1:
            while (!back_flag) {

                back_flag = 0;

                system("cls");
                iKey = 67;
                cursorPos = (COORD){ 0, 0 };
                SetConsoleCursorPosition(hStdOut, cursorPos);

                while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
                    switch (iKey) {
                    case KEY_ARROW_UP:
                        choose_pos--;
                        break;
                    case KEY_ARROW_DOWN:
                        choose_pos++;
                        break;
                    }

                    system("cls");

                    if (choose_pos < 0) { choose_pos = MENU_SIZE - 1; }
                    if (choose_pos > MENU_SIZE - 1) { choose_pos = 0; }

                    for (int i = 0; i < MENU_SIZE; i++) {
                        cursorPos = (COORD){ 3, i };
                        SetConsoleCursorPosition(hStdOut, cursorPos);
                        printf("%s \n", settings[i]);
                    }

                    cursorPos = (COORD){ 0, choose_pos };
                    SetConsoleCursorPosition(hStdOut, cursorPos);
                    printf("<<", iKey);
                    cursorPos = (COORD){ strlen(settings[choose_pos]) + 3 + 1, choose_pos };
                    SetConsoleCursorPosition(hStdOut, cursorPos);
                    printf(">>");

                    iKey = _getch();
                }

                switch (choose_pos) {
                case 0:
                    system("cls");
                    
                    system("pause");
                    break;
                case 1:
                    system("cls");
                    printf("nothing\n");
                    system("pause");
                    break;
                case 2:
                    back_flag = 1;
                    break;
                }
            }
            break;
        case 2:
            exit_flag = 1;
            break;
            }
        }

        system("cls");
        printf("Goodbay!\n");

        system("pause");
        return 0;

























    }