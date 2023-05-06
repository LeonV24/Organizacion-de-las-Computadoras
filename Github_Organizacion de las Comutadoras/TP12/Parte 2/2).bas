PRINT "Registro de usuarios"

INPUT "Ingrese nombre"; d1
INPUT "Ingrese apellido"; d2
INPUT "Ingrese nombre de usuario"; d3
INPUT "Ingrese contraseña"; d4
INPUT "Ingrese correo electronico"; d5

PRINT d1
PRINT d2
PRINT d3
PRINT d4
PRINT d5

PRINT "Login"

INPUT "Ingrese el nombre de usuario"; l1
INPUT "Ingrese la contraseña"; l2

IF l1 = d3 AND l2 = d4 THEN
    PRINT "LOGIN SUCCESFULY"
ELSE
    PRINT "ERROR"
END IF


