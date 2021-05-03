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
    : name(n), number(nu), street{ s }, town(t) {  // members in structrues
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

struct Point {
    int x, y;
};
Point points[3]{ { 1, 2 }, { 2, 3 }, { 3, 4 } };
int   x2    = points[2].x;
using Array = array< Point, 3 >;
Array points{ { 1, 2 }, { 2, 3 }, { 3, 4 } };

// field;
struct PPN {                // R6000 Physical Page Number
    unsigned int PFN : 22;  // Page Frame Number
    int : 3;                // unused
    unsigned int CCA : 3;   // cache coherency algorithm
    bool         nonreachable : 1;
    bool         dirty : 1;
    bool         valid : 1;
    bool         global : 1;
} void part_of_VM_system(PPN *p) {
    if (p->dirty)
        p->dirty = 0;
}
