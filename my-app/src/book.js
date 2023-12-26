import React from 'react'

const book = ({ img, title, author }) => {
  //attribute, event handler
  //onClick,onmouseover
  const clickHandler = (e) => {
    console.log(e);
    console.log(e.target);
    alert("hellow world");
  };
  const complexExample = (author) => {
    console.log(author);
  };
  return (
    <article
      className="book"
      onMouseOver={() => {
        console.log(author);
      }}
    >
      <img src={img} alt="" />
      <h1 onClick={() => console.log(title)}>{title}</h1>
      <h4> {author} </h4>
      <button type="button" onClick={clickHandler}>
        {" "}
        reffrence{" "}
      </button>
      <button type="button" onClick={() => complexExample(author)}>
        morecomplex example
      </button>
    </article>
  );
};


export default book;