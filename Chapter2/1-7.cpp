int  n;
int  a[2];
int *p;
int &r = n;  // reference means another name for a same space.
int  f(int);

int count_x(char *p, char x) {
    if (p == nullptr)
        return 0;
    int count = 0;
    for (; *p != 0; ++p) {
        if (*p == x)
            ++count;
    }
    return count;
}