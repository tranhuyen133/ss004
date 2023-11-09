#include<stdio.h>
int main(){
	float edge1, edge2, edge3;
	printf("Nhap 3 canh cua tam giac: ");
	scanf("%f%f%f",&edge1,&edge2,&edge3);
	if(edge1+edge2>edge3&&edge3+edge2>edge1&&edge1+edge3>edge2){
		if(edge1==edge2==edge3){
			printf("Tam giac deu");
		}else if(edge1*edge1+edge2*edge2==edge3*edge3||edge1*edge1+edge3*edge3==edge2*edge2||edge3*edge3+edge2*edge2==edge1*edge1){
			printf("Tam giac vuong");
		}else if(edge1*edge1+edge2*edge2==edge3*edge3&&edge1==edge2||edge1*edge1+edge3*edge3==edge2*edge2&&edge1==edge3||edge3*edge3+edge2*edge2==edge1*edge1&&edge2==edge3){
			printf("Tam giac vuong can");
		}else if(edge1==edge2||edge1==edge3||edge2==edge3){
			printf("Tam giac can");
		}else{
			printf("Tam giac thuong");
		}
	}else{
		printf("Khong phai la tam giac");
	}
}
