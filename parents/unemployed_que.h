#pragma once

#include <iostream>
#include <fstream>
#include <vector>

#include "../childs/unemployed.h"

using namespace std;

class UnemployedQue
{
    vector<Unemployed> unemployedArr;

public:
    void showPersons()
    {
        ifstream inf;

        inf.open("./Unemployed.txt", ios::binary | ios::app);

        if (!inf)
        {
            cerr << "Uh oh, Unemployed.txt could not be opened for reading!" << endl;
            exit(1);
        }

        while (inf)
        {
            string strInput;
            inf >> strInput;
            cout << strInput << endl;
        }

        inf.close();
    }

    vector<Unemployed> getUnemployedArr()
    {
        return unemployedArr;
    }

    void createPerson(Unemployed &person)
    {
        int countOfPersons;
        string wP;

        cout << "Введите количество создаваемых объектов... \t";
        cin >> countOfPersons;

        for (int i = 0; i < countOfPersons; i++)
        {
            person.index = i;
            cout << "id пользователя \t" << person.index << endl;
            cout << "Введите фамилию: \t" << endl;
            cin >> person.surname;
            cout << "Введите пол: \t" << endl;
            cin >> person.sex;
            cout << "Введите возраст: \t" << endl;
            cin >> person.age;
            cout << "Введите стаж работы в последней занимаемой должности: \t" << endl;
            cin >> person.lastWorkExperience;
            cout << "Введите общий общий стаж: \t" << endl;
            cin >> person.generalExperience;
            cout << "Введите дату постановки на учет (день): \t" << endl;
            cin >> person.tm_day;
            cout << "Введите дату постановки на учет (месяц): \t" << endl;
            cin >> person.tm_month;
            cout << "Введите дату постановки на учет (год): \t" << endl;
            cin >> person.tm_year;
            cout << "Введите желаемую зарплату: \t" << endl;
            cin >> person.salary;
            cout << "Введите должность: \t" << endl;
            cin >> wP;
            person.workPosition.push_back(wP);

            unemployedArr.push_back(person);
        }
    }
};
