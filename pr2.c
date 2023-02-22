/*basic array codes:- WAP to take i/p from user to compare the 2  array and take size from user*/

#include<stdio.h>

  void main(){
	     int flag;
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

             printf("enter elements for 2nd  array:-\n");
         for(int i=0;i<size2;i++){ 

                  scanf("%d",&arr2[i]);
          }
         for(int i=0;i<size;i++){  //comparing loop

                  if(arr1[i]==arr2[i]){
		        	  
			  flag=1;
		  }
		  else{
			  flag=0;
		  }
         }
               	if(flag==0){
			printf("arrays are not equal\n");
		}
	      else{
		      printf("arrays are equal!!!\n");
	        }
             
      }
  else{
	    printf("you are not entered the equal size of two array cannot compare!,plzz enter equal array size for both array\n");

     }
 }

