const express = require('express');
const app = express();
const port = 3001;

var students = ["Alice", "Bob", "Charlie"]; // Changed 'student' to 'students'

app.use(express.json()); // Middleware to parse JSON data

app.get('/local', (req, res) => {
    res.send('This is local');
});

app.get('/about', (req, res) => {
    res.send('About us');
});

app.get('/student', (req, res) => {
    res.send(students);
});

app.post('/addstudent', (req, res) => {
    const newStudent = req.body.student; // Use req.body to get JSON data
    console.log(newStudent);
    students.push(newStudent); // Push the new student to the 'students' array
    res.send(students);
});

app.listen(port, () => {
    console.log(`Server is listening at port ${port}`);
});
