/*operation on array*/
#include<stdio.h>
void main(){
	int arr1[]={10,20,30,};
        int arr2[]={40,50,60};
       
        int *iparr[]={&arr1,&arr2};

	printf("%p\n",iparr[0]);
	printf("%p\n",iparr[1]);

        printf("%d\n",*(iparr[0]));
        printf("%d\n",*(iparr[1]));

   
         iparr[0]=arr1+1;
	 iparr[1]=arr2;

	printf("%d\n",*(iparr[0]));
	printf("%d\n",*(iparr[1]));
}
/*the program having output with warning */

