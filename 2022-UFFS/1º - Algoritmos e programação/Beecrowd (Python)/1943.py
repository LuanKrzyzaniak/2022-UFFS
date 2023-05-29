K = int(input())

if 50 < K <= 100:
    print("Top 100")
elif 25 < K <= 50:
    print("Top 50")
elif 10 <K <= 25:
    print("Top 25")
elif 5 < K <= 10:
    print("Top 10")
elif 3 < K <= 5:
    print("Top 5")
elif 1 < K <= 3:
    print("Top 3")
elif K == 1:
    print("Top 1")