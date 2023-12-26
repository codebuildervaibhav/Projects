import React, { createElement } from "react";
import ReactDOM from "react-dom";
import './index.css';
//stateless functional component
//always jsx
//nested react components React tools
//css
import { books } from './Books';
import Book from "./book";
//setup vars 
//const booksL=books.map()

 function BookList() {
   return (
     <section className="booklist">
       {books.map((book) => {
         //        const { img, title, author } = book;
         return <Book key={book.id} {...book}></Book>;
       })}
     </section>
   );
 }

 

       
ReactDOM.render(<BookList> </BookList>,
  document.getElementById("root"));