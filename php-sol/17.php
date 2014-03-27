<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>17</title>
</head>
<body>
<?php


$digit=array();
$unit=array(0,3,3,5,4,4,3,5,5,4);
$tens=array(0,0,6,6,5,5,5,7,6,6);
$backchod=array(0,6,6,8,8,7,7,9,8,8);

$sum=0;
for($i=1;$i<1000;++$i)
{
	$temp_sum=0;
	$k=array(0,0,0);
	$t=$i;
	for($j=0;$j<3;++$j)
	{
		$k[$j]=$t%10;
		$t/=10;	      
	}
	
	for($j=2;$j>=0;--$j)
	{
		switch($j)
		{
			case 2:
				if($k[2]!=0)
				$temp_sum+=$unit[$k[2]]+10;
				
				if($k[0]==0 && $k[1]==0)
				$temp_sum-=3;
				break;
			case 1:
			     if($k[1]!=1)
				 $temp_sum+=$tens[$k[$j]];
				 else if($k[0]!=0)
				 $temp_sum+=$backchod[$k[0]];
				 else
				 $temp_sum+=3;
				 break;
			case 0;
					if($k[1]!=1)
					$temp_sum+=$unit[$k[0]];
					break;
		}
		
	}
	
	echo $i." ".$temp_sum."<br/>";
	$sum+=$temp_sum;
}

	
	
echo $sum+11;
?>
</body>
</html>