
all:
	rpcgen -a -C add.x
	gcc -g -DRPC_SVC_FG -c -o add_clnt.o add_clnt.c
	gcc -g -DRPC_SVC_FG -c -o add_client.o add_client.c
	gcc -g -DRPC_SVC_FG -c -o add_xdr.o add_xdr.c
	gcc -g -DRPC_SVC_FG -o add_client add_clnt.o add_client.o add_xdr.o 
	gcc -g -DRPC_SVC_FG -c -o add_svc.o add_svc.c
	gcc -g -DRPC_SVC_FG -c -o add_server.o add_server.c
	gcc -g -DRPC_SVC_FG -o add_server add_svc.o add_server.o add_xdr.o
	#gcc -I/usr/include/tirpc -o rcalculs rcalculs.c

.PHONY: clean
clean:
	-rm *.o
	-rm calculs_xdr.c calculs_clnt.c calculs_svc.c calculs.h
