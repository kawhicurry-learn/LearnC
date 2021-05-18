auto x = 1;  // x is an int
auto x2 {
    1
}  // x is a list of int
auto x3 {
    1, 2
}  // x is a list of int

decltype(x) b;  // x is an int,thus b int
struct {
    int    d;
    doubel b;
} anon_s;
// define an anonymous struct
decltype(anon_s) anon_s2;