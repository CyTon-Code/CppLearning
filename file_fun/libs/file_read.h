//
// Created by cyton_code on 24.03.2021.
//

#ifndef FILE_FUN_FILE_READ_H
#define FILE_FUN_FILE_READ_H

#include "check_file_open.h"

// TODO
template<typename AUTO>
AUTO read(const string &path/* = "in.txt"*/, AUTO result_type) {//, string end = "\n") {
    ifstream file_in(path);

    // читаю 1 слово и возвращаю, но иогу принять изменяемое чилос и вернуть строку побольше или этомассив.
//    file_in.open(path, ofstream::app);//??

    check_file_open(file_in, path);

    AUTO value;
    file_in >> value;

    file_in.close();
    return value;
}

#endif //FILE_FUN_FILE_READ_H
