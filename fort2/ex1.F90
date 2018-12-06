program control_structures

implicit none
integer :: innum
print *, "Enter an integer: "
read *, innum

if(mod(innum,3) == 0 .and. mod(innum,5) == 0) then
   print *, "FizzBuzz"
else if(mod(innum,3) == 0) then
   print *, "Fizz"
else if(mod(innum,5) == 0) then
   print *, "Buzz"
end if

end program control_structures
