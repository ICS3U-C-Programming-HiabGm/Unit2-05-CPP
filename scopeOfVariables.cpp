// Created by: Hiab G
// Created on: march 10th
// This module shows how local and global variables work


#include <iostream>

int variableX = 77;

void local_variable() {
    int variableX = 88;
    int variableY = 7;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Local variable: " << variableX << " + " << variableY << " = " << variableZ << std::endl;
}

void global_variable() {
    extern int variableX;
    int variableY = 30;

    variableX = variableX + 1;
    int variableZ = variableX + variableY;

    std::cout << "Global variable: " << variableX << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    local_variable();
    global_variable();

    std::cout << "\nDone." << std::endl;
    return 0;
}
