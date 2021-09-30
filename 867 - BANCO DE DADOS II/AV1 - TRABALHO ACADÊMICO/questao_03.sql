SELECT 
    (SELECT 
            v.nome
        FROM
            veterinario v
        WHERE
            v.idVeterinario = c.idVeterinario) AS nome,
    COUNT(idVeterinario) AS quant_consultas
FROM
    consulta c
GROUP BY (idVeterinario)
ORDER BY quant_consultas DESC
LIMIT 2;