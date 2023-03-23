# CLion Project for OOP with WSL 2 and Google Test Framework

## Advantages
- Optimized directory structure with ```src``` and ```include``` directories
- Unit tests with Google Test Framework
- Run configurations for building, testing and debugging
- No "junk" files in the ```main``` directory

## Requirements
- WSL 2 with Ubuntu 20 or higher installed
- Required packages for OOP installed, if unsure run:\
```sudo apt-get update && sudo apt-get install -y gcc g++ make cmake clang-11 libasan6 valgrind gdb git lldb```
- CLion installed (v2023.1 or newer)

## Usage
1) Clone this repo
2) Clone the OOP-repository into the ```git-project``` directory
3) Open the project in CLion and reload the CMake project
4) Run the ```update-data``` run configuration to copy the testrunner-data 
5) Start coding in the ```main``` directory

When creating new files, make sure to add them to the ```oop-src```(don't add them to ```oop-main```) target in the ```CMakeLists.txt``` file.
 
Before committing and pushing own changes, run the ```prepare-commit``` run configuration to sync your changes with the git-project.

If necessary, adjust the name of the outputted binary in the ```CMakeLists.txt``` file.

## Available Run Configurations

| Name              | Description                                                              |
|-------------------|--------------------------------------------------------------------------|
| ```run```         | Compiles and executes the binary                                         |
| ```unit-test```   | Compiles the programm and runs the unit tests (Google Test Framework)    |
| ```oop-test```    | Compiles the programm and starts the OOP-testrunner                      |
| ```update-data``` | Updates the data for the testrunner from the ```git-project``` directory |
| ```prepare-commit``` | Syncs all the changes in the ```main``` directory with the ```git-project``` directory       |

Please make sure that the default terminal is set to WSL in the CLion settings\
(Settings -> Tools -> Terminal; Shell path: ```C:\Windows\System32\wsl.exe```)

## Important notice
This project was created by a student and is not officially supported by the lecturers. 
Please dont ask any questions on official platforms of the OOP course.

### Use the GitHub issues for support!

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details

### What is OOP?

OOP is the Object-oriented-programming course at the University of Technology Graz.