//
// Created by cyton_code on 24.03.2021.
//

#ifndef FILE_FUN_FILE_H
#define FILE_FUN_FILE_H

class FileRead {
private:
//    ofstream file_out = nullptr;
    ifstream file_in;
//    bool is_file_in = False;//, is_file_out = False;
    string path = "";

    template<typename file_stream, typename AUTO>
    AUTO _read(file_stream &file/* = "in.txt"*/, const string &link, AUTO result_type) {
        check_file_open(file, link);// перемыстити треба цю функцію в класс

        AUTO value;
        file >> value;
        return value;
    }

    template<typename file_stream>
    void _close(file_stream &file) {
        file.close();
    }


    basic_ifstream<char> _open(const string &link) {
        this->path = link;
        ifstream _file_in(link);
        return dynamic_cast<basic_ifstream<char> &&>(_file_in);
    }

    void _work() {
        if (this->file_in.is_open());
        else {
            if (!this->path.empty()) {
                this->file_in = this->_open(this->path);
            } else // иначе если строка пустая. Сказать что файл не может быть
                // открыт или лучше сказать: я не знаю где файл открывать файл.
                throw TheFileDidNotOpen();
        }
    }

public:
    template<typename AUTO>
    AUTO read(const string &link, AUTO type_auto) {
        AUTO value;
        if (this->file_in.is_open()) {
            value = this->_read(this->file_in, link, type_auto);
        } else {
            ifstream _file_in(link);
            value = this->_read(_file_in, link, type_auto);
            _file_in.close();
        }
        return value;
    }

    template<typename AUTO>
    AUTO read(AUTO type_auto) {
        _work(); // эта строчка делает все - чтобы файл был открыт.
        AUTO value;
        if (this->file_in.is_open()) {
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
        this->path.clear();
    }
};

#endif //FILE_FUN_FILE_H
