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
