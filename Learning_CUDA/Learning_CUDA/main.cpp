//learning cuda pro
//test pro
//huzhengdong
//20181119

#include <iostream>

using namespace std;

typedef enum _TEST_TYPE
{
	TEST_NONE = 0,   // �������κβ���
	TEST_MAT_ADD = 1,   // ����ģ�����
	TEST_SIMPLE_INSERT_SORT = 2,


}TEST_TYPE;

void main(int argc, char *argv[])
{

	TEST_TYPE testType;

	testType = TEST_NONE;

	if (argc > 1){
		testType = (TEST_TYPE)atoi(argv[1]);
	}



}