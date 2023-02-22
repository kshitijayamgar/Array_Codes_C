/*basic array codes:- WAP to print square of  every element array */

#include<stdio.h>

  void main(){
             int size;
           printf("enter the size of array:-\n");
           scanf("%d",&size);
           int arr[size];
           printf("enter array elements:\n");
           for(int i=0;i<size;i++){  //i/p loop

                  scanf("%d",&arr[i]);
            }

            printf(" square of elements in array are:-\n");
            for(int i=0;i<size;i++){ 

                  printf("%d\n",arr[i]*arr[i]);
            }
  }

