#include "gojek.h"
#include <iostream>

using namespace std;

int main()
{
    char option;
    option = mainMenu();

    while (option != '5') {
        option = mainMenu();
    }
    return 0;
}
