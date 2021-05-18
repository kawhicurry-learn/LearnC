

char          word1;  // 8bits usually
signed        word2;  // guaranteed to be signed
unsigned char word3;  // guaranteed to be unsigned
wchar_t       word4;  // hold character set large enough
char16_t      word5;  // holding 16 bits
char32_t      word6;  // holding 32 bits

void f(char c, signed char sc, unsigned char uc) {
    char *         pc  = &us;
    signed char *  psc = pc;
    unsigned char *puc = pc;
    psc                = puc;
    // error:no pointer conversion
}