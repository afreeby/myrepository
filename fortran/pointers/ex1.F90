program pointers

implicit none

real,dimension(5) :: myarray = [1,2,5,3,4]
real,pointer :: myreturn

call arraymax(myarray,myreturn)
print *, myreturn

contains
  subroutine arraymax(myarray,myreturn)
    implicit none
    real,intent(in),dimension(5),target :: myarray
    real,intent(inout),pointer :: myreturn
    real :: counter = 0
    real :: i

    myreturn => myarray(1)

    do i = 1,size(myarray)
       if (i > myreturn) then
          myreturn => myarray(i)
       end if
    end do

  end subroutine arraymax

end program pointers
