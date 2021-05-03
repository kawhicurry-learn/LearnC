enum class Warning : int {
    green,
    yellow,
    orange,
    red
};  // sizeof(Warning)==sizeof(int)
enum class Warning : char { green, yellow, orange, red };  // sizeof(Warning)==1