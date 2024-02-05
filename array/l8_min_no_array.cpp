#include<iostream> 
#include<limits.h>
using namespace std;
void min_no(int arr[],int size){
    int min=INT16_MAX;
    for (int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];

        }
    }
    cout<<"the smallest element is "<<" "<<min;
}
int main(){
    int array[5]={6,4,7,2,1};
    int n=5;
    min_no(array,n);
}