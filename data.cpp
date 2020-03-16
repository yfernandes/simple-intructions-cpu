#include <iostream>

using namespace std;

// Data Initialization
void randomData(int RAM[], int RamSize)
{
    cout << "Assiging Random Data.    ";
    // UNComment folowing line to create truly random data
    srand(time(0));

    for (int i = 0; i < RamSize; i++) {
        RAM[i] = rand() % 1000;
    };
    cout << "... Data Assigned!\n";
};

void nullData(int RAM[], int RamSize)
{
    cout << "Assiging Null Data.    ";
    for (int i = 0; i < RamSize; i++) {
        RAM[i] = 0;
    };
    cout << "... Data Assigned!\n";
};