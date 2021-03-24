//
// Created by cyton_code on 24.03.2021.
//

#ifndef FILE_FUN_FILE_H
#define FILE_FUN_FILE_H

class File {
private:
//    ofstream file_out;
    ifstream file_in;
    bool is_file_in = False;//, is_file_out;
    string path;// ="";

    /*
     File(string link = "") {
 //        this->file_out;// = nullptr;
         this->file_in;
         this->path = "";
         this->is_file_in = False;
 //        this->is_file_out = False;
     }
 */

    template<typename file_stream, typename AUTO>
    // TODO майжинь просто покласти ifstream
    AUTO _read(const file_stream &file/* = "in.txt"*/, const string &link, AUTO result_type) {//, string end = "\n") {
//        ifstream file_in(link);

        // читаю 1 слово и возвращаю, но иогу принять изменяемое чилос и вернуть строку побольше или этомассив.
//    file_in.open(link, ofstream::app);//??

        check_file_open(file_in, link);

        AUTO value;
        file_in >> value;

        file_in.close();
        return value;
    }

    template<typename file_stream>
//    void _close(file_stream &file) {
    void _close(file_stream &file) {
        file.close();
    }


    basic_ifstream<char> _open(const string &link) {
        this->path = link;
        ifstream _file_in(link);
        return dynamic_cast<basic_ifstream<char> &&>(_file_in);
//        this->file_in = _file_in;
//return _file_in;
    }

public:
    template<typename AUTO>
    AUTO read(const string &link, AUTO type_auto) {
//        this->link = link;//тут нельзя копировать это будет сохранять обьект open
        AUTO value;
        if (this->is_file_in) {
            value = _read(this->file_in, link, type_auto);
        } else {
            ifstream _file_in(link);

            value = _read(_file_in, link, type_auto);

            _file_in.close();
        }
        return value;
    }

    template<typename AUTO>
    AUTO read(AUTO type_auto) {
        // TODO
        //  if is link - то создати обьект глобальный
        //  if link and obj is not defined - кидати ексепшн.

//        this->path = path;//тут нельзя копировать это будет сохранять обьект open

        if (this->is_file_in)throw TheFileDidNotOpen();
        AUTO value;
        if (this->is_file_in) {
            value = _read(this->file_in, this->path, type_auto);
        } else {
            ifstream _file_in(path);

            value = _read(_file_in, this->path, type_auto);
            _file_in.close();
        }
        return value;
    }

    void open(const string &link) {
        this->file_in = _open(link);
    }

    void close() {
        _close(this->file_in);
//        this->file_in.close();
    }
};

#endif //FILE_FUN_FILE_H
