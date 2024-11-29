#include <stdio.h>
int main() {
	int lc;
	int currentLength = 0;
	int index = 0;
	int a[1000];
	do{
		printf("MENU\n");
		printf("1. Nhap vao mang\n");
		printf("2. Hien thi mang\n");
		printf("3. Them phan tu\n");
		printf("4. Sua phan tu\n");
		printf("5. Xoa phan tu\n");
		printf("6. Thoat\n");
		printf("\n");	
		printf("Lua chon cua ban: ");
		scanf("%d", &lc);
		if(lc < 1 || lc > 6){
			printf("Lua chon chua phu hop! Vui long chon lai\n");
			printf("========================================\n");
		}
		else{
			printf("========================================\n");
			//Nhap vao mang
			if(lc == 1){
				printf("======Bat dau: 1. Nhap vao mang======\n");
				do{
					//Nhap so phan tu muon nhap
					printf("Vui long nhap kich thuoc mang: ");
					scanf("%d", &currentLength); 
					if(currentLength < 0){
						printf("Kich thuoc mang khong hop le! Vui long nhap lai\n");
					}
				}while(currentLength < 0);
				
				printf("\n");
				printf("Nhap gia tri cac phan tu cua mang\n");
				//Thuc hien nhap gia tri cho cac phan tu cua mang
				for(int i = 0; i < currentLength; i++){
					printf("Nhap phan tu %d: ", i);
					scanf("%d", &a[i]);
				}
				printf("======Ket thuc: 1. Nhap vao mang======\n");
				printf("========================================\n");
			}
			
			//Hien thi mang
			if(lc == 2){
				printf("======Bat dau: 2. Hien thi mang======\n");
				if(currentLength <= 0){
					printf("Khong co mang nao!\n");
				}
				else{
					for(int i = 0; i < currentLength; i++){
						printf("%d ", a[i]);
					}
					printf("\n");
				}
				printf("======Ket thuc: 2. Hien thi mang======\n");
				printf("========================================\n");
			}
			
			//Them phan tu
			if(lc == 3){
				printf("======Bat dau: 3. Them phan tu======\n");
				if(currentLength <= 0){
					printf("Khong co mang nao!\n");
				}
				else{
					do{
						//Thuc hien them phan tu vao mang
						printf("Nhap vi tri muon them (luu y phai < %d va >= 0): ", currentLength + 1);
						scanf("%d", &index);
					}while(index < 0 || index >= currentLength + 1);
					
					//Kiem tra vi tri can them
					if(index >= currentLength){
						printf("Nhap gia tri cho vi tri %d: ", index);
						scanf("%d", &a[index]);
						currentLength = index + 1;
					}
					else{
						for(int i = currentLength + 1; i > index; i--){
							a[i] = a[i-1]; 
						}
						printf("Nhap gia tri cho vi tri %d: ", index);
						scanf("%d", &a[index]);
					}
				}
				printf("======Ket thuc: 3. Them phan tu======\n");
				printf("========================================\n");
			}
			
			//Sua phan tu
			if(lc == 4){
				printf("======Bat dau: 4. Sua phan tu======\n");
				if(currentLength <= 0){
					printf("Khong co mang nao!\n");
				}
				else{
					//Thuc hien thay doi gia tri cua 1 phan tu trong mang
					do{
						//Nhap vi tri muon thay doi
						printf("Nhap vi tri muon thay doi gia tri (luu y phai < %d va >= 0): ", currentLength);
						scanf("%d", &index);
					}while(index < 0 || index >= currentLength);
					
					//Nhap gia tri moi
					printf("Nhap gia tri moi cho vi tri %d: ", index);
					scanf("%d", &a[index]);
				}
				printf("======Ket thuc: 4. Sua phan tu======\n");
				printf("========================================\n");
			}
			
			//Xoa phan tu
			if(lc == 5){
				printf("======Bat dau: 5. Xoa phan tu======\n");
				if(currentLength <= 0){
					printf("Khong co mang nao!\n");
				}
				else{
					//Thuc hien xoa phan tu
					do{
						//Thuc hien nhap vi tri muon xoa 
						printf("Nhap vi tri muon xoa (luu y phai < %d va >= 0): ", currentLength);
						scanf("%d", &index);
					}while(index < 0 || index >= currentLength);
					
					for(int i = index; i < currentLength-1; i++){
						a[i] = a[i+1]; 
					}
					currentLength = currentLength-1;
				}
				printf("======Ket thuc: 5. Xoa phan tu======\n");
				printf("========================================\n");
			}
		}
	}while(lc != 6 || lc < 1 || lc > 6);
	
	
	return 0;
}
