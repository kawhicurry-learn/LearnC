class Vector {
public:
    Vector(std::initializer_list< double >);
    void push_back(double);
};

Vector read(istream &is) {
    Vector v;
    for (double d; is >> d;)
        v.push_back(d);
    return v;
}