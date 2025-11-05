#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int i = 0;
        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    vector<int> nums = {0, 0, 3, 3, 5, 6};

    Solution s;
    int k = s.removeDuplicates(nums);

    cout << k << endl;
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
