//
// Created by 潘光伟 on 2022/3/16.
//
//
//#include "stdio.h"
//void bubble_sort(int a[],int sz)
//{
//    int tmp=0;
//    for (int i = 0; i < sz-1; ++i) {
//        tmp=a[i];
//        a[i+1]=a[i];
//        a[i]=tmp;
//     if(a[i]<a[i+1])
//         a[i]=a[i+1];
//        printf("%d ",a[i]);
//    }
//}
//void print(int p[])
//{
//    for (int i = 0; i < 10; ++i) {
//        printf("%d ",p[i]);
//    }
//}
//int main()
//{
//    int number=0;
//    int tmp=0;
//    int arr[]={1,2,3,4,5,6,7,8,9};
//    printf("请输入你要输入数的个数:\n");
//    scanf("%d",arr);
//    int size=(sizeof(arr)/sizeof(arr[0]));
//    bubble_sort(arr,size);
//    for (int i = 0; i < 10; ++i) {
//        if(arr[i]<arr[i+1])
//            tmp=arr[i];
//            arr[i]=arr[i+1];
//            arr[i]=tmp;
//
//    }
//    print(arr);
//    return 0;
//}
#include "stdio.h"
int main()
{
    int i=0;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int tmp;
    for (i = 0; i < 10; ++i) {
        if(arr[i]<arr[i+1])
        tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
    }

    return 0;
}
