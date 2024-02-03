#include<iostream>
using namespace std;
int main(){
    int ch[10];
    cout<<"array created successfully";
    cout<<endl;
    cout<<addressof(ch);
    // gives the base address
    cout<<endl;
    cout<<&ch<<endl; 
    // {both of  these give  the base address }
    cout<<ch;
}