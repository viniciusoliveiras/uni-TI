SELECT 
    nome
FROM
    animal
WHERE
    idEspecie IN (SELECT 
            idEspecie
        FROM
            especie
        WHERE
            descricao = 'Pastor Alemão')
ORDER BY nome;