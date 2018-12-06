program avgarray

implicit none
real(8),dimension(5,3) :: x = [2,4,6,8,10,12,16,18]
real(8),dimension(4,2) :: y
integer :: i,j

do i=1,5
   do j=1,3
   y(i,j) = (x(i,j)+x(i+1,j+1))/2
end do

print *, y

end program avgarray
