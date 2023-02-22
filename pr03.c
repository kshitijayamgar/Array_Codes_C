/*basic array codes:- WAP to take i/p from user to print  array element by even odd sequence print them*/


#include<stdio.h>

  void main(){
             int size;
	     int flag;
           printf("enter the size of array:-\n");
           scanf("%d",&size);
           int arr[size];
           printf("enter array elements:\n");
           for(int i=0;i<size;i++){  //i/p loop

                  scanf("%d",&arr[i]);
            }

            printf(" even elements in array are:-\n");
            for(int i=0;i<size;i++){ 
               if(arr[i]%2==0){
                   printf(" %d\n",arr[i]);
		       flag=1;
                }
	     }

	       printf(" odd elements in array are:-\n");
            for(int i=0;i<size;i++){
               if(arr[i]%2!=0){
                   printf(" %d\n",arr[i]);
                  flag=0;
                }
             }
  }


