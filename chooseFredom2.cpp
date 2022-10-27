#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node *next;
    Node(int data){
        this->data=data;
        this->next =NULL;
    }
    ~Node(){
        if (next!=NULL)
        {
            next =NULL;
            delete next;
        }
    }
};
int main(){

}