#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> grid(3, vector<int>(4));
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            cout << "Enter element for Row " << i + 1 << ", Column " << j + 1 << ": ";

            int noz;
            cin >> noz;
            grid[i][j] = noz;
        }
    }
    // 0th row check
    for (int i = 0; i < grid.size(); i++)
    {
        if (grid[i][0] == 0)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 0)
                {
                    grid[i][j] = 1;
                }
                else
                {
                    grid[i][j] = 0;
                }
            }
        }
    }
// column check
    for (int j = 1; j < grid[0].size(); j++)
    {
        int no = 0, nz = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            if (grid[i][j] == 0)
            {
                nz++;
            }
            else
            {
                no++;
            }
        }
        //
        for (int i = 0; i < grid.size(); i++)
        {

            if (nz > no)
            {
                if (grid[i][j] == 0)
                {
                    grid[i][j] = 1;
                }
                else
                {
                    grid[i][j] = 0;
                }
            }
        }
        //
    }
    long long res = 0;
// result
    for (int i = 0; i < grid.size(); i++)
    {
        int x = 1;
        for (int j = grid[0].size() - 1; j >= 0; j--)
        {
            res += grid[i][j] * x;
            x = x * 2;
        }
    }
    cout << "MAX POINTS IS : " << res;
    // return res;

    return 0;
}