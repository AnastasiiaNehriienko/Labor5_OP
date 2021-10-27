amount=0
for a in range(1000000, 1200000):
    b=a
    answer=0
    while b!=0:
        temp=b%10
        answer = answer * 10 + temp
        b //= 10
    if a==answer:
        amount+=1
        print(a, end='; ')
print('Amount: '+str(amount))