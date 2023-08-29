! Write a program in FORTRAN to check whether a number given by user is palindrome or not

PROGRAM PALINDROME_NUMBER
    implicit none

    integer :: num, digit, originalNum, reverseNum

    ! Read the number from the user
    WRITE(*, *) "Enter a number: "
    READ(*, *) num

    originalNum = num
    reverseNum = 0

    ! Reverse the number 
    DO WHILE (num > 0)
        digit = MOD(num, 10)
        reverseNum = reverseNum * 10 + digit
        num = num / 10
    END DO

    ! Check if the number is palidrome
    IF (originalNum == reverseNum) THEN
        WRITE(*, *) originalNum, "is palindrome."
    ELSE
        WRITE(*, *) originalNum, "is not palindrome."
    END IF

END PROGRAM PALINDROME_NUMBER

 
