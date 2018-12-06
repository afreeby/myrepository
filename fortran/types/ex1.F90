program exone

implicit none

type Point
   real :: x,y
end type Point
type Rectangle
   type(point) :: p1,p2
end type Rectangle

type(point) :: p1,p2
type(Rectangle) :: R1
p1 = point(1,2)
p2 = point(3,0)
R1 = Rectangle(p1,p2)
print *, "Area: ", area(R1)

contains
  real function area(R1)
    implicit none
    type(Rectangle),intent(in) :: R1
    area = ((abs(R1%p1%x-R1%p2%x))*(abs(R1%p1%y-R1%p2%y)))
  end function area

end program exone
