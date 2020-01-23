from selenium import webdriver
import time
browser = webdriver.Firefox()

browser.get('https://mail.mirafra.com/roundcubemail/?_task=logout&_token=b41cda1a3688dc22fabcfae9b6df2cd4')
time.sleep(20)
emailElem = browser.find_element_by_id('rcmloginuser')
emailElem.send_keys('manasaadhi@mirafra.com')
passwordElem = browser.find_element_by_id('rcmloginpwd')
passwordElem.send_keys('manasa9035')
signinButton = browser.find_element_by_id('Login')
signinButton.click()
