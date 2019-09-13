struct add_args {
    int a;
    int b;
};
typedef struct add_args add_args;

bool_t xdr_add_args();    

#define ADDPROG ((u_long)0x20000001)
#define ADDVERS ((u_long)1)
#define ADD ((u_long)1)   
extern int *add_1();  
