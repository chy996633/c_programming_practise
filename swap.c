# include<stdio.h>
# include<string.h>

void swap(int* x, int* y);

void voidSwap(void* x, void* y, size_t size);

int main(void)
{
    double x = 6.5, y= 3.8;
    printf("before swap: x= %f, y= %f", x, y);
    printf("\n");
    //swap(&x, &y);
    voidSwap(&x, &y, sizeof(x));
    printf("after swap: x= %f, y= %f", x, y);
    printf("\n");
}


void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void voidSwap(void* x, void* y, size_t size){
    char temp[size];

    memcpy(temp, y, size);

    memcpy(y, x, size);

    memcpy(x, temp, size);

}


