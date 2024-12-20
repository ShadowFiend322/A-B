#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int A = 0b101101;  
    int B = 0b110011;  

    int and_result = A & B;

    int sum_result = A + B;

    cout << "A AND B: " << bitset<6>(and_result) << endl;
    cout << "Сумма A и B: " << bitset<7>(sum_result) << endl;  

    return 0;
}
