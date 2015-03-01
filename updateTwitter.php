<?php

require_once 'twitter-php-3.5/src/twitter.class.php';

$consumerKey = 'C8u1RAzj9HP7FoCD5eDUOTRJi';
$consumerSecret = 'o4k6nvgM9ILkAdaP7YnqKsDyogV1TrT3Ba7xaiRyvXsWKbr1rz';
$accessToken = '3065016113-GWX7F7UbE4R28LFLcwOXp5sRnam666MUpYc5tPf';
$accessTokenSecret = 'fLt4gEPOe3tjpHG6zldXCqK7xGrY0xCpKNClJaeWNZtrE'; 
// ENTER HERE YOUR CREDENTIALS (see readme.txt)
$twitter = new Twitter($consumerKey, $consumerSecret, $accessToken, $accessTokenSecret);

// See https://dev.twitter.com/docs/api/1.1
try {
	$tweet = $twitter->send('Twitter API IS HERE!'); // you can add $imagePath as second argument

} catch (TwitterException $e) {
	echo 'Error: ' . $e->getMessage();
}


?>