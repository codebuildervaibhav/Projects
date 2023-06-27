 const fs=require("fs");

const { log } = require("console");
const { on } = require("events");

// fs.open("Samples.txt","r",(error,fd) => {
//     if (error)
//     console.log(error);


//     // fs.writeFile(fd,data)=>{
//     //     console.log
//     // }

//     fs.writeFile
// })

const buf= Buffer.from("hello   world");
console.log(buf);
let data=Buffer.alloc(20,0);
console.log (data);


constfs=require("fs");

let readStream= fs.createReadStream("sample.txt");

readStream.on("data",data   => {
    console.log("********************************");
    console.log(data);
    console,log("********************************");

});

