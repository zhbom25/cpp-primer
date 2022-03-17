#ifndef _STRVEC_H_
#define _STRVEC_H_

#include <string>
#include <vector>
#include <iostream>
#include <memory>

using namespace std;

class StrVec
{
public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
    StrVec(const StrVec&);
    StrVec(StrVec &&s) noexcept : elements(s.elements), first_free(s.first_free), cap(s.cap)
    {
        s.elements = s.first_free = s.cap = nullptr;
    }
    StrVec& operator=(const StrVec&);
    StrVec& operator=(StrVec &&rhs) noexcept;
    ~StrVec();
    void push_back(const std::string&);
    void push_back(std::string&&);
    size_t size() const {return first_free - elements;}
    size_t capacity() const {return cap - elements;}
    std::string *begin() const {return elements;}
    std::string *end() const {return first_free;}
private:
    std::allocator<std::string> alloc;
    void chk_n_alloc() {
        if (size() == capacity())
            mreallocate();
    }
    std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
    void mfree();
    void mreallocate();
    std::string *elements;
    std::string *first_free;
    std::string *cap;
};

#endif

