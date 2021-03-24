//
// Created by cyton_code on 23.03.2021.
//

#ifndef FILE_FUN_CHECK_FILE_OPEN_H
#define FILE_FUN_CHECK_FILE_OPEN_H


template<typename file_stream>
void check_file_open(const file_stream &file_out, const string &path) {
    // file open?
    if (!file_out.is_open()) {
        cout << "file: " << path << endl;
        throw TheFileDidNotOpen();
    }
}


#endif //FILE_FUN_CHECK_FILE_OPEN_H
