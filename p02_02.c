#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char targetKategori[50];
    int totalStok = 0;

    printf("Masukkan jumlah data (N): ");
    scanf("%d", &N);

    printf("Masukkan kategori barang yang ingin dicari: ");
    scanf("%s", targetKategori);

    printf("Masukkan deret data (contoh: 22pcs dasi, 5pcs gula): \n");

    for (int i = 0; i < N; i++) {
        int stokSekarang;
        char namaBarang[50];

        if (scanf("%dpcs %[^\n,]", &stokSekarang, namaBarang) == 2) {
            
            char *koma = strchr(namaBarang, ',');
            if (koma) *koma = '\0';

            if (strstr(namaBarang, targetKategori) != NULL) {
                totalStok += stokSekarang;
            }
        }
        
        scanf(" ");
    }

    printf("\nTotal stok untuk kategori '%s' adalah: %d\n", targetKategori, totalStok);

    return 0;
}