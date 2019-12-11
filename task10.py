#https://stackoverflow.com/questions/56450268/how-to-check-unbalanced-brackets-in-python-3
def verParent(s):
    
    pairs = {"{": "}", "(": ")", "[": "]"}
    stack = []
    for c in s:
        if c in "{[(":
            stack.append(c)
        elif stack and c == pairs[stack[-1]]:
            stack.pop()
        else:
            return False
    return len(stack) == 0


examples = ("{[()]}", "{[(])}", "{{[[(())]]}}", "[)")
for s in examples:
    print(s, verParent(s))


#######################################
#https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-python/
def check(expression): 
      
    open_tup = tuple('({[') 
    close_tup = tuple(')}]') 
    map = dict(zip(open_tup, close_tup)) 
    queue = [] 
  
    for i in expression: 
        if i in open_tup: 
            queue.append(map[i]) 
        elif i in close_tup: 
            if not queue or i != queue.pop(): 
                return "Unbalanced"
    return "Balanced"
  
# Driver code 
string = "{[]{()}}}"
print(string, "-", check(string))