#include<bits/stdc++.h>
using namespace std;
// Functins are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability 
// Functions are used to use same code multiple times
// void printName(string name){
//     cout<<"hey "<<name;
// }
// int sum(int num1, int num2){
//     int num3 =num1 + num2;
//     return num3;
// }
void doSomething(int arr[], int n){
    arr[0]+=100;
    cout<<"Value inside function:"<<arr[0]<<endl;
}
int main(){
    int n=5;
    int arr[n];
    for(int i =0;i<n;i=i+1){
        cin>>arr[i];
    }
   
    doSomething(arr, n);
    cout<<"Value inside int main:"<<arr[0]<<endl;
    return 0;
    // int num1,num2;
    // cin >> num1>>num2;
    // int res=sum(num1,num2);
    // cout<<res;
    // return 0;
    // string name;
    // cin>>name;
    // printName(name);

    // string name2;
    // cin >> name2;
    // printName(name2);
    // return 0;
}