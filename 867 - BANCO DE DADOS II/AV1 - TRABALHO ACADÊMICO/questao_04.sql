SELECT 
    nome
FROM
    veterinario
WHERE
    idVeterinario NOT IN (SELECT 
            idVeterinario
        FROM
            consulta
        WHERE
            YEAR(data) != '2019')
        AND (nome LIKE 'A%' OR nome LIKE 'B%');