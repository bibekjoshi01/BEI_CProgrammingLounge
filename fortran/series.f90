! Write a program in FORTRAN to calculate the value of π by evaluating the 
! following formula for the first 25 terms. 

! π = 4(1-1/3+1/5-1/7+1/9-.....)

PROGRAM SERIES
    IMPLICIT NONE

    INTEGER :: i, sign = 1
    REAL :: sum = 0.0

    DO i = 1, 25
        sum = sum + sign * (1 / REAL(2 * i - 1))
        sign = -sign
    END DO

    sum = sum * 4
    WRITE(*, *) "Approximate value of π using the series formula:", sum

END PROGRAM SERIES
