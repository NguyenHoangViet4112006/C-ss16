#include <stdio.h>
int timKiem(int *mang, int kichThuoc, int giaTri){
    for (int i = 0; i<kichThuoc; i++){
        if (*(mang + i)==giaTri) {
            return i;
        }
    }
    return -1; 
}
int main(){
    int mang[]= {1, 2, 4, 5, 6, 7};
    int kichThuoc = sizeof(mang)/sizeof(mang[0]);
    int giatri = 7;
    int viTri = timKiem(mang, kichThuoc, giatri);
    if(viTri != -1){
        printf("Phan tu %d duoc tim thay", giatri);
    } else{
        printf("Phan tu %d khong duoc tim thay trong mang", giatri);
    }
    return 0;
}

