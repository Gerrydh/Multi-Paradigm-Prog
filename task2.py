x = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

square = lambda x: x * x

print(square(2))

result = list(map(square, x))

print(result)

print(list(map(square, result)))

#########################################################
##Functional
x = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

def productArray(myList):

    result = 1 # multiply elements 1 by 1
    for x in myList:
        result = result * x
    return result

print(productArray(x))

##############################################################

from functools import reduce
x = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

result = reduce((lambda x, y: x * y), x)
print(result)