#ifndef CONDITIONALS
#define CONDITIONALS
#include<iostream>
#include<stack>
#include <boost/algorithm/string.hpp>

void if_stack(std::string * prev_loc, int * cond, int * maxCond, std::stack<int> * cond_st, int q_flag);

void fi_stack(std::string * prev_loc, int * cond, int * maxCond, std::stack<int> * cond_st, int q_flag);

#endif