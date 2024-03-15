#include <iostream>
using namespace std;
int factorial (int);
int  main()
{
    int n, result = 1;
    cout<<"enter number: ";
    cin>>n;
    for (int i=1 ; i<=n ; i++)
    {
        result *= i;
    }
    cout<<"factorial of the number is: "<<result<<endl;
    cout<<"another one: ";
    cout<<factorial(n);
    return 0;

}
int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}



