SELECT 
    sell_date,
    COUNT(*) AS num_sold,
    STRING_AGG(product, ',') AS products
FROM (
    SELECT DISTINCT sell_date, product
    FROM Activities
) t
GROUP BY sell_date;