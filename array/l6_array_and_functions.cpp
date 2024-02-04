#include<iostream>
using namespace std;
void solve(int arr[],int n){
    cout<<"function executed";
}
bool linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return true;  // Return true if the target is found
        }
    }
    return false;  // Return false if the target is not found after the loop
}

int main(){
    int crr[3]={8,7,6};
    int size = 3;
    // solve(crr,size);
    // always pass the size of the array with the function
    int output=linear_search(crr,3,7);
    if (output=1){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    

}
// note :-the  fucntion with return type of boolean dont show the output inme value 0,1 ho jati hai fucntion ki
// aur fucntion ki value ko hum log variable mei store krwa dete hai aur fir use if else block se use krte hai
// i.e explicit output 