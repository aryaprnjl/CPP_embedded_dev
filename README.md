# Embedded development using C++

### Topics covered so far:

| # | Topic |
|---| ----- |
|10| [Destructor](./cpp_applications/destructor/app.cpp)|
|9| [Copy constructor](./cpp_applications/copy_constructor/app.cpp)|
|8| [Constructor](./cpp_applications/constructor/app.cpp)|
|7| [Static variables and functions](./cpp_applications/static_var_func/app.cpp)|
|6| [Class and operations related to it](./cpp_applications/class/app.cpp)|
|5| [Structures](./cpp_applications/structure/app.cpp)|
|4| [Function overloading](./cpp_applications/func_overloading/app.cpp)|
|3| [Default argument](./cpp_applications/default_arg/app.cpp)|
|2| [Reference variable](./cpp_applications/ref_var/app.cpp)|
|1| [Random number generation](./cpp_applications/random_num_gen/app.cpp)|

Commands:
- **Clean project**:`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh clean
- **Build project**:`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh build `APP`
- **Flash project**:`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh flash `APP`
- **Erase project from STM32L476RG**:`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh erase
- **Debug project using GDB**:`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh debug `APP`
- **Dissassemble** :`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh disass `APP` `FUNCTION`

_Note:_
- _`APP` can be selected from cpp_applications directory. e.g. `random_num_gen`_
- _`FUNCTION` can be any function in the project. e.g. `main`_

Documents related to STM32L476RG:

- https://www.st.com/resource/en/datasheet/stm32l476je.pdf
- https://www.st.com/resource/en/reference_manual/rm0351-stm32l47xxx-stm32l48xxx-stm32l49xxx-and-stm32l4axxx-advanced-armbased-32bit-mcus-stmicroelectronics.pdf
- https://www.st.com/resource/en/user_manual/um1724-stm32-nucleo64-boards-mb1136-stmicroelectronics.pdf
