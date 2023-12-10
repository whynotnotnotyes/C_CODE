//#define _CRT_SECURE_NO_WARNINGS 1
//这句话可以不加，因为.h文件里可以不用scanf和printf



//int add(int a, int b);



int binary_search(int arr[], int k, int sz);
//形参和实参一样是没有问题的，因为形参和实参相互独立



int menu();
int game();



#ifndef __ADD_H__
//如果函数未定义
#define __ADD_H__
//那就定义一个函数

int add(int x, int y);

#endif
//结束

//如果函数已定义，那就不再定义，为了防止函数的重复定义

