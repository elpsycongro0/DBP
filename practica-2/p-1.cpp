#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[20][20], B[20][20], C[20][20];
    int k, m, n;
    cout<<"filas de A: "; cin>>k;
    cout<<"columnas de A: "; cin>>m;
    cout<<endl;
    for(int i=0; i<k; ++i)
        for(int j=0; j<m; ++j)
        {
            cin>>A[i][j];
        }
    cout<<"columnas de B: "; cin>>n;
    cout<<endl;
    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
        {
            cin>>B[i][j];
        }

    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            C[i][j] = 0;

    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                C[i][j] += A[i][z] * B[z][j];

    cout<<"Matriz A: "<<endl;
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz B: "<<endl;
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz C: "<<endl;
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
