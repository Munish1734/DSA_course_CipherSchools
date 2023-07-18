#include<iostream>
using namespace std;
int main(){
    // char c , d;
    // c = 'a';
    // cin>>d;
    // cout<<c<<" "<<d<<endl;
    int s;
    cin>>s;
    char N[s];
    for(int i=0; i<s; i++){
        cin>>N[i];
    }
    for(int j=0; j<s; j++){
        cout<<N[j];
    }

    //STRINGS

    string y , x = "this is not char , this is strings";
    cin>>y;
    cout<<endl<<x<<endl<<y;
    return 0;
}