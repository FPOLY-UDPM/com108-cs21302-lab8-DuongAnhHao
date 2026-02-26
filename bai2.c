/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44395]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: SẮP XẾP SINH VIÊN THEO ĐIỂM TĂNG DẦN 

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

struct SinhVien {
    char maSV[20];
    char ten[50];
    float diemTB;
};

int main() {
    int n, i, j;
    struct SinhVien temp;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct SinhVien sv[n];

    // Nhap du lieu
    for(i = 0; i < n; i++) {
        printf("\nSinh vien thu %d\n", i + 1);

        printf("Ma SV: ");
        scanf("%s", sv[i].maSV);

        printf("Ten: ");
        scanf("%s", sv[i].ten);

        printf("Diem trung binh: ");
        scanf("%f", &sv[i].diemTB);
    }

    // Sap xep tang dan theo diem
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(sv[i].diemTB > sv[j].diemTB) {
                temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }

    // In danh sach sau khi sap xep
    printf("\n===== DANH SACH SAU KHI SAP XEP =====\n");

    for(i = 0; i < n; i++) {
        printf("\nMa SV: %s\n", sv[i].maSV);
        printf("Ten: %s\n", sv[i].ten);
        printf("Diem TB: %.2f\n", sv[i].diemTB);
    }

    return 0;
}
