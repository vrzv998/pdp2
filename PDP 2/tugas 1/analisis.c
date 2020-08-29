/*Nama : Vareza Vimaretantyo*/
/*NIM : A11.2016.09503*/
/*judul : Menganalisis kesalahan pada suatu program*/
/*last edited 09/29/2016 sept,29th 2016 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
/* kamus */
    int Celcius; //derajat celcius yang akan diinputkan
    int CeltoFah; //derajat farenheit yang didapat setelah converting dari celcius
    int CeltoKel; //derajat kelvin yang didapat setelah converting dari celcius
    int CeltoRea; //derajat reamur yang didapat setelah converting dari celcius

        printf("\t\t ====[Mengubah Nilai derajat Celcius menjadi Reamur, Farenheit, dan Kelvin]==== \n\n");
        printf("Masukkan Jumlah Celcius\t: ");  scanf("%d", &Celcius); //memasukan nilai celcius yang akan diubah

/* Program */
        //Proses
        CeltoFah=(1.8 * Celcius) + 32; //proses pengubahan celcius ke farenheit //1.8 didapatkan dari 9/5
        CeltoKel=Celcius+273;        //proses pengubahan celcius ke kelvin
        CeltoRea=0.8 * Celcius;     //proses pengubahan celcius ke reamur //0.8 didapatkan dari 4/5
        //note : jika menggunakan 4/5 dan 9/5 maka hasilnya akan berbeda dari hasil sebenarnya
        //oleh karena itu dari 4/5 diubah ke bentuk desimal menjadi 0.8
        //dan 9/5 diubah ke bentuk desimal menjadi 1.8

        //output
        printf("Dalam Skala Celcius menunjukkan %d derajat \n", Celcius); //menunjutkan skala celcius
        printf("Bila dikonversi menjadi Fahrenheit menjadi\t: %d derajat\n",CeltoFah); //menampilkan skala farenheit yang didapat dari mengkonversi celcius
        printf("Bila dikonversi menjadi Reamur menjadi\t: %d derajat\n",CeltoRea); //menampilkan skala reamur yang didapat dari mengkonversi celcius
        printf("Bila dikonversi menjadi Kelvin menjadi\t: %i derajat\n",CeltoKel); //menampilkan skala kelvin yang didapat dari mengkonversi celcius

        getch();
        return 0;
}
