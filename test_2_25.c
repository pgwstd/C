//
// Created by 潘光伟 on 2022/2/25.
//

//#include "stdio.h"
//int main(){
//    int x=0;
//    int y=0;
//    scanf("%d%d",&x,&y);
//    printf("%d",x+y);
//    return 0;
//}
//运用函数数出1-100包含9字的个数
#include "stdio.h"
int shu(int m)
{
    int k=0;
    for (int i = 1; i <=100 ; ++i) {
        if(i%10==9)
            k++;
        if(i/10==9)
            k++;
    }
    return k;
}
int main()
{
    int n=0;
    int count=shu(n);
    printf("%d",count);
    return 0;
}