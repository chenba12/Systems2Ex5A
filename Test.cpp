#include "doctest.h"
#include "sources/MagicalContainer.h"

TEST_CASE("Test initial state of MagicalContainer") {
    MagicalContainer container;
    CHECK_EQ(container.size(), 0);
    MagicalContainer::AscendingIterator ascIt(container);
    MagicalContainer::PrimeIterator primeIt(container);
    MagicalContainer::SideCrossIterator sideIt(container);
    CHECK(ascIt.begin() == ascIt.end());
    CHECK_FALSE(ascIt.begin() != ascIt.end());
    CHECK(primeIt.begin() == primeIt.end());
    CHECK_FALSE(primeIt.begin() != primeIt.end());
    CHECK(sideIt.begin() == sideIt.end());
    CHECK_FALSE(sideIt.begin() != sideIt.end());
}

TEST_CASE("Test adding a single element to MagicalContainer") {
    MagicalContainer container;
    container.addElement(10);
    CHECK_EQ(container.size(), 1);
    MagicalContainer::AscendingIterator ascIt(container);
    CHECK_EQ(*ascIt.begin(), 10);
    CHECK_FALSE((*ascIt.begin() != 10));
    CHECK_EQ(++ascIt, ascIt.end());
    CHECK_FALSE((++ascIt != ascIt.end()));
}

TEST_CASE("Test adding multiple elements to MagicalContainer") {
    MagicalContainer container;
    container.addElement(10);
    container.addElement(20);
    container.addElement(30);
    CHECK_EQ(container.size(), 3);
}

TEST_CASE("Test removing an element from MagicalContainer") {
    MagicalContainer container;
    container.addElement(10);
    container.addElement(20);
    container.addElement(30);
    CHECK_EQ(container.size(), 3);
    container.removeElement(20);
    CHECK_EQ(container.size(), 2);
    CHECK_NE(container.size(), 3);
}

TEST_CASE("Test removing a non-existing element from MagicalContainer") {
    MagicalContainer container;
    container.addElement(10);
    container.addElement(20);
    container.addElement(30);
    container.removeElement(40);
    CHECK_EQ(container.size(), 3);
}

TEST_CASE("Test adding and removing elements to/from MagicalContainer") {
    MagicalContainer container;
    container.addElement(10);
    container.addElement(20);
    container.addElement(30);
    container.removeElement(20);
    container.addElement(40);
    CHECK_EQ(container.size(), 3);
}

TEST_CASE("Test AscendingIterator with multiple elements") {
    MagicalContainer container;
    container.addElement(10);
    container.addElement(5);
    container.addElement(15);

    MagicalContainer::AscendingIterator iterator(container);
    CHECK_EQ(*iterator.begin(), 5);
    CHECK_FALSE((*iterator.begin() != 5));
    CHECK_EQ(*(++iterator), 10);
    CHECK_FALSE((*(++iterator) != 10));
    CHECK_EQ(*(++iterator), 15);
    CHECK_FALSE((*(++iterator) != 15));
    CHECK_EQ(++iterator, iterator.end());
    CHECK_FALSE((++iterator != iterator.end()));
}

TEST_CASE("Test SideCrossIterator with multiple elements") {
    MagicalContainer container;
    container.addElement(10);
    container.addElement(5);
    container.addElement(15);

    MagicalContainer::SideCrossIterator iterator(container);
    CHECK_EQ(*iterator.begin(), 5);
    CHECK_FALSE((*iterator.begin() != 5));
    CHECK_EQ(*(++iterator), 15);
    CHECK_FALSE((*(++iterator) != 15));
    CHECK_EQ(*(++iterator), 10);
    CHECK_FALSE((*(++iterator) != 10));
    CHECK_EQ(++iterator, iterator.end());
    CHECK_FALSE((++iterator != iterator.end()));
}

TEST_CASE("Test PrimeIterator with multiple elements") {
    MagicalContainer container;
    container.addElement(10);
    container.addElement(5);
    container.addElement(15);
    container.addElement(2);
    container.addElement(17);

    MagicalContainer::PrimeIterator iterator(container);
    CHECK_EQ(*iterator.begin(), 2);
    CHECK_FALSE((*iterator.begin() != 2));
    CHECK_EQ(*(++iterator), 5);
    CHECK_FALSE((*(++iterator) != 5));
    CHECK_EQ(*(++iterator), 17);
    CHECK_FALSE((*(++iterator) != 17));
    ++iterator;
    CHECK_EQ(iterator, iterator.end());
    CHECK_FALSE((iterator != iterator.end()));
}

TEST_CASE("Test iterators with no elements in container") {
    MagicalContainer container;

    MagicalContainer::AscendingIterator ascIt(container);
    CHECK(ascIt.begin() == ascIt.end());
    CHECK_FALSE(ascIt.begin() != ascIt.end());

    MagicalContainer::SideCrossIterator sideIt(container);
    CHECK(sideIt.begin() == sideIt.end());
    CHECK_FALSE(sideIt.begin() != sideIt.end());

    MagicalContainer::PrimeIterator primeIt(container);
    CHECK(primeIt.begin() == primeIt.end());
    CHECK_FALSE(primeIt.begin() != primeIt.end());
}

TEST_CASE("Test comparison operators for AscendingIterator") {
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(5);
    container.addElement(4);
    container.addElement(14);

    MagicalContainer::AscendingIterator it1(container);
    MagicalContainer::AscendingIterator it2(container);

    ++it2; // Points to 2
    ++it2; // Points to 4
    CHECK_GT(it2, it1); // 4 > 1
    CHECK_LT(it1, it2); // 1 < 4

    ++it2; // Points to 5
    CHECK_GT(it2, it1); // 5 > 1
    CHECK_LT(it1, it2); // 1 < 5

    ++it2; // Points to 14
    CHECK_GT(it2, it1); // 14 > 1
    CHECK_LT(it1, it2); // 1 < 14
}

TEST_CASE("Test comparison operators for PrimeIterator") {
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(5);
    container.addElement(4);
    container.addElement(14);

    MagicalContainer::PrimeIterator it1(container);
    MagicalContainer::PrimeIterator it2(container);

    ++it2; // Points to 5
    CHECK_GT(it2, it1); // 5 > 2
    CHECK_LT(it1, it2); // 2 < 5
}

TEST_CASE("Test comparison operators for SideCrossIterator") {
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(5);
    container.addElement(4);
    container.addElement(14);

    MagicalContainer::SideCrossIterator it1(container);
    MagicalContainer::SideCrossIterator it2(container);

    ++it2; // Points to 14
    ++it2; // Points to 2
    CHECK_LT(it2, it1); // 2 < 1

    ++it2; // Points to 5
    CHECK_GT(it2, it1); // 5 > 1
    CHECK_LT(it1, it2); // 1 < 5

    ++it2; // Points to 4
    CHECK_LT(it2, it1); // 4 < 14
}

TEST_CASE("Test iterator after adding new elements") {
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);

    MagicalContainer::AscendingIterator it(container);
    CHECK_EQ(*it.begin(), 1);
    CHECK_FALSE((*it.begin() != 1));
    CHECK_EQ(*(++it), 2);
    CHECK_FALSE((*(++it) != 2));

    container.addElement(0);
    CHECK_EQ(*it.begin(), 0);
    CHECK_FALSE((*it.begin() != 0));
}

TEST_CASE("Test iterator after removing elements") {
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);

    MagicalContainer::AscendingIterator it(container);
    CHECK_EQ(*it.begin(), 1);
    CHECK_FALSE((*it.begin() != 1));

    container.removeElement(1);
    CHECK_EQ(*it.begin(), 2);
    CHECK_FALSE((*it.begin() != 2));
}

TEST_CASE("Test iterator with repeated elements") {
    MagicalContainer container;
    container.addElement(1);
    container.addElement(1);
    container.addElement(1);

    MagicalContainer::AscendingIterator it(container);
    CHECK_EQ(*it.begin(), 1);
    CHECK_FALSE((*it.begin() != 1));
    CHECK_EQ(*(++it), 1);
    CHECK_FALSE((*(++it) != 1));
    CHECK_EQ(*(++it), 1);
    CHECK_FALSE((*(++it) != 1));
    CHECK_EQ(++it, it.end());
    CHECK_FALSE((++it != it.end()));
}