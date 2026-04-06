SELECT 
    query_name,
    CAST(AVG(1.0 * rating / position) AS DECIMAL(10,2)) AS quality,
    CAST(
        (
            SELECT COUNT(*) * 1.0
            FROM Queries q2
            WHERE q2.query_name = q1.query_name
              AND rating < 3
        ) * 100.0 / COUNT(*) 
    AS DECIMAL(10,2)) AS poor_query_percentage
FROM Queries q1
GROUP BY query_name;