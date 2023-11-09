#include <stdio.h>
main(){
	float nb1, nb2, nb3;
	printf("Nhap 3 so khac nhau: ");
	scanf("%f%f%f",&nb1,&nb2,&nb3);
	if(nb1<nb2<nb3){
		printf("Gia tri giam dan la:%f %f %f",nb3,nb2,nb1);
	}else if(nb1<nb3<nb2){
		printf("Gia tri giam dan la:%f %f %f", nb2, nb3, nb1);
	}else if(nb3<nb1<nb2){
		printf("Gia tri giam dan la:%f %f %f",nb2,nb1,nb3);
    }else if(nb3<nb2<nb1){
		printf("Gia tri giam dan la:%f %f %f",nb1,nb2,nb3);
	}else if(nb2<nb3<nb1){
		printf("Gia tri giam dan la:%f %f %f",nb1,nb3,nb2);
	}else if(nb2<nb1<nb3){
		printf("Gia tri giam dan la:%f %f %f",nb3,nb1,nb2);
	}
}
