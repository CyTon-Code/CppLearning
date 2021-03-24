//
// Created by cyton_code on 23.03.2021.
//

#ifndef FILE_FUN_FILE_CLEAR_H
#define FILE_FUN_FILE_CLEAR_H


void clear(const string &path = "in.txt") {
    ofstream file_out;

    file_out.open(path);

    file_out.close();
}


#endif //FILE_FUN_FILE_CLEAR_H
