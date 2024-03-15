#include <stdio.h>


void swap(int m, int n){
    m=n;
    n=m;
}
void main() {
    int a = 3;
    int b = 5;
    swap (a,b);
    printf(a,b);
}



/*

parameter in c is passed by value, passed by reference in python, java
in a conjuscted line, we need to consider how each complier run
be extra careful with recursive function, each line position is important

int is just taking the interger part




*/