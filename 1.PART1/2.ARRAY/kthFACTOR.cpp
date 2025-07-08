#include<iostream>
using namespace std;
int main(){
    
 int n;int k;
 cin>>n>>k;  
 int c= 0;
int out ;
                
                for(int i = 1;i<=n;i++){
                    if(n%i==0){
                        c++;
                        cout<<i<<" ";
                        
                    }
                    if(c==k){
                        cout<<endl;
                        cout<<i;
                        break;
                        
                    }
                }        
              
            
        
}