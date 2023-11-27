#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class temp{
    string RollNum, Name, ParentName, Address, Search;
    fstream file;
    public :
        void AddStudent();
        void ViewRecord();
        void SearchRecord();
}obj;

void temp :: AddStudent(){
    cout << "Enter Student Roll Number : ";
    getline(cin,RollNum);
    cout << "\nEnter Student Name : ";
    getline(cin,Name);
    cout << "\nEnter Parents Name : ";
    getline(cin,ParentName);
    cout << "\nEnter Student Address : ";
    getline(cin,Address);

    file.open("studentdata.txt", ios :: out | ios :: app);
    file << RollNum << "*";
    file << Name << "*";
    file << ParentName << "*";
    file << Address << "\n";
    file.close();
}

void temp :: ViewRecord(){
    file.open("studentdata.txt", ios :: in);
    getline(file,RollNum,'*');
    getline(file,Name,'*');
    getline(file,ParentName,'*');
    getline(file,Address,'\n');    

    while(!file.eof()){
        printf("\n");
        cout << "Student Roll Number : " << RollNum << endl;
        cout << "Student Name : " << Name << endl;
        cout << "Student Parents Name : " << ParentName << endl;
        cout << "Student Address : " << Address << endl;
        
        getline(file,RollNum,'*');
        getline(file,Name,'*');
        getline(file,ParentName,'*');
        getline(file,Address,'\n');  
    }
    file.close();
}

void temp :: SearchRecord(){
    cout << "Enter Student Roll Number (starts from 000 - 999) : ";
    getline(cin,Search);

    file.open("studentdata.txt", ios :: in);
    getline(file,RollNum,'*');
    getline(file,Name,'*');
    getline(file,ParentName,'*');
    getline(file,Address,'\n');

    while(!file.eof()){
        if(RollNum == Search){
            printf("\n");
            cout << "Student Roll Number : " << RollNum << endl;
            cout << "Student Name : " << Name << endl;
            cout << "Student's Parent Name : " << ParentName << endl;
            cout << "Student Address : " << Address << endl;
        } else {
            cout << "Student Number is not found...!" << endl;
        }
        getline(file,RollNum,'*');
        getline(file,Name,'*');
        getline(file,ParentName,'*');
        getline(file,Address,'\n');
    }
}