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
    int max = INT_MIN;
        for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
           if(a[i][j]>max) max = a[i][j];
        }
    }
    cout<<"LARGEST ELEMENT IN ARRAY IS : "<<max;
}