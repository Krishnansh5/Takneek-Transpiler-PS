#ifndef ALGEBRAIC
#define ALGEBRAIC
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <bits/stdc++.h>

void pushInt(int i, std::string * prev_loc ,int * cond, int * maxCond, int q_flag);

void pushIntDep(int i, std::string * prev_loc ,int * cond, int * maxCond);

void add_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void sub_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void div_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void mul_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void mod_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

#endif