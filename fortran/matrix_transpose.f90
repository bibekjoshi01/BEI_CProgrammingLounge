! Write a program in FORTRAN to read and compute the tranpose of any matrix

program MatrixTranpose
  INTEGER :: i, j
  INTEGER :: matrix(2, 2), transpose_mat(2,2)
  
  ! Read the elements of the 2x2 matrix
  WRITE(*,*) "Enter the elements of the 2x2 matrix: "
  
  DO i = 1, 2
    DO j = 1, 2
      READ(*,*) matrix(i, j)
    END DO
  END DO

  ! Computing the transpose of the matrix 
  DO i = 1, 2
    DO j = 1, 2
        transpose_mat(j, i) = matrix(i, j)
    END DO
END DO

WRITE(*, *) "The transpose of matrix is: "
  DO i = 1, 2
    DO j = 1, 2
        WRITE(*, '(I5)', ADVANCE='NO') transpose_mat(i, j)
    END DO
    WRITE(*, *)
END DO

END PROGRAM MatrixTranpose