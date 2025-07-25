#include <iostream>
#include <algorithm>
using namespace std;

void insert(int idx, int num, int arr[], int& len) {
	int i = 0;
	int j = 0;
	int k = 0;
	for (; i < idx; i++)
	{
	}
	k = i;
	for (; i < len+1; i++)
	{
		arr[len - j+1] = arr[len - (j)];
		j++;
	}
	arr[k] = num;
	len++;
}

void erase(int idx, int arr[], int& len) {
	for (int i = 0; i < (len-idx);i++)
		arr[idx + i] = arr[idx + i + 1];
	len--;

}

void printArr(int arr[], int& len) {
	for (int i = 0; i < len; i++) cout << arr[i] << ' ';
	cout << "\n\n";
}

void insert_test() {
	cout << "***** insert_test *****\n";
	int arr[10] = { 10, 20, 30 };
	int len = 3;
	insert(3, 40, arr, len); // 10 20 30 40
	printArr(arr, len);
	insert(1, 50, arr, len); // 10 50 20 30 40
	printArr(arr, len);
	insert(0, 15, arr, len); // 15 10 50 20 30 40
	printArr(arr, len);
}

void erase_test() {
	cout << "***** erase_test *****\n";
	int arr[10] = { 10, 50, 40, 30, 70, 20 };
	int len = 6;
	erase(4, arr, len); // 10 50 40 30 20
	printArr(arr, len);
	erase(1, arr, len); // 10 40 30 20
	printArr(arr, len);
	erase(3, arr, len); // 10 40 30
	printArr(arr, len);
}

int main(void) {
	insert_test();
	erase_test();
}