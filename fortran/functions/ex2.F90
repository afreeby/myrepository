program primefunction

implicit none

logical :: result
integer :: innum,how_many_primes
integer, parameter :: number_of_primes_found = 0

print *, "Enter how many primes you would like:"
read *, how_many_primes

do innum = 2,1000000
   result =  primality(innum)
   if (result) then
      number_of_primes_found++
   else 
      cycle
   end if
   if (number_of_primes_found == how_many_primes) then
      exit
   end if
end do

print *, number_of_primes_found

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
