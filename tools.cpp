#include <iostream>

#include "common.h"
using namespace std;

bool check_sintax_error_1(string str) {
  for (int i = 0; i < str.length(); i++) {
    if (!(isdigit(str[i]))) {
      return false;
    }
  }

  return true;
}

void initialize() {
  cout << " -->> ";
  cin >> x;
  hist[counter] = x;
  counter++;
}

void history() {
  cout << "History:" << endl << endl;

  for (int i = 0; i < counter; i++) {
    if (i == counter - 1) cout << "Final result: ";
    cout << "\t" << hist[i] << endl;
    
  }
  cout << "-------------------------------------------------------" << endl;
}