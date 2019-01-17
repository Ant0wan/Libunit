# Libunit [![42](https://i.imgur.com/9NXfcit.jpg)](i.imgur.com/9NXfcit.jpg)

Libunit is a C Programming Language Micro-framework dedicated to unit testings.
The framework is able to execute series of tests on C functions - one after the other - without interruption.

---

## Description

Libunit is a C Programming Language Micro-framework dedicated to testing, in order to test in every possible way your functions written in C. The framework must be able executes a series of tests one after the other without interruption, storing them in a list with a specific name which is written to the standard output. Each test is executed in a separate process. This process will be closed at the end of the test and it will give the hand back to the parent process. It must be able to catch the result of the child process or the type of interruption if it crashes (SegFault and/or BusError).
