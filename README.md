AtCoder Begineers Selection (C++ version)
=========================================

### C++ Environment Setup
- install WSL as Ubuntu 1804 
  - `sudo apt install build-essential`
  - install latest cmake (>= 3.14) with https://stackoverflow.com/questions/49859457/how-to-reinstall-the-latest-cmake-version
- set up Visual Studio Code
  - Remote - WSL extension https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-wsl  
  - Cmake Tools exntension https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools
  - CMake extension https://marketplace.visualstudio.com/items?itemName=twxs.cmake
  - Test Explorer UI https://marketplace.visualstudio.com/items?itemName=hbenl.vscode-test-explorer
  - Catch2, Google Test and DOCtest Explorer https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter

- place following `tasks.json` to `.vscode` directory

```json
{
    // See https://go.microsoft.com/fwlink/?LinkId=733558
    // for the documentation about the tasks.json format
    "version": "2.0.0",
    "tasks": [
        {
            "type": "shell",
            "label": "g++ build active file",
            "command": "/usr/bin/g++",
            "args": [
                "-g",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}",
                "-lstdc++fs"
            ],
            "options": {
                "cwd": "/usr/bin"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": "build"
        },
        {
            "label": "cmake build",
            "type" : "shell",
            "options": {
                "cwd": "${workspaceRoot}/build"
            },
            "command": "/usr/bin/cmake",
            "args": [
                "--build",
                "${workspaceRoot}/build",
                "--config",
                "Debug",
                "--target",
                "all",
                "--",
                "-j"
            ],
            "problemMatcher": [
                "$gcc"
            ],
            "group": "build",
            "presentation": {
                "reveal": "silent"
            }
        }
    ]
}
```

- place following `launch.json` to `.vscode` directory

```json
{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "cmake build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/build/${fileBasenameNoExtension}",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "cmake build",
            "miDebuggerPath": "/usr/bin/gdb"
        }
    ]
}
```

- place following `c_cpp_properties.json` to `.vscode` directory

```json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "c11",
            "cppStandard": "c++17",
            "intelliSenseMode": "clang-x64",
            "compileCommands": "${workspaceFolder}/build/compile_commands.json",
            "configurationProvider": "vector-of-bool.cmake-tools"
        }
    ],
    "version": 4
}
```

- add following settings to `.vscode/settings.json`

```json
    "catch2TestExplorer.executables": [
        {
            "pattern": "build/**/*{test,Test,TEST,tst}*",
            "cwd": "${absDirpath}",
        }
    ],
```