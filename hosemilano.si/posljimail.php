<?php
$mail_to = "info@hosemilano.si";
$mail_from_name = $_POST["email"];
$subject = $_POST["subject"];
$body = $_POST["body"];
$attachment = $_FILES["file"]["tmp_name"]; // Get the temporary name of the uploaded file

// SMTP settings (if you decide to use SMTP)
$smtp_server = "mail.hosemilano.si";
$smtp_port = 465;
$smtp_username = "info@hosemilano.si";
$smtp_password = "REDACTED_PASSWORD"; // Use the email account's password

// Prepare the email headers
$headers = "From: $mail_from_name <$mail_from_name>\r\n";
$headers .= "Reply-To: $mail_from_name <$mail_from_name>\r\n";
$headers .= "MIME-Version: 1.0\r\n";
$headers .= "Content-Type: multipart/mixed; boundary=\"$boundary\"\r\n";

// Prepare the message body
$message = "--$boundary\r\n";
$message .= "Content-Type: text/plain; charset=UTF-8\r\n";
$message .= "Content-Transfer-Encoding: 7bit\r\n\r\n";
$message .= $body . "\r\n\r\n"; // Add the email body

// Attach the file if it was uploaded
if (isset($attachment) && is_uploaded_file($attachment)) {
    $file_content = file_get_contents($attachment);
    $file_name = $_FILES["file"]["name"];
    $message .= "--$boundary\r\n";
    $message .= "Content-Type: application/octet-stream\r\n";
    $message .= "Content-Transfer-Encoding: base64\r\n";
    $message .= "Content-Disposition: attachment; filename=\"$file_name\"\r\n\r\n";
    $message .= base64_encode($file_content) . "\r\n";
}

$message .= "--$boundary--\r\n"; // End of the boundary

// Send the email
if (mail($mail_to, $subject, $message, $headers)) {
    echo "Email sent successfully.";
} else {
    echo "Email sending failed.";
}

session_start();
$_SESSION["msg"] = "Uspešno poslano sporočilo.";
header("Location: /");
?>
