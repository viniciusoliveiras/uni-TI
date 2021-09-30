SELECT 
    COUNT(*) AS quantConsultas
FROM
    consulta
WHERE
    idConsulta NOT IN (SELECT 
            idConsulta
        FROM
            exame)
GROUP BY data;