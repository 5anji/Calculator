#include <iostream>
using namespace std;

string Black(string str) {
  return "\033[30m" + str + "\033[0m";
}

string Red(string str) {
  return "\033[31m" + str + "\033[0m";
}

string Green(string str) {
  return "\033[32m" + str + "\033[0m";
}

string Orange(string str) {
  return "\033[33m" + str + "\033[0m";
}

string Blue(string str) {
  return "\033[34m" + str + "\033[0m";
}

string Purple(string str) {
  return "\033[35m" + str + "\033[0m";
}

string Cyan(string str) {
  return "\033[36m" + str + "\033[0m";
}

string Gray(string str) {
  return "\033[37m" + str + "\033[0m";
}

string Bold(string str) {
  return "\033[1m" + str + "\033[0m";
}

string Underline(string str) {
  return "\033[4m" + str + "\033[0m";
}