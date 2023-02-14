#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

// управл¤ющие консолью библиотеки
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <algorithm>  

#define MENU_SIZE 3

// основные ключи, которые могут пригодитьс¤

#define KEY_EXIT 27
#define KEY_ENTER 13
#define ARROW_KEY 224
#define KEY_SPACE 0
#define KEY_BACKSPACE 8

#define KEY_ARROW_RIGHT 77
#define KEY_ARROW_LEFT 75

class Game {
    int cards[14];
    int count;
    
    Game() {
        srand(time(0));

        count = 14;

        for (int i = 0; i < count; i += 2) {
            cards[i] = 2 + rand() % (9);
            cards[i + 1] = cards[i];
        }
        for (int i = 0; i < count; i += 1) {
            std::swap(cards[i], cards[rand() % count]);
        }
    }
};


int main() {

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    // отключение мигани¤ курсора в консоли (в нашем меню курсор лишний)
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(hStdOut, &structCursorInfo);
    structCursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hStdOut, &structCursorInfo);

    int choose_pos = 0;                    // переменна¤ дл¤ хранени¤ выбранного пункта меню
    int iKey = 67;                          // переменна¤ дл¤ фиксации нажатой клавиши
    int size = 6;           // флаг на завершение программы

    for (int i = 0; i < size; i++) std::cout << "[   ] ";
    std::cout << std::endl;
    for (int i = 0; i < size; i++)
      if (i == choose_pos) std::cout << "  ^  ";
      else std::cout << "     ";

    iKey = _getch();

    while (iKey != KEY_ENTER) {
        switch (iKey) {
        case KEY_ARROW_LEFT:
            choose_pos--;
            break;
        case KEY_ARROW_RIGHT:
            choose_pos++;
            break;
        }

            // зацикливание перелистывани¤ меню
        if (choose_pos < 0) { choose_pos = size - 1; }
        if (choose_pos > size - 1) { choose_pos = 0; }

        system("cls");

        for (int i = 0; i < size; i++) std::cout << "[   ] ";
        std::cout << std::endl;
        for (int i = 0; i < size; i++)
            if (i == choose_pos) std::cout << "  ^  ";
            else std::cout << "      ";

        // ожидание нового нажати¤ клавиши
        iKey = _getch();
        }
    for (int i = 0; i < size; i++) {
        std::cout << "[   ] ";
    }
    for (int i = 0; i < size; i++)
        if (i == choose_pos) std::cout << "  ^  ";
        else std::cout << "      ";

    return 0;
    }
    