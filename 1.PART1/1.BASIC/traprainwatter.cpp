#include<iostream>
#include<vector>
using namespace std;


        int trap(vector<int>& height) {
            int n = height.size();
            //pre element array;
            int pre[n];
            pre[0]=-1;
            int max = height[0];
            for(int i = 1;i<n;i++){
                pre[i]=max;
                if(height[i]>max) max = height[i];
            }
            // great element array;
            int gre[n];
            gre [n-1]=-1;
            max = height [n-1];
            for(int i=n-2;i>=0;i--){
                gre[i]=max;
                if(height[i]>max) max = height[i];
            }
            // mini array
            int mini[n];
            mini[0]=-1,mini[n-1]=-1;
            for(int i = 1;i<n-2;i++){
                mini[i] = min(pre[i],gre[i]);
            }
            // calculate 
            int water = 0;
            for(int i= 1;i<n-2;i++){
                if(mini[i]>height[i]){
                    water+= (mini[i]-height[i]);
                }
            }
            return water;
                }
int main(){
    vector<int>height;
    int n ;
    cout<<"Enter the no of element in vector : ";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"ENTER THE ELEMENT : ";
        int a;
        cin>>a;
        height.push_back(a);

    }
    int ans = trap(height);
    cout<<" NO OF WATER IS : "<<ans;
}