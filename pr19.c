/*typecasting of void ptr*/
#include<stdio.h>
void main(){
        int x=10;
        float y=20.5;
        char ch='A';

        void *arr[3]={&x,&y,&ch};
        printf("%d\n",*((int*)arr[0]));
        printf("address of x:%p\n",arr[0]);
        printf("%f\n",*((float*)arr[1]));
        printf("add of y:%p\n",arr[1]);
        printf("%c\n",*((char*)arr[2]));
        printf("add of ch:%p\n",arr[2]);
}

