#include <iostream>
#include <fstream>
#include<bits/stdc++.h>
using namespace std;

class studentDB
{
private:
    int rollno;
    string name;
    string dept;
    double cgpa;

public:
    void display()
    {
        cout << "Name: " << name << "\n";
        cout << "Roll Number: " << rollno << "\n";
        cout << "Department: " << dept << "\n";
        cout << "CGPA: " << cgpa << "\n";
    }

    void getStudentData()
    {
        cout << "Enter the Student data: " << endl;

        cin.ignore();
        cout << "Enter name of the student: ";
        getline(cin, name);
        cout << endl;

        cout << "Enter roll number of the student: ";
        cin >> rollno;
        cout << endl;

        cin.ignore();
        cout << "Enter department: ";
        getline(cin, dept);
        cout << endl;

        cout << "Enter CGPA: ";
        cin >> cgpa;
        cout << endl;
    }

    int getRollNo() { return rollno; }
    string getName() { return name; }
    string getDept() { return dept; }
    double getCgpa() { return cgpa; }

    void setRollNo(int x){rollno = x;}
    void setName(string n){name = n;}
    void setDept(string dep){dept = dep;}
    void setCgpa(double cg){cgpa = cg;}
    
};

void addStudentDataToDB()
{
    studentDB student1;
    student1.getStudentData();
    student1.display();

    fstream studentDbFile;

    studentDbFile.open("StudentDb.txt", ios::app);
    studentDbFile << student1.getRollNo() << "," << student1.getName() << "," << student1.getDept() << "," << student1.getCgpa() << "\n";

    studentDbFile.close();
}

void readFromStudentDB(){
    fstream studentDbFile;
    studentDbFile.open("StudentDb.txt", ios::in);
    if(!studentDbFile){
        cout << "error opening file\n\n";
        return;
    }

    vector<studentDB> studentsCollection;
    
    string line;
    while(!studentDbFile.eof()){
        getline(studentDbFile, line);
        if(line.empty()){
            continue;
        }

        stringstream ss(line);

        studentDB student;
        string rollNo, name, dept, cgpa;

        getline(ss, rollNo, ',');
        getline(ss, name, ',');
        getline(ss, dept, ',');
        getline(ss, cgpa, ',');

        student.setRollNo(stoi(rollNo));
        student.setCgpa(stod(cgpa));
        student.setName(name);
        student.setDept(dept);

        studentsCollection.push_back(student);
    }

    for(int i = 0; i < studentsCollection.size(); i++){
        studentsCollection[i].display();
        cout << endl;
    }

    studentDbFile.close();
}

void menu()
{
    while (1)
    {
        cout << "--------WELCOME TO STUDENT DB--------";
        cout << "\n1. Add Student data." << endl;
        cout << "\n2.View all students." <<endl;
        cout << "\n3. Exit." << endl;
        cout << "\n";

        cout << "Enter Choice: ";
        int choice;
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            addStudentDataToDB();
            break;

        case 2:
            readFromStudentDB();
            break;
        
        case 3:
            exit(0);
            cout << endl;
            break;
        default:
            cout << "Invalid Input!";
            break;
        }
    }
    
}

int main()
{
    menu();
    return 0;
}