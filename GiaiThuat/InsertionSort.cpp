#include <iostream>
using namespace std;

/*chọn trực tiếp InsertionSort độ phức tạp O(n^2)
 *ví dụ sắp xếp tăng
 
với 1 mảng chưa được sắp xếp a[0->n] ,duyệt từ phần tử a[1]
pos là vị trí cần tìm , x là lưu trữ phần tử bị cắt , mặc định đoạn a[0] đã dược sắp xếp
Xét từ phần tử a[1]

l1 : a[1] sẽ dược lưu vào x và bị cắt ra , coi a[0] là pos ,chèn đoạn [0,0]
  nếu pos > x dịch a[0] sang phải 1 vị trí , đẩy x vào a[0]
  nếu pos < x giữ nguyên

l2 : a[2] lưu vào x bị cắt ra  , coi a[1] là pos , chèn đoạn [0,1]
    nếu pos > x dịch a[1] sang phải 1 vị trí , xét tiếp nếu a[0] > x dịch a[0] sang phải 1 vị trí đẩy x vào
    nếu pos < x giữ nguyên
tương tự chèn đoạn [ 0->n ]
    

 */


/*
 1) Hàm nhập mảng
 2) Hàm xuất mảng
 3) Hàm InsertionSort
 */

 /*

 void InsertionSort(int a[], int n)
{
	int pos; // vi trí cần tìm
	int x; // lưu phần từ a[i] để tránh bị ghi đè các phần tử khi  dời phần tử
	int i;
	for (i = 1; i < n; i++) // mặc định a[0] đã được sắp xếp
	{
		x = a[i];
		pos = i - 1; // i -1 là vị trí phần từ phía trước

		// tìm vị trí để chèn x vào phía trước
		while (( pos >=0 ) && (a[pos] > x)) // sắp xếp giảm a[pos] < x
		{
			a[pos + 1] = a[pos];
			pos--;
		}
		// sau khi tìm được vị trí hiện tại đầu tiên là -1 => làm tiếp pos + 1 vị trí
		a[ pos + 1] = x; // đã tìm được vị trí


	}
}
*/
