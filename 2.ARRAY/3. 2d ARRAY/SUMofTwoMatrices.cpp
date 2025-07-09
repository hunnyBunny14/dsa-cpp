#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<"ENTER THE ELEMENT matrix 1 : ";
            cin>>a[i][j];
        }
    }
    int b[3][3];
     for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<"ENTER THE ELEMENT matrix 2 : ";
            cin>>b [i][j];
        }
    }
     for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            b[i][j]+=a[i][j];        }
    }
    cout<<"SUM OF TWO MATRIX \n";
  
     for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
          cout<<b[i][j]<<" ";
        }
        cout<<endl; 
       }
    
}