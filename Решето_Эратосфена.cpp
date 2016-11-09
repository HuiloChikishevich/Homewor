#include <iostream>
#include <conio.h>

using namespace std;

void Simple_Number(int a) {
    bool flag = 1;
    for (int i = 1; i < a + 1; i++){
        for (int j = 2; j < 10; j ++){
            if (i%j == 0 & i != j){
                flag = 0;
            }
        }
    if (flag == 1){
        cout << i << endl;
    }
    flag = 1;
 }
}

int main() {
	setlocale(0, "Russian");
	int a;
	cout << "¬ведите предел" << endl;
	cin >> a;
	Simple_Number(a);
	_getch();
	return 0;
}
