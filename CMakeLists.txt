cmake_minimum_required(VERSION 3.15)
project(DataStructures)

set(CMAKE_CXX_STANDARD 20)

add_executable(DataStructures main.cpp)
add_executable(pointers Pointers/pointers.cpp)
add_executable(classes Classes/classes.cpp Classes/rectangle.cpp Classes/rectangle.h)


add_executable(stacks Stacks/stacks.cpp Stacks/StackArr.cpp Stacks/StackArr.h)

add_executable(queues Queues/queues.cpp Queues/QueueArr.cpp Queues/QueueArr.h)
add_executable(arrayLists ArrayLists/arrayLists.cpp ArrayLists/ArrList.cpp ArrayLists/ArrList.h)
add_executable(linkedLists LinkedLists/linkedLists.cpp LinkedLists/LinkedList.cpp LinkedLists/LinkedList.h)
add_executable(binarySearchTrees BinarySearchTrees/binarySearchTrees.cpp BinarySearchTrees/BSTree.cpp BinarySearchTrees/BSTree.h)
add_executable(linkedStacks LinkedStacks/linkedStacks.cpp LinkedStacks/LinkedStack.cpp LinkedStacks/LinkedStack.h)