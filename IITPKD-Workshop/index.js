const express=require(express);//whatever function is 
//there in the express module, we are importing it to variable express

//Construct is used to initialize the object
//it is a special function with same name as variable name
//it is called when we create an object
//we are creating an object of express
//we are calling the constructor of express


const app=express();//app is an object of express
//app is a server

const port=3000;//port is a variable
//port is a number


function func()
{
    console.log('server is lostening at port 3000');

}
var student=[10];




app.listen(port,func);//listen is a function.

const express=require('express')
const app=express();
const port=3000;

app.get('/local',(req,res)=>{
    res.send('Hello World!');
}
);
app.get('/about',(req,res)=>{
    res.send('About us');
}
);

app.listen(port,()=>{
    console.log('server is listening at port 3000');
}
);

