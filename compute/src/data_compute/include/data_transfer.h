//
// Created by iris on 2021/4/22.
//

#ifndef COMPUTE_MODULE_DATA_TRANSFER_H
#define COMPUTE_MODULE_DATA_TRANSFER_H

#include "data_struct.h"
#include <string>
#include <list>

using namespace std;

typedef struct {
    int_64 record_id;
    string stock_id;
    time_t day_time;
    int_64 day_point;
} day_record;

/**
 * 从收集的记录中读取出标准结构的数据
 * @param filepath
 * @return
 */
list<day_record> getDayRecordFromRecordFile(string filepath);
/**
 * 将字符串解析为标准格式数据
 * @param record_content
 * @return
 */
day_record parseStringToDayRecord(string record_content);

/**
 * 根据指定的pattern解析数据内容
 * @param filepath
 * @param pattern
 * @return
 */
list<string> parseRecordFileByPattern(string filepath,string pattern);

#endif //COMPUTE_MODULE_DATA_TRANSFER_H
