#include <stdio.h> 
int main(){
  
  float markHtml, markCss, markJavascript;
  printf("Nhap vao diem html, css, javascript cua sinh vien: "); 
  scanf("%f %f %f", &markHtml, &markCss, &markJavascript);

  float avgMark = (markHtml + markCss + markJavascript) / 3; 

  if (avgMark < 5){
    printf("Xep loai sinh vien: Yeu");
  }else if (avgMark < 7){
    printf("Xep loai sinh vien: Trung binh");
  }else if (avgMark < 8){
    printf("Xep loai sinh vien: Kha");
  }else if (avgMark < 9){
    printf("Xep loai sinh vien: Gioi");
  }else{
    printf("Xep loai sinh vien: Xuat sac");
  }
}
