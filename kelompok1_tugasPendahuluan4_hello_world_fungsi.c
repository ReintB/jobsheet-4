// Jobsheet 4 - Tugas Pendahuluan
// Menampilkan "Hello World" menggunakan fungsi di luar fungsi main
// (fungsi masih berada dalam satu file dengan fungsi main)
#include <stdio.h>

// Fungsi void: tidak mengembalikan nilai, hanya menjalankan perintah
void tampilkan_hello_world()
{
    printf("Hello World\n");
}

int main()
{
    tampilkan_hello_world();   // memanggil fungsi
    return 0;
}
