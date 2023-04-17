/* Can we pass an array in function as a parameter?
Ans:

Yes, we can pass an array as a parameter in C/C++ functions. Let’s see the below C example code where we are printing elements of an integer array with the help of a function.
*/
#include<stdio.h>
void printArray(int *pArray, int sizeofArray)
{
    if(pArray != NULL)
    {
        int index = 0;
        for(index = 0; index < sizeofArray; ++index)
        {
            printf("%d ",pArray[index]);
        }
    }
}
int main()
{    int a[] = {1,2,3,4};
    const int sizeofArray = sizeof(a)/sizeof(int);
    //print Array elements
    printArray(a, sizeofArray);
    printf("\n");
    return 0;
}
