
using namespace std;
string compose(const string &name, const string &domain) {
    return name + '@' + domain;
}

auto addr = compose("dmr", "bell-labs.com");
void m2(string &s1, string &s2) {
    s1 = s1 + '\n';
    s2 += '\n';
}

string name = "Niels Stroustrup";
void   m3( ) {
    string s = name.substr(6, 10);
    name.replace(0, 5, "nicholas");
    name[0] = toupper(name[0]);  // lower case to upper case
}

string incantation;
void   respond(const string &answer) {
    if (answer == incantation) {
        // perform magig
    } else if (answer == "yes") {
        // ...
    }
}

