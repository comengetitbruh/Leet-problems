#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> count;
        count[0] = 1;
        int sum = 0, result = 0;
        for (int num : nums) {
            sum += num;
            result += count[sum - goal];
            count[sum]++;
        }
        return result;
    }
};

int main() {
    Solution solution; 

    vector<int> nums1 = { 1,0,1,0,1 };
    int goal1 = 2;
    cout << "Number of subarrays: " << solution.numSubarraysWithSum(nums1, goal1) << endl;

    vector<int> nums2 = { 0,0,0,0,0 };
    int goal2 = 0;
    cout << "Number of subarrays: " << solution.numSubarraysWithSum(nums2, goal2) << endl;

    return 0;
}
