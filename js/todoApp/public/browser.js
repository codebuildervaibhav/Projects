
document.addEventListener("click",function(e){
if(e.target.classList.contains("edit-me"))
{
    let userInput= prompt("enter the desired new text")
    axios.post('/update-item',{text:userInput }).then(function(){
        // do something here in next vid
    }).catch(function(){
        console.log("please try again later.")
    })

}
})