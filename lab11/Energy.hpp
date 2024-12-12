
// === Коэффициенты перевода ===
constexpr double MILLI = 1e-3; // мДж → Дж
constexpr double KILO = 1e3;   // кДж → Дж
constexpr double MEGA = 1e6;   // МДж → Дж
constexpr double GIGA = 1e9;   // ГДж → Дж
constexpr double TERA = 1e12;  // ТДж → Дж

// === Классы ===

// === miJoule ===
class miJoule {
private:
    double value;

public:
    miJoule(double val = 0.0);

    // Конструкторы преобразования
    miJoule(const class Joule& j);
    miJoule(const class kJoule& kj);
    miJoule(const class MJoule& mj);
    miJoule(const class GJoule& gj);
    miJoule(const class TJoule& tj);

    // Операторы преобразования
    operator Joule() const;
    operator kJoule() const;
    operator MJoule() const;
    operator GJoule() const;
    operator TJoule() const;

    // Оператор присваивания
    miJoule& operator=(const miJoule& other);

    // Геттер
    double getValue() const;
};

// === Joule ===
class Joule {
private:
    double value;

public:
    Joule(double val = 0.0);

    // Конструкторы преобразования
    Joule(const miJoule& mj);
    Joule(const class kJoule& kj);
    Joule(const class MJoule& mj);
    Joule(const class GJoule& gj);
    Joule(const class TJoule& tj);

    // Операторы преобразования
    operator miJoule() const;
    operator kJoule() const;
    operator MJoule() const;
    operator GJoule() const;
    operator TJoule() const;

    // Оператор присваивания
    Joule& operator=(const Joule& other);

    // Геттер
    double getValue() const;
};

// === kJoule ===
class kJoule {
private:
    double value;

public:
    kJoule(double val = 0.0);

    // Конструкторы преобразования
    kJoule(const Joule& j);
    kJoule(const miJoule& mj);
    kJoule(const MJoule& mj);
    kJoule(const GJoule& gj);
    kJoule(const TJoule& tj);

    // Операторы преобразования
    operator Joule() const;
    operator miJoule() const;
    operator MJoule() const;
    operator GJoule() const;
    operator TJoule() const;

    // Оператор присваивания
    kJoule& operator=(const kJoule& other);

    // Геттер
    double getValue() const;
};

// === MJoule ===
class MJoule {
private:
    double value;

public:
    MJoule(double val = 0.0);

    // Конструкторы преобразования
    MJoule(const Joule& j);
    MJoule(const miJoule& mj);
    MJoule(const kJoule& kj);
    MJoule(const GJoule& gj);
    MJoule(const TJoule& tj);

    // Операторы преобразования
    operator Joule() const;
    operator miJoule() const;
    operator kJoule() const;
    operator GJoule() const;
    operator TJoule() const;

    // Оператор присваивания
    MJoule& operator=(const MJoule& other);

    // Геттер
    double getValue() const;
};

// === GJoule ===
class GJoule {
private:
    double value;

public:
    GJoule(double val = 0.0);

    // Конструкторы преобразования
    GJoule(const Joule& j);
    GJoule(const miJoule& mj);
    GJoule(const kJoule& kj);
    GJoule(const MJoule& mj);
    GJoule(const TJoule& tj);

    // Операторы преобразования
    operator Joule() const;
    operator miJoule() const;
    operator kJoule() const;
    operator MJoule() const;
    operator TJoule() const;

    // Оператор присваивания
    GJoule& operator=(const GJoule& other);

    // Геттер
    double getValue() const;
};

// === TJoule ===
class TJoule {
private:
    double value;

public:
    TJoule(double val = 0.0);

    // Конструкторы преобразования
    TJoule(const Joule& j);
    TJoule(const miJoule& mj);
    TJoule(const kJoule& kj);
    TJoule(const MJoule& mj);
    TJoule(const GJoule& gj);

    // Операторы преобразования
    operator Joule() const;
    operator miJoule() const;
    operator kJoule() const;
    operator MJoule() const;
    operator GJoule() const;

    // Оператор присваивания
    TJoule& operator=(const TJoule& other);

    // Геттер
    double getValue() const;
};
