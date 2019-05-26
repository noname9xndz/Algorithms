#include <iostream>
using namespace std;

//đổi chỗ trực tiếp interchangeSort (hoán vị các cặp nghịch thế) độ phức tạp O(n^2)
/*
 1) Hàm nhập mảng
 2) Hàm xuất mảng
 3) Hàm interchangeSort
 4) Hàm hoán vị
 */

/*
void HoanVi (int &a,int &b) 
{// &a giúp ta giữ lại tham chiếu để sau khi ra khỏi hàm giá trị đã được đổi sẽ không bị mất
	int temp = a;
	a = b;
	b = temp;
}
void InterChangeSort(int a[],int n)
{
	for(int i = 0; i <n-1 ; i++) //để j+1 sẽ không vượt quá giá trị của mảng
		for(int j = i+1; j < n;j++)
		{
			//// sắp xếp tăng
			if(a[j]<a[i]) // nghich thế // sắp xếp giảm a[j] > a[i]
			{
				HoanVi(a[i], a[j]);
			}
		}
}

*/