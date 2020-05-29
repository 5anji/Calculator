#include <iostream>
using namespace std;

bool check_sintax_error_1(string str) {
  if (isdigit(str[0])) {
    return true;
  }
  
  return false;
}