/*returninng array for function*/
#include<stdio.h>
int * fun(int *ptr,int size){
        //int arr[]={10,20,30,40,50};
        /*for(int i=0;i<size;i++){
                printf("|%d|",*ptr);
                ptr++;
         }
        printf("\n");*/
        return ptr;
}
void main(){
       int arr[]={10,20,30,40,50};
        int size=sizeof(arr)/sizeof(arr[0]);
	
       int *catcher=fun(arr,size);// ithe ek ptr basvlay to fun return krnara adress catch krun value print krtoy..
       for(int i=0;i<4;i++){
        printf("|%d|",*(catcher+i));
       }
       printf("\n");
}
