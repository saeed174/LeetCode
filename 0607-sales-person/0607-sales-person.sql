/* Write your T-SQL query statement below */
select sp.name 
from SalesPerson sp
where sales_id not in
(
    select sales_id 
    from Orders o join Company cm
    on o.com_id = cm.com_id
    where cm.name = 'RED'
)