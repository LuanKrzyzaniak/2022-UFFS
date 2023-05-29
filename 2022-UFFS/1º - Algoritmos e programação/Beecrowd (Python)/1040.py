a,b,c,d = map(float,input().split())

average = (a * 2 + b * 3 + c * 4 + d * 1) / 10

if average < 5.0 :
    print(f"Media: {average:.1f}\nAluno reprovado.")
elif average > 6.9 :
    print(f"Media: {average:.1f}\nAluno aprovado.")
elif average >= 5.0 and average <= 6.9 :
    exam = float(input())
    finalaverage = (average + exam) / 2
    if finalaverage >= 5.0 :
        print(f"Media: {average:.1f}\nAluno em exame.\nNota do exame: {exam:.1f}\nAluno aprovado.\nMedia final: {finalaverage:.1f}")
    else :
        print(f"Media: {average:.1f}\nAluno em exame.\nNota do exame: {exam:.1f}\nAluno reprovado.\nMedia final: {finalaverage:.1f}")
