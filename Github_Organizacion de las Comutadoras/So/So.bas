intentos = 3
x = 0

WHILE x = 0

    INPUT "Ingrese el usuario: "; user1$
    INPUT "Ingrese la contrasenia: "; password1$

    IF "admin" = password1$ AND "admin" = user1$ THEN
        PRINT "Logeo con exito."
        x = 1
    ELSE
        intentos = intentos - 1
        PRINT "Error. Le quedan"; intentos; "intentos."
        IF intentos = 0 THEN
            x = 1
        END IF
    END IF
WEND

IF intentos > 0 THEN
    PRINT "                 Bienvenido               "
    PRINT "       Cual aplicacion quiere iniciar?  "
    PRINT "1. Calculadora              2. Notepad "
    PRINT "3. Explorador de archivos   4. Google Chrome "
    PRINT "5. Paint                    6. Capturar pantalla "
    PRINT "7. Mozilla Firefox          8. Microsoft Edge "
    PRINT "9. VLC Media Player         10. Outlook "
    INPUT "11. Skype                   12. Adobe Photoshop "; a


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
            SHELL "notepad"

        CASE 3
            SHELL "explorer"

        CASE 4
            SHELL "chrome"

        CASE 5
            SHELL "mspaint"

        CASE 6
            SHELL "SnippingTool"

        CASE 7
            SHELL "firefox"

        CASE 8
            SHELL "msedge"

        CASE 9
            SHELL "vlc"

        CASE 10
            SHELL "outlook"

        CASE 11
            SHELL "skype"

        CASE 12
            SHELL "photoshop"

    END SELECT
END IF
