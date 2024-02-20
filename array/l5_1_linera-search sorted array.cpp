#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,5,8,9};
    int target = 7;
    for(int i=0;i<5;i++){
        if (arr[i]== target){
            cout<<"element found";
        }
        if(arr[i]>target){
            cout<<"null";
            break;
        }


    }}