#include <vector>

template<typename T> class MultiHeap {
private:
    struct Node {
        T *val;
        std::vector<size_t> indicies;
    };
    std::vector<Node*> ptrs;
    std::vector<std::vector<size_t> > heaps;
    std::vector<bool (*)(const T&, const T&)> comps;
public:
    // MultiHeap();
    // ~MultiHeap();
    // const MultiHeap<T>& operator=(const MultiHeap<T>& other);
    // const T& top() const;
    // bool empty_data() const;
    // bool empty_functions() const;
    // size_t size_data() const;
    // size_t size_function() const;
    // void push_data(const T& val);
    // void push_function(const (*bool)(const T&, const T&)& f);
    // void pop_data();
    // void pop_function();
    // void swap(MultiHeap<T>& other);
};