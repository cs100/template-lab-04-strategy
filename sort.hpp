#ifndef __SORT_HPP__
#define __SORT_HPP__

class Container;

class Sort {
    public:
        /* Constructors */
        virtual ~Sort() {}

        /* Pure Virtual Functions */
        virtual void sort(Container* container) = 0;
};

#endif //__SORT_HPP__
