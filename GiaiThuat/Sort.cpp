//#include <iostream>
//using namespace std;
//
//void NhapMang(int a[], int n) // a[] vaÌ a * đều trỏ về vùng nhớ của phần tử đầu tiên trong mảng 
//{
//	cout << "nhap cac gia tri cho cac phan tu cho mang \n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap gia tri cho phan tu a[" << i << "]:";
//		cin >> a[i];
//	}
//}
//void XuatMang(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << "  ";
//	}
//}
//void HoanVi(int &a, int &b) // &a giúp ta giữ lại tham chiếu để sau khi ra khỏi hàm giá trị đã được đổi sẽ không bị mất
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////--------------------------------InterChangeSort-------------------------
//void InterChangeSort(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++) //để j+1 sẽ không vượt quá giá trị của mảng
//		for (int j = i + 1; j < n; j++)
//		{
//			//// sắp xếp tăng
//			if (a[j] < a[i]) // nghich thế // sắp xếp giảm a[j] > a[i]
//			{
//				HoanVi(a[i], a[j]);
//			}
//		}
//}
////--------------------------------InterChangeSort-------------------------
//
//
////--------------------------------SelectionSort-------------------------
//void SelectionSort(int a[], int n)
//{
//	int min; // phần tử nhỏ nhất tạm thời
//	for (int i = 0; i < n - 1; i++)//n-1 để j+1 sẽ không vượt quá giá trị của mảng
//	{
//		min = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			//// sắp xếp tăng
//			if (a[j] < a[min])  // a[j] > a[max]
//			{
//				min = j; // lưu vị trí hiện tại nhỏ nhất
//			}
//			HoanVi(a[i], a[min]);
//		}
//	}
//}
////--------------------------------SelectionSort-------------------------
//
////--------------------------------BublleSort-------------------------
//
//void BublleSort(int a[],int n)
//{
//	int i, j;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=n-1;j>i;j--)
//		{// sắp xếp tăng
//			if(a[j] < a[j-1]) // giảm a[j] > a[j-1] // sai vị trí thì đổi chỗ
//			{
//				HoanVi(a[j], a[j - 1]);
//			}
//		}
//	}
//}
//
////--------------------------------BublleSort-------------------------
//
////--------------------------------InsertionSort-------------------------
//
//void InsertionSort(int a[], int n)
//{
//	int pos; // vi trí cần tìm
//	int x; // lưu phần từ a[i] để tránh bị ghi đè các phần tử khi  dời phần tử
//	int i;
//	for (i = 1; i < n; i++) // mặc định a[0] đã được sắp xếp
//	{
//		x = a[i];
//		pos = i - 1; // i -1 là vị trí phần từ phía trước
//
//		// tìm vị trí để chèn x vào phía trước
//		while (( pos >=0 ) && (a[pos] > x)) // sắp xếp giảm a[pos] < x
//		{
//			a[pos + 1] = a[pos];
//			pos--;
//		}
//		// sau khi tìm được vị trí hiện tại đầu tiên là -1 => làm tiếp pos + 1 vị trí
//		a[ pos + 1] = x; // đã tìm được vị trí
//
//
//	}
//}
//
////--------------------------------InsertionSort-------------------------
//
////--------------------------------HeapSort-------------------------
//// sắp xếp tăng
//void Heapify(int a[], int n, int i) // i là các node của cây
//{
//	while (i <= n/2-1) // cây nhị phân gồm 2  phần : chia mảng làm 2 phần
//	{
//		int left = 2 * i + 1; // cây con trái 
//		int right = 2 * i + 2; // cây con phải
//		int max = left ;
//		if(right < n && a[right] > a[max])
//		{
//			max = right;
//		}
//		if(a[i] < a[max])
//		{
//			HoanVi(a[i], a[max]);
//		}
//		i = max;
//	}
//}
//void BuildHeap(int a[],int n)
//{
//	for(int i = n/2 -1;i>=0; i--)
//	{
//		Heapify(a, n, i);
//
//	}
//}
//void HeapSort(int a[],int n)
//{
//	BuildHeap(a, n);
//	for(int i= n-1; i >= 0; i--) // n-1 không xét node lớn nhất trên cùng
//	{
//		HoanVi(a[0], a[i]); //a[i] node đang xét
//		Heapify(a, i, 0);
//	}
//}
////--------------------------------HeapSort-------------------------
//
//void main()
//{
//	int *a;
//	int n; // so phan tu
//	cout << "nhap so phan tu n = ";
//	cin >> n;
//	a = new int[n]; //cấp phát động tạo ra n phần tử cho người dùng nhập vào
//	NhapMang(a, n);
//
//	//mang truoc khi sap xep
//	cout << "mang truoc khi sap xep: \n ";
//	XuatMang(a, n);
//
//	// sau khi sap xep
//
//	//InterChangeSort(a, n);
//	//SelectionSort(a, n);
//	//BublleSort(a, n);
//	//InsertionSort(a, n);
//	HeapSort(a, n);
//
//	cout << "\n mang truoc sau khi sap xep: \n ";
//	XuatMang(a, n);
//
//	system("pause");
//
//	//khi cấp phát động ram luôn chứa vùng nhớ => sau khi làm xong cần xóa đi tránh tràn bộ nhớ
//	delete[]a;
//}
//
//
