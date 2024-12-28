#include<stdio.h>

int giaithua(int n) {
	int ketqua = 1;
    for (int i = 1; i <= n; i++) {
      ketqua *= i;  
    } 
    return ketqua;
} 
int main(){
	int n;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);
   
    int a = giaithua(n);
    if (a != -1) {
        printf("Giai thua cua %d la: %d\n", n, a);
    }
    return 0;
} 
