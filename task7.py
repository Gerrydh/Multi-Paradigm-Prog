def sumNumber(n):
    n_lst = list(str(n))
    n_sum = 0
    for i in range(len(n_lst)):
        n_sum += int(n_lst[i])
    return n_sum

print(sumNumber(1234))

######################################

num=123456789

print(sum(map(int,str(num))))
 