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

bool check_sintax_error_2(string str) {
  for (int i = 0; i < str.length(); i++) {
    if (!(isdigit(str[i]) || str[i] == '.')) {
      return false;
    }
  }

  return true;
}

void easter_egg() {
  cout << "You found Easter Egg" << endl;
  system("xdg-open https://img.wallpapersafari.com/desktop/1920/1080/4/63/nwr83A.jpg");
}

void initialize() {
  string str;
  LOOP:
  cout << " -->> ";
  cin >> str;

  if (check_sintax_error_2(str)) x = stof(str); else {
    cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
    goto LOOP;
  }
  
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