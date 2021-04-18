template < typename T, typename... Tail > void f{ T head, Tail... tail } {
    g(head);
    f(tail);
}

void f( ) {}