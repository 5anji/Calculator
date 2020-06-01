#include <iostream>
#include <cmath>

#include "tools.h"
#include "common.h"
using namespace std;

float x, hist[256];
int counter = 0;

// Case 1:
void Addition() {
  string str;
  float y;

  LOOP:
  cout << x << " + ";
  cin >> str;

  if (check_sintax_error_2(str)) y = stof(str); else {
    cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
    goto LOOP;
  }

  x += y;
  hist[counter] = x;
  cout << "        == " << x << endl;
  counter++;
}

// Case 2:
void Subtraction() {
  string str;
  float y;

  LOOP:
  cout << x << " - ";
  cin >> str;

  if (check_sintax_error_2(str)) y = stof(str); else {
    cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
    goto LOOP;
  }

  x -= y;
  hist[counter] = x;
  cout << "        == " << x << endl;
  counter++;
}

// Case 3:
void Multiplication() {
  string str;
  float y;

  LOOP:
  cout << x << " * ";
  cin >> str;

  if (check_sintax_error_2(str)) y = stof(str); else {
    cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
    goto LOOP;
  }

  x *= y;
  hist[counter] = x;
  cout << "        == " << x << endl;
  counter++;
}

// Case 4:
void Division() {
  string str;
  float y;

  LOOP:
  cout << x << " / ";
  cin >> str;

  if (check_sintax_error_2(str)) y = stof(str); else {
    cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
    goto LOOP;
  }

  x /= y;
  hist[counter] = x;
  cout << "        == " << x << endl;
  counter++;
}

// Case 5:
void Modulus() {
  string str;
  float y;

  LOOP:
  cout << x << " % ";
  cin >> str;

  if (check_sintax_error_2(str)) y = stof(str); else {
    cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
    goto LOOP;
  }

  x = fmod(x, y);
  hist[counter] = x;
  cout << "        == " << x << endl;
  counter++;
}

// Case 6:
void Exponent() {
  string str;
  float y;

  LOOP:
  cout << x << " ^ ";
  cin >> str;

  if (check_sintax_error_2(str)) y = stof(str); else {
    cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
    goto LOOP;
  }

  x = pow(x, y);
  hist[counter] = x;
  cout << "        == " << x << endl;
  counter++;
}

// Case 7:
void Square_Root() {
  float y = x;

  x = sqrt(x);
  hist[counter] = x;
  cout << "sqrt(" << y << ") == " << x << endl;
  counter++;
}

// Case 8:
void Cube_Root() {
  float y = x;

  x = cbrt(x);
  hist[counter] = x;
  cout << "cbrt(" << y << ") == " << x << endl;
  counter++;
}

// Case 9:
void Factorial() {
  float temp = 1, y = x;
  
  for (int i = 1; i <= x; i++) {
    temp *= i;
  }

  x = temp;
  hist[counter] = x;
  cout << "!" << y << " == " << x << endl;
  counter++;
}

// Case 10:
void Subtraction_Percents() {
  string str;
  float y;

  LOOP:
  cout << x << " -(%) ";
  cin >> str;

  if (check_sintax_error_2(str)) y = stof(str); else {
    cout << "\033[0;31mFATAL ERROR. Select Again.(needs int, detected char type)\033[0m" << endl;
    goto LOOP;
  }

  x *= (100 - y)/100;
  hist[counter] = x;
  cout << "        == " << x << endl;
  counter++;
}

// Case 11:
void Natural_Logarithm() {
  float y = x;

  x = log(x);
  hist[counter] = x;
  cout << "        ln(" << y << ") == " << x << endl;
  counter++;
}

// Case 12:
void Base10_Logarithm() {
  float y = x;

  x = log10(x);
  hist[counter] = x;
  cout << "        log10(" << y << ") == " << x << endl;
  counter++;
}

// Case 13:
void Sine() {
  float y = x;

  x = sin(x);
  hist[counter] = x;
  cout << "        sin(" << y << ") == " << x << endl;
  counter++;
}

// Case 14:
void Cosine() {
  float y = x;

  x = cos(x);
  hist[counter] = x;
  cout << "        cos(" << y << ") == " << x << endl;
  counter++;
}

// Case 15:
void Tangent() {
  float y = x;

  x = tan(x);
  hist[counter] = x;
  cout << "        tan(" << y << ") == " << x << endl;
  counter++;
}

// Case 16:
void Clear_All() {
  x = 0;
  counter = 0;
}