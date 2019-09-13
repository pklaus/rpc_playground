
all:
	rpcgen -M -N calculs.x
	gcc -I/usr/include/tirpc -o calculs calculs.c
	gcc -I/usr/include/tirpc -o rcalculs rcalculs.c

.PHONY: clean
clean:
	-rm *.o
	-rm calculs_xdr.c calculs_clnt.c calculs_svc.c calculs.h
