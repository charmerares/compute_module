//
// Created by iris on 2021/4/20.
//

#ifndef FASTFILESYSTEM_COMPUTE_UTIL_H
#define FASTFILESYSTEM_COMPUTE_UTIL_H

#include <list>

using namespace std;

/**
 * 计算方差
 * @param list
 * @return
 */
double compute_variance(list<double> list);

/**
 * 计算标准差
 * @param list
 * @return
 */
double compute_standard_deviation(list<double> list);

/**
 * 计算极差
 * @param list
 * @return
 */
double compute_extreme_difference(list<double> list);

/**
 * 求和
 * @param list
 * @return
 */
double compute_sum(list<double> list);

/**
 * 求平均值
 * @param list
 * @return
 */
double compute_average(list<double> list);
#endif //FASTFILESYSTEM_COMPUTE_UTIL_H
