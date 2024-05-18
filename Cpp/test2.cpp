#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("example.txt", std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    // Write some data to the file
    file << "Hello, world!";

    // Move the put pointer to the beginning of the file
    file.seekp(0);

    // Write some additional data to the beginning of the file
    file << "Additional text ";

    file.close();

    return 0;
}
