/* WAP to print  2D array take all i/p from user*/


#include<stdio.h>
void main(){
             int size;
             
   
           printf("enter the size of array:-\n");
           scanf("%d",&size);
           int arr[size][size];
	   printf("enter the elements for 2D array:\n");
	    for (int i=0;i<size;i++){  // i/p loop
		    for(int j=0;j<size;j++){
			    scanf("%d",&arr[i][j]);
			 }
	     }

	   printf("elements in array are:");
	       for (int i=0;i<size;i++){  // o/p loop
                    for(int j=0;j<size;j++){
                            printf("%d|",arr[i][j]);
                         }
                 }
      }

