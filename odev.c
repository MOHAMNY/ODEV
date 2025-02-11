#include <stdio.h>
#include <time.h>

typedef struct {
    int gun, ay, yil;
    int saat, dakika, saniye;
} TarihSaat;

typedef union {
    long saniye;
    double dakika;
} ZamanFarki;

time_t epoch_time_hesapla(TarihSaat tarihSaat) {
    struct tm zaman = {0};

    zaman.tm_mday = tarihSaat.gun;
    zaman.tm_mon  = tarihSaat.ay - 1;
    zaman.tm_year = tarihSaat.yil - 1900;
    zaman.tm_hour = tarihSaat.saat;
    zaman.tm_min  = tarihSaat.dakika;
    zaman.tm_sec  = tarihSaat.saniye;

    return mktime(&zaman);
}

void zaman_farki_hesapla(time_t epoch1, time_t epoch2) {
    ZamanFarki fark;
    fark.saniye = difftime(epoch2, epoch1);
    fark.dakika = fark.saniye / 60.0;

    printf("\nZaman Farki: %ld saniye (%.2f dakika)\n", fark.saniye, fark.dakika);
}

int main() {
    TarihSaat tarihSaat1, tarihSaat2;
    time_t epoch1, epoch2;

    printf("Birinci tarihi giriniz (GG AA YYYY SS DD SS): ");
    scanf("%d %d %d %d %d %d", &tarihSaat1.gun, &tarihSaat1.ay, &tarihSaat1.yil, &tarihSaat1.saat, &tarihSaat1.dakika, &tarihSaat1.saniye);

    printf("ikinci tarihi giriniz (GG AA YYYY SS DD SS): ");
    scanf("%d %d %d %d %d %d", &tarihSaat2.gun, &tarihSaat2.ay, &tarihSaat2.yil, &tarihSaat2.saat, &tarihSaat2.dakika, &tarihSaat2.saniye);

    epoch1 = epoch_time_hesapla(tarihSaat1);
    epoch2 = epoch_time_hesapla(tarihSaat2);

    printf("\nBirinci tarih Epoch Zamani: %ld\n", epoch1);
    printf("ikinci tarih Epoch Zamani: %ld\n", epoch2);

    zaman_farki_hesapla(epoch1, epoch2);

    return 0;
}