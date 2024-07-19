from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By

browser = webdriver.Firefox()
browser.get("https://www.patt.live/")
signin = browser.find_element(By.CLASS_NAME,"btn01")
assert signin.text == 'Sign In' 

input_element = browser.find_element(By.CSS_SELECTOR,"input[maxlength='140'][enterkeyhint='done'][autocomplete='off'][class='uni-input-input']")
input_element.send_keys('1')

input_element = browser.find_element(By.CSS_SELECTOR,"input[maxlength='140'][enterkeyhint='done'][autocomplete='off'][type='password'][class='uni-input-input']")
input_element.send_keys('1')