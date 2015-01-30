from selenium import webdriver
from selenium.common.exceptions import TimeoutException
from selenium.webdriver.support.ui import WebDriverWait # available since 2.4.0
from selenium.webdriver.support import expected_conditions as EC # available since 2.26.0
import time

firstSentence = "Partnering with Mercatus to tap into their retail industry expertise and insight has been pivotal to our digital engagement strategy"
secondSentence = "These values help grocers deliver deep customer engagement"
thirdSentence = "We partnered with Mercatus Technologies to provide the Price Chopper grocery chain and its 119 locations in the US a new web and CMS foundation incorporating data-driven features such as e-coupons, shopping lists, and loyalty programs/registration."

#The initial driver, input, query, and submit.
driver = webdriver.Firefox()
driver.get("http://www.google.ca")
inputElement = driver.find_element_by_name("q")
inputElement.send_keys("mercatus technologies")
inputElement.submit()

try:
    #Delay for query page to load
    time.sleep(2)


    #This list will store links for google's 10 result pages
    googlePageLinks = []
    googlePageLinks.append(driver.current_url)

    #Getting the element that contains the page links
    googlePages = driver.find_element_by_id("nav").find_elements_by_class_name("fl")

    #Populate googlePageLinks
    for googlePage in googlePages:
        href = googlePage.get_attribute('href')
        googlePageLinks.append(href)

    #The list will store all result URLs from all 10 pages
    resultLinks = []

    #Populate resultLinks with [URL, PageNumber]
    for pageNumber in range (0, len(googlePageLinks)):
        driver.get(googlePageLinks[pageNumber])
        links = driver.find_elements_by_class_name("r")
        for link in links:
            href = link.find_element_by_css_selector('a').get_attribute('href')
            resultLinks.append([href, pageNumber+1])

    #Lists for storing the report data
    resultTitles = ["", "", ""]
    resultPages = [0, 0, 0]
    resultParagraphs = ["", "", ""]
    nonHtml = []

    #Iterate through all links
    for resultLink in resultLinks:

        #Assuming string check against the URL for non-html pages.
        if "html" not in resultLink[0]:
            nonHtml.append(resultLink[0])

        #Grabs all paragraphs from a page. And check against the three sentences.
        #If match, append title, pageNumber, and paragraph to report lists
        driver.get(resultLink[0])
        paragraphs = driver.find_elements_by_css_selector("p")

        #This assumes singular appearance of each sentence.
        if len(paragraphs) != 0:
            for paragraph in paragraphs:
                if firstSentence in paragraph.text:
                    driver.implicitly_wait(25)
                    resultTitles[0] = driver.title
                    resultPages[0] = resultLink[1]
                    resultParagraphs[0] = paragraph.text

                elif secondSentence in paragraph.text:
                    driver.implicitly_wait(25)
                    resultTitles[1] = driver.title
                    resultPages[1] = resultLink[1]
                    resultParagraphs[1] = paragraph.text

                elif thirdSentence in paragraph.text:
                    driver.implicitly_wait(25)
                    resultTitles[2] = driver.title
                    resultPages[2] = resultLink[1]
                    resultParagraphs[2] = paragraph.text


finally:
    driver.quit()

file = open("report.txt", "w")
file.write("First Sentence: " + firstSentence + "\n")
file.write("Google page: " + str(resultPages[0]) + "\n")
file.write("Link Title: " + resultTitles[0] + "\n")
file.write("Full Paragraph: " + resultParagraphs[0].encode('utf-8') + "\n \n")

file.write("Second Sentence: " + secondSentence + "\n")
file.write("Google page: " + str(resultPages[1]) + "\n")
file.write("Link Title: " + resultTitles[1] + "\n")
file.write("Full Paragraph: " + resultParagraphs[1].encode('utf-8') + "\n \n")

file.write("Third Sentence: " + thirdSentence + "\n")
file.write("Google page: " + str(resultPages[2]) + "\n")
file.write("Link Title: " + resultTitles[2] + "\n")
file.write("Full Paragraph: " + resultParagraphs[2].encode('utf-8') + "\n \n")

file.write("Non-HTML URLs: \n")
for url in nonHtml:
    file.write(str(url) + "\n")
