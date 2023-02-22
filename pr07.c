/*basic array codes:- WAP to take i/p from user to print min and max element from  array and take size from user*/

#include<stdio.h>

  void main(){
             int size;
	     int max;
	     int min;
           printf("enter the size of array:-\n");
           scanf("%d",&size);
           int arr[size];
           printf("enter array elements:\n");
           for(int i=0;i<size;i++){  //i/p loop

                  scanf("%d",&arr[i]);
            }
               
          printf("elements in array are:-\n");
            for(int i=0;i<size;i++){ //o/p loop

                  printf("%d\n",arr[i]);
            }

      
	       max=arr[0];
               min=arr[0];
        for(int i=0;i<size;i++){
		if(arr[i]>max){
		  max=arr[i];
		 }
	        if(arr[i]<min){
		   min=arr[i];
	        }
          }
	     printf("max element from array is:%d\n",max);
	     printf("min element from array is:%d\n",min);
  }

