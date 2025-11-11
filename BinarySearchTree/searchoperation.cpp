#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* right;
    Node* left;
    
    Node(int val){
         data = val ; 
         right = left= nullptr;


    } 



};

Node* insertBst(Node* root , int val  ){
    if(root == NULL){
        return new Node(val);
    }

    if(val< root ->data){
        root->left = insertBst(root -> left , val );

    
    }
    else{
        root -> right = insertBst(root->right , val); 
    }
    return root;
}  

bool searchBst(Node* root , int key ){

    if(root == NULL)
        return false;

    if(root ->data == key)
        return true;

    if(key < root->data)
        return searchBst(root -> left , key );
    else    
        return searchBst(root -> right , key );
}


int main(){
    Node* root = NULL;

    root = insertBst(root , 50 );
    root = insertBst(root, 30);
    root = insertBst(root, 20);
    root = insertBst(root, 40);
    root = insertBst(root, 70);
    root = insertBst(root, 60);
    root = insertBst(root, 80);

    int key ;
    cout<<"Enter value to search ";
    cin>> key ; 

    if(searchBst(root , key ))
        cout<<key<<"found in BST";
    else
        cout<<key<<"not found in BST";
        
     return 0;   

}