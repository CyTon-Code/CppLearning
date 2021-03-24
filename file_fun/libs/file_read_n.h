//
// Created by cytoncode on 24.03.2021.
//

#ifndef FILE_FUN_FILE_READ_N_H
#define FILE_FUN_FILE_READ_N_H

//string()

#include "check_file_open.h"

// TODO
template<typename AUTO>
AUTO *read_n(const string &path/* = "in.txt"*/, AUTO result_type, const int &length/* = 1*/) {//, string end = "\n") {
    ofstream file_in;

    // читаю 1 слово и возвращаю, но иогу принять изменяемое чилос и вернуть строку побольше или этомассив.
    file_in.open(path, ofstream::app);//??

    check_file_open(file_in, path);

//    file_out << value << endl;
    AUTO List[length];
    for (int i = 0; !file_in.eof(); i++) {
        file_in >> List[i];
    }

    file_in.close();
    return List;
}

#endif //FILE_FUN_FILE_READ_N_H
