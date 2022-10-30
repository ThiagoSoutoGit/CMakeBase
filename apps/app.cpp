//
// Created by thiago on 30/10/22.
//

#include <modern/lib.hpp>
#include <date/date.h>

#include <fmt/format.h>

#include <iostream>
#include <vector>
#include <tuple>

int main() {
    std::vector<double> input = {1.2, 2.3, 3.4, 4.5};

    auto [mean, moment] = accumulate_vector(input);

    fmt::print("Mean: {}, Moment: {}\n",  mean, moment);

    Date today = Date(10,20,1990);

    std::cout << today.getDay();



    return 0;
}