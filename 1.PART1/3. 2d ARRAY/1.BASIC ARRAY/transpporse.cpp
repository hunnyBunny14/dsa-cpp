#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    for(int i = 0 ;i<3;i++){
        for(int j = 0 ;j<3;j++){
            cout<<"ENTER THE ELEMENT : ";
            cin>>a[i][j];
        }
    }
cout<<endl;
cout<<"ORGINAL MATRIX\n";
    for(int i = 0 ;i<3;i++){
        for(int j = 0 ;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
    cout<<"TRANSPORSE MATRIX\n";
    for(int j = 0 ;j<3;j++){
        for(int i = 0 ;i<3;i++){
        cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
}