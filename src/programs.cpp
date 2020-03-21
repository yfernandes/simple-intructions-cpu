#include <iostream>

using namespace std;

// Programs initialization
void multiplicationProgram(int multiplicando, int multiplicador, int Instructions[], int InstructionsSize)
{
    cout << "Initializing Multiplication Program.  ";

    // First Instruction
    Instructions[0] = 2; // Opcode for storing parameter
    Instructions[1] = multiplicando; // Value to be store on Instructions index 0
    Instructions[2] = 0; //
    Instructions[3] = -1; //

    // Second Instruction
    Instructions[4 + 0] = 2;
    Instructions[4 + 1] = 0;
    Instructions[4 + 2] = 1;
    Instructions[4 + 3] = 1;

    // Third Instruction -- REPEATING SUM
    for (int i = 0; i <= multiplicador; i++) {
        Instructions[(i * 4) + 8 + 0] = 0;
        Instructions[(i * 4) + 8 + 1] = 0;
        Instructions[(i * 4) + 8 + 2] = 1;
        Instructions[(i * 4) + 8 + 3] = 1;
    };

    // Last Instruction -- HALT
    Instructions[(multiplicador * 4) + 12 + 0] = -1;
    Instructions[(multiplicador * 4) + 12 + 1] = -1;
    Instructions[(multiplicador * 4) + 12 + 2] = -1;
    Instructions[(multiplicador * 4) + 12 + 3] = -1;
    cout << "  ...Multiplication Program Initialized!";
};

// Programs initialization
void randomProgram(int Instructions[], int InstructionsSize)
{
    // Uncomment folowing line to create truly random data
    srand(time(0));

    for (int i = 0; i < InstructionsSize - 1; i += 4) {
        Instructions[i + 0] = rand() % 2;
        Instructions[i + 1] = rand() % 100;
        Instructions[i + 2] = rand() % 100;
        Instructions[i + 3] = rand() % 100;
    }
    // inserindo a ultima instrucao do programa que nao faz nada que presta
    Instructions[InstructionsSize - 1 - 3] = -1;
    Instructions[InstructionsSize - 1 - 2] = -1;
    Instructions[InstructionsSize - 1 - 1] = -1;
    Instructions[InstructionsSize - 1 - 0] = -1;
};

void nullProgram(int Instructions[], int InstructionsSize)
{
    for (int i = 0; i < InstructionsSize; i++) {
        Instructions[i] = 0;
    }
};