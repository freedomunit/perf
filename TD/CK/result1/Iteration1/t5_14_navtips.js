

/* cookie functions from QuirksMode */
function setCookie (name,value,days) {
    if (days)
    {
        var date = new Date();
        date.setTime(date.getTime()+(days*24*60*60*1000));
        var expires = "; expires="+date.toGMTString();
    }
    else var expires = "";
    document.cookie = name+"="+value+expires+"; path=/";
}

function getCookie (name) {
    var nameEQ = name + "=";
    var ca = document.cookie.split(';');
    for(var i=0;i < ca.length;i++)
    {
        var c = ca[i];
        while (c.charAt(0)==' ') c = c.substring(1,c.length);
        if (c.indexOf(nameEQ) == 0) return c.substring(nameEQ.length,c.length);
    }
    return null;
}

/* onclick function to remove nav tip */
function removenavtip() {
    /* set a cookie for 10 years to stop showing nav tip */
    setCookie('hidenavtip', '1', 365*10);

    /* hide every div on the page with the class name 'newnavtip' */
    var ads = document.getElementsByTagName('div');
    for (var i=0;i < ads.length;i++) {
        if (ads[i].className == 'newnavtip') {
            ads[i].style.display = 'none';
        }
    }

    return false;
}

/* don't show if the cookie is there */
if (getCookie('hidenavtip') != '1') {
    document.write('<div id="navtip" class="tipUP"><div class="tt"></div><div class="tm">PLEASE CLICK HERE TO OPEN &amp;<br />CLOSE THE NEW NAVIGATION</div><div class="tb"><img src="/images/common/checkbox_s.gif" class="inline" border="0" onclick="return removenavtip()" /> Don&#39;t show this again</a></div></div>');
}