#ifndef PRIMEITERATOR_HPP
#define PRIMEITERATOR_HPP

#include "MagicalContainer.h"
#include <iterator>

class PrimeIterator : public std::iterator<std::input_iterator_tag, int> {
public:
    PrimeIterator();

    PrimeIterator(const MagicalContainer &container, int position);

    bool operator==(const PrimeIterator &other) const;

    bool operator!=(const PrimeIterator &other) const;

    PrimeIterator &operator++();

    int operator*() const;

private:
    const MagicalContainer *container;
    int position;

    bool isPrime(int number) const;
};

#endif // PRIMEITERATOR_HPP
