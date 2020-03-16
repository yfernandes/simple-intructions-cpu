#include <iostream>

using namespace std;

// Dynamic vectors allocation
void allocateRam(int RAM[], int size)
{
    cout << "Allocating RAM.          ";
    RAM = new int[size];
    cout << "... RAM allocated.\n";
};

// Dynamic vectors allocation
void allocateInstruction(int Instructions[], int InstructionsSize)
{
    const int collums = 4; // EX: 02:33:62:97
    cout << "Allocating Instructions. ";
    Instructions = new int[InstructionsSize * collums];
    cout << "... Instructions allocated.\n";
};
