#include <iomanip>
#include <iostream>

using namespace std;

void printRam(int RAM[], int size)
{
    cout << "Printing RAM.            ";
    cout << endl;
    // int collum = 1;
    int line = size / 4;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j <= 4 - 1; j++) {
            cout << " Addr: ";
            cout << setfill(' ') << setw(3);
            cout << i * 4 + j;
            cout << ". Value: ";
            cout << setfill(' ') << setw(11);
            cout << RAM[i * 4 + j];
            cout << "|";
        };
        cout << endl;
    };
    cout << "... Ram Printed.\n";
};

void printInstructions(int Instructions[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i += 4) {
        cout << " Addr:";
        cout << setfill(' ') << setw(3);
        cout << i / 4;

        cout << ". OpCode:";
        cout << setfill(' ') << setw(2);
        cout << Instructions[i + 0];

        cout << ". Arg 1:";
        cout << setfill(' ') << setw(3);
        cout << Instructions[i + 1];

        cout << ". Arg 2:";
        cout << setfill(' ') << setw(3);
        cout << Instructions[i + 2];

        cout << ". Result:";
        cout << setfill(' ') << setw(3);
        cout << Instructions[i + 3];
        cout << "|\n";
    };
};