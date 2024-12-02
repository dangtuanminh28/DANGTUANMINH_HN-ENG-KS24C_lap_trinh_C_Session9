#include<stdio.h>
int main(){
	int check,rows,cols,i,j,size,n,max_row;
	int arr[100][100];
	int choice=0;
	int sum_le=0;
	long long tich_bien=1;
	int sum1,sum2;
	
	
	
	while(choice!=8){
		printf("\n MENU \n 1.Nhap kich co va gia tri cac phan tu cua mang\n 2.In gia tri cac phan tu cua mang theo ma tran \n 3.In gia tri cac phan tu la le va tinh tong\n 4.In ra cac phan tu nam tren duong bien va tinh tich\n 5.In ra cac phan tu nam tren duong cheo chinh\n 6.In ra cac phan tu nam tren duong cheo phu\n 7.In ra dong co tong gia tri cac phan tu la lon nhat\n 8.Thoat\n Lua chon cua ban: ");
		scanf("%d",&choice);
		size=sizeof(arr)/sizeof(arr[0]);
		
		switch(choice){
			case 1: 
			printf("moi nhap so hang: ");
			scanf("%d", &rows);
				printf("moi nhap so cot: ");
			scanf("%d", &cols);
			
			
			for(i=0;i<rows;i++){
				for(j=0;j<cols;j++){
					printf("moi nhap gia tri cho phan tu arr[%d][%d]: ",i,j);
				scanf("%d",&arr[i][j]);
				}
				
			}
			break;
			
			case 2:
					for(i=0;i<rows;i++){
					printf("\n");
				for(j=0;j<cols;j++){
					printf("%d\t",arr[i][j]);
				}
			}
			break;
			
			case 3:
				for(i=0;i<rows;i++){
				for(j=0;j<cols;j++){
			    if(arr[i][j]%2!=0){
			    	printf("arr[%d][%d]=%d la phan tu le\n",i,j,arr[i][j]);
			    	sum_le += arr[i][j];
				}
			
				}
			} printf("tong cac phan tu le la: %d",sum_le);
			break;
			
			case 4:
				if(rows==2){
					for(i=0;i<1;i++){
				for(j=0;j<cols;j++){
					printf("%2d",arr[i][j]);
					tich_bien = tich_bien*arr[i][j];
				}
				}printf("\n");
				for(i=0;i<1;i++){
				for(j=0;j<cols;j++){
					printf("%2d", arr[rows-1][j]);
					tich_bien = tich_bien*arr[rows-1][j];
				}
				}printf("\n tich la: %d",tich_bien);
				}else {
					for(i=0;i<1;i++){
				for(j=0;j<cols;j++){
					printf("%2d",arr[i][j]);
					tich_bien = tich_bien*arr[i][j];
				}
				}printf("\n");
				for(i=1;i<rows-1;i++){
					printf("%2d",arr[i][0]);
					tich_bien = tich_bien*arr[i][0];
					
				}for(i=1;i<rows-1;i++){
					printf("%2d",arr[i][cols-1]);
				tich_bien = tich_bien*arr[i][cols-1];
				
				
				}printf("\n");
				for(i=0;i<1;i++){
				for(j=0;j<cols;j++){
					printf("%2d", arr[rows-1][j]);
					tich_bien = tich_bien*arr[rows-1][j];
				}
				}printf("\n tich la: %lld",tich_bien);
					
				}
				break;
				case 5:
					
					if(rows!=cols){
						printf("so hang can = so cot\n");
					}else{
						j=0;
						for(i=0;i<rows;i++){
						
					printf("%2d",arr[i][j]);
					j++;
					
				}
			}
			    break;
			    case 6:
			    		if(rows!=cols){
						printf("so hang can = so cot\n");
					}else{
						j=cols-1;
						for(i=0;i<rows;i++){
						printf("%2d",arr[i][j]);
							j--;
					}
				}
				break;
				case 7:
					for(i=0;i<rows;i++){
						sum1=0;
						
							
				for(j=0;j<cols;j++){
					sum1+=arr[i][j];
					n=sum1;
					if(n>sum2){
							sum2=n;
					      max_row=i;
					
				}
			}
			}
			for(i=max_row;i<=max_row;i++){
				for(j=0;j<cols;j++){
				printf("%2d\n",arr[i][j]);
				}
			}	printf("tong la: %d",sum2);
				
	
	}
}

   return 0;
}
