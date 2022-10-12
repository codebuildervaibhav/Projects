let http= require("http")

let ourApp=http.createServer(function(req, res){
 //   console.log(req.url)
 if (req.url=="/") {
   return res.end("Hello, and welcome to our website.")
 }
 if (req.url=="/about") {
   return res.end("thankyou for showing intrest in your company")
 }
 
 return res.end("we cannot fid your page")

});
ourApp.listen(3000)