#include "algebraic.hpp"

using namespace std;

void pushIntDep(int i, string * prev_loc ,int * cond, int * maxCond, int q_flag){
    if(i < 0){
        cout << *prev_loc << ", " << *cond << ", " << "rm_1\n";
        cout << "rm_1" << ", " << *cond << ", " << "rm_2\n";
        cout << "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
        cout << "hall_13_2" << ", " << *cond << ", " << "southern_labs_2\n";
        i++;
        if(!q_flag){
            cout << "southern_labs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
            *cond = *cond + 1;
            while(i++){
                cout << "oat_stage" << ", " << *cond << ", " << "southern_labs_2\n";
                cout << "southern_labs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                *cond = *cond +  1;
            }
        }
        else{
            if(i==-1){
                cout << "southern_labs_2" << ", " << *cond << ", " << "finish\n";
                *cond = *cond + 1;
            }
            else{
                cout << "southern_labs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                *cond = *cond + 1;
                while(i<-1){
                    i++;
                    cout << "oat_stage" << ", " << *cond << ", " << "southern_labs_2\n";
                    cout << "southern_labs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                    *cond = *cond +  1;
                }
                cout<< "oat_stage" << ", " << *cond << ", " << "southern_labs_2\n";
                cout << "southern_labs_2" << ", " << *cond << ", " << "finish\n";
            }
        }

        *prev_loc = "oat_stage";
        *maxCond = max(*cond, *maxCond);
        return;
    }
    if(i == 0){
        cout << *prev_loc << ", " << *cond << ", " << "rm_1\n";
        cout << "rm_1" << ", " << *cond << ", " << "rm_2\n";
        cout << "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
        cout << "hall_13_2" << ", " << *cond << ", " << "oat_stage[1]\n";
        *cond = *cond + 1;
        *prev_loc = "oat_stage";
        *maxCond = max(*cond, *maxCond); 
        return;   
    }
    cout << *prev_loc << ", " << *cond << ", " << "rm_1\n";
    cout << "rm_1" << ", " << *cond << ", " << "rm_2\n";
    cout << "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
    cout << "hall_13_2" << ", " << *cond << ", " << "oat_stairs_2\n";
    i--;
    cout << "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
    *cond = *cond + 1;

    while(i--){
        cout << "oat_stage" << ", " << *cond << ", " << "oat_stairs_2\n";
        cout << "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
        *cond = *cond +  1;
    }
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}


void pushInt(int i, string * prev_loc ,int * cond, int * maxCond, int q_flag){
    if(i < 0 && i>-30){
        cout << *prev_loc << ", " << *cond << ", " << "rm_1\n";
        cout << "rm_1" << ", " << *cond << ", " << "rm_2\n";
        cout << "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
        cout << "hall_13_2" << ", " << *cond << ", " << "southern_labs_2\n";
        i++;
        if(!q_flag){
            cout << "southern_labs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
            *cond = *cond + 1;
            while(i++){
                cout << "oat_stage" << ", " << *cond << ", " << "southern_labs_2\n";
                cout << "southern_labs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                *cond = *cond +  1;
            }
        }
        else{
            if(i==0){
                cout << "southern_labs_2" << ", " << *cond << ", " << "finish\n";
                *cond = *cond + 1;
            }
            else{
                cout << "southern_labs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                *cond = *cond + 1;
                while(i<0){
                    i++;
                    cout << "oat_stage" << ", " << *cond << ", " << "southern_labs_2\n";
                    cout << "southern_labs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                    *cond = *cond +  1;
                }
                cout<< "oat_stage" << ", " << *cond << ", " << "southern_labs_2\n";
                cout << "southern_labs_2" << ", " << *cond << ", " << "finish\n";
            }
        }
        *prev_loc = "oat_stage";
        *maxCond = max(*cond, *maxCond);
        return;
    }
    if(i == 0){
        cout << *prev_loc << ", " << *cond << ", " << "rm_1\n";
        cout << "rm_1" << ", " << *cond << ", " << "rm_2\n";
        cout << "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
        //cout << "hall_13_2" << ", " << *cond << ", " << "oat_stage[1]\n";
        if(!q_flag)
        cout << "hall_13_2" << ", " << *cond << ", " << "oat_stage[1]\n";
        else 
        cout << "hall_13_2" << ", " << *cond << ", " << "finish\n";
        *cond = *cond + 1;
        *prev_loc = "oat_stage";
        *maxCond = max(*cond, *maxCond); 
        return;   
    }
    if(i>0&&i<30){
        cout << *prev_loc << ", " << *cond << ", " << "rm_1\n";
        cout << "rm_1" << ", " << *cond << ", " << "rm_2\n";
        cout << "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
        cout << "hall_13_2" << ", " << *cond << ", " << "oat_stairs_2\n";
        i--;
        if(!q_flag){
            cout << "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
            *cond = *cond + 1;
            while(i--){
                cout << "oat_stage" << ", " << *cond << ", " << "oat_stairs_2\n";
                cout << "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                *cond = *cond +  1;
            }
            cout << "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
        }
        else{
            if(i==0){
                cout << "oat_stairs_2" << ", " << *cond << ", " << "finish\n";
                *cond = *cond + 1;
            }
            else{
                cout << "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                *cond = *cond + 1;
                while(i>0){
                    i--;
                    cout << "oat_stage" << ", " << *cond << ", " << "oat_stairs_2\n";
                    cout << "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                    *cond = *cond +  1;
                }
                cout<< "oat_stage" << ", " << *cond << ", " << "oat_stairs_2\n";
                cout << "oat_stairs_2" << ", " << *cond << ", " << "finish\n";
            }
        }
        *prev_loc = "oat_stage";
        *maxCond = max(*cond, *maxCond);
        return;
    }


    // for > 30
    if(i >=30)
    {
        vector<int> a;
        while(i!=0)
        {
            if(i%2==0)
            a.push_back(0);
            else
            a.push_back(1);
            i=i/2;
        }

        cout<< *prev_loc << ", " << *cond << ", " << "mt_3_1\n";
        cout<< "mt_3_1" << ", " << *cond << ", " << "kd_3\n";
        cout<< "kd_3" << ", " << *cond << ", " << "rm_2\n";
        cout<< "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
        cout<< "hall_13_2" << ", " << *cond << ", " << "oat_stairs_2\n";
        cout<< "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
        *cond = *cond +1;

        cout<< "oat_stage" << ", " << *cond << ", " << "rm_2\n";
        cout<< "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
        cout<< "hall_13_2" << ", " << *cond << ", " << "oat_stairs_2\n";
        cout<< "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
        *cond = *cond +1;

        cout<< "oat_stage" << ", " << *cond << ", " << "oat_stairs_2\n";
        cout<< "oat_stairs_2" << ", " << *cond << ", " << "hall_13_1\n";
        cout<< "hall_13_1" << ", " << *cond << ", " << "hall_3\n";
        for(int u = a.size()-1;u>=0;u--)
        {
            cout<< "hall_3" << ", " << *cond << ", " << "mt_1_3\n";
            cout<< "mt_1_3" << ", " << *cond << ", " << "oat_stage[1]\n";
            *cond = *cond +1;

            if(a[u]==1)
            {
                cout<< "oat_stage" << ", " << *cond << ", " << "kd_2\n";
                cout<< "kd_2" << ", " << *cond << ", " << "hall_2\n";
                cout<< "hall_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                *cond= *cond + 1;
                cout<< "oat_stage" << ", " << *cond << ", " << "mt_1_3\n";
                cout<< "mt_1_3" << ", " << *cond << ", " << "rm_2\n";
                cout<< "rm_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                *cond= *cond + 1;
            }
            if(u!=0) cout<< "oat_stage" <<", " << *cond << ", " << "hall_3\n";
        }
        cout<< "oat_stage" << ", " << *cond << ", " << "kd_2\n";
        cout<< "kd_2" << ", " << *cond << ", " << "mt_3_1\n";
        cout<< "mt_3_1" << ", " << *cond << ", " << "mt_2_3\n";
        cout<< "mt_2_3" << ", " << *cond << ", " << "rm_3\n";
        cout<< "rm_3" << ", " << *cond << ", " << "mt_1_3\n";
        cout<< "mt_1_3" << ", " << *cond << ", " << "rm_1\n";
        // cout<< "rm_1" << ", " << *cond << ", " << "oat_stage[1]\n";
        if(!q_flag)
        cout << "rm_1" << ", " << *cond << ", " << "oat_stage[1]\n";
        else 
        cout << "rm_1" << ", " << *cond << ", " << "finish\n";
        *cond = *cond +1;
        *prev_loc = "oat_stage";
        *maxCond = max(*cond, *maxCond);
        return;
    }
    if(i<=-30)
    {
       vector<int> a;
        while(i!=0)
        {
            if(i%2==0)
            a.push_back(0);
            else
            a.push_back(1);
            i=i/2;
        }

        cout<< *prev_loc << ", " << *cond << ", " << "mt_3_1\n";
        cout<< "mt_3_1" << ", " << *cond << ", " << "kd_3\n";
        cout<< "kd_3" << ", " << *cond << ", " << "rm_2\n";
        cout<< "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
        cout<< "hall_13_2" << ", " << *cond << ", " << "oat_stairs_2\n";
        cout<< "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
        *cond = *cond +1;

        cout<< "oat_stage" << ", " << *cond << ", " << "rm_2\n";
        cout<< "rm_2" << ", " << *cond << ", " << "hall_13_2\n";
        cout<< "hall_13_2" << ", " << *cond << ", " << "oat_stairs_2\n";
        cout<< "oat_stairs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
        *cond = *cond +1;

        cout<< "oat_stage" << ", " << *cond << ", " << "oat_stairs_2\n";
        cout<< "oat_stairs_2" << ", " << *cond << ", " << "hall_13_1\n";
        cout<< "hall_13_1" << ", " << *cond << ", " << "hall_3\n";
        for(int u = a.size()-1;u>=0;u--)
        {
            cout<< "hall_3" << ", " << *cond << ", " << "mt_1_3\n";
            cout<< "mt_1_3" << ", " << *cond << ", " << "oat_stage[1]\n";
            *cond = *cond +1;

            if(a[u]==1)
            {
                cout<< "oat_stage" << ", " << *cond << ", " << "kd_2\n";
                cout<< "kd_2" << ", " << *cond << ", " << "hall_2\n";
                cout<< "hall_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                *cond= *cond + 1;
                cout<< "oat_stage" << ", " << *cond << ", " << "mt_1_3\n";
                cout<< "mt_1_3" << ", " << *cond << ", " << "rm_2\n";
                cout<< "rm_2" << ", " << *cond << ", " << "oat_stage[1]\n";
                *cond= *cond + 1;
            }
            if(u!=0) cout<< "oat_stage" <<", " << *cond << ", " << "hall_3\n";
        }
        cout<< "oat_stage" << ", " << *cond << ", " << "kd_2\n";
        cout<< "kd_2" << ", " << *cond << ", " << "southern_labs_2\n";
        cout<< "southern_labs_2" << ", " << *cond << ", " << "oat_stage[1]\n";
        *cond = *cond +1;
        cout<< "oat_stage" << ", " << *cond << ", " << "southern_labs_2\n";
        cout<< "southern_labs_2" << ", " << *cond << ", " << "hall_3\n";
        cout<< "hall_3" << ", " << *cond << ", " << "mt_2_3\n";
        cout<< "mt_2_3" << ", " << *cond << ", " << "rm_3\n";
        cout<< "rm_3" << ", " << *cond << ", " << "mt_1_3\n";
        cout<< "mt_1_3" << ", " << *cond << ", " << "rm_1\n"; 
        // cout<< "rm_1" << ", " << *cond << ", " << "oat_stage[1]\n";
        if(!q_flag)
        cout << "rm_1" << ", " << *cond << ", " << "oat_stage[1]\n";
        else 
        cout << "rm_1" << ", " << *cond << ", " << "finish\n";
        *cond = *cond +1;
        *prev_loc = "oat_stage";
        *maxCond = max(*cond, *maxCond);
        return;
    }
}

void add_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "hall_2\n";
    cout << "hall_2" << ", " << *cond << ", " << "mt_1_3\n";
    cout << "mt_1_3" << ", " << *cond << ", " << "kd_1\n";
    cout << "kd_1" << ", " << *cond << ", " << "kd_2\n";
    if(!q_flag)
        cout << "kd_2" << ", " << *cond << ", " << "oat_stage[1]\n";
    else
        cout << "kd_2" << ", " << *cond << ", " << "finish\n";
    *cond = *cond + 1;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void sub_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "hall_5\n";
    cout << "hall_5" << ", " << *cond << ", " << "mt_1_3\n";
    cout << "mt_1_3" << ", " << *cond << ", " << "kd_1\n";
    cout << "kd_1" << ", " << *cond << ", " << "kd_2\n";
    if(!q_flag)
        cout << "kd_2" << ", " << *cond << ", " << "oat_stage[1]\n";
    else
        cout << "kd_2" << ", " << *cond << ", " << "finish\n";
    *cond = *cond + 1;
    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void div_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "hall_12\n";
    cout << "hall_12" << ", " << *cond << ", " << "mt_1_3\n";
    cout << "mt_1_3" << ", " << *cond << ", " << "kd_1\n";
    cout << "kd_1" << ", " << *cond << ", " << "kd_2\n";
    if(!q_flag)
        cout << "kd_2" << ", " << *cond << ", " << "oat_stage[1]\n";
    else
        cout << "kd_2" << ", " << *cond << ", " << "finish\n";
    *cond = *cond + 1;

    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void mul_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "hall_3\n";
    cout << "hall_3" << ", " << *cond << ", " << "mt_1_3\n";
    cout << "mt_1_3" << ", " << *cond << ", " << "kd_1\n";
    cout << "kd_1" << ", " << *cond << ", " << "kd_2\n";
    if(!q_flag)
        cout << "kd_2" << ", " << *cond << ", " << "oat_stage[1]\n";
    else 
        cout << "kd_2" << ", " << *cond << ", " << "finish\n";
    *cond = *cond + 1;

    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}

void mod_stack(std::string * prev_loc, int * cond, int * maxCond, int q_flag){
    cout << *prev_loc << ", " << *cond << ", " << "hall_12\n";
    cout << "hall_12" << ", " << *cond << ", " << "rm_1\n";
    cout << "rm_1" << ", " << *cond << ", " << "rm_2\n";
    cout << "rm_2" << ", " << *cond << ", " << "mt_2_3\n";
    cout << "mt_2_3" << ", " << *cond << ", " << "hall_3\n";
    cout << "hall_3" << ", " << *cond << ", " << "oat_stage[1]\n";
    *cond = *cond + 1;
    cout << "oat_stage" << ", " << *cond << ", " << "mt_2_3\n";
    cout << "mt_2_3" << ", " << *cond << ", " << "kd_1\n";
    cout << "kd_1" << ", " << *cond << ", " << "hall_5\n";
    cout << "hall_5" << ", " << *cond << ", " << "kd_2\n";
    cout << "kd_2" << ", " << *cond << ", " << "oat_stage[1]\n";
    *cond = *cond + 1;
    cout << "oat_stage" << ", " << *cond << ", " << "kd_1\n";
    cout << "kd_1" << ", " << *cond << ", " << "kd_2\n";
    cout << "kd_2" << ", " << *cond << ", " << "mt_2_3\n";
    if(!q_flag)
        cout << "mt_2_3" << ", " << *cond << ", " << "oat_stage[1]\n";
    else
        cout << "mt_2_3" << ", " << *cond << ", " << "finish\n";
    *cond = *cond + 1;

    *prev_loc = "oat_stage";
    *maxCond = max(*cond, *maxCond);
}