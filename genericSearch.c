#include <stdio.h>
#include <string.h>


int search(void* x, size_t size, void* target, size_t element_size, int(*cmpFn)(void*, void*)) {
    for(int i=0; i < size; i++){
        if(cmpFn((unsigned char*)x + element_size*i , target) == 0 ) {
            return i;
        }
    }

    return -1;
}

int int_cmp(int* x, int* y);

int str_cmp(char* x, char* y);

int main(void) {
    //int x[] = {1,2,3,4,5,6};
    //int t = 3;
    char* x[] = {"Hello", "my", "name", "is"};
    char* t = "my";
    int result = search(&x, sizeof(x) , &t, sizeof(int), &str_cmp);
    printf("index = %d", result);
    printf("\n");
}




int int_cmp(int* x, int* y) {
    return *x - *y;
}

int str_cmp(char* x, char* y) {
    return strcmp(x, y);
}

