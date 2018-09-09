#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4],a,b;
    for(a=0;a<=3;a++)
    {
        printf("Enter the value of Element %d: ",a+1);
        scanf("%d",&arr[a]);
    }
    for(a=0;a<=3;a++)
    {
        int temp;
        for(b=0;b<=3;b++)
        {
            if(arr[a]<arr[b])
            {
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    printf("The elements of the array in ascending order are:\n\t");
    for(a=0;a<=3;a++)
    {
        printf("%d\t",arr[a]);
    }

}
