//
// Created by Lev on 12/11/2022.
//


#include <iostream>
#include <iomanip>
#include <array>
#include "sudoku_solver.h"

#define SIZE 9
int main(){

    std::array<int, SIZE*SIZE> my_sudoku{0};
    std::array<int, SIZE*SIZE> solved = Solve(my_sudoku);
    for (size_t i=0; i<SIZE ;i++) {
        for (size_t j = 0; j < SIZE; j++)
            std::cout<<std::setw(5)<<solved[i*SIZE+j];
        std::cout<<std::endl;
    }
    return 0;
}