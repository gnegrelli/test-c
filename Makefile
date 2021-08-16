CC = gcc
CFLAGS = -c -Wall
PROFILE_FLAGS = -fprofile-arcs -ftest-coverage 
TST_LIBS = -lcheck -lm -lpthread -lrt -lsubunit
COV_LIBS = -lgcov -coverage

all: test

question_3.o:  question_3.c
	gcc $(CFLAGS) $(PROFILE_FLAGS) question_3.c

question_4.o: question_4.c question_3.h
	gcc $(CFLAGS) $(PROFILE_FLAGS) question_4.c

question_4_test: question_3.o question_4.o
	gcc question_3.o question_4.o $(TST_LIBS) $(COV_LIBS) -o question_4_test

test: question_4_test
	./question_4_test

.PHONY: clean all

clean:
	-rm *.o *.html *.gcda *.gcno question_4_test
