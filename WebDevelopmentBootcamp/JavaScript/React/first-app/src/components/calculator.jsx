import './App.css';
import * as math from './calculator-functions';

function Calculator(options) {
    return (
        <div className="App">
            <h1>Calculator</h1>
            <div className="listContainer">
                <ul className="list">
                    <li>1 + 2 = {math.add(1, 2)}</li>
                    <li>1 - 2 = {math.subtract(1, 2)}</li>
                    <li>1 * 2 = {math.multiply(1, 2)}</li>
                    <li>1 / 2 = {math.divide(1, 2)}</li>
                </ul>
            </div>
        </div>
    );

}

export default Calculator;