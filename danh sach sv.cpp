#include <stdio.h>
// khai bao mang sv kieu SinhVien co toi da 100 phan tu
struct SinhVien{
    char MaSV[50];
    char TenSV[50];
    char Lop[50];
    float DiemTongKet;
} sv[100];
void Nhap(int n){// ham nhap thong tin sinh vien
    for(int i=0; i<n; i++){
        printf("\nNhap thong tin sinh vien thu %d:",i);
        printf("\nNhap ma sinh vien:");
        fflush(stdin);
        gets(sv[i].MaSV);
        printf("\nNhap ten sinh vien:");
        fflush(stdin);
        gets(sv[i].TenSV);
        printf("\nNhap lop:");
        fflush(stdin);
        gets(sv[i].Lop);
        printf("\nNhap diem tong ket:");
        scanf("%f", &sv[i].DiemTongKet);
    }
}
void Xuat(int n){//ham hien thi thong tin sinh vien
    printf("\n-----THONG TIN SINH VIEN----\n");
    printf("MaSV \t TenSV \t\t Lop \t DiemTongKet \n");
    for(int i=0; i<n; i++){
        printf("%s \t %s \t %s \t %f \n",sv[i].MaSV,sv[i].TenSV,sv[i].Lop,sv[i].DiemTongKet);
    }
}
void sapxep(int n){// ham sap xep su dung thuat toan noi bot
    for(int i=0; i<n-1; i++){
        for(int j=n-1;j>i;j--){
            if(sv[i].DiemTongKet > sv[j].DiemTongKet){// so sanh diem tong ket cua 2 sinh vien
                // doi cho hai sinh vien qua bien SinhVien tg
                SinhVien tg = sv[i];
                sv[i] = sv[j];
                sv[j] = tg;
            }
        }
    }
}
int main(){
    int n; // khai bao so sinh vien
    printf("Nhap so sinh vien:");
    scanf("%d",&n);
    Nhap(n);
    Xuat(n);
    printf("/n--DANH SACH SINH VIEN SAU KHI SAP XEP--/n");
    sapxep(n);
    Xuat(n);
}
