CC = gcc
CFLAGS = -Wall -Werror -Wextra

Quest_1 = ../build/Quest_1
Quest_2 = ../build/Quest_2
Quest_3 = ../build/Quest_3
Quest_4 = ../build/Quest_4
Quest_5 = ../build/Quest_5
Quest_6 = ../build/Quest_6
Quest_7 = ../build/Quest_7

objFile = s21_string.o s21_string_test.o main.o -o

.PHONY: all clean rebuild

all: strlen_tests strcmp_tests strcpy_tests strcat_tests strchr_tests strstr_tests strtok_tests

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

s21_string.o: s21_string.c
	$(CC) $(CFLAGS) -c s21_string.c -o s21_string.o

s21_string_test.o: s21_string_test.c
	$(CC) $(CFLAGS) -c s21_string_test.c -o s21_string_test.o

strlen_tests: s21_string.o s21_string_test.o
	$(CC) -D Quest_1 -c main.c -o main.o
	$(CC) $(objFile) $(Quest_1)

strcmp_tests: s21_string.o s21_string_test.o
	$(CC) -D Quest_2 -c main.c -o main.o
	$(CC) $(objFile) $(Quest_2)

strcpy_tests: s21_string.o s21_string_test.o
	$(CC) -D Quest_3 -c main.c -o main.o
	$(CC) $(objFile) $(Quest_3)

strcat_tests: s21_string.o s21_string_test.o
	$(CC) -D Quest_4 -c main.c -o main.o
	$(CC) $(objFile) $(Quest_4)

strchr_tests: s21_string.o s21_string_test.o
	$(CC) -D Quest_5 -c main.c -o main.o
	$(CC) $(objFile) $(Quest_5)

strstr_tests: s21_string.o s21_string_test.o
	$(CC) -D Quest_6 -c main.c -o main.o
	$(CC) $(objFile) $(Quest_6)

strtok_tests: s21_string.o s21_string_test.o
	$(CC) -D Quest_7 -c main.c -o main.o
	$(CC) $(objFile) $(Quest_7)

clean:
	rm -f *.o $(Quest_1) $(Quest_2) $(Quest_3) $(Quest_4) $(Quest_5) $(Quest_6) $(Quest_7)

rebuild: clean all
