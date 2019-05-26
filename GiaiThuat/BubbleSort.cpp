#include <iostream>
using namespace std;

//chọn trực tiếp bubbleSort (duyệt từ cuối mảng trở về đổi chỗ các cặp phần tử kế cận nhỏ hơn ( hoặc lớn hơn) và ko xét nó ở bước sau ) độ phức tạp O(n^2)
/*
 1) Hàm nhập mảng
 2) Hàm xuất mảng
 3) Hàm bubbleSort
 4) Hàm hoán vị
 */

 /*

 void HoanVi(int &a, int &b) // &a giúp ta giữ lại tham chiếu để sau khi ra khỏi hàm giá trị đã được đổi sẽ không bị mất
 {
	 int temp = a;
	 a = b;
	 b = temp;
 }



void BublleSort(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1]) // sai vị trí thì đổi chỗ
			{
				HoanVi(a[j], a[j - 1]);
			}
		}
	}
}
*/
