//
//  main.cpp
//  BT KTLT week 1
//
//  Created by Nam 😋 on 2/2/18.
//  Copyright © 2018 Nam 😋. All rights reserved.
//

// Bài 1: Viết chương trình nhập vào một mảng có n phần tử với n nhập từ bàn phím. Tách mảng đã cho thành hai mảng: 1 mảng nhận giá trị âm, 1 mảng nhận giá trị dương. In hai mảng ra màn hình. done!
/*
#include <stdio.h>
#include <iostream>

int main(int argc, const char * argv[]) {
    double *array, *arrayam, *arrayduong;
    int sopt,i,x=0,y=0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&sopt);
    array=new double[sopt];
    arrayam=new double[sopt];
    arrayduong=new double[sopt];
    if (array==NULL||arrayam==NULL||arrayduong==NULL) {
        exit(1);
    }
    for (i=0; i<sopt; i++) {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%lf",&array[i]);
        if (array[i]<0) {
            arrayam[x]=array[i];
            x++;
        }
        else if (array[i]>0) {
            arrayduong[y]=array[i];
            y++;
        }
    }
    printf("Mang cac phan tu am la: ");
    for (i=0; i<x; i++) {
        printf("%.2lf ",arrayam[i]);
    }
    printf("\nMang cac phan tu duong la: ");
    for (i=0; i<y; i++) {
        printf("%.2lf ",arrayduong[i]);
    }
    printf("\n");
    return 0;
}
*/

// Bài 2: Viết chồng đè toán tử cộng, trừ, nhân, chia hai mảng 1 chiều có cùng n phần tử. Phép cộng hai mảng 1 chiều trả về một mảng mới với mỗi phần tử là tổng của 2 phần tử tương ứng trong hai mảng đó. Tương tự với phép -, *, /

/*
#include <stdio.h>
#include <iostream>

using namespace std;

static void inputArray(double *array, int sopt) {
    int i=0;
    for (i=0; i<sopt; i++) {
        printf("Nhap phan tu thu 1: ");
        scanf("%lf",&array[i]);
    }
}

class Array {
    double *array;
    int size;
public:
    Array operator + (Array &1, Array &2) {
        
    }
};

int main() {
    int sopt;
    int i=0;
    printf("Nhap so phan tu cua hai mang: ");
    scanf("%d",&sopt);
    double array1[sopt],array2[sopt];
    printf("Mang thu nhat: \n");
    inputArray(array1, sopt);
    printf("Mang thu hai: \n");
    inputArray(array2, sopt);
    
    return 0;
}
*/

// Bài 3: Viết hàm xoá tất cả các phần tử trùng nhau trong mảng chỉ giữ lại một phần tử đó trong dãy (giữ phần tử đầu tiên, xoá hết các phần tử giống nhau đi) done!
/*
#include <iostream>
#include <stdio.h>

void delsameArray (int *array, int sopt);
void inputArray (int *array, int sopt);

void delsameArray (int *array, int sopt) {
    int i=0,j=0,k=0;
    for (i=0; i<sopt; i++) {
        for (j=i+1; j<sopt; j++) {
            if (array[i]==array[j]) {
                for (k=j; k<sopt-1; k++) { // swap
                    int temp=0;
                    temp=array[k];
                    array[k]=array[k+1];
                    array[k+1]=temp;
                }
                --sopt; // gặp phần tử giống nhau, đổi chỗ xuống cuối, rồi giảm số pt trong mảng đi 1.
            }
        }
    }
    i=0;
    printf("Mang sau khi da sap xep la: ");
    for (i=0; i<(sopt); i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void inputArray(int *array, int sopt) {
    int i=0;
    for (i=0; i<sopt; i++) {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&array[i]);
    }
}

int main(int argc, const char * argv[]) {
    int *array=NULL;
    int sopt;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&sopt);
    array=new int[sopt];
    inputArray(array, sopt);
    delsameArray(array, sopt);
    return (0);
}
*/

// Bài 4: Viết hàm xoá một dòng hoặc một cột trong ma trận. Trả về ma trận kết quả.

#include <iostream>
#include <stdio.h>

void selectMode(int *delnum, int *mode, int row, int column) {
    printf("Chon xoa hang hoac xoa cot: \n");
    printf("1. Xoa hang\n2. Xoa cot\n");
    scanf("%d",mode);
    switch (*mode) {
        case 1:
            do {
                printf("Chon hang can xoa: ");
                scanf("%d",delnum);
            } while (*delnum>row||*delnum<=0);
            break;
        case 2:
            do {
                printf("Chon cot can xoa: ");
                scanf("%d",delnum);
            } while (*delnum>column||*delnum<=0);
            break;
        default:
            printf("Nhap sai chuc nang, thu lai. ");
            break;
    }
}

void delMatrix (int delnum, int mode) {
    if (mode==1) {
        
    }
    else if (mode==2) {
        
    }
}

int main(int argc, const char * argv[]) {
    int row, column;
    int i,j;
    printf("Nhap so hang cua ma tran A: ");
    scanf("%d",&row);
    printf("Nhap so cot cua ma tran A: ");
    scanf("%d",&column);
    int array[row][column];
    for (i=0; i<row; i++) {
        for (j=0; j<column; j++) {
            printf("A[%d][%d]: ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
    int delnum=0;
    int mode=0;
    selectMode(&delnum,&mode,row,column);
    delMatrix(delnum,mode);
    return 0;
}


// Bài 5: Viết chương trình chồng đè toán tử +, -, * với ma trận. Ma trận khởi tạo dùng cấp phát bộ nhớ động.
/*
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
*/
