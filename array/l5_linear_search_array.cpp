#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,5,7,8};
    for(int i=0;i<5;i++){
        if (arr[i]==5){
            cout<<"element found"<<endl;
            break;
        }
        
        else{
            cout<<"not present at this index"<<endl;
        }

    }
    return 0;
}