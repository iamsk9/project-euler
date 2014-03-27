<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>14</title>
</head>

<body>

<?php
set_time_limit(300);
function steps($k)
{
	$d=0;
	while($k!=1)
	{
		if($k%2==0)
		$k/=2;
		else
		$k=$k*3+1;
		
		++$d;
	}
	return $d+1;
}

$a=1;
$b=1;
for($i=1;$i<1000000;++$i)
{
	$t=steps($i);
	if($a<$t)
	{
		$a=$t;
		$b=$i;
	}
}
echo $b;
?>
</body>
</html>