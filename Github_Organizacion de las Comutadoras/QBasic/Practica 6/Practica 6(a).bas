PRINT "---------------------------------------"
PRINT "|           Seleccione la             |"
PRINT "|             Operacion               |"
PRINT "|                                     |"
PRINT "|    a.Suma          b.Resta          |"
PRINT "|  c.Multiplicaion  d.Division        |"
PRINT "|                                     |"
INPUT "---------------------------------------"; operacion$
SELECT CASE operacion$
    CASE "a"
        INPUT "Ingrese el primer numero: "; num1
        INPUT "Ingrese el segundo numero: "; num2
        PRINT "La suma de "; num1; " entre "; num2; " es de"; num1 + num2
    CASE "b"
        INPUT "Ingrese el primer numero: "; num1
        INPUT "Ingrese el segundo numero: "; num2
        PRINT "La resta de "; num1; " entre "; num2; " es de"; num1 - num2
    CASE "c"
        INPUT "Ingrese el primer numero: "; num1
        INPUT "Ingrese el segundo numero: "; num2
        PRINT "La multiplicacion de "; num1; " entre "; num2; " es de"; num1 * num2
    CASE "d"
        INPUT "Ingrese el primer numero: "; num1
        INPUT "Ingrese el segundo numero: "; num2
        IF num2 = 0 THEN
            PRINT "ERROR!!"
        ELSE
            PRINT "La division de "; num1; " entre "; num2; " es de"; num1 / num2
        END IF
END SELECT
