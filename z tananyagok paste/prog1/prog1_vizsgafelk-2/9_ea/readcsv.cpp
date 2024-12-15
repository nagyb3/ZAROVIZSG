#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::ifstream input("data.csv");
    std::vector<std::vector<double>> data;

    std::string line;
    while (std::getline(input, line)) {
        std::vector<double> row;
        std::stringstream ss(line);
        std::string field;

        while (std::getline(ss, field, ',')) {
            double value = std::stod(field);
            row.push_back(value);
        }

        data.push_back(row);
    }

    // data vector now contains the parsed CSV data

    return 0;
}
