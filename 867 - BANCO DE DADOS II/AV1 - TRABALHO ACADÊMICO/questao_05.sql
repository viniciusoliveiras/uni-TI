SELECT 
    data, COUNT(*) AS quantConsultas
FROM
    consulta
GROUP BY data
HAVING idConsulta NOT IN (SELECT 
        idConsulta
    FROM
        exame);