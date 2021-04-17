class Container {
public:
    virtual double &operator[](int) = 0;//pure virtual function
    virtual int     size( ) const   = 0;//const memeber function
    virtual ~Container( ) {}//destructor
};
//viture functions allow the object to be used correctly even
//when the size of the object and the lyout of its data are unknown to the caller

void use(Container &c) {
    const int sz = c.size( );
    for (int i = 0; i != sz; ++i)
        cout << c[i] << '\n';
}

class Vector_container : public Container {
    Vector v;

public:
    Vector_container(int s) : v(s) {}
    ~Vector_container( ) {}

    double &operator[](int i) {
        return v[i]
    }
    int size( ) const {
        return v.size;
    }
};

void g(){
    Vector_container vc{10,9,8,7,6,5,4,3,2,1,0};
    use(vc);//use will work well for Vector_container thought is can't recognize it;
}

class