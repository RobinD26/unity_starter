#ifndef SOLUTION_C_BAS_NIVEAU_H_
#define SOLUTION_C_BAS_NIVEAU_H_

#include "stdint.h"
#include "stddef.h"

int puts(const char* cs);

size_t strlen(const char* cs);

char* strcpy(char* s, const char* ct);

char* strreverse(char *s);

char* longtodec(unsigned int l, char* s);

char* hexstr(uint32_t l, char* s, uint8_t bits);




#endif //SOLUTION_C_BAS_NIVEAU_H_