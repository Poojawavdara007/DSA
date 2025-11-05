#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 4, 0, 5, 2};

    Solution obj;
    obj.moveZeroes(nums);

    for(int x : nums){
        cout << x << " ";
    }

    return 0;
}

/*
Output: 1 4 5 2 0 0
*/
