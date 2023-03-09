# CLion Project for OOP with Google Test configured
## Requirements
### on Windows using WSL2
- WSL 2 enabled
- Ubuntu 20 or higher installed (in WSL)
### all platforms
- All required programs installed in Ubuntu\
If unsure, run ```sudo apt-get update``` and then\
```sudo apt-get install -y gcc g++ make cmake clang-11 libasan6 valgrind gdb git lldb```
- CLion installed (v2022 or newer)

## Usage
1) Clone this repo
2) Clone the OOP-repository into the ```src``` directory
3) Open the root directory in CLion
4) Reload cmake
5) Start coding

There should be the following three run configurations already configured:
- **unit-test**: runs the google test unit test which are placed in the ```tests``` directory
- **oop-test**: runs the official tests from the OOP course
- **run**: runs your code using the official makefile

## Important notice
This project was created by a student and is not officially supported by the lecturers. 
Please dont ask any questions on official platforms of the OOP course.

### Use the issues for support!