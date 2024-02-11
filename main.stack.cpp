#include <iostream>
#include <stack>
#include <vector> // Include vector for std::vector<int>
#include "readin_return_int_stack.h"
#include "prefix_sum.h" // Include the correct prefix_sum.h header

using namespace std;

int main() {
    stack<int> s = get_ints_from_file("input.txt");

    int array_len = s.size();
    int *array_for_prefix_sum = new int[array_len];

    int position = 0;
    while (!s.empty()) {
        array_for_prefix_sum[position] = s.top();
        s.pop();
        position++;
    }

    
    vector<int> vec(array_for_prefix_sum, array_for_prefix_sum + array_len);

    
    if (non_neg_prefix_sum(vec)) { 
        cout << "non-neg" << endl;
    } else {
        cout << "neg" << endl;
    }

    delete[] array_for_prefix_sum;

    return 0; 
}
