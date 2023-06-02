#include "MagicalContainer.hpp"

using namespace ariel;

void MagicalContainer::addElement(int element) {
    primeContainer.push_back(element);
}

void MagicalContainer::removeElement(int element) {

}

size_t MagicalContainer::size() const {
    return primeContainer.size();
}

// AscendingIterator
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) {

}

MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) {

}

MagicalContainer::AscendingIterator::~AscendingIterator() = default;

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other) {

    return *this;
}


MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++() {

    return *this;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() {

    return *this;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() {

    return *this;
}

MagicalContainer::AscendingIterator::AscendingIterator() {

}

// SideCrossIterator
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) {

}

MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) {

}

MagicalContainer::SideCrossIterator::~SideCrossIterator() = default;

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other) {

    return *this;
}


MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++() {

    return *this;
}


MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() {

    return *this;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() {

    return *this;
}

MagicalContainer::SideCrossIterator::SideCrossIterator() {

}

// PrimeIterator
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) {

}

MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) {

}

MagicalContainer::PrimeIterator::~PrimeIterator() = default;

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other) {

    return *this;
}


MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++() {

    return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() {

    return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() {

    return *this;
}

MagicalContainer::PrimeIterator::PrimeIterator() {

}

bool MagicalContainer::BaseIterator::operator>(const MagicalContainer::BaseIterator &other) const {
    return false;
}

bool MagicalContainer::BaseIterator::operator<(const MagicalContainer::BaseIterator &other) const {
    return false;
}

bool MagicalContainer::BaseIterator::operator==(const MagicalContainer::BaseIterator &other) const {
    return false;
}

bool MagicalContainer::BaseIterator::operator!=(const MagicalContainer::BaseIterator &other) const {
    return false;
}

int MagicalContainer::BaseIterator::operator*() {
    return 0;
}
