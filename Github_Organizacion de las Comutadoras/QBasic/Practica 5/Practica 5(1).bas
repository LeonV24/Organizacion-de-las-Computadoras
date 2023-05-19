Valor = 200

PRINT "Pasaje = 200$"
INPUT "Ingrese la cantidad de pasajes: "; CantPasajes
SELECT CASE CantPasajes

    CASE IS >= 4
        PRINT "El valor total a abonar es de "; (Valor * CantPasajes) * 0.8; "$"

    CASE 3
        PRINT "El valor total a abonar es de "; (Valor * CantPasajes) * 0.95; "$"

    CASE 2
        PRINT "El valor total a abonar es de "; (Valor * CantPasajes) * 0.9; "$"

    CASE 1
        PRINT "El valor total a abonar es de 200 $"

END SELECT
