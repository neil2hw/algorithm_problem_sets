#include <iostream>

using namespace std;

int turn_off_rightmost_set_bit(int number) {
    return number & number - 1;
}

int main(int argc, char const *argv[]) {
    cout << turn_off_rightmost_set_bit(8) << endl;
    cout << turn_off_rightmost_set_bit(25) << endl;
    cout << turn_off_rightmost_set_bit(26) << endl;
    return 0;
}
