#include "circulararray.h"
#include <stack>
template <typename T>
class StackArray : public CircularArray<T> {
private:
    stack<T>st;
public:
    StackArray();
    void push_front(T data);
    T pop_front();
};

template<typename T>
void StackArray<T>::push_front(T data) {
    st.push(data);
}

template<typename T>
T StackArray<T>::pop_front() {
    T temp= st.top()
    st.pop();
    return temp;
}

template<typename T>
StackArray<T>::StackArray() = default;