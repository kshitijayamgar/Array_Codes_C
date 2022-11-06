/*WAP to create 2D Array take all i/p from user separate the even and odd ele if ele is even print squre if odd print its cube
   i/p= [1 2 3
         4 5 6
         7 8 9]

   o/p= [ 1   4    27
          16 125  36
	  343 64  729] */

#include<stdio.h>
void main(){
            
           int size;
             
           printf("enter the size of array:-\n");
           scanf("%d",&size);
           printf("size of array is %dx%d \n",size,size);
           int arr[size][size];
           printf("enter the elements for 2D array:\n");
            for (int i=0;i<size;i++){           // i/p loop         
                    for(int j=0;j<size;j++){               
                          scanf("%d",&arr[i][j]);        
                              
                      }
                   }
             
	           printf("elements in array are: |");

	     for (int i=0;i<size;i++){           // o/p loop         
                    for(int j=0;j<size;j++){
                          printf("%d|",arr[i][j]);

                      }
                   }
	      printf("\n");
              printf("expected  array is: |");
               for (int i=0;i<size;i++){
		       for(int j=0;j<size;j++){
 
                          if((arr[i][j])%2==0){
                          printf("%d|",(arr[i][j])*(arr[i][j]));
                           }
			  else{
				  printf("%d|",(arr[i][j])*(arr[i][j])*(arr[i][j]));
	                   }
	               }
		 }
	           printf("\n");
   }

             
  

