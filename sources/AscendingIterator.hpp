#ifndef ASCENDINGITERATOR_HPP
#define ASCENDINGITERATOR_HPP

#include "MagicalContainer.h"
#include <iterator>

class AscendingIterator : public std::iterator<std::input_iterator_tag, int> {
public:
    AscendingIterator();

    AscendingIterator(const MagicalContainer &container, int position);

    bool operator==(const AscendingIterator &other) const;

    bool operator!=(const AscendingIterator &other) const;

    AscendingIterator &operator++();

    int operator*() const;

private:
    const MagicalContainer *container;
    int position;
};

#endif // ASCENDINGITERATOR_HPP
