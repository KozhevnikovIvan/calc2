#include <iostream>

using namespace std;

int a, b;
    
void pluss(int a, int b)
{
	cout << "Рузультат:" << a + b << endl;
}
void minuss(int a, int b)
{
	cout << "Рузультат:" << a - b << endl;
}
void umn(int a, int b)
{
	cout << "Рузультат:" << a * b << endl;
}
void deli(int a, int b)
{
	if (b != 0)
		cout << "Рузультат:" << a / b << endl;
	else
		cout << "На 0 делить нельзя!";
}
void fun1(int a, int b)
{
	cout << "Рузультат:" << a % b << endl;
}
void fun2(int a, int b)
{
	cout << "Рузультат:" << pow(a,b)<<endl;
}
void fun3(int a)
{
	cout << "Рузультат:" << !a << endl;
}
void fun4(int a, int b)
{
	cout << "Рузультат:" << a & b << endl;
}
void fun5(int a, int b)
{
	cout << "Рузультат:" << a | b << endl;
}
void fun6(int a)
{ 
	cout << "Рузультат:" << a < 1 << endl;
}
void fun7(int a)
{
	cout << "Рузультат:" << a > 1 << endl;
}
int a, b;
int main(int argc, char *argv[]) {
	char choice[1][1];
	choice[0][0] = 'b';
	while ((char)choice[0][0] == 'b') {
		char x[1][1];
		do {
			cout << "Выбирите одну из операций[+.-.*,/,%,^,!,&,|,<,>]:"
				<< endl;
			cin >> *x;
		} while (x[0][0] != '+' && x[0][0] != '-' && x[0][0] != '*' &&
			x[0][0] != '/' && x[0][0] != '%' && x[0][0] != '^' &&
			x[0][0] != '!' && x[0][0] != '&' && x[0][0] != '|' &&
			x[0][0] != '<' && x[0][0] != '>');
		if (x[0][0] == '+' || x[0][0] == '-' || x[0][0] == '*' || x[0][0] == '/' ||
			x[0][0] == '%' || x[0][0] == '^' || x[0][0] == '>' || x[0][0] == '<' ||
			x[0][0] == '|' || x[0][0] == '&') {
			cout << "Введите первое число:" << endl;
			cin >> a;
			cout << "Введите второе число:" << endl;
			cin >> b;
			if (cin.good()) {
				switch ((char)x[0][0]) {
				case '+':
					pluss(a,b);
					break;
				case '-':
					minuss(a,b);
					break;
				case '*':
					umn(a,b);
					break;
				case '/':
				deli(a,y);
					break;
				case '%':
				fun1(a,b);
					break;
				case '^':
			        fun2(a,b);
					break;
				case'!':
			fun3(a,b);
			break;

		case'&':
			fun4(a,b);
			break;

		case'|':
			fun5(a,b);
			break;

		case'<':
			fun6(a,b);
			break;

		case'>':
			fun7(a,b);
			break;
		default:
			cout << "Ошибка"<< endl;

		}

		}
		do {
			cout << "Если вы хотите продолжить, введите y, если закончить - n"
				<< endl;
			cin >> *choice;
		} while ((char)choice[0][0] != 'y' && (char)choice[0][0] != 'n');
	}
	cout << "До свидания!" << endl;
	return 0;
}
