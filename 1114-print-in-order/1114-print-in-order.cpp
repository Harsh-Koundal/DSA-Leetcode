#include <atomic>

class Foo {
private:
    atomic<int> step;

public:
    Foo() {
        step = 1;
    }

    void first(function<void()> printFirst) {
        printFirst();
        step = 2;
    }

    void second(function<void()> printSecond) {
        while(step < 2);

        printSecond();

        step = 3;
    }

    void third(function<void()> printThird) {
        while(step < 3);

        printThird();
    }
};