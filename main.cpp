#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <ctime>

#include "./childs/unemployed.h"
#include "./childs/company.h"

// =============

#include "./parents/unemployed_que.h"
#include "./parents/vacancy_que.h"

// =============

#include "./utils/WritePersons.h"

using namespace std;

int main()
{
    // setlocale(LC_ALL, "en_US.UTF-8");
    Unemployed person;
    UnemployedQue que;

    que.createPerson(person);

    vector<Unemployed> unemployedList = que.getUnemployedArr();

    WritePersons(unemployedList);

    que.showPersons();

    return 0;
}