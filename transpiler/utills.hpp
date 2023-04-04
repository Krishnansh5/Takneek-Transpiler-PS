#ifndef UTILS
#define UTILS
#include<iostream>
#include <boost/algorithm/string.hpp>

void dup_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void pop_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void swap_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void cycle_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void rcycle_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void rev_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag);

void quit_stack(std::string * prev_loc, int * cond, int * maxCond);
#endif