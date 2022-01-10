#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

class Unemployed
{
    int index;
    string surname;
    string sex;
    int age;
    int lastWorkExperience;
    int generalExperience;
    int tm_day;
    int tm_month;
    int tm_year;
    double salary;
    bool work;
    vector<string> profession;
    vector<string> education;
    vector<string> workPosition;

public:
    Unemployed()
    {
        index = 0;
        surname = "test";
        sex = "";
        age = 0;
        lastWorkExperience = 0;
        generalExperience = 0;
        tm_day = 0;
        tm_month = 0;
        tm_year = 0;
        salary = 0;
        work = false;
    }

    Unemployed(string sur, string sx, int ag, int day, int month, int year, double money, int lastExp, int genExp, bool job)
    {
        surname = sur;
        sex = sx;
        age = ag;
        tm_day = day;
        tm_month = month;
        tm_year = year;
        salary = money;
        lastWorkExperience = lastExp;
        generalExperience = genExp;
        work = job;
    }

    friend void WritePersons (vector<Unemployed> arr);

    friend class UnemployedQue;
};

