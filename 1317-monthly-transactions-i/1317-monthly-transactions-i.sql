# Write your MySQL query statement below
SELECT 
    DATE_FORMAT(trans_date, '%Y-%m') AS month
    ,country
    ,COUNT(id) AS trans_count
    ,SUM(CASE WHEN state='approved' THEN 1 ELSE 0 END) AS approved_count
    ,SUM(amount) AS trans_total_amount
    ,SUM(CASE WHEN state='approved' THEN amount ELSE 0 END) AS approved_total_amount
FROM transactions
GROUP BY month, country

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna