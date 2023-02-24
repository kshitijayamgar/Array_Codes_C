/*simple program for 3D array*/

#include<stdio.h>
void main(){
	     int arr[2][2][3]={{1,2,3,4,5,6},{7,8,9,10,11,12}};
	      printf("3D Array\n");
	  for(int i=0;i<2;i++){
		  printf("plane:%d\n",i);
                for(int j=0;j<2;j++){
		   for(int k=0;k<3;k++){
			printf("|%d|",arr[i][j][k]);
		   }
	      }
		printf("\n");
	  }
}

