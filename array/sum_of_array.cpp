#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<5;i++){
        sum=sum+arr[i];
        
    }
    cout<<endl;
    cout<<"the sum of the array is"<<sum;
}