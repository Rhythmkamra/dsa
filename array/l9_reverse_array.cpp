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
    int array[4]={1,2,3,4};
    int size=4;
    rev(array,size);
    for (int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

}
// note look for the inbuilt swap function in the video
// another method by rhythm

// #include<iostream>
// using namespace std;
// void rev(int arr[],int size){
//     int temp =0;
//     for (int i=0;i<size/2;i++){
//         temp=arr[i];
//         arr[i]=arr[size-i-1];
//         arr[size-i-1]=temp;
//     }
//     for (int i = 0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     int array[5]={1,2,3,4,5};
//     int size= 5;
//     rev(array,size);
//     }