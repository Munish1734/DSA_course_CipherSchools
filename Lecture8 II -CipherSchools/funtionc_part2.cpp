#include<iostream>
using namespace std;

//functions have their types , that which kind of value they return
int mul(int a , int b){//this mul function returns int value
    return (a*b);
}

//function that returns nothing have ""VOID TYPE""
void print(){
    cout<<"this funtion returns nothing";
}
int main(){
    print();
    return 0;
}