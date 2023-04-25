var numberOfDrumButtons = document.querySelectorAll(".drum").length;

for (var i = 0; i < numberOfDrumButtons; i++) {
    document.querySelectorAll(".drum")[i].addEventListener("click", function() {
        
        var buttonInnerHTML = this.InnerHTML;
        
        var audio = new Audio("sounds/" + buttonInnerHTML + ".mp3");
        audio.play();

        console.log(buttonInnerHTML);

    });
}
