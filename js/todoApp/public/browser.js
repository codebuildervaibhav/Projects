
document.addEventListener("click",function(e){
if(e.target.classList.contains("edit-me"))
{
    let userInput= prompt("enter the desired new text")
    console.log(userInput)
}
})


