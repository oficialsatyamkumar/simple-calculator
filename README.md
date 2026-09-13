# C Command-Line Calculator

A feature-rich command-line interface (CLI) calculator built in **C**. It supports basic arithmetic, exponentiation, integer division, and root operations.

## Features

- **Addition (`+`)**
- **Subtraction (`-`)**
- **Multiplication (`*`)**
- **Division (`/`)**
- **Power (`**` / `^`)**
- **Integer Division (`//`)**
- **Square Root (`sqrt`)**
- **Cube (`x³`)**
- **Cube Root (`cbrt`)**

## Prerequisites

- GCC compiler (or any C standard compliant compiler)
- Make (optional, for build utility)

## How to Build and Run

### Using Makefile (Recommended)

```bash
# Build the application
make

# Run the calculator
./calculator

# Clean built binaries
make clean
```

### Manual Compilation

```bash
gcc main.c -o calculator -lm
./calculator
```

> **Note**: The `-lm` flag is required on Linux/GCC to link the math library (`math.h`).

## License

This project is open-source and available under the [MIT License](LICENSE).
