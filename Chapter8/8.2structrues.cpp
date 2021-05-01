struct Readout {
    char hour;  //[0:23]
    int  value;
    char seq;  //['a':'z']
};
// to align the size, members should be arraged by size;
struct Readout2 {
    int  value;
    char hour;
    char seq;
};

struct List;
struct Link {
    Link *next;
    Link *prev;
    List *member_of;
    int   data;
};
struct List {
    Link *head;
}

struct Address {
    string name;
    int    number;
    string street;
    string town;
    char   state[2];
    char   zip[5];

    Address(const string n, int nu, const string &s, const string &t,
            const string &st, int z);
};
Address::Address(const string n, int nu, const string &s, const string &t,
                 const string &st, int z)
    : name(n), number(nu), street{ s }, town(t) {
    if (st.size( ) != 2)
        error("State abbreviation should be two characters");
    state = { st[0], st[1] };
    ostringstream ost;  // an output string stream
    osz << z;
    string zi{ ost.str( ) };
    switch (zi.size( )) {
    case 5:
        zip = { zi[0], zi[1], zi[2], zi[3], zi[4] };
        break;
    case 4:
        zip = { '0', zi[0], zi[1], zi[2], zi[3] };
        break;
    default:
        error("unexpected ZIP code format");
    }
}
