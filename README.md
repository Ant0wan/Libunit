# Libunit [![42](https://i.imgur.com/9NXfcit.jpg)](i.imgur.com/9NXfcit.jpg)

Libunit is a C Programming Language Micro-framework dedicated to unit testings.
The framework is able to execute series of tests on C functions - one after the other - without interruption.

---

## Description

- The framework stores tests in a list with a specific name which is written to the standard output.
- Each test is executed in a separate process.
- Each process is closed at the end of the test and gives the hand back to the parent process.
- It catches the result of the child process and the type of interruption if it crashes (e.g. SegFault or BusError).

At the end of the tests execution, the name of the tested function is written as well as the name of each test with its corresponding results (stdout).

It follows the format:

* OK   : Test succeeded.
* KO   : Test failed.
* SEGV : Segmentation Fault detected.
* BUSE : Bus Error detected.

Output sample:


The total number of tests and the count of succeeded tests are displayed.
In the case of a success, the routine exists returning zero (0).
If at least one of the tests fails, the routine returns minus one (-1).
Only the result of each test are written on the standard output.
