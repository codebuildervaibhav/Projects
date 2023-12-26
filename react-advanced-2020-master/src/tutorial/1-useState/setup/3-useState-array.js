import React from 'react';
import { data } from '../../../data';

const UseStateArray = () => {
  const [people, setPeople] = React.useState(data);
  const removeItem = (id) => {
    setPeople((oldPeople) => {
          let newPeople = oldPeople.filter((person) => person.id !== id);

      return
    })
    
  }
  return <h2>
    {
      people.map((person) => {
        const {id,name}= person
        console.log(person);
        return (
          <div key={id} className='item'>
            <h4>
              {name}
            </h4>
            <button onClick={()=> removeItem(id)}>remove</button>
          </div>
        );
      })}
    <button className='btn' onClick={()=> setPeople([])}>
      clear items
    </button>
  </h2>;
};

export default UseStateArray;
