#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NO : ";
    int n;
    cin>>n;
    int ls,a=n;
    int ar =0;
    while(n>0){
        ls = n%10;
        ar=ar+(ls*ls*ls);
        n/=10;

    }
    if(a==ar){
        cout<<a<<" is ARMSTRONG NO ";
    }
    else{
        cout<<a<<" is not ARMSTRONG NO ";

    }
}