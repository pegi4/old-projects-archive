/*$("h1").on("mouseover",function() {
    $("h1").hide();
});*/

/*$(document).keypress(function(event) {
   $("h1").text(event.key);
   var i = event.key;
   console.log(i);
});*/

$("button").on("click",function() {
    $("h1").slideUp().slideDown().animate({opacity: 0.5})
});