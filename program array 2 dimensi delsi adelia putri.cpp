#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "##  Program C++ Input Matriks 2 Dimensi ##" << endl;
  cout << "==========================================" << endl;
  cout << endl;

  int matriks[100][100];
  int jumlah_baris, jumlah_kolom, i, j;

  cout << "Input jumlah baris matriks: ";
  cin >> jumlah_baris;

  cout << "Input jumlah kolom matriks: ";
  cin >> jumlah_kolom;
  cout << endl;

  // proses input array
  for(i = 0; i < jumlah_baris ; i++){
    for(j = 0; j < jumlah_kolom; j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> matriks[i][j];
    }
    cout << endl;
  }

  cout << "Hasil matriks: " << endl;

  // menampilkan array
  for(i = 0; i < jumlah_baris ; i++){
    for(j = 0; j < jumlah_kolom; j++){
      cout << setw(3) << matriks[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
