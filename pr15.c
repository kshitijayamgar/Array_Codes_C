/*basic array codes:- WAP to  print array in reverse and take size from user*/
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
            printf("elements in array are:|");
            for(int i=0;i<size;i++){ //o/p loop

                  printf("%d|",arr[i]);
            }
	    printf("\n");
            printf("Array in Reverse order:|");
            for(int i=size-1;i>=0;i--){ //o/p loop

                  printf("%d|",arr[i]);
            }
	    printf("\n");


