#include<iostream>
using namespace std;

main()
{
    int m, n; //row, column
    cin >> m >> n;
    long matrixA[101][101], matrixB[101][101], matrixSum[101][101];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> matrixA[i][j];
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrixB[i][j];
            matrixSum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
           cout << matrixSum[i][j] << " ";
        cout << endl;
    }
}
