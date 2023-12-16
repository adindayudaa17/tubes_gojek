#include "gojek.h"
#include <iostream>

using namespace std;

char mainMenu() {
  cout << "=========================================" << endl;
  cout << "|           Welcome to Gojek            |" << endl;
  cout << "=========================================" << endl;
  cout << "| 1. Yulia Adinda Yuda                  |" << endl;
  cout << "| 2. Naira Fayaza                       |" << endl;
  cout << "=========================================" << endl;
  cout << "| [1] Driver                            |" << endl;
  cout << "| [2] Customer                          |" << endl;
  cout << "| [3] Order                             |" << endl;
  cout << "| [4] Show & Count                      |" << endl;
  cout << "| [5] Exit                              |" << endl;
  cout << "=========================================" << endl;
  char option;
  cout << "Input Option : ";
  cin >> option;
  return option;
};
