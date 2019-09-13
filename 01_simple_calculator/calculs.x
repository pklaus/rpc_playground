/* calculs.x*/

struct data_in {
    int arg1;
    int arg2;
};
typedef struct data_in data_in;

struct result_int {
    int result;
    int errno;
};

struct result_float {
    int result;
    int errno;
};

typedef struct result_int result_int;
typedef struct result_float result_float;

program CALCULS{
    version VERSION_UN{
        void CALCULS_NULL(void) = 0;
        result_int ADD(data_in) = 1;
        result_int SUB(data_in) = 2;
        result_int MUL(data_in) = 3;
        result_float DIV(data_in) = 4;
    } = 1;
} = 0x20000001;
