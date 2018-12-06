/**
*    author : huzhegndong
*    e-mail : 462468145@qq.com
*    date   : 20181205
*    desc   : test learning
*    version: 1.0


	8中内部排序，CPU CUDA版本
	排序算法可以分为内部排序和外部排序，
	内部排序是数据记录在内存中进行排序，
	而外部排序是因排序的数据很大，
	一次不能容纳全部的排序记录，
	在排序过程中需要访问外存。

	常见的内部排序算法有：
	插入排序：	直接插入排序、希尔排序

	选择排序：	简单选择排序、堆排序

	交换排序：	冒泡排序、快速排序

	归并排序、
	
	基数排序等。

*/



#ifndef _SORT_H_
#define _SORT_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
	简单插入排序:算法步骤：
	1）将第一待排序序列第一个元素看做一个有序序列，
	把第二个元素到最后一个元素当成是未排序序列。
	2）从头到尾依次扫描未排序序列，将扫描到的每个元素插入有序序列的适当位置。
	如果待插入的元素与有序序列中的某个元素相等，则将待插入元素插入到相等元素的后面。

	输入内存
	长度
	输出内存
*/
void Sort_SimpleInsert(vector<int> &src, int length, vector<int> &dst);


/*
简单插入排序
输入内存
长度
输出内存
*/
void Sort_Shell(vector<int> &src, int length, vector<int> &dst);





#endif // !_SORT_H_
