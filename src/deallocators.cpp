#include <iostream>

using namespace std;

// Dynamic vectors deallocation
void deallocateRam(int RAM[], int size)
{
    cout << "Deallocating RAM.        \n";
    delete RAM;
    cout << "RAM Deallocated.";
};

// Dynamic vectors deallocation
void deallocateInstruction(int Instructions[], int InstructionsSize)
{
    cout << "Deallocating Instructions.\n";
    delete Instructions;
    cout << "RAM Instructions Deallocated.";
};
