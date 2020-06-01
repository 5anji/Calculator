#include <iostream>

#include "operators.h"
using namespace std;

void main_switcher() {
  string chk_st;
  int chk_int;
  
  LOOP2:
  initialize();

  do {
    LOOP1:
    cout << " 1 - Addition" << endl;
    cout << " 2 - Subtraction" << endl;
    cout << " 3 - Multiplication" << endl;
    cout << " 4 - Division" << endl;
    cout << " 5 - Modulus" << endl;
    cout << " 6 - Exponent" << endl;
    cout << " 7 - Square Root" << endl;
    cout << " 8 - Cube Root" << endl;
    cout << " 9 - Factorial" << endl;
    cout << "10 - Subtraction with percents" << endl;
    cout << "11 - The natural logarithm of a value" << endl;
    cout << "12 - The base-10 logarithm of a value" << endl;
    cout << "13 - Sine" << endl;
    cout << "14 - Cosine" << endl;
    cout << "15 - Tangent" << endl;
    cout << " C - Clear all results and start new session" << endl;
    cout << " 0 - Exit and show result" << endl;
    cout << "SELECT -->> ";
    cin >> chk_st;

    if (check_sintax_error_1(chk_st)) {
      chk_int = stoi(chk_st);
    } else if (toupper(chk_st[0]) == 'C') {
      Clear_All();
      system("clear");
      goto LOOP2;
    } else {
      cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
      goto LOOP1;
    }
    
    system("clear");
    history();

    switch (chk_int) {
    case 1:
      Addition();
      break;
    case 2:
      Subtraction();
      break;
    case 3:
      Multiplication();
      break;
    case 4:
      Division();
      break;
    case 5:
      Modulus();
      break;
    case 6:
      Exponent();
      break;
    case 7:
      Square_Root();
      break;
    case 8:
      Cube_Root();
      break;
    case 9:
      Factorial();
      break;
    case 10:
      Subtraction_Percents();
      break;
    case 11:
      Natural_Logarithm();
      break;
    case 12:
      Base10_Logarithm();
      break;
    case 13:
      Sine();
      break;
    case 14:
      Cosine();
      break;
    case 15:
      Tangent();
      break;
    case 2808:
      easter_egg();
      break;
    case 0:
      break;
    default:
      cout << "\033[1;31mERROR IN SELECTION. Select Again.\033[0m" << endl;
      break;
    }
  } while (chk_int != 0);
}