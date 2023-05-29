signatures = int(input())

while signatures != 0:
    count = 0

    for inputs in range(0,signatures):
        diff = 0
        signature1, signature2 = input().split()
        signature1_letters = list(signature1)
        signature2_letters = list(signature2)
        for i in range (0,len(signature1_letters)):
            if signature1_letters[i] != signature2_letters[i]:
                diff  += 1
        if diff >= 2:
            count += 1

       
        print(count)
    signatures = int(input())