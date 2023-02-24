/* To print sum of diagonal elements*/

#include<stdio.h>
void main(){
        int rows;
        int cols;
        int sum=0;
        printf("enter rows:\n");
        scanf("%d",&rows);
        printf("enter cols:\n");
        scanf("%d",&cols);
        int arr[rows][cols];
        printf("enter array elements:\n");
        for(int i=0;i<rows;i++){
           for(int j=0;j<cols;j++){
               scanf("%d",&arr[i][j]);
           }
         }
           printf("\n");
           printf("2D Array:");
        for(int i=0;i<rows;i++){
           for(int j=0;j<cols;j++){
               printf("|%d|",arr[i][j]);
           }
         }
	        printf("\n");
        printf("Diagonal addition\n");
        if(rows==cols){
for(int i=0;i<rows;i++){
           for(int j=0;j<cols;j++){
               if(arr[i]==arr[j]){
                 sum=sum+arr[i][j];
               }
           }
         }
        printf("\n");
 printf("sum of diagonal elements:%d\n",sum);
  }

else{
    printf("For addition of diagonal ele.rows &cols must be equal ,enter equal no.of.rows &cols!\n");

    }                                               
}

