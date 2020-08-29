//Nama : Vareza Vimaretantyo
//NIM : A11.2016.09503
//tgl : 29/09/2016
//Judul : Program penghitung keterlambatan mahasiswa

#include <stdio.h>
#include <stdlib.h>

//Kamus :
    int jam,mnt,dtk;
    int jam2,mnt2,dtk2;
    int datang,masuk,telat;
//Deskripsi:
main ()
{
    //inputan
    printf("\t========== Program Penghitung Keterlambatan Mahasiswa ==========\n\n");
    printf("Note : HH untuk format Jam, MM untuk format menit, dan SS untuk format detik\n\n");
    printf("Masukan Pukul Berapa Mahasiswa Hadir : \n");
    printf("HH\t= "); scanf("%d", &jam);
    printf("MM\t= "); scanf("%d", &mnt);
    printf("SS\t= "); scanf("%d", &dtk);
    printf("\nMasukan Pukul Berapa Jam Dimulai : \n");
    printf("HH\t= "); scanf("%d", &jam2);
    printf("MM\t= "); scanf("%d", &mnt2);
    printf("SS\t= "); scanf("%d", &dtk2);
    //converting
    datang=(jam*3600)+(mnt*60)+dtk;
    masuk=(jam2*3600)+(mnt2*60)+dtk2;
    telat=datang-masuk;
    printf("\nTotal Keterlambatan : %d detik",telat);

    getch();
    return 0;
}
