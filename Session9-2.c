#include <stdio.h>
int main() {
	//Khai bao so luong phan tu
	int n;
	
	printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    
    //Khai bao mang
    int a[n];
    
    printf("\n");
    
	//Thuc hien nhap gia tri cho cac phan tu cua mang
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu %d: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n");
	
	//In mang cu
	printf("Mang cu la: ");
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
	int index;
	do{
		//Thuc hien thay doi gia tri cua 1 phan tu trong mang
		printf("Nhap vi tri muon thay doi gia tri (luu y phai < %d va >= 0): ", n);
		scanf("%d", &index);
	}while(index < 0 || index >= n);
	
	printf("Nhap gia tri moi cho vi tri %d: ", index);
	scanf("%d", &a[index]);
	
	printf("\n");
	
	//In mang moi
	printf("Mang moi la: ");
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
