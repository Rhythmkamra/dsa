#include<iostream>
using namespace std;
int main(){
    // question 1
    // create an array of 10 elements ,take input from the user,and double up all the elements
    int array[10];
    for(int i=0;i<10;i++){
        cout <<"enter the element at" <<" "<<i+1<<" index"<<endl;
        cin>>array[i];
        // cant use * here directly because with cin>. * is used for pointers and dereferncing 
        array[i] =array[i]*2;
    }
    for (int i=0;i<10;i++){
        cout<<"the value of each element is "<<" "<<array[i]<<endl;
    }

    return 0;
}