import sys
link = "/run/media/cytoncode/GIT/CppLibraries/"
print(sys.argv, sys.path, sys.path.append(link))
sys.path.("/run/media/cytoncode/GIT/CppLibraries/")
from erer import ooooo
# ~ import au

# ~ cdef double f(double x) except? -2:
    # ~ return x ** 2 - x
# ~ cd /run/media/cytoncode/


Я узнаю есть ли адресс в патч, если есть то:
	я импортирую модуль
	Я говорю None
	Я не добавлял адрес.
Если адреса нет:
	Пытаюсь:
		я добавляю адресс
		импортирую модуль
		я говорю True
		
	Если мне не удалось:
		я говорю False
Eсли я добавил адрес:
	удаляю адрес
