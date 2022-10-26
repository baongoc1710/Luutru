#include <stdio.h>
 void nhapmang1c(int a[10], int n);
 void xuacmang1c(int a[10], int n);
 int main()

 {
 	int a [10], n;
 	printf ("\n nhan so phan  tu mang :=");
 	scanf ("%d", &n );
  nhapmang1c(a,n);
  xuacmang1c(a,n);
  return 0;
}
void nhapmang1c(int a[10], int n)
 {
	for(int i=0;i<n;i++)
 	{
 		printf ("\n nhap phan tu thu a[%d]=",i);
 		scanf ("%d" ,&a[i]);
 		
 	}
}
 void xuacmang1c(int a[10], int n)
 {
 	printf("\n\n cac  phan tu cua  mang la :");
 	for(int j=0;j<n;j++)
 	printf("%d    ;   ", a[j]);
 	
 }
