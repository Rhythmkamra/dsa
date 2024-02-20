#include<iostream>
using namespace std;
#include <limits.h>
void max(int arr[],int size){
    int max =INT_MIN;
    for (int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
     cout<<max;
}
int main(){
    int arr[5]={2,5,4,8,9};
    int size = 5;
    max(arr,size);

    

}