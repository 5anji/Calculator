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
    cout << Bold(Green(" 1 - Addition")) << endl;
    cout << Bold(Green(" 2 - Subtraction")) << endl;
    cout << Bold(Green(" 3 - Multiplication")) << endl;
    cout << Bold(Green(" 4 - Division")) << endl;
    cout << Bold(Green(" 5 - Modulus")) << endl;
    cout << Bold(Green(" 6 - Exponent")) << endl;
    cout << Bold(Green(" 7 - Square Root")) << endl;
    cout << Bold(Green(" 8 - Cube Root")) << endl;
    cout << Bold(Green(" 9 - Factorial")) << endl;
    cout << Bold(Green("10 - Subtraction with percents")) << endl;
    cout << Bold(Green("11 - The natural logarithm of a value")) << endl;
    cout << Bold(Green("12 - The base-10 logarithm of a value")) << endl;
    cout << Bold(Green("13 - Sine")) << endl;
    cout << Bold(Green("14 - Cosine")) << endl;
    cout << Bold(Green("15 - Tangent")) << endl;
    cout << Bold(Green(" C - Clear all results and start new session")) << endl;
    cout << Bold(Green(" 0 - Exit and show result")) << endl;
    cout << Bold(Green("SELECT -->> "));
    cin >> chk_st;

    if (check_sintax_error_1(chk_st)) {
      chk_int = stoi(chk_st);
    } else if (toupper(chk_st[0]) == 'C') {
      Clear_All();
      system("clear");
      goto LOOP2;
    } else {
      cout << Underline(Bold(Red("FATAL ERROR. Select Again.(needs int, detected char type)"))) << endl;
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
      cout << Underline(Bold(Red("ERROR IN SELECTION. Select Again."))) << endl;
      break;
    }
  } while (chk_int != 0);
}