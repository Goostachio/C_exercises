#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of terms: ";
    cin>>n;
    int A[n];
    for (int i=0; i<n ; i++)
    {
        cout<<"enter term number "<<i+1<<": ";
        cin>>A[i];
    }
    int largest = A[0];
    for (int i=0; i<n ; i++)
    {
        if (A[i] > largest)
        largest = A[i];
    }
    cout<<"largest number is: "<<largest;
    return 0;
}

#include <iostream>
using namespace std;

int pocket(int)
{
    float number1, number2, number3;

    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    if (number1 >= number2)
    {
        if (number1 >= number3)
            cout << "Largest number: " << number1;
        else
            cout << "Largest number: " << number3;
    }
    else
    {
        if (number2 >= number3)
            cout << "Largest number: " << number2;
        else
            cout << "Largest number: " << number3;
    }

    return 0;
}



