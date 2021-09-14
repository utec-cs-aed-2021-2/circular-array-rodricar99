#include "circulararray.h"
#include <queue>
template <typename T>
class QueueArray : public CircularArray<T> { 
private:
    queue<T>qe;
public:
    QueueArray();
     void push_front(T data);
     void push_back(T data);

     T pop_front();
     T pop_back();
};

template<typename T>
QueueArray<T>::QueueArray() = default;

template<typename T>
void QueueArray<T>::push_front(T data) {
   queue.front(data);
}

template<typename T>
void QueueArray<T>::push_back(T data) {
    queue.push(data);
}

template<typename T>
T QueueArray<T>::pop_front() {
    T temp= qe.top()
    qe.pop();
    return temp;
}

template<typename T>
T QueueArray<T>::pop_back() {
    return CircularArray::pop_back();
}
