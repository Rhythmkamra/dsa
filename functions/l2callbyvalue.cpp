#include<iostream>
using namespace std;
int add(int n){
    int a = n+1;
    return a;
}
int main(){
    int n =6;
    cout<< n;
     n =add(n);
    cout<<n;
    // so when you have a call by value function ,jab parameter pass hota hai toh woh ek 
    // seperate variable ban jata hai aur uske same name ka variable mat banana wrna conflict hoga
    // compiler ko
    // it will get confused between parameter n and variable n

    // plus function name leads to ambiguity while working with namespace standard library

}