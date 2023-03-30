/*
meyremtlly@gmail.com

Write a c program that reads two 10-element arrays from the user and finds how many elements of the 2nd array are greater than the 1st array. 
In the program, the first array whose elements are given is considered as the 1st, then the given array is considered as the 2nd.
*/
#include <stdio.h>

int main() {

    int dizi1[10];
    int dizi2[10];
    int toplam=0;
    int a=0;
    for(int a=0;a<10;a++)
    {
        scanf("%d",&dizi1[a]);
    }
    for(int b=0;b<10;b++)
    {
        scanf("%d",&dizi2[b]);
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){ 
            if(dizi2[i]>dizi1[j])
            {
                toplam++;
            }
        }
        if(toplam==10)
        {
            a++;
        }
        toplam=0;
    }
    printf("%d",a);
    return 0;
}