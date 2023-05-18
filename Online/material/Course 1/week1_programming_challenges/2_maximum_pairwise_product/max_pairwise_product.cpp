#include <iostream>
#include <vector>
#include <algorithm>

int MaxPairwiseProduct(const std::vector<long long int>& numbers) {
    long long int max_product = 0;
    long long int n = numbers.size();

    for (long long int first = 0; first < n; ++first) {
        for (long long int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                numbers[first] * numbers[second]);
        }
    }

    return max_product;
}

int main() {
    long long int n;
    std::cin >> n;
    std::vector<long long int> numbers(n);
    for (long long int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) <<"\n";
    return 0;
}
