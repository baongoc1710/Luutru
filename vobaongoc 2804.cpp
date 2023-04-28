#include<stdio.h>
void Input(int a[], int n);
void Output(int a[], int n);
void Selection_sort(int a[], int n);
void Insert_sort(int a[], int n);
void Swap(int *x , int *y);
int main()
{
	int n, a[50];
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d",&n);
	Input(a,n);
	printf("\nGia tri cac phan tu cua mang(truoc khi sap xep): ");
	Output(a,n);
	Selection_sort(a,n);
	printf("\nGia tri cac phan tu cua mang(sau khi sap xep bang Selection sort): ");
	Output(a,n);
	Insert_sort(a,n);
	printf("\nGia tri cac phan tu cua mang(sau khi sap xep bang Insert sort): ");
	Output(a,n);
}
void Input(int a[], int n)
{
	for(int i=0 ; i<n ; i++)
	   {
	   	  printf("\nNhap a[%d]= ",i);
	   	  scanf("%d",&a[i]);
	   }
}
void Output(int a[], int n)
{
	for(int i=0 ; i<n ; i++)
	   {
	   	  printf(" %d ",a[i]);
	   }
}
void Selection_sort(int a[], int n)
{
	for(int i=0 ; i<n-1 ; i++)
	   {
	   	   int min = i;
	   	   for(int j=i+1 ; j<n ; j++)
	   	      {
	   	      	 if(a[min]>a[j])
	   	      	   min = j;
			  }
			Swap(&a[min],&a[i]);
	   }
	
}
void Swap(int *x , int *y)
{
	int temp = *x;
	    *x   = *y;
	    *y   = temp;
}
void Insert_sort(int a[], int n)
{
	for(int i = 1 ; i<n ; i++)
	   {
	   	   int x = a[i];
	   	   int pos = i-1;
	   	   while((pos>=0) && (a[pos]>x))
	   	        {
	   	        	a[pos+1] = a[pos];
	   	        	pos--;
				}
			a[pos+1] = x;
	   }
}
