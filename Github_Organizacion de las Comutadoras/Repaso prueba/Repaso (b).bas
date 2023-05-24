PRINT "Ingrese el monto inicial del cajero automático:"; montoInicial

DO
    PRINT "Monto disponible en el cajero: $" + STR$(montoInicial)
    PRINT "Ingrese la cantidad a retirar (0 para salir):"
    INPUT cantidadRetirar

    IF cantidadRetirar > montoInicial THEN
        PRINT "Error: Fondos insuficientes. El monto disponible es $" + STR$(montoInicial)
    ELSE
        IF cantidadRetirar > 0 THEN
            montoInicial = montoInicial - cantidadRetirar
            PRINT "Retiro exitoso."
        ELSE cantidadRetirar < 0 THEN
            PRINT "Error: La cantidad ingresada no es válida."
        END IF
    END IF
LOOP UNTIL cantidadRetirar = 0

PRINT "Gracias por utilizar el cajero automático. ¡Hasta luego!"
