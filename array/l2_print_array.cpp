#include<iostream>
using namespace std;
int main(){
     // printing an array
    int arr[5]={1,3,4,5,6};
    for(int i=0;i<5;i++){
        cout<<"value of the"<<" "<<i+1<<" "<<"element is"<<" "<<arr[i];
        cout<<endl;
    }
    int crr[5];
    for(int i=0;i<5;i++){
        cout<<"enter element"<<endl;
        cin>>crr[i];
        
    }
    for(int i=0;i<5;i++){
        cout<<"value of the"<<" "<<i+1<<" "<<"element is"<<" "<<crr[i];
        cout<<endl;}
        return 0;
}