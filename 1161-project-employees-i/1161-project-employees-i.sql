/* Write your T-SQL query statement below */
select p.project_id , ROUND(avg(e.experience_years * 1.) , 2) as average_years 
from Project p, Employee e
where e.employee_id = p.employee_id 
group by project_id
order by p.project_id
