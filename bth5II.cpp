#include<stdio.h>
#include<stdlib.h>
int main()
void chon1(char s[50]);
int xoa(char s[50], int vitrixoa);
int xoakytu(char s[50]);
int chuanhoachuoi(char s[50]);
int demsotu(char s[50]);
int demkytu(char s[50]);
{ char s[50], s2[50], key;
while(true)
{
		system("cls");
		printf("***********************************************\n");
		printf("**        THAO TAC TREN CHUOI 	   			 **\n");
		printf("**       1. Nhap va chuan hoa chuoi  		 **\n");
		printf("**       2. Dem so tu trong chuoi		  	 **\n");
		printf("** 		 3. Ghep chuoi						 **\n");
		printf("** 		 4. Kiem tra doi xung				 **\n");
		printf("** 		 5. In chuoi dao nguoc				 **\n");
		printf("**		 0. Thoat 							 **\n");
		printf("***********************************************\n");
		fflush(stdin);
		printf("\n \t\t AN PHIM CHON: ");
		scanf("%d",&key);
		switch(key)
{
	case 1:
		fflush(stdin);
		chon1(s);
		printf("\nBam phim bat ky de tiep tuc!");
		getch();
		break;
	case 2:
		printf("\nBam phim bat ky de tiep tuc!");
		getch();
		break;
	case 3:
		printf("\nBam phim bat ky de tiep tuc!");
		getch();
		break;
	case 4:
		printf("\nBam phim bat ky de tiep tuc!");
		break;
	case 5:
		printf("\nBam phim bat ky de tiep tuc!");
		getch();
		break;
		case 0:
		exit(1);
		default:
		printf("\nKhong co chuc nang nay!");
		printf("\nBam phim bat ky de tiep tuc!");
		getch();
		break;
 
	}
 }
}
void chon1(char s[50])
{
   printf("\n nhap chuoi:");
   gets(s);
   chuanhoa(s);
   printf("\n chuoi chuan hoa:");
   puts(s);
}
int xoa(char s[50], int vitrixoa)
{
	int n=strlen(s);
	for(int i=vitrixoa; i<n; i++)
	s[i]=s[i+1];
	s[n-1]='\0';
}
int xoakytu(char s[50])
{
	for(int i=0;i<strlen(s);i++)
	if(s[i]==' '&& s[i+1]==' ')
	{
		xoa(s,1);
		i--;
	}
	if(s[0]==' ')
	xoa(s,0);
	if(s[strlen(s)-1]==' ')
	xoa(s,strlen(s)-1);
}
int chuanhoachuoi(char s[50])
{
	int i=0;
	strlwr(s);
	xoakytu(s);
	s[0]=s[0]-32;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' '&& s[i+1]!=' ')
		s[i+1]=s[i+1]-32;
	}
}
int demsotu(char s[50])
{
	int demsotu=1;
	strlwr(s);
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i]==' ')
		demsotu++;
	}
	printf("\n so tu %d",demsotu);
}
int demkytu(char s[50])
{
	int demkytu=0;
	char c,c1;
	printf("\n nhap mot ky tu:=");
	scanf("%c",&c);
		fflush(stdin);
	strupr(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==toupper(c))
		demkytu++;
	}
	printf("so ky tu %d",demkytu);
}






















































































