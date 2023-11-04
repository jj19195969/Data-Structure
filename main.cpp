#include <iostream>

using namespace std;
/*
 * 顺序表
 * 1：内存地址是连续(数组）
 * 2：静态数组 int arr[10] 是不可变的
 * 3：动态数组 int *arr = malloc(sizeof(int)*N) 可以用指针指向一个可变空间
 */

typedef int My_Type;
#define MAXSIZE 10

//定义顺序表
struct SeqList{
    My_Type *data;  //存放的数据
    int size;       //现有元素
    int capacity;   //最大容量
};

//初始化顺序表
void initSeqList(SeqList* sl){
    sl->data = new My_Type[MAXSIZE];
    memset(sl->data,0,sizeof(sl->data[sl->capacity]));
    sl->size = 0;
    sl->capacity =  MAXSIZE;
}

//添加数据
void push_back(SeqList* sl, My_Type val){
    if(sl == nullptr)   return;
    if(sl->size == sl->capacity) {
        cout<<"顺序表已满 无法加入"<<endl;
    }
    sl->data[sl->size++] = val;
}

//插入操作
void ListInsert(SeqList* sl, int pos, int val){

}

//删除操作
void ListDelete(SeqList* sl, int pos){

}

//按值查找
void LocateElem(SeqList* sl, int val){

}

//按位查找
void GetElem(SeqList* sl, int val){

}

//判空操作
bool Empty(SeqList* sl){

}

//求表长
int length(SeqList* sl){

}

//销毁表
bool DestroyList(SeqList* sl){

}

// 输出数组
void print(SeqList* sl){
    for(int i = 0; i < sl->size;){
        cout<<sl->data[i++]<<" ";
    }
    cout<<endl;
}
int main() {
    SeqList sl;
    initSeqList(&sl);
    for(int i = 1; i < 11; i++){
        push_back(&sl,i);
    }
    print(&sl);
    return 0;
}
