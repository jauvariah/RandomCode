from selenium import webdriver
from selenium.common.exceptions import TimeoutException
from selenium.webdriver.support.ui import WebDriverWait # available since 2.4.0
from selenium.webdriver.support import expected_conditions as EC # available since 2.26.0
import time

driver = webdriver.Firefox()
driver.get("http://www.pof.com")
username = driver.find_element_by_id("username")
#Enter your username inside the quote
username.send_keys("")
password = driver.find_element_by_id("password")
#Enter your password inside the quote
password.send_keys("")
password.submit()

try:
    meetme = driver.find_element_by_class_name("en_meetme")

    href = meetme.find_element_by_css_selector("a").get_attribute('href')
    print href
    driver.get(href)
    time.sleep(1)

    #This clicks Yes 1000 times
    #If you want, changed 1000 to desired number of times
    for i in range (0, 1000):
        driver.implicitly_wait(5)
        yes = driver.find_element_by_name("votea")
        yes.click()

finally:
    driver.quit()
