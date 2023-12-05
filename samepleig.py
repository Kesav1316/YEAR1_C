x1 = float(input("Enter the x in first:"))
y1 = float(input("Enter the y in first:"))
x2 = float(input("Enter the x in second:"))
y2 = float(input("Enter the y in second:"))
L = float(input("Enter the value of L")) #Length between photoresistor and the optical source
W = ((x1-x2)**2 + (y1-y2)**2)**0.5
NA  = W/(4*L*L + W*W)**0.5
print("The value of W is",W)
print("The numerical aperture is",NA)