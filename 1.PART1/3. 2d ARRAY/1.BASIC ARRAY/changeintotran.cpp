#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    for(int i = 0;i<3;i++){
       for(int j = 0 ;j<3;j++){
            cout<<"ENTER THE ELEMENT ";
                       cin>>a[i][j];
       }
        }
        cout<<endl;
        cout<<"ORGINAL MATRIX\n";
          for(int i = 0;i<3;i++){
       for(int j = 0 ;j<3;j++){
         cout<<" "<<a[i][j];
       } cout<<endl;
        }
        //    for(int i = 0;i<3;i++){
        //     for(int j = 0 ;j<3;j++){
        //         if(i>j){
        //             int temp = a[i][j];
        //             a[i][j]=a[j][i];
        //             a[j][i]=temp;
        //             }
        //         }
        //                 }

          for(int i = 0;i<3;i++){
            for(int j = i+1 ;j<3;j++){
               
                    int temp = a[i][j];
                    a[i][j]=a[j][i];
                    a[j][i]=temp;
                    
                }
                        }
            cout<<endl;
        cout<<"TRANSPORSE MATRIX\n";
          for(int i = 0;i<3;i++){
       for(int j = 0 ;j<3;j++){
         cout<<" "<<a[i][j];
       } cout<<endl;
        }
  
}