const server=io();
var form=document.getElementById("form");
var input=document.getElementById("input");
var messages=document.getElementById("messages");

form.addEventListener('submit',(e)=>{
    e.preventDefault();
    var input_in_box=input.value;
    socket.emit('chat message',input_in_box);

    var msgbubble=document.createElement('div');
    msgbubble.textContent=input_in_box;
    messages.appendChild(msgbubble);
    msgbubble.classList.add('msgbubble');


});

