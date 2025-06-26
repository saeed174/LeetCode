# Write your MySQL query statement below
select customer_number 
from
(
select distinct customer_number , count(customer_number) as counts
from Orders 
group by customer_number
) as arranged
where counts = 
(
    select max(counts) from 
    (
        select distinct customer_number , count(customer_number) as counts
        from Orders 
        group by customer_number
    ) as rearranged
)
