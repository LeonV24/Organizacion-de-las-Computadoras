INPUT "Ingrese el numero del mes(1-12)"; numdmes
SELECT CASE numdmes

    CASE IS = 12
        PRINT "Este mes tiene 31 dias"
    CASE 11
        PRINT "Este mes tiene 30 dias"
    CASE 10
        PRINT "Este mes tiene 31 dias"
    CASE 9
        PRINT "Este mes tiene 30 dias"
    CASE 8 TO 7
        PRINT "Este mes tiene 31 dias"
    CASE 6
        PRINT "Este mes tiene 30 dias"
    CASE 5
        PRINT "Este mes tiene 31 dias"
    CASE 4
        PRINT "Este mes tiene 30 dias"
    CASE 3
        PRINT "Este mes tiene 31 dias"
    CASE 2
        PRINT "Este mes tiene 28 dias"
    CASE 1
        PRINT "Este mes tiene 31 dias"

END SELECT
