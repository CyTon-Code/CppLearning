//
// Created by cyton_code on 24.03.2021.
//

#ifndef FILE_FUN_FILE_WRITE_H
#define FILE_FUN_FILE_WRITE_H

#include "check_file_open.h"

void write(const string &path = "in.txt", const string &value = "") {
    ofstream file_out;

    file_out.open(path);

    check_file_open(file_out, path);

    file_out << value << endl;

    file_out.close();
}

#endif //FILE_FUN_FILE_WRITE_H
