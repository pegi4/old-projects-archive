import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText

# Gmail podatki
gmail_user = 'pintart027@gmail.com'
gmail_password = "REDACTED_PASSWORD"

# Seznam prejemnikov
recipients = [
    "vito.senic@gmail.com",
    "vitos.senic@gmail.com",
    # Dodajte več e-poštnih naslovov tukaj
]

# E-poštni template
html = """
<!DOCTYPE html>
<html lang="sl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <p>Spoštovani,</p>
    <p>Pišem vam v želji po pridobitvi študentskega dela v vaši odvetniški pisarni. Sem Lara Žigon, študentka Pravne fakultete v Mariboru, kjer sem uspešno zaključila prvi letnik. Letos bom dopolnila 20 let in prihajam iz okolice Maribora. Tekoče govorim angleško, osnovno pa tudi špansko.</p>
    <p>Zelo me zanima možnost dela v vaši odvetniški pisarni, saj verjamem, da bi mi to omogočilo pridobivanje dragocenih praktičnih izkušenj in prispevanje k vašemu uspehu. Za delo bi bila na voljo od 5. avgusta naprej. Z veseljem bi delo nadaljevala tudi med študijem.</p>
    <p>Čeprav še nimam delovnih izkušenj, sem zelo motivirana, hitra pri učenju in pripravljena sprejeti različne naloge. Med študijem sem pridobila osnovno razumevanje pravnih konceptov, izboljšala svoje pisne in komunikacijske veščine ter se naučila delati pod pritiskom. Zelo dobro se znajdem pri uporabi računalnika, še posebej programov Word in Excel, in se z veseljem učim novih tehnologij, ki bi mi pomagale pri boljši opravljanju dela.</p>
    <p>Prepričana sem, da lahko s svojo zagnanostjo in delovno etiko pozitivno prispevam k vašemu timu. Veselim se priložnosti, da se osebno predstavim in se pogovorim o tem, kako lahko doprinesem k vašemu uspehu. Hvala za vaš čas in priložnost.</p>
    <p>Lep pozdrav,<br>
    Lara Žigon</p>
</body>
</html>
"""

# Ustvarjanje e-poštnega sporočila
for recipient in recipients:
    msg = MIMEMultipart('alternative')
    msg['From'] = gmail_user
    msg['To'] = recipient
    msg['Subject'] = "Prošnja za študentsko delo"

    part1 = MIMEText(html, 'html')
    msg.attach(part1)

    try:
        # Povezava s strežnikom Gmail
        server = smtplib.SMTP('smtp.gmail.com', 587)
        server.starttls()
        server.login(gmail_user, gmail_password)
        
        # Pošiljanje e-pošte
        server.sendmail(gmail_user, recipient, msg.as_string())
        server.quit()
        print(f'E-pošta poslana na {recipient}')
    except Exception as e:
        print(f'Napaka pri pošiljanju e-pošte na {recipient}: {e}')
