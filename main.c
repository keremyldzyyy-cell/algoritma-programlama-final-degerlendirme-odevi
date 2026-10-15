#include <stdio.h>
#include <math.h>

int main(void)
{
    float urun_tutari, odenen_para;

    printf("Urun tutari (TL): ");
    scanf("%f", &urun_tutari);

    printf("Musterinin odedigi para (TL): ");
    scanf("%f", &odenen_para);

    int para_ustu_kurus = (int)round((odenen_para - urun_tutari) * 100.0);

    printf("\nMusteriye verilecek toplam para ustu: %d kurus\n", para_ustu_kurus);

    int kalan = para_ustu_kurus;

    int b200 = kalan / 20000; kalan = kalan % 20000;  
    int b100 = kalan / 10000; kalan = kalan % 10000;  
    int b50  = kalan / 5000;  kalan = kalan % 5000;   
    int b20  = kalan / 2000;  kalan = kalan % 2000;   
    int b10  = kalan / 1000;  kalan = kalan % 1000;   
    int b5   = kalan / 500;   kalan = kalan % 500;    
    int m1tl = kalan / 100;   kalan = kalan % 100;    
    int k50  = kalan / 50;    kalan = kalan % 50;     
    int k25  = kalan / 25;    kalan = kalan % 25;     
    int k10  = kalan / 10;    kalan = kalan % 10;     
    int k5   = kalan / 5;     kalan = kalan % 5;      
    int k1   = kalan / 1;     kalan = kalan % 1;      

    printf("\n--- Verilecek banknot ve madeni paralar ---\n");
    printf("200 TL : %d adet\n", b200);
    printf("100 TL : %d adet\n", b100);
    printf("50 TL  : %d adet\n", b50);
    printf("20 TL  : %d adet\n", b20);
    printf("10 TL  : %d adet\n", b10);
    printf("5 TL   : %d adet\n", b5);
    printf("1 TL   : %d adet\n", m1tl);
    printf("50 kr  : %d adet\n", k50);
    printf("25 kr  : %d adet\n", k25);
    printf("10 kr  : %d adet\n", k10);
    printf("5 kr   : %d adet\n", k5);
    printf("1 kr   : %d adet\n", k1);
    
    return 0;
}