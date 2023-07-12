#include<iostream>
using namespace std;
int main(){

    int a= 455;
    int*x = &a;
    cout<<"address of a is : "<<x<<endl;
    cout<<x+1<<endl;//this will print 4 more then the x as int consume 4 bytes
    cout<<x+2<<endl;

    int n[5];
    int*s = &n[0];
    for(int i =0; i<=5; i++){
        cout<<s+i<<endl;
    }
    return 0;
}