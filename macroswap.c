#define swap(x, y, size) {\
    char temp[size]; \
    memcpy(temp, &y, size); \
    memcpy(&y,   &x, size); \
    memcpy(&x, temp, size); \
}

#include <stdio.h>
#include <string.h>

int main(void){
    int x=9, y=3;
    swap(x,y,sizeof(x));
}
