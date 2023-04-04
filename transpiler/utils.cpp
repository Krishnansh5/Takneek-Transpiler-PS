#include "utills.hpp"
using namespace std;

void dup_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "rm_1\n";
    cout << "rm_1" << ", " << *cond << ", " << "rm_2\n";
    cout << "rm_2" << ", " << *cond << ", " << "mt_3_1\n";
    cout << "mt_3_1" << ", " << *cond << ", " << "mt_2_3\n";
    if(!q_flag)
        cout << "mt_2_3" << ", " << *cond << ", " << "oat_stage[1]\n";
    else
        cout << "mt_2_3" << ", " << *cond << ", " << "finish\n";
    *cond = *cond + 1;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void pop_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "kd_1\n";
    cout << "kd_1" << ", " << *cond << ", " << "kd_2\n";
    if(!q_flag)
        cout << "kd_2" << ", " << *cond << ", " << "oat_stage[1]\n";
    else
        cout << "kd_2" << ", " << *cond << ", " << "finish\n";
    *cond = *cond + 1;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void swap_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond + 0 << ", " << "hall_2" << endl;
    cout << "hall_2" << ", " << *cond + 0 << ", " << "mt_1_3" << endl;
    cout << "mt_1_3" << ", " << *cond + 0 << ", " << "hall_5" << endl;
    cout << "hall_5" << ", " << *cond + 0 << ", " << "mt_2_3" << endl;
    cout << "mt_2_3" << ", " << *cond + 0 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 1 << ", " << "hall_5" << endl;
    cout << "hall_5" << ", " << *cond + 1 << ", " << "mt_1_3" << endl;
    cout << "mt_1_3" << ", " << *cond + 1 << ", " << "hall_13_3" << endl;
    if(!q_flag)
        cout << "hall_13_3" << ", " << *cond + 1 << ", " << "oat_stage[1]" << endl;
    else
        cout << "hall_13_3" << ", " << *cond + 1 << ", " << "finish" << endl;
    // cout << "oat_stage" << ", " << *cond + 2 << ", " << "debug" << endl;
    *cond += 2;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void cycle_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond + 0 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 0 << ", " << "pronite_2" << endl;
    cout << "pronite_2" << ", " << *cond + 0 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 0 << ", " << "mt_3_2" << endl;
    cout << "mt_3_2" << ", " << *cond + 0 << ", " << "kd_3" << endl;
    cout << "kd_3" << ", " << *cond + 0 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 1 << ", " << "events_1" << endl;
    cout << "events_1_f" << ", " << *cond + 1 << ", " << "mt_3_1" << endl;
    cout << "mt_3_1" << ", " << *cond + 1 << ", " << "mt_2_3" << endl;
    cout << "mt_2_3" << ", " << *cond + 1 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 1 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 1 << ", " << "events_1" << endl;
    cout << "events_1_t" << ", " << *cond + 1 << ", " << "rm_3" << endl;
    cout << "rm_3" << ", " << *cond + 1 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 2 << ", " << "mt_2_3" << endl;
    cout << "mt_2_3" << ", " << *cond + 2 << ", " << "events_2" << endl;
    cout << "events_2_f" << ", " << *cond + 2 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 2 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 2 << ", " << "events_2" << endl;
    cout << "events_2_t" << ", " << *cond + 2 << ", " << "hall_13_2" << endl;
    cout << "hall_13_2" << ", " << *cond + 2 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 2 << ", " << "kd_1" << endl;
    if(!q_flag)
        cout << "kd_1" << ", " << *cond + 2 << ", " << "oat_stage[1]" << endl;
    else
        cout << "kd_1" << ", " << *cond + 2 << ", " << "finish" << endl;
    *cond += 3;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void rcycle_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond + 0 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 0 << ", " << "pronite_2" << endl;
    cout << "pronite_2" << ", " << *cond + 0 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 0 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 1 << ", " << "events_1" << endl;
    cout << "events_1_f" << ", " << *cond + 1 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 1 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 1 << ", " << "events_1" << endl;
    cout << "events_1_t" << ", " << *cond + 1 << ", " << "mt_3_2" << endl;
    cout << "mt_3_2" << ", " << *cond + 1 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 2 << ", " << "kd_3" << endl;
    cout << "kd_3" << ", " << *cond + 2 << ", " << "events_2" << endl;
    cout << "events_2_f" << ", " << *cond + 2 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 2 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 2 << ", " << "mt_3_2" << endl;
    cout << "mt_3_2" << ", " << *cond + 2 << ", " << "mt_1_3" << endl;
    cout << "mt_1_3" << ", " << *cond + 2 << ", " << "events_2" << endl;
    cout << "events_2_t" << ", " << *cond + 2 << ", " << "hall_13_3" << endl;
    cout << "hall_13_3" << ", " << *cond + 2 << ", " << "rm_3" << endl;
    cout << "rm_3" << ", " << *cond + 2 << ", " << "hall_13_2" << endl;
    cout << "hall_13_2" << ", " << *cond + 2 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 2 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 2 << ", " << "mt_2_3" << endl;
    if(!q_flag)
        cout << "mt_2_3" << ", " << *cond + 2 << ", " << "oat_stage[1]" << endl;
    else
        cout << "mt_2_3" << ", " << *cond + 2 << ", " << "finish" << endl;
    *cond += 3;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void rev_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond + 0 << ", " << "events_1" << endl;
    cout << "events_1_f" << ", " << *cond + 0 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 0 << ", " << "events_1" << endl;
    cout << "events_1_t" << ", " << *cond + 0 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 0 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 0 << ", " << "pronite_2" << endl;
    cout << "pronite_2" << ", " << *cond + 0 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 1 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 1 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 2 << ", " << "events_1" << endl;
    cout << "events_1_f" << ", " << *cond + 2 << ", " << "mt_3_1" << endl;
    cout << "mt_3_1" << ", " << *cond + 2 << ", " << "mt_2_3" << endl;
    cout << "mt_2_3" << ", " << *cond + 2 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 2 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 2 << ", " << "events_1" << endl;
    cout << "events_1_t" << ", " << *cond + 2 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 2 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 2 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 3 << ", " << "events_1" << endl;
    cout << "events_1_f" << ", " << *cond + 3 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 3 << ", " << "events_1" << endl;
    cout << "events_1_t" << ", " << *cond + 3 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 3 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 4 << ", " << "events_1" << endl;
    cout << "events_1_f" << ", " << *cond + 4 << ", " << "mt_3_2" << endl;
    cout << "mt_3_2" << ", " << *cond + 4 << ", " << "mt_1_3" << endl;
    cout << "mt_1_3" << ", " << *cond + 4 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 4 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 4 << ", " << "events_1" << endl;
    cout << "events_1_t" << ", " << *cond + 4 << ", " << "hall_13_1" << endl;
    cout << "hall_13_1" << ", " << *cond + 4 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 4 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 5 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 5 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 6 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 6 << ", " << "hall_13_3" << endl;
    if(!q_flag)
        cout << "hall_13_3" << ", " << *cond + 6 << ", " << "oat_stage[1]" << endl;
    else
        cout << "hall_13_3" << ", " << *cond + 6 << ", " << "finish" << endl;
    *cond += 7;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void quit_stack(std::string * prev_loc, int * cond, int * maxCond){
    cout << *prev_loc << ", " << *cond << ", " << "finish\n";
}