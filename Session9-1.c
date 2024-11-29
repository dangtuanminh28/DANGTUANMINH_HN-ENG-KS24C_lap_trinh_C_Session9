#include <stdio.h>
int main() {
	//Khai bao mang co 100 phan tu
	int a[100];
	int currentLength, addIndex;
	
	do{
		//Nhap so phan tu muon nhap
		printf("So phan tu muon nhap (luu y phai <= 100 va > 0): ");
		scanf("%d", &currentLength); 
	}while(currentLength < 0 || currentLength > 100);
	
	
	printf("\n");
	//Thuc hien nhap gia tri cho cac phan tu cua mang
	for(int i = 0; i < currentLength; i++){
		printf("Nhap phan tu %d: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\n");
	
	do{
		//Thuc hien them phan tu vao mang
		printf("Nhap vi tri muon them (luu y phai < 100 va >= 0): ");
		scanf("%d", &addIndex);
	}while(addIndex < 0 || addIndex >= 100);
	
	//Kiem tra vi tri can them
	if(addIndex >= currentLength){
		printf("Nhap gia tri cho vi tri %d: ", addIndex);
		scanf("%d", &a[addIndex]);
		currentLength = addIndex + 1;
	}
	else{
		for(int i = currentLength + 1; i > addIndex; i--){
			a[i] = a[i-1]; 
		}
		printf("Nhap gia tri cho vi tri %d: ", addIndex);
		scanf("%d", &a[addIndex]);
	}
	
	//In mang
	printf("\n");
	printf("Mang moi la: ");
	for(int i = 0; i < currentLength; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
