
/* sắp xếp cây nhị phân heapsort độ phức tạp O(NlogN)
 
   node gốc có chỉ số 0
   node cha của node i có chỉ số (i-1)/2
   node con của node i có chỉ số [2i+1] (con trái) và [2i+2] (con phải)
   node cuối cùng có con trong 1 heap có n phần tử là [ n/2 - 1 ]
 */

/*
 1) Hàm nhập mảng
 2) Hàm xuất mảng
 3) Hàm hoán vi
 4) Hàm Heapify : đảm bảo nút cha lớn hơn 2 nút con(sắp xếp tăng)
 5) Hàm BuildHeap : tạo cây
 6) Hàm HeapSort : sắp xếp
 */

/*
void HoanVi(int &a, int &b) // &a giúp ta giữ lại tham chiếu để sau khi ra khỏi hàm giá trị đã được đổi sẽ không bị mất
{
	int temp = a;
	a = b;
	b = temp;
}

void Heapify(int a[], int n, int i) // i là các node của cây
{
	while (i <= n / 2 - 1) // cây nhị phân gồm 2  phần : chia mảng làm 2 phần
	{
		int left = 2 * i + 1; // cây con trái 
		int right = 2 * i + 2; // cây con phải
		int max = left;
		if (right < n && a[right] > a[max])
		{
			max = right;
		}
		if (a[i] < a[max])
		{
			HoanVi(a[i], a[max]);
		}
		i = max;
	}
}
void BuildHeap(int a[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		Heapify(a, n, i);

	}
}
void HeapSort(int a[], int n)
{
	BuildHeap(a, n);
	for (int i = n - 1; i >= 0; i--) // n-1 không xét node lớn nhất trên cùng
	{
		HoanVi(a[0], a[i]); //a[i] node đang xét
		Heapify(a, i, 0);
	}
}
*/