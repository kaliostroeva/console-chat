#pragma once
#include <iostream>
#include <fstream>
#include "Data.h"
using namespace std;

class Menu
{
public:

    int RunMenu()
    {
        int punkt;
        cout << "����� ����������!" << endl;
        cout << "1.����" << endl;
        cout << "2.�����������" << endl;
        cin >> punkt;

        if (punkt != 1 && punkt != 2)
        {
            cout << "������ �������� ����� ����!" << endl;
        }
        if (punkt == 1)
        {
            system("cls");
            Password pass;
            pass.Register();
        }
        if (punkt == 2)
        {
            system("cls");
            Password pass;
            pass.Sig_up();
        }
        return 0;
    }
};

