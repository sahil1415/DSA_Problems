#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        this->data = value;
        left = NULL;
        right = NULL;
    }
};
    Node* createTree(){
        cout<<"Enter data for the node - ";
        int value;
        cin>>value;

        if(value == -1){
            return NULL;
        }
        else{
            Node* root = new Node(value);

            cout<<"Adding Left Child for "<<value<<endl;
            root -> left = createTree();
            cout<<"Adding Right Child for "<<value<<endl;
            root -> right = createTree();
            return root;
        }
    }
    void preOrderTraversal(Node* &root){
        if(root == NULL){
            return;
        }
        // NLR -> currentNode -> LeftNode -> RightNode
        cout<<root->data<<" ";
        preOrderTraversal(root -> left);
        preOrderTraversal(root -> right);
    }


    void postOrderTraversal(Node* &root){
        if(root == NULL){
            return;
        }
        // LRN -> LeftNode -> RightNode -> currentNode 
        postOrderTraversal(root -> left);
        postOrderTraversal(root -> right);
        cout<<root->data<<" ";
    }

    void inOrderTraversal(Node* &root){
        if(root == NULL){
            return;
        }
        // NLR -> LeftNode -> currentNode -> RightNode
        inOrderTraversal(root -> left);
        cout<<root->data<<" ";
        inOrderTraversal(root -> right);
    }

    void levelOrderTraversal(Node* root){
        if(root == NULL){
            return;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            Node* front = q.front();
            q.pop();
            // agar hum null encounteer kar rhe matlab purani level ke sare nodes print ho
            // gaye h aur unke bacche insert ho gay h queue me 
            // to hum ek aur null insert kar denge
            if(front == NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                cout<<front -> data<<" ";

                if(front -> left != NULL){
                    q.push(front -> left);
                }
                if(front -> right != NULL){
                    q.push(front -> right);
                }
            }
        }
    }
int main()
{
    Node* root;
    root = createTree();
    // 10 50 40 -1 -1 -1 30 20 -1 -1 -1 
    // cout<<"PreOrderTraversal - ";
    // preOrderTraversal(root);
    // cout<<endl;
    // cout<<"PostOrder Traversal - ";
    // postOrderTraversal(root);
    // cout<<endl;
    // cout<<"InOrderTraversal - ";
    // inOrderTraversal(root);
    // cout<<endl;

    cout<<"LevelOrderTraversal - "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
return 0;
}