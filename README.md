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

- place following `launch.json` to `.vscode` directory

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(gdb) Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "${command:cmake.launchTargetPath}",
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
            ]
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
            "compileCommands": "${workspaceFolder}/build/compile_commands.json"
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