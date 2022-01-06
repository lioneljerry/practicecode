//#define _CRT_SECURE_NO_WARNINGS
////////////////仅局限于整数的冒泡排序
////#include <stdio.h>
////
////void BubbleSort(int arr[],int sz)
////{
////	int i = 0;
////	int j = 0;
////	for (i = 0; i < sz-1; i++)////一趟冒泡排序
////	{
////		for (j = 0; j <sz-1-i ;j++)////冒泡排序比较次数 sz-1-i
////		{
////			if (arr[j]>arr[j+1])
////			{
////				int tmp = 0;
////				tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////}
////
////int main()
////{
////	int i = 0;
////	int arr[] = {9,8,6,7,5,4,3,2,1,0};
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	BubbleSort(arr,sz);
////	for (i = 0; i < sz;i++)
////	{
////		printf("%d ",arr[i]);	
////	}
////	return 0;
////}
////////////////////////
////
////////////////任意类型的冒泡排序
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)////一趟冒泡排序
//	{
//		for (j = 0; j <sz-1-i ;j++)////冒泡排序比较次数 sz-1-i
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void test_int()
//{
//	int i = 0;
//	int arr[] = { 9, 8, 6, 7, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_float(const void* e1,const void* e2)
//{
//	//if (*(float*)e1 == *(float*)e2)
//	//{
//	//	return 0;
//	//}
//	//else if (*(float*)e1>*(float*)e2)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//	return (int)(*(float*)e1 - *(float*)e2);
//
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_struct_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//int cmp_struct_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test_float()
//{
//	int j = 0;
//	float f[] = { 7.0, 6.0, 8.0, 9.0, 5.0, 3.0, 4.0, 1.0, 2.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f,sz,sizeof(f[0]), cmp_float);
//	for (j = 0; j < sz;j++)
//	{
//		printf("%f ",f[j]);
//	}
//}
//
//void test_struct_name()
//{
//	int i = 0;
//	struct stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_by_name);
//
//}
//void test_struct_age()
//{
//	int i = 0;
//	struct stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_by_age);
//	//第一个参数：待排序数组首元素地址
//	//第二个参数：待排序数组元素个数
//	//第三个参数：待排序数组每个元素大小		单位字节
//	//第四个参数：函数指针，	比较两个元素的所用函数的地址，该函数自己实现
//	//函数指针的两个参数：待比较的两个元素的地址
//}
//
//int main()
//{
//	//void qsort (void* base, size_t num, size_t size,int(*compar)(const void*, const void*));
//
//	test_int();
//	printf("\n");
//	test_float();
//	printf("\n");
//	test_struct_name();
//	test_struct_age();
//	return 0;
//}
//////////////////////
