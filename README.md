# Libunit [![42](https://i.imgur.com/9NXfcit.jpg)](i.imgur.com/9NXfcit.jpg)

Libunit is a C Programming Language Micro-framework dedicated to unit testings.
The framework is able to execute series of tests on C functions - one after the other - without interruption.

---

## Description

- The framework stores tests in a list with a specific name which is written to the standard output.
- Each test is executed in a separate process.
- Each process is closed at the end of the test and gives the hand back to the parent process.
- It catches the result of the child process and the type of interruption if it crashes (e.g. SegFault or BusError).

The compiled library is named libunit.a

The project contains a makefile with usual rules (make, clean, fclean, re).

It contains the authorized functions:
```shell=
malloc
free
exit
fork
wait
write
```

and the macros (#define) from libraries:
```shell=
<sys/wait.h>
<signal.h>
```

### The Micro-framework

- At the end of the tests execution, the name of the tested function is written as well as the name of each test with its corresponding results (stdout).

It follows the format:

| Signal | Description |
| --- | --- |
| **OK** | Test succeeded |
| **KO** | Test failed |
| **SEGV** | Segmentation Fault detected |
| **BUSE** | Bus Error detected |

- The total number of tests and the count of succeeded tests are displayed.

- In the case of a success, the routine exists returning zero (0).

- If any of the tests fails, the routine returns minus one (-1).

- Only the result of each test is displayed.

Screenshot:

[![Libunitscreenshot](https://i.imgur.com/h67sm9Z.png)](i.imgur.com/h67sm9Z.png)

### Test routines

The testing routines follow the specifications below:

- each routine must be placed in a folder tests/[function_to_test]

- each test is encapsulated in a function which follows the prototype:

```C=
int test_function(void)
{
	if (/* test succeed */)
		return (0);
	else
		return (-1);
}
```

- tests does not write on standard output

- for each function, the corresponding tests are grouped in the same folder, with a specific source file called "Launcher"

- the Launcher is used to load and run all the test to the choosen function

- only one function per file

- each name of test file begins with a number followed by an underscore. It defines the run order 

Example:
```shell=
04_basic_test_four_a.c
```

- file with a name starting by ```00_xxx``` will always be considered as the "Launcher"

- the main containing the tests is located in the root folder

- the main calls all the Launchers

- the Makefile associated with the program contains an additional dependency called ```test```

- the ```test``` dependency compiles the program with the test files and run its binary file

- the source code of the micro-framework in located in the folder named "framework"

- each routine has its own makefile including ```test``` dependency

---

## Usage

- Clone repository

```shell=
git clone https://github.com/Ant0wan/Libunit.git
```

- Copy your work in the "rendu" repository

```shell=
cp -f [mywork_repository] Libunit/rendu/
```

- Compile and Run tests

```shell=
make -C [tests_directory] test
```

- Check output !

### Demo

[![Libunitdemo](https://i.imgur.com/4IV7ijk.gif)](i.imgur.com/4IV7ijk.gif)
