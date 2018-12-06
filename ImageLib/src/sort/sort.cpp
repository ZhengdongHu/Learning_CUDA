#include "sort.h"





void Sort_SimpleInsert(vector<int> &src, int length, vector<int> &dst)
{
	for (int i = 0; i < length;i++)
	{
		if (i == 0)
		{
			dst[i] = src[i];
		}
		else
		{
			for (int j = 0; i < i; j++)
			{
				if (src[i] >= dst[j])
				{

				}
			}
		}
	}
}



void Sort_Shell(vector<int> &src, int length, vector<int> &dst)
{

}

