# c-programming

My notes and practice programs for learning C. Each folder covers one topic, and the
numbers give the order to study them in. Comments in each program explain the concepts.

## Topics

| Folder | What it covers |
| --- | --- |
| [01_basic_print_commands](01_basic_print_commands/) | Program structure, `printf`, `\n`, drawing shapes with text |
| [02_comments](02_comments/) | Single-line and multi-line comments |
| [03_format_specifiers](03_format_specifiers/) | `%d`, `%f`, and precision such as `%.1f` |
| [04_basic_calculations](04_basic_calculations/) | Arithmetic operators, integer division, remainder |

## Compile and run

Run a program with the Code Runner extension in VS Code, or from the terminal:

```sh
cd 01_basic_print_commands
gcc 01_hello_world.c -o 01_hello_world
./01_hello_world
```

The compiled program is created next to its source file, with the same name and no
extension. Git ignores these files.
