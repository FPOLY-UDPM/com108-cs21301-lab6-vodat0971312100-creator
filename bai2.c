/******************************************************************************
 * Họ và tên: [Nguyễn Võ Minh Đạt ]
 * MSSV:      [PS49299]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂy
#include <stdio.h>
int main(){
int n, i;
printf("nhap vao n:");
scanf("%d",&n);
if(n<=0){
    printf("số phần tử không hợp lệ vui lòng nhập lại!");
}
int arr[n];
printf("nhap %d số nguyên \n",n);
for(i=0;i<n;i++){
    printf("nhap vào arr[%d] là :",i);
    scanf("%d",&arr[i]);
}
int max=arr[0];
int min=arr[0];
for(i=1;i<n;i++){
    if(arr[i]>max){
        arr[i]=max;
    }
    if(arr[i]<min){
        arr[i]=min;
    }
}
printf("---kết quả là---- \n");
printf("giá trị bé nhất là %d\n",min);
printf("giá trị lớn nhất là %d\n",max);
return 0;
}