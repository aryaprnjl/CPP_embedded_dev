# Embedded development using C++
Embedded development using C++.

Commands:
- **Clean project**:`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh clean
- **Build project**:`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh build `APP`
- **Flash project**:`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh flash `APP`
- **Erase project from STM32L476RG**:`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh erase
- **Debug project using GDB**:`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh debug `APP`
- **Dissassemble** :`<PATH OF PROJECT'S ROOT FOLDER>`/build_scripts/build.sh disass `APP` `FUNCTION`

_Note:_
- _`APP` can be selected from cpp_applications directory. e.g. random_num_gen_
- _`FUNCTION` can be any function in the project. e.g. main_

Documents related to STM32L476RG:

- https://www.st.com/resource/en/datasheet/stm32l476je.pdf
- https://www.st.com/resource/en/reference_manual/rm0351-stm32l47xxx-stm32l48xxx-stm32l49xxx-and-stm32l4axxx-advanced-armbased-32bit-mcus-stmicroelectronics.pdf
- https://www.st.com/resource/en/user_manual/um1724-stm32-nucleo64-boards-mb1136-stmicroelectronics.pdf
