#include <stdio.h>

int main() {
    char kode[10];
    float beratButet, beratUcok, totalBerat;
    float ongkirPerKg, totalOngkir, diskon;
    char kota[20], ket[20];

    while (1) {
        printf("Masukkan kode kota (MDN/BLG/JKT/SBY) atau END untuk selesai: ");
        scanf("%s", kode);

        if (kode[0]=='E' && kode[1]=='N' && kode[2]=='D')
            break;

        printf("Masukkan berat paket Butet (kg): ");
        scanf("%f", &beratButet);

        if (kode[0]=='M' && kode[1]=='D' && kode[2]=='N') {
            ongkirPerKg = 8000;
            sprintf(kota,"Medan");
            sprintf(ket,"Dalam Pulau");
        }
        else if (kode[0]=='B' && kode[1]=='L' && kode[2]=='G') {
            ongkirPerKg = 5000;
            sprintf(kota,"Balige");
            sprintf(ket,"Dalam Pulau");
        }
        else if (kode[0]=='J' && kode[1]=='K' && kode[2]=='T') {
            ongkirPerKg = 12000;
            sprintf(kota,"Jakarta");
            sprintf(ket,"Luar Pulau");
        }
        else if (kode[0]=='S' && kode[1]=='B' && kode[2]=='Y') {
            ongkirPerKg = 13000;
            sprintf(kota,"Surabaya");
            sprintf(ket,"Luar Pulau");
        }

        beratUcok = 1.5 * beratButet;
        totalBerat = beratButet + beratUcok;

        totalOngkir = totalBerat * ongkirPerKg;

        diskon = 0;
        if (totalBerat > 10) {
            diskon = 0.1 * totalOngkir;
            totalOngkir = totalOngkir - diskon;
        }

        printf("\n=== STRUK PEMBAYARAN DEL EXPRESS ===\n");
        printf("Kota Tujuan      : %s\n", kota);
        printf("Berat Butet      : %.2f kg\n", beratButet);
        printf("Berat Ucok       : %.2f kg\n", beratUcok);
        printf("Total Berat      : %.2f kg\n", totalBerat);
        printf("Total Ongkir     : %.2f\n", totalOngkir);

        if (totalBerat > 10)
            printf("Promo            : Diskon 10%% Ongkir\n");
        else
            printf("Promo            : Tidak ada diskon\n");

        if (ket[0]=='L')
            printf("Bonus            : Asuransi Gratis\n");

        printf("\n");
    }

    return 0;
}