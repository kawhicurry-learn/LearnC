void fp(char v[], int size) {
    for (int i = 0; i < size; i++) {
    }  // hope that v has at least size elements;
    for (int x : v) {
    }  // error:range-for does not work for pointer;

    const int N = 7;
    char      v2[N];
    for (int i = 0; i < N; i++) {
    }
    for (auto x : v) {
    }  // range-for works for pointer;
}

void print_mij1(int m[][], int dim1,
                int dim2) {  // doesn't behave as most people would think
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            std::cout << m[i][j];  // surprise!
        }  // m[i][j] will be interpreted as *(*(m+i)+j);
    }
}
void print_mij2(int m[][], int dim1, int dim2) {
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            std::cout << m[i * dim2 + j];
        }
    }
}
// Any subscript should be viewed as pointer