//
// Created by cytoncode on 12.03.2021.
//


#ifndef CPPLIBRARIES_FOR_H
#define CPPLIBRARIES_FOR_H
// TODO узнать как с помощью define сменить for на синтаксический пайтон.
//#define in :
//#define _ auto_type
//#define foreach for (auto
//#define in ","
//#define foreach(i, list)for(auto i: list)
//#define foreac (i , list) foreach( i,  list)

#ifndef for_python_v1
#define for_python_v1
//#define f(start, stop, step) for(int i=start,n=stop;i<n;i+=step)
// #define fo(stop) f(0, stop, 1)
#define for for (auto
#define in(list) : list)
#define $ {

void print(auto args) {
    for i in (args) {
        cout << i << " ";
    }
    cout << endl;
}

#endif // for_python_v1


#ifdef for_python_arg
#define for_python_arg

#define for(i, list) for (auto i: list)
#define $
#define in

void print(auto args) {
    for (i, args) {
        cout << i << " ";
    }
    cout << endl;
}

#endif //for_python_arg


#ifdef for_python
#define for_python

#define for for (auto
#define $ ){
#define in :

void print(auto args) {
    for i in args $
        cout << i << " ";
    }
    cout << endl;
}

#endif //for_python


#ifdef for_python_tmp
#define for_python_tmp

#define for(i) for (auto i
#define $
#define in(list) : list)

void print(auto args) {
    for (i) in (args) {
        cout << i << " ";
    }
    cout << endl;
}

#endif //for_python_tmp


#ifdef for_python_tmp1
#define for_python_tmp1

#define $
#define in :
#define for_each(list) for (auto list##_i in list)
//#define sep " "
//#define end "\n"
//#define echo(arg) cout << arg

void print(auto args, auto arg) {
    for_each (args) {
        cout << args_i << " ";
        for_each (arg) {
            cout << arg_i << " ";
        }
    }
    cout << endl;
}

#endif //for_python_tmp1

#endif //CPPLIBRARIES_FOR_H
