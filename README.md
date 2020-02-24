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
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
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