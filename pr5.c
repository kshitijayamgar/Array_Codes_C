/*basic array codes:- WAP to copy  element of  array1 into array2 */
#include<stdio.h>
    void main(){
             int size1;
             int size2;
           printf("enter the size of 1st  array:-\n");
           scanf("%d",&size1);
           printf("enter the size of 2nd array:-\n");
           scanf("%d",&size2);
           int arr1[size1];
           int arr2[size2];
           int size=size2;  
    if(size1==size2){              //testcase: don array compare krtana size should be equal..
            printf("enter elements for 1st array:\n");
         for(int i=0;i<size1;i++){

                  scanf("%d",&arr1[i]);
          }

             printf(" elements of  2nd  array:-\n");
         for(int i=0;i<size2;i++){

                  arr2[i]=arr1[i];
          }
	          for(int i=0;i<size;i++){

                  printf("%d\n",arr2[i]);
          }

   }
    else{
	    printf("you are not entered equal size for both array,plzz enter equal size for both array..\n");
     }
    }
}

