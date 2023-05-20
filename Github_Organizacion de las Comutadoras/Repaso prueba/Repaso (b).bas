INPUT "Ingrese fondos al cajero: "; fondos
INPUT "Ingrese el monto que quiere retirar: "; monto

WHILE fondos > monto
    IF fondos > monto THEN
        PRINT "Se retiro la moni"
        fondos = fondos - monto
    ELSE
        PRINT "No hay mas moni"
    END IF
WEND
