#include <stdio.h>
#include <stdlib.h>

void print_array(int array[],int len){
    printf("[");
    for(int i =0;i<len;i++){
        printf("%d ", array[i]);
    }
    printf("]\n");
}

int main(){

    //ARRAY ESTATICO
    int largo = 10;
    int array1[largo];
    for(int i=0;i<largo;i++){
        printf("Ingrese el valor %d: ",i);
        fflush(stdin);
        scanf("%d",&array1[i]);
    }
    print_array(array1,largo);

    //CONTAR IMPARES
    int count = 0;
    for(int i=0; i<largo;i++){
        if(array1[i]%2!=0){
            count+=1;
        }
    }
    printf("count: %d\n",count);

    //ARRAY DINAMICO
    int* array2 = (int*) malloc(sizeof(int)*count);
    int index = 0;
    for(int i=0;i<largo;i++){
        if(array1[i]%2 != 0){
            array2[index]=array1[i];
            index+=1;
        }
    }
    print_array(array2,count);


}