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
//  solution 2 by ritika

// #include<iostream>
// using namespace std;
// void min(int arr[],int size){
//     int min;
//     min= arr[0];
//     for(int i=0;i<size;i++){
//         if(arr[i]<arr[0]){
//             min=arr[i];
//         }
//     }
//     cout<<min;
    
// }
// int main(){
//     int arr[5]={5,8,6,9,2};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     min(arr,size);
    
    
// }