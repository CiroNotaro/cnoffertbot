function ciroNotaroRisposta()
{

var i = 0;
var tmp;
for(i = 0; i < 4; i++)
{
	tmp = document.getElementById("quiz-options").children[i].getAttribute("quiz-option");
	if(tmp == "1")
	{
		alert(document.getElementById("quiz-options").children[i].children[0].innerHTML);
		break;
	}
}

}
