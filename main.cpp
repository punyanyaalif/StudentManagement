#include <iostream>
#include "temp.h"

using namespace std;

int main(){
    char choice;

    cout << "1. Add Student Record";
    cout << "\n2. View All Student Record";
    cout << "\n3. Search Student Record";
    cout << "\n4. Exit" << endl;;
    cout << "Choose number only : ";

    cin >> choice;

    switch(choice){
        case '1':
            cin.ignore();
            obj.AddStudent();
        break;
        case '2':
            cin.ignore();
            obj.ViewRecord();
        break;
        case '3':
            cin.ignore();
            obj.SearchRecord();
        break;
        case '4':
            return 0;
        break;
        default:
            cout << "Invalid input!";
    }
}