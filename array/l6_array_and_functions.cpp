#include<iostream>
using namespace std;
void solve(int arr[],int n){
    cout<<"function executed";
}
void linear_search(int arr[],int n,int target)
{
   for(int i=0;i<n;i++){
     if (arr[i]==target){
        cout<<true;
        break;
    }
    else{
        cout<<false;
    }
   }
}
int main(){
    int crr[3]={8,7,6};
    int size = 3;
    solve(crr,size);
    // always pass the size of the array with the function
    linear_search(crr,3,7);

}