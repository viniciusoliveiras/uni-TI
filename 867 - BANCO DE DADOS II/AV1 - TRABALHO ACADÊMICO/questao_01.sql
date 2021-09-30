SELECT 
    COUNT(*) AS 'Quantidade de tratamentos por data'
FROM
    tratamento
WHERE
    YEAR(dataInicial) = 2017
        AND YEAR(dataFinal) = 2017
        AND idTratamento IN (SELECT 
            idTratamento
        FROM
            consulta
        WHERE
            idVeterinario IN (SELECT 
                    idVeterinario
                FROM
                    veterinario
                WHERE
                    nome LIKE 'CARLOS SILVA'));