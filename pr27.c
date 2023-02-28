/*array of ptrs*/
#include<stdio.h>
void main(){
        int x,y,z; 
        x=10;
        y=20;
        z=30;                                     
        int *ptr1=&x;
        int *ptr2=&y;
        int *ptr3=&z;
        int* arr[3]={&x,&y,&z};
        printf("using array:arr+index\n");
        printf("%d\n",*(*(arr+0)));
        printf("%d\n",*(*(arr+1)));
        printf("%d\n",*(*(arr+2)));
        /*adresses*/
        printf("arr0:%p\n",arr[0]);
        printf("arr1:%p\n",arr[1]);
        printf("arr2:%p\n",arr[2]);

        printf("using ptr\n");
        printf("%d\n",*ptr1);
        printf("%d\n",*ptr2);
        printf("%d\n",*ptr3);
        /*adresses*/
        printf("ptr1mdhe:%p\n",ptr1);
        printf("ptr2mdhe:%p\n",ptr2);
        printf("ptr3 mdhe:%p\n",ptr3);
}
