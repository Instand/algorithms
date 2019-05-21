#ifndef TESTS_HPP
#define TESTS_HPP

#include <iostream>

#include <helper/linkedlisttests.hpp>
#include <helper/heaptests.hpp>
#include <helper/priorityqueuetests.hpp>

#include <helper/algorithmstests.hpp>
#include <helper/sortstests.hpp>
#include <helper/taskstests.hpp>

#include <framework.hpp>

namespace cs {
    void testLinkedList() {
        Framework::execute(&cs::LinkedListTests::testPushBack, "Linked list push back test failed");
        Framework::execute(&cs::LinkedListTests::testPushFront, "Linked list push front test failed");
        Framework::execute(&cs::LinkedListTests::testInsert, "Linked list insert at the head failed");
        Framework::execute(&cs::LinkedListTests::testFindAndRemove, "Linked list find and remove failed");
        Framework::execute(&cs::LinkedListTests::testReverse, "Linked list reverse failed");
    }

    void testHeap() {
        Framework::execute(&cs::HeapTests::testHeapCreation, "Heap creation tests failed", 100);
        Framework::execute(&cs::HeapTests::testFixUp, "Fix up tests failed", 10);
        Framework::execute(&cs::HeapTests::testFixDown, "Fix down tests failed", 10);
    }

    void testPriorityQueue() {
        Framework::execute(&cs::PriorityQueueTests::testPush, "Priority queue push test failed");
        Framework::execute(&cs::PriorityQueueTests::testPop, "Priority queue pop test failed");
    }

    void testSorts() {
        Framework::execute(&cs::SortsTests::testBubleSort, "Buble sort failed");
        Framework::execute(&cs::SortsTests::testStupidSort, "Stupid sort failed");
        Framework::execute(&cs::SortsTests::testQuickSort, "Quick sort tests failed");
        Framework::execute(&cs::SortsTests::testSelectionSort, "Selection sort tests failed");
        Framework::execute(&cs::SortsTests::testInsertionSort, "Insertion sort tests failed");
        Framework::execute(&cs::SortsTests::testMergeSort, "Merge sort tests failed");
    }

    void testAlgorithms() {
        Framework::execute(&cs::AlgorithmsTests::testHex, "Hex tests failed");
        Framework::execute(&cs::AlgorithmsTests::testPrime, "Primes tests failed");
        Framework::execute(&cs::AlgorithmsTests::testFactorial, "Factorial tests failed");
        Framework::execute(&cs::AlgorithmsTests::testSwap, "Swap tests failed");
    }

    void testTasks() {
        Framework::execute(&cs::TasksTests::removeEverySecondElement, "Remove every second element tests failed");
        Framework::execute(&cs::TasksTests::mergeTwoOrderedVectors, "Merge two ordered vectors failed");
    }


    class Tests {
    public:
        void run() {
            testLinkedList();
            testHeap();
            testPriorityQueue();
            testSorts();
            testAlgorithms();
            testTasks();

            cs::Console::writeLine("All test cases OK");
        }
    };
}

#endif // TESTS_HPP
