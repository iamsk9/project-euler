<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>1</title>
</head>

<body>
<?php
set_time_limit(300);
function nod($k)
{
	$d=0;
	for($i=1;$i<=sqrt($k);++$i)
	{
		if($k%$i==0)
		++$d;
	}
	--$i;
	if($i*$i==$k)
	return 2*$d-1;
	else
	return 2*$d;
}
$i=0;
$tn=0;
$max=1;
while(1)
{
	++$i;
	$tn+=$i;
	$l=nod($tn);
	if($max<$l)
	$max=$l;
	//if($i%500==0)
	//echo $l;
	//echo $i." ".$tn." ".nod($tn)."<br/>";
	if($l >500)
	{
		echo $i."<br/>".$tn."<br/> ".$l;
		break;
	}
}
?>

</body>
</html>