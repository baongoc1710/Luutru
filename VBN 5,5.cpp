#include<stdio.h>
void Input(int a[], int n);
void Output(int a[], int n);
void Interchangesort(int a[], int n);
void Selection_sort(int a[], int n);
void Bubblesort(int a[], int n);

void Swap(int *x , int *y);
int main()
{
	int n, a[100];
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d",&n);
	Input(a,n);
	printf("\nGia tri cac phan tu cua mang(truoc khi sap xep): ");
	Output(a,n);
	
	Selection_sort(a,n);
	printf("\nGia tri cac phan tu cua mang(sau khi sap xep bang Selection sort): ");
	Output(a,n);

	Bubblesort(a,n);
	printf("\nGia tri cac phan tu cua mang(Bubblesort): ");
	Output(a,n);
	Interchangesort(a,n);
	printf("\nGia tri cac phan tu cua mang(sau khi sap xep bang Interchangesort ): ");
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


void Interchangesort(int a[], int n)
{
	int i,j;
	for( i = 1 ; i<n ; i++)
	   {for( j = i+1 ; j<n ; j++)
		   {
			if (a[j]<a[i])
			Swap(&a[i],&a[j]);
	        }
	   }
	
}
void Swap(int *x , int *y)
{
	int temp = *x;
	    *x   = *y;
	    *y   = temp;
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
void Bubblesort(int a[], int n)
{int i,j;
	for( i = 1 ; i<n-1 ; i++)
	
		for( j = n-1 ; j>i ; j--)
		
			if (a[j]<a[j-i])
			
	           Swap(&a[i],&a[j]);
  }




