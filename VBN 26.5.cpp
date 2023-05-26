
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct hocvien{
	char Mahv;
	char HoTen[100];
	char Diachi[100];
	char Sdt[100];
};
struct Node{
	hocvien data;
	Node *pNext;
};
struct list{
	Node *pHead;
	Node *pTail;
};
void nhapThongTin(hocvien &HV){
	int mahv;
	char diachi[100];
	char sdt[100];
	char hoTen[100];
	fflush(stdin);
	printf("Nhap ma so hoc vien: ");
	scanf("%d", &mahv);
	fflush(stdin);
	printf("Nhap ho ten hoc vien: ");
	gets(hoTen);
	fflush(stdin);
	printf("Nhap Dia chi: ");
	gets(diachi);
	fflush(stdin);
	printf("Nhap so dien thoai: ");
	scanf("%s", &sdt);
	fflush(stdin);
	HV.Mahv=mahv;
	strcpy(HV.HoTen, hoTen);
	strcpy(HV.Diachi,diachi);
	strcpy(HV.Sdt, sdt);

	
}
void xuatThongTin(hocvien HV){
	printf("Ma so hoc vien: %d\n", HV.Mahv);
	printf("Ho ten hoc vien: ");
	puts(HV.HoTen);
	printf("Dia chi:"); 
	puts(HV.Diachi);
	printf("So dien thoai: %f\n", HV.Sdt);
}

void themDau(list &L, Node *new_ele){
	if(L.pHead==NULL){
		L.pHead=new_ele;
		L.pTail=L.pHead;
	}
	else{
		new_ele->pNext=L.pHead;
		L.pHead=new_ele;
	}
}
void themCuoi(list &L, Node *new_ele)
{
	if(L.pHead==NULL){
		L.pHead=new_ele;
		L.pTail=L.pHead;
	}
	else{
		L.pTail->pNext=new_ele;
		L.pTail=new_ele;
	}
}
Node *taoNode(){
	Node *pNode;
	pNode=(Node*)malloc(sizeof(Node));
	if(pNode!=NULL){
		nhapThongTin(pNode->data);
		pNode->pNext=NULL;
		return pNode;
	}
	return NULL;
}
void khoiTaoDanhSach(list &L){
	L.pHead=NULL;
	L.pTail=NULL;
}
void nhapDanhSach(list &L){
	int n;
	printf("Nhap so luong hoc vien: ");
	scanf("%d", &n);
	Node *p;
	printf("\n\n");
	for(int i=1; i<=n; i++){
		printf("Nhap thong tin hoc vien thu %d:\n", i);
		p=taoNode();
		if(p!=NULL)
			themCuoi(L, p);
		printf("\n");
	}
}
void taoNodeThemDau(list &L){
	Node *p;
	p=taoNode();
	if(p==NULL){
		printf("Khoi tao khong thanh cong!!!\n");
		return;
	}
	themDau(L, p);
}
void xuatDanhSach(list &L){
	Node *p;
	p=L.pHead;
	if(p==NULL){
		printf("Khong co hoc vien nao!!!\n");
		return;
	}
	int dem=1;
	while(p!=NULL){
		printf("Thong tin hoc vien thu %d:\n\n", dem);
		xuatThongTin(p->data);
		printf("\n");
		p=p->pNext;
		dem++;
	}
}
void xoaDauDS(list &L){
	if(L.pHead==NULL) return;
	Node *p;
	p=L.pHead;
	L.pHead=p->pNext;
	free(p);
}
void xoaToanBo(list &L){
	if(L.pHead==NULL) return;
	Node *p;
	p=L.pHead;
	while(p!=NULL){
		L.pHead=p->pNext;
		free(p);
		p=L.pHead;
	}
	L.pHead=L.pTail=NULL;
}
int main(){
	list L;
	int luaChon=1;
	khoiTaoDanhSach(L);
	while(luaChon==1){		
		system("cls");
		int chucNang;
		printf("\n1. Nhap danh sach hoc vien:");
		printf("\n2. In danh sach hoc vien:");
		printf("\n3. Hoc vien vao dau danh sach.");
		printf("\n4. Xoa phan tu dau.");
		printf("\n5. Xoa toan bo danh sach.");
		printf("\n\n");
		printf("\nNhap lua chon cua ban: ");
		scanf("%d", &chucNang);
		system("cls");
		switch(chucNang){
			case 1:
				nhapDanhSach(L);
				printf("\nDa nhap thanh cong danh sach :\n");
				break;
			case 2:
				xuatDanhSach(L);
				printf("\nDa xuat toan bo danh sach!!!\n");
				break;
			case 3:
				taoNodeThemDau(L);
				printf("\nThem thanh cong phan tu :\n");
				break;
			case 4:
				xoaDauDS(L);
				printf("Da xoa phan tu dau danh sach!!!\n");
				break;
			case 5:
				xoaToanBo(L);
				printf("Da xoa toan bo danh sach!!!\n");
				break;
			default:
				printf("Yeu cau khong hop le!!!\n");
		}
		printf("\n\n");
		printf("Ban co muon tiep tuc khong?\n");
		printf("1. Co\n");
		printf("2. Khong\n");
		printf("\n\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &luaChon);
	}
	return 0;
}
