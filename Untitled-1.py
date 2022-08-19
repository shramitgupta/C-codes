amt=float(input())
bal=float(input())
if(amt <= bal and amt % 5==0.0):
    print(bal-amt-0.5)
else:
    print(bal)