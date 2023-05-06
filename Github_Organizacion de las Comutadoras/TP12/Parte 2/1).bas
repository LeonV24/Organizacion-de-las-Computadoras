INPUT "Ingrese le monto a abonar"; total
PRINT "---------------------------------------"
PRINT "|           Seleccione el             |"
PRINT "|         Metodo para abonar          |"
PRINT "|                                     |"
PRINT "|    1.Debito         2.Efectivo      |"
PRINT "|            3.Credito                |"
PRINT "|                                     |"
INPUT "---------------------------------------"; metodo

IF metodo = 1 THEN
    total = total * 0.85
ELSE
    IF metodo = 2 THEN
        total = total * 0.8
    ELSE
        total = total * 0.9
    END IF
END IF
