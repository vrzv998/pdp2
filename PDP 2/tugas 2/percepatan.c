/*Nama : Vareza Vimaretantyo*/
/*NIM : A11.2016.09503*/
/*Kelas : A11.4105*/
/*Judul : Operator Aritmatika*/
#include <stdio.h>
#include <stdlib.h>

    /*Kamus*/
    float Vawal;
    float Vakhir;
    float accel;
    float wkt;

    /*Deskripsi*/
    int main()
    {
            /*Proses*/
            Vawal= 0;
            Vakhir= 21.55;
            wkt= 12.5;
            accel = (Vakhir/wkt)-Vawal;

            /*output*/
            printf("\t===== Operator Aritmatika =====\n\n");
            printf("Diketahui :\n");
            printf("Kecepatan awal (v0) adalah %.3f m/s\n",Vawal);
            printf("Kecepatan akhir(vt) adalah %.3f m/s\n",Vakhir);
            printf("Waktu (t) : %.3f s\n\n",wkt);
            printf("Ditanyakan : Menghitung percepatan(a)\n");
            printf("Rumus yang digunakan : vt = vo + a.t\n");
            printf("Setelah Penghitungan : %.3f m/s^2\n",accel);

            getch();
            return 0;
    }
