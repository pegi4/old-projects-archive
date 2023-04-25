import './App.css';

function Body() {

  const cYear = new Date().getFullYear();
  const day = new Date('December 2, 1975, 17:15:30').getUTCHours();
  let dayName;
  let dayColor = {
    color: "",
    backgroundColor: ""
  };

  if (day < 12 && day > 4) {
    dayName = "Good Morning";
    dayColor.color = "red";
  }
  else if (day < 18 && day > 12) {
    dayName = "Good Afternoon";
    dayColor.color = "green";
    dayColor.backgroundColor = "#26911e";
  }
  else {
    dayName = "Good Evening";
    dayColor.color = "blue";
    dayColor.backgroundColor = "#1e5991";
  }

  return (
    <div className="App">
      <h2 className="header" style={dayColor}>{dayName}</h2>
      <p> Copyright {cYear}</p>
    </div>
  );
}

export default Body;