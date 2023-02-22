/* WAP to print sum of both diagonal  elements in  2D array take all i/p from user*/


#include<stdio.h>
void main(){
             int size;
             int sum=0;
             int i,j;

           printf("enter the size of array:-\n");
           scanf("%d",&size);
           printf("size of array is %dx%d \n",size,size);
           int arr[size][size];
           printf("enter the elements for 2D array:\n");
            for (i=0;i<size;i++){  // i/p loop
                    for(j=0;j<size;j++){
                            scanf("%d",&arr[i][j]);
                         if(i==j||i+j==size-1){    //without repeating central element
                           sum=sum+arr[i][j];
                         }
                   }
             }

           printf("elements in array are:");
               for (i=0;i<size;i++){  // o/p loop
                    for( j=0;j<size;j++){
                            printf("%d|",arr[i][j]);

                         }
                 }


               printf("\nsum of both diagonals of 2D array is:%d\n",sum);
      }

