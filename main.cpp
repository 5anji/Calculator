#include <iostream>
#include "operators.h"
using namespace std;

int main() {
  string chk_st;
  int chk_int;

  do {
    LOOP:
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
    cout << " 0 - Exit" << endl;
    cout << "SELECT -->> ";
    cin >> chk_st;

    if (check_sintax_error_1(chk_st))  chk_int = chk_st[0] - 48; else {
      cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
      goto LOOP;
    } 
    
    switch (chk_int) {
    case 1:
      /* code */
      break;
    case 2:
      /* code */
      break;
    case 3:
      /* code */
      break;
    case 4:
      /* code */
      break;
    case 5:
      /* code */
      break;
    case 6:
      /* code */
      break;
    case 7:
      /* code */
      break;
    case 8:
      /* code */
      break;
    case 9:
      /* code */
      break;
    case 10:
      /* code */
      break;
    case 11:
      /* code */
      break;
    case 12:
      /* code */
      break;
    case 13:
      /* code */
      break;
    case 14:
      /* code */
      break;
    case 15:
      /* code */
      break;
    case 0:
      break;
    
    default:
      cout << "\033[1;31mERROR IN SELECTION. Select Again.\033[0m" << endl;
      break;
    }
  } while (chk_int != 0);
  
  return 0;
}