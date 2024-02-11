#include "prefix_sum.h"

using namespace std;

bool non_neg_prefix_sum(const vector<int>& lst){
    int sum = 0;
    for (int num : lst) { 
        sum += num; 
        if (sum < 0) {
            return false;
        }
    }
    return true; 
}


bool non_pos_prefix_sum(const vector<int>& lst){
    int sum = 0;
    for (int num : lst) { 
        sum += num; 
        if (sum > 0) {
            return false;
        }
    }
    return true;

}
