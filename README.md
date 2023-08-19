# Сообщения можно отправлять только в общий чат
# Сервер нужно запускать с бд postgresql

# CREATE DATABASE ChatDB

# CREATE TABLE users(id SERIAL PRIMARY KEY, username VARCHAR(255), password VARCHAR(255))

# CREATE TABLE messages (
#   message_id SERIAL PRIMARY KEY,
#   sender_id INT,
#   recipient_id INT NULL,
#   content TEXT NOT NULL,
#   FOREIGN KEY (sender_id) REFERENCES users(id) ON DELETE CASCADE,
#   FOREIGN KEY (recipient_id) REFERENCES users(id) ON DELETE CASCADE)
