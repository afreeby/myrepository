program primefunction

implicit none

logical :: result
integer :: innum

print *, "Enter an integer to test for primality:"
read *, innum
result =  primality(innum)
if (result) then
   print *, "This number is prime."
else
   print *, "This number is not prime."
end if

contains
  logical function primality(innum)
    integer :: testnum,innum
    logical :: testresult        
    do testnum = 2,(innum-1)
       if (mod(innum,testnum) == 0) then
          primality = .false.
          exit
       else if (testnum == innum-1) then
          primality = .true.
       else
          cycle
       end if
    end do
  end function primality
end program primefunction
