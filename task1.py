<<<<<<< HEAD
x = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

sum = sum(x)
print(sum)
def getSum(piece):
     if len(piece)==0:
         return 0
     else:
         return piece[0] + getSum(piece[1:]) 
print(getSum(x))

suml = lambda l: l[0] + suml(l[1:]) if l else 0

print(suml(range(101)))

def func(l):
   if len(l) < 2: return l
   sub = func(l[:-1])
   return sub + [sub[-1] + l[-1]]

print(func(x))
=======
# x = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# sum = sum(x)
# print(sum)
# def getSum(piece):
#     if len(piece)==0:
#         return 0
#     else:
#         return piece[0] + getSum(piece[1:]) 
# print getSum([1, 3, 4, 2, 5])

suml = lambda l: l[0] + suml(l[1:]) if l else 0

print(suml(range(101)))
>>>>>>> 42bebbd3c766e0aa519f050f88eca4374c17ef21
