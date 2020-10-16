n = int(input())
no_of_trailing_zeroes = 0
while n:
    n = n//5
    no_of_trailing_zeroes += n

print(no_of_trailing_zeroes)
