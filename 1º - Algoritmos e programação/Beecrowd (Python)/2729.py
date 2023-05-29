tests = int(input())

while tests > 0:

    final_list = []
    used = set()
    start_list = input().split()


    for a in range(0,len(start_list)):
        if start_list[a] not in used:
            final_list.append(start_list[a])
            used.add(start_list[a])

    orded_list = sorted(final_list)

    for a in range(0,len(orded_list)-1):
        print(orded_list[a], end=' ')
    print(orded_list[len(orded_list)-1])

    tests -= 1