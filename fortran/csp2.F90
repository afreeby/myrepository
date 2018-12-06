program primetest

implicit none
integer :: innum, testnum

print *, "Enter an integer to test for primality:"
read *, innum

do testnum = 2,(innum-1)
   if (mod(innum,testnum) == 0) then
      print *, "Your number is not prime, it is divisible by:", testnum
      exit
   else if (testnum == innum-1) then
      print *, "Your number is prime"
   else
      cycle
   end if

end do

end program primetest
