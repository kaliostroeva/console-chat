#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Password //����������� � �������� ������ ������������
{
public:

    int Register()
    {
        string login = "login.txt";
        string password = "password.txt";

        fstream log;
        fstream pass;

        log.open(login, fstream::in | fstream::out | fstream::app);
        pass.open(password, fstream::in | fstream::out | fstream::app);

        if (!log.is_open() && !pass.is_open())
        {
            cout << "������!" << endl;
        }
        else
        {
            string log_cheker;
            string pass_cheker;

            while (!log.eof()) 
            {
                log_cheker = "";
                log >> log_cheker; 
            }
            while (!pass.eof()) 
            {
                pass_cheker = "";
                pass >> pass_cheker; 
            }

            //��������� ��� ��������
            string login_correct;
            string pass_correct;

            //��������
            cout << "������� ���� �����: "; cin >> login_correct;
            cout << endl;
            cout << "������� ���� ������: "; cin >> pass_correct;

            if (login_correct != log_cheker && pass_correct != pass_cheker)
            {
                cout << "������ ��� ����� ������ �� ���������!" << endl;
            }
            else
            {
                cout << "������ ������� �����!" << endl;
            }

          
        }
        return 0;
    }

    int Sig_up()
    {
        // ���������� ������ � �����
        string login = "login.txt";
        string password = "password.txt";

        fstream log;
        fstream pass;

        //�������� ����� � �������
        log.open(login, fstream::in | fstream::out | fstream::app);
        pass.open(password, fstream::in | fstream::out | fstream::app);

        //�������� �������� �����
        if (!log.is_open() && !pass.is_open())
        {
            cout << "������!" << endl;
        }
        else
        {
            //�������� �����������
            string log_cheker;
            string pass_cheker;
            cout << "������� �����: "; cin >> log_cheker;
            cout << endl;
            cout << "������� ������: "; cin >> pass_cheker;

            log << log_cheker;
            pass << pass_cheker;
            cout << "����������� ������ �������!" << endl;

            
        }
        return 0;
    }

};

