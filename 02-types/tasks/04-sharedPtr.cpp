#include <iostream>
#include <memory>

void foo(std::shared_ptr<int> ptr) {
    * ptr = 20;
    std::cout << *ptr << " | owners: " << ptr.use_count() << "\n";
}

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    std::cout << *number << " | owners: " << number.use_count() << "\n";
    foo(number);
    std::cout << *number << " | owners: " << number.use_count() << "\n";
    return 0;
}
