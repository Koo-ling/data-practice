/*
#include<iostream>
using namespace std;
void print(int a[], int n) {
	for (int i = 0; i <= n-1; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int a[], int n) {
	bool flag;
	int i, j,temp;
	for (i = 0; i <= n - 1; i++) {
		flag = 0;
		for (j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
				flag = 1;
			}
			
		}
		print(a, n);
		if (flag == 0)
			return;
	
	}
}
int main() {
	int a[8] = {42,38,65,97,76,13,27,49};
	cout << "��ʼ��������" << endl;
	print(a, 8);
	cout << "�������ÿ������������" << endl;
	bubbleSort(a, 8);
	//print(a, 8);
	return 0;
}
*/