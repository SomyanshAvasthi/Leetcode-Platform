SELECT e1.name
FROM employee e1
LEFT JOIN employee e2 ON e1.id=e2.managerId
GROUP BY e1.name, e2.managerid
HAVING COUNT(e2.id) >= 5
-- this question has 2 edge cases
-- one with same name diff id
-- 2nd with null names in all col

-- approach
-- remember in ms sql 
-- group by can have any condition for grouping the table but for sure it must have the select clause
-- if you will not add it will throw runtime error
-- another takeaway is that name can be null but id cannot be null so try to take e2.id in having instead of e2.name