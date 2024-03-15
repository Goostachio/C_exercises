#include <iostream>
using namespace std;
int main(){
    int num;
    for (num=1; num<=10; num++){
        if (num % 2==1){
            continue;
        }
        cout<<num<<endl;
    }
    return 0;
}