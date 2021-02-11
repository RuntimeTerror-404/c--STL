#include <iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};
BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
};

BstNode* insert(BstNode* root, int data){
    if(root == NULL){
        root = GetNewNode(data);
        return root;
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
};

bool Search(BstNode* root, int data){
    if(root == NULL){
        return false;
    }
    else if(data == root->data){
        return true;
    }
    else if(data <= root->data){
        return Search(root->left, data);
    }
    else{
        return Search(root->right, data);
    }
}

int main(){
    BstNode* root = NULL;
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 11);
    root = insert(root, 20);
    root = insert(root, 17);
    int number;
    cout<<"insert a number to search: "<<endl;
    cin>>number;
    if(Search(root, number)==true){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}