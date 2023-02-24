/*To check 2 Arrays are equal or not?*/

#include<stdio.h>
void main(){
        int arr1[3]={10,20,30};
        int arr2[3]={10,25,35};
        printf("Array1:");
        for(int i=0;i<3;i++){
                printf("|%d|",arr1[i]);
        }
         printf("\n");
         int flag=0;
        printf("array2:");
         for(int i=0;i<3;i++){
                 printf("|%d|",arr2[i]);
         }
           printf("\n");
          for(int i=0;i<3;i++){
                 if(arr1[i]==arr2[i]){
                        flag=1;
                 }
                 else{
                      flag=0;
                 }
         }
           if(flag==1){

            printf("array is equal\n");
	   }       else{
                   printf("not equal\n");
           }
}

