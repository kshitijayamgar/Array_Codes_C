/*basic array codes:- WAP to print indexwise addition of  element arr1 and arr2 */
#include<stdio.h>
    void main(){
                     
           int arr1[5];
           int arr2[5];
	   int arr3[5];
            
           
            
          printf("enter elements for 1st array:\n");
         for(int i=0;i<5;i++){

                  scanf("%d",&arr1[i]);
          }
           
	  printf("enter elements of 2nd array:\n");
	   for(int i=0;i<5;i++){
          
               scanf("%d",&arr2[i]);
	   }
	   for(int i=0;i<5;i++){    
	     arr3[i]=arr1[i]+arr2[i];
              
	   }
             printf("addition  of 2 array:-\n");
	    
         for(int i=0;i<5;i++){
              
	      printf("%d ",arr3[i]);
          }
    
    }   

