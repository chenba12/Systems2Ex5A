#include "MagicalContainer.h"

void MagicalContainer::addElement(int element) {
    elements.push_back(element);
}

void MagicalContainer::removeElement(int element) {

}

size_t MagicalContainer::size() const {
    return elements.size();
}

// AscendingIterator
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : container(container) {

}

MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container) {

}

MagicalContainer::AscendingIterator::~AscendingIterator() = default;

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other) {

    return *this;
}

bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const {

    return false;
}

bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const {

    return false;
}

bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const {

    return false;
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++() {

    return *this;
}

bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const {

    return false;
}

int MagicalContainer::AscendingIterator::operator*() {

    return 0;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() {

    return *this;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() {

    return *this;
}

// SideCrossIterator
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : container(container) {

}

MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : container(other.container) {

}

MagicalContainer::SideCrossIterator::~SideCrossIterator() = default;

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other) {

    return *this;
}

bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const {

    return false;
}

bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const {

    return false;
}

bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const {

    return false;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++() {

    return *this;
}

bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const {

    return false;
}

int MagicalContainer::SideCrossIterator::operator*() {

    return 0;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() {

    return *this;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() {

    return *this;
}

// PrimeIterator
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : container(container) {

}

MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) : container(other.container) {

}

MagicalContainer::PrimeIterator::~PrimeIterator() = default;

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other) {

    return *this;
}

bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const {

    return false;
}

bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const {

    return false;
}

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const {

    return false;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++() {

    return *this;
}

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const {

    return false;
}

int MagicalContainer::PrimeIterator::operator*() {

    return 0;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() {

    return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() {

    return *this;
}
