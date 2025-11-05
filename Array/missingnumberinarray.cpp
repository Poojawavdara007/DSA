// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0; i <= n; i++) {
//             bool found = false;
//             for(int j = 0; j < n; j++) {
//                 if(nums[j] == i) {
//                     found = true;
//                     break;
//                 }
//             }
//             if(!found) return i;
//         }
//         return -1;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {0, 2, 3, 1, 4};
//     cout << obj.missingNumber(nums);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0, xor2 = 0;

        for(int i = 0; i < n; i++) {
            xor1 ^= nums[i];
            xor2 ^= i;
        }
        xor2 ^= n;
        return xor1 ^ xor2;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {0, 2, 3, 1, 4};
    cout << obj.missingNumber(nums);
    return 0;
}
