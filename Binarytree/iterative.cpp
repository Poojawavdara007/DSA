#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void iterativePreorder(Node* root) {
    if (root == nullptr) return;

    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* curr = st.top();
        st.pop();
        cout << curr->data << " ";

        // Push right first so that left is processed first
        if (curr->right) st.push(curr->right);
        if (curr->left) st.push(curr->left);
    }
}

void iterativeInorder(Node* root) {
    stack<Node*> st;
    Node* curr = root;

    while (curr || !st.empty()) {
        while (curr) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}

void iterativePostorder(Node* root) {
    if (!root) return;
    stack<Node*> st1, st2;

    st1.push(root);

    while (!st1.empty()) {
        Node* curr = st1.top();
        st1.pop();
        st2.push(curr);

        if (curr->left) st1.push(curr->left);
        if (curr->right) st1.push(curr->right);
    }

    while (!st2.empty()) {
        cout << st2.top()->data << " ";
        st2.pop();
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    iterativePreorder(root);
    cout << endl;

    iterativeInorder(root);
    cout << endl;

    iterativePostorder(root);
    cout << endl;

    return 0;
}
