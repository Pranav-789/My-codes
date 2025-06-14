#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("example.bin", ios::binary | ios::in | ios::out | ios::trunc);

    // Write some data
    int a = 100, b = 200;
    file.write((char*)&a, sizeof(a));
    file.write((char*)&b, sizeof(b));

    // Go back to beginning for reading
    file.seekg(0, ios::beg);

    // Read first int
    int x;
    file.read((char*)&x, sizeof(x));
    cout << "First number: " << x << endl;

    // Get current read position
    streampos pos = file.tellg();
    cout << "Current read pointer (tellg): " << pos << endl;

    // Move write pointer to beginning
    file.seekp(0, ios::beg);

    int c = 500;
    file.write((char*)&c, sizeof(c));  // Overwrite first number

    // Get current write position
    streampos writePos = file.tellp();
    cout << "Current write pointer (tellp): " << writePos << endl;

    file.close();
    return 0;
}
