#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec {1, 2, 3, 4, 5};
    size_t size = vec.size();
    std::cout << "The size of vec is " << size << std::endl;
    return 0;
}