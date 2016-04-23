#include <iostream>

using namespace std;

int multiply_by_two(unsigned int number) {
    return number << 1;
}

int multiply_by_five(unsigned int number) {
    return (number << 2) + number;
}

int multiply_by_seven(unsigned int number) {
    return (number << 2) + (number << 1) + number;
}

int main(int argc, char const *argv[]) {
    cout << multiply_by_two(4) << endl;
    cout << multiply_by_five(4) << endl;
    cout << multiply_by_seven(4) << endl;
    return 0;
}
