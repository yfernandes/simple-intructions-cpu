#include <iomanip>
#include <iostream>

// #include "allocators.hpp"
#include "computer.hpp"
#include "data.hpp"
// #include "deallocators.hpp"
#include "debuggers.hpp"
#include "programs.hpp"

#define INSTRUCTIONSAMMOUNT 150

using namespace std;

// -- OPCODES --
// 0  => Sum
// 1  => Subtraction
// 2  => Store to memory
// -1 => Halt

int main()
{
    /* ----------- Bookkepping sizes for later use. ----------- */
    cout << "Defining sizes.          ";
    const int RAMSize = 100;
    const int InstructionsSize = INSTRUCTIONSAMMOUNT * 4;
    cout << "... Sizes defined!" << endl;

    /* ----------- Creating pointers ----------- */
    cout << "Creating NULL pointers.  ";
    int RAM[RAMSize];
    int Instructions[InstructionsSize];
    cout << "... Pointers created!\n";

    /* ----------- Allocating memory ----------- */
    // allocateRam(RAM, RAMSize);
    // allocateInstruction(Instructions, InstructionsSize);

    /* ----------- Assiging Data ----------- */
    nullData(RAM, RAMSize);
    // randomData(RAM, RAMSize);

    /* ----------- WORK FROM HERE ----------- */
    // randomProgram(Instructions, InstructionsSize);
    nullProgram(Instructions, InstructionsSize);

    multiplicationProgram(7, 52, Instructions, InstructionsSize);

    computer(Instructions, RAM);
    // cout << "\nThe result is : " << RAM[1] << ".\n";

    printInstructions(Instructions, InstructionsSize);
    printRam(RAM, RAMSize);

    /* ----------- Deallocating memory ----------- */
    // deallocateRam(RAM, RAMSize);
    // deallocateInstruction(Instructions, InstructionsSize);

    cout << "The End!\n";
    return 0;
};
