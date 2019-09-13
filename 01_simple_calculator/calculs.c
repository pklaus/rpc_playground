#include <rpc/rpc.h>
#include "calculs.h"

int main(int argc, char *argv[]) {
    int buffer[256];
    struct data_in input;
    struct result_int *output;
    CLIENT *cl;

    if (argc != 2) {
        printf("usage: client hostname_of_server\n");
        exit(1);
    }

    /*Etablir le lien vers le serveur distant
     * cl = clnt_create(server, PROG, VERS, prot);
     */
    cl = clnt_create(argv[1], CALCULS, VERSION_UN, "tcp");
    if (cl == NULL) {
        clnt_pcreateerror(argv[1]);
        exit(1);
    }

    input.arg1 = 5;
    input.arg2 = 5;

    output = add_1(&input, cl);
    if (output == NULL) {
        clnt_perror(cl, argv[1]);
        exit(1);
    }
    printf("the result field is %d\n", output->result);
    printf("the errno field is %d\n", output->errno);

    clnt_destroy(cl);

    return 0;
}
