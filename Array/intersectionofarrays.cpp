#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;

        while(i < n && j < m) {
            if(nums1[i] == nums2[j]) {
                if(ans.size() == 0 || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 2, 3, 5};

    vector<int> result = obj.intersectionArray(a, b);

    cout << "Intersection of arrays: ";
    for(int i : result)
        cout << i << " ";

    return 0;
}
