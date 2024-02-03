#include<iostream>
using namespace std;
int main(){
    int ch[10];
    // all the values are garbage values
    cout<<"array created successfully";
    cout<<endl;
    cout<<addressof(ch);
    // gives the base address
    // starting address of an array
    cout<<endl;
    cout<<&ch<<endl; 
    // {both of  these give  the base address }
    cout<<ch<<endl;
    

   
    return 0;
    
}