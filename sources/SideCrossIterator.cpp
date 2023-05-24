#include "SideCrossIterator.hpp"

SideCrossIterator::SideCrossIterator() {

}

SideCrossIterator::SideCrossIterator(const MagicalContainer &container, int position) {

}

bool SideCrossIterator::operator==(const SideCrossIterator &other) const {
    return false;
}

bool SideCrossIterator::operator!=(const SideCrossIterator &other) const {
    return false;
}

SideCrossIterator &SideCrossIterator::operator++() {
    return *this;
}

int SideCrossIterator::operator*() const {
    return 0;
}
