#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many numbers are we comparing? ";
    cin>>n;
    int A[n];
    for (int i=0; i<n ; i++)
    {
        cout<<"number "<< i+1 <<" ";
        cin>>A[i];
    }
    int lar = A[0];
    for (int i=1; i<n ; i++)
        {
            if(A[i]>lar)
            lar=A[i];
        }
        int small = A[0];
    for (int i=0; i<n ; i++)
        {
            if(A[i]<small)
            small=A[i];
        }
    cout<<lar<<" is the largest number"<<endl;
    cout<<small<<" is the smallest number";
    return 0;
}


