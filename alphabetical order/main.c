#include <stdio.h>
#include <stdlib.h>

int main()
{
    char city[4][10],a,b;
    for(a=0;a<4;a++)
    {
        printf("Enter city %d: ",a+1);
        scanf(" %s",&city[a]);
    }
    for(a=0;a<=3;a++)
    {
        char city1[1];
        for(b=0;b<=3;b++)
        {
            if(city[a]<city[b])
            {
                city1[0]=city[a];
                city[a]=city[b];
                city[b]=city1[0];
            }
        }
    }
    printf("The elements of the array in ascending order are:\n\t");
    for(a=0;a<=3;a++)
    {
        printf("%s\t",city[a]);
    }
}
