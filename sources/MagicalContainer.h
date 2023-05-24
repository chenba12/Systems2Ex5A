#ifndef MAGICALCONTAINER_HPP
#define MAGICALCONTAINER_HPP

#include <vector>

class MagicalContainer {
public:
    void addElement(int element);
    void removeElement(int element);
    int getSize() const;

private:
    std::vector<int> elements;
};

#endif // MAGICALCONTAINER_HPP