#include <iostream>
using namespace std;


void NhapMang(int a[], int n) // a[] vaÌ a * đều trỏ về vùng nhớ của phần tử đầu tiên trong mảng 
{
	cout << "nhap cac gia tri cho cac phan tu cho mang \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri cho phan tu a[" << i << "]:";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

int LinearSearch(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return 1;
	return 0;
}

void main()
{
	
	int *a;
	int n; // so phan tu
	cout << "nhap so phan tu n = ";
	cin >> n;
	a = new int[n]; //cấp phát động tạo ra n phần tử cho người dùng nhập vào
	int X;
	NhapMang(a, n);
	cout << "Nhap phan tu x can tim : ";
	cin >> X;

	cout << "\n mang da nhap : \n ";
	XuatMang(a, n);

	int b = LinearSearch(a, n, X);
	if (b == 1)
		cout << "\n co x trong mang";
	else
	{
		cout << "\n Khong tim thay x trong mang";
	}
	system("pause");

	delete[]a;
}
