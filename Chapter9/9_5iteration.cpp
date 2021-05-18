for (auto x : v) {
}
for (int i = 0; i < max; i++) {
}
for (string s; cin >> s;) {
}
while ( ) {
}
do {
} while ( );  // best avoided
for (int i = 0; i < max; i++) {
    if (!i) {
        return i;
    }
}
for (int i = 0; i < max; i++) {
    if (!i) {
        continue;  // continue won't skip i++;
    }
    return i;
}
