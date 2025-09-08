#include <cassert>

#include "testing.hpp"

// Test that always passes
bool dummy_test() {
    return true;
}

// Run all tests
void run_tests() {
    assert(dummy_test());
}
