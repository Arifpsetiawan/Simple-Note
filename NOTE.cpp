#include <iostream>
#define max 20
using namespace std;

struct NOTE {
  int data[max];
  string judul[max];
  int tanggal[max];
  int bulan[max];
  int tahun[max];
  string pesan[max];
  int head;
  int tail;
} list;

void reset() {
  list.head = 0;
  list.tail = 0;
  cout << "Note berhasil direset";
}

bool empty() {
  if (list.tail == 0) {
    return true;
  } else {
    return false;
  }
}

bool full() {
  if (list.tail == max) {
    return true;
  } else {
    return false;
  }
}

void input(string judul, int tanggal, int bulan, int tahun, string pesan) {
  if (empty() == 0) {
    list.judul[list.tail] = judul+bulan;
    list.judul[list.tail] = judul;
    list.tanggal[list.tail] = tanggal;
    list.bulan[list.tail] = bulan;
    list.tahun[list.tail] = tahun;
    list.pesan[list.tail] = pesan;

    cout << "\nBerhasil menambahkan Note \"" << judul << "\"";
    list.tail++;
  } else if (!full()) {
    list.judul[list.tail] = judul;
    list.tanggal[list.tail] = tanggal;
    list.bulan[list.tail] = bulan;
    list.tahun[list.tail] = tahun;
    list.pesan[list.tail] = pesan;

    cout << "\nBerhasil menambahkan Note \"" << judul << "\"";
    list.tail++;
  } else
    cout << "List penuh";
}

void tampil() {
  if (!empty()) {
    for (int i = list.head; i <= list.tail - 1; i++) {
      cout << "\nList ke-" << i << " : \n";
      cout << "Judul Note : " << list.judul[i] << endl;
      cout << "Tanggal: " << list.tanggal[i] << endl;
      cout << "Bulan: " << list.bulan[i] << endl;
      cout << "Tahun: " << list.tahun[i] << endl;
      cout << "Pesan: " << list.pesan[i] << endl;
    }
  } else
    cout << "List kosong";
}

void hapus() {
  if (!empty()) {
    cout << "Berhasil menghapus list" << endl;
    for (int i = list.head; i < list.tail; i++) {
      list.judul[i] = list.judul[i + 1];
      list.tanggal[i] = list.tanggal[i + 1];
      list.bulan[i] = list.bulan[i + 1];
      list.tahun[i] = list.tahun[i + 1];
      list.pesan[i] = list.pesan[i + 1];
    }
    list.tail--;
  } else {
    cout << "List Kosong";
  }
}

void ascending() {
  int i, j, temp;
  string tempp;
  for (i = list.head; i < list.tail - 1; i++) {
    for (j = list.head; j < (list.tail - i) - 1; j++)

      if ((list.tahun[j] > list.tahun[j + 1] || list.tahun[j] > list.tahun[j + 1] && list.bulan[j] > list.bulan[j + 1] || list.tahun[j] > list.tahun[j + 1] && list.bulan[j] > list.bulan[j + 1] && list.tanggal[j] > list.tanggal[j + 1]) || list.tahun[j] == list.tahun[j + 1] && list.bulan[j] > list.bulan[j + 1] || list.tahun[j] == list.tahun[j + 1] && list.bulan[j] == list.bulan[j + 1] && list.tanggal[j] > list.tanggal[j + 1]) {
        tempp = list.judul[j];
        list.judul[j] = list.judul[j + 1];
        list.judul[j + 1] = tempp;

        temp = list.tanggal[j];
        list.tanggal[j] = list.tanggal[j + 1];
        list.tanggal[j + 1] = temp;

        temp = list.bulan[j];
        list.bulan[j] = list.bulan[j + 1];
        list.bulan[j + 1] = temp;

        temp = list.tahun[j];
        list.tahun[j] = list.tahun[j + 1];
        list.tahun[j + 1] = temp;

        tempp = list.pesan[j];
        list.pesan[j] = list.pesan[j + 1];
        list.pesan[j + 1] = tempp;
      }
  }
  system("cls");
  cout << "List setelah diurutkan" << endl;
  tampil();
  system("pause");
  system("cls");
}

void descending() {
  int i, j, temp;
  string tempp;
  for (i = list.head; i < list.tail - 1; i++) {
    for (j = list.head; j < (list.tail - i) - 1; j++)

      if ((list.tahun[j] < list.tahun[j + 1] || list.tahun[j] < list.tahun[j + 1] && list.bulan[j] < list.bulan[j + 1] || list.tahun[j] < list.tahun[j + 1] && list.bulan[j] < list.bulan[j + 1] && list.tanggal[j] < list.tanggal[j + 1]) || list.tahun[j] == list.tahun[j + 1] && list.bulan[j] < list.bulan[j + 1] || list.tahun[j] == list.tahun[j + 1] && list.bulan[j] == list.bulan[j + 1] && list.tanggal[j] < list.tanggal[j + 1]) {
        tempp = list.judul[j];
        list.judul[j] = list.judul[j + 1];
        list.judul[j + 1] = tempp;

        temp = list.tanggal[j];
        list.tanggal[j] = list.tanggal[j + 1];
        list.tanggal[j + 1] = temp;

        temp = list.bulan[j];
        list.bulan[j] = list.bulan[j + 1];
        list.bulan[j + 1] = temp;

        temp = list.tahun[j];
        list.tahun[j] = list.tahun[j + 1];
        list.tahun[j + 1] = temp;

        tempp = list.pesan[j];
        list.pesan[j] = list.pesan[j + 1];
        list.pesan[j + 1] = tempp;
      }
  }
  system("cls");
  cout << "List setelah diurutkan" << endl;
  tampil();
  system("pause");
  system("cls");
}

void asc() {
  int i, j, temp;
  string tempp;
  for (i = list.head; i < list.tail - 1; i++) {
    for (j = list.head; j < (list.tail - i) - 1; j++)

      if (list.judul[j] > list.judul[j + 1]) {
        tempp = list.judul[j];
        list.judul[j] = list.judul[j + 1];
        list.judul[j + 1] = tempp;

        temp = list.tanggal[j];
        list.tanggal[j] = list.tanggal[j + 1];
        list.tanggal[j + 1] = temp;

        temp = list.bulan[j];
        list.bulan[j] = list.bulan[j + 1];
        list.bulan[j + 1] = temp;

        temp = list.tahun[j];
        list.tahun[j] = list.tahun[j + 1];
        list.tahun[j + 1] = temp;

        tempp = list.pesan[j];
        list.pesan[j] = list.pesan[j + 1];
        list.pesan[j + 1] = tempp;
      }
  }
  system("cls");
  cout << "List setelah diurutkan" << endl;
  tampil();
  system("pause");
  system("cls");
}

void des() {
  int i, j, temp;
  string tempp;
  for (i = list.head; i < list.tail - 1; i++) {
    for (j = list.head; j < (list.tail - i) - 1; j++)

      if (list.judul[j] < list.judul[j + 1]) {
        tempp = list.judul[j];
        list.judul[j] = list.judul[j + 1];
        list.judul[j + 1] = tempp;

        temp = list.tanggal[j];
        list.tanggal[j] = list.tanggal[j + 1];
        list.tanggal[j + 1] = temp;

        temp = list.bulan[j];
        list.bulan[j] = list.bulan[j + 1];
        list.bulan[j + 1] = temp;

        temp = list.tahun[j];
        list.tahun[j] = list.tahun[j + 1];
        list.tahun[j + 1] = temp;

        tempp = list.pesan[j];
        list.pesan[j] = list.pesan[j + 1];
        list.pesan[j + 1] = tempp;
      }
  }
  system("cls");
  cout << "List setelah diurutkan" << endl;
  tampil();
  system("pause");
  system("cls");
}

int tgl() {
  int sort;
  cout << endl;
  system("cls");
  do {
    cout << "Sorting by Date\n\n1. Ascending\n2. Descending\n\n0. Back\n\nMasukkan Tipe Sorting: ";
    cin >> sort;
    switch (sort) {
      case 1:
        ascending();
        break;
      case 2:
        descending();
        break;
    }
    cout << endl;
    system("cls");

  } while (sort != 0);
  return 0;
}

int nmr() {
  int sort;
  cout << endl;
  cout << endl;
  system("cls");
  do {
    cout << "Sorting by Title\n\n1. Ascending\n2. Descending\n\n0. Back\n\nMasukkan Tipe Sorting: ";
    cin >> sort;
    switch (sort) {
      case 1:
        asc();
        break;
      case 2:
        des();
        break;
    }

  } while (sort != 0);

  return 0;
}

int sorting() {
  int sort;

  system("cls");
  do {
    cout << "Sorting by\n\n1. Tanggal\n2. Judul\n\n0. Back\n\nMasukkan yang ingin disorting: ";
    cin >> sort;
    switch (sort) {
      case 1:
        tgl();
        break;
      case 2:
        nmr();
        break;
    } system("cls");
  } while (sort != 0);

  return 0;
}

void srcjdl() {
  string cari;
  system("cls");
  cin.ignore();
  cout << "Masukan judul yang dicari : ";
  getline(cin, cari);
  for (int i = list.head; i < list.tail; i++) {
    if (list.judul[i] == cari) {
      cout << "Note ketemu pada index ke-" << i << endl;
      cout << "Judul : " << list.judul[i] << endl;
      cout << "Tanggal : " << list.tanggal[i] << endl;
      cout << "Bulan : " << list.bulan[i] << endl;
      cout << "Tahun : " << list.tahun[i] << endl;
      cout << "Pesan : " << list.pesan[i] << endl;
      cout << endl;
    }
  } system("pause");
    system("cls");
}

void srctgl() {
  int cari;
  system("cls");
  cout << "Masukan tanggal yang dicari : ";
  cin >> cari;
  for (int i = list.head; i < list.tail; i++) {
	if (list.tanggal[i] == cari) {
	  cout << "Note ketemu pada index ke-" << i << endl;
	  cout << "Judul : " << list.judul[i] << endl;
	  cout << "Tanggal : " << list.tanggal[i] << endl;
	  cout << "Bulan : " << list.bulan[i] << endl;
	  cout << "Tahun : " << list.tahun[i] << endl;
	  cout << "Pesan : " << list.pesan[i] << endl;
	  cout << endl;
	}
  } system("pause");
    system("cls");
}

int search() {
  int searching;

  system("cls");
  do {
    cout << "Searching by\n\n1. Tanggal\n2. Judul\n\n0. Back\n\nCari berdasarkan: ";
    cin >> searching;
    switch (searching) {
      case 1:
        srctgl();
        break;
      case 2:
        srcjdl();
        break;
    } system("cls");
  } while (searching != 0);

  return 0;
}

int main() {
  int pil, data[max], tanggal[max], bulan[max], tahun[max];
  string pesan[max], judul[max];

  system("cls");
  do {
    cout<<"||=================================||"<<endl;
    cout<<"||--------- SIMPLE  NOTES ---------||"<<endl;
    cout<<"||=================================||"<<endl;
    cout<<"||1. Tampil 2. Input   3. Hapus    ||"<<endl;
    cout<<"||4. Reset  5. Sorting 6. Searching||"<<endl;
    cout<<"||          0. Exit                ||"<<endl;
    cout<<"||=================================||"<<endl;
    cout<<"Masukkan pilihan: ";
    cin >> pil;
    switch (pil) {
      case 1:
        tampil();
        break;
      case 2:
        for (int i = 0; i < 1; i++) {
        	cin.ignore();
            cout << "\nMasukkan Judul Catatan = ";
            getline(cin, judul[i]);
            cout << "Masukkan Tanggal = ";
            cin >> tanggal[i];
            cout << "Masukkan Bulan = ";
            cin >> bulan[i];
            cout << "Masukkan Tahun = ";
            cin >> tahun[i];
            cin.ignore();
            cout << "Masukkan Pesan: ";
            getline(cin, pesan[i]);
            if (tahun[i] %4 != 0 && bulan[i] == 2 && (tanggal[i] == 29 || tanggal[i] == 30 || tanggal[i] == 31)) {
              cout << "\nFormat Input salah\n";
              cout << "Bulan Februari sampai tanggal 28, kecuali tahun kabisat\n";
              cout << endl;
            } else if (tanggal[i] > 31 || bulan[i] > 12 || tahun[i] > 2100 || tanggal[i] < 1 || bulan[i] < 1 || tahun[i] < 1900) {
              cout << "\nFormat Input salah\n";
              cout << "Tanggal 1-31\n";
              cout << "Bulan 1-12\n";
              cout << "Tahun 1900-2100";
              cout << endl;
            } else if (tanggal[i] == 31 && (bulan[i] == 4 || bulan[i] == 6 || bulan[i] == 9 || bulan[i] == 11)) {
              cout << "\nFormat Input salah\n";
              cout << "Bulan April, Juni, September, dan November sampai tanggal 30\n";
              cout << endl;
            } else {
              input(judul[i], tanggal[i], bulan[i], tahun[i], pesan[i]);
              cout << "\n";
            }
          }
        break;
      case 3:
        hapus();
        break;
      case 4:
        reset();
        break;
      case 5:
        sorting();
        break;
      case 6:
        search();
        break;
    }
    cout << endl;
    system("pause");
    system("cls");
  } while (pil != 0);

  return 0;
}