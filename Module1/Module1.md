## C++ beginner class

```bash
$ cmake --version
$ git --version
$ g++ --version
```

Make sure they are all present.

Had to reinstall g++, but now we are good to go.

## Terminal navigation
```bash
$ pwd 		// shows present working directory
$ ls 			// list folder
$ cd <dest>    // change directories
$ cd ..  		// go back to parent directory
$ rm <name>	// remove folders
$ mkdir <name> // create a folder/directory

# System
$ ./<executable name>.out     // run the .out file created
$ ../<executable name>.out     // run the .out file in the parent directory
```

## git in vscode

1. click plus to “stage” changes
```bash
$ git add <file name>
# to see the status
$ git status
```
2. add a comment where it says “Message”
```bash
$ git commit -m “<comment>”
```
3. click check mark
4. in options click “push”
```bash
$ git push
```

## g++ compiler
```bash
# navigate to working directory
$ g++ <file name>
$ ./<executeable files>
```

```cpp
#include <iostream>
using namespace std;

int main(){

	return 0;
}
```

## Doxygen documentation
```cpp
// Add Code Spell Extension
// Add the plugin to VSCode

// Run /** and <Enter>
```

## CMake
To build a project we need all the rules to be set under `CMakeLists.txt` file.
- Create a build folder: `$ mkdir build`
- Go to the build dir: `$ cd build` 
- Run cmake: `$ cmake ..` the `..` is becuase your CMakeLists.txt is one folder up. This command only has to be executed agian if you change the CMakeLists.txt.
- Build or compile your code: `$ cmake --build .` The `.` means to build it in pwd.