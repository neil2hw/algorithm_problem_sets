#include <iostream>

using namespace std;

bool is_power_of_two(int number) {
    return number > 0 && !(number & (number - 1));
}

int main(int argc, char const *argv[]) {
    cout << boolalpha << is_power_of_two(3) << endl;
    cout << boolalpha << is_power_of_two(8) << endl;
    cout << boolalpha << is_power_of_two(256) << endl;
    cout << boolalpha << is_power_of_two(1023) << endl;
    return 0;
}
