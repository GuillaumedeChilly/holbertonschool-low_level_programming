# Hello, World

Scripts and simple C programs:

- `0-preprocessor`: run `$CFILE` through the preprocessor, save to `c`.
- `1-compiler`: compile `$CFILE` to object (no link), `<name>.o`.
- `2-assembler`: generate assembly for `$CFILE`, `<name>.s`.
- `3-name`: compile `$CFILE` into executable `cisfun`.
- `4-puts.c`: prints `"Programming is like building a multilingual puzzle`.
- `5-printf.c`: prints `with proper grammar, but the outcome is a piece of art,`.
- `6-size.c`: prints sizes of basic types on this computer.

All C files compile cleanly with:
`gcc -Wall -Wextra -Werror -pedantic -std=gnu89`.
