#ifndef SIDECROSSITERATOR_HPP
#define SIDECROSSITERATOR_HPP

#include "MagicalContainer.h"
#include <iterator>

class SideCrossIterator : public std::iterator<std::input_iterator_tag, int> {
public:
    SideCrossIterator();

    SideCrossIterator(const MagicalContainer &container, int position);

    bool operator==(const SideCrossIterator &other) const;

    bool operator!=(const SideCrossIterator &other) const;

    SideCrossIterator &operator++();

    int operator*() const;

private:
    const MagicalContainer *container;
    int position;
    int increment;
};

#endif // SIDECROSSITERATOR_HPP
