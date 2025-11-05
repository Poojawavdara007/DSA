#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10 ,20 , 30 , 40, 50 , 60 , 70 };
    int n = 7;
    int temp = arr[0];
    for(int i = 1 ; i < n ; i++){
        arr[i -1] = arr[i];
    }
    arr[n-1] = temp;
    
    for(int i = 0 ; i < n ; i++)
        cout << arr[i] << " ";
}
// Output
// 20 30 40 50 60 70 10 

