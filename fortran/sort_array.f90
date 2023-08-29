! Write a program in FORTRAN to sort elements of a ID array in ascending 
! as well as descending order

PROGRAM SORT_ARRAY
    implicit none

    INTEGER :: n, i, j, temp
    INTEGER, DIMENSION(100) :: arr

    ! Read the number of elements
    WRITE(*,*) "Enter the number of elements:"
    READ(*,*) n

    ! Read the elements of the array 
    WRITE(*, *) "Enter integer elements: ", n
    DO i = 1, n
        READ(*, *) arr(i)
    END DO

    ! Ascending order
    DO i = 1, n-1
        DO j = 1, n-i
            IF (arr(j) > arr(j + 1)) THEN
                temp = arr(j)
                arr(j) = arr(j+1)
                arr(j+1) = temp
            END IF
        END DO
    END DO

    ! Display the sorted array in ascending order
    WRITE(*, *) "Sorted Array (Ascending Order): "
    DO i = 1, n
        WRITE(*, *) arr(i)
    END DO

    ! Descending order
    DO i = 1, n-1
        DO j = 1, n-i
            IF(arr(j) < arr(j+1)) THEN
                temp = arr(j)
                arr(j) = arr(j+1)
                arr(j+1) = temp
            END IF
        END DO
    END DO

    ! Display the sorted array in descending order
    WRITE(*, *) "Sorted Array (Descending Order): "
    DO i = 1, n
        WRITE(*, *) arr(i)
    END DO

END PROGRAM SORT_ARRAY