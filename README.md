AtCoder Begineers Selection (C++ version)
=========================================

### C++ Environment Setup
- install WSL as Ubuntu 1804 
  - `sudo apt install build-essential`
  - `sudo apt install cmake`
- set up Visual Studio Code
  - Remote - WSL extension https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-wsl  
  - Cmake Tools exntension https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools
  - CMake extension https://marketplace.visualstudio.com/items?itemName=twxs.cmake

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