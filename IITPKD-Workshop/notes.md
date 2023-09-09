# Asunchronous Programming

## What is Asynchronous Programming?
asynchronous programming is a means of parallel programming in which a unit of work runs separately from the main application thread and notifies the calling thread of its completion, failure or progress.

//js is a single threaded programming language


## why Asynchronous Programming?
## Event loop in js
event loop is a single threaded loop that monitors the call stack and the callback queue. If the call stack is empty, the event loop will take the first event from the queue and will push it to the call stack, which effectively runs it.

## Callbacks
A callback is a function passed as an argument to another function

## Promises
A promise is an object that may produce a single value some time in the future: either a resolved value, or a reason that it’s not resolved (e.g., a network error occurred). A promise may be in one of 3 possible states: fulfilled, rejected, or pending.

## Async/Await
The async function declaration defines an asynchronous function, which returns an AsyncFunction object. An asynchronous function is a function which operates asynchronously via the event loop, using an implicit Promise to return its result. But the syntax and structure of your code using async functions is much more like using standard synchronous functions.

await is like asking a question. "Are you done yet?" If the answer is "yes", then you get the result. If the answer is "no", then you wait until the answer is "yes".

