//
// Created by cyton_code on 24.03.2021.
//

#ifndef FILE_FUN_FILE_H
#define FILE_FUN_FILE_H

class FileRead {
private:
    ifstream file_in;
    string path;

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

    /** I open the file if it is not open.
     * If the file does not open after that,
     * a FileNotOpen (Exception) error is thrown.
     * */
    void _work() {
        if (is_open()) {
            // if the file is open: everything is fine.
        } else if (!this->path.empty()) {
            // if the file is not open, but there is a link: open the file.
            this->file_in = this->_open(this->path);
        } else
            // otherwise, if the string is empty. To say: the file won't open,
            // or better to say: I don't know where the file is in order to
            // open it.
            throw TheFileDidNotOpen();
    }

public:
    template<typename AUTO>
    AUTO read(const string &link, AUTO type_auto) {
        AUTO value;

        if (is_open())
            value = this->_read(this->file_in, link, type_auto);
        else {
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
        if (is_open()) {
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

    bool is_open() {
        return this->file_in.is_open();
    }
    bool
};

#endif //FILE_FUN_FILE_H
