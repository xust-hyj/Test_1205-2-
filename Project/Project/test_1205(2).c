#include <stdio.h>
#include <stdlib.h>
int main(){
	//二分查找 折半查找 前提是必须数组有序
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int len = sizeof(arr)/sizeof(int);
	//printf("%d\n",len);
	int to_find = 9;
	//[left ,right]为待查找区间
	int left = 0;
	int right = 10 - 1;
	int mid = 0;
	while (left <= right){
		mid = (left + right) / 2;
		if (arr[mid] < to_find){
			//向右查找
			left = mid + 1;
		}
		else if (arr[mid] > to_find){
			//往左查找
			right = mid - 1;
		}
		else{
			break;
		}
	}if (left <= right){
		printf("%d\n", mid);
	}
	else{
		printf("没找到\n");
	}
	system("pause");
	return 0;
}
