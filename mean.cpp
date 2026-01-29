#include "DataSeries.h"
#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::vector<double> x = {1.0, 2.0, 3.0};
    DataSeries s(x);

    const double expected = 2.0;
    const double mean = s.mean();
    const double tol = 1e-12;

    // test if mean is computed correctly
    if (std::fabs(mean - expected) > tol) {
        std::cerr << "FAIL: mean() expected " << expected
                  << " but got " << mean << "\n";
        return 1;
    }

    std::cout << "mean: " << mean << std::endl;
    return 0;
}
