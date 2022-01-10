#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

// ==========

#include "../childs/unemployed.h"

using namespace std;

void WritePersons(vector<Unemployed> arr)
{
    ofstream outf;

    outf.open("./Unemployed.txt", ios::binary | ios::app);

    if (!outf)
    {
        cerr << "Uh oh, Unemployed.txt could not be opened for writing!" << endl;
        return;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        Unemployed arg = arr[i];

        outf << arg.index << endl;
        outf << arg.surname << endl;
        outf << arg.sex << endl;
        outf << arg.age << endl;
        outf << arg.lastWorkExperience << endl;
        outf << arg.generalExperience << endl;
        outf << arg.tm_day << endl;
        outf << arg.tm_month << endl;
        outf << arg.tm_year << endl;
        outf << arg.salary << "₽" << endl;

        for (int j = 0; j < arg.workPosition.size(); j++)
        {
            outf << arg.workPosition[i] << endl;
        }

        outf << "========================" << endl;
    }

    outf.close();
}
