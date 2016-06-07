def reverse_num(num):
	rev = 0
	while(num > 0):
		rev = (10*rev)+num%10
		num //= 10
	return rev
reverse_num(1234)
