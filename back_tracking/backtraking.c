#include <stdio.h>
#include <stdlib.h>

int is_empty(int* value, int len){
    for(int i=0;i<len;i++){
        if(value[i] != 0){
            return 0;
        }
    }
    return 1;
}
int* arra_cpy(int* array, int len){
    int* new_array = (int*) malloc(sizeof(int)*len);
    for(int i=0;i<len;i++){
        new_array[i] = array[i];
    }
    return new_array;
}
int get_value(int* array, int len){
    for(int i=0;i<len;i++){
        if(array[i] != 0){
            int value = array[i];
            array[i] = 0;
            return value;
        }
    }
    return 0;
}
void show_array(int* array, int len){
    for(int i=0;i<len;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int* back_tracking(int* input, int* values, int len, int inputLen){
    
    if(is_empty(values,len)){    
        show_array(input,inputLen);
        return input;
    }
    else{
        int* newValues = arra_cpy(values,len);
        int value = get_value(newValues,len);
        for(int i=0;i<inputLen;i++){
            if(input[i] == 0){
                int* newInput = arra_cpy(input,inputLen);
                newInput[i] = value;
                back_tracking(newInput,newValues,len,inputLen);
                free(newInput);
            }
        }
        free(newValues);
    }
}

int main(){
    int input[10] = {0,0,0,0,0,0,0,0,0,0};
    int values[9] = {1,2,3,4,5,6,7,8,9};
    back_tracking(input,values,9,10);
}