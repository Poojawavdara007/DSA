#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {10,20,30,40,50,60,70,80};
    
    int lar = 0 ; 
    int sec = -1;
    
    int n = sizeof(a) / sizeof(a[0]); 

    for(int i = 0 ; i <= n-1; i++){
        if(a[i] > lar){
            sec = lar;
            lar = a[i]; 
        }
        else if(a[i] < lar && a[i] > sec){
            sec = a[i];
        } 
    }
    
    cout << lar << " " << sec << endl;
    
    return 0;
}