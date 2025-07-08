#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NO : ";
    int n;
    cin>>n;
    int c=0,ls;
    while(n>0){
        n/=10;
        c++;
    }
    cout<<"NO OF DIGIT IS : "<<c;
}