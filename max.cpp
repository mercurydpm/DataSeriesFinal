#include "DataSeries.h"
#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::vector<double> x = {1.0, 2.0, 3.0};
    DataSeries s(x);

    const double expected = 3.0;
    const double max = s.max();
    const double tol = 1e-12;

    // test if mean is computed correctly
    if (std::fabs(max - expected) > tol) {
        std::cerr << "FAIL: max() expected " << expected
                  << " but got " << max << "\n";
        return 1;
    }

    std::cout << "max: " << max << std::endl;
    return 0;
}
