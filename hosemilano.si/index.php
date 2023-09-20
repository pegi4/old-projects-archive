<!DOCTYPE html>
<html lang="en">
<head>

    <!-- META DATA -->
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <!-- PAGE DATA -->
    <title>Website - blank design & widgets</title>
    <link rel="icon" href="icon.png" type="image/png">

    <!-- STYLE -->
    <link rel="stylesheet" href="style.css">

    <!-- FONTS & ADDONS-->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Roboto+Slab:wght@700&family=Roboto:ital,wght@0,100;0,300;0,400;0,500;0,700;0,900;1,100;1,300;1,400;1,500;1,700;1,900&family=Space+Grotesk&display=swap" rel="stylesheet">

    <!-- META TAGS -->
    <meta name="keywords" content="hosemilano, hosemilano.si, hosemilano izdelava spletnih strani, izdelava spletnih stvari, spletne rešitve, hose milano, jože štrucl, joše hose štrucl izdelava spletnih strani">

    <meta name="description" content="Smo mlada nadobudna ekipa, ki s svojim znanjem o razvijanju spletnih rešitev poskuša odpreti obzorja svetovnega sveta čim več">

    <link rel="canonical" href="https://www.hosemilano.si/">

    <!-- OG META TAGS -->
    <meta property="og:title" content="Hose Milano">
    <meta property="og:description" content="Smo mlada nadobudna ekipa, ki s svojim znanjem o razvijanju spletnih rešitev poskuša odpreti obzorja svetovnega sveta čim več">
    <meta property="og:image" content="https://www.hosemilano.si/logo.png">
    <meta property="og:url" content="https://www.hosemilano.si/">
    <meta property="og:type" content="website">

</head>
<body>

    <?php
        session_start();
        if (isset($_SESSION["msg"])) {
            $msg = $_SESSION["msg"];
            echo "<script>alert('$msg');</script>";
            unset($_SESSION["msg"]);
        }
    ?>

    <section class="screen">
        <div class="widget" id="head">
            <img id="logo" src="logo.png" alt="website logo">
        </div>
        <div class="photo-poster">
            <div style="background-color:#284357;" class="poster-photo-cover"></div>
            <div class="poster-text-box">
                <h1>Spletne rešitve</h1>
                <p>& razvijanje spletnih aplikacij</p>
            </div>
            <img class="poster-photo" src="front-photo.png" alt="">
        </div>
    </section>

    <section class="screen">
        <div class="widget-two-parts">
            <div class="widget-left">
                <h1>Kdo smo</h1>
                <p>Smo izkušeno programersko podjetje, ki se že vrsto let uspešno ukvarja z razvojem in oblikovanjem spletnih rešitev, spletnih strani ter aplikacij. Naša zgodovina sega globoko v digitalno dobo, in skozi vsa ta leta smo pridobili neprecenljive izkušnje in znanje, ki nam omogočajo, da nenehno rastemo in se prilagajamo spreminjajočemu se digitalnemu okolju.</p>
            </div>
            <div class="widget-right">
                <img class="widget-two-parts-img" src="/images/media/onas.png" alt="">
            </div>
        </div>

        <div class="widget-two-parts">
            <div class="widget-left">
                <img class="widget-two-parts-img" src="/images/media/vizija.png" alt="">
            </div>
            <div class="widget-right">
                <h1>Vizija podjetja</h1>
                <p>Naša vizija je ustvarjati digitalne rešitve, ki spreminjajo način, kako ljudje doživljajo in uporabljajo tehnologijo. Želimo postati gonilna sila za inovacije in razvoj v digitalnem svetu ter s svojim delom omogočiti našim strankam, da dosežejo vrhunske rezultate. Verjamemo v trajnostno rast, ki temelji na kakovosti, zanesljivosti in predanosti, ter si prizadevamo za dolgoročne partnerske odnose z našimi naročniki. Naša vizija je oblikovati prihodnost digitalne dobe skupaj z našimi strankami, tako da lahko skupaj dosežemo več.</p>
            </div>
        </div>

        <div class="widget form">
            <form action="/posljimail.php" method="POST" class="form-form" enctype="multipart/form-data">
                <h1>Kontaktiraj nas</h1>
                <input placeholder="Vpiši svoj e-naslov" type="email" name="email" id="">
                <input placeholder="Tema sporočila" type="text" name="subject" id="">
                <textarea placeholder="Spoštovani..." name="body" id="" rows="10"></textarea>
                <label style='font-size:75%; font-weight:bold; color:lightgray;'>Po potrebi dodaj datoteko</label>
                <input type="file" name="file">
                <input class="submit-form" type="submit" value="Pošlji">
            </form>

            <br><br>
            <hr>
        </div>
        
    </section>

    <section id="footer">
        <div class="widget">
            <img id="logo-footer" src="logo.png" alt="website logo">
            <p id="copyright-text">hosemilano.si &copy; 2023</p>
            <span style='font-size:75%; font-weight:bold; color:lightgray;'>VSE PRAVICE PRIDRŽANE</span>
        </div>
    </section>
</body>
</html>