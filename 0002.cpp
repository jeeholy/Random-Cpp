#include<iostream>
using namespace std;

main()
{
    int n; // min, max
    long A, m, M;
    cin >> n;
    cin >> A;
    m = M = A;

    for(int i = 1; i < n; i++)
    {
        cin >> A;
        if(m > A) m = A;
        if(M < A) M = A;
    }
    cout << m << endl << M;
}
