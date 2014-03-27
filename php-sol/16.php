<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>16</title>
</head>

<body>
<?php

$a=1;
for($i=1;$i<=1000;++$i)
{
	$a*=2;
}
$a=number_format($a);
echo $a."<br/>";
$sum=0;
for($i=0;$i<strlen($a);++$i)
{
	//$t=$a[i];
	$sum+=($a[$i]);
}
echo "<br/>".$sum;
?>
</body>
</html>