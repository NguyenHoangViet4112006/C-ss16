#include <stdio.h>
void sapxepmang(int *mang, int kichThuoc){
    for (int i = 0; i < kichThuoc - 1; i++){
        for (int j = 0; j < kichThuoc - i - 1; j++){
            if (*(mang + j)>*(mang +j+ 1)){
                int temp = *(mang + j);
                *(mang + j)=*(mang +j+ 1);
                *(mang + j+1) = temp;
            }
        }
    }
}
int main() {
    int mang[] = {3, 2, 8, 1, 4, 9};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    sapxepmang(mang, kichThuoc);
    printf("Mang sau khi duoc sap xep ");
    for (int i = 0; i < kichThuoc; i++){
        printf("%d ", mang[i]);
    }
    return 0;
}

