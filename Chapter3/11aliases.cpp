using size_t = unsigned int;
////////////////////////////////
template < typename T > class Vector {
public:
    using value_type = T;
};
////////////////////////////////
template < typename C > using Element_type = typename C::value_type;

template < typename Container > void algo(Container &C) {
    Vector< Element_type< Container > > vec;
    //
}
////////////////////////////////
template < typename Key, typename Value >
using String_map = Map< string, Value >;

String_map< int > m;
