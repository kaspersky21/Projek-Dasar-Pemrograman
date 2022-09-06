#include <stdio.h>
/*for
Instruksi for digunakan untuk mengeksekusi atau
menjalankan statement / perintah dengan jumlah
pengulangan yang telah diketahui.

while
instruksi while digunakan untuk mengulang suatu statement
selama kondisi syarat yang diberikan bernilai benar.
Apabila kondisi bernilai salah, maka statement / perintah
yang dideklarasikan di dalam perulangan while tidak akan diulang.
*/

int main ()

{
 int a, b, c, d;
 a=5;
 for (b = 1; b <= a; b++)
 {
  for (c = 1; c <= b; c++)
  printf (" ");
  for (d = 0; d >= (b - a) ; d--)
  printf ("* ");
  printf ("\n");
 }

 int n, j, k, l, i;

    n = 5;
    i = 2;
    do
    {
        j = n;
        do
        {
            printf (" ");
            j--;
        }
        while (j >= i );

        k = 1;
        do

        {
            printf ("* ");
            k++;
        }
        while (k <= i);
        printf ("\n");
        i++;
    }
    while (i <= n);


return 0;
}
