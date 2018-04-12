global a, b, front, back
a = ('01', '03', '05', '07', '08', '10', '12')
b = ('04', '06', '09', '11')



def isRRN(s) :
  (front, mid, back) = s.partition("-")
  return front_ok(front) and mid == "-" and back_ok(s)

def isleapyear(year):
  if year >= 20 :
    y = "19"+str(front[:2])
  elif year < 20:
    y = "20"+str(front[:2])

  y = int(y)
  if(y%4 == 0 and y%100!=0 or y%400 == 0):
    return True
  else:
    return False

def front_ok(front) :
  if int(front[2:4]) > 12:
    return False
  else:
    for i in a :
      if int(front[2:4]) == int(i) and (int(front[4:6]) <= 31 and int(front[4:6])>0):
        return True

    for i in b :
      if int(front[2:4]) == int(i) and (int(front[4:6]) <= 30 and int(front[4:6]) >0):
        return True
    if ((isleapyear(int(front[:2])) == True) and int(front[4:6]) <= 29 and int(front[4:6]) > 0):
      return True
    elif ((isleapyear(int(front[:2])) == False) and int(front[4:6]) <= 28 and int(front[4:6]) > 0):
      return True
    else:
      return False

def back_ok(num) :
  (front, mid, back) = num.partition("-")   
  m = 11 - ((2*int(front[0])+3*int(front[1])+4*int(front[2])+5*int(front[3])+6*int(front[4])+7*int(front[5])+8*int(back[0])+9*int(back[1])+2*int(back[2])+3*int(back[3])+4*int(back[4])+5*int(back[5])) % 11)
  if(m == int(back[6])):
    return True
  else:
    return False

s = input()
print(isRRN(str(s)))