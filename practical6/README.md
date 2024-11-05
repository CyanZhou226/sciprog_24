---
editor_options: 
  markdown: 
    wrap: 72
---

# Practical 6 - Matrix Multiplication

### Before Step 6

Before implementing the separate compilation and linking (as instructed
in Step 6), the program can be compiled and executed as a single file.

-   **Compilation:** gcc -o matrix_mult main.c mm.c -lm

-   **Execution:** ./matrix_mult

### After Step 6

-   **Compilation:** make all

-   RESULT

    ```{bash}
    gcc  -c -O3 main.c  
    gcc  -c -O3 mm.c
    gcc  -o mmc main.o mm.o -lm 
    ```

    **Execution:** ./mmc

### RESULT

```{bash}
This is matrix A:
  0   1   2 
  1   2   3 
  2   3   4 
  3   4   5 
  4   5   6 

This is matrix B:
  0  -1  -2  -3 
  1   0  -1  -2 
  2   1   0  -1 

This is matrix C (Result of A * B):
  5   2  -1  -4 
  8   2  -4 -10 
 11   2  -7 -16 
 14   2 -10 -22 
 17   2 -13 -28 
```
