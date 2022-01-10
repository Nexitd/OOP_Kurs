#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Company
{
    int index;
    string firmName;
    string vacantPosition;
    double salary;
    string requirements;

public:
    Company()
    {
        index = 0;
        firmName = "test";
        vacantPosition = "test";
        salary = 0;
        requirements = "test";
    }

    Company(string name, string position, double money, string req)
    {
        firmName = name;
        vacantPosition = position;
        salary = money;
        requirements = req;
    }
};

