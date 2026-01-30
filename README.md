IHA Linked List
A C++ implementation of a Linked List data structure, built using CMake, GCC, and Make.

Build & Run
Using Make:
```bash
cmake -G "MinGW Makefiles" -S . -B build

Using GCC:
```bash
g++ -I./lib ./lib/LinkedList.cpp ./src/main.cpp -o ./bin/IHALinkedList.exe

Running:
```bash
./bin/IHALinkedList.exe