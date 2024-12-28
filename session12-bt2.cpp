#include<stdio.h>

void mang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("Arr[%d]:%d,",i,arr[i]); 
	} 
}

int main (){
	int n;
	printf("nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap cac phan tu cua mang: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]); 
	} 
	mang(arr,n);
	 
	return 0; 
}
