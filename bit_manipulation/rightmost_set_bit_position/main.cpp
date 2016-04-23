#include <iostream>
#include <cmath>

using namespace std;

int rightmost_set_bit_position(int number) {
    return log2(number & -number) + 1;
}

int main(int argc, char const *argv[]) {
    cout << rightmost_set_bit_position(67) << endl;
    cout << rightmost_set_bit_position(16) << endl;
    cout << rightmost_set_bit_position(1024) << endl;
    return 0;
}
