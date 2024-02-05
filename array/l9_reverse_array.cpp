#include<iostream>
using namespace std;
void rev(int arr[],int size){
    
        int left= 0;
        int right = size-1;
        for (int i =0;i<size/2;i++){
            int temp =0 ;
            temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }

    }
    

int main(){
    int array[3]={1,2,3};
    int size=3;
    rev(array,size);
    for (int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

}