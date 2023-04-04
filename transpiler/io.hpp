#ifndef IO
#define IO
#include<iostream>
#include <boost/algorithm/string.hpp>

void outputascii_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void inputascii_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void output_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void debug_it(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void input_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

#endif