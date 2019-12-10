from functools import reduce 

x = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

result = filter((lambda x: (x%2) !=0), (x))

print(result)


def removeOdd(myList):
    for x in myList[:]:
        if x % 2 !=0:
            myList.remove(x)
    return(x)
print(removeOdd)