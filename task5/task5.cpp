// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void replace_chars(char *str, char search, char replace)
{
    for (int i = 0; i < 7; i++) {
        if (*(str + i) == search) {
            *(str + i) = replace;
        }
    }
}

int main()
{
    char str[] = "coconut";
    char replace = 'b';
    char search = 'c';


    cout << str;
    replace_chars(str, search, replace);

    cout << "\n";
    cout << str;
    
}

