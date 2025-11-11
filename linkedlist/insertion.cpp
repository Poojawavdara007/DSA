#include <bits/stdc++.h>
using namespace std;

struct Node {
   int data ; 
   Node* next ;
};

Node* head = nullptr; 

Node* creation(int val ){
    Node* nn = new Node;
    nn -> data = val;
    nn -> next = nullptr;
    return nn; 
}

void insertatbegin(int val){
    Node* nn = creation(val);
    nn -> next = head;
    head = nn;

}

void insertatend(int val){

    Node* nn = creation(val);
    if(head == nullptr){
        cout<<"list is empty ";
        head = nn;
        nn->next = nullptr; 
    }

    Node* temp = head ;

    while(temp->next  != nullptr){
         temp = temp -> next ; 
          
    }

    temp ->next = nn;
     
}


void insertatmid(int val, int pos) {

    Node* nn = creation(val);

    // Case 1: Insert at beginning
    if(pos == 1) {
        nn->next = head;
        head = nn;
        return;
    }

    Node* temp = head;
    int count = 1;

    // Move to (pos-1)th node
    while(temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if(temp == NULL) {
        cout << "Position out of range\n";
        return;
    }

    // Insert node
    nn->next = temp->next;
    temp->next = nn;
}


void traverse() {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}



int main(){
 insertatbegin(10);
 insertatend(30);
 insertatmid(20 , 2);
 traverse();

}