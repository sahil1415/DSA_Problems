#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>  // If you're using algorithms like sort, find, etc.

using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node* buildBST(Node* root, int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    else{
        if(root -> val > val){
            root -> left = buildBST(root -> left, val);
        }
        if(root -> val < val){
            root -> right = buildBST(root -> right, val);
        }
    }
    return root;
}
void createBST(Node* &root){
    cout<<"Enter value for the node: ";
    int val;
    cin>>val;

    while(val != -1){
        root = buildBST(root, val);
        cout<<"Enter value for the node: ";
        cin>>val;
    }
    
}
void levelOrdertraversal(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front != NULL){
            cout<<front -> val<<" ";

            if(front -> left != NULL){
                q.push(front -> left);
            }
            if(front -> right != NULL){
                q.push(front -> right);
            }
        }
        else{
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
}

int main(){
    Node* root = NULL;
    createBST(root);
    cout<<"Level order traversal - "<<endl;
    levelOrdertraversal(root);

    return 0;
}