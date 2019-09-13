
.PHONY: rpcgen
rpcgen:
	rpcgen -a -C add.x

all: rpcgen
	gcc -I/usr/include/tirpc -ltirpc -g -DRPC_SVC_FG -c -o add_clnt.o add_clnt.c
	gcc -I/usr/include/tirpc -ltirpc -g -DRPC_SVC_FG -c -o add_client.o add_client.c
	gcc -I/usr/include/tirpc -ltirpc -g -DRPC_SVC_FG -c -o add_xdr.o add_xdr.c
	gcc -I/usr/include/tirpc -ltirpc -g -DRPC_SVC_FG -o add_client add_clnt.o add_client.o add_xdr.o 
	gcc -I/usr/include/tirpc -ltirpc -g -DRPC_SVC_FG -c -o add_svc.o add_svc.c
	gcc -I/usr/include/tirpc -ltirpc -g -DRPC_SVC_FG -c -o add_server.o add_server.c
	gcc -I/usr/include/tirpc -ltirpc -g -DRPC_SVC_FG -o add_server add_svc.o add_server.o add_xdr.o

.PHONY: clean
clean:
	-rm *.o
	-rm add_clnt.c add_svc.c add_xdr.c add.h
	-rm add_client.c add_server.c
	-rm Makefile.add
	-rm add_client add_server
