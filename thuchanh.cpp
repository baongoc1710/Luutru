#include<stdio.h>
#include<conio.h>
#include<math.h>
	void nhapmang(int a[10],int n);
	void xuatmang(int a[10],int n);
	int max(int a[10],int n);
	void tinhtich(int a[10],int n);
	int demsnt(int a[10],int n);
	void nhapx(int a[10],int n);
	void sapsep(int a[10],int n)
	void chen(int a[10],int n,int k])
	
int main()
	{
		int n;
		int k;
		int a [10];
		printf("\n nhap so phan tu cua mang: ");
		scanf("%d"&n);
		nhapmang(a,n);
		xuatmang(a,n);
		max(a,n);
		tinhtich(a,n);
		demsnt(a,n);
		nhapx(a,m,n);
		chen (k,x);
	}		
void nhapmang(int a[10],int n)

	for(int i=o;i<n; i++)
	{
		printf("\n nhap phan tu thu a[%d]=",i)
		scanf ("%d",&a[i]);
		}
}
void xuatmang(int a[10],int n)	
{	
	printf("phan tu cu mang la:");
	for(int i=0;i<n; i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
	int max(int a[10],int n)	
	
{
	int max=a{0};
	for (int i=0;i<n;i++)
	if(max<a[i])
	max=a[i];
	printf("\n\n tich cac phan tu trong mang la:");
}
viod tinhtich(int a[10],int n)
{
	int tich+1;
	printf("\n\n tich cac phap tu tu trong mang la:");
	for(int i=0;i<n;i++)
	{
		tich= tich*a[i];
    }
    printf(" %d", tich);
}
bool ktsnt (int n)
{
	
	
	
	
	
	
	
	
	
}
for(int i=3:i<=sqrt((float)a);i+=2)
{ 
	if(n%i==0)
	{
		return false;
    }
}
}
return true;
}
int demsnt(int a[10],int n)
	{ 
	int dem=0
	for(int i=0;i<n;i++)
	{
		if(ktsnt(a[i])==true)
        {	
	        dem++;
	    }
	}
	printf("\n so luong so nguyen to co trong mang la: %d",dem);
}
void nhapx(int a[10] ,int n,int n)	
	{
	   pintf("\n\n nhap X= ");
	   scanf("%d",&m);
	{
		for(int i=0;i<n;i++)
	{
		if(m==a[i])
	printf("\n vi tri phan tu bang X la a[%d]",i);
	}
}
     printf("\n khong co gia tri bang x");
     }
}
void sapsep(int a[10],int n)
{
	int tam;
	for(int i=0;i<n;i++)	
	{
		if(a[i].a[j])
	{
		tam=a[i];
		a[i]=a[j];
		a[j]=tam;
		}
	}
}
	printf("\n mang sap sep theo tu tu tang nhan la:");
	for (int i=0;i<n;i++)
	{
	printf("  %d  ",a[i]);
	}
}
void chen(int a[10],int n,int k)
{
	int x;
	printf("\n nhap so can chen=")	
	scanf("%d",&x);
	for(int i=n;i>=k;i--)
	{
		a[i]=a[i-1];
	}
	a [k]=x;
	n++
}

	

	
