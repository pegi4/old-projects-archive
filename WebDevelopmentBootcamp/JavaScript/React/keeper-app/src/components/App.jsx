import React, { useState } from 'react';
import '../App.css';
import Header from './Header';
import Footer from './Footer';
import Note from './Note';
import CreateArea from "./CreateArea";

function App() {

  const [notes, setNotes] = useState([]);

  function addItem(inputText) {
    setNotes((prevItems) => {
      return [...prevItems, inputText];
    });
  }

  function deleteItem(id) {
    setNotes((prevItems) => {
      return prevItems.filter((item, index) => {
        return index !== id;
      });
    });
  }

  return (
    <React.StrictMode>
      <Header />
      <CreateArea addItem={addItem} />
      {notes.map((item, index) => {
        return (
          <Note
            key={index}
            id={index}
            title={item.title}
            content={item.content}
            onDelete={deleteItem}
          />
        );
      })}
      <Footer />
    </React.StrictMode>
  );
}

export default App;
