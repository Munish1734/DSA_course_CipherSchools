#include<iostream>
using namespace std;

void printmacxclassesattend(int start[], int end[], int class_id[])
{
    cout<<"classes you should attend to atend the max no. of lectures : "<<endl;
    cout<<class_id[0];
    int end_of_class_currently_attending;
    for(int i=0; i<9;  i++){
        if(start[i]>=end_of_class_currently_attending){
            cout<<class_id[i];
            end_of_class_currently_attending = end[i];
        }
        else{
            cout<<class_id[i];
        }
    }
}
int main(){
    int start[]={2,2,4,1,5,8,9,11,15,13};
    int end[]={3,5,7,8,9,10,11,14,16};
    int class_id[]={4,2,3,1,5,6,7,8,9};
    printmacxclassesattend(start, end, class_id);
    return 0;
}