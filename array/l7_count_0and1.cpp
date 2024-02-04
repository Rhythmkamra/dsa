#include<iostream>
using namespace std;
void count(int arr[],int size){
    int c_zero=0,c_one=0;
    // note yaha variables jab ek line mei define hote hai toh value bhi sath mei deni hoti hai 
    // and take care of the return type of the function
    for(int i=0;i<size;i++){
        if (arr[i]==0){
            c_zero+=1;
           
        }
        if( arr[i]==1){
            c_one+=1;
            
        }
    }
    cout<<"no of zeros"<<" "<<c_zero<<endl;
    cout<<"no of ones"<<" "<<c_one<<endl;
    
}
int main(){
    int arr[10]={0,1,0,1,0,0,1,1,1,0};
    int n = 10;
    count(arr,n);

}