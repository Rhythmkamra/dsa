#include<iostream>
using namespace std;
void extreme_print( int arr[],int size){
    int left=0;
    int right=size-1;
    for(int i =0;i<size;i++){
        int temp =arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        cout<<left <<" ";
        cout<<right<<" ";
        left++;
        right--;
    }
}
int main(){
int array[5]={1,2,3,4,5};
int size = 5;
extreme_print(array,size);
}
// note try these in while loops and revise the logic once again