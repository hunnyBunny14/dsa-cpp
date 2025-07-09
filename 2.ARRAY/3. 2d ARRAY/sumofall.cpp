#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<"ENTER THE ELEMENT : ";
            cin>>a[i][j];
        }
    }
    int sum = 0;
        for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            sum +=a[i][j];
        }
    }
    cout<<"SUM OF ALL ELEMENT IN ARRAY IS : "<<sum;
}