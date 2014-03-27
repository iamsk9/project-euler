for a in range(9000,9999):
	b=2*a
	val=str(a)+str(b)
	val=set(val)
	if val.__contains__('0')==0 and len(val)==9:
		print a,b
