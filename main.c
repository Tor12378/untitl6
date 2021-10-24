#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    long int *rez_array;
    int length_rez_array=0;

    long int kol=0;

    scanf("%d",&length_rez_array);
    rez_array = (long int*)malloc( length_rez_array* sizeof(long int));

    for(int i=0; i < length_rez_array; i++)
    {
        scanf("%ld", &rez_array[i]);
    }
    for(int i=0;i<length_rez_array-2;i++){
        for(int i1=i+1;i1<length_rez_array-1;i1++){
            for(int i2=i1+1;i2<length_rez_array;i2++){
                if(((i1+1)==((i+1+i2+1)/2))&&(rez_array[i1]==((rez_array[i]+rez_array[i2])/2))){
                    kol++;
                }

            }
        }
    }
    printf("%ld",kol);

    return 0;
}