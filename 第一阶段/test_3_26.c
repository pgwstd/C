//
// Created by 潘光伟 on 2022/3/26.
//
//螺旋数阵由外向内旋转的8种情况
#include <stdio.h>
#define N 5
int print_array(int (*b)[N]);
int spin_array(int (*c)[N]);
int fold_array(int (*d)[N]);
int main(int argc, const char *argv[])
{
    int s[N][N];
    int k=0,i=0,j=0;
    int a=1;
    for(;k<(N+1)/2;k++)
    {
        while(j < N-k)s[i][j++]=a++;i++;j--;
        while(i < N-k)s[i++][j]=a++;i--;j--;
        while(j > k-1)s[i][j--]=a++;i--;j++;
        while(i > k)s[i--][j]=a++;i++;j++;
    }
    spin_array(s);
    printf("=============================\n");
    fold_array(s);
    printf("=============================\n");
    spin_array(s);
    printf("=============================\n");
    fold_array(s);
    printf("=============================\n");
    spin_array(s);
    printf("=============================\n");
    fold_array(s);
    printf("=============================\n");
    spin_array(s);
    printf("=============================\n");
    fold_array(s);
}
int spin_array(int (*c)[N])
{
    int i,j;
    int b[N][N];
    int (*p)[N]=c;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            b[i][j]=p[N-j-1][i];
        }
    }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            c[i][j] = b[i][j];
        }
    print_array(c);
    return 0;
}
int fold_array(int (*d)[N])
{
    int i,j,tmp;
    int a[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            a[i][j]=d[i][j];
        }
    }
    for(i=0;i<N;i++)
        for(j=0;j<i;j++)
        {

            tmp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=tmp;
        }
    print_array(a);
    return 0;
}
int print_array(int (*b)[N])
{
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            printf("%5d",b[i][j]);
            if((j+1)%N==0)
                putchar('\n');
        }
    return 0;
}
