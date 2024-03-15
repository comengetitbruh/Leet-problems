#include <iostream>
#include <string>
#include <algorithm> // Include this header for reverse function
using namespace std; 

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        else {
            string str = to_string(x);
            string rev_str = str;
            reverse(rev_str.begin(), rev_str.end());
            return str == rev_str;
        }
    }
};
