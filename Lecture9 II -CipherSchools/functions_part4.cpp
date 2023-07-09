#include<iostream>
using namespace std;

//functions should be called by passing same number of parameters as mentioned in the function when defined

float sum(int a , float c, float d);

int main(){
    cout<<sum(23.23,53.234,65.4);
    return 0;
}

float sum(int a , float c, float d){
    return (a+c+d);
}