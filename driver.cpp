#include "gojek.h"
#include <iostream>

using namespace std;

// SLL - Single Linked List

adrDriver createElmDriver(infoDriver D){
    adrDriver P = new elmDriver;
    info(P) = D;
    next(P) = NULL;
    return P;
}

void createListDriver(listDriver &LD){
    first(LD) = NULL;
};

void insertLastDriver(listDriver &LD, adrDriver D){
    if (first(LD) == NULL) {
        first(LD) = D;
    } else {
        adrDriver P = first(LD);
        while(next(P) != NULL){
            P = next(P);
        }
        next(P) = D;
    }
};

adrDriver searchDriver(listDriver LD, int id_driver){
    bool found = false;
    adrDriver P = first(LD);
    while(P != NULL && !found){
        if(info(P).id_driver == id_driver){
            found = true;
        }
        P = next(P);
    }
    if(found){
        return P;
    } else {
        return NULL;
    }
};

void editDriver(listDriver &LD, int id_driver){
  if (first(LD) == NULL) {
    cout << "List Kosong" << endl;
    return;
  };

  adrDriver P = searchDriver(LD, id_driver);

  if (P != NULL){
    cout << "ID Driver : " << info(P).id_driver << endl;
    cout << "No pol : " << info(P).nopol << endl;
    cout << "Nama : " << info(P).nama << endl;
    cout << "Rating : " << info(P).rating << endl;
    cout << "------------------------------------" << endl;
    cout << "Masukkan Data Baru";
    cout << "No pol : ";
    cin >> info(P).nopol;
    cout << "Nama : ";
    cin >> info(P).nama;
    cout << "rating : ";
    cin >> info(P).rating;
    cout << "Data berhasil diubah." << endl;
    cout << "--------------------------" << endl;
  } else {
    cout << "Data tidak ditemukan" << endl;
  }
};

void deleteDriver(listDriver &LD, adrDriver &D, int id_driver){
  adrDriver P = first(LD);
  if (first(LD) == NULL){
    cout << "List Kosong" << endl;
    return;
  }
};
