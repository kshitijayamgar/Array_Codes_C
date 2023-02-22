/*prg for find max element from array*/
#include<stdio.h>
void main(){
        int size;
        printf("enter size:");
        scanf("%d",&size);
        int arr[size];
        printf("enter elements for array\n");
  for(int i=0;i<size;i++){
           scanf("%d",&arr[i]);
        }
         int max=0;
  for(int i=0;i<size;i++){
          if(max<arr[i]){
             max=arr[i];  }
  }
     printf("max element from array=%d\n",max);
}

