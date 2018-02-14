a = [1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0]

def checker (x) :
    while (a[x-1]==-1) :
        x = int(input("This number have been chosen already, please choose another number : "))
    return x

m = True
while (m) :
    w = int(input("Choose :\n1- Play new game.\n2- Instructions.\n"))
    if (w == 1) :
        z = 0
        count = 0
        s = str("")
        while (count < 20):
            x = 0
            y = 0
            for i in range (20) :
                if (a[i] == -1):
                    print('*', end=' ')
                else:
                    print (a[i], end=' ')
            if (z%2==0):
                print ("\n\t\t\tPlayer 1's turn")
                s = "Player 1"
            else:
                print("\n\t\t\t\tPlayer 2's turn")
                s = "Player 2"
            x = int(input("Do you want to choose one number or tow numbers ?"))
            while (x !=1 and x !=2):
                x = int(input("Wrong input\nPlease choose by pressing 1 or 2"))
            if ( x == 1 or x == 2):
                if (x==1):
                    x = int(input("Choose a number : "))
                    x = checker(x)
                else :
                    x = int(input("Choose the first number : "))
                    x = checker(x)
                    y = int(input("Choose the second number : "))
                    y = checker(y)
            a[x-1] = -1
            count = count + 1
            if (y !=0):
                a[y-1] = -1
                count =- count + 1
            z = z + 1
        print ("\t\t", s ,"won", "\nCongartulations ^_^" )
        q = str(input("Play again ?\n Y for yes, N for no"))
        while (q!='n' and q!='N' and q!='y' and q!='Y'):
            q = str(input("Play again ?\n Y for yes, N for no"))
        if (q == 'n' or q == 'N'):
            m = false
    elif (w == 2):
        print("Kayles game. This game begins with an arbitrary number of tokens in a single row.\nTwo players alternate turns. During a turn a player may remove either one or two adjacent tokens.\nThe player who removes the last token wins.")
    else :
        print ("Wrong input")