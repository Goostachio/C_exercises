#include <iostream>
using namespace std;

void check(int*, int, int);
int main()
{
    int n, a;
    cout<<"how many numbers? ";
    cin>>n;
    int num[n];
    for (int i=0; i<n; i++)
    {
        cout<<"enter term number "<<i+1<<": ";
        cin>>num[i];
    }
    cout<<"which number do you want to check? ";
    cin>>a;
    check(num,n,a);
    return 0;
}

void check(int A[], int n, int a)
{
    bool result;
    for (int i=0; i<n; i++)
    {
        if (a == A[i])
            {
                result = true;
                break;
            }
        result = false;
    }
    if (result)
    cout<<"the number is present";
    else
    cout<<"the number is not present";
    return;
}
