INPUT "Ingrese los 3 lados del triangulo"; l1
INPUT l2
INPUT l3
IF l1 = l2 AND l2 = l3 THEN
    PRINT "Los tres lados son iguales"
ELSE
    IF l1 = l2 OR l2 = l3 OR l3 = l2 THEN
        PRINT "El triangulo tiene dos lados iguales"
    ELSE
        PRINT "El triangulo tiene todos los lados diferentes"
    END IF
END IF
