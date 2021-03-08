// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap_sort_ptr_addr(int** a, int** b, int** c, bool sort)
{
    if (sort == true) {
        if (**a < **b && **a < **c) {
            cout << **a << ", ";
            if (**b < **c) {
                cout << **b << ", ";
                cout << **c << "\n";
            }
            else if (**c < **b) {
                cout << **c << ", ";
                cout << **b << "\n";
            }
        }

        else if (**b < **a && **b < **c) {
            cout << **b << ", ";
            if (**a < **c) {
                cout << **a << ", ";
                cout << **c << "\n";
            }
            else if (**c < **a) {
                cout << **c << ", ";
                cout << **a << "\n";
            }
        }

        else if (**c < **a && **c < **b) {
            cout << **c << ", ";
            if (**a < **b) {
                cout << **a << ", ";
                cout << **b << "\n";
            }
            else if (**b < **a) {
                cout << **b << ", ";
                cout << **a << "\n";
            }
        }
    }

    if (sort == false) {
        if (**a > **b && **a > **c) {
            cout << **a << ", ";
            if (**b > **c) {
                cout << **b << ", ";
                cout << **c << "\n";
            }
            else if (**c > **b) {
                cout << **c << ", ";
                cout << **b << "\n";
            }
        }

        else if (**b > **a && **b > **c) {
            cout << **b << ", ";
            if (**a > **c) {
                cout << **a << ", ";
                cout << **c << "\n";
            }
            else if (**c > **a) {
                cout << **c << ", ";
                cout << **a << "\n";
            }
        }

        else if (**c > **a && **c > **b) {
            cout << **c << ", ";
            if (**a > **b) {
                cout << **a << ", ";
                cout << **b << "\n";
            }
            else if (**b > **a) {
                cout << **b << ", ";
                cout << **a << "\n";
            }
        }
    }
}

int main()
{
    int a = 7, b = 6, c = 1;
    int* p1 = &a, * p2 = &b, * p3 = &c;
    swap_sort_ptr_addr(&p1, &p2, &p3, true);
    cout << *p1 << " " << *p2 << " " << *p3;
    system("pause");
    return 0;
}