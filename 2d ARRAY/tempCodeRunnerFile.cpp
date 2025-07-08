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
    // Orginal matrix
    cout << "ORGINAL MATRIX \n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Spiral MATRIX \n";
    int minr = 0, maxr = a - 1, minc = 0, maxc = b - 1;
    int i = 0;
    while (i < a * b)
    {
        // right
        for (int j = minc; j <= maxc; j++)
        {
            cout << arr[minr][j] << " ";
            i++;
        }
        minr++;
        // down
        for (int k = minr; k <= maxr; k++)
        {
            cout << arr[k][maxc] << " ";
            i++;
        }
        maxc--;
        // left
        for (int m = maxc; m >= minc; m--)
        {
            cout << arr[maxr][m] << " ";
            i++;
        }
        maxr--;
        // up
        for (int n = maxr; n >= minr; n--)
        {
            cout << arr[n][minc] << " ";
            i++;
        }
        minc++;
    }

    return 0;
}