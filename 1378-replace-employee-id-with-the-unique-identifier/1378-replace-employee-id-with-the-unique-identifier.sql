/* Write your T-SQL query statement below */
select ne.unique_id , e.name
from Employees e left join EmployeeUNI ne
on e.id = ne.id
