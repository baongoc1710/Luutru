#include <stdio.h>
void nhap(int a[], int n);
void output(int a[], int n);
void insert_sort(int a[], int n);


int main()
{
	int a[100], n;
	printf("nhap n=");
	scanf("%d",&n);
	nhap(a,n);
	printf("cac pt vua nhap");
	output(a,n);
 
    insert_sort(a,n);
    printf("\n cac pt vua sap xep: ");
    output(a,n);
    return 0;
}

void insert_sort(int a[], int n)
{
	for(int i=1;i<n;i++)
	{
		int x=a[i];
		int pos=i-1;
		while((pos>=0) &&  (a[pos]>x))
		{
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}



void nhap(int a[],int n)
{

	
	for(int i=0 ; i<n ; i++)
	   {
	   	  printf("\nNhap a[%d]= ", i);
	   	  scanf("%d",&a[i]);
	   }
}
void output(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("   %d ",a[i]);
	}
}
