/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44395]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: TÌM KIẾM SINH VIÊN

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

struct SinhVien {
    char maSV[20];
    char ten[50];
    float diemTB;
};

int main() {
    int n, i;
    int timThay = 0;
    char maCanTim[20];

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct SinhVien sv[n];

    // Nhap danh sach
    for(i = 0; i < n; i++) {
        printf("\nSinh vien thu %d\n", i + 1);

        printf("Ma SV: ");
        scanf("%s", sv[i].maSV);

        printf("Ten: ");
        scanf("%s", sv[i].ten);

        printf("Diem TB: ");
        scanf("%f", &sv[i].diemTB);
    }

    // Nhap ma can tim
    printf("\nNhap ma sinh vien can tim: ");
    scanf("%s", maCanTim);

    // Tim kiem
    for(i = 0; i < n; i++) {
        if(strcmp(sv[i].maSV, maCanTim) == 0) {
            printf("\n--- THONG TIN SINH VIEN ---\n");
            printf("Ma SV: %s\n", sv[i].maSV);
            printf("Ten: %s\n", sv[i].ten);
            printf("Diem TB: %.2f\n", sv[i].diemTB);
            timThay = 1;
            break;
        }
    }

    if(timThay == 0) {
        printf("Khong tim thay sinh vien!\n");
    }

    return 0;
}
