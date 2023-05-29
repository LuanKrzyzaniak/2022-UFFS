tests = int(input())

while tests > 0:
    s_list = input().split()
    
    sorted_list = sorted(s_list, key=len, reverse=True)

    for a in range(0,len(sorted_list)):
        if a < len(sorted_list)-1:
            print(sorted_list[a], end=' ')
        else:
            print(sorted_list[a])
    tests -= 1
