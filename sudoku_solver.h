//
// Created by Lev on 12/11/2022.
//
#include <array>
#ifndef SUDOKUMASTER_SUDOKU_SOLVER_H
#define SUDOKUMASTER_SUDOKU_SOLVER_H
template <typename s_int, const std::size_t size>
std::array<s_int, size> Solve(std::array<s_int, size>);



//probably should be moved to separate file
// you can get the size of the grid as sqrt of size
template<typename s_int, const std::size_t size>
std::array<s_int, size> Solve(std::array<s_int, size>) {
    return std::array<s_int, size>{12,9,21};
}

#endif //SUDOKUMASTER_SUDOKU_SOLVER_H
