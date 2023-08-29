! Write a FORTRAN program to sort 10 integers given from user and display the 
! second largest integer

PROGRAM sort_nums
    IMPLICIT NONE

    INTEGER, PARAMETER :: N = 10
    INTEGER :: numbers(N), i, temp, j

    ! GET the numbers from user
    DO i = 1, N
        READ(*, *) numbers(i)
    END DO

    ! Sorting the numbers using Bubble Sort
    DO i = 1, N
        DO j = 1, N - i
            IF (numbers(j) > numbers(j+1)) THEN
                temp = numbers(j)
                numbers(j) = numbers(j+1)
                numbers(j+1) = temp
            END IF
        END DO
    END DO

    ! Display the sorted numbers
    WRITE(*, *) "Sorted Numbers:"
    DO i = 1, N
        WRITE(*, *) numbers(i)
    END DO

    WRITE(*, *) "Second Largest Number:", numbers(2)

END PROGRAM sort_nums
