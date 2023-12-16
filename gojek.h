#ifndef GOJEK_H_INCLUDED
#define GOJEK_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) (L).first
#define info(P) (P)->info
#define next(P) (P)->next
#define orderDriver(P) (P)->orderDriver
#define orderCustomer(P) (P)->orderCustomer
#define NIL NULL

// deklarasi linked list driver
struct driver {
  string nopol, nama;
  int rating, id_driver;
};

typedef driver infoDriver;
typedef struct elmDriver *adrDriver;

struct elmDriver {
  infoDriver info;
  adrDriver next;
};

struct listDriver {
  adrDriver first;
};

// deklarasi linked list customer
struct customer {
  string nama, alamat;
  int phone_no;
};

typedef struct elmCustomer *adrCustomer;
typedef customer infoCust;

struct elmCustomer {
  infoCust info;
  adrCustomer next;
};

struct listCustomer {
  adrCustomer first;
};

// deklarasi linked list order [relasi]
typedef struct elmOrder *adrOrder;

struct elmOrder {
  adrDriver orderDriver;
  adrCustomer orderCustomer;
  adrOrder next;
};

struct listOrder {
  adrOrder first;
};


// deklarasi fungsi menu
char mainMenu();

// deklarasi fungsi driver
adrDriver createElmDriver(infoDriver D);
void createListDriver(listDriver &LD);
void insertLastDriver(listDriver &LD, adrDriver D);
void editDriver(listDriver &LD, int i);
void deleteDriver(listDriver &LD, adrDriver &D, int id_driver);
// delete driver
void deleteFirstDriver(listDriver &LD, adrDriver &D);
void deleteAfterDriver(listDriver &LD, adrDriver &D, adrDriver prec);
void deleteLastDriver(listDriver &LD, adrDriver &D);
// cari driver
adrDriver searchDriver(listDriver LD, int id_driver);
// show driver
void showDriver(listDriver LD);
void showDriverByCustomer(listCustomer LC, listOrder LO, string namaCustomer);
void showAllDriverWithCustomer(listDriver LD, listOrder LO);
adrDriver searchDriver(listDriver LD, string nopol);



// deklarasi fungsi customer
adrCustomer createElmCust(infoCust X);
void createListCust(listCustomer &LC);
void insertLastCustomer(listCustomer &LC, adrCustomer C);
void editC(listCustomer &LC, string no_pol);

// delete customer
void deleteC(listCustomer &LC, adrCustomer &C, int NoTelp);
void deleteFirstC(listCustomer &LC, adrCustomer &C);
void deleteAfterC(listCustomer &LC, adrCustomer &C, adrCustomer prec);
void deleteLastC(listCustomer &LC, adrCustomer &C);
//  cari customer
adrCustomer searchCustomer(listCustomer LC, string nama);

// show customer
void showCustomer(listCustomer LC);
void showElmCustomer(listCustomer LC, adrCustomer C);
void showCustomerByDriver(listDriver LD, listOrder LO, string namaDriver);
void showAllCustomerWithDriver(listCustomer LC, listOrder LO);
void countDriverByCustomer(listDriver LD, listOrder LO, listCustomer LC, string namaCustomer);
void countCustomerByDriver(listDriver LD, listOrder LO, listCustomer LC, string namaDriver);
void countDriverNoOrder(listDriver LD, listOrder LO, listCustomer LC);
void countCustomerNoOrder(listDriver LD, listOrder LO, listCustomer LC);


// deklarasi fungsi order
adrOrder createElmOrder(adrDriver D, adrCustomer C);
void createListOrder(listOrder &LO);
void insertOrder(listDriver LD, listCustomer LC, listOrder &LO, string namaDriver, string namaCustomer);
void editOrder(listOrder &LO, listDriver LD, listCustomer LC, string namaDriver, string namaCustomer);
void deleteOrder(listDriver LD, listCustomer LC, listOrder &LO, adrOrder &O, string namaDriver, string namaCustomer);

// delete order
void deleteFirstOrder(listOrder &LO, adrOrder &O);
void deleteAfterOrder(listOrder &LO, adrOrder &O, adrOrder prec);
void deleteLastOrder(listOrder &LO, adrOrder &O);
void showOrder(listOrder LO);

#endif // GOJEK_H_INCLUDED
