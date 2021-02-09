#ifndef DynArray
#define DynArray

// Purpose: Dynamic Array implementation
template <typename Type>
class DynArray {
private:
public:
    Type get(int i);
    void set(int i, Type value);
    void pushBack(Type value);
    bool remove(int i);
}

#endif