#include <stdio.h>

int main() {
    char nama[100];
    int pilihan, jumlah;
    int harga = 0;
    int subtotal;
    int total = 0;
    int banyak;

    printf("========== KAFETARIA DEL ==========\n");
    printf("1. Bakwan            10000\n");
    printf("2. Tempe             10000\n");
    printf("3. Tahu              10000\n");
    printf("4. Piscok            10000\n");
    printf("5. PKL               10000\n");
    printf("6. Pisang Goreng     10000\n");
    printf("7. Matcha Dingin     10000\n");
    printf("8. Capucino Dingin   10000\n");
    printf("9. Donat             10000\n");
    printf("10. Roti Isi Ayam    15000\n");
    printf("11. Kentang Goreng   15000\n");
    printf("===================================\n");

    printf("Nama Pemesan : ");
    scanf(" %[^\n]", nama);

    printf("Jumlah Jenis Pesanan : ");
    scanf("%d", &banyak);

    printf("\n============== STRUK ==============\n");
    printf("Nama : %s\n", nama);
    printf("-----------------------------------\n");
    printf("Menu                Jml   Subtotal\n");
    printf("-----------------------------------\n");

    for(int i=1;i<=banyak;i++){

        printf("Pilih Menu (1-11) : ");
        scanf("%d",&pilihan);

        printf("Jumlah : ");
        scanf("%d",&jumlah);

        if(pilihan>=1 && pilihan<=9) harga=10000;
        else if(pilihan==10 || pilihan==11) harga=15000;

        subtotal=harga*jumlah;
        total+=subtotal;

        if(pilihan==1) printf("Bakwan              %d     %d\n",jumlah,subtotal);
        else if(pilihan==2) printf("Tempe               %d     %d\n",jumlah,subtotal);
        else if(pilihan==3) printf("Tahu                %d     %d\n",jumlah,subtotal);
        else if(pilihan==4) printf("Piscok              %d     %d\n",jumlah,subtotal);
        else if(pilihan==5) printf("PKL                 %d     %d\n",jumlah,subtotal);
        else if(pilihan==6) printf("Pisang Goreng       %d     %d\n",jumlah,subtotal);
        else if(pilihan==7) printf("Matcha Dingin       %d     %d\n",jumlah,subtotal);
        else if(pilihan==8) printf("Capucino Dingin     %d     %d\n",jumlah,subtotal);
        else if(pilihan==9) printf("Donat               %d     %d\n",jumlah,subtotal);
        else if(pilihan==10) printf("Roti Isi Ayam       %d     %d\n",jumlah,subtotal);
        else if(pilihan==11) printf("Kentang Goreng      %d     %d\n",jumlah,subtotal);
    }

    printf("-----------------------------------\n");
    printf("Total Pembayaran : %d\n", total);
    printf("===================================\n");

    return 0;
}