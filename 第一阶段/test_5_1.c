//
// Created by 潘光伟 on 2022/5/1.
//
//#include "stdio.h"
//void bubble_sort(int arr[],int sz)
//{
//    int tmp=0;
//    for (int i = 0; i < sz-1; ++i) {
//        for (int j = 0; j < sz-1-i; ++j) {
//            if(arr[j]>arr[j+1])
//                tmp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=tmp;
//        }
//    }
//    printf("\n");
//}
//void print_array(int arr[],int sz)
//{
//    for (int i = 0; i < sz; ++i) {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//}
//
//int main()
//{
//
//    int arr[]={9,8,7,6,5,4,3,2,1,0};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    print_array(arr,sz);
//    bubble_sort(arr,sz);
//    print_array(arr,sz);
//    return 0;
//}


//#include "stdio.h"
//#include "stdlib.h"
////打印数组
//void print_array(int arr[],int sz)
//{
//    for (int i = 0; i < sz; ++i) {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//}
//int cmp_int(const void* e1,const void* e2)
//{
//    return *(int*)e1-*(int*)e2;
//}
//int main()
//{
//
//    int arr[]={9,8,7,6,5,4,3,2,1,0};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    print_array(arr,sz);
//    qsort(arr,sz,4,cmp_int);
//    print_array(arr,sz);
//    return 0;
//}


#include "stdio.h"
#include "stdlib.h"
struct stu{
    char name[20];
    int age;
};
//打印数组
void print_array(int arr[],int sz)
{
    for (int i = 0; i < sz; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int sort_by_age(const void* e1,const void* e2)
{
    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void test()
{
    struct stu s[3]={{"张三",34},{"王五",30},{"李四",20}};
    int sz=sizeof(s)/sizeof(s[0]);
    qsort(s,sz,sizeof (s[0]),sort_by_age);
//    print_array(s,sz);
}
int main()
{
    test();
    return 0;
}