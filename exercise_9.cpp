#include <iostream>
using namespace std;

void frequent_num(int nums[], int size)
{
  int max_count = 0;
  cout << "\nMost occurred number: ";
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max_count)
      max_count = count;
  }
  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==max_count)
       cout << nums[i]<<" ";
  }
 }

int main()
{
    int n;
    cout<<"size of array: "<<endl;
    cin>>n;
    int A[n];

    for (int i = 0 ; i<n ; ++i )
    {
        cout<< "enter value of element number "<<i+1<<endl;
        cin>>A[i];
    }
    frequent_num(A,n);
    
    return 0;

}

