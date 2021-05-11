import React from 'react';

class Footer extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
        data: this.data,
    };
  }
  render() {
    return (
      <div>
        <button onClick={() => { if (!isRunning) {
          funcStart();
          isRunning = true;
        } else {
          funcPause();
          isRunning = false;
        } }}>開始</button>
    
        <button onClick={() => { i = 0;
          clearInterval(timer);
          $("sec").innerHTML = '00';
          $("min").innerHTML = '00';
          $("btn").innerHTML = "開始"; }}>採点する</button>
        </div>
    );
  }
}

export default Footer;
