x = [5,1,7,0,3,4,5,3,2,6,7,3,6]
get_indexes = lambda x, xs: [i for (y, i) in zip(xs, range(len(xs))) if x == y]
print(get_indexes(7,x))

x = ['M', 'U', 'L', 'T', 'I', ' ', 'P','A','R','A','D','I','G','M',' ', 'P','R','O','G','R','A','M','M','I',',N','G']
get_indexes = lambda x, xs: [i for (y, i) in zip(xs, range(len(xs))) if x == y]
print(get_indexes('M',x))


##https://www.geeksforgeeks.org/recursive-program-to-find-all-indices-of-a-number/
def searchIndex(input, x, start): 
      
    # Return an empty array if there is not a match after searching the length of the array
    if (start == len(input)): 
        ans = [] # empty array 
        return ans 
  
    # Getting the recursive answer in smallIndex array
    smallIndex = searchIndex(input, x, start + 1) 
  
    # If the element at start index is equal to x then
    # (this is the answer of recursion) and then (which came through recursion)
    if (input[start] == x): 
        myAns = [0 for i in range(len(smallIndex) + 1)] 
  
        # Put the start index at the start of the array 
        myAns[0] = start 
        for i in range(len(smallIndex)): 
  
            # Move the elements of the array one step to the right and put them in the myAns array
            myAns[i + 1] = smallIndex[i] 
  
        return myAns 
    else: 
  
        # If the element at start index is not = to x then just return the answer we got from recursion. 
        return smallIndex 
  
# This function is to find all indices of the string
def AllIndexes(input, x): 
  
    return searchIndex(input, x, 0) 
  
# Driver Code 
arr = ['G', 'A', 'L', 'W', 'A', 'Y',' ', 'M','A','Y','O',' ','I','T'] 
x = 'Y'
  
output=AllIndexes(arr, x) 
  
# Printing the output array 
for i in output: 
    print(i, end = " ") 