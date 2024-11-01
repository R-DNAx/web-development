<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Netflix-Inspired Page</title>

</head>
<style>
    body {
        background: url('https://assets.nflxext.com/ffe/siteui/vlv3/7c0e18aa-2c95-474d-802e-7f30e75dcca4/web/IN-en-20241014-TRIFECTA-perspective_e7121311-c11e-4809-a3e6-22abffa33569_large.jpg') no-repeat center center fixed;
        /* replace with actual image URL */
        background-size: cover;
        font-family: Arial, sans-serif;
        color: #fff;
        text-align: center;
        padding: 0 20px;
    }

    .container {
        max-width: 600px;
        margin: 0 auto;
        padding-top: 100px;
    }

    h1 {
        font-size: 2.5em;
        margin-bottom: 0.5em;
    }

    h2 {
        font-size: 1.5em;
        margin-bottom: 1.5em;
    }

    .email-form {
        display: flex;
        flex-direction: column;
        align-items: center;
    }

    .input-container {
        position: relative;
        margin: 20px 0;
        width: 100%;
    }

    input {
        width: 100%;
        padding: 10px 10px 10px 5px;
        background: none;
        border: none;
        border-bottom: 1px solid #ccc;
        box-shadow: none;
        outline: none;
        font-size: 16px;
        color: #fff;
        transition: all 0.2s ease;
    }

    input:focus~label,
    input:valid~label {
        top: -20px;
        font-size: 12px;
        color: #e50914;
        /* Netflix red */
    }

    label {
        position: absolute;
        top: 10px;
        left: 5px;
        font-size: 16px;
        color: #aaa;
        transition: all 0.2s ease;
        pointer-events: none;
    }

    button {
        background-color: #e50914;
        /* Netflix red */
        color: white;
        padding: 10px 20px;
        border: none;
        cursor: pointer;
        font-size: 16px;
        transition: background-color 0.2s ease;
    }

    button:hover {
        background-color: #f40612;
    }
</style>

<body>
    <div class="container">
        <h1>Unlimited movies, TV shows, and more.</h1>
        <h2>Watch anywhere. Cancel anytime.</h2>
        <form class="email-form">
            <div class="input-container">
                <span><input type="email" id="email" placeholder=" " required></span>
                <label for="email">Email Address</label></span>
                <span><button type="submit">Get Started</button></span>
            </div>
            
        </form>
    </div>

</body>

</html>