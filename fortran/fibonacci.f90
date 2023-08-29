! Write a program to print the Fibonacci Series until the term is less than 500

PROGRAM Fibonacci
    IMPLICIT NONE

    INTEGER :: first = 0, second = 1, term = 0

    DO WHILE (term < 500)
        WRITE(*, '(I5)', ADVANCE='NO') first
        term = second + first
        first = second
        second = term
    END DO

END PROGRAM Fibonacci