//
// Created by 潘光伟 on 2022/5/23.
//
#include <iostream>
using namespace std;
#define MAXSIZE 100
#define KeyType int
#define InfoType int
//定义结构体
typedef struct{
    KeyType key;  //键值
    InfoType otherinfo; //其他信息
}ElenType;
//定义队列类型
typedef struct{
    ElenType *R;
    int lenght;
}SStable;

//哨兵顺序查找
int SearchSeq(SStable ST,KeyType key){
    int i;
    ST.R[0].key = key;
    for (i = ST.lenght; ST.R[i].key != key; --i);
    return i;
}
//二分查找
int SearchBin(SStable ST,KeyType key){
    int left=1;
    int right=ST.lenght;
    while (left <= right){
        int mid=(left+right)/2;
        if (key < ST.R[mid].key){
            right=mid-1;
        }
        else if (key > ST.R[mid].key){
            left=mid+1;
        } else{
            return mid;
        }
    }
    return -1;
}
//菜单函数
void menu(){
    cout<<"************************************\n";
    cout<<"***** 1. 哨兵查找法  2. 二分查找法 *****\n";
    cout<<"************   0. 退出   ************\n";
    cout<<"************************************\n";
}
//使用枚举
enum str{
    退出,
    哨兵顺序查找,
    二分查找
};

int main() {
    int input=0;
    int key=0;
    int i=0;
    SStable t;
    t.R=new ElenType[MAXSIZE];
    do {
        menu();
        cout<<"请输入您的选择：>";
        cin>>input;
        switch (input) {
            case 哨兵顺序查找:
                cout<<"请输入您的线性表长度：\n";
                cin>>t.lenght;
                cout<<"请输入您的线性表元素：\n";
                for(i=1;i<=t.lenght;i++) cin>>t.R[i].key;
                cout<<"请输入您要查找的元素：\n";
                cin>>key;
                if(SearchSeq(t,key) > 0)
                    cout<<"您要查找的"<<key<<"是线性表中的第"<<SearchSeq(t,key)
                        <<"个元素\n";
                else cout<<"未找到！\n";
                break;
            case 二分查找:
                cout<<"请输入您的线性表长度：\n";
                cin>>t.lenght;
                cout<<"请输入您的线性表元素：\n";
                for(i=1;i<=t.lenght;i++) cin>>t.R[i].key;
                cout<<"请输入您要查找的元素：\n";
                cin>>key;
                if(SearchBin(t,key) > 0)
                    cout<<"您要查找的"<<key<<"是线性表中的第"<<SearchBin(t,key)
                        <<"个元素\n";
                else cout<<"未找到！\n";
                break;
            case 退出:
                cout<<"退出"<<endl;
                break;
            default:
                cout<<"输入错误，请重新输入！"<<endl;
                break;
        }
    } while (input);
}

