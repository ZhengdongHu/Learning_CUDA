/**
*    author : huzhegndong
*    e-mail : 462468145@qq.com
*    date   : 20181205
*    desc   : test learning
*    version: 1.0


	8���ڲ�����CPU CUDA�汾
	�����㷨���Է�Ϊ�ڲ�������ⲿ����
	�ڲ����������ݼ�¼���ڴ��н�������
	���ⲿ����������������ݺܴ�
	һ�β�������ȫ���������¼��
	�������������Ҫ������档

	�������ڲ������㷨�У�
	��������	ֱ�Ӳ�������ϣ������

	ѡ������	��ѡ�����򡢶�����

	��������	ð�����򡢿�������

	�鲢����
	
	��������ȡ�

*/



#ifndef _SORT_H_
#define _SORT_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
	�򵥲�������:�㷨���裺
	1������һ���������е�һ��Ԫ�ؿ���һ���������У�
	�ѵڶ���Ԫ�ص����һ��Ԫ�ص�����δ�������С�
	2����ͷ��β����ɨ��δ�������У���ɨ�赽��ÿ��Ԫ�ز����������е��ʵ�λ�á�
	����������Ԫ�������������е�ĳ��Ԫ����ȣ��򽫴�����Ԫ�ز��뵽���Ԫ�صĺ��档

	�����ڴ�
	����
	����ڴ�
*/
void Sort_SimpleInsert(vector<int> &src, int length, vector<int> &dst);


/*
�򵥲�������
�����ڴ�
����
����ڴ�
*/
void Sort_Shell(vector<int> &src, int length, vector<int> &dst);





#endif // !_SORT_H_
