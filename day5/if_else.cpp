#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"not eligible for a job";

    }
    else if(age<=57){
        cout<<"eligible for a job";
        if(age>=55){
            cout<<",but retirement soon";
        }
    }
   
    else{
        cout<<"retirement time";
    }
    return 0;

}