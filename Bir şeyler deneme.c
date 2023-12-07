#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
    

int per(int c,int d);


int main()
{
    int a, b;

    printf("Permutasyonunu hesaplamak istediginiz sayiyi giriniz:");
    scanf("%d", &a);

    printf("%d sayisinin kacli permutasyonunu hesaplamak istiyorsunuz:", a);
    scanf("%d", &b);

    printf("%d", per(a,b));

}

int per(c,d)
{

    if (c == 1 || c == 0)
    {
        return 1;
    }
    else if (d==0||d==1) {
        return c* per(c-1,0);
    }
    else
    {
        return (c* per(c - 1, 0)) / (per(d-1,0));
    }

}


