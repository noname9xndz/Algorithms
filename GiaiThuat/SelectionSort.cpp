#include <iostream>
using namespace std;

//chọn trực tiếp interchangeSort (chọn ra phần tử min hoặc max của mảng đẩy lên đầu) độ phức tạp O(n^2)
/*
 1) Hàm nhập mảng
 2) Hàm xuất mảng
 3) Hàm SelectionSort
 4) Hàm hoán vị
 */

/*

void HoanVi(int &a, int &b) // &a giúp ta giữ lại tham chiếu để sau khi ra khỏi hàm giá trị đã được đổi sẽ không bị mất
{
	int temp = a;
	a = b;
	b = temp;
}


void SelectionSort(int a[], int n)
{
	int min; // phần tử nhỏ nhất tạm thời
	for (int i = 0; i < n - 1; i++)//n-1 để j+1 sẽ không vượt quá giá trị của mảng
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			//// sắp xếp tăng
			if(a[j]<a[min])  // a[j] > a[max]
			{
				min = j; // lưu vị trí hiện tại nhỏ nhất
			}
		HoanVi(a[i], a[min]);
		}
	}
}

*/