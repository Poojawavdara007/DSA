#include <iostream>
using namespace std;

int main() {
    int nums[] = {3, 3, 6, 1};
    int n = sizeof(nums) / sizeof(nums[0]); 

    int largest = nums[0]; 
    
    
    for (int i = 1; i < n; i++) {
        if (nums[i] > largest) {
            largest = nums[i]; 
        }
    }

    cout << "Largest element: " << largest;
    return 0;
}
