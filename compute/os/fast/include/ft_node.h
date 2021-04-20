//
// Created by Iris on 2021/1/7.
//

#ifndef FASTFILESYSTEM_FT_NODE_H
#define FASTFILESYSTEM_FT_NODE_H

#include <string>
#include <ctime>
#include <vector>

typedef long long _int_64;
struct ft_file_node_meta {
    std::string file_name;
    std::string absolute_path;


    _int_64 real_length;
    _int_64 disk_real_length;

    time_t create_time;
    time_t modify_time;

};

struct ft_dir_node_meta{
    std::string dir_name;
    std::string dir_absolute_path;

    //here we need think
    std::vector<ft_file_node_meta> file_list;
    std::vector<ft_dir_node_meta> dir_list;

    _int_64 files_total_length;

    time_t create_time;
    //add or delete file will update this
    time_t modify_time;

};

#endif //FASTFILESYSTEM_FT_NODE_H
