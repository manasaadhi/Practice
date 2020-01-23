import time
from selenium import webdriver
browser = webdriver.Firefox()
browser.get('https://www.google.com')

while True:
    time.sleep(15)
    browser.refresh()

