#include <iostream>
using namespace std;
#include <vector>

void change2dV(vector<vector<int>> &arr)
{
    arr[0][0]=0;
}
void length(vector<vector<int>>&arr){
    // int a = arr.size();
    // cout<<"LENGTH : "<<a;
    cout<<arr.size();
}
int main()
{
  vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout<<v[0][0]<<endl;
    change2dV(v);
    cout<<v[0][0]<<endl;
    length(v);
    
    return 0;
}