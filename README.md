# Armstrong and Palindrome Numbers

## Armstrong Numbers

It is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

Let's try to understand why 153 is an Armstrong number.

```math
153 = (1*1*1)+(5*5*5)+(3*3*3)  
where:  
(1*1*1) = 1  
(5*5*5) = 125  
(3*3*3) = 27  
So:  
1+125+27 = 153
```

## Palindrome Number
It is the number that remains the same when its digits get reversed.\
For example: If we take 15451 and reverse it then after reversing the number remains the same.

#### Using $string()$ method
- When the number of digits of that number exceeds 10<sup>18 </sup>, we can’t take that number as an integer since the range of long long int doesn’t satisfy the given number.
- So take input as a string, Run a loop from starting to length/2 and check the first character(numeric) to the last character of the string and second to second last one, and so on ….If any character mismatches, the string wouldn’t be a palindrome.
