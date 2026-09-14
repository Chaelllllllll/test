#include <iostream>
#include <vector>
#include <string>nskansjskaka

int main() {
    std::cout << "========================================\n";
    std::cout << "  Welcome to siplasplas C++ Playground  \n";
    std::cout << "========================================\n\n";
    
    std::vector<std::string> features = {
        "High-performance execution",
        "GCC 14.1 / Clang compilers",
        "Real-time stdout & stderr",
        "Interactive STDIN support"
    };

    std::cout << "Engine Features:\n";
    for (size_t i = 0; i < features.size(); ++i) {
        std::cout << " [" << (i + 1) << "] " << features[i] << "\n";
    }

    std::cout << "\nCompiled and executed successfully!\n";
    return 0;
}
