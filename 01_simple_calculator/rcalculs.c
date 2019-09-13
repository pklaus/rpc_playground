#include <rpc/rpc.h>
#include "calculs.h"

result_int add_1(struct data_in data, struct svc_req *rqstp) {
    int buffer;
    static struct result_int result;
    int a = data.arg1;
    int b = data.arg2;
    buffer = a+b;
    result.result = buffer;
    result.errno =0;
    return result;
}
