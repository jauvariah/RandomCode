This needs to be done using Selenium Web-driver written in Python. I’d like to see how you would put together a test script.
 
#Script procedures
1. Go to 'www.google.ca' and search for 'mercatus technologies'
2. Scan first 10 pages of search results and find out which links point to pages that contain sentences below :
--*"Partnering with Mercatus to tap into their retail industry expertise and insight has been pivotal to our digital
engagement strategy"
--*"These values help grocers deliver deep customer engagement"
--*"We partnered with Mercatus Technologies to provide the Price Chopper grocery chain and its 119 locations in the US a
new web and CMS foundation incorporating data-driven features such as e-coupons, shopping lists, and loyalty
programs/registration."
3. Find out which scanned pages do not have a .html extension
4. When finished, program should generate a .txt file that have reports for each sentence and none-html URLs.
 
#Report style
--Sentence: "Partnering with Mercatus to tap into their retail industry expertise and insight has been pivotal to our
digital engagement strategy"
-- Google page: <the google's page where the link was found>
-- Link title: <the title of the link on google results page that contains sentence>
-- Full paragraph: <the full paragraph that contains the required sentence>
 
-- Sentence: "These values help grocers deliver deep customer engagement"
-- Google page: <the google's page where the link was found>
-- Link title: <the title of the link on google results page that contains sentence>
-- Full paragraph: <the full paragraph that contains the required sentence>
 
-- Sentence: "We partnered with Mercatus Technologies to provide the Price Chopper grocery chain and its 119 locations in
the US a new web and CMS foundation incorporating data-driven features such as e-coupons, shopping lists, and loyalty
programs/registration."
-- Google page: <the google's page where the link was found>
-- Link title: <the title of the link on google results page that contains sentence>
-- Full paragraph: <the full paragraph that contains the required sentence>
-- None-html URLs: <list of URLs that do not have a .html extension>