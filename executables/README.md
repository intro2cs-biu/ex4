# EX4 reference executables

Download the executable for your platform (use **Download raw file** on GitHub).

| Platform | Executable |
| --- | --- |
| Linux (Intel/AMD 64-bit) | [linux/ex4](linux/ex4) |
| macOS on Apple silicon (macOS 11+) | [macos/ex4](macos/ex4) |
| macOS on Intel (macOS 10.13+) | [macos-intel/ex4](macos-intel/ex4) |
| Windows (Intel/AMD 64-bit, Windows 10+) | [windows/ex4.exe](windows/ex4.exe) |

These executables implement all four tasks in the reference solution. The root
`ex4.c` remains the starter file for students to complete.

On Linux/macOS, open a terminal in the download directory and run:

```sh
chmod +x ex4
./ex4
```

On Windows, run `ex4.exe` from a terminal. To use an input file:

```bat
ex4.exe < input.txt
```

The Linux executable is statically linked. The macOS executables are not notarized.
The Windows executable requires only Windows system libraries.
SHA-256 checksums are in `SHA256SUMS`.
