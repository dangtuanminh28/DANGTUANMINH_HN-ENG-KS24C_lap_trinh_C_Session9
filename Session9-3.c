#include <stdio.h>
int main() {	
	int currentLength, index;
	do{
		//Nhap so phan tu muon nhap
		printf("So phan tu muon nhap: ");
		scanf("%d", &currentLength); 
	}while(currentLength < 0);
	
	int a[currentLength];
	
	printf("\n");
	//Thuc hien nhap gia tri cho cac phan tu cua mang
	for(int i = 0; i < currentLength; i++){
		printf("Nhap phan tu %d: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n");
	
	do{
		//Thuc hien nhap vi tri muon xoa 
		printf("Nhap vi tri muon xoa (luu y phai < %d va >= 0): ", currentLength);
		scanf("%d", &index);
	}while(index < 0 || index >= currentLength);
	
	for(int i = index; i < currentLength-1; i++){
		a[i] = a[i+1]; 
	}
	currentLength = currentLength-1;
	//In mang
	printf("\n");
	printf("Mang moi la: ");
	for(int i = 0; i < currentLength; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
