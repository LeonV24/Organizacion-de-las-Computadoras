INPUT "Ingrese el monto a abonar: "; monto
PRINT "---------------------------------------"
PRINT "|           Seleccione que            |"
PRINT "|              Tipo de                |"
PRINT "|             Cliente es              |"
PRINT "|                                     |"
PRINT "|    a.Normal          b.Bussines     |"
PRINT "|              c.Admin                |"
PRINT "|                                     |"
INPUT "---------------------------------------"; cliente

SELECT CASE cliente

    CASE a
        PRINT "El unico metodo para abonar es efectivo y el total es de"; monto

    CASE b
        INPUT "Los metodos para abonas es 1.EFECTIVO, 2.DEBITO(8% de descuento), 3.CREDITO(12% de descuento)"; metodo
        IF metodo = 3 THEN
            PRINT "El total a abonar con credito es de: "; monto * 0.88

        ELSE
            IF metodo = 2 THEN
                PRINT "El total a abonar con debito es de: "; monto * 0.92
            ELSE
                PRINT "El total a abonar con efectivo es de: "; monto
            END IF
        END IF

    CASE c
        INPUT "Los metodos para abonas es 1.EFECTIVO, 2.DEBITO(8% de descuento), 3.CREDITO(12% de descuento) y 4.DOLARES"; metodo
        IF metodo = 3 THEN
            PRINT "El total a abonar con credito es de: "; monto * 0.88

        ELSE
            IF metodo = 2 THEN
                PRINT "El total a abonar con debito es de: "; monto * 0.92
            ELSE
                IF metodo = 4 THEN
                    PRINT "El total a abonar con dolares es de: "; monto / 500

                ELSE
                    PRINT "El total a abonar con efectivo es de: "; monto
                END IF
            END IF
        END IF



END SELECT
