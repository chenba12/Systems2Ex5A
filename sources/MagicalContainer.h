#ifndef MAGICALCONTAINER_HPP
#define MAGICALCONTAINER_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include "BaseIterator.hpp"

class MagicalContainer {
private:
    std::vector<int> elements;

public:
    void addElement(int element);

    void removeElement(int element);

    size_t size() const;

    class AscendingIterator {
    private:
        std::vector<int>::iterator it;
        MagicalContainer &container;
    public:
        explicit AscendingIterator(MagicalContainer &container);

        AscendingIterator(const AscendingIterator &other);

        ~AscendingIterator();

        AscendingIterator &operator=(const AscendingIterator &other);

        bool operator>(const AscendingIterator &other) const;

        bool operator<(const AscendingIterator &other) const;

        bool operator==(const AscendingIterator &other) const;

        AscendingIterator &operator++();

        bool operator!=(const AscendingIterator &other) const;

        int operator*();

        AscendingIterator begin();

        AscendingIterator end();
    };

    class SideCrossIterator {
    private:
        std::vector<int>::iterator it;
        MagicalContainer &container;
    public:
        explicit SideCrossIterator(MagicalContainer &container);

        SideCrossIterator(const SideCrossIterator &other);

        ~SideCrossIterator();

        SideCrossIterator &operator=(const SideCrossIterator &other);

        bool operator>(const SideCrossIterator &other) const;

        bool operator<(const SideCrossIterator &other) const;

        bool operator==(const SideCrossIterator &other) const;

        SideCrossIterator &operator++();

        bool operator!=(const SideCrossIterator &other) const;


        int operator*();

        SideCrossIterator begin();

        SideCrossIterator end();
    };

    class PrimeIterator {
    private:
        std::vector<int>::iterator it;
        MagicalContainer &container;
    public:
        explicit PrimeIterator(MagicalContainer &container);

        PrimeIterator(const PrimeIterator &other);

        ~PrimeIterator();

        PrimeIterator &operator=(const PrimeIterator &other);

        bool operator>(const PrimeIterator &other) const;

        bool operator<(const PrimeIterator &other) const;

        bool operator==(const PrimeIterator &other) const;

        PrimeIterator &operator++();

        bool operator!=(const PrimeIterator &other) const;

        int operator*();

        PrimeIterator begin();

        PrimeIterator end();
    };
};

#endif
