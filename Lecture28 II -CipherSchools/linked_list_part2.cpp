#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int data_input){
        this->data = data_input;
        this->next = NULL;
    }
};

void print_node(node* &node){
    cout<<"value "<<node->data;
    cout<<" address "<<node->next;
}

int main(){
    node * node1 = new node(3);
    print_node(node1);
    return 0;
}