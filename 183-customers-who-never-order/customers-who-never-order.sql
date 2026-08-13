# Write your MySQL query statement below
SELECT c.name AS Customers
From Customers c
Left Join Orders o
On c.id = o.customerId
Where o.customerId IS NUll;