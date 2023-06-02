user$ = "admin"
password$ = "admin"
intentos = 3

INPUT "Ingrese el usuario: "; user1$
INPUT "Ingrese la contrasenia: "; password1$

IF user1 = user AND password1 = password THEN
    PRINT "Logeo con exito."
ELSE
END IF

CLS

PRINT "            Bienvenido               "
PRINT "Seleccione la aplicacion que quiere"
PRINT "1. Calculadora   2.Creador de usuarios "; a

SELECT CASE a

    CASE 1
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

    CASE 2
        INPUT "  1: Registro 2: Login"; opcion
        SELECT CASE opcion
            CASE 1
                INPUT "Ingrese un nombre de usuario: "; nombredeusuario$
                INPUT "Ingrese la contraseña: "; contrasena$
                PRINT nombredeusuario
                PRINT contrasena

            CASE 2
                INPUT "ingrese su nombre de usuario:"; nombredeusuario$
                INPUT "Ingrese su contrasena: "; contrasena
                PRINT "Inicio sesion de forma exitosa";

        END SELECT

END SELECT
