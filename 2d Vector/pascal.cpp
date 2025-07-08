#include <iostream>
#include <vector>
using namespace std;
int fact(int m)
{
    int facti = 1;
    for (int i = 1; i <= m; i++)
    {
        facti *= i;
    }
    return facti;
}
int nCr(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}
int main()
{
    int numRows;
    cout << "ENTER THE NO : ";
    cin >> numRows;
    vector<vector<int>> v;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> s;
        for (int j = 0; j <= i; j++)
        {
            int q = nCr(i, j);
            s.push_back(q);
        }
        v.push_back(s);
    }
    return 0;
}

/*


| n  | n! (Factorial)              |
| -- | --------------------------- |
| 1  | 1                           |
| 2  | 2 × 1 = 2                   |
| 3  | 3 × 2 × 1 = 6               |
| 4  | 4 × 3 × 2 × 1 = 24          |
| 5  | 5 × 4 × 3 × 2 × 1 = 120     |
| 6  | 6 × 5 × 4 × 3 × 2 × 1 = 720 |
| 7  | 7! = 5040                   |
| 8  | 8! = 40,320                 |
| 9  | 9! = 362,880                |
| 10 | 10! = 3,628,800             |

*/