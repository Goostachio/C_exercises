#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"how many numbers are we comparing? ";
    cin>>n;
    int A[n];
    for (int i=0; i<n; i++)
    {
        cout<<"number "<<i+1<<" ";
        cin>>A[i];
    }
    for (int i=0 ; i<n; i++){
        for (int j=i+1 ; j<n ; j++){
            if (A[i]>A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }    
    cout<<"the middle number is "<<A[int(n/2)];
    return 0;
}   
