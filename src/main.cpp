#include <iostream>
#include <zlib.h>

int main() {
    std::cout << "Zlib version: " << zlibVersion() << std::endl;
    return 0;
}
