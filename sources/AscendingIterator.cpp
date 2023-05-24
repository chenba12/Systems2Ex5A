#include "AscendingIterator.hpp"

AscendingIterator::AscendingIterator() {

}

AscendingIterator::AscendingIterator(const MagicalContainer &container, int position) {

}

bool AscendingIterator::operator==(const AscendingIterator &other) const {
    return false;
}

bool AscendingIterator::operator!=(const AscendingIterator &other) const {
    return false;
}

AscendingIterator &AscendingIterator::operator++() {
    return *this;
}

int AscendingIterator::operator*() const {
    return 0;
}
