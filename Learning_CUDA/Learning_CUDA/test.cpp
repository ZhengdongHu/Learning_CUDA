#include "test.h"
#include "..\..\ImageLib\src\sort\sort.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test_simple_insert_sort()
{
	vector<int > src;
	vector<int > dst;
	src.resize(100);
	dst.resize(100);


	srand((unsigned)time(NULL)); //��ʱ�����֣�ÿ�β����������һ��

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		src[i] = rand() % ARRAY_SIZE + 1;  //����1-100�������
	}

	Sort_SimpleInsert(src, ARRAY_SIZE,dst);



}

