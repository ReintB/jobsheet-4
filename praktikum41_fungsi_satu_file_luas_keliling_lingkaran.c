// Jobsheet 4 - Fungsi
// Source Code 1: Gambar 4.1 Fungsi yang berada satu file dengan fungsi main
#include <stdio.h>
#define pi 3.14
float luas_lingkaran(float jari2)
{
    float hasil;
    return hasil = pi * jari2 * jari2;

}
float keliling_lingkaran(float jari2)
{
    float hasil;
    hasil = 2 * pi * jari2;
    return hasil;
}
int main()
{
    float r = 0.5;
    float luas;
    float keliling;

    luas = luas_lingkaran(r);
    keliling = keliling_lingkaran(r);

    printf("Luas Lingkaran = %f\n",luas);
    printf("Keliling Lingkaran = %f\n",keliling);
    return 0;
}
