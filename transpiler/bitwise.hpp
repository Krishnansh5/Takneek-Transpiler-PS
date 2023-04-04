#ifndef BITWISE
#define BITWISE
#include<iostream>
#include <boost/algorithm/string.hpp>

void not_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);
void and_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);
void xor_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);
void nand_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);
void or_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

#endif