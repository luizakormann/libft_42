# libft

Libft is a project from **42 São Paulo** that consists of recreating a standard C library, containing various useful functions for handling strings, memory, linked lists, and other basic operations. This project is one of the pillars of the 42 curriculum, helping to solidify fundamental concepts and best practices.

## 📁 Project Structure
The project is organized as follows:

 - **bin/:** Directory where the `libft.a` (compiled library) file will be generated.
 - **include/:** Contains the header file `libft.h` with all the function declarations and necessary definitions.
 - **obj/:** Directory where object files (`.o`) are stored during compilation.
 - **src/:** Directory containing the source files (`.c`) with the function implementations.

## 📌 Implemented Functions
The library includes functions divided into the following main categories:

| Library | Functions |
|---------|-----------|
|<ctype.h>|`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.|
|<string.h>|`ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_strlcpy`, `ft_strlcat`.|
|<stdlib.h>|`ft_atoi`, `ft_calloc`, `ft_itoa`.|
|<strings.h>|`ft_bzero`|
|unistd.h>|`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.|
|Memory management|`ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.|
|Bonus functions|Linked list operations (`t_list`):|
||- Creation and manipulation: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`.|
||- Advanced operations: `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.|

## ⚙️ Compilation and Usage
### Requirements
 - GCC or another compatible C compiler.
 - UNIX/Linux system recommended (tested in the 42 São Paulo environment).
### Available Commands
Use the `Makefile` to compile and manage the project:

| Command | Description |
|---------|-----------|
|`make`|Compiles the main library (`libft.a`) without bonus functions.|
|`make bonus`|Includes bonus functions in the library. |
|`make clean`|Removes object files (`.o`).|
|`make fclean`|Remmoves obj files and the compiled library (`libft.a`).|
|`make re`|Recompiles everything from scratch.|

### How to Use
 1. Compile the library using `make` or `make bonus`.
 2. Include the `libft.h` header in your project.
 3. Link the `libft.a` library when compiling your program:
``` bash
gcc -Wall -Wextra -Werror -I include/ -L bin/ -lft main.c
```

## 🎓 Key Learnings (author's notes)
This project provided valuable insights into:

 - **Fundamentals of C Standard Library Functions**: Implementing core functions like `strlen`, `strnstr`, and `itoa` deepened my understanding of string manipulation, memory management, and numerical conversions.
 - **Segfault Handling & Defensive Programming**: Adapting `strnstr` to align with Francinette's expected behavior taught me how to anticipate segmentation faults and handle `NULL` pointers properly.
 - **Makefile & Compilation Process**: Creating and refining my `Makefile` to compile `libft.a` helped me gain fluency in automating builds, managing dependencies, and understanding static libraries.
 - **Criterion for Unit Testing**: Integrating the Criterion testing framework allowed me to validate my functions rigorously and reinforced the importance of writing modular and testable code.
 - **Project Structure & Code Organization**: This was my first project where I structured files into `include/`, `bin/`, and other standard directories, improving maintainability and scalability in a real-world development workflow.

## 👩‍💻 Author
This project was developed by Luiza Kormann (lukorman@student.42.fr) as part of the 42 São Paulo curriculum.
