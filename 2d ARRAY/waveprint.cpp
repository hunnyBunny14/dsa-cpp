#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "ENTER ROW OF Matrix : ";
    cin >> a;
    cout << "ENTER COLUMN OF Matrix : ";
    cin >> b;

    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "Enter the element of 1st Matrix : ";
            cin >> arr[i][j];
        }
    }
    //Orginal matrix
    cout<<"ORGINAL MATRIX \n";
        for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"WAVE MATRIX \n";
    int j =0;
    for (int i = 0; i < a; i++)
    {
        if(j==0){
            for(int k = 0;k<b;k++){
                cout<<arr[i][k]<<" ";
                    j =k;
            }
        }
        else{
            for(int k = b-1;k>=0;k--){
               cout<<arr[i][k]<<" ";
                    j =k; 
            }
        }
        cout<<endl;
    }
    return 0;
}
