#pragma once
#include <vector>

class DataSeries
{
public:
    explicit DataSeries(const std::vector<double>& data);
    double mean() const;
    double max() const;

private:
    std::vector<double> data_;
};
