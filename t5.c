#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 100


int faktorial();
int pangkat();
int primCheck(int a);
void showPrime();

void  menu_utama() {

    system("cls");
    printf("PILIH FUNGSI - FUNGSI DIBAWAH\n\n");
    printf("(ketik 1) -> FAKTORIAL\n");
    printf("(ketik 2) -> PANGKAT\n");
    printf("(ketik 3) -> CEK BILANGAN PRIMA\n");
    printf("(ketik 4) -> MENUNJUKKAN BILANGAN PRIMA DARI RANGE ANGKA\n");
    printf("(ketik 5) -> KELUAR PROGRAM\n");


}

// FAKTORIAL
int faktorial() {

while (1) {

    system("cls");
  unsigned long long int a;
    printf("MASUKKAN SEBUAH ANGKA\n");
    scanf("%llu", &a);

    int i;
   unsigned long long int hasil = 1;
    for (i = 0; i<a; i++) { 
        hasil = hasil * (a-i);
    }
    printf("\nFungsi faktorial dijalankan.....\nHasil : %llu\n", hasil);


    printf("\nLanjutkan fungsi (ketik 1) atau hentikan fungsi (ketik 0)\n");
    int x;
    scanf("%d", &x);
    if ( x == 0) {
        return 1;   
    }
    else {continue;}

}
    
}

int pangkat() {
    while (1) {


    system("cls");

    int a, b, i, hasil;
    hasil = 1;
    printf("bilangan: ");
    scanf("%d", &a);
    printf("pangkat: ");
    scanf("%d", &b);

    for (i = 0; i<b; i++ ) {
        hasil = hasil * a;
    }
    printf("\nFungsi pangkat dijalankan.....\nHasil : %d\n", hasil);

    printf("\nLanjutkan fungsi (ketik 1) atau hentikan fungsi (ketik 0)\n");
    int x;
    scanf("%d", &x);
    if ( x == 0) {
        return 1;   
    }
    else {continue;}

    }
}

//CEK BILANGAN PRIMA
int primCheck(int a) {
    
   // system("cls");

    int i,j, flag;
    flag = 1;
    if (a == 1) {
        flag = 0;
        return flag;
    }
    else {
    for ( i = 2; i<=a/2; i++ ) {
        if ( a%i == 0 && a != i && a != 1) {
            flag = 0;
            break;  }
    } 
    return flag;
    }
}


// CEK PRIMA DARI RANGE ANGKA
void showPrime() {
while (1) {
    system("cls");
    int arr[SIZE];
    int hasil, j, awal, akhir;
    int primeArr[SIZE];


    // memasukkan range data ke arr
    printf("MASUKKAN RANGE DATA.... (awal > 0 dan akhir < 100)\n");
    printf("Awal =\n");
    scanf("%d", &awal);
    printf("Akhir =\n");
    scanf("%d", &akhir);
    
    for ( j = 0; j<SIZE; j++) {  // Mengisi range data
        arr[j] = awal;
        awal++;
        if (arr[j] == akhir) {
            break;
        }
    }

    printf("\nBilangan Prima dari range data tersebut adalah :\n");
    for ( j = 0; arr[j] <= akhir; j++) { // mengiterasi range data
        hasil = primCheck(arr[j]);
        if (hasil == 1) {           // eleme yg prima akan dimasukkan array baru
            primeArr[j] = arr[j];
            printf("%d ", primeArr[j]);
        }
    }

    printf("\n\nLanjutkan fungsi (ketik 1) atau hentikan fungsi ( ketik 0)\n");
    int x;
    scanf("%x", &x);
    if ( x == 1) {
        continue;
    }
    else {main();}

    }
}


// MENU UTAMA
void main() {
menu_utama();
int opsi;
scanf("%d", &opsi);
    if ( opsi == 5) {
        system("cls");
        exit(1);
    }
    else {

if ( opsi == 1) {                               // FAKTORIAL
int esc = faktorial();
if (esc == 1) {
    main();
} 
}
else if ( opsi == 2) {                      // PANGKAT
        int ess = pangkat();
        if ( ess == 1) {
            main();
        }
    }
        else if ( opsi == 3) {                  // CEK PRIMA 
        while (1) {

           system("cls");
            int ab,flag;
            printf("MASUKKAN SEBUAH ANGKA\n");
            scanf("%d", &ab);
            flag = primCheck(ab);

            if (flag == 0) {
                printf("bilangan %d bukan prima\n", ab);
            }
            else {
                printf("bilangan %d adalah prima\n", ab);
            }
    printf("\nLanjutkan fungsi (ketik 1) atau hentikan fungsi (ketik 0)\n");
    int x;
    scanf("%d", &x);
    if ( x == 0) 
    {main(); }
    else {continue;}
        }
        }
             else if ( opsi == 4) {             // MENUNJUKKAN PRIMA
                showPrime();
            }
    
}
}
