#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

void Min_Overall_Multiple(int a, int b) {
    for (int i = a; i <= a*b; i = i+a){
        if (i%a == 0 & i%b == 0){
            cout << i << endl;
            break;
        }

    }

}

int main() {
	setlocale(0, "Russian");
	int a, b = 0;
	cout << "¬ведите первое число" << endl;
	cin >> a;
	cout << "¬ведите второе число" << endl;
	cin >> b;
	Min_Overall_Multiple(a, b);

	_getch();
	return 0;
}
