class Vector {
private:
    double *elem;
    int     size;

public:
    Vector(int s) : elem{ new double[s] }, sz{ s } {
        for (int i = 0; i != s; ++i)
            elem[i] = 0;
    }

    ~Vector( ) {
        delete[] elem;
    }
    // '~' is the destructor

    double &operator[](int i);
    int     size( ) const;
}

void fct(int n){
    Vector v(n);
    {
        Vector v2(2*n);
        //ues v2 and v;
    }//v2 is destroyed here
    //use v
}//v is destoryed here