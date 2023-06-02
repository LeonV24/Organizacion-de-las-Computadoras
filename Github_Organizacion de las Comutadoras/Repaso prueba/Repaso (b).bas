INPUT "Ingrese el monto inicial del cajero automatico:"; montoInicial

DO
    PRINT "Monto disponible en el cajero: $" + STR$(montoInicial)
    PRINT "Ingrese la cantidad a retirar (0 para salir):"
    INPUT cantidadRetirar

    IF cantidadRetirar > montoInicial THEN
        PRINT "Fondos insuficientes."
    ELSE
        IF cantidadRetirar > 0 THEN
            montoInicial = montoInicial - cantidadRetirar
            PRINT "Retiro exitoso."
        ELSE
            IF cantidadRetirar = 0 THEN
                PRINT "Gracias por usar este cajero."
            ELSE
                PRINT "No hay mas plata mi brother"
            END IF
        END IF
    END IF

LOOP UNTIL cantidadRetirar = 0
