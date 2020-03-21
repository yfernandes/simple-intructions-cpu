#include <iostream>

using namespace std;

// Computer definitions
void computer(int Instructions[], int RAM[])
{
    // Registers
    int PC = 0; // Program Counter
    int opCode = 0;

    /* LOAD FIRST OPCODE */
    opCode = Instructions[0]; // Assigns opCode value to instruction's opCode

    // Instruction Execution Loop
    while (opCode != -1) { // While opCode is not equal to HALT repeat until HALT is found.
        int addr1 = -1,
            addr2 = -1,
            addr3 = -1,
            RAMValue1 = -1,
            RAMValue2 = -1;

        switch (opCode) {
        case -1: {
            cout << "\n-1" << endl;
            return;
        } break;
        case 0: { /*  opCode for Addition operation */
            // cout << "Case 0" << endl;
            addr1 = Instructions[PC * 4 + 1];
            addr2 = Instructions[PC * 4 + 2];
            addr3 = Instructions[PC * 4 + 3];
            // buscar na RAM
            RAMValue1 = RAM[addr1];
            RAMValue2 = RAM[addr2];

            int sum = RAMValue1 + RAMValue2;

            // salvando resultado na RAM
            RAM[addr3] = sum;

            // cout << "Sum result: " << RAM[addr3] << "." << endl;
        } break;

        case 1: // opCode for Subtraction Operation
        {
            // cout << "Case 1" << endl;
            addr1 = Instructions[PC * 4 + 1]; // Gets from Addresses parameters from
            addr2 = Instructions[PC * 4 + 2]; // Instructions matrix
            addr3 = Instructions[PC * 4 + 3]; //

            // buscar na RAM
            RAMValue1 = RAM[addr1]; // Gets Value from Address
            RAMValue2 = RAM[addr2];

            int sub = RAMValue1 - RAMValue2;

            // salvando resultado na RAM
            RAM[addr3] = sub;

            // cout << "Sub result: " << RAM[addr3] << "." << endl;
        } break;
        case 2: {
            // cout << "Case 2" << endl;
            RAM[Instructions[PC * 4 + 2]] = Instructions[PC * 4 + 1];
            /* 
                Leva para o endereço de memoria passado pelo programa:                
                (Instrucoes[Linha = Contador do programa][Coluna = 2]),
                o valor contido em: 
                (Instrucoes[Linha = Contador do programa][Coluna = 1])
             */
        } break;
        default:
            // cout << "Computer Error" << endl;
            break;
        }
        // cout << "Opcode: " << opCode << endl;
        opCode = Instructions[PC * 4 + 0]; // Assigns opCode value to instruction's opCode

        // cout << "PC: " << PC << endl;
        PC++; // Increments Program counter to load next instruction

        // cout << "Next Opcode: " << opCode << endl;
        // cout << "Next PC: " << PC << endl;
    }
};
