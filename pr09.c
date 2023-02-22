/*WAP to print 3D array  take all i/p from user*/

#include<stdio.h>
void main(){
             int size;
             int sum=0;
             int plane=2;

           printf("enter the size of array:-\n");
           scanf("%d",&size);
           printf("size of array is %dx%d & having %d plane \n",size,size,plane);
           int arr[size][size][plane];
           printf("enter the elements for 3D array:\n");
            for (int i=0;i<size;i++){  // i/p loop
                    for(int j=0;j<size;j++){

			 for(int k=0;k<2;k++){
                            scanf("%d",&arr[i][j][k]);
                           
                         }
		   }
             }

           printf("elements in 3D array are:|");
               for (int i=0;i<size;i++){  // o/p loop
                    for(int j=0;j<size;j++){
			   for(int k=0;k<2;k++){
                            printf("%d|",arr[i][j][k]);

                         }
	             }
                 }
	   printf("\n");
}

