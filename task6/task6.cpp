// task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

void initialise(vector<string> *p) {
    int sure;
    cout << "are you sure? yes/no (1/0)\n";
    cin >> sure;
    if (sure == 1) {
        (*p).clear();
        return;
    }
    else if (sure == 0) {
        return;
    }
}

void insert(vector<string> *p) {
    while (true) {
        cout << "give q or Q to stop the loop, insert name:";
        string x;
        cin >> x;
        if (x == "q" || x == "Q") {
            return;
        }
        else {
            p->insert(p->begin(), x);
            cout << "succsefully added\n";
        }
    }
}

bool search(const vector<string>* p)
{
    bool check = true;
    string search;
    cout << "search: ";
    cin >> search;
    int len = search.length();
    for (int b = 0; b < p->size(); b++) {
        for (int k = 0; k < len; k++) {
            check = true;
            if (search[k] == ((*p)[b])[k]) {//hm

            }
            else {
                check = false;
            }
        }
        if (check == true) {
            cout << (*p)[b] << "\n";//hm
        }
        else {

        }
    }
    return check;
}

bool deleting(vector<string>* p)
{
    bool check = true;
    string del;
    cin >> del;
    for (int z = 0; z < p->size(); z++) {
        if ((*p)[z] == del) {//hmm
            p->erase(p->begin() + z);
        }
        else {
            check = false;
        }
    }
    return check;
}

void print(const vector<string>* p)
{
    for (int t = 0; t < p->size(); t++) {
        cout << (*p)[t] << "\n";//hmm
    }
    return;
}

void save(vector<string>* p)
{
    string fileName;
    cout << "input file name to save to:\n";
    cin >> fileName;
    fileName = fileName + ".txt";

    ofstream file;

    file.open (fileName);

    for (int i = 0; i < (*p).size();i++){
        file << (*p)[i] << "\n";
    }

    file.close();
    return;
}

bool load(vector<string>* p)
{
    bool check = true;
    (*p).clear();

    ifstream file;

    string data;
    string fileName;
    cout << "input file name to load\n";
    cin >> fileName;
    fileName = fileName + ".txt";

    file.open(fileName);
    getline(file, data);
    if (data == "") {
        check = false;
        return check;
    }

    file.clear();
    file.seekg(0);
    while (getline(file, data)) {
        p->insert(p->end(), data);
    }
    file.close();
    cout << endl;
    return check;
}


int vectorBaseStart()
{
    int sure;
    vector<string> name = {};
    vector<string>* p = &name;

    while (true) {
        int choice = 0;
        cout << "Menu:\n1.initialise database\n2.insert\n3.search\n4.delete\n5.print\n6.save\n7.load\n8.quit\nMake your choice(enter number): \n";
        cin >> choice;
        if (choice == 0 || choice > 8 || choice < 0) {
            cout << "not a valid choice\n";
        }
        else if (choice == 1) {
            initialise(p);
        }

        else if (choice == 2) {
            insert(p);
        }

        else if (choice == 3) {
            bool searchSuccses = search(p);
            if (searchSuccses == true) {
                cout << "succsesfully found name\n";
            }
            else {
                cout << "name does not exist in list\n";
            }
        }

        else if (choice == 4) {
            bool deleteSuccses = deleting(p);
            if (deleteSuccses == true) {
                cout << "succsesfully deleted\n";
            }
            else {
                cout << "name does not exist in list\n";
            }
        }

        else if (choice == 5) {
            print(p);
        }

        else if (choice == 6) {
            save(p);
            cout << "succsesfully saved\n";
        }

        else if (choice == 7) {
            bool loadSuccses = load(p);
            if (loadSuccses == true) {
                cout << "succsesfully loaded\n";
            }
            else {
                cout << "did not load selected file/does not exist/has no data\n";
            }
        }

        else if (choice == 8) {
            break;
        }
    }
    return 0;
}

int main()
{

    vectorBaseStart();

    system("pause");
    return 0;
}

