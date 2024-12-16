#include<stdio.h>
void daoNguocChuoi(char *inputString, char *reverseString){
    int doDai = strlen(inputString);
    for (int i = 0; i < doDai; i++) {
        *(reverseString + i) = *(inputString + doDai - i - 1);
    }
    *(reverseString + doDai) = ' ';
}
int main() {
    char inputString[100];
    char reverseString[100];
    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    daoNguocChuoi(inputString, reverseString);
    printf("%s", reverseString);
    return 0;
}

