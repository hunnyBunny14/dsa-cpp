#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "ENTER ROW OF 1st Matrix : ";
    cin >> a;
    cout << "ENTER COLUMN OF 1st Matrix : ";
    cin >> b;
    cout << "ENTER ROW OF 2nd Matrix : ";
    cin >> c;
    cout << "ENTER COLUMN OF 2nd Matrix : ";
    cin >> d;
    int arr1[a][b], arr2[c][d], res[a][d];
    if (b == c)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << "Enter the element of 1st Matrix : ";
                cin >> arr1[i][j];
                cout << endl;
            }
        }
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                cout << "Enter the element of 2nd Matrix : ";
                cin >> arr2[i][j];
                cout << endl;
            }
        }
        cout << "Multiply MATRIS : \n";
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < b; k++)
                {
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "MULTIPLY is not possible ";
    }
    return 0;
}
