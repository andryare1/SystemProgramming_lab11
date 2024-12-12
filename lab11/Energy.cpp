#include "Energy.hpp"

// === Реализация miJoule ===
miJoule::miJoule(double val) : value(val) {}

miJoule::miJoule(const Joule& j) : value(j.getValue() / MILLI) {}
miJoule::miJoule(const kJoule& kj) : value(kj.getValue() / KILO) {}
miJoule::miJoule(const MJoule& mj) : value(mj.getValue() / MEGA) {}
miJoule::miJoule(const GJoule& gj) : value(gj.getValue() / GIGA) {}
miJoule::miJoule(const TJoule& tj) : value(tj.getValue() / TERA) {}

miJoule::operator Joule() const { return Joule(value * MILLI); }
miJoule::operator kJoule() const { return kJoule(value * MILLI / KILO); }
miJoule::operator MJoule() const { return MJoule(value * MILLI / MEGA); }
miJoule::operator GJoule() const { return GJoule(value * MILLI / GIGA); }
miJoule::operator TJoule() const { return TJoule(value * MILLI / TERA); }

miJoule& miJoule::operator=(const miJoule& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

double miJoule::getValue() const { return value; }

// === Реализация Joule ===
Joule::Joule(double val) : value(val) {}

Joule::Joule(const miJoule& mj) : value(mj.getValue() * MILLI) {}
Joule::Joule(const kJoule& kj) : value(kj.getValue() * KILO) {}
Joule::Joule(const MJoule& mj) : value(mj.getValue() * MEGA) {}
Joule::Joule(const GJoule& gj) : value(gj.getValue() * GIGA) {}
Joule::Joule(const TJoule& tj) : value(tj.getValue() * TERA) {}

Joule::operator miJoule() const { return miJoule(value / MILLI); }
Joule::operator kJoule() const { return kJoule(value / KILO); }
Joule::operator MJoule() const { return MJoule(value / MEGA); }
Joule::operator GJoule() const { return GJoule(value / GIGA); }
Joule::operator TJoule() const { return TJoule(value / TERA); }

Joule& Joule::operator=(const Joule& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

double Joule::getValue() const { return value; }

// === Реализация kJoule ===
kJoule::kJoule(double val) : value(val) {}

kJoule::kJoule(const Joule& j) : value(j.getValue() / KILO) {}
kJoule::kJoule(const miJoule& mj) : value(mj.getValue() * MILLI / KILO) {}
kJoule::kJoule(const MJoule& mj) : value(mj.getValue() / MEGA * KILO) {}
kJoule::kJoule(const GJoule& gj) : value(gj.getValue() * GIGA / KILO) {}
kJoule::kJoule(const TJoule& tj) : value(tj.getValue() * TERA / KILO) {}

kJoule::operator Joule() const { return Joule(value * KILO); }
kJoule::operator miJoule() const { return miJoule(value * KILO / MILLI); }
kJoule::operator MJoule() const { return MJoule(value / KILO); }
kJoule::operator GJoule() const { return GJoule(value / (KILO * MEGA)); }
kJoule::operator TJoule() const { return TJoule(value / (KILO * GIGA)); }

kJoule& kJoule::operator=(const kJoule& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

double kJoule::getValue() const { return value; }

// === Реализация MJoule ===
MJoule::MJoule(double val) : value(val) {}

MJoule::MJoule(const Joule& j) : value(j.getValue() / MEGA) {}
MJoule::MJoule(const miJoule& mj) : value(mj.getValue() * MILLI / MEGA) {}
MJoule::MJoule(const kJoule& kj) : value(kj.getValue() * KILO / MEGA) {}
MJoule::MJoule(const GJoule& gj) : value(gj.getValue() / GIGA * MEGA) {}
MJoule::MJoule(const TJoule& tj) : value(tj.getValue() * TERA / MEGA) {}

MJoule::operator Joule() const { return Joule(value * MEGA); }
MJoule::operator miJoule() const { return miJoule(value * MEGA / MILLI); }
MJoule::operator kJoule() const { return kJoule(value * MEGA / KILO); }
MJoule::operator GJoule() const { return GJoule(value / MEGA); }
MJoule::operator TJoule() const { return TJoule(value / MEGA * TERA); }

MJoule& MJoule::operator=(const MJoule& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

double MJoule::getValue() const { return value; }

// === Реализация GJoule ===
GJoule::GJoule(double val) : value(val) {}

GJoule::GJoule(const Joule& j) : value(j.getValue() / GIGA) {}
GJoule::GJoule(const miJoule& mj) : value(mj.getValue() * MILLI / GIGA) {}
GJoule::GJoule(const kJoule& kj) : value(kj.getValue() * KILO / GIGA) {}
GJoule::GJoule(const MJoule& mj) : value(mj.getValue() * MEGA / GIGA) {}
GJoule::GJoule(const TJoule& tj) : value(tj.getValue() * TERA / GIGA) {}

GJoule::operator Joule() const { return Joule(value * GIGA); }
GJoule::operator miJoule() const { return miJoule(value * GIGA / MILLI); }
GJoule::operator kJoule() const { return kJoule(value * GIGA / KILO); }
GJoule::operator MJoule() const { return MJoule(value * GIGA / MEGA); }
GJoule::operator TJoule() const { return TJoule(value / GIGA * TERA); }

GJoule& GJoule::operator=(const GJoule& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

double GJoule::getValue() const { return value; }

// === Реализация TJoule ===
TJoule::TJoule(double val) : value(val) {}

TJoule::TJoule(const Joule& j) : value(j.getValue() / TERA) {}
TJoule::TJoule(const miJoule& mj) : value(mj.getValue() * MILLI / TERA) {}
TJoule::TJoule(const kJoule& kj) : value(kj.getValue() * KILO / TERA) {}
TJoule::TJoule(const MJoule& mj) : value(mj.getValue() * MEGA / TERA) {}
TJoule::TJoule(const GJoule& gj) : value(gj.getValue() * GIGA / TERA) {}

TJoule::operator Joule() const { return Joule(value * TERA); }
TJoule::operator miJoule() const { return miJoule(value * TERA / MILLI); }
TJoule::operator kJoule() const { return kJoule(value * TERA / KILO); }
TJoule::operator MJoule() const { return MJoule(value * TERA / MEGA); }
TJoule::operator GJoule() const { return GJoule(value * TERA / GIGA); }

TJoule& TJoule::operator=(const TJoule& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

double TJoule::getValue() const { return value; }
