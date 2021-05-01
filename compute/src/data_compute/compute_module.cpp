//
// Created by Iris on 2021/5/1.
//

#include "include/compute_util.h"
#include "include/compute_constant.h"
#include "math.h"

/**
 * 计算方差
 * @param list
 * @return
 */
double compute_variance(list<double> list) {
    if (list.empty()) {
        return DOUBLE_NUMBER_ERROR_VALUE;
    }

    double average_num = compute_average(list);
    double temp_variance_sum = DOUBLE_NUMBER_INIT_VALUE;
    for (auto temp_num:list) {
        temp_variance_sum += pow(temp_num - average_num, SQUARE_INDEX_NUMBER);
    }

    return temp_variance_sum / list.size();
}

double compute_average(list<double> list) {
    if (list.empty())
        return DOUBLE_NUMBER_ERROR_VALUE;

    double temp_sum = DOUBLE_NUMBER_INIT_VALUE;
    for (auto &temp_num:list) {
        temp_sum += temp_num;
    }
    return temp_sum / (list.size() * DOUBLE_NUMBER_FACTOR_VALUE);
}

double compute_standard_deviation(list<double> list) {
    if (list.empty())
        return DOUBLE_NUMBER_ERROR_VALUE;

    return sqrt(compute_variance(list));
}

double compute_sum(list<double> list) {
    if (list.empty())
        return DOUBLE_NUMBER_ERROR_VALUE;
    double sum_result = DOUBLE_NUMBER_INIT_VALUE;
    for (auto i:list) {
        sum_result += i;
    }

    return sum_result;
}

double compute_extreme_difference(list<double> list) {
    if (list.empty())
        return DOUBLE_NUMBER_ERROR_VALUE;

    auto min_value = DOUBLE_MAX_VALUE;
    auto max_value = DOUBLE_MIN_VALUE;
    for (auto i : list) {
        if (i > max_value) {
            max_value = i;
        }
        if (i < min_value) {
            min_value = i;
        }
    }

    return max_value - min_value;
}