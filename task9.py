arrayList = [0, 1, 8, 124, -632, 45]
n = len(arrayList)

def minElement(arrayList, n):
    # if sive equals 0 then search all elements in the array
    if (n == 1):
        return arrayList[0]
    return min(arrayList[n - 1], minElement(arrayList, n - 1))

if __name__ == '__main__':

    print(minElement(arrayList, n))