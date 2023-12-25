import React from "react";
import ReactDOM from "react-dom";
import './index.css';
//stateless functional component
//always jsx
//nested react components React tools
//css

//setup vars 
const firstBook={
  img : "https://images-eu.ssl-images-amazon.com/images/I/61+C5NBJCFL._AC_UL320_SR320,320_.jpg",
  title : "THE 48 LAWS OF POWER Paperback – Notebook, 20 November 2000",
  author : "Robert Grene"
   
}
const secondBook = {
  img: "https://m.media-amazon.com/images/I/715qi-cIbML._AC_UY327_FMwebp_QL65_.jpg",
  title: "Don't Believe Everything You Think (English)",
  author: "by Joseph Nguyen",
};


 function BookList() {
   return (
     <section className="booklist">
       <Book
         img={firstBook.img}
         title={firstBook.title}
         author={firstBook.author}
       />
       <Book
         img={secondBook.img}
         title={secondBook.title}
         author={secondBook.author}
       />
     </section>
   );
 }

const Book = (props) => { 
  //  console.log(props);
  const { img, title, author } = props;
  return (
    <article className="book">
      <img src={props.img}  alt="" />
      <h1>{props.title}</h1>
      <h4> {props.author} </h4>
    </article>
  );
};


function Author() {
  return (
    <h4 style={{ color: '#617d98', fontSize: '0.75rem', marginTop: '0.25rem' }}>
      Robert Grene
    </h4>);
}
ReactDOM.render(<BookList> </BookList>,
  document.getElementById("root"));