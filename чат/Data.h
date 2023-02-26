#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Password //регистрация и проверка данных пользователя
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
            cout << "Ошибка!" << endl;
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

            //пременные для проверки
            string login_correct;
            string pass_correct;

            //проверка
            cout << "Введите свой логин: "; cin >> login_correct;
            cout << endl;
            cout << "Введите свой пароль: "; cin >> pass_correct;

            if (login_correct != log_cheker && pass_correct != pass_cheker)
            {
                cout << "Пароль или логин введен не правильно!" << endl;
            }
            else
            {
                cout << "Данные введены верно!" << endl;
            }

          
        }
        return 0;
    }

    int Sig_up()
    {
        // сохранение данных в файле
        string login = "login.txt";
        string password = "password.txt";

        fstream log;
        fstream pass;

        //открытие файла с данными
        log.open(login, fstream::in | fstream::out | fstream::app);
        pass.open(password, fstream::in | fstream::out | fstream::app);

        //проверка открытия файла
        if (!log.is_open() && !pass.is_open())
        {
            cout << "Ошибка!" << endl;
        }
        else
        {
            //проводим регистрацию
            string log_cheker;
            string pass_cheker;
            cout << "Введите логин: "; cin >> log_cheker;
            cout << endl;
            cout << "Введите пароль: "; cin >> pass_cheker;

            log << log_cheker;
            pass << pass_cheker;
            cout << "Регистрация прошла успешно!" << endl;

            
        }
        return 0;
    }

};

