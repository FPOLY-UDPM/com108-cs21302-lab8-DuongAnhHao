/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44395]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH LƯU THÔNG TIN SINH VIÊN 
//  Input: Nhập vào từ bàn phím các thông tin sinh viên như: mã số sinh viên, tên sinh 
//  viên, ngành học, điểm trung bình. 
//  Output: Xuất ra thông tin của tất cả sinh viên trên màn hình

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

struct SinhVien {
    char maSV[20];
    char ten[50];
    char nganh[50];
    float diemTB;
};

int main() {
    int n, i;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct SinhVien sv[n];

    for(i = 0; i < n; i++) {
        printf("\nSinh vien thu %d\n", i + 1);

        printf("Ma SV: ");
        scanf("%s", sv[i].maSV);

        printf("Ten: ");
        scanf("%s", sv[i].ten);

        printf("Nganh hoc: ");
        scanf("%s", sv[i].nganh);

        printf("Diem trung binh: ");
        scanf("%f", &sv[i].diemTB);
    }

    printf("\n===== DANH SACH SINH VIEN =====\n");

    for(i = 0; i < n; i++) {
        printf("\nSinh vien thu %d\n", i + 1);
        printf("Ma SV: %s\n", sv[i].maSV);
        printf("Ten: %s\n", sv[i].ten);
        printf("Nganh hoc: %s\n", sv[i].nganh);
        printf("Diem TB: %.2f\n", sv[i].diemTB);
    }

    return 0;
}
