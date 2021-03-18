//
// Created by cyton_code on 17.03.2021.
//

#ifndef CPP_LEARNING_E_H
#define CPP_LEARNING_E_H
//0,100,1
#define E(start, stop) step = 1; \
if(start > stop)cout << "start -> +oo"; \
ELIF (start < stop) cout << "start -> " << stop; \
else cout << "start=stop";       \
for (int i = start, n = stop, j = start-step; i < n || j > n; i += step, j = i)
// задуматися про попредный елемент.

#endif //CPP_LEARNING_E_H
