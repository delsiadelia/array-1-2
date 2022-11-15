#include <iostream>

using namespace std;

int main(){
     // Deklarasi sekaligus inisialisasi (pengisian awal)
     // Array 'ARnilai' dengan 5 buah elemen berisi int
     int ARnilai[5]={6,8,4,24,2};

     // Karena sudah melakukan inisialisasi maka kita
     // Tidak wajib mengisi nilai kedalam Elemen Array

     // Menampilkan nilai atau isi dari array 'ARnilai'
     for(int i=0; i<5;i++){
          cout<<"Tampil nilai indek ke ["<<i<<"] = "<<ARnilai[i];
          cout<<endl;
     }

     return 0;
}
