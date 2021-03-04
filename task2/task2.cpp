// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float average_salary(int employees, const float *salary) 
{
    float money = 0;
    for (int i = 0; i < employees; i++) {
        money = money + salary[i];
    }
    money = money / employees;
    return money;
}

int main()
{
    
    cout << "Enter total number of employees\n";
    int employees;
    cin >> employees;
    float *salary = new float[employees];
    for (int i = 0; i < employees; i++) {
        cout << "Enter salary of employee :" << i + 1 << "\n";
        cin >> salary[i];
    }
    float average = average_salary(employees, salary);
    cout << "The average salary is: " << average;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
