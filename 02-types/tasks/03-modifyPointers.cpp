#include <iostream>

void foo(int * const ptr) {
    * ptr = 10;
}

void bar(int * addr) {
    * addr = 20;
    
}

int main() {
    int number = 5;
    int* pointer = &number;
    std::cout << number << '\n';
    foo(&number);
    std::cout << number << '\n';
    bar(pointer);
    std::cout << number << '\n';

    return 0;
}
