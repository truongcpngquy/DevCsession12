#include <stdio.h>

int max(int arr[], int n) {
    int max = arr[0];  
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max; 
}
int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
	printf("nhap cac phan tu cua mang: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]); 
	} 
    int a = max(arr, n);
    printf("Max = %d\n", a);

    return 0;
} 
