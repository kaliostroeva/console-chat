#include <iostream>
#include <fstream>
#include "Menu.h"
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Menu menu;

    menu.RunMenu();

    system("cls");

    string message;
    while (true) 
    {
        
        cout << "Пользователь:"; cin >> message;
        
    }

    char ch;
    int code;
    ch = _getche();
            code = static_cast<int>(ch);
            if (ch == 27)
                exit(0);

    return 0;
}


 

