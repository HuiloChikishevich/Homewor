#include <iostream>
#include <conio.h>
#include <vector>
#include <math.h>

using namespace std;

void Eulers_formula(int a) {
    int number_of_numbers = 1;
    bool flag = 1;
    for (int i = 1; i < a; i++){
        for (int j = 2; j < 10; j ++){
            if ((i%j == 0 & i != j) ^ a%i == 0){
                flag = 0;
                break;
            }
        }
    if (flag == 1){
        number_of_numbers++;
    }
    flag = 1;
 }
    cout << number_of_numbers << endl;

}

int main() {
	setlocale(0, "Russian");
	int a;
	cout << "¬ведите предел" << endl;
	cin >> a;
	Eulers_formula(a);
	_getch();
	return 0;
}
