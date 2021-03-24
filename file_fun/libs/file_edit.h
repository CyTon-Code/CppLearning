//
// Created by cyton_code on 23.03.2021.
//

#ifndef FILE_FUN_FILE_EDIT_H
#define FILE_FUN_FILE_EDIT_H


#include "check_file_open.h"

void edit(const string &path = "in.txt", const string &value = "") {//, string end = "\n") {
    ofstream file_out;

    // дописую в конец:
    file_out.open(path, ofstream::app);

    check_file_open(file_out, path);

    file_out << value << endl;

    file_out.close();
}


#endif //FILE_FUN_FILE_EDIT_H
