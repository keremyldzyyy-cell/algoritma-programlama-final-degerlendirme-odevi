#include <stdio.h>
#include <math.h>

int main() {
    float fiyat, odenen_tutar;
    while (1) {
        printf("Lutfen ucreti giriniz...\n");
        if (scanf("%f", &fiyat) == 0) {
            printf("Lutfen sayi giriniz\n");
            fflush(stdin);
            continue;
        }
        printf("Odenen miktari giriniz...\n");
        if (scanf("%f", &odenen_tutar) == 0) {
            printf("Lutfen sayi giriniz\n");
            fflush(stdin);
            continue;
        }
        if (odenen_tutar > fiyat) {
            break;
        }
        printf("Para ustu eksik. Degerleri tekrar giriniz.\n");
    }
    printf("\n========================================\n");
    printf("           ISLEM OZETI                  \n");
    printf("========================================\n");
    printf(" Ucret        : %.2f TL\n", fiyat);
    printf(" Odenen Tutar : %.2f TL\n", odenen_tutar);
    printf(" Para Ustu    : %.2f TL\n", odenen_tutar - fiyat);
    printf("========================================\n");
    int banknot_degerleri[7] = {20000, 10000, 5000, 2000, 1000, 500, 100};
    char banknot_isimleri[7][10] = {"200 TL", "100 TL", "50 TL", "20 TL", "10 TL", "5 TL", "1 TL"};
    int kurus_degerleri[5] = {50, 25, 10, 5, 1};
    char kurus_isimleri[5][20] = {"50 kurus", "25 kurus", "10 kurus", "5 kurus", "1 kurus"};
    int banknot_adetleri[7] = {0, 0, 0, 0, 0, 0, 0};
    int kurus_adetleri[5] = {0, 0, 0, 0, 0};
    int kalan_kurus = (int)roundf((odenen_tutar - fiyat) * 100);
    int toplam_banknot_adedi = 0;
    for (int i = 0; i < 7; i++) {
        int adet = kalan_kurus / banknot_degerleri[i];
        toplam_banknot_adedi += adet;
        kalan_kurus -= adet * banknot_degerleri[i];
        banknot_adetleri[i] = adet;
    }
    int toplam_kurus_adedi = 0;
    for (int i = 0; i < 5; i++) {
        int adet = kalan_kurus / kurus_degerleri[i];
        toplam_kurus_adedi += adet;
        kalan_kurus -= adet * kurus_degerleri[i];
        kurus_adetleri[i] = adet;
    }
    printf("\n            PARA USTU DETAYI            \n");
    printf("----------------------------------------\n");
    printf("[Banknotlar]\n");
    for (int i = 0; i < 7; i++) {
        if (banknot_adetleri[i] > 0) {
            printf("  > %-8s : %d adet\n", banknot_isimleri[i], banknot_adetleri[i]);
        }
    }
    printf("\n[Kuruslar]\n");
    for (int i = 0; i < 5; i++) {
        if (kurus_adetleri[i] > 0) {
            printf("  > %-10s : %d adet\n", kurus_isimleri[i], kurus_adetleri[i]);
        }
    }
    printf("----------------------------------------\n");
    printf(" Toplam Banknot Adedi : %d\n", toplam_banknot_adedi);
    printf(" Toplam Kurus Adedi   : %d\n", toplam_kurus_adedi);
    printf("========================================\n");
    return 0;
}