#Answer 1

Integer= 4
Long= 8
Float= 4
Double= 8
Character= 1

a = input()

if(a=="Integer"):
    print(Integer)
elif(a=="Long"):
    print(Long)
elif(a=="Float"):
    print(Float)
elif(a=="Double"):
    print(Double)
elif(a=="Character"):
    print(Character)
else:
    print("Enter proper Datatype")

#Answer2
dataTypes = input()

if(dataTypes=="Integer"):
    print(4)
elif(dataTypes=="Long"):
    print(8)
elif(dataTypes=="Float"):
    print(4)
elif(dataTypes=="Double"):
    print(8)
elif(dataTypes=="Character"):
    print(1)
else:
    print("Enter proper Datatype")

#Answer3 (from solutions)
    
def dataTypes(type):

    if type=='Integer':
        return 4
    elif type=='Long':
        return 8
    elif type=='Float':
        return 4
    elif type=='Double':
        return 8
    elif type=='Character':
        return 1
    else:
        return -1

    