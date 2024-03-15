#include <stdio.h>

int main(){
    int size;
    printf("size: ");
    scanf("%d", &size);
    int array[size];
    printf("element: ");
    for (int i=0 ; i<size ; i++){
        scanf("%d", &array[i]);
    }
    int a[size];
    int count=0;
    for (int i=0 ; i<size ; i++){
        for (int j=0 ; j<size ; j++){
            if (array[i]==array[j]){
                    count++;
                    a[i]= count;
                }
            }
            count=2;
            if(a[i]!=1){
                a[i]=count;
            }            
        }
    for (int i = 0; i < size; ++i) 
        {
            printf("%d", a[i]);
}
return 0;
}

/*    
int size;
    printf("size: ");
    scanf("%d", &size);
    int array[size];
    printf("element: ");
    for (int i=0 ; i<size ; i++){
        scanf("%d", &array[i]);
    }
    


int sum=0;
    for(int index = 0; index<size; index++){
        sum = sum + array[index];
}
    printf("%d", sum);
    


    printf("negative element of the array: ");
    for (int i=0; i<size; i++){
        if (array[i]<0){
        printf(" %d", array[i]);}




    for (int i=0 ; i<size ; i++){
        for (int j = i+1 ; j< size ; j++){
            if (array[j]<array[i]){
                int a = array[i];
                array[i]=array[j];
                array[j]=a;
            }
        }
    } 
    printf("The numbers arranged in descending order are given below\n");
 
        for (int i = 0; i < size; ++i) 
        {
            printf("%d\n", array[i]);

}


int a = 0;
    for (int i=0; i< size ; i++){
        if (array[i] %2== 0){
            a++;
        }
    }
    printf("nuber of even number: %d", a);



    int mehhhhh
    for (int i=0 ; i<size ; i++){
        for (int j =0 ; j< size ; j++){
            if (array[i]==array[j]){
                a[i]++;
            }
        }
    }
    for (int i = 0; i < size; ++i) 
        {
            printf("%d", a[i]);
}




*/