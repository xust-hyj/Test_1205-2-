#include <stdio.h>
#include <stdlib.h>
int main(){
	//���ֲ��� �۰���� ǰ���Ǳ�����������
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int len = sizeof(arr)/sizeof(int);
	//printf("%d\n",len);
	int to_find = 9;
	//[left ,right]Ϊ����������
	int left = 0;
	int right = 10 - 1;
	int mid = 0;
	while (left <= right){
		mid = (left + right) / 2;
		if (arr[mid] < to_find){
			//���Ҳ���
			left = mid + 1;
		}
		else if (arr[mid] > to_find){
			//�������
			right = mid - 1;
		}
		else{
			break;
		}
	}if (left <= right){
		printf("%d\n", mid);
	}
	else{
		printf("û�ҵ�\n");
	}
	system("pause");
	return 0;
}
