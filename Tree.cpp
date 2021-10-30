//this is a tree code

#include <bits/stdc++.h>
using namespace std;

template <typename T> 
class Treenode{
    public:
    T data;
    vector<Treenode*> children;

Treenode(T data){
    this->data = data;
}
};

Treenode<int>* inputlevelwise(){
    int rootdata;
    cout<<"Enter root data"<<endl;
    cin>>rootdata;
    Treenode<int>* root = new Treenode<int>(rootdata);
    queue<Treenode<int>*> pending;
    pending.push(root);
    while(pending.size()!=0){
        Treenode<int>* temp = pending.front();
        pending.pop();
        int n;
        cout<<"Enter number of children of "<<temp->data<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            int data;
            cout<<"Enter "<<i<<"th children of" <<temp->data<<endl;
            cin>>data;
            Treenode<int>* child = new Treenode<int>(data);
            temp->children.push_back(child);
            pending.push(child);
                    }
    }
return root;
}

void printlevelwise(Treenode<int>* root){
    if(root==NULL){
        return;
    }
    queue<Treenode<int>*> target;
    target.push(root);
    while(target.size()!= 0){
        Treenode<int>* temp = target.front();
        target.pop();
        cout<<temp->data<<":";
        for(int i=0;i<temp->children.size();i++){
            cout<<temp->children[i]->data<<",";
            target.push(temp->children[i]);
        }
        cout<<endl;
    }

}



Treenode<int>* takeinput(){
    int rootdata;
    cout<<"Enter data"<<endl;
    cin>>rootdata;
        Treenode<int>* root = new Treenode<int>(rootdata);
    int n;
    cout<<"Enter number of childrens"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        Treenode<int>* child = takeinput();
        root->children.push_back(child);
    }
    return root;
}


void printit(Treenode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printit(root->children[i]);
    }
}

int main(){
    // Treenode<int>* root = new Treenode<int>(1);
    //    Treenode<int>* node2 = new Treenode<int>(2);
    //       Treenode<int>* node1 = new Treenode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);0
Treenode<int>* root = inputlevelwise();
printlevelwise(root);
}
