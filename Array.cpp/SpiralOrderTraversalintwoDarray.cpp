#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spirallytraverse(vector<vector<int>> matrix, int r, int c)
    {
        vector<int> v;
        int row_start = 0;
        int row_end = r - 1;
        int column_start = 0;
        int column_end = c - 1;
        while (row_start <= row_end && column_start <= column_end)
        {
            // ForRowStart
            for (int col = column_start; col <= column_end; col++)
            {
                v.push_back(matrix[row_start][col]);
            }
            row_start++;

            // ForColumnEnd
            for (int row = row_start; row <= row_end; row++)
            {
                v.push_back(matrix[row][column_end]);
            }
            column_end--;

            // ForRowEnd
            if(row_start<=row_end){
            for (int col = column_end; col >= column_start; col--)
            {
                v.push_back(matrix[row_end][col]);
            }
            row_end--;
            }

            // ForColumnStart
            if(column_start<=column_end){
            for (int row = row_end; row >= row_start; row--)
            {
                v.push_back(matrix[row][column_start]);
            }
            column_start++;
            }
        }
        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);
        for (int i = 0; i < r; i++)
        {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++)
            {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        vector<int> result = obj.spirallytraverse(matrix, r, c);
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int a[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     // spiral order print
//     int row_start = 0;
//     int row_end = n - 1;
//     int column_start = 0;
//     int column_end = m - 1;
//     while (row_start <= row_end && column_start <= column_end)
//     {
//         // ForRowStart
//         for (int col = column_start; col <= column_end; col++)
//         {
//             cout << a[row_start][col] << " ";
//         }
//         row_start++;

//         // ForColumnEnd
//         for (int row = row_start; row <= row_end; row++)
//         {
//             cout << a[row][column_end] << " ";
//         }
//         column_end--;

//         // ForRowEnd
//         for (int col = column_end; col >= column_start; col--)
//         {
//             cout << a[row_end][col] << " ";
//         }
//         row_end--;

//         // ForColumnStart
//         for (int row = row_end; row >= row_start; row--)
//         {
//             cout << a[row][column_start] << " ";
//         }
//         column_start++;
//     }
//     return 0;
// }