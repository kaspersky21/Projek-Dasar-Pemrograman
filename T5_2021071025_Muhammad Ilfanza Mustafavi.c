#include <stdio.h>

int array[10],array2[10];
int nilai_pertama, nilai_kedua;
int hasil;

int main()
{
    printf("Kelompok nilai pertama\n");
    for(int input=1; input<11; input++)
    {
        printf("Nilai ke-%d: ",input);
        scanf("%d", &array[input]);
    }
    printf("\n");

    printf("Kelompok nilai kedua\n");
    for(int input2=1; input2<11; input2++)
    {
        printf("Nilai ke-%d: ",input2);
        scanf("%d", &array2[input2]);
    }
    printf("\n");
    printf("Masukkan nilai sembarang kelompok pertama urutan ke-");
    scanf("%d", &nilai_pertama);
    printf("\n");
    printf("Masukkan nilai sembarang kelompok kedua urutan ke-");
    scanf("%d", &nilai_kedua);
    printf("\n");
    printf("Nilai sembarang kelompok pertama urutan ke-%d adalah %d\n", nilai_pertama, array[nilai_pertama]);
    printf("Nilai sembarang kelompok kedua urutaan ke-%d adalah %d\n", nilai_kedua, array2[nilai_kedua]);
    hasil = array[nilai_pertama] + array2[nilai_kedua];
    printf("\n");
    printf("Hasil dari perjumlahannya adalah %d", hasil);

    return 0;
}




