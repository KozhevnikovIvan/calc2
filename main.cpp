#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int add(int x, int y) { return (x + y); }

int sub(int x, int y) { return (x - y); }

int mul(int x, int y) { return (x * y); }

double div1(double x, double y) { return (x / y); }

int and1(int x, int y) { return (x && y); }

int pow1(int x, int y) { return (pow(x, y)); }

int or1(int x, int y) { return (x || y); }

int rol(int x, int y) { return (x << y); }

int ror(int x, int y) { return (x >> y); }

int not1(int x) { return (!x); }

double mod(int x, int y, int m) { return ((x - y) % m); }

int main() {
  int x, y;
  char d;
  while (true) {
    cout << "\n\nВыберите операцию:\n +, -, *, /, &, |, ^ , <, >, !, %\n";
    cin >> d;
    bool i =
        (d == '+' || d == '-' || d == '*' || d == '/' || d == '&' || d == '|' ||
         d == '^' || d == '<' || d == '>' || d == '!' || d == '%');
    if (i == 1) {
      cout << ("Первый элемент:\t");
      cin >> (x);
      if (d != '!') {
        cout << ("Второй элемент:\t");
        cin >> (y);
      }
      bool j = (x >= -2147483648 && x <= 2147483647 && y >= -2147483648 &&
                y <= 2147483647);
      if (j == 1) {
        switch (d) {
          case '+': {
            cout << x << "+" << y << "=" << add(x, y);
            break;
          }
          case '-': {
            cout << x << "-" << y << "=" << sub(x, y);
            break;
          }
          case '*': {
            cout << x << "*" << y << "=" << mul(x, y);
            break;
          }
          case '/': {
            if (y == 0)
              cerr << "err: you can't divide by zero";
            else
              cout << x << "/" << y << "=" << div1(x, y);
            break;
          }
          case '&': {
            cout << x << "&" << y << "=" << and1(x, y);
            break;
          }
          case '^': {
            cout << x << "^" << y << "=" << pow1(x, y);
            break;
          }
          case '|': {
            cout << x << "|" << y << "=" << or1(x, y);
            break;
          }
          case '<': {
            if (y >= 0)
              cout << x << "<" << y << "=" << rol(x, y);
            else
              cerr << "err";
            break;
          }
          case '>': {
            if (y >= 0)
              cout << x << ">" << y << "=" << ror(x, y);
            else
              cerr << "err";
            break;
          }
          case '!': {
            cout << x << "!\t=" << not1(x);
            break;
          }
          case '%': {
            int m;
            cout << "Введите модуль";
            cin >> m;
            cout << x << "-%" << y << "=" << mod(x, y, m);
            break;
          }
          default:
            cerr << "err";
        }
      } else
        cerr << "err";
    } else
      cerr << "err";
  }

  return 0;
}
