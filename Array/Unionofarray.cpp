#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0; 
        vector<int> Union; 
        int n = nums1.size();
        int m = nums2.size();

        while(i < n && j < m) {
            if(nums1[i] <= nums2[j]) {
                if(Union.size() == 0 || Union.back() != nums1[i]) {
                    Union.push_back(nums1[i]);
                }
                i++;
            }
            else {
                if(Union.size() == 0 || Union.back() != nums2[j]) {
                    Union.push_back(nums2[j]);
                }
                j++;
            }
        }

        while(i < n) {
            if(Union.size() == 0 || Union.back() != nums1[i]) {
                Union.push_back(nums1[i]);
            }
            i++;
        }

        while(j < m) {
            if(Union.size() == 0 || Union.back() != nums2[j]) {
                Union.push_back(nums2[j]);
            }
            j++;
        }

        return Union;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 2, 3, 5};
    vector<int> nums2 = {2, 3, 4, 4, 6};

    Solution obj;
    vector<int> ans = obj.unionArray(nums1, nums2);

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}

/*
Output: 1 2 3 4 5 6
*/
