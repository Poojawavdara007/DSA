#include <iostream> 

int main() {
    
    int arr[] = {10, 20, 30, 70, 40, 60, 50};
    
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    bool sorted = true;

    for(int i = 0; i < n - 1; i++){ 
        
        if(arr[i] > arr[i+1]){
            sorted = false;
            break;
        }
    }
    
    if (sorted) {
        std::cout << "The array is sorted (True)\n";
    } else {
        std::cout << "The array is NOT sorted (False)\n";
    }

    return 0;
}