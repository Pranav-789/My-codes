#include<iostream>
using namespace std;

class Student{
private:
    int marks;
    int MIS;
    string name;

public:
    int getmarks(){
        return marks;
    }

    void setMarks(int m){
        marks = m;
    }

    int getMIS(){
        return MIS;
    }

    void setMIS(int m){
        MIS = m;
    }

    string getname(){
        return name;
    }

    void setname(string s){
        name = s;
    }
};

int main(){
    
    Student S1;
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    S1.setMarks(marks);

    string namep;
    cout << "Enter name: ";
    cin >> namep;
    S1.setname(namep);

    int count;
    cout << "Enter MIS: ";
    cin >> count;
    S1.setMIS(count);

    cout << "The Student S1 named " << S1.getname() << " have " << S1.getmarks() << " marks and his MIS is: " << S1.getMIS() << endl;
    return 0;

}