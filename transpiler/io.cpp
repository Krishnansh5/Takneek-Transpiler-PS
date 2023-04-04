#include "io.hpp"
using namespace std;

void outputascii_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "nankari_gate_out_2\n";
    cout << "nankari_gate_out_2" << ", " << *cond << ", " << "kd_2\n";
    cout << "kd_2" << ", " << *cond << ", " << "kd_1\n";
    if(!q_flag)
        cout << "kd_1" << ", " << *cond << ", " << "oat_stage[1]\n";
    else
        cout << "kd_1" << ", " << *cond << ", " << "finish\n";

    *cond = *cond + 1;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void output_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "iit_gate_out_2\n";
    cout << "iit_gate_out_2" << ", " << *cond << ", " << "kd_2\n";
    cout << "kd_2" << ", " << *cond << ", " << "kd_1\n";
    if(!q_flag)
        cout << "kd_1" << ", " << *cond << ", " << "oat_stage[1]\n";
    else
        cout << "kd_1" << ", " << *cond << ", " << "finish\n";

    *cond = *cond + 1;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void debug_it(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond + 0 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 0 << ", " << "pronite_2" << endl;
    cout << "pronite_2" << ", " << *cond + 0 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 0 << ", " << "events_1" << endl;
    cout << "events_1_t" << ", " << *cond + 0 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 0 << ", " << "oat_stage[1]" << endl;
    cout << "events_1_f" << ", " << *cond + 0 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 0 << ", " << "events_1" << endl;
    cout << "oat_stage" << ", " << *cond + 1 << ", " << "iit_gate_out_1" << endl;
    cout << "iit_gate_out_1" << ", " << *cond + 1 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 1 << ", " << "events_1" << endl;
    cout << "events_1_f" << ", " << *cond + 1 << ", " << "oat_stage[0]" << endl;
    cout << "events_1_t" << ", " << *cond + 1 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 1 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 2 << ", " << "kd_1" << endl;
    if(!q_flag)
        cout << "kd_1" << ", " << *cond + 2 << ", " << "oat_stage[1]" << endl;
    else
        cout << "kd_1" << ", " << *cond + 2 << ", " << "finish\n" << endl;
    *cond += 3;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void input_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "rm_1\n";
    cout << "rm_1" << ", " << *cond << ", " << "rm_2\n";
    cout << "rm_2" << ", " << *cond << ", " << "iit_gate_in_2\n";
    if(!q_flag)
        cout << "iit_gate_in_2" << ", " << *cond << ", " << "oat_stage[1]\n";
    else
        cout << "iit_gate_in_2" << ", " << *cond << ", " << "finish\n";

    *cond += 1;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void inputascii_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond + 0 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 0 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 0 << ", " << "airstrip_land_2" << endl;
    cout << "airstrip_land_2" << ", " << *cond + 0 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 1 << ", " << "events_2" << endl;
    cout << "events_2_f" << ", " << *cond + 1 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 1 << ", " << "events_2" << endl;
    cout << "events_2_t" << ", " << *cond + 1 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 2 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 2 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 2 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 3 << ", " << "events_1" << endl;
    cout << "events_1_f" << ", " << *cond + 3 << ", " << "mt_3_1" << endl;
    cout << "mt_3_1" << ", " << *cond + 3 << ", " << "mt_2_3" << endl;
    cout << "mt_2_3" << ", " << *cond + 3 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 3 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 3 << ", " << "events_1" << endl;
    cout << "events_1_t" << ", " << *cond + 3 << ", " << "pronite_2" << endl;
    cout << "pronite_2" << ", " << *cond + 3 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 3 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 3 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 4 << ", " << "events_2" << endl;
    cout << "events_2_f" << ", " << *cond + 4 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 4 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 4 << ", " << "events_2" << endl;
    cout << "events_2_t" << ", " << *cond + 4 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 4 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 4 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 5 << ", " << "events_2" << endl;
    cout << "events_2_f" << ", " << *cond + 5 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 5 << ", " << "events_2" << endl;
    cout << "events_2_t" << ", " << *cond + 5 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 5 << ", " << "mt_3_2" << endl;
    cout << "mt_3_2" << ", " << *cond + 5 << ", " << "mt_1_3" << endl;
    cout << "mt_1_3" << ", " << *cond + 5 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 6 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 6 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 7 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 7 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 8 << ", " << "events_2" << endl;
    cout << "events_2_f" << ", " << *cond + 8 << ", " << "mt_3_2" << endl;
    cout << "mt_3_2" << ", " << *cond + 8 << ", " << "mt_1_3" << endl;
    cout << "mt_1_3" << ", " << *cond + 8 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 8 << ", " << "rm_1" << endl;
    cout << "rm_1" << ", " << *cond + 8 << ", " << "events_2" << endl;
    cout << "events_2_t" << ", " << *cond + 8 << ", " << "kd_1" << endl;
    cout << "kd_1" << ", " << *cond + 8 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 9 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 9 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 10 << ", " << "events_2" << endl;
    cout << "events_2_f" << ", " << *cond + 10 << ", " << "rm_2" << endl;
    cout << "rm_2" << ", " << *cond + 10 << ", " << "events_2" << endl;
    cout << "events_2_t" << ", " << *cond + 10 << ", " << "hall_13_2" << endl;
    cout << "hall_13_2" << ", " << *cond + 10 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 10 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 11 << ", " << "events_2" << endl;
    cout << "events_2_f" << ", " << *cond + 11 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 11 << ", " << "events_2" << endl;
    cout << "events_2_t" << ", " << *cond + 11 << ", " << "hall_13_2" << endl;
    cout << "hall_13_2" << ", " << *cond + 11 << ", " << "oat_stage[1]" << endl;
    cout << "oat_stage" << ", " << *cond + 12 << ", " << "kd_2" << endl;
    cout << "kd_2" << ", " << *cond + 12 << ", " << "kd_1" << endl;
    if (*prev_loc == "oat_stage")
        cout << "kd_1" << ", " << *cond + 12 << ", " << "oat_stage[1]" << endl;
    else
        cout << "kd_1" << ", " << *cond + 12 << ", " << "finish\n" << endl;
    *cond += 13;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}