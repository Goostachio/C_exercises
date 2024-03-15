#include <iostream>
using namespace std;
int main()
{
    int i,j,k, r1,r2,c1,c2, A[100][100],B[100][100],M[100][100];
    cout << "Enter rows and columns for matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for matrix B: ";
    cin >> r2 >> c2;

    while (c1 != r2)
    {
        cout<<"matrix cannot be multiplied, try again";
        cout << "Enter rows and columns for  A: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for matrix B: ";
        cin >> r2 >> c2;
    }

    for ( i=0 ; i<r1 ; i++) 
        for ( j=0 ; j<c1 ; j++)
        {
            cout<<"enter element a"<< i+1 << j+1 <<":";
            cin>>A[i][j];
        }

     for ( i=0 ; i<r2 ; i++) 
        for ( j=0 ; j<c2 ; j++)
        {
            cout<<"enter element b"<< i+1 << j+1 <<":";
            cin>>B[i][j];
        }

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            M[i][j]=0;
        }
    for (i=0 ; i<r1 ; i++)
        for (j=0 ; j<c2 ; j++)
            for (k=0 ; k < r2 ; k++)
            {
                M[i][j] += A[i][k]*B[k][j];
            }
    cout<<"multiplied matrix: "<<endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << " " << M[i][j];
            if(j == c2-1)
                cout << endl;
        }

    return 0;

}