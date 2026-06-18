# Write your MySQL query statement below
SELECT user_id, email
FROM Users
WHERE email REGEXP '^[a-z0-9_]+@[^@0-9]+\\.com$' ORDER BY user_id;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna