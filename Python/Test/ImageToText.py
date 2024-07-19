import pytesseract
from PIL import Image

# Open the image
image = Image.open("slika.jpg")

# Use pytesseract to extract the text from the image
text = pytesseract.image_to_string(image)

print(text)