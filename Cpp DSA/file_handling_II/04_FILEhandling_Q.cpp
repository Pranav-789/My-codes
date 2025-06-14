#include <iostream>
#include <fstream>
using namespace std;

class student {
private:
    int mark;
    char name[20];

public:
    void getdata();
    void showdata();
};

void student::getdata() {
    cin.ignore();
    cout << "\nEnter Name of student: ";
    cin.getline(name, 20);
    cout << "Enter Marks: ";
    cin >> mark;
}

void student::showdata() {
    cout << "\nName: " << name;
    cout << "\nMarks: " << mark << endl;
}

int main() {
    student ob;
    fstream fout;
    fout.open("student.dat", ios::out); // ✅ open in binary mode
    char flag;

    do {
        ob.getdata();
        fout.write((char*)&ob, sizeof(ob));
        cout << "\nContinue? y/n: ";
        cin >> flag;
    } while (flag == 'Y' || flag == 'y');
    fout.close();

    // Reading
    fstream in;
    in.open("student.dat", ios::in); // ✅ open in binary mode

    cout << "\nData read from file:\n";
    while (in.read((char*)&ob, sizeof(ob))) {
        ob.showdata();
    }
    in.close();

    return 0;
}
