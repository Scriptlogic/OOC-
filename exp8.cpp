#include <iostream>

class Integer {
    int value;
public:
    
    Integer(int v = 0) : value(v) {}

    // getter (for demo/printing)
    int get() const { return value; }

    // assignment (default works fine; showing explicit for learning)
    Integer& operator=(const Integer& other) {
        value = other.value;
        return *this;
    }

    // --- Unary operators ---
    // unary +
    Integer operator+() const { return Integer(+value); }

    // unary -
    Integer operator-() const { return Integer(-value); }

    // bitwise NOT ~
    Integer operator~() const { return Integer(~value); }

    // logical NOT !
    bool operator!() const { return value == 0; }

    // prefix ++
    Integer& operator++() { ++value; return *this; }

    // postfix ++
    Integer operator++(int) { Integer tmp(*this); value++; return tmp; }

    // prefix --
    Integer& operator--() { --value; return *this; }

    // postfix --
    Integer operator--(int) { Integer tmp(*this); value--; return tmp; }

    // --- Compound assignment (binary combined) ---
    Integer& operator+=(const Integer& other) { value += other.value; return *this; }
    Integer& operator-=(const Integer& other) { value -= other.value; return *this; }
    Integer& operator*=(const Integer& other) { value *= other.value; return *this; }
    Integer& operator/=(const Integer& other) { value /= other.value; return *this; }
    Integer& operator%=(const Integer& other) { value %= other.value; return *this; }
    Integer& operator&=(const Integer& other) { value &= other.value; return *this; }
    Integer& operator|=(const Integer& other) { value |= other.value; return *this; }
    Integer& operator^=(const Integer& other) { value ^= other.value; return *this; }
    Integer& operator<<=(int n) { value <<= n; return *this; }
    Integer& operator>>=(int n) { value >>= n; return *this; }

    // --- stream insertion for printing ---
    friend std::ostream& operator<<(std::ostream& os, const Integer& x) {
        return os << x.value;
    }

    // --- Binary arithmetic / bitwise operators (friends) ---
    friend Integer operator+(const Integer& a, const Integer& b) { return Integer(a.value + b.value); }
    friend Integer operator-(const Integer& a, const Integer& b) { return Integer(a.value - b.value); }
    friend Integer operator*(const Integer& a, const Integer& b) { return Integer(a.value * b.value); }
    friend Integer operator/(const Integer& a, const Integer& b) { return Integer(a.value / b.value); }
    friend Integer operator%(const Integer& a, const Integer& b) { return Integer(a.value % b.value); }

    friend Integer operator&(const Integer& a, const Integer& b) { return Integer(a.value & b.value); }
    friend Integer operator|(const Integer& a, const Integer& b) { return Integer(a.value | b.value); }
    friend Integer operator^(const Integer& a, const Integer& b) { return Integer(a.value ^ b.value); }

    // bit shifts between Integer and int (left operand Integer)
    friend Integer operator<<(const Integer& a, int n) { return Integer(a.value << n); }
    friend Integer operator>>(const Integer& a, int n) { return Integer(a.value >> n); }

    // --- Relational operators ---
    friend bool operator==(const Integer& a, const Integer& b) { return a.value == b.value; }
    friend bool operator!=(const Integer& a, const Integer& b) { return a.value != b.value; }
    friend bool operator<(const Integer& a, const Integer& b) { return a.value < b.value; }
    friend bool operator<=(const Integer& a, const Integer& b) { return a.value <= b.value; }
    friend bool operator>(const Integer& a, const Integer& b) { return a.value > b.value; }
    friend bool operator>=(const Integer& a, const Integer& b) { return a.value >= b.value; }
};

int main() {
    Integer a(7), b(3);
    std::cout << "a = " << a << ", b = " << b << "\n\n";

    // Binary arithmetic
    std::cout << "a + b = " << (a + b) << "\n";
    std::cout << "a - b = " << (a - b) << "\n";
    std::cout << "a * b = " << (a * b) << "\n";
    std::cout << "a / b = " << (a / b) << "\n";
    std::cout << "a % b = " << (a % b) << "\n\n";

    // Bitwise
    std::cout << "a & b = " << (a & b) << "\n";
    std::cout << "a | b = " << (a | b) << "\n";
    std::cout << "a ^ b = " << (a ^ b) << "\n";
    std::cout << "a << 1 = " << (a << 1) << "\n";
    std::cout << "a >> 1 = " << (a >> 1) << "\n\n";

    // Unary
    std::cout << "+a = " << (+a) << "\n";
    std::cout << "-a = " << (-a) << "\n";
    std::cout << "~a = " << (~a) << "\n";
    std::cout << "!0 = " << (!Integer(0)) << "  (true)\n";
    std::cout << "!a = " << (!a) << "  (false when a != 0)\n\n";

    // ++ / --
    Integer x(5);
    std::cout << "x = " << x << "\n";
    std::cout << "++x = " << (++x) << "  (prefix)\n";
    std::cout << "x++ = " << (x++) << "  (postfix returns old value)\n";
    std::cout << "x now = " << x << "\n";
    std::cout << "--x = " << (--x) << "\n";
    std::cout << "x-- = " << (x--) << "\n";
    std::cout << "x now = " << x << "\n\n";

    // Compound assignments
    Integer c = a;
    c += b; std::cout << "c = a; c += b -> " << c << "\n";
    c -= b; std::cout << "c -= b -> " << c << "\n";
    c *= Integer(2); std::cout << "c *= 2 -> " << c << "\n";
    c /= Integer(2); std::cout << "c /= 2 -> " <<

