#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
#include <cstdlib>
#include "operations.h"
#include "conditionals.hpp"
#include "io.hpp"
#include "utills.hpp"
#include "bitwise.hpp"
#include "algebraic.hpp"

using namespace boost::algorithm;
using namespace std;

vector<string> tokens;
vector<int> tokens_int;

string prev_loc = "start";
int cond = 0, max_cond = 0, q_flag=0;
stack<int> cond_st;

map<string, int> ops ={
    {"add",1},
    {"sub",2},
    {"mul",3},
    {"div",4},
    {"mod",5},
    {"random",6},
    {"and",7},
    {"or",8},
    {"xor",9},
    {"nand",10},
    {"not",11},
    {"output",12},
    {"input",13},
    {"outputascii",14},
    {"inputascii",15},
    {"pop",16},
    {"swap",17},
    {"cycle",18},
    {"rcycle",19},
    {"dup",20},
    {"rev",21},
    {"if",22},
    {"fi",23},
    {"quit",24},
    {"debug",25},
};

int tokenize(char* filename){
    ifstream file(filename);
    string program_line;

    while(getline(file, program_line)){
        trim(program_line);

        if(program_line.size() == 0)continue;
        
        string token;
        stringstream ss(program_line);
        while(getline(ss, token, ' ')){
            trim(token);
            if(token[0] == char('`')){
                break;
            }
            tokens.push_back(token);
        }
    }
    return 0;
}

void initilaize_stack(){
    cout << prev_loc << ", " << cond << ", " << "rm_1\n";
    cout << "rm_1" << ", " << cond << ", " << "rm_2\n";
    cout << "rm_2" << ", " << cond << ", " << "rm_3\n";
    cout << "rm_3" << ", " << cond << ", " << "oat_stage[1]\n";
    cond++;
    cout << "oat_stage" << ", " << cond << ", " << "rm_1\n";
    cout << "rm_1" << ", " << cond << ", " << "rm_2\n";
    cout << "rm_2" << ", " << cond << ", " << "rm_3\n";
    cout << "rm_3" << ", " << cond << ", " << "oat_stage[1]\n";
    cond++;
    cout << "oat_stage" << ", " << cond << ", " << "rm_1\n";
    cout << "rm_1" << ", " << cond << ", " << "rm_2\n";
    cout << "rm_2" << ", " << cond << ", " << "rm_3\n";
    cout << "rm_3" << ", " << cond << ", " << "oat_stage[1]\n";
    cond++;
    cout << "oat_stage" << ", " << cond << ", " << "rm_1\n";
    cout << "rm_1" << ", " << cond << ", " << "rm_2\n";
    cout << "rm_2" << ", " << cond << ", " << "oat_stage[1]\n";
    cond++;
    cout << "oat_stage" << ", " << cond << ", " << "rm_1\n";
    cout << "rm_1" << ", " << cond << ", " << "rm_2\n";
    cout << "rm_2" << ", " << cond << ", " << "pronite_2\n";
    cout << "pronite_2" << ", " << cond << ", " << "oat_stage[1]\n";
    cond++;

    prev_loc = "oat_stage";
    max_cond = max(cond, max_cond);
}



int main(int argc, char* argv[]) {
    if(argc != 2){
        cout << "Wrong usage!" << endl;
        return 0;
    }

    freopen("output.txt", "w", stdout);

    int exit_code = tokenize(argv[1]);

    if (exit_code != 0) return exit_code;

    for(auto token: tokens){
        if(ops.find(token) != ops.end()){
            tokens_int.push_back(ops[token]);
        }
        else{
            tokens_int.push_back(stoi(token));
        }
    }
    initilaize_stack();
    for(int i=0;i<tokens_int.size();i++){
        if(tokens[i] == "quit"){
            if(i==0){
                quit_stack(&prev_loc, &cond, &max_cond);
            }
            continue;
        }
        if(i+1 < tokens.size() && tokens[i+1] == "quit"){
            q_flag=1;
        }
        if(tokens[i][0] <= '9'){
            pushInt(tokens_int[i], &prev_loc, &cond, &max_cond, q_flag);
            q_flag=0;
            continue;
        }
        switch(tokens_int[i]){
            case add:
                add_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case sub:
                sub_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case mul:
                mul_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case div:
                div_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case mod:
                mod_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case random:
                pushInt(rand(), &prev_loc, &cond, &max_cond, q_flag);
                break;
            case and_:
                and_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case or_:
                or_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case xor_:
                xor_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case nand:
                nand_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case not_:
                not_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case output:
                output_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case input:
                input_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case outputascii:
                outputascii_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case inputascii:
                inputascii_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case pop:
                pop_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case swap:
                swap_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case cycle:
                cycle_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case rcycle:
                rcycle_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case dup:
                dup_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case rev:
                rev_stack(&prev_loc, &cond, &max_cond, q_flag);
                break;
            case if_:
                if_stack(&prev_loc, &cond, &max_cond, &cond_st, q_flag);
                break;  
            case fi:
                fi_stack(&prev_loc, &cond, &max_cond, &cond_st, q_flag);
                break;
            case quit:
                quit_stack(&prev_loc, &cond, &max_cond);
                break;
            case debug:
                debug_it(&prev_loc, &cond, &max_cond, q_flag);
                break;
            default:
                break;
        }
        q_flag=0;
    }
    cout<<prev_loc<<", "<<cond<<", "<<"finish";
}