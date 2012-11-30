all : Assgn4

Assgn4: Assgn4.o EPoll.o linkedList.o mysocket.o scheduler.o threadpool.o Testy.o worker.o
	gcc -o Assgn4 -pthread Assgn4.o EPoll.o linkedList.o mysocket.o scheduler.o threadpool.o Testy.o worker.o
Assgn4.o: Assgn4.c EPoll.o linkedList.o mysocket.o scheduler.o threadpool.o Testy.o worker.o
	gcc -I ../include -c Assgn4.c
worker.o: worker.c ../include/worker.h
	gcc -I ../include -c worker.c
EPoll.o: EPoll.c ../include/EPoll.h
	gcc -I ../include -c EPoll.c
linkedList.o: linkedList.c ../include/linkedList.h
	gcc -I ../include -c linkedList.c
mysocket.o: mysocket.c ../include/mysocket.h
	gcc -I ../include -c mysocket.c
scheduler.o: scheduler.c ../include/scheduler.h
	gcc -I ../include -c scheduler.c
threadpool.o: threadpool.c ../include/threadpool.h
	gcc -I ../include -c threadpool.c
Testy.o: Testy.c ../include/Testy.h
	gcc -I ../include -c Testy.c
clean: 
	rm -rf *.o Assgn4

