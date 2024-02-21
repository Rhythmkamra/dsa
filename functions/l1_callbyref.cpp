#include<iostream>
using namespace std;
int main(){
  int n =5;
  int &k=n;
  k++;
  cout<<n;
  // the variable n is normal variable 
  // the k is a reference variable to a normal variable n
  //  any changes made to the refernce or its normal variable is affected on the original varible 
}