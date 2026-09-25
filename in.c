#include<stdio.h>
int main()
{
    int intarr[5];
    float floatarr[5];
    char chararr[5];
    int i;
    //Input values for integer array
    printf("Enter 5 integers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&intarr[i]);
    }
    //Input values for float array
    printf("Enter 5 floats:\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&floatarr[i]);
    }
    //Input values for character array
    printf("Enter 5 characters:\n");
    for(i=0;i<5;i++)
    {
        scanf(" %c",&chararr[i]);
    }
    //display integer array values and their addresses
    for(i=0;i<5;i++)
    {
        printf("Integer array element %d: %d, Address: %p\n",i,intarr[i],(void*)&intarr[i]);
    }
    //display float array values and their addresses
    for(i=0;i<5;i++)
    {
        printf("Float array element %d: %.2f, Address: %p\n",i,floatarr[i],(void*)&floatarr[i]);
    }
    //display character array values and their addresses
    for(i=0;i<5;i++)
    {
        printf("Character array element %d: %c, Address: %p\n",i,chararr[i],&chararr[i]);
    }
    return 0;
}