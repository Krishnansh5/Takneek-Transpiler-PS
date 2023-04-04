#include "conditionals.hpp"
using namespace std;

void if_stack(std::string * prev_loc, int * cond, int * maxCond, std::stack<int> * cond_st, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "rm_1\n";
    cout << "rm_1" << ", " << *cond << ", " << "rm_2\n";
    cout << "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
    cout << "hall_13_2" << ", " << *cond << ", " << "lecture_hall_eq\n";
    cond_st->push(*cond);
    cout << "lecture_hall_eq_f" << ", " << *cond<< ", " << "kd_1\n";
    cout << "kd_1" << ", " << *cond << ", " << "kd_2\n";
    if(!q_flag)
        cout << "kd_2" << ", " << *cond << ", " << "oat_stage[1]\n";
    else
        cout << "kd_2" << ", " << *cond << ", " << "finish\n";
    *cond = *cond + 1;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void fi_stack(std::string * prev_loc, int * cond, int * maxCond, std::stack<int> * cond_st, int q_flag){
    if(cond_st->empty()){
        cerr << "Error in Super Stack code\n";
        exit(1);
    }
    int prev_cond = cond_st->top();
    cond_st->pop();
    int cond_diff = prev_cond - *cond;
    cout << *prev_loc << ", " << *cond << ", " << "oat_stage[" << cond_diff << "]\n";
    *cond = prev_cond;
    cond_diff = *maxCond - *cond + 1;
    cout << "lecture_hall_eq_t" << ", " << *cond << ", " << "oat_stage[" << cond_diff << "]\n";
    cout << "oat_stage" << ", " << *cond + cond_diff << ", " << "kd_1\n";
    cout << "kd_1" << ", " << *cond + cond_diff << ", " << "kd_2\n";
    if(!q_flag)
        cout << "kd_2" << ", " << *cond + cond_diff << ", " << "oat_stage[1]\n";
    else
        cout << "kd_2" << ", " << *cond + cond_diff << ", " << "finish\n";
    *cond = *maxCond + 2;
    *maxCond = max(*cond, *maxCond);
    *prev_loc = "oat_stage";
}