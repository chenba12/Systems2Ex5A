#include "PrimeIterator.hpp"

PrimeIterator::PrimeIterator(const MagicalContainer &container, int position) {

}

PrimeIterator::PrimeIterator() {

}

bool PrimeIterator::operator==(const PrimeIterator &other) const {
    return false;
}

bool PrimeIterator::operator!=(const PrimeIterator &other) const {
    return false;
}

PrimeIterator &PrimeIterator::operator++() {
    return *this;
}

int PrimeIterator::operator*() const {
    return 0;
}
