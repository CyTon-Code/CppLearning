//
// Created by cyton_code on 17.03.2021.
//

#ifndef CPP_LEARNING_E_ITER_H
#define CPP_LEARNING_E_ITER_H
int polyus(int n){
    if (n > 0) return 1;
    if (n < 0) return 0;
    return 2;
}
/**
 * +1,+100,+1
 * +100, +1, +1
 * Если старт меньше стоп:
 *  Если степ тогож  полюсу що й стоп. -> стремлюсь до стоп
 *  Если степ не тогож полюсу що й стоп. -> стремлюся до -оо
 * Если старт больше стоп:
 *  Если степ тогож полюсу що й стоп. -> стремлюся до +оо
 *  Если степ не тогож полюсу що й стоп. -> стремлюся до стоп
 * Если старт равен стоп. -> струмлюся до стоп.
 *
*/
#define MATH_E(n, stop, step) \
if ((n>stop && /*+*/step>0) || (/*+*/step>0 && /*-*/stop<0)) cout <<"n -> +oo" << endl;\
else if(/*+*/step>0 && /*+*/stop>0)  cout << "n -> " << stop << endl;\
else if(/*-*/step<0 && /*+*/stop>0)  cout << "n -> -oo" << endl;\
for(;n<stop; n += step)

#endif //CPP_LEARNING_E_ITER_H
