#ifndef MAGICALCONTAINER_HPP
#define MAGICALCONTAINER_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

namespace ariel {

    class MagicalContainer {
    private:
        std::vector<int> primeContainer;
        std::vector<int> ascendingContainer;
        std::vector<int> sideCrossContainer;

    public:
        void addElement(int element);

        void removeElement(int element);

        size_t size() const;

        class BaseIterator {
        private:
            int *index;
        public:
            bool operator>(const BaseIterator &other) const;

            bool operator<(const BaseIterator &other) const;

            bool operator==(const BaseIterator &other) const;

            bool operator!=(const BaseIterator &other) const;

            int operator*();
        };

        class AscendingIterator : public BaseIterator {

        public:
            explicit AscendingIterator(MagicalContainer &container);

            AscendingIterator(const AscendingIterator &other);

            AscendingIterator();

            ~AscendingIterator();

            AscendingIterator &operator=(const AscendingIterator &other);

            AscendingIterator &operator++();

            AscendingIterator begin();

            AscendingIterator end();
        };

        class SideCrossIterator : public BaseIterator {
        public:
            explicit SideCrossIterator(MagicalContainer &container);

            SideCrossIterator();

            SideCrossIterator(const SideCrossIterator &other);

            ~SideCrossIterator();

            SideCrossIterator &operator=(const SideCrossIterator &other);

            SideCrossIterator &operator++();

            SideCrossIterator begin();

            SideCrossIterator end();
        };

        class PrimeIterator : public BaseIterator {
        public:
            explicit PrimeIterator(MagicalContainer &container);

            PrimeIterator();

            PrimeIterator(const PrimeIterator &other);

            ~PrimeIterator();

            PrimeIterator &operator=(const PrimeIterator &other);

            PrimeIterator &operator++();

            PrimeIterator begin();

            PrimeIterator end();
        };
    };
}

#endif
