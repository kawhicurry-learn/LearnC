

static_assert(4 <= sizeof(int), "integers are too small");

constexpr double C = 2999.123;

void f(double speed) {
    const double local_max=135/(60*60);

    static_assert(speed<C,"can't go that fast");
    static_assert(local_max<C,"can't go that fast");
}