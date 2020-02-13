/* Define the machine-dependent type `jmp_buf'.  Transputer version.  */

typedef struct
  {
    __ptr_t __Wreg;
    __ptr_t __Iptr;
  } __jmp_buf[1];
