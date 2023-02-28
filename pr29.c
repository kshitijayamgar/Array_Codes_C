/*printing array using pointr*/
#include<stdio.h>
void printarr(int *ptr,int size){
        printf(" ele are as follow\n");
        for(int i=0;i<size;i++){
                printf("|%d|",*ptr);
                ptr++;
         }
        printf("\n");
}
void main(){
        int arr[]={10,20,30,40,50};
        int size=sizeof(arr)/sizeof(int);
        printarr(arr,size);
}
