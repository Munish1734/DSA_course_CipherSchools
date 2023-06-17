#include<iostream>
using namespace std;
int main(){
    int a,s,d,f;
    cin>>a>>s>>d>>f;
    cout<<(a>s && f<d)<<endl;
    cout<<(a<s || d<f);
    return 0;
}