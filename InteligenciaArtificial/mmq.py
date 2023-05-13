
import numpy

# X Y
table = [[0.50,-2.80],
         [0.75,-0.60],
         [1.00,1.00],
         [1.50,3.20],
         [2.00,4.80],
         [2.50,6.00],
         [3.00,7.00]]

def mmq(table):

    sumx=0
    sumy=0
    sumxq=0
    sumxy=0

    print("Tabela:")
    print("X | Y")
    for e in table:
        print(e)
    print("\n")

    #Acessando coluna Xi, Yi, X^2i e XiYi
    for e in range(numpy.shape(table)[0]):

        sumx += table[e][0] #somatorio da coluna Xi
        sumxq += table[e][0]**2 #somatorio da coluna X^2i
        sumy += table[e][1] #somatorio da coluna Yi
        sumxy += table[e][0] * table[e][1] #somatorio da coluna XiYi

    #system
    print(str(sumxq)+"a "+str(sumx)+"b\t= "+str(sumxy)+"\n"+str(sumx)+"a "+str(numpy.shape(table)[0])+"b\t= "+str(sumy))
    print("\n")

    A = numpy.array([[sumxq, sumx], [sumx, numpy.shape(table)[0]]])
    B = numpy.array([sumxy, sumy])

    x = numpy.linalg.solve(A, B)

    print("a = "+str(x[0])+", b = "+str(x[1]))

mmq(table)
