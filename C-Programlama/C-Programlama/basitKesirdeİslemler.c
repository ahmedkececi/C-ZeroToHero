//
//  basitKesirdeİslemler.c
//  C-Programlama
//
//  Created by Ahmed Keçeci on 9.05.2021.
//

#include <stdio.h>

int main(){
    int a,b;
    char c;
    printf("Toplama (+) veya Çıkarma (-) Operatörünü Giriniz : ");
    scanf("%c",&c);
    printf("İki Adet Sayı Giriniz : ");
    scanf("%d%d",&a,&b);
    if (a==0 || b==0) {
        printf("İşlem Yapılamıyor");
    }
    else if (c=='+') {
        printf("1/%d + 1/%d = %d/%d\n",a,b,a+b,a*b);
    }
    else if (c=='-'){
        printf("1/%d - 1/%d = %d/%d\n",a,b,a-b,a*b);
    }
    else{
        printf("Hatalı Giriş\n");
    }
}
