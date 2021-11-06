/*#include <stdio.h>
#include "max.h"
#include "aclapi.h"
#include "stdlib.h"*/
/*
 * 模拟实现道具店的购物功能
 * 商店暂时只支持一种类型的商品
 * 商品局部名称、价格、库存等属性
 * 模拟玩家购买游戏道具
 * 1、玩家选择要购买的道具
 * 2、玩家统一交易后扣除相应游戏币
 * 对应商品库存-1
 * 玩家背包中只能加商品或者该商品数量加一
 *
 */
//商品结构
/*typedef struct _proop{
    int id;//道具编码
    char name[50];//道具名称
    double price;//道具单价
    int stock;//库存量 如果在背包中表示此道具的叠加数量
    char sesc[200];//道具的功能描述
}Prop;
//背包的结构
typedef struct _bag{
    int playerId;//所属玩家的编号
    int count;//当前背包中道具的数量
    int max;//当前背包中的容量
    Prop props[];//当前背包中的道具数组
}Bag;
//玩家结构、
typedef struct _player{
    int id;//玩家编号
    char name[50];//用户名
    char pass[50];//密码
    Bag bag;//玩家背包
    double gold;//玩家金币
    double sysee;//元宝数量
}Player;
Prop *props;
void Init();//初始化游戏数据
void ShowProps();
void ShowPlaye();
int main() {

    return 0;
}
void Init(){
    Prop propArray[]={
            {1,"双倍经验卡",3000,10,"经验翻倍"},
            {2,"疾风刃",50000,10,"风属性的大杀器"},
            {2,"疾风刃",50000,10,"风属性的大杀器"},
            {3,"韧性鞋",3000,10,"穿上跑的特快"},
    };
    props = propArray;
    Player playerArray[]={
            {1,"疾风剑豪","123456",.gold=50000},
            {2,"小垃圾","123456",.gold=150000},
            {3,"陈总","123456",.gold=1500000},
    };
    props = propArray;
}
void ShowProps(){
    int i;
    if (props==NULL)return;

}
*/
#include "stdlib.h"
#include "windows.h"

/*int main(){
    setbuf(stdin,NULL);
    int zhili;
    int tili;
    int yanzhi;
    int caifu;
    int sum =20;
    printf("欢迎来到人生模拟器");
    system("Sleep");
    system("cls");
    printf("请输入您的各项信息\n");
    printf("一共二十点，请合理分配\n");
    printf("请输入智力点数:");
    scanf("%d\n",&zhili);
    printf("请输入体力点数");
    scanf("%d\n",&tili);
    printf("请输入颜值点数：",&yanzhi);
    printf("请输入财富点数");
    scanf("%d\n",&caifu);
    if (zhili+tili+yanzhi+caifu>sum){
        int duochu;
        duochu = (zhili+tili+yanzhi+caifu)-sum;
        printf("你是傻子吗，多了%d个点了",duochu);
    }
    if(zhili+tili+yanzhi+caifu<sum){
        int shengyu;
        shengyu=sum-(zhili+tili+yanzhi+caifu);
        printf("还有好%d个点呢为什么不用",shengyu);
    }
}*/
/*int main(){
    int number;
    int sum =0;
    int count = 0;
    scanf("%d",&number);
    while (number !=-1){
        sum +=number;
        count ++;
        scanf("%d",&number);
    }
    printf("%f\n",1.0*sum/count);
    return 0;
}*/
/*
#include "stdlib.h"
#include "stdio.h"
#include "aclapi.h"
#define PI 3.14//宏定义
#define S(a,b) ((a)*(b))//带参宏
#undef PI//终止宏定义
void swap(int *pa,int *pb){
    int t = *pa;
    *pa=*pb;
    *pb =t;
}//指针交换两个变量
char * mycpy(char * dest,const char * src){

    int idx = 0;
    while (src[idx] !='\0'){
        dest[idx] = src[idx];
        idx++;
    }
    dest[idx] = '\0';
    return dest;//复制一个函数
}
//声明结构类型
struct  date{//声明结构
    int month;
    int day;
    int year;
};struct date today ;//定义结构变量
//指向结构的指针
struct date1{
    int month;
    int day;
    int year;
} myday;
int main(void ){
    //定义一个普通变量
    int a = 100;
    //定义一个指针变量
    //int *p;
    //给指针变量赋值
    //将a的地址保存在p中
    //p=&a;
    //printf("a=%d %d\n",a,*p);
    printf("%d",a);

    //int *pointer = malloc(sizeof (int)*10);
    //system("pause");
    //return 0;
     //int  a = 1;
     //int b = 3;
    //printf("%d\n", max(a,b));*/
    /*
    struct date *p = &myday;
    (*p).month = 12;
    p->month = 12;//用->表示所指的结构变量中的成员
    struct date today = {07,31,2014};//初始化结构
    struct date thismonth = {.month=0,.day=1,.year=2};//第二中初始化*/
    /*int number;
    int *a;
    int i;
    printf("输入数量");
    scanf("%d",&number);
    a = (int *) malloc(number*sizeof (int ));
    for ( i = 0; i <number ; i++) {
       //代码不完全
    }/*
    /*FILE *fp = NULL;//定义空指针
    fp = fopen("C:\\Users\\22232\\Desktop\\text.bat","w+");//创建文件
    fprintf(fp,"ipconfig\n");//写入文件
    fputs("cls\n",fp);//xie
    fprintf(fp,"net staat -an");

    fclose(fp);*/
    /*void *p;
    int cnt = 0;
    while ((p = malloc(100*1024*1024))){
        cnt++;
    }
    printf("%d00mb",cnt);*/
    /*
    void *p;
    int cnt = 0;
    p = malloc(100*1024*1024);//申请临时得地址
    p++;
    free(NULL);*///归还临时申请得地址
//    int a[3][5],i,j;
//    printf("please input:\n");
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j <5 ; ++j) {
//            scanf("%d",a[i]+j);
//
//        }
//    }
/*double weight;
double  stature;
double T;
    scanf("%lf%lf",&weight,&stature);

    T=weight/(stature);
    if (T<18){
        printf("低体重");
    }
    if (T>18||T<25){
        printf("超重");
    }
    if (T>25||T<27){
        printf("超重");
    }
    if ("T>=27"){
        printf("肥胖");
    }

}*/
//比较两个指针大小
#include "stdio.h"
#include "stdlib.h"
//两个相同类型指针可以比较大小
void test2(){
    int a[10];
    int *p,*q;
    p = &a[1];
    q=&a[0];
    if (p<q){
        printf("p<q\n");
    } else if (p>q){
        printf("p>q\n");
    } else{
        printf("p = q\n");
    }
}
//两个指针相减
void test3(){
    int a[10];
    int *p ,*q;
    p = &a[0];
    q= &a[3];
    printf("%d\n",q-p);
}
//两个指针相互赋值
//相同类型的才可以相互赋值（void类型的除外）
void test4(){
    int a =100;
    int *p ,*q;
    p = &a;
    printf("a = %d\n",a,*p);
    q= p;
    printf("*q = %d\n",*q);
    *q = 999;
    printf("a = %d\n",a);
}
int main(){
    test2();
    test3();
    test4();

}
