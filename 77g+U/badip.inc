<?php
/*
ZB BLOCK MAIN BAD IP BLOCKS

These are known bad IP blocks, both range and CIDR, that have been
part of ZB Block since it's inception, with more added as time goes on.
More recent ones are suffixed by a //<version><beta-subversion>

These are compiled with deep respect, and gratefulness from:
http://robtex.com (for the BGP info)
http://forums.modem-help.co.uk/aggregate.php for the data cleaning.


IT IS ILLEGAL TO USE THIS FILE IN WHOLE OR PART WITH WEBDEFENSE WEB ALARM 
OR ANY XYZER PRODUCT DUE TO VIOLATIONS OF THE GNU/GPL V.2

ZB BLOCK, WHEN YOU CARE ENOUGH TO STEAL THE VERY BEST (thanks DEC!)

COPYRIGHT 2008-2015 GNU/GPL V.2 BY MIKE H.
FOR USE WITH ZB BLOCK OR ANY GNU/GPL V.2 COMPLIANT DERIVATIVE
*/

$zbbversion .= ' / BADIP-2015-08+U.5'; // Version number goes here. (product code)-(Year)-(Month)(issue letter)(+U = Unofficial fork, non-mainlined release).(Optional build number)

// *php 5 fix
global $whyblockout, $ax;

// **START SIGNATURES**

// *IPs and IP Ranges

$ax += lmatch($address,'65.94.3.','Site Scraper (IP-001). ');
$ax += lmatch($address,'115.124.102.24','Infected Machine (IP-002). ');
$ax += lmatch($address,'122.221.10.234','Infected Machine (IP-003). ');
$ax += lmatch($address,'188.40.98.199','EYE De UKRAINE, very aggressive spider (IP-004). ');
$ax += lmatch($address,'188.40.42.199','YMC AG, very aggressive spider (IP-005). ');
$ax += iprange($address,'4.78.243.0','4.78.243.255','Quantcast banned network (IP-006). ');
$ax += iprange($address,'41.210.192.0','41.210.255.255','Movicel Telecomunicacoes LDA Angola (IP-007). ');
$ax += iprange($address,'59.93.0.0','59.93.255.255','India bad block (IP-008). ');
$ax += iprange($address,'65.208.151.112','65.208.151.119','Jarvis Universal Purchase Company (IP-011). ');
$ax += iprange($address,'66.7.192.0','66.7.223.255','3IX / host-care (IP-012). ');
$ax += iprange($address,'66.228.192.0','66.228.223.255','Swift Ventures (IP-013). ');
$ax += iprange($address,'67.215.230.0','67.215.230.255','Email harvester from India (setooz.com) (IP-014). ');
$ax += iprange($address,'68.168.216.0','68.168.216.255','Attacking /24 (IP-015). ');
$ax += iprange($address,'69.36.0.0','69.36.15.255','3IX / host-care (IP-016). ');
$ax += iprange($address,'69.72.128.0','69.72.159.255','Hacker/Spammer Hosts (IP-017). ');
$ax += iprange($address,'69.89.16.0','69.89.31.255','Hacker/Spammer Hosts (IP-018). ');
$ax += iprange($address,'69.210.185.0','69.210.185.7','spunge.org (IP-019). ');
$ax += iprange($address,'72.20.99.0','72.20.99.255','Content scraper for paid service (IP-020). ');
$ax += iprange($address,'72.27.0.0','72.27.213.104','Jamaica Spammer Network (frittobay) (IP-021). '); //70a split
$ax += iprange($address,'72.27.213.106','72.27.223.255','Jamaica Spammer Network (frittobay) (IP-022). '); //70a split
$ax += iprange($address,'79.143.177.0','79.143.177.255',"Netherlands Site Host (doesn't need access to other sites) (IP-023). ");
$ax += iprange($address,'80.81.159.0','80.81.159.255','Problematic netblock (IP-024). ');
$ax += iprange($address,'80.81.208.0','80.81.223.255','Problematic netblock (IP-025). ');
$ax += iprange($address,'80.87.152.0','80.87.152.255','Server farm infected with grum spambot (IP-026). ');
$ax += iprange($address,'80.93.122.0','80.93.122.255','Ukrainian Attack Prone Netblock (IP-027). ');
$ax += iprange($address,'81.21.74.0','81.21.74.255','webfusion.co.uk (IP-028). ');
$ax += iprange($address,'81.223.254.0','81.223.254.127','smartservercontrol.com (IP-029). ');
$ax += iprange($address,'83.233.30.0','83.233.33.255','Multiple referer spam block (IP-030). ');
$ax += iprange($address,'84.201.224.0','84.201.239.255','Spam network (IP-031). '); 
$ax += iprange($address,'85.131.188.0','85.131.191.255','.de hosts (IP-032). ');
$ax += iprange($address,'87.101.0.0','87.101.15.255','PureHosting.nl, a possible extention of keyweb.de .ru (bothost) (IP-033). ');
$ax += iprange($address,'87.118.68.0','87.118.122.255','keyweb.de .ru (bothost) (IP-034). ');
$ax += iprange($address,'87.248.64.0','87.248.95.255','Polish Bad Block (IP-035). ');
$ax += iprange($address,'87.248.162.0','87.248.189.255','Moldavia Bad Block (IP-036). ');
$ax += iprange($address,'91.205.40.0','91.205.43.255','British Virgin Islands Spambots (IP-037). ');
$ax += iprange($address,'91.214.44.0','91.214.45.255','Altushost bothost and/or Server Farm (IP-038). ');
$ax += iprange($address,'95.24.0.0','95.24.255.255','Corbina.ru (IP-039). ');
$ax += iprange($address,'113.160.0.0','113.191.255.255','localhost spoofing netblock (IP-044). ');
$ax += cidrblock($address,'118.98.0.0/17','Spammy Indonesia Netblock (IP-045). '); // mod 71h
$ax += iprange($address,'118.175.254.0','118.175.255.255','Bangkok Attack prone 512 address block (IP-046). ');
$ax += iprange($address,'122.182.2.0','122.182.2.255','India spammer/malware host (IP-047). ');
$ax += iprange($address,'124.123.0.0','124.125.255.255','Indian hackers - 192K address netblock is bad (IP-048). ');
$ax += iprange($address,'141.11.0.0','141.11.255.255','technicolor.c0m (IP-049). '); //69d
$ax += cidrblock($address,'178.239.48.0/20','Hostile Belize Block (IP-050). '); //69f
$ax += iprange($address,'187.32.0.0','187.32.255.255','Problematic Brazilian netblock (IP-051). ');
$ax += iprange($address,'173.45.65.155','173.45.65.158','Bot not obeying nofollow (IP-052). '); //71f
$ax += iprange($address,'189.15.0.0','189.15.255.255','Problematic Brazilian netblock (IP-054). ');
$ax += iprange($address,'189.41.0.0','189.41.255.255','Problematic Brazilian netblock (IP-055). ');
$ax += iprange($address,'189.112.0.0','189.112.255.255','Problematic Brazilian netblock (IP-056). ');
$ax += iprange($address,'193.200.150.0','193.200.150.255',"Anonymizing proxy network, hacker's paradise (IP-057). ");
$ax += iprange($address,'194.8.74.0','194.8.75.255','British Virgin Islands Spambots (IP-058). ');
$ax += iprange($address,'195.87.102.0','195.87.102.255','Comment spammer netblock (IP-059). ');
$ax += iprange($address,'195.238.38.0','195.238.71.255','Problematic netblock (IP-060). ');
$ax += iprange($address,'195.238.95.0','195.238.118.255','Problematic netblock (IP-061). ');
$ax += iprange($address,'200.63.42.0','200.63.47.255','panamaserver.com .ru (IP-062). ');
$ax += iprange($address,'200.146.192.0','200.146.255.255','Problematic Brazilian netblock (IP-063). ');
$ax += iprange($address,'200.170.128.0','200.170.255.255','Problematic Brazilian netblock (IP-064). ');
$ax += iprange($address,'200.225.192.0','200.225.255.255','Problematic Brazilian netblock (IP-065). ');
$ax += iprange($address,'200.233.128.0','200.233.255.255','Problematic Brazilian netblock (IP-066). ');
$ax += iprange($address,'201.16.128.0','201.16.255.255','Problematic Brazilian netblock (IP-067). ');
$ax += iprange($address,'201.48.0.0','201.48.255.255','Problematic Brazilian netblock (IP-068). ');
$ax += iprange($address,'203.160.1.0','203.160.1.255','Vietnam Junk Mailer/Forum Spammer (Spoofed as 203.160.1.49 localhost!) (IP-069). ');
$ax += iprange($address,'204.8.34.0','204.8.34.255','Swift Ventures (IP-070). ');
$ax += iprange($address,'204.11.16.0','204.11.19.255','onestop.net (IP-071). ');
$ax += iprange($address,'204.13.164.0','204.13.167.255','Swift Ventures (IP-072). ');
$ax += iprange($address,'204.15.224.0','204.15.255.255','Swift Ventures (IP-073). ');
$ax += iprange($address,'204.124.180.0','204.124.183.255','Comment spammer netblock (IP-074). ');
$ax += iprange($address,'204.244.109.240','204.244.109.247','Tynt, Evil Proxy (IP-075). ');
$ax += iprange($address,'204.244.120.176','204.244.120.183','Tynt, Evil Proxy (IP-076). ');
$ax += iprange($address,'206.161.0.0','206.161.255.255','Questionable Hosts, some malicious. Do not need access to your site (IP-077). ');
$ax += iprange($address,'206.196.110.0','206.196.111.255','Rose Hosting. Does not need access to your site (IP-078). ');
$ax += iprange($address,'207.38.118.0','207.38.118.255','Scraper Network (IP-079). '); //69b
$ax += iprange($address,'207.226.88.0','207.226.95.255','many sitehosts - questionable behavior (IP-080). ');
$ax += iprange($address,'208.64.28.0','208.64.31.255','.bh servers caught being b.h. surfers (IP-081). ');
$ax += iprange($address,'208.64.200.0','208.64.203.255','Accentra Inc. , Bothost and/or Server Farm (IP-082). ');
$ax += iprange($address,'208.64.230.0','208.64.230.127','Possible Terrorist Serverblock (credit: diabolicbg!) (IP-083). ');
$ax += iprange($address,'208.99.192.0','208.99.255.255','Swift Ventures spam/scrape network (IP-084). ');
$ax += iprange($address,'208.115.111.240','208.115.111.255','Dotbot - Paid Service SEO Service (Keyword Spamming Aides) (IP-085). ');
$ax += iprange($address,'209.62.96.0','209.62.127.255','Questionable Hosts, some malicious. Do not need access to your site (IP-086). ');
$ax += iprange($address,'209.135.34.0','209.135.157.255','Questionable Hosts, some malicious. Do not need access to your site (IP-087). ');
$ax += iprange($address,'209.249.0.0','209.249.255.255','HUGE block of spam-mail servers, and scanbots (IP-088). ');
$ax += iprange($address,'210.0.160.0','210.0.255.255','Japanese servers on Hong Kong netblock, suspicious (IP-089). ');
$ax += iprange($address,'211.43.0.0','211.45.191.255','Korean Suspicious (IP-090). ');
$ax += iprange($address,'211.91.0.0','211.97.255.255','Chinese Bad Block (IP-091). ');
$ax += iprange($address,'212.113.41.0','212.113.63.255','Ukraine Bad Block (IP-092). ');
$ax += iprange($address,'212.117.188.0','212.117.188.255','Altushost bothost and/or Server Farm (IP-093). ');
$ax += iprange($address,'212.178.0.0','212.178.29.255','Ukraine Bad Block (IP-094). ');
$ax += iprange($address,'213.166.128.0','213.166.159.255','Saudi Arabia bothost (IP-095). ');
$ax += iprange($address,'216.240.128.0','216.240.159.255','Abusive Network (IP-096). '); //71d
$ax += iprange($address,'218.56.21.0','218.56.21.255','Chinese Bad Block (IP-097). ');
$ax += iprange($address,'222.124.31.0','222.124.255.255','India Bad Block (IP-098). ');
$ax += cidrblock($address,'108.3.64.0/18','Cyberterrorist hiding in this netblock of 16384 IPs (IP-100). '); //71g
$ax += cidrblock($address,'93.182.128.0/18','Heavy abuse Swedish VPN VIAEU-AS47155 (IP-101). '); //71
$ax += iprange($address,'5.135.18.160','5.135.18.191','Leak ID scraper. (IP-102). '); //71
$ax += cidrblock($address,'5.144.176.0/24','HSHNetworkInternational (IP-103). '); //71
$ax += iprange($address,'68.68.107.160','68.68.107.161','Anchorfree/HotSpotShield freak network. (IP-104). '); //71
$ax += cidrblock($address,'194.71.222.0/23','ERRSY-NET: Proxy services for scrapers and SEOs (IP-105). '); //72b
$ax += cidrblock($address,'178.238.232.0/21','ice2solutions , known dangerous host/network (IP-106). '); //74c
$ax += lmatch($address,'78.158.11.226','Project Honey Pot rule-breaker, vulnerability scanner (IP-107). ');

$ax += cidrblock($address,'72.10.32.0/19','MediaTemple, illegal nameserver response on reverse lookup. Caught scraping (IP-099). ');

// Ecatel
// AS29073 updated 08/24/15

$ax += cidrblock($address,'46.243.146.0/24','Ecatel ASN29073 (ASN-ECATEL-01). ');
$ax += cidrblock($address,'46.243.148.0/24','Ecatel ASN29073 (ASN-ECATEL-02). ');
$ax += cidrblock($address,'46.243.150.0/24','Ecatel ASN29073 (ASN-ECATEL-03). ');
$ax += cidrblock($address,'80.82.64.0/22','Ecatel ASN29073 (ASN-ECATEL-04). ');
$ax += cidrblock($address,'80.82.68.0/23','Ecatel ASN29073 (ASN-ECATEL-05). ');
$ax += cidrblock($address,'80.82.70.0/24','Ecatel ASN29073 (ASN-ECATEL-06). ');
$ax += cidrblock($address,'80.82.76.0/22','Ecatel ASN29073 (ASN-ECATEL-07). ');
$ax += cidrblock($address,'89.248.160.0/20','Ecatel ASN29073 (ASN-ECATEL-08). ');
$ax += cidrblock($address,'93.174.88.0/21','Ecatel ASN29073 (ASN-ECATEL-09). ');
$ax += cidrblock($address,'94.102.48.0/20','Ecatel ASN29073 (ASN-ECATEL-10). ');
$ax += cidrblock($address,'104.166.102.0/24','Ecatel ASN29073 (ASN-ECATEL-11). ');
$ax += cidrblock($address,'104.166.116.0/24','Ecatel ASN29073 (ASN-ECATEL-12). ');
$ax += cidrblock($address,'104.166.118.0/24','Ecatel ASN29073 (ASN-ECATEL-13). ');
$ax += cidrblock($address,'185.56.82.0/24','Ecatel ASN29073 (ASN-ECATEL-14). ');
$ax += cidrblock($address,'188.72.98.0/24','Ecatel ASN29073 (ASN-ECATEL-15). ');
$ax += cidrblock($address,'188.72.103.0/24','Ecatel ASN29073 (ASN-ECATEL-16). ');
$ax += cidrblock($address,'188.72.106.0/24','Ecatel ASN29073 (ASN-ECATEL-17). ');
$ax += cidrblock($address,'188.72.117.0/24','Ecatel ASN29073 (ASN-ECATEL-18). ');
$ax += cidrblock($address,'213.184.105.0/24','Ecatel ASN29073 (ASN-ECATEL-19). ');
$ax += cidrblock($address,'213.184.113.0/24','Ecatel ASN29073 (ASN-ECATEL-20). ');
$ax += cidrblock($address,'213.184.115.0/24','Ecatel ASN29073 (ASN-ECATEL-21). ');
$ax += cidrblock($address,'213.184.116.0/23','Ecatel ASN29073 (ASN-ECATEL-22). ');
$ax += cidrblock($address,'213.184.118.0/24','Ecatel ASN29073 (ASN-ECATEL-23). ');
$ax += cidrblock($address,'213.184.124.0/24','Ecatel ASN29073 (ASN-ECATEL-24). ');

// Leaseweb DE
// AS28753 updated 08/24/15

$ax += cidrblock($address,'5.61.32.0/20','Leaseweb.de AS28753 (AS-LWD-01). ');
$ax += cidrblock($address,'37.1.192.0/21','Leaseweb.de AS28753 (AS-LWD-02). ');
$ax += cidrblock($address,'37.1.216.0/21','Leaseweb.de AS28753 (AS-LWD-03). ');
$ax += cidrblock($address,'37.58.48.0/20','Leaseweb.de AS28753 (AS-LWD-04). ');
$ax += cidrblock($address,'46.165.192.0/18','Leaseweb.de AS28753 (AS-LWD-05). ');
$ax += cidrblock($address,'77.223.144.0/23','Leaseweb.de AS28753 (AS-LWD-06). ');
$ax += cidrblock($address,'78.159.96.0/19','Leaseweb.de AS28753 (AS-LWD-07). ');
$ax += cidrblock($address,'84.16.224.0/19','Leaseweb.de AS28753 (AS-LWD-08). ');
$ax += cidrblock($address,'89.149.192.0/18','Leaseweb.de AS28753 (AS-LWD-09). ');
$ax += cidrblock($address,'91.109.16.0/20','Leaseweb.de AS28753 (AS-LWD-10). ');
$ax += cidrblock($address,'95.168.160.0/19','Leaseweb.de AS28753 (AS-LWD-11). ');
$ax += cidrblock($address,'178.162.128.0/17','Leaseweb.de AS28753 (AS-LWD-12). ');
$ax += cidrblock($address,'185.17.32.0/22','Leaseweb.de AS28753 (AS-LWD-13). ');
$ax += cidrblock($address,'185.17.120.0/22','Leaseweb.de AS28753 (AS-LWD-14). ');
$ax += cidrblock($address,'185.17.144.0/22','Leaseweb.de AS28753 (AS-LWD-15). ');
$ax += cidrblock($address,'185.28.69.0/24','Leaseweb.de AS28753 (AS-LWD-16). ');
$ax += cidrblock($address,'185.49.68.0/22','Leaseweb.de AS28753 (AS-LWD-17). ');
$ax += cidrblock($address,'188.72.192.0/18','Leaseweb.de AS28753 (AS-LWD-18). ');
$ax += cidrblock($address,'193.104.219.0/24','Leaseweb.de AS28753 (AS-LWD-19). ');
$ax += cidrblock($address,'212.7.202.0/24','Leaseweb.de AS28753 (AS-LWD-20). ');
$ax += cidrblock($address,'212.95.32.0/19','Leaseweb.de AS28753 (AS-LWD-21). ');
$ax += cidrblock($address,'217.20.112.0/20','Leaseweb.de AS28753 (AS-LWD-22). ');

// Leaseweb Network
// AS16265 updated 08/24/15

$ax += cidrblock($address,'5.61.32.0/20','Leaseweb Network (ASN-16265-001). ');
$ax += cidrblock($address,'5.79.64.0/18','Leaseweb Network (ASN-16265-002). ');
$ax += cidrblock($address,'31.31.32.0/21','Leaseweb Network (ASN-16265-003). ');
$ax += cidrblock($address,'31.186.168.0/22','Leaseweb Network (ASN-16265-004). ');
$ax += cidrblock($address,'31.186.172.0/23','Leaseweb Network (ASN-16265-005). ');
$ax += cidrblock($address,'31.187.69.0/24','Leaseweb Network (ASN-16265-006). ');
$ax += cidrblock($address,'31.187.79.0/24','Leaseweb Network (ASN-16265-007). ');
$ax += cidrblock($address,'31.220.28.0/24','Leaseweb Network (ASN-16265-008). ');
$ax += cidrblock($address,'31.220.46.0/23','Leaseweb Network (ASN-16265-009). ');
$ax += cidrblock($address,'31.220.112.0/22','Leaseweb Network (ASN-16265-010). ');
$ax += cidrblock($address,'37.1.144.0/22','Leaseweb Network (ASN-16265-011). ');
$ax += cidrblock($address,'37.1.192.0/21','Leaseweb Network (ASN-16265-012). ');
$ax += cidrblock($address,'37.1.216.0/21','Leaseweb Network (ASN-16265-013). ');
$ax += cidrblock($address,'37.48.64.0/18','Leaseweb Network (ASN-16265-014). ');
$ax += cidrblock($address,'37.58.48.0/20','Leaseweb Network (ASN-16265-015). ');
$ax += cidrblock($address,'37.75.152.0/21','Leaseweb Network (ASN-16265-016). ');
$ax += cidrblock($address,'46.17.0.0/21','Leaseweb Network (ASN-16265-017). ');
$ax += cidrblock($address,'46.102.240.0/21','Leaseweb Network (ASN-16265-018). ');
$ax += cidrblock($address,'46.165.192.0/18','Leaseweb Network (ASN-16265-019). ');
$ax += cidrblock($address,'46.182.120.0/21','Leaseweb Network (ASN-16265-020). ');
$ax += cidrblock($address,'46.182.176.0/21','Leaseweb Network (ASN-16265-021). ');
$ax += cidrblock($address,'46.243.0.0/21','Leaseweb Network (ASN-16265-022). ');
$ax += cidrblock($address,'62.84.240.0/22','Leaseweb Network (ASN-16265-023). ');
$ax += cidrblock($address,'62.212.64.0/19','Leaseweb Network (ASN-16265-024). ');
$ax += cidrblock($address,'77.81.240.0/21','Leaseweb Network (ASN-16265-025). ');
$ax += cidrblock($address,'77.221.144.0/23','Leaseweb Network (ASN-16265-026). ');
$ax += cidrblock($address,'77.223.144.0/23','Leaseweb Network (ASN-16265-027). ');
$ax += cidrblock($address,'77.235.32.0/19','Leaseweb Network (ASN-16265-028). ');
$ax += cidrblock($address,'78.159.96.0/19','Leaseweb Network (ASN-16265-029). ');
$ax += cidrblock($address,'79.172.198.0/24','Leaseweb Network (ASN-16265-030). ');
$ax += cidrblock($address,'80.65.32.0/20','Leaseweb Network (ASN-16265-031). ');
$ax += cidrblock($address,'80.253.248.0/22','Leaseweb Network (ASN-16265-032). ');
$ax += cidrblock($address,'81.161.99.0/24','Leaseweb Network (ASN-16265-033). ');
$ax += cidrblock($address,'82.150.152.0/24','Leaseweb Network (ASN-16265-034). ');
$ax += cidrblock($address,'82.192.64.0/19','Leaseweb Network (ASN-16265-035). ');
$ax += cidrblock($address,'83.149.64.0/18','Leaseweb Network (ASN-16265-036). ');
$ax += cidrblock($address,'83.223.32.0/20','Leaseweb Network (ASN-16265-037). ');
$ax += cidrblock($address,'84.16.224.0/19','Leaseweb Network (ASN-16265-038). ');
$ax += cidrblock($address,'84.247.62.0/24','Leaseweb Network (ASN-16265-039). ');
$ax += cidrblock($address,'85.17.0.0/16','Leaseweb Network (ASN-16265-040). ');
$ax += cidrblock($address,'85.234.224.0/19','Leaseweb Network (ASN-16265-041). ');
$ax += cidrblock($address,'87.236.96.0/21','Leaseweb Network (ASN-16265-042). ');
$ax += cidrblock($address,'89.149.192.0/18','Leaseweb Network (ASN-16265-043). ');
$ax += cidrblock($address,'90.156.224.0/20','Leaseweb Network (ASN-16265-044). ');
$ax += cidrblock($address,'91.109.16.0/20','Leaseweb Network (ASN-16265-045). ');
$ax += cidrblock($address,'91.184.46.0/23','Leaseweb Network (ASN-16265-046). ');
$ax += cidrblock($address,'91.184.48.0/20','Leaseweb Network (ASN-16265-047). ');
$ax += cidrblock($address,'91.195.118.0/23','Leaseweb Network (ASN-16265-048). ');
$ax += cidrblock($address,'91.217.72.0/23','Leaseweb Network (ASN-16265-049). ');
$ax += cidrblock($address,'92.114.86.0/23','Leaseweb Network (ASN-16265-050). ');
$ax += cidrblock($address,'93.190.220.0/22','Leaseweb Network (ASN-16265-051). ');
$ax += cidrblock($address,'94.75.192.0/18','Leaseweb Network (ASN-16265-052). ');
$ax += cidrblock($address,'94.177.98.0/23','Leaseweb Network (ASN-16265-053). ');
$ax += cidrblock($address,'94.177.146.0/24','Leaseweb Network (ASN-16265-054). ');
$ax += cidrblock($address,'95.168.160.0/19','Leaseweb Network (ASN-16265-055). ');
$ax += cidrblock($address,'95.211.0.0/16','Leaseweb Network (ASN-16265-056). ');
$ax += cidrblock($address,'103.41.176.0/23','Leaseweb Network (ASN-16265-057). ');
$ax += cidrblock($address,'104.200.78.0/24','Leaseweb Network (ASN-16265-058). ');
$ax += cidrblock($address,'108.59.0.0/20','Leaseweb Network (ASN-16265-059). ');
$ax += cidrblock($address,'109.69.56.0/22','Leaseweb Network (ASN-16265-060). ');
$ax += cidrblock($address,'109.70.0.0/21','Leaseweb Network (ASN-16265-061). ');
$ax += cidrblock($address,'109.70.9.0/24','Leaseweb Network (ASN-16265-062). ');
$ax += cidrblock($address,'109.70.10.0/23','Leaseweb Network (ASN-16265-063). ');
$ax += cidrblock($address,'109.70.12.0/22','Leaseweb Network (ASN-16265-064). ');
$ax += cidrblock($address,'109.120.180.0/22','Leaseweb Network (ASN-16265-065). ');
$ax += cidrblock($address,'128.140.216.0/22','Leaseweb Network (ASN-16265-066). ');
$ax += cidrblock($address,'145.255.128.0/21','Leaseweb Network (ASN-16265-067). ');
$ax += cidrblock($address,'146.185.210.0/23','Leaseweb Network (ASN-16265-068). ');
$ax += cidrblock($address,'159.255.192.0/22','Leaseweb Network (ASN-16265-069). ');
$ax += cidrblock($address,'178.18.20.0/22','Leaseweb Network (ASN-16265-070). ');
$ax += cidrblock($address,'178.18.24.0/23','Leaseweb Network (ASN-16265-071). ');
$ax += cidrblock($address,'178.18.30.0/23','Leaseweb Network (ASN-16265-072). ');
$ax += cidrblock($address,'178.162.128.0/17','Leaseweb Network (ASN-16265-073). ');
$ax += cidrblock($address,'178.208.94.0/24','Leaseweb Network (ASN-16265-074). ');
$ax += cidrblock($address,'179.43.173.0/24','Leaseweb Network (ASN-16265-075). ');
$ax += cidrblock($address,'181.214.35.0/24','Leaseweb Network (ASN-16265-076). ');
$ax += cidrblock($address,'181.214.50.0/24','Leaseweb Network (ASN-16265-077). ');
$ax += cidrblock($address,'185.16.84.0/24','Leaseweb Network (ASN-16265-078). ');
$ax += cidrblock($address,'185.17.32.0/22','Leaseweb Network (ASN-16265-079). ');
$ax += cidrblock($address,'185.17.120.0/22','Leaseweb Network (ASN-16265-080). ');
$ax += cidrblock($address,'185.17.144.0/22','Leaseweb Network (ASN-16265-081). ');
$ax += cidrblock($address,'185.17.184.0/22','Leaseweb Network (ASN-16265-082). ');
$ax += cidrblock($address,'185.22.4.0/22','Leaseweb Network (ASN-16265-083). ');
$ax += cidrblock($address,'185.24.172.0/22','Leaseweb Network (ASN-16265-084). ');
$ax += cidrblock($address,'185.27.140.0/22','Leaseweb Network (ASN-16265-085). ');
$ax += cidrblock($address,'185.28.68.0/23','Leaseweb Network (ASN-16265-086). ');
$ax += cidrblock($address,'185.28.71.0/24','Leaseweb Network (ASN-16265-087). ');
$ax += cidrblock($address,'185.30.232.0/22','Leaseweb Network (ASN-16265-088). ');
$ax += cidrblock($address,'185.32.14.0/23','Leaseweb Network (ASN-16265-089). ');
$ax += cidrblock($address,'185.34.68.0/22','Leaseweb Network (ASN-16265-090). ');
$ax += cidrblock($address,'185.38.185.0/24','Leaseweb Network (ASN-16265-091). ');
$ax += cidrblock($address,'185.38.187.0/24','Leaseweb Network (ASN-16265-092). ');
$ax += cidrblock($address,'185.44.22.0/23','Leaseweb Network (ASN-16265-093). ');
$ax += cidrblock($address,'185.46.180.0/22','Leaseweb Network (ASN-16265-094). ');
$ax += cidrblock($address,'185.46.232.0/24','Leaseweb Network (ASN-16265-095). ');
$ax += cidrblock($address,'185.49.68.0/22','Leaseweb Network (ASN-16265-096). ');
$ax += cidrblock($address,'185.51.192.0/22','Leaseweb Network (ASN-16265-097). ');
$ax += cidrblock($address,'185.63.152.0/22','Leaseweb Network (ASN-16265-098). ');
$ax += cidrblock($address,'185.71.60.0/22','Leaseweb Network (ASN-16265-099). ');
$ax += cidrblock($address,'185.71.224.0/22','Leaseweb Network (ASN-16265-100). ');
$ax += cidrblock($address,'185.79.40.0/22','Leaseweb Network (ASN-16265-101). ');
$ax += cidrblock($address,'185.83.96.0/22','Leaseweb Network (ASN-16265-102). ');
$ax += cidrblock($address,'185.95.164.0/22','Leaseweb Network (ASN-16265-103). ');
$ax += cidrblock($address,'185.96.140.0/24','Leaseweb Network (ASN-16265-104). ');
$ax += cidrblock($address,'185.97.84.0/22','Leaseweb Network (ASN-16265-105). ');
$ax += cidrblock($address,'188.72.192.0/18','Leaseweb Network (ASN-16265-106). ');
$ax += cidrblock($address,'188.211.239.0/24','Leaseweb Network (ASN-16265-107). ');
$ax += cidrblock($address,'188.241.65.0/24','Leaseweb Network (ASN-16265-108). ');
$ax += cidrblock($address,'190.105.193.0/24','Leaseweb Network (ASN-16265-109). ');
$ax += cidrblock($address,'190.105.195.0/24','Leaseweb Network (ASN-16265-110). ');
$ax += cidrblock($address,'191.96.112.0/24','Leaseweb Network (ASN-16265-111). ');
$ax += cidrblock($address,'191.96.115.0/24','Leaseweb Network (ASN-16265-112). ');
$ax += cidrblock($address,'191.101.16.0/24','Leaseweb Network (ASN-16265-113). ');
$ax += cidrblock($address,'192.36.61.0/24','Leaseweb Network (ASN-16265-114). ');
$ax += cidrblock($address,'193.27.72.0/23','Leaseweb Network (ASN-16265-115). ');
$ax += cidrblock($address,'193.43.92.0/24','Leaseweb Network (ASN-16265-116). ');
$ax += cidrblock($address,'193.104.219.0/24','Leaseweb Network (ASN-16265-117). ');
$ax += cidrblock($address,'193.107.18.0/24','Leaseweb Network (ASN-16265-118). ');
$ax += cidrblock($address,'193.239.6.0/23','Leaseweb Network (ASN-16265-119). ');
$ax += cidrblock($address,'193.242.108.0/24','Leaseweb Network (ASN-16265-120). ');
$ax += cidrblock($address,'194.0.197.0/24','Leaseweb Network (ASN-16265-121). ');
$ax += cidrblock($address,'194.60.71.0/24','Leaseweb Network (ASN-16265-122). ');
$ax += cidrblock($address,'195.14.2.0/24','Leaseweb Network (ASN-16265-123). ');
$ax += cidrblock($address,'195.14.21.0/24','Leaseweb Network (ASN-16265-124). ');
$ax += cidrblock($address,'195.140.240.0/22','Leaseweb Network (ASN-16265-125). ');
$ax += cidrblock($address,'195.200.82.0/23','Leaseweb Network (ASN-16265-126). ');
$ax += cidrblock($address,'195.242.98.0/23','Leaseweb Network (ASN-16265-127). ');
$ax += cidrblock($address,'201.218.160.0/19','Leaseweb Network (ASN-16265-128). ');
$ax += cidrblock($address,'212.7.192.0/21','Leaseweb Network (ASN-16265-129). ');
$ax += cidrblock($address,'212.7.202.0/24','Leaseweb Network (ASN-16265-130). ');
$ax += cidrblock($address,'212.7.204.0/22','Leaseweb Network (ASN-16265-131). ');
$ax += cidrblock($address,'212.7.208.0/21','Leaseweb Network (ASN-16265-132). ');
$ax += cidrblock($address,'212.19.235.0/24','Leaseweb Network (ASN-16265-133). ');
$ax += cidrblock($address,'212.95.32.0/19','Leaseweb Network (ASN-16265-134). ');
$ax += cidrblock($address,'213.142.132.0/22','Leaseweb Network (ASN-16265-135). ');
$ax += cidrblock($address,'213.142.136.0/21','Leaseweb Network (ASN-16265-136). ');
$ax += cidrblock($address,'213.142.144.0/22','Leaseweb Network (ASN-16265-137). ');
$ax += cidrblock($address,'217.19.1.0/24','Leaseweb Network (ASN-16265-138). ');
$ax += cidrblock($address,'217.20.112.0/20','Leaseweb Network (ASN-16265-139). ');
$ax += cidrblock($address,'217.73.56.0/21','Leaseweb Network (ASN-16265-140). ');

// HOSTING-AS Tehnologii Budushego LLC
// AS41665

$ax += cidrblock($address,'78.109.16.0/20','AS41665 (AS-HATB-0). '); //77a
$ax += cidrblock($address,'178.86.0.0/15','AS41665 (AS-HATB-1). '); //77a
$ax += cidrblock($address,'194.54.88.0/22','AS41665 (AS-HATB-2). '); //77a
$ax += cidrblock($address,'213.155.0.0/19','AS41665 (AS-HATB-3). '); //77a

// MYLOC
// AS24961

$ax += cidrblock($address,'5.104.104.0/21','Myloc AS24961 (AS-MYLOC-0). '); //77a
$ax += cidrblock($address,'5.199.128.0/20','Myloc AS24961 (AS-MYLOC-1). '); //77a
$ax += cidrblock($address,'31.22.104.0/22','Myloc AS24961 (AS-MYLOC-2). '); //77a
$ax += cidrblock($address,'31.184.224.0/22','Myloc AS24961 (AS-MYLOC-3). '); //77a
$ax += cidrblock($address,'37.157.248.0/21','Myloc AS24961 (AS-MYLOC-4). '); //77a
$ax += cidrblock($address,'46.20.32.0/20','Myloc AS24961 (AS-MYLOC-5). '); //77a
$ax += cidrblock($address,'46.228.192.0/20','Myloc AS24961 (AS-MYLOC-6). '); //77a
$ax += cidrblock($address,'62.141.32.0/20','Myloc AS24961 (AS-MYLOC-7). '); //77a
$ax += cidrblock($address,'77.87.184.0/21','Myloc AS24961 (AS-MYLOC-8). '); //77a
$ax += cidrblock($address,'78.31.64.0/21','Myloc AS24961 (AS-MYLOC-9). '); //77a
$ax += cidrblock($address,'80.82.208.0/20','Myloc AS24961 (AS-MYLOC-10). '); //77a
$ax += cidrblock($address,'80.86.170.0/23','Myloc AS24961 (AS-MYLOC-11). '); //77a
$ax += cidrblock($address,'80.86.186.0/24','Myloc AS24961 (AS-MYLOC-12). '); //77a
$ax += cidrblock($address,'81.30.144.0/20','Myloc AS24961 (AS-MYLOC-13). '); //77a
$ax += cidrblock($address,'81.209.240.0/21','Myloc AS24961 (AS-MYLOC-14). '); //77a
$ax += cidrblock($address,'81.209.248.0/24','Myloc AS24961 (AS-MYLOC-15). '); //77a
$ax += cidrblock($address,'83.136.80.0/21','Myloc AS24961 (AS-MYLOC-16). '); //77a
$ax += cidrblock($address,'85.114.128.0/19','Myloc AS24961 (AS-MYLOC-17). '); //77a
$ax += cidrblock($address,'89.163.224.0/20','Myloc AS24961 (AS-MYLOC-18). '); //77a
$ax += cidrblock($address,'91.194.84.0/23','Myloc AS24961 (AS-MYLOC-19). '); //77a
$ax += cidrblock($address,'91.212.85.0/24','Myloc AS24961 (AS-MYLOC-20). '); //77a
$ax += cidrblock($address,'91.242.212.0/24','Myloc AS24961 (AS-MYLOC-21). '); //77a
$ax += cidrblock($address,'93.186.192.0/20','Myloc AS24961 (AS-MYLOC-22). '); //77a
$ax += cidrblock($address,'141.8.244.0/22','Myloc AS24961 (AS-MYLOC-23). '); //77a
$ax += cidrblock($address,'141.8.248.0/24','Myloc AS24961 (AS-MYLOC-24). '); //77a
$ax += cidrblock($address,'146.0.32.0/20','Myloc AS24961 (AS-MYLOC-25). '); //77a
$ax += cidrblock($address,'185.15.244.0/22','Myloc AS24961 (AS-MYLOC-26). '); //77a
$ax += cidrblock($address,'193.22.251.0/24','Myloc AS24961 (AS-MYLOC-27). '); //77a
$ax += cidrblock($address,'193.41.200.0/24','Myloc AS24961 (AS-MYLOC-28). '); //77a
$ax += cidrblock($address,'193.111.136.0/21','Myloc AS24961 (AS-MYLOC-29). '); //77a
$ax += cidrblock($address,'193.111.198.0/23','Myloc AS24961 (AS-MYLOC-30). '); //77a
$ax += cidrblock($address,'199.201.240.0/24','Myloc AS24961 (AS-MYLOC-31). '); //77a
$ax += cidrblock($address,'217.79.176.0/20','Myloc AS24961 (AS-MYLOC-32). '); //77a

// INFOBOX
// AS30968

$ax += cidrblock($address,'77.221.128.0/19','INFOBOX AS30968 (AS-INFOBOX-0). '); //77a
$ax += cidrblock($address,'92.243.64.0/19','INFOBOX AS30968 (AS-INFOBOX-1). '); //77a

// SEDO
// AS47846

$ax += cidrblock($address,'82.98.86.0/24','SEDO AS47846 (AS-SEDO-0). '); //77a
$ax += cidrblock($address,'82.98.99.0/24','SEDO AS47846 (AS-SEDO-1). '); //77a
$ax += cidrblock($address,'91.195.240.0/23','SEDO AS47846 (AS-SEDO-2). '); //77a
$ax += cidrblock($address,'213.83.58.0/24','SEDO AS47846 (AS-SEDO-3). '); //77a

// *RapidSwitch (Crimeware Friendly ISP)
// (hpHosts Blog warned us about this one)

$ax += iprange($address,'78.129.128.0','78.129.255.255','a Rapidswitch. ');
$ax += iprange($address,'82.145.32.0','82.145.63.255','b Rapidswitch. ');
$ax += iprange($address,'83.142.224.0','83.142.231.255','c Rapidswitch. ');
$ax += iprange($address,'87.117.192.0','87.117.255.255','d Rapidswitch. ');
$ax += iprange($address,'95.154.192.0','95.154.255.255','e Rapidswitch. ');
$ax += iprange($address,'109.75.160.0','109.75.167.255','f Rapidswitch. ');
$ax += iprange($address,'109.169.0.0','109.169.127.255','g Rapidswitch. ');
$ax += iprange($address,'193.201.200.0','193.201.201.255','h Rapidswitch. ');
$ax += iprange($address,'193.227.244.0','193.227.245.255','i Rapidswitch. ');
$ax += iprange($address,'195.40.15.0','195.40.15.255','j Rapidswitch. ');
$ax += iprange($address,'195.62.10.0','195.62.11.255','k Rapidswitch. ');
$ax += iprange($address,'195.242.214.0','195.242.215.255','l Rapidswitch. ');
$ax += iprange($address,'213.228.193.0','213.228.193.255','m Rapidswitch. ');
$ax += iprange($address,'217.147.80.0','217.147.95.255','n Rapidswitch. ');

// iweb/privatedns Domain Spammers
// Snooping on your site, sniping your domain.

$ax += rmatch($hoster,'privatedns.com','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += rmatch($hoster,'iweb.ca','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += rmatch($hoster,'iweb.com','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += lmatch($hoster,'iweb','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += lmatch($hoster,'www.iweb','RFC ignorant/Suspected domain name snipers/spammers. '); //70b

// Spamahost and hostkey network.
// self explanatory!

$ax += cidrblock($address,'46.17.96.0/21','Hostkey & Spamahost known range. '); //70c
$ax += cidrblock($address,'66.96.128.0/18','Spamahost known range. '); //70c
$ax += cidrblock($address,'83.229.128.0/17','Spamahost known range. '); //70c
$ax += cidrblock($address,'195.162.68.0/23','Hostkey known range (spammers). '); //70c
$ax += inmatch($hoster,'spamahost','Spamahost. '); //70c
$ax += rmatch($hoster,'hostkey.ru','Hostkey (known spammers). '); //70c

// Nobis Technology Group / Ubiquity Servers / AS15003
// Not an access provider. Exceedingly bad record. updated 08/11/15

$ax += cidrblock($address,'23.19.0.0/16','Nobis Technology Group. (ASN-NOBIS-TECH-001). ');
$ax += cidrblock($address,'23.80.0.0/14','Nobis Technology Group. (ASN-NOBIS-TECH-002). ');
$ax += cidrblock($address,'23.104.0.0/13','Nobis Technology Group. (ASN-NOBIS-TECH-003). ');
$ax += cidrblock($address,'23.224.0.0/15','Nobis Technology Group. (ASN-NOBIS-TECH-004). ');
$ax += cidrblock($address,'23.226.48.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-005). ');
$ax += cidrblock($address,'23.226.176.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-006). ');
$ax += cidrblock($address,'23.235.128.0/18','Nobis Technology Group. (ASN-NOBIS-TECH-007). ');
$ax += cidrblock($address,'23.248.192.0/18','Nobis Technology Group. (ASN-NOBIS-TECH-008). ');
$ax += cidrblock($address,'37.205.12.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-009). ');
$ax += cidrblock($address,'64.64.224.0/19','Nobis Technology Group. (ASN-NOBIS-TECH-010). ');
$ax += cidrblock($address,'64.79.96.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-011). ');
$ax += cidrblock($address,'64.120.0.0/17','Nobis Technology Group. (ASN-NOBIS-TECH-012). ');
$ax += cidrblock($address,'64.187.232.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-013). ');
$ax += cidrblock($address,'64.250.144.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-014). ');
$ax += cidrblock($address,'66.207.167.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-015). ');
$ax += cidrblock($address,'66.207.173.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-016). ');
$ax += cidrblock($address,'66.207.174.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-017). ');
$ax += cidrblock($address,'67.201.0.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-018). ');
$ax += cidrblock($address,'67.201.40.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-019). ');
$ax += cidrblock($address,'67.201.48.0/23','Nobis Technology Group. (ASN-NOBIS-TECH-020). ');
$ax += cidrblock($address,'67.230.160.0/19','Nobis Technology Group. (ASN-NOBIS-TECH-021). ');
$ax += cidrblock($address,'68.168.128.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-022). ');
$ax += cidrblock($address,'69.4.88.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-023). ');
$ax += cidrblock($address,'69.25.250.0/23','Nobis Technology Group. (ASN-NOBIS-TECH-024). ');
$ax += cidrblock($address,'69.31.104.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-025). ');
$ax += cidrblock($address,'69.147.224.0/19','Nobis Technology Group. (ASN-NOBIS-TECH-026). ');
$ax += cidrblock($address,'69.174.60.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-027). ');
$ax += cidrblock($address,'70.32.32.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-028). ');
$ax += cidrblock($address,'70.32.48.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-029). ');
$ax += cidrblock($address,'72.37.145.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-030). ');
$ax += cidrblock($address,'72.37.204.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-031). ');
$ax += cidrblock($address,'72.37.218.0/23','Nobis Technology Group. (ASN-NOBIS-TECH-032). ');
$ax += cidrblock($address,'72.37.221.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-033). ');
$ax += cidrblock($address,'72.37.222.0/23','Nobis Technology Group. (ASN-NOBIS-TECH-034). ');
$ax += cidrblock($address,'72.37.224.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-035). ');
$ax += cidrblock($address,'72.37.237.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-036). ');
$ax += cidrblock($address,'72.37.242.0/23','Nobis Technology Group. (ASN-NOBIS-TECH-037). ');
$ax += cidrblock($address,'72.37.246.0/23','Nobis Technology Group. (ASN-NOBIS-TECH-038). ');
$ax += cidrblock($address,'74.63.54.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-039). ');
$ax += cidrblock($address,'74.82.192.0/19','Nobis Technology Group. (ASN-NOBIS-TECH-040). ');
$ax += cidrblock($address,'74.113.144.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-041). ');
$ax += cidrblock($address,'74.117.236.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-042). ');
$ax += cidrblock($address,'74.119.216.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-043). ');
$ax += cidrblock($address,'74.121.180.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-044). ');
$ax += cidrblock($address,'74.122.192.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-045). ');
$ax += cidrblock($address,'86.104.211.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-046). ');
$ax += cidrblock($address,'89.40.36.0/23','Nobis Technology Group. (ASN-NOBIS-TECH-047). ');
$ax += cidrblock($address,'89.42.31.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-048). ');
$ax += cidrblock($address,'95.64.46.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-049). ');
$ax += cidrblock($address,'96.45.176.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-050). ');
$ax += cidrblock($address,'103.26.204.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-051). ');
$ax += cidrblock($address,'103.250.80.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-052). ');
$ax += cidrblock($address,'104.37.0.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-053). ');
$ax += cidrblock($address,'104.238.32.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-054). ');
$ax += cidrblock($address,'104.238.45.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-055). ');
$ax += cidrblock($address,'107.177.224.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-056). ');
$ax += cidrblock($address,'108.62.0.0/16','Nobis Technology Group. (ASN-NOBIS-TECH-057). ');
$ax += cidrblock($address,'108.171.32.0/19','Nobis Technology Group. (ASN-NOBIS-TECH-058). ');
$ax += cidrblock($address,'108.177.128.0/17','Nobis Technology Group. (ASN-NOBIS-TECH-059). ');
$ax += cidrblock($address,'108.187.0.0/16','Nobis Technology Group. (ASN-NOBIS-TECH-060). ');
$ax += cidrblock($address,'142.19.52.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-061). ');
$ax += cidrblock($address,'142.19.56.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-062). ');
$ax += cidrblock($address,'142.91.0.0/16','Nobis Technology Group. (ASN-NOBIS-TECH-063). ');
$ax += cidrblock($address,'142.234.0.0/16','Nobis Technology Group. (ASN-NOBIS-TECH-064). ');
$ax += cidrblock($address,'147.255.0.0/16','Nobis Technology Group. (ASN-NOBIS-TECH-065). ');
$ax += cidrblock($address,'162.209.128.0/17','Nobis Technology Group. (ASN-NOBIS-TECH-066). ');
$ax += cidrblock($address,'162.222.68.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-067). ');
$ax += cidrblock($address,'162.246.184.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-068). ');
$ax += cidrblock($address,'162.253.208.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-069). ');
$ax += cidrblock($address,'167.160.116.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-070). ');
$ax += cidrblock($address,'172.225.116.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-071). ');
$ax += cidrblock($address,'172.240.0.0/15','Nobis Technology Group. (ASN-NOBIS-TECH-072). ');
$ax += cidrblock($address,'172.247.0.0/16','Nobis Technology Group. (ASN-NOBIS-TECH-073). ');
$ax += cidrblock($address,'172.255.0.0/16','Nobis Technology Group. (ASN-NOBIS-TECH-074). ');
$ax += cidrblock($address,'173.208.0.0/17','Nobis Technology Group. (ASN-NOBIS-TECH-075). ');
$ax += cidrblock($address,'173.234.0.0/16','Nobis Technology Group. (ASN-NOBIS-TECH-076). ');
$ax += cidrblock($address,'173.243.112.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-077). ');
$ax += cidrblock($address,'174.34.128.0/18','Nobis Technology Group. (ASN-NOBIS-TECH-078). ');
$ax += cidrblock($address,'174.137.48.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-079). ');
$ax += cidrblock($address,'176.124.70.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-080). ');
$ax += cidrblock($address,'176.124.112.0/23','Nobis Technology Group. (ASN-NOBIS-TECH-081). ');
$ax += cidrblock($address,'185.109.242.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-082). ');
$ax += cidrblock($address,'192.119.160.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-083). ');
$ax += cidrblock($address,'192.151.224.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-084). ');
$ax += cidrblock($address,'192.151.248.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-085). ');
$ax += cidrblock($address,'192.161.80.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-086). ');
$ax += cidrblock($address,'192.163.160.0/19','Nobis Technology Group. (ASN-NOBIS-TECH-087). ');
$ax += cidrblock($address,'192.229.64.0/18','Nobis Technology Group. (ASN-NOBIS-TECH-088). ');
$ax += cidrblock($address,'192.238.128.0/17','Nobis Technology Group. (ASN-NOBIS-TECH-089). ');
$ax += cidrblock($address,'192.253.240.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-090). ');
$ax += cidrblock($address,'196.45.112.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-091). ');
$ax += cidrblock($address,'198.48.96.0/19','Nobis Technology Group. (ASN-NOBIS-TECH-092). ');
$ax += cidrblock($address,'198.51.144.0/23','Nobis Technology Group. (ASN-NOBIS-TECH-093). ');
$ax += cidrblock($address,'198.154.80.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-094). ');
$ax += cidrblock($address,'199.167.196.0/22','Nobis Technology Group. (ASN-NOBIS-TECH-095). ');
$ax += cidrblock($address,'199.192.200.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-096). ');
$ax += cidrblock($address,'199.231.232.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-097). ');
$ax += cidrblock($address,'206.123.128.0/19','Nobis Technology Group. (ASN-NOBIS-TECH-098). ');
$ax += cidrblock($address,'208.100.6.128/25','Nobis Technology Group. (ASN-NOBIS-TECH-099). ');
$ax += cidrblock($address,'208.100.62.0/23','Nobis Technology Group. (ASN-NOBIS-TECH-100). ');
$ax += cidrblock($address,'216.6.224.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-101). ');
$ax += cidrblock($address,'216.86.152.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-102). ');
$ax += cidrblock($address,'216.86.157.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-103). ');
$ax += cidrblock($address,'216.86.159.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-104). ');
$ax += cidrblock($address,'216.135.112.0/21','Nobis Technology Group. (ASN-NOBIS-TECH-105). ');
$ax += cidrblock($address,'216.151.31.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-106). ');
$ax += cidrblock($address,'216.152.224.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-107). ');
$ax += cidrblock($address,'216.193.237.0/24','Nobis Technology Group. (ASN-NOBIS-TECH-108). ');
$ax += cidrblock($address,'216.231.128.0/20','Nobis Technology Group. (ASN-NOBIS-TECH-109). ');
$ax += inmatch($hoster,'nobis','Nobis Technology Group. (ASN-NOBIS-TECH-110). ');
$ax += inmatch($hoster,'ubiquity','Nobis Technology Group. (ASN-NOBIS-TECH-111). ');

// Rackspace
// AS19994/AS27357/AS15395/AS33070/AS12200 updated 08/26/15

$ax += cidrblock($address,'5.79.0.0/18','Rackspace (ASN-RKSP-001). ');
$ax += cidrblock($address,'5.152.187.0/24','Rackspace (ASN-RKSP-002). ');
$ax += cidrblock($address,'23.253.0.0/16','Rackspace (ASN-RKSP-003). ');
$ax += cidrblock($address,'27.126.144.0/21','Rackspace (ASN-RKSP-004). ');
$ax += cidrblock($address,'31.222.128.0/18','Rackspace (ASN-RKSP-005). ');
$ax += cidrblock($address,'37.188.96.0/19','Rackspace (ASN-RKSP-006). ');
$ax += cidrblock($address,'46.38.160.0/19','Rackspace (ASN-RKSP-007). ');
$ax += cidrblock($address,'50.28.192.0/19','Rackspace (ASN-RKSP-008). ');
$ax += cidrblock($address,'50.28.224.0/22','Rackspace (ASN-RKSP-009). ');
$ax += cidrblock($address,'50.56.0.0/15','Rackspace (ASN-RKSP-010). ');
$ax += cidrblock($address,'64.39.0.0/19','Rackspace (ASN-RKSP-011). ');
$ax += cidrblock($address,'64.49.192.0/18','Rackspace (ASN-RKSP-012). ');
$ax += cidrblock($address,'65.61.128.0/18','Rackspace (ASN-RKSP-013). ');
$ax += cidrblock($address,'66.209.217.0/24','Rackspace (ASN-RKSP-014). ');
$ax += cidrblock($address,'66.216.64.0/18','Rackspace (ASN-RKSP-015). ');
$ax += cidrblock($address,'67.23.0.0/19','Rackspace (ASN-RKSP-016). ');
$ax += cidrblock($address,'67.23.32.0/20','Rackspace (ASN-RKSP-017). ');
$ax += cidrblock($address,'67.192.0.0/16','Rackspace (ASN-RKSP-018). ');
$ax += cidrblock($address,'67.207.128.0/19','Rackspace (ASN-RKSP-019). ');
$ax += cidrblock($address,'69.20.0.0/17','Rackspace (ASN-RKSP-020). ');
$ax += cidrblock($address,'72.3.128.0/17','Rackspace (ASN-RKSP-021). ');
$ax += cidrblock($address,'72.4.112.0/20','Rackspace (ASN-RKSP-022). ');
$ax += cidrblock($address,'72.32.0.0/16','Rackspace (ASN-RKSP-023). ');
$ax += cidrblock($address,'74.91.80.0/20','Rackspace (ASN-RKSP-024). ');
$ax += cidrblock($address,'74.205.0.0/17','Rackspace (ASN-RKSP-025). ');
$ax += cidrblock($address,'78.136.0.0/18','Rackspace (ASN-RKSP-026). ');
$ax += cidrblock($address,'83.138.128.0/18','Rackspace (ASN-RKSP-027). ');
$ax += cidrblock($address,'89.234.0.0/18','Rackspace (ASN-RKSP-028). ');
$ax += cidrblock($address,'91.227.208.0/24','Rackspace (ASN-RKSP-029). ');
$ax += cidrblock($address,'92.52.64.0/18','Rackspace (ASN-RKSP-030). ');
$ax += cidrblock($address,'94.236.0.0/17','Rackspace (ASN-RKSP-031). ');
$ax += cidrblock($address,'95.138.128.0/18','Rackspace (ASN-RKSP-032). ');
$ax += cidrblock($address,'98.129.0.0/16','Rackspace (ASN-RKSP-033). ');
$ax += cidrblock($address,'103.28.40.0/22','Rackspace (ASN-RKSP-034). ');
$ax += cidrblock($address,'104.130.0.0/16','Rackspace (ASN-RKSP-035). ');
$ax += cidrblock($address,'104.239.128.0/17','Rackspace (ASN-RKSP-036). ');
$ax += cidrblock($address,'108.166.0.0/17','Rackspace (ASN-RKSP-037). ');
$ax += cidrblock($address,'108.171.160.0/19','Rackspace (ASN-RKSP-038). ');
$ax += cidrblock($address,'134.8.0.0/24','Rackspace (ASN-RKSP-039). ');
$ax += cidrblock($address,'134.8.2.0/24','Rackspace (ASN-RKSP-040). ');
$ax += cidrblock($address,'134.213.0.0/16','Rackspace (ASN-RKSP-041). ');
$ax += cidrblock($address,'142.0.184.0/22','Rackspace (ASN-RKSP-042). ');
$ax += cidrblock($address,'142.54.40.0/24','Rackspace (ASN-RKSP-043). ');
$ax += cidrblock($address,'146.88.16.0/23','Rackspace (ASN-RKSP-044). ');
$ax += cidrblock($address,'146.88.18.0/24','Rackspace (ASN-RKSP-045). ');
$ax += cidrblock($address,'146.88.28.0/24','Rackspace (ASN-RKSP-046). ');
$ax += cidrblock($address,'146.177.0.0/16','Rackspace (ASN-RKSP-047). ');
$ax += cidrblock($address,'156.43.59.0/24','Rackspace (ASN-RKSP-048). ');
$ax += cidrblock($address,'159.127.178.0/23','Rackspace (ASN-RKSP-049). ');
$ax += cidrblock($address,'162.13.0.0/16','Rackspace (ASN-RKSP-050). ');
$ax += cidrblock($address,'162.209.0.0/17','Rackspace (ASN-RKSP-051). ');
$ax += cidrblock($address,'162.220.0.0/24','Rackspace (ASN-RKSP-052). ');
$ax += cidrblock($address,'162.242.128.0/17','Rackspace (ASN-RKSP-053). ');
$ax += cidrblock($address,'162.247.112.0/21','Rackspace (ASN-RKSP-054). ');
$ax += cidrblock($address,'163.47.180.0/22','Rackspace (ASN-RKSP-055). ');
$ax += cidrblock($address,'164.177.128.0/19','Rackspace (ASN-RKSP-056). ');
$ax += cidrblock($address,'166.78.0.0/16','Rackspace (ASN-RKSP-057). ');
$ax += cidrblock($address,'168.235.224.0/20','Rackspace (ASN-RKSP-058). ');
$ax += cidrblock($address,'172.99.64.0/18','Rackspace (ASN-RKSP-059). ');
$ax += cidrblock($address,'173.45.224.0/19','Rackspace (ASN-RKSP-060). ');
$ax += cidrblock($address,'173.203.0.0/16','Rackspace (ASN-RKSP-061). ');
$ax += cidrblock($address,'174.143.0.0/16','Rackspace (ASN-RKSP-062). ');
$ax += cidrblock($address,'175.107.191.0/24','Rackspace (ASN-RKSP-063). ');
$ax += cidrblock($address,'177.152.202.0/24','Rackspace (ASN-RKSP-064). ');
$ax += cidrblock($address,'180.189.136.0/22','Rackspace (ASN-RKSP-065). ');
$ax += cidrblock($address,'184.106.0.0/16','Rackspace (ASN-RKSP-066). ');
$ax += cidrblock($address,'185.28.196.0/24','Rackspace (ASN-RKSP-067). ');
$ax += cidrblock($address,'185.36.144.0/22','Rackspace (ASN-RKSP-068). ');
$ax += cidrblock($address,'185.64.72.0/24','Rackspace (ASN-RKSP-069). ');
$ax += cidrblock($address,'185.75.60.0/22','Rackspace (ASN-RKSP-070). ');
$ax += cidrblock($address,'192.30.252.0/22','Rackspace (ASN-RKSP-071). ');
$ax += cidrblock($address,'192.40.168.0/21','Rackspace (ASN-RKSP-072). ');
$ax += cidrblock($address,'192.204.40.0/21','Rackspace (ASN-RKSP-073). ');
$ax += cidrblock($address,'192.237.128.0/17','Rackspace (ASN-RKSP-074). ');
$ax += cidrblock($address,'193.142.244.0/24','Rackspace (ASN-RKSP-075). ');
$ax += cidrblock($address,'198.54.230.0/24','Rackspace (ASN-RKSP-076). ');
$ax += cidrblock($address,'198.61.128.0/17','Rackspace (ASN-RKSP-077). ');
$ax += cidrblock($address,'198.101.128.0/17','Rackspace (ASN-RKSP-078). ');
$ax += cidrblock($address,'198.184.18.0/24','Rackspace (ASN-RKSP-079). ');
$ax += cidrblock($address,'198.254.64.0/20','Rackspace (ASN-RKSP-080). ');
$ax += cidrblock($address,'199.15.212.0/22','Rackspace (ASN-RKSP-081). ');
$ax += cidrblock($address,'199.91.52.0/23','Rackspace (ASN-RKSP-082). ');
$ax += cidrblock($address,'199.166.37.0/24','Rackspace (ASN-RKSP-083). ');
$ax += cidrblock($address,'199.187.164.0/22','Rackspace (ASN-RKSP-084). ');
$ax += cidrblock($address,'199.241.120.0/21','Rackspace (ASN-RKSP-085). ');
$ax += cidrblock($address,'203.55.21.0/24','Rackspace (ASN-RKSP-086). ');
$ax += cidrblock($address,'203.55.138.0/24','Rackspace (ASN-RKSP-087). ');
$ax += cidrblock($address,'204.75.142.0/24','Rackspace (ASN-RKSP-088). ');
$ax += cidrblock($address,'204.232.128.0/17','Rackspace (ASN-RKSP-089). ');
$ax += cidrblock($address,'205.166.177.0/24','Rackspace (ASN-RKSP-090). ');
$ax += cidrblock($address,'206.188.192.0/19','Rackspace (ASN-RKSP-091). ');
$ax += cidrblock($address,'207.32.116.0/24','Rackspace (ASN-RKSP-092). ');
$ax += cidrblock($address,'207.97.192.0/18','Rackspace (ASN-RKSP-093). ');
$ax += cidrblock($address,'208.78.96.0/21','Rackspace (ASN-RKSP-094). ');
$ax += cidrblock($address,'209.20.64.0/19','Rackspace (ASN-RKSP-095). ');
$ax += cidrblock($address,'209.61.128.0/18','Rackspace (ASN-RKSP-096). ');
$ax += cidrblock($address,'209.114.32.0/19','Rackspace (ASN-RKSP-097). ');
$ax += cidrblock($address,'209.133.224.0/19','Rackspace (ASN-RKSP-098). ');
$ax += cidrblock($address,'209.163.232.0/21','Rackspace (ASN-RKSP-099). ');
$ax += cidrblock($address,'209.163.244.0/22','Rackspace (ASN-RKSP-100). ');
$ax += cidrblock($address,'209.163.248.0/22','Rackspace (ASN-RKSP-101). ');
$ax += cidrblock($address,'209.216.104.0/21','Rackspace (ASN-RKSP-102). ');
$ax += cidrblock($address,'212.64.128.0/19','Rackspace (ASN-RKSP-103). ');
if ($hoster != 'www.googlealert.com'){$ax += cidrblock($address,'212.100.224.0/19','Rackspace (ASN-RKSP-104). ');}
$ax += cidrblock($address,'216.18.144.0/21','Rackspace (ASN-RKSP-105). ');
$ax += cidrblock($address,'216.105.48.0/20','Rackspace (ASN-RKSP-106). ');
$ax += cidrblock($address,'216.110.32.0/20','Rackspace (ASN-RKSP-107). ');

//Pakistan Telecom AS45595
//Spam without end, huge blacklistings! updated 08/25/15

$ax += cidrblock($address,'39.32.0.0/11','Pakistan Telecom AS45595 (ASN-PkT-01). ');
$ax += cidrblock($address,'59.103.0.0/19','Pakistan Telecom AS45595 (ASN-PkT-02). ');
$ax += cidrblock($address,'59.103.48.0/20','Pakistan Telecom AS45595 (ASN-PkT-03). ');
$ax += cidrblock($address,'59.103.64.0/21','Pakistan Telecom AS45595 (ASN-PkT-04). ');
$ax += cidrblock($address,'59.103.72.0/22','Pakistan Telecom AS45595 (ASN-PkT-05). ');
$ax += cidrblock($address,'59.103.76.0/24','Pakistan Telecom AS45595 (ASN-PkT-06). ');
$ax += cidrblock($address,'59.103.90.0/23','Pakistan Telecom AS45595 (ASN-PkT-07). ');
$ax += cidrblock($address,'59.103.92.0/22','Pakistan Telecom AS45595 (ASN-PkT-08). ');
$ax += cidrblock($address,'59.103.96.0/22','Pakistan Telecom AS45595 (ASN-PkT-09). ');
$ax += cidrblock($address,'59.103.128.0/23','Pakistan Telecom AS45595 (ASN-PkT-10). ');
$ax += cidrblock($address,'59.103.132.0/22','Pakistan Telecom AS45595 (ASN-PkT-11). ');
$ax += cidrblock($address,'59.103.144.0/21','Pakistan Telecom AS45595 (ASN-PkT-12). ');
$ax += cidrblock($address,'59.103.155.0/24','Pakistan Telecom AS45595 (ASN-PkT-13). ');
$ax += cidrblock($address,'59.103.156.0/22','Pakistan Telecom AS45595 (ASN-PkT-14). ');
$ax += cidrblock($address,'59.103.164.0/22','Pakistan Telecom AS45595 (ASN-PkT-15). ');
$ax += cidrblock($address,'59.103.168.0/24','Pakistan Telecom AS45595 (ASN-PkT-16). ');
$ax += cidrblock($address,'59.103.192.0/19','Pakistan Telecom AS45595 (ASN-PkT-17). ');
$ax += cidrblock($address,'59.103.224.0/24','Pakistan Telecom AS45595 (ASN-PkT-18). ');
$ax += cidrblock($address,'104.99.130.0/23','Pakistan Telecom AS45595 (ASN-PkT-19). ');
$ax += cidrblock($address,'104.99.132.0/22','Pakistan Telecom AS45595 (ASN-PkT-20). ');
$ax += cidrblock($address,'116.71.96.0/20','Pakistan Telecom AS45595 (ASN-PkT-21). ');
$ax += cidrblock($address,'116.71.160.0/19','Pakistan Telecom AS45595 (ASN-PkT-22). ');
$ax += cidrblock($address,'116.71.192.0/18','Pakistan Telecom AS45595 (ASN-PkT-23). ');
$ax += cidrblock($address,'119.152.0.0/13','Pakistan Telecom AS45595 (ASN-PkT-24). ');
$ax += cidrblock($address,'182.176.0.0/12','Pakistan Telecom AS45595 (ASN-PkT-25). ');
$ax += cidrblock($address,'203.99.160.0/19','Pakistan Telecom AS45595 (ASN-PkT-26). ');
$ax += cidrblock($address,'203.128.252.0/24','Pakistan Telecom AS45595 (ASN-PkT-27). ');
$ax += cidrblock($address,'203.128.254.0/23','Pakistan Telecom AS45595 (ASN-PkT-28). ');
$ax += cidrblock($address,'203.135.11.0/24','Pakistan Telecom AS45595 (ASN-PkT-29). ');
$ax += cidrblock($address,'203.135.13.0/24','Pakistan Telecom AS45595 (ASN-PkT-30). ');
$ax += cidrblock($address,'203.135.16.0/24','Pakistan Telecom AS45595 (ASN-PkT-31). ');
$ax += cidrblock($address,'203.135.20.0/24','Pakistan Telecom AS45595 (ASN-PkT-32). ');
$ax += cidrblock($address,'203.135.24.0/23','Pakistan Telecom AS45595 (ASN-PkT-33). ');
$ax += cidrblock($address,'203.135.26.0/24','Pakistan Telecom AS45595 (ASN-PkT-34). ');
$ax += cidrblock($address,'203.135.30.0/24','Pakistan Telecom AS45595 (ASN-PkT-35). ');
$ax += cidrblock($address,'203.135.33.0/24','Pakistan Telecom AS45595 (ASN-PkT-36). ');
$ax += cidrblock($address,'203.135.34.0/23','Pakistan Telecom AS45595 (ASN-PkT-37). ');
$ax += cidrblock($address,'203.135.36.0/23','Pakistan Telecom AS45595 (ASN-PkT-38). ');
$ax += cidrblock($address,'203.135.38.0/24','Pakistan Telecom AS45595 (ASN-PkT-39). ');
$ax += cidrblock($address,'203.135.41.0/24','Pakistan Telecom AS45595 (ASN-PkT-40). ');
$ax += cidrblock($address,'203.135.43.0/24','Pakistan Telecom AS45595 (ASN-PkT-41). ');
$ax += cidrblock($address,'203.135.48.0/23','Pakistan Telecom AS45595 (ASN-PkT-42). ');
$ax += cidrblock($address,'203.135.50.0/24','Pakistan Telecom AS45595 (ASN-PkT-43). ');
$ax += cidrblock($address,'203.135.54.0/23','Pakistan Telecom AS45595 (ASN-PkT-44). ');
$ax += cidrblock($address,'203.135.58.0/24','Pakistan Telecom AS45595 (ASN-PkT-45). ');
$ax += cidrblock($address,'203.135.61.0/24','Pakistan Telecom AS45595 (ASN-PkT-46). ');
$ax += cidrblock($address,'221.120.225.0/24','Pakistan Telecom AS45595 (ASN-PkT-47). ');
$ax += cidrblock($address,'221.120.233.0/24','Pakistan Telecom AS45595 (ASN-PkT-48). ');

//Kintiskton LLC, Mark Manager copyright check bot (abusive history)

$ax += cidrblock($address,'63.110.158.0/24','Kintiskton LLC (ASN-KINT-01). ');
$ax += cidrblock($address,'64.124.14.0/24','Kintiskton LLC (ASN-KINT-02). ');
$ax += cidrblock($address,'64.124.59.0/24','Kintiskton LLC (ASN-KINT-03). ');
$ax += cidrblock($address,'64.124.69.0/24','Kintiskton LLC (ASN-KINT-04). ');
$ax += cidrblock($address,'65.200.47.0/24','Kintiskton LLC (ASN-KINT-06). ');
$ax += cidrblock($address,'65.200.90.0/24','Kintiskton LLC (ASN-KINT-07). ');
$ax += cidrblock($address,'65.208.151.0/24','Kintiskton LLC (ASN-KINT-08). ');
$ax += cidrblock($address,'65.208.174.0/24','Kintiskton LLC (ASN-KINT-09). ');
$ax += cidrblock($address,'65.208.181.0/24','Kintiskton LLC (ASN-KINT-10). ');
$ax += cidrblock($address,'65.208.185.0/24','Kintiskton LLC (ASN-KINT-11). ');
$ax += cidrblock($address,'65.208.189.0/24','Kintiskton LLC (ASN-KINT-12). ');
$ax += cidrblock($address,'65.211.195.0/24','Kintiskton LLC (ASN-KINT-13). ');
$ax += cidrblock($address,'70.42.144.0/23','Kintiskton LLC (ASN-KINT-14). ');
$ax += cidrblock($address,'76.216.100.0/24','Kintiskton LLC (ASN-KINT-15). ');
$ax += cidrblock($address,'207.126.100.0/24','Kintiskton LLC (ASN-KINT-16). ');

// Limestone networks, Hosts of hackforums.net
// AS46475 updated 08/26/15

$ax += cidrblock($address,'63.143.32.0/19','Limestone Networks AS46475 (ASN-LSN-01). ');
$ax += cidrblock($address,'64.31.0.0/18','Limestone Networks AS46475 (ASN-LSN-02). ');
$ax += cidrblock($address,'69.162.64.0/18','Limestone Networks AS46475 (ASN-LSN-03). ');
$ax += cidrblock($address,'74.63.192.0/18','Limestone Networks AS46475 (ASN-LSN-04). ');
$ax += cidrblock($address,'103.60.218.0/24','Limestone Networks AS46475 (ASN-LSN-05). ');
$ax += cidrblock($address,'150.129.136.0/23','Limestone Networks AS46475 (ASN-LSN-06). ');
$ax += cidrblock($address,'150.242.36.0/24','Limestone Networks AS46475 (ASN-LSN-07). ');
$ax += cidrblock($address,'162.253.40.0/22','Limestone Networks AS46475 (ASN-LSN-08). ');
$ax += cidrblock($address,'192.169.80.0/20','Limestone Networks AS46475 (ASN-LSN-09). ');
$ax += cidrblock($address,'208.115.192.0/18','Limestone Networks AS46475 (ASN-LSN-10). ');
$ax += cidrblock($address,'216.144.240.0/20','Limestone Networks AS46475 (ASN-LSN-11). ');
$ax += cidrblock($address,'216.245.192.0/19','Limestone Networks AS46475 (ASN-LSN-12). ');

// Redstation Network
// AS35662 updated 08/26/15

$ax += cidrblock($address,'5.152.192.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-01). ');
$ax += cidrblock($address,'27.111.15.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-02). ');
$ax += cidrblock($address,'31.3.224.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-03). ');
$ax += cidrblock($address,'37.157.240.0/21','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-04). ');
$ax += cidrblock($address,'37.220.0.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-05). ');
$ax += cidrblock($address,'77.245.64.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-06). ');
$ax += cidrblock($address,'79.143.80.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-07). ');
$ax += cidrblock($address,'80.84.48.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-08). ');
$ax += cidrblock($address,'80.243.176.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-09). ');
$ax += cidrblock($address,'81.94.192.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-10). ');
$ax += cidrblock($address,'82.102.8.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-11). ');
$ax += cidrblock($address,'87.236.209.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-12). ');
$ax += cidrblock($address,'87.236.214.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-13). ');
$ax += cidrblock($address,'88.150.128.0/17','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-14). ');
$ax += cidrblock($address,'91.225.0.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-15). ');
$ax += cidrblock($address,'91.228.206.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-16). ');
$ax += cidrblock($address,'91.238.100.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-17). ');
$ax += cidrblock($address,'109.73.64.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-18). ');
$ax += cidrblock($address,'109.200.0.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-19). ');
$ax += cidrblock($address,'149.3.128.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-20). ');
$ax += cidrblock($address,'176.56.192.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-21). ');
$ax += cidrblock($address,'176.227.192.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-22). ');
$ax += cidrblock($address,'185.5.0.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-23). ');
$ax += cidrblock($address,'185.20.96.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-24). ');
$ax += cidrblock($address,'185.36.76.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-25). ');
$ax += cidrblock($address,'185.82.221.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-26). ');
$ax += cidrblock($address,'188.72.99.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-27). ');
$ax += cidrblock($address,'188.212.122.0/23','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-28). ');
$ax += cidrblock($address,'188.227.160.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-29). ');
$ax += cidrblock($address,'190.121.209.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-30). ');

// AFAS AnchorFree Inc IP Network ASN26642
// Listed 71h

$ax += cidrblock($address,'63.141.198.0/24','AnchorFree Inc ASN26642 (ASN-AF-01). ');
$ax += cidrblock($address,'74.115.0.0/21','AnchorFree Inc ASN26642 (ASN-AF-02). ');
$ax += cidrblock($address,'209.73.132.0/24','AnchorFree Inc ASN26642 (ASN-AF-03). ');
$ax += cidrblock($address,'216.172.135.0/24','AnchorFree Inc ASN26642 (ASN-AF-04). ');
$ax += cidrblock($address,'216.172.142.0/24','AnchorFree Inc ASN26642 (ASN-AF-05). ');

/// Rotten romainian network.

$ax += cidrblock($address,'89.36.232.0/22','Romainian network trying to hack user accounts (ASN-AS41011-01). '); //69b
$ax += cidrblock($address,'89.37.132.0/24','Romainian network trying to hack user accounts (ASN-AS41011-02). '); //69b
$ax += cidrblock($address,'89.41.172.0/23','Romainian network trying to hack user accounts (ASN-AS41011-03). '); //69b
$ax += cidrblock($address,'89.46.132.0/22','Romainian network trying to hack user accounts (ASN-AS41011-04). '); //69b
$ax += cidrblock($address,'93.113.36.0/23','Romainian network trying to hack user accounts (ASN-AS41011-05). '); //69b
$ax += cidrblock($address,'93.115.240.0/23','Romainian network trying to hack user accounts (ASN-AS41011-06). '); //69b
$ax += cidrblock($address,'188.208.32.0/23','Romainian network trying to hack user accounts (ASN-AS41011-07). '); //69b
$ax += cidrblock($address,'188.240.32.0/22','Romainian network trying to hack user accounts (ASN-AS41011-08). '); //69b
$ax += cidrblock($address,'46.108.128.0/21','Romainian network trying to hack user accounts (ASN-AS41011-09). '); //69b
$ax += cidrblock($address,'46.108.144.0/21','Romainian network trying to hack user accounts (ASN-AS41011-10). '); //69b
$ax += cidrblock($address,'46.108.240.0/21','Romainian network trying to hack user accounts (ASN-AS41011-11). '); //69b

// Swiftway / Botmaster Labs
// AS35017 updated 08/27/15

$ax += cidrblock($address,'5.56.133.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-01). ');
$ax += cidrblock($address,'5.61.28.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-02). ');
$ax += cidrblock($address,'23.227.192.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-03). ');
$ax += cidrblock($address,'31.187.78.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-04). ');
$ax += cidrblock($address,'31.214.240.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-05). ');
$ax += cidrblock($address,'37.1.208.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-06). ');
$ax += cidrblock($address,'37.72.168.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-07). ');
$ax += cidrblock($address,'45.74.17.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-08). ');
$ax += cidrblock($address,'45.74.18.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-09). ');
$ax += cidrblock($address,'45.74.20.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-10). ');
$ax += cidrblock($address,'45.74.24.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-11). ');
$ax += cidrblock($address,'45.74.32.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-12). ');
$ax += cidrblock($address,'45.74.34.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-13). ');
$ax += cidrblock($address,'45.74.47.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-14). ');
$ax += cidrblock($address,'45.74.48.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-15). ');
$ax += cidrblock($address,'45.74.56.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-16). ');
$ax += cidrblock($address,'46.21.144.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-17). ');
$ax += cidrblock($address,'64.187.144.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-18). ');
$ax += cidrblock($address,'69.1.69.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-19). ');
$ax += cidrblock($address,'69.1.70.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-20). ');
$ax += cidrblock($address,'69.168.224.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-21). ');
$ax += cidrblock($address,'69.168.232.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-22). ');
$ax += cidrblock($address,'89.233.104.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-23). ');
$ax += cidrblock($address,'91.199.45.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-24). ');
$ax += cidrblock($address,'91.239.64.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-25). ');
$ax += cidrblock($address,'94.100.16.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-26). ');
$ax += cidrblock($address,'100.42.224.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-27). ');
$ax += cidrblock($address,'104.143.32.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-28). ');
$ax += cidrblock($address,'114.31.208.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-29). ');
$ax += cidrblock($address,'114.141.112.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-30). ');
$ax += cidrblock($address,'142.215.24.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-31). ');
$ax += cidrblock($address,'149.54.112.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-32). ');
$ax += cidrblock($address,'149.54.128.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-33). ');
$ax += cidrblock($address,'149.54.144.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-34). ');
$ax += cidrblock($address,'149.154.158.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-35). ');
$ax += cidrblock($address,'149.255.32.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-36). ');
$ax += cidrblock($address,'151.236.16.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-37). ');
$ax += cidrblock($address,'151.236.22.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-38). ');
$ax += cidrblock($address,'158.255.213.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-39). ');
$ax += cidrblock($address,'159.35.168.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-40). ');
$ax += cidrblock($address,'159.35.184.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-41). ');
$ax += cidrblock($address,'159.35.208.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-42). ');
$ax += cidrblock($address,'159.35.218.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-43). ');
$ax += cidrblock($address,'159.35.220.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-44). ');
$ax += cidrblock($address,'159.35.232.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-45). ');
$ax += cidrblock($address,'162.218.28.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-46). ');
$ax += cidrblock($address,'162.250.140.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-47). ');
$ax += cidrblock($address,'162.251.143.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-48). ');
$ax += cidrblock($address,'162.252.172.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-49). ');
$ax += cidrblock($address,'172.94.64.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-50). ');
$ax += cidrblock($address,'172.94.68.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-51). ');
$ax += cidrblock($address,'172.94.70.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-52). ');
$ax += cidrblock($address,'172.94.72.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-53). ');
$ax += cidrblock($address,'172.94.80.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-54). ');
$ax += cidrblock($address,'172.94.113.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-55). ');
$ax += cidrblock($address,'172.94.114.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-56). ');
$ax += cidrblock($address,'190.102.32.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-57). ');
$ax += cidrblock($address,'191.101.20.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-58). ');
$ax += cidrblock($address,'191.101.31.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-59). ');
$ax += cidrblock($address,'193.221.125.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-60). ');
$ax += cidrblock($address,'194.126.172.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-61). ');
$ax += cidrblock($address,'195.242.152.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-62). ');
$ax += cidrblock($address,'198.40.48.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-63). ');
$ax += cidrblock($address,'198.176.48.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-64). ');
$ax += cidrblock($address,'206.123.146.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-65). ');
$ax += cidrblock($address,'206.123.150.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-66). ');
$ax += cidrblock($address,'206.123.152.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-67). ');

// SoftLayer Technologies/The Planet/Everyones Internet Hostile & Spam Tolerant Networks
// (AS36351, AS36420, AS30315, AS13749, AS21844) updated 08/27/15

$ax += cidrblock($address,'5.10.64.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-001). ');
$ax += cidrblock($address,'5.62.21.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-002). ');
$ax += cidrblock($address,'5.153.0.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-003). ');
$ax += cidrblock($address,'12.96.160.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-004). ');
$ax += cidrblock($address,'12.156.0.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-005). ');
$ax += cidrblock($address,'12.169.197.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-006). ');
$ax += cidrblock($address,'23.91.112.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-007). ');
$ax += cidrblock($address,'23.239.0.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-008). ');
$ax += cidrblock($address,'23.246.192.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-009). ');
$ax += cidrblock($address,'23.252.96.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-010). ');
$ax += cidrblock($address,'37.18.176.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-011). ');
$ax += cidrblock($address,'37.46.10.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-012). ');
$ax += cidrblock($address,'37.46.14.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-013). ');
$ax += cidrblock($address,'37.58.64.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-014). ');
$ax += cidrblock($address,'37.72.184.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-015). ');
$ax += cidrblock($address,'37.130.224.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-016). ');
$ax += cidrblock($address,'41.72.128.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-017). ');
$ax += cidrblock($address,'41.203.0.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-018). ');
$ax += cidrblock($address,'41.204.192.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-019). ');
$ax += cidrblock($address,'43.226.228.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-020). ');
$ax += cidrblock($address,'43.226.230.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-021). ');
$ax += cidrblock($address,'43.228.157.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-022). ');
$ax += cidrblock($address,'43.228.159.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-023). ');
$ax += cidrblock($address,'43.239.88.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-024). ');
$ax += cidrblock($address,'43.245.116.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-025). ');
$ax += cidrblock($address,'43.245.168.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-026). ');
$ax += cidrblock($address,'43.250.48.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-027). ');
$ax += cidrblock($address,'43.252.139.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-028). ');
$ax += cidrblock($address,'43.255.188.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-029). ');
$ax += cidrblock($address,'43.255.190.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-030). ');
$ax += cidrblock($address,'45.33.0.0/17','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-031). ');
$ax += cidrblock($address,'45.41.133.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-032). ');
$ax += cidrblock($address,'45.41.135.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-033). ');
$ax += cidrblock($address,'45.56.64.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-034). ');
$ax += cidrblock($address,'45.56.131.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-035). ');
$ax += cidrblock($address,'45.56.151.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-036). ');
$ax += cidrblock($address,'45.56.154.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-037). ');
$ax += cidrblock($address,'45.56.158.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-038). ');
$ax += cidrblock($address,'45.74.39.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-039). ');
$ax += cidrblock($address,'45.74.41.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-040). ');
$ax += cidrblock($address,'45.74.42.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-041). ');
$ax += cidrblock($address,'45.74.44.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-042). ');
$ax += cidrblock($address,'45.74.59.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-043). ');
$ax += cidrblock($address,'45.74.60.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-044). ');
$ax += cidrblock($address,'45.79.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-045). ');
$ax += cidrblock($address,'45.112.84.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-046). ');
$ax += cidrblock($address,'45.115.25.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-047). ');
$ax += cidrblock($address,'45.116.12.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-048). ');
$ax += cidrblock($address,'45.117.100.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-049). ');
$ax += cidrblock($address,'45.120.104.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-050). ');
$ax += cidrblock($address,'45.120.156.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-051). ');
$ax += cidrblock($address,'45.124.64.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-052). ');
$ax += cidrblock($address,'45.124.112.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-053). ');
$ax += cidrblock($address,'45.125.0.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-054). ');
$ax += cidrblock($address,'46.16.184.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-055). ');
$ax += cidrblock($address,'46.29.252.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-056). ');
$ax += cidrblock($address,'50.22.0.0/15','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-057). ');
$ax += cidrblock($address,'50.93.192.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-058). ');
$ax += cidrblock($address,'50.97.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-059). ');
$ax += cidrblock($address,'50.116.16.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-060). ');
$ax += cidrblock($address,'50.116.64.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-061). ');
$ax += cidrblock($address,'62.40.0.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-062). ');
$ax += cidrblock($address,'63.141.128.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-063). ');
$ax += cidrblock($address,'63.160.56.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-064). ');
$ax += cidrblock($address,'64.5.32.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-065). ');
$ax += cidrblock($address,'64.234.224.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-066). ');
$ax += cidrblock($address,'64.246.0.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-067). ');
$ax += cidrblock($address,'65.181.64.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-068). ');
$ax += cidrblock($address,'66.36.160.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-069). ');
$ax += cidrblock($address,'66.98.128.0/17','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-070). ');
$ax += cidrblock($address,'66.219.16.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-071). ');
$ax += cidrblock($address,'66.228.48.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-072). ');
$ax += cidrblock($address,'66.228.112.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-073). ');
$ax += cidrblock($address,'66.241.112.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-074). ');
$ax += cidrblock($address,'67.15.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-075). ');
$ax += cidrblock($address,'67.18.0.0/15','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-076). ');
$ax += cidrblock($address,'67.23.160.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-077). ');
$ax += cidrblock($address,'67.213.208.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-078). ');
$ax += cidrblock($address,'67.228.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-079). ');
$ax += cidrblock($address,'68.115.226.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-080). ');
$ax += cidrblock($address,'68.169.32.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-081). ');
$ax += cidrblock($address,'68.169.36.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-082). ');
$ax += cidrblock($address,'69.4.208.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-083). ');
$ax += cidrblock($address,'69.4.224.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-084). ');
$ax += cidrblock($address,'69.6.0.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-085). ');
$ax += cidrblock($address,'69.6.64.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-086). ');
$ax += cidrblock($address,'69.30.55.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-087). ');
$ax += cidrblock($address,'69.41.224.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-088). ');
$ax += cidrblock($address,'69.56.128.0/17','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-089). ');
$ax += cidrblock($address,'69.57.128.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-090). ');
$ax += cidrblock($address,'69.61.68.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-091). ');
$ax += cidrblock($address,'69.93.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-092). ');
$ax += cidrblock($address,'69.164.192.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-093). ');
$ax += cidrblock($address,'69.168.224.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-094). ');
$ax += cidrblock($address,'70.84.0.0/14','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-095). ');
$ax += cidrblock($address,'72.13.122.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-096). ');
$ax += cidrblock($address,'72.14.176.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-097). ');
$ax += cidrblock($address,'74.52.0.0/14','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-098). ');
$ax += cidrblock($address,'74.63.54.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-099). ');
$ax += cidrblock($address,'74.86.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-100). ');
$ax += cidrblock($address,'74.112.168.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-101). ');
$ax += cidrblock($address,'74.116.84.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-102). ');
$ax += cidrblock($address,'74.120.236.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-103). ');
$ax += cidrblock($address,'74.121.54.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-104). ');
$ax += cidrblock($address,'75.125.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-105). ');
$ax += cidrblock($address,'75.126.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-106). ');
$ax += cidrblock($address,'81.95.144.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-107). ');
$ax += cidrblock($address,'88.202.231.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-108). ');
$ax += cidrblock($address,'89.38.48.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-109). ');
$ax += cidrblock($address,'91.236.122.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-110). ');
$ax += cidrblock($address,'96.47.32.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-111). ');
$ax += cidrblock($address,'96.47.40.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-112). ');
$ax += cidrblock($address,'96.47.232.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-113). ');
$ax += cidrblock($address,'96.125.160.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-114). ');
$ax += cidrblock($address,'96.126.112.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-115). ');
$ax += cidrblock($address,'100.42.48.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-116). ');
$ax += cidrblock($address,'103.4.192.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-117). ');
$ax += cidrblock($address,'103.6.16.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-118). ');
$ax += cidrblock($address,'103.35.56.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-119). ');
$ax += cidrblock($address,'103.44.72.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-120). ');
$ax += cidrblock($address,'103.46.141.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-121). ');
$ax += cidrblock($address,'103.46.143.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-122). ');
$ax += cidrblock($address,'103.51.164.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-123). ');
$ax += cidrblock($address,'103.52.212.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-124). ');
$ax += cidrblock($address,'103.53.196.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-125). ');
$ax += cidrblock($address,'103.56.52.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-126). ');
$ax += cidrblock($address,'103.56.216.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-127). ');
$ax += cidrblock($address,'103.57.165.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-128). ');
$ax += cidrblock($address,'103.57.166.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-129). ');
$ax += cidrblock($address,'103.192.224.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-130). ');
$ax += cidrblock($address,'103.193.4.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-131). ');
$ax += cidrblock($address,'103.193.128.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-132). ');
$ax += cidrblock($address,'103.194.40.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-133). ');
$ax += cidrblock($address,'103.224.100.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-134). ');
$ax += cidrblock($address,'103.226.228.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-135). ');
$ax += cidrblock($address,'103.227.56.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-136). ');
$ax += cidrblock($address,'103.227.156.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-137). ');
$ax += cidrblock($address,'103.227.208.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-138). ');
$ax += cidrblock($address,'103.243.19.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-139). ');
$ax += cidrblock($address,'103.243.72.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-140). ');
$ax += cidrblock($address,'103.243.144.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-141). ');
$ax += cidrblock($address,'103.246.140.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-142). ');
$ax += cidrblock($address,'103.252.72.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-143). ');
$ax += cidrblock($address,'103.253.25.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-144). ');
$ax += cidrblock($address,'103.253.26.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-145). ');
$ax += cidrblock($address,'104.37.3.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-146). ');
$ax += cidrblock($address,'104.128.128.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-147). ');
$ax += cidrblock($address,'104.128.224.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-148). ');
$ax += cidrblock($address,'104.152.64.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-149). ');
$ax += cidrblock($address,'104.153.196.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-150). ');
$ax += cidrblock($address,'104.167.30.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-151). ');
$ax += cidrblock($address,'104.167.217.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-152). ');
$ax += cidrblock($address,'104.171.0.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-153). ');
$ax += cidrblock($address,'104.193.176.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-154). ');
$ax += cidrblock($address,'104.193.184.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-155). ');
$ax += cidrblock($address,'104.194.192.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-156). ');
$ax += cidrblock($address,'104.195.64.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-157). ');
$ax += cidrblock($address,'104.200.16.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-158). ');
$ax += cidrblock($address,'104.207.69.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-159). ');
$ax += cidrblock($address,'104.207.76.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-160). ');
$ax += cidrblock($address,'104.207.83.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-161). ');
$ax += cidrblock($address,'104.207.84.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-162). ');
$ax += cidrblock($address,'104.222.131.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-163). ');
$ax += cidrblock($address,'104.222.140.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-164). ');
$ax += cidrblock($address,'104.222.145.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-165). ');
$ax += cidrblock($address,'104.222.149.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-166). ');
$ax += cidrblock($address,'104.237.91.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-167). ');
$ax += cidrblock($address,'104.237.93.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-168). ');
$ax += cidrblock($address,'104.237.128.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-169). ');
$ax += cidrblock($address,'104.243.249.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-170). ');
$ax += cidrblock($address,'104.243.253.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-171). ');
$ax += cidrblock($address,'104.245.12.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-172). ');
$ax += cidrblock($address,'104.249.128.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-173). ');
$ax += cidrblock($address,'104.250.96.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-174). ');
$ax += cidrblock($address,'104.250.172.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-175). ');
$ax += cidrblock($address,'104.250.179.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-176). ');
$ax += cidrblock($address,'104.250.183.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-177). ');
$ax += cidrblock($address,'107.153.20.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-178). ');
$ax += cidrblock($address,'107.168.32.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-179). ');
$ax += cidrblock($address,'107.168.80.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-180). ');
$ax += cidrblock($address,'107.169.101.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-181). ');
$ax += cidrblock($address,'108.161.176.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-182). ');
$ax += cidrblock($address,'108.165.18.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-183). ');
$ax += cidrblock($address,'108.167.128.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-184). ');
$ax += cidrblock($address,'108.168.128.0/17','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-185). ');
$ax += cidrblock($address,'108.174.144.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-186). ');
$ax += cidrblock($address,'108.175.144.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-187). ');
$ax += cidrblock($address,'108.179.192.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-188). ');
$ax += cidrblock($address,'108.229.0.0/17','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-189). ');
$ax += cidrblock($address,'109.68.96.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-190). ');
$ax += cidrblock($address,'109.73.224.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-191). ');
$ax += cidrblock($address,'109.199.96.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-192). ');
$ax += cidrblock($address,'111.221.44.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-193). ');
$ax += cidrblock($address,'114.31.208.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-194). ');
$ax += cidrblock($address,'118.27.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-195). ');
$ax += cidrblock($address,'119.18.48.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-196). ');
$ax += cidrblock($address,'119.18.53.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-197). ');
$ax += cidrblock($address,'119.18.56.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-198). ');
$ax += cidrblock($address,'119.81.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-199). ');
$ax += cidrblock($address,'129.33.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-200). ');
$ax += cidrblock($address,'129.41.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-201). ');
$ax += cidrblock($address,'129.232.128.0/17','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-202). ');
$ax += cidrblock($address,'134.168.0.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-203). ');
$ax += cidrblock($address,'138.204.168.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-204). ');
$ax += cidrblock($address,'142.147.88.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-205). ');
$ax += cidrblock($address,'142.147.95.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-206). ');
$ax += cidrblock($address,'142.215.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-207). ');
$ax += cidrblock($address,'146.88.128.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-208). ');
$ax += cidrblock($address,'149.75.192.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-209). ');
$ax += cidrblock($address,'153.92.41.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-210). ');
$ax += cidrblock($address,'153.92.43.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-211). ');
$ax += cidrblock($address,'153.92.44.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-212). ');
$ax += cidrblock($address,'154.16.96.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-213). ');
$ax += cidrblock($address,'155.254.229.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-214). ');
$ax += cidrblock($address,'155.254.246.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-215). ');
$ax += cidrblock($address,'156.143.0.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-216). ');
$ax += cidrblock($address,'158.85.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-217). ');
$ax += cidrblock($address,'159.8.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-218). ');
$ax += cidrblock($address,'159.100.176.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-219). ');
$ax += cidrblock($address,'159.122.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-220). ');
$ax += cidrblock($address,'159.253.128.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-221). ');
$ax += cidrblock($address,'161.202.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-222). ');
$ax += cidrblock($address,'162.210.48.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-223). ');
$ax += cidrblock($address,'162.210.71.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-224). ');
$ax += cidrblock($address,'162.222.225.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-225). ');
$ax += cidrblock($address,'162.244.164.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-226). ');
$ax += cidrblock($address,'162.246.184.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-227). ');
$ax += cidrblock($address,'162.251.80.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-228). ');
$ax += cidrblock($address,'162.251.82.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-229). ');
$ax += cidrblock($address,'162.251.85.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-230). ');
$ax += cidrblock($address,'162.253.144.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-231). ');
$ax += cidrblock($address,'162.254.160.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-232). ');
$ax += cidrblock($address,'163.47.16.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-233). ');
$ax += cidrblock($address,'165.212.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-234). ');
$ax += cidrblock($address,'167.88.96.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-235). ');
$ax += cidrblock($address,'167.160.96.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-236). ');
$ax += cidrblock($address,'168.1.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-237). ');
$ax += cidrblock($address,'169.45.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-238). ');
$ax += cidrblock($address,'169.53.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-239). ');
$ax += cidrblock($address,'169.54.0.0/15','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-240). ');
$ax += cidrblock($address,'169.57.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-241). ');
$ax += cidrblock($address,'172.81.110.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-242). ');
$ax += cidrblock($address,'172.81.120.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-243). ');
$ax += cidrblock($address,'172.94.3.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-244). ');
$ax += cidrblock($address,'172.94.4.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-245). ');
$ax += cidrblock($address,'172.94.27.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-246). ');
$ax += cidrblock($address,'172.94.29.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-247). ');
$ax += cidrblock($address,'172.94.39.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-248). ');
$ax += cidrblock($address,'172.94.40.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-249). ');
$ax += cidrblock($address,'172.94.48.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-250). ');
$ax += cidrblock($address,'172.94.82.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-251). ');
$ax += cidrblock($address,'172.94.84.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-252). ');
$ax += cidrblock($address,'172.94.88.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-253). ');
$ax += cidrblock($address,'172.94.116.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-254). ');
$ax += cidrblock($address,'172.94.118.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-255). ');
$ax += cidrblock($address,'172.94.120.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-256). ');
$ax += cidrblock($address,'172.96.112.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-257). ');
$ax += cidrblock($address,'172.111.236.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-258). ');
$ax += cidrblock($address,'172.111.240.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-259). ');
$ax += cidrblock($address,'173.82.254.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-260). ');
$ax += cidrblock($address,'173.192.0.0/15','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-261). ');
$ax += cidrblock($address,'173.239.196.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-262). ');
$ax += cidrblock($address,'173.244.192.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-263). ');
$ax += cidrblock($address,'173.249.144.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-264). ');
$ax += cidrblock($address,'173.255.128.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-265). ');
$ax += cidrblock($address,'173.255.192.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-266). ');
$ax += cidrblock($address,'174.36.0.0/15','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-267). ');
$ax += cidrblock($address,'174.120.0.0/14','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-268). ');
$ax += cidrblock($address,'174.127.64.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-269). ');
$ax += cidrblock($address,'174.132.0.0/15','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-270). ');
$ax += cidrblock($address,'174.140.18.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-271). ');
$ax += cidrblock($address,'174.140.29.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-272). ');
$ax += cidrblock($address,'174.140.33.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-273). ');
$ax += cidrblock($address,'174.140.36.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-274). ');
$ax += cidrblock($address,'174.140.51.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-275). ');
$ax += cidrblock($address,'175.158.105.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-276). ');
$ax += cidrblock($address,'175.158.107.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-277). ');
$ax += cidrblock($address,'177.70.126.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-278). ');
$ax += cidrblock($address,'177.136.8.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-279). ');
$ax += cidrblock($address,'177.136.36.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-280). ');
$ax += cidrblock($address,'177.152.192.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-281). ');
$ax += cidrblock($address,'178.18.16.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-282). ');
$ax += cidrblock($address,'179.61.250.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-283). ');
$ax += cidrblock($address,'181.41.193.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-284). ');
$ax += cidrblock($address,'181.119.160.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-285). ');
$ax += cidrblock($address,'181.224.128.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-286). ');
$ax += cidrblock($address,'184.170.224.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-287). ');
$ax += cidrblock($address,'184.172.0.0/15','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-288). ');
$ax += cidrblock($address,'185.5.80.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-289). ');
$ax += cidrblock($address,'185.10.10.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-290). ');
$ax += cidrblock($address,'185.13.56.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-291). ');
$ax += cidrblock($address,'185.19.176.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-292). ');
$ax += cidrblock($address,'185.21.132.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-293). ');
$ax += cidrblock($address,'185.31.208.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-294). ');
$ax += cidrblock($address,'185.51.164.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-295). ');
$ax += cidrblock($address,'185.59.100.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-296). ');
$ax += cidrblock($address,'185.62.236.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-297). ');
$ax += cidrblock($address,'185.64.244.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-298). ');
$ax += cidrblock($address,'185.74.44.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-299). ');
$ax += cidrblock($address,'185.82.244.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-300). ');
$ax += cidrblock($address,'185.83.100.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-301). ');
$ax += cidrblock($address,'185.85.0.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-302). ');
$ax += cidrblock($address,'185.94.31.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-303). ');
$ax += cidrblock($address,'185.106.204.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-304). ');
$ax += cidrblock($address,'186.26.64.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-305). ');
$ax += cidrblock($address,'186.26.96.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-306). ');
$ax += cidrblock($address,'186.233.248.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-307). ');
$ax += cidrblock($address,'188.72.100.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-308). ');
$ax += cidrblock($address,'190.60.173.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-309). ');
$ax += cidrblock($address,'190.61.7.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-310). ');
$ax += cidrblock($address,'190.61.8.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-311). ');
$ax += cidrblock($address,'190.61.16.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-312). ');
$ax += cidrblock($address,'190.61.18.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-313). ');
$ax += cidrblock($address,'190.61.20.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-314). ');
$ax += cidrblock($address,'190.61.24.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-315). ');
$ax += cidrblock($address,'190.105.192.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-316). ');
$ax += cidrblock($address,'191.96.49.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-317). ');
$ax += cidrblock($address,'191.96.64.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-318). ');
$ax += cidrblock($address,'191.101.56.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-319). ');
$ax += cidrblock($address,'191.101.135.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-320). ');
$ax += cidrblock($address,'191.101.179.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-321). ');
$ax += cidrblock($address,'191.241.96.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-322). ');
$ax += cidrblock($address,'192.40.176.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-323). ');
$ax += cidrblock($address,'192.67.134.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-324). ');
$ax += cidrblock($address,'192.71.144.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-325). ');
$ax += cidrblock($address,'192.77.241.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-326). ');
$ax += cidrblock($address,'192.81.136.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-327). ');
$ax += cidrblock($address,'192.92.97.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-328). ');
$ax += cidrblock($address,'192.92.182.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-329). ');
$ax += cidrblock($address,'192.95.112.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-330). ');
$ax += cidrblock($address,'192.153.129.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-331). ');
$ax += cidrblock($address,'192.155.192.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-332). ');
$ax += cidrblock($address,'192.169.48.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-333). ');
$ax += cidrblock($address,'192.200.160.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-334). ');
$ax += cidrblock($address,'192.240.209.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-335). ');
$ax += cidrblock($address,'192.240.215.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-336). ');
$ax += cidrblock($address,'192.253.242.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-337). ');
$ax += cidrblock($address,'192.253.248.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-338). ');
$ax += cidrblock($address,'192.253.252.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-339). ');
$ax += cidrblock($address,'192.255.0.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-340). ');
$ax += cidrblock($address,'192.255.98.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-341). ');
$ax += cidrblock($address,'194.14.217.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-342). ');
$ax += cidrblock($address,'194.45.71.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-343). ');
$ax += cidrblock($address,'194.64.31.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-344). ');
$ax += cidrblock($address,'194.64.142.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-345). ');
$ax += cidrblock($address,'194.64.183.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-346). ');
$ax += cidrblock($address,'194.68.44.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-347). ');
$ax += cidrblock($address,'194.71.130.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-348). ');
$ax += cidrblock($address,'194.71.227.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-349). ');
$ax += cidrblock($address,'194.116.167.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-350). ');
$ax += cidrblock($address,'195.82.64.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-351). ');
$ax += cidrblock($address,'195.94.64.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-352). ');
$ax += cidrblock($address,'195.135.128.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-353). ');
$ax += cidrblock($address,'195.227.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-354). ');
$ax += cidrblock($address,'196.22.132.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-355). ');
$ax += cidrblock($address,'196.22.136.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-356). ');
$ax += cidrblock($address,'196.40.96.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-357). ');
$ax += cidrblock($address,'196.45.112.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-358). ');
$ax += cidrblock($address,'197.189.192.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-359). ');
$ax += cidrblock($address,'197.221.0.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-360). ');
$ax += cidrblock($address,'197.242.64.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-361). ');
$ax += cidrblock($address,'197.242.80.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-362). ');
$ax += cidrblock($address,'197.242.88.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-363). ');
$ax += cidrblock($address,'198.11.192.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-364). ');
$ax += cidrblock($address,'198.23.64.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-365). ');
$ax += cidrblock($address,'198.51.44.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-366). ');
$ax += cidrblock($address,'198.58.80.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-367). ');
$ax += cidrblock($address,'198.58.96.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-368). ');
$ax += cidrblock($address,'198.105.208.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-369). ');
$ax += cidrblock($address,'198.144.16.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-370). ');
$ax += cidrblock($address,'198.154.192.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-371). ');
$ax += cidrblock($address,'198.252.64.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-372). ');
$ax += cidrblock($address,'198.252.96.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-373). ');
$ax += cidrblock($address,'199.47.148.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-374). ');
$ax += cidrblock($address,'199.59.144.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-375). ');
$ax += cidrblock($address,'199.66.136.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-376). ');
$ax += cidrblock($address,'199.66.178.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-377). ');
$ax += cidrblock($address,'199.166.34.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-378). ');
$ax += cidrblock($address,'199.167.224.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-379). ');
$ax += cidrblock($address,'199.187.172.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-380). ');
$ax += cidrblock($address,'199.190.174.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-381). ');
$ax += cidrblock($address,'199.192.216.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-382). ');
$ax += cidrblock($address,'199.195.192.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-383). ');
$ax += cidrblock($address,'199.244.72.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-384). ');
$ax += cidrblock($address,'200.58.126.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-385). ');
$ax += cidrblock($address,'200.187.65.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-386). ');
$ax += cidrblock($address,'202.43.127.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-387). ');
$ax += cidrblock($address,'202.81.4.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-388). ');
$ax += cidrblock($address,'204.10.5.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-389). ');
$ax += cidrblock($address,'204.42.47.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-390). ');
$ax += cidrblock($address,'204.62.251.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-391). ');
$ax += cidrblock($address,'205.138.54.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-392). ');
$ax += cidrblock($address,'205.167.24.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-393). ');
$ax += cidrblock($address,'205.201.128.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-394). ');
$ax += cidrblock($address,'206.190.128.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-395). ');
$ax += cidrblock($address,'206.217.192.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-396). ');
$ax += cidrblock($address,'206.253.224.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-397). ');
$ax += cidrblock($address,'207.44.128.0/17','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-398). ');
$ax += cidrblock($address,'207.189.184.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-399). ');
$ax += cidrblock($address,'207.218.192.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-400). ');
$ax += cidrblock($address,'208.43.0.0/16','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-401). ');
$ax += cidrblock($address,'208.69.228.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-402). ');
$ax += cidrblock($address,'208.73.4.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-403). ');
$ax += cidrblock($address,'208.75.56.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-404). ');
$ax += cidrblock($address,'208.83.111.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-405). ');
$ax += cidrblock($address,'208.83.140.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-406). ');
$ax += cidrblock($address,'208.87.31.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-407). ');
$ax += cidrblock($address,'208.90.172.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-408). ');
$ax += cidrblock($address,'208.91.128.0/21','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-409). ');
$ax += cidrblock($address,'208.101.0.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-410). ');
$ax += cidrblock($address,'209.44.52.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-411). ');
$ax += cidrblock($address,'209.62.0.0/17','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-412). ');
$ax += cidrblock($address,'209.85.0.0/17','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-413). ');
$ax += cidrblock($address,'209.95.32.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-414). ');
$ax += cidrblock($address,'209.95.64.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-415). ');
$ax += cidrblock($address,'209.99.17.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-416). ');
$ax += cidrblock($address,'213.52.128.0/22','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-417). ');
$ax += cidrblock($address,'216.12.192.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-418). ');
$ax += cidrblock($address,'216.21.12.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-419). ');
$ax += cidrblock($address,'216.40.192.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-420). ');
$ax += cidrblock($address,'216.59.0.0/18','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-421). ');
$ax += cidrblock($address,'216.88.76.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-422). ');
$ax += cidrblock($address,'216.88.79.0/24','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-423). ');
$ax += cidrblock($address,'216.90.204.0/23','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-424). ');
$ax += cidrblock($address,'216.105.128.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-425). ');
$ax += cidrblock($address,'216.127.64.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-426). ');
$ax += cidrblock($address,'216.137.144.0/20','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-427). ');
$ax += cidrblock($address,'216.157.128.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-428). ');
$ax += cidrblock($address,'216.172.160.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-429). ');
$ax += cidrblock($address,'216.185.96.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-430). ');
$ax += cidrblock($address,'216.234.224.0/19','Softlayer/ThePlanet/Everyone/Reach. (ASN-SLTP-431). ');

//Bypasses for (ASN-SLTP)

if ((inmatch($whyblockout,'(ASN-SLTP-','')) && ($ax > 0)){
	$zbamz = 0;
	$zbamz += inmatch($lcuseragent,'showyoubot','ShowyouBot bypass. '); //72b
	$zbamz += inmatch($lcuseragent,'disqus','Disqus bypass. '); //74a
	$zbamz += inmatch($useragent,'Feedspot http://www.feedspot.com','Feedspot bypass. '); //74c
	$zbamz += inmatch($useragent,'Superfeedr bot/2.0','Superfeedr bypass. '); //74c
	$zbamz += inmatch($useragent,'Feedbot','Feedbot bypass. '); //74c	
	if ($zbamz > 0){$ax -= 1;}
}

// Prolexic Technologies DDoS mitigation services.
// Attempted DoSing of:
// SpambotSecurity.com from IP 114.141.72.50 on 2012-12-09 @2230 hours MST
// ( AS32787  & AS7743 )

$ax += cidrblock($address,'72.52.0.0/18','Prolexic Technologies. (ASN-PLX-0). '); //77g
$ax += cidrblock($address,'93.191.168.0/21','Prolexic Technologies. (ASN-PLX-1). '); //77g
$ax += cidrblock($address,'109.69.136.0/21','Prolexic Technologies. (ASN-PLX-2). '); //77g
$ax += cidrblock($address,'114.141.72.0/21','Prolexic Technologies. (ASN-PLX-3). '); //77g
$ax += cidrblock($address,'155.136.0.0/16','Prolexic Technologies. (ASN-PLX-4). '); //77g
$ax += cidrblock($address,'159.53.0.0/16','Prolexic Technologies. (ASN-PLX-5). '); //77g
$ax += cidrblock($address,'199.253.243.0/24','Prolexic Technologies. (ASN-PLX-6). '); //77g
$ax += cidrblock($address,'199.253.244.0/23','Prolexic Technologies. (ASN-PLX-7). '); //77g
$ax += cidrblock($address,'209.200.128.0/18','Prolexic Technologies. (ASN-PLX-8). '); //77g
$ax += cidrblock($address,'209.211.208.0/22','Prolexic Technologies. (ASN-PLX-9). '); //77g

// Portlane Networks AB
// Huge set of anonymous VPN and Proxy spamming services!
// AS42708 updated 08/28/15

$ax += cidrblock($address,'5.198.248.0/21','Portlane Networks AB. (ASN-PTL-001). ');
$ax += cidrblock($address,'5.249.160.0/21','Portlane Networks AB. (ASN-PTL-002). ');
$ax += cidrblock($address,'5.254.128.0/19','Portlane Networks AB. (ASN-PTL-003). ');
$ax += cidrblock($address,'31.187.64.0/24','Portlane Networks AB. (ASN-PTL-004). ');
$ax += cidrblock($address,'31.187.76.0/24','Portlane Networks AB. (ASN-PTL-005). ');
$ax += cidrblock($address,'31.220.4.0/22','Portlane Networks AB. (ASN-PTL-006). ');
$ax += cidrblock($address,'31.220.15.0/24','Portlane Networks AB. (ASN-PTL-007). ');
$ax += cidrblock($address,'31.220.30.0/24','Portlane Networks AB. (ASN-PTL-008). ');
$ax += cidrblock($address,'31.220.42.0/23','Portlane Networks AB. (ASN-PTL-009). ');
$ax += cidrblock($address,'31.220.44.0/23','Portlane Networks AB. (ASN-PTL-010). ');
$ax += cidrblock($address,'46.246.0.0/17','Portlane Networks AB. (ASN-PTL-011). ');
$ax += cidrblock($address,'80.67.0.0/20','Portlane Networks AB. (ASN-PTL-012). ');
$ax += cidrblock($address,'80.243.125.0/24','Portlane Networks AB. (ASN-PTL-013). ');
$ax += cidrblock($address,'91.213.246.0/24','Portlane Networks AB. (ASN-PTL-014). ');
$ax += cidrblock($address,'91.217.189.0/24','Portlane Networks AB. (ASN-PTL-015). ');
$ax += cidrblock($address,'91.236.116.0/24','Portlane Networks AB. (ASN-PTL-016). ');
$ax += cidrblock($address,'91.240.64.0/22','Portlane Networks AB. (ASN-PTL-017). ');
$ax += cidrblock($address,'141.138.208.0/21','Portlane Networks AB. (ASN-PTL-018). ');
$ax += cidrblock($address,'153.92.126.0/23','Portlane Networks AB. (ASN-PTL-019). ');
$ax += cidrblock($address,'178.73.192.0/18','Portlane Networks AB. (ASN-PTL-020). ');
$ax += cidrblock($address,'185.5.44.0/24','Portlane Networks AB. (ASN-PTL-021). ');
$ax += cidrblock($address,'185.5.47.0/24','Portlane Networks AB. (ASN-PTL-022). ');
$ax += cidrblock($address,'185.9.3.0/24','Portlane Networks AB. (ASN-PTL-023). ');
$ax += cidrblock($address,'185.13.40.0/22','Portlane Networks AB. (ASN-PTL-024). ');
$ax += cidrblock($address,'185.16.87.0/24','Portlane Networks AB. (ASN-PTL-025). ');
$ax += cidrblock($address,'185.56.81.0/24','Portlane Networks AB. (ASN-PTL-026). ');
$ax += cidrblock($address,'185.66.144.0/22','Portlane Networks AB. (ASN-PTL-027). ');
$ax += cidrblock($address,'188.126.64.0/19','Portlane Networks AB. (ASN-PTL-028). ');
$ax += cidrblock($address,'192.36.119.0/24','Portlane Networks AB. (ASN-PTL-029). ');
$ax += cidrblock($address,'192.36.121.0/24','Portlane Networks AB. (ASN-PTL-030). ');
$ax += cidrblock($address,'192.36.154.0/24','Portlane Networks AB. (ASN-PTL-031). ');
$ax += cidrblock($address,'192.36.166.0/24','Portlane Networks AB. (ASN-PTL-032). ');
$ax += cidrblock($address,'192.36.198.0/24','Portlane Networks AB. (ASN-PTL-033). ');
$ax += cidrblock($address,'192.36.207.0/24','Portlane Networks AB. (ASN-PTL-034). ');
$ax += cidrblock($address,'192.36.217.0/24','Portlane Networks AB. (ASN-PTL-035). ');
$ax += cidrblock($address,'192.36.226.0/24','Portlane Networks AB. (ASN-PTL-036). ');
$ax += cidrblock($address,'192.36.241.0/24','Portlane Networks AB. (ASN-PTL-037). ');
$ax += cidrblock($address,'192.36.248.0/24','Portlane Networks AB. (ASN-PTL-038). ');
$ax += cidrblock($address,'192.71.8.0/24','Portlane Networks AB. (ASN-PTL-039). ');
$ax += cidrblock($address,'192.71.10.0/24','Portlane Networks AB. (ASN-PTL-040). ');
$ax += cidrblock($address,'192.71.12.0/24','Portlane Networks AB. (ASN-PTL-041). ');
$ax += cidrblock($address,'192.71.23.0/24','Portlane Networks AB. (ASN-PTL-042). ');
$ax += cidrblock($address,'192.71.30.0/24','Portlane Networks AB. (ASN-PTL-043). ');
$ax += cidrblock($address,'192.71.36.0/24','Portlane Networks AB. (ASN-PTL-044). ');
$ax += cidrblock($address,'192.71.38.0/24','Portlane Networks AB. (ASN-PTL-045). ');
$ax += cidrblock($address,'192.71.42.0/24','Portlane Networks AB. (ASN-PTL-046). ');
$ax += cidrblock($address,'192.71.44.0/24','Portlane Networks AB. (ASN-PTL-047). ');
$ax += cidrblock($address,'192.71.46.0/24','Portlane Networks AB. (ASN-PTL-048). ');
$ax += cidrblock($address,'192.71.48.0/24','Portlane Networks AB. (ASN-PTL-049). ');
$ax += cidrblock($address,'192.71.50.0/24','Portlane Networks AB. (ASN-PTL-050). ');
$ax += cidrblock($address,'192.71.52.0/24','Portlane Networks AB. (ASN-PTL-051). ');
$ax += cidrblock($address,'192.71.57.0/24','Portlane Networks AB. (ASN-PTL-052). ');
$ax += cidrblock($address,'192.71.59.0/24','Portlane Networks AB. (ASN-PTL-053). ');
$ax += cidrblock($address,'192.71.61.0/24','Portlane Networks AB. (ASN-PTL-054). ');
$ax += cidrblock($address,'192.71.74.0/24','Portlane Networks AB. (ASN-PTL-055). ');
$ax += cidrblock($address,'192.71.81.0/24','Portlane Networks AB. (ASN-PTL-056). ');
$ax += cidrblock($address,'192.71.103.0/24','Portlane Networks AB. (ASN-PTL-057). ');
$ax += cidrblock($address,'192.71.126.0/24','Portlane Networks AB. (ASN-PTL-058). ');
$ax += cidrblock($address,'192.71.142.0/24','Portlane Networks AB. (ASN-PTL-059). ');
$ax += cidrblock($address,'192.71.144.0/24','Portlane Networks AB. (ASN-PTL-060). ');
$ax += cidrblock($address,'192.121.44.0/24','Portlane Networks AB. (ASN-PTL-061). ');
$ax += cidrblock($address,'192.121.108.0/24','Portlane Networks AB. (ASN-PTL-062). ');
$ax += cidrblock($address,'192.121.122.0/23','Portlane Networks AB. (ASN-PTL-063). ');
$ax += cidrblock($address,'192.121.124.0/23','Portlane Networks AB. (ASN-PTL-064). ');
$ax += cidrblock($address,'192.121.126.0/24','Portlane Networks AB. (ASN-PTL-065). ');
$ax += cidrblock($address,'192.121.133.0/24','Portlane Networks AB. (ASN-PTL-066). ');
$ax += cidrblock($address,'192.121.134.0/23','Portlane Networks AB. (ASN-PTL-067). ');
$ax += cidrblock($address,'192.121.136.0/24','Portlane Networks AB. (ASN-PTL-068). ');
$ax += cidrblock($address,'192.121.146.0/23','Portlane Networks AB. (ASN-PTL-069). ');
$ax += cidrblock($address,'192.121.148.0/23','Portlane Networks AB. (ASN-PTL-070). ');
$ax += cidrblock($address,'192.121.152.0/24','Portlane Networks AB. (ASN-PTL-071). ');
$ax += cidrblock($address,'192.121.155.0/24','Portlane Networks AB. (ASN-PTL-072). ');
$ax += cidrblock($address,'192.121.185.0/24','Portlane Networks AB. (ASN-PTL-073). ');
$ax += cidrblock($address,'192.121.186.0/24','Portlane Networks AB. (ASN-PTL-074). ');
$ax += cidrblock($address,'192.121.225.0/24','Portlane Networks AB. (ASN-PTL-075). ');
$ax += cidrblock($address,'192.121.251.0/24','Portlane Networks AB. (ASN-PTL-076). ');
$ax += cidrblock($address,'192.165.17.0/24','Portlane Networks AB. (ASN-PTL-077). ');
$ax += cidrblock($address,'192.165.48.0/24','Portlane Networks AB. (ASN-PTL-078). ');
$ax += cidrblock($address,'192.165.121.0/24','Portlane Networks AB. (ASN-PTL-079). ');
$ax += cidrblock($address,'192.165.123.0/24','Portlane Networks AB. (ASN-PTL-080). ');
$ax += cidrblock($address,'192.165.205.0/24','Portlane Networks AB. (ASN-PTL-081). ');
$ax += cidrblock($address,'192.176.27.0/24','Portlane Networks AB. (ASN-PTL-082). ');
$ax += cidrblock($address,'192.176.28.0/24','Portlane Networks AB. (ASN-PTL-083). ');
$ax += cidrblock($address,'193.25.127.0/24','Portlane Networks AB. (ASN-PTL-084). ');
$ax += cidrblock($address,'193.105.134.0/24','Portlane Networks AB. (ASN-PTL-085). ');
$ax += cidrblock($address,'193.180.123.0/24','Portlane Networks AB. (ASN-PTL-086). ');
$ax += cidrblock($address,'193.180.125.0/24','Portlane Networks AB. (ASN-PTL-087). ');
$ax += cidrblock($address,'193.181.16.0/22','Portlane Networks AB. (ASN-PTL-088). ');
$ax += cidrblock($address,'193.181.234.0/24','Portlane Networks AB. (ASN-PTL-089). ');
$ax += cidrblock($address,'193.182.19.0/24','Portlane Networks AB. (ASN-PTL-090). ');
$ax += cidrblock($address,'193.183.82.0/23','Portlane Networks AB. (ASN-PTL-091). ');
$ax += cidrblock($address,'193.183.84.0/24','Portlane Networks AB. (ASN-PTL-092). ');
$ax += cidrblock($address,'193.183.86.0/23','Portlane Networks AB. (ASN-PTL-093). ');
$ax += cidrblock($address,'193.183.88.0/23','Portlane Networks AB. (ASN-PTL-094). ');
$ax += cidrblock($address,'193.183.108.0/22','Portlane Networks AB. (ASN-PTL-095). ');
$ax += cidrblock($address,'193.183.120.0/22','Portlane Networks AB. (ASN-PTL-096). ');
$ax += cidrblock($address,'193.234.255.0/24','Portlane Networks AB. (ASN-PTL-097). ');
$ax += cidrblock($address,'193.235.73.0/24','Portlane Networks AB. (ASN-PTL-098). ');
$ax += cidrblock($address,'193.235.200.0/23','Portlane Networks AB. (ASN-PTL-099). ');
$ax += cidrblock($address,'194.14.28.0/23','Portlane Networks AB. (ASN-PTL-100). ');
$ax += cidrblock($address,'194.14.45.0/24','Portlane Networks AB. (ASN-PTL-101). ');
$ax += cidrblock($address,'194.14.46.0/24','Portlane Networks AB. (ASN-PTL-102). ');
$ax += cidrblock($address,'194.14.85.0/24','Portlane Networks AB. (ASN-PTL-103). ');
$ax += cidrblock($address,'194.14.87.0/24','Portlane Networks AB. (ASN-PTL-104). ');
$ax += cidrblock($address,'194.14.206.0/24','Portlane Networks AB. (ASN-PTL-105). ');
$ax += cidrblock($address,'194.14.222.0/23','Portlane Networks AB. (ASN-PTL-106). ');
$ax += cidrblock($address,'194.68.96.0/24','Portlane Networks AB. (ASN-PTL-107). ');
$ax += cidrblock($address,'194.68.112.0/23','Portlane Networks AB. (ASN-PTL-108). ');
$ax += cidrblock($address,'194.103.9.0/24','Portlane Networks AB. (ASN-PTL-109). ');
$ax += cidrblock($address,'194.103.11.0/24','Portlane Networks AB. (ASN-PTL-110). ');
$ax += cidrblock($address,'194.103.33.0/24','Portlane Networks AB. (ASN-PTL-111). ');
$ax += cidrblock($address,'194.103.207.0/24','Portlane Networks AB. (ASN-PTL-112). ');
$ax += cidrblock($address,'194.103.211.0/24','Portlane Networks AB. (ASN-PTL-113). ');
$ax += cidrblock($address,'194.103.212.0/23','Portlane Networks AB. (ASN-PTL-114). ');
$ax += cidrblock($address,'194.132.11.0/24','Portlane Networks AB. (ASN-PTL-115). ');
$ax += cidrblock($address,'194.132.31.0/24','Portlane Networks AB. (ASN-PTL-116). ');
$ax += cidrblock($address,'194.132.112.0/24','Portlane Networks AB. (ASN-PTL-117). ');
$ax += cidrblock($address,'194.132.115.0/24','Portlane Networks AB. (ASN-PTL-118). ');
$ax += cidrblock($address,'194.132.200.0/22','Portlane Networks AB. (ASN-PTL-119). ');
$ax += cidrblock($address,'198.105.121.0/24','Portlane Networks AB. (ASN-PTL-120). ');

// WEBEXXPURTS / Deepak Servers and Colocation. Not an access provider ISP.
// OLD: AS57972 NEW: AS57858, AS60485 updated 08/12/15

$ax += cidrblock($address,'5.34.240.0/21','WEBEXXPURTS (ASN-WXX-01). ');
$ax += cidrblock($address,'5.153.232.0/22','WEBEXXPURTS (ASN-WXX-02). ');
$ax += cidrblock($address,'5.153.237.0/24','WEBEXXPURTS (ASN-WXX-03). ');
$ax += cidrblock($address,'5.153.238.0/24','WEBEXXPURTS (ASN-WXX-04). ');
$ax += cidrblock($address,'5.157.0.0/19','WEBEXXPURTS (ASN-WXX-05). ');
$ax += cidrblock($address,'5.157.32.0/21','WEBEXXPURTS (ASN-WXX-06). ');
$ax += cidrblock($address,'5.157.40.0/22','WEBEXXPURTS (ASN-WXX-07). ');
$ax += cidrblock($address,'5.157.44.0/23','WEBEXXPURTS (ASN-WXX-08). ');
$ax += cidrblock($address,'5.157.46.0/24','WEBEXXPURTS (ASN-WXX-09). ');
$ax += cidrblock($address,'5.157.48.0/22','WEBEXXPURTS (ASN-WXX-10). ');
$ax += cidrblock($address,'5.157.53.0/24','WEBEXXPURTS (ASN-WXX-11). ');
$ax += cidrblock($address,'5.157.54.0/23','WEBEXXPURTS (ASN-WXX-12). ');
$ax += cidrblock($address,'37.72.184.0/21','WEBEXXPURTS (ASN-WXX-13). ');
$ax += cidrblock($address,'37.203.208.0/21','WEBEXXPURTS (ASN-WXX-14). ');
$ax += cidrblock($address,'46.29.248.0/21','WEBEXXPURTS (ASN-WXX-15). ');
$ax += cidrblock($address,'91.108.176.0/21','WEBEXXPURTS (ASN-WXX-16). ');
$ax += cidrblock($address,'130.185.152.0/21','WEBEXXPURTS (ASN-WXX-17). ');
$ax += cidrblock($address,'151.237.176.0/20','WEBEXXPURTS (ASN-WXX-18). ');
$ax += cidrblock($address,'165.231.0.0/22','WEBEXXPURTS (ASN-WXX-19). ');
$ax += cidrblock($address,'165.231.4.0/23','WEBEXXPURTS (ASN-WXX-20). ');
$ax += cidrblock($address,'165.231.8.0/24','WEBEXXPURTS (ASN-WXX-21). ');
$ax += cidrblock($address,'165.231.10.0/24','WEBEXXPURTS (ASN-WXX-22). ');
$ax += cidrblock($address,'165.231.14.0/24','WEBEXXPURTS (ASN-WXX-23). ');
$ax += cidrblock($address,'165.231.16.0/24','WEBEXXPURTS (ASN-WXX-24). ');
$ax += cidrblock($address,'165.231.18.0/24','WEBEXXPURTS (ASN-WXX-25). ');
$ax += cidrblock($address,'165.231.20.0/24','WEBEXXPURTS (ASN-WXX-26). ');
$ax += cidrblock($address,'165.231.22.0/24','WEBEXXPURTS (ASN-WXX-27). ');
$ax += cidrblock($address,'165.231.27.0/24','WEBEXXPURTS (ASN-WXX-28). ');
$ax += cidrblock($address,'176.61.136.0/21','WEBEXXPURTS (ASN-WXX-29). ');
$ax += cidrblock($address,'178.216.48.0/21','WEBEXXPURTS (ASN-WXX-30). ');
$ax += cidrblock($address,'185.3.132.0/22','WEBEXXPURTS (ASN-WXX-31). ');
$ax += cidrblock($address,'196.196.0.0/24','WEBEXXPURTS (ASN-WXX-32). ');
$ax += cidrblock($address,'196.196.2.0/23','WEBEXXPURTS (ASN-WXX-33). ');
$ax += cidrblock($address,'196.196.4.0/24','WEBEXXPURTS (ASN-WXX-34). ');
$ax += cidrblock($address,'196.196.16.0/24','WEBEXXPURTS (ASN-WXX-35). ');
$ax += cidrblock($address,'196.196.18.0/24','WEBEXXPURTS (ASN-WXX-36). ');
$ax += cidrblock($address,'196.196.20.0/24','WEBEXXPURTS (ASN-WXX-37). ');
$ax += cidrblock($address,'196.196.22.0/24','WEBEXXPURTS (ASN-WXX-38). ');
$ax += cidrblock($address,'196.196.24.0/24','WEBEXXPURTS (ASN-WXX-39). ');
$ax += cidrblock($address,'196.196.28.0/24','WEBEXXPURTS (ASN-WXX-40). ');
$ax += cidrblock($address,'196.196.32.0/24','WEBEXXPURTS (ASN-WXX-41). ');
$ax += cidrblock($address,'196.196.36.0/24','WEBEXXPURTS (ASN-WXX-42). ');

// Hurricane Electric, not an access provider ISP.
// Too many infected and hostile servers. Good folks otherwise (Free DYN-DNS service SBS enjoys)
// ( as6939 )

$ax += cidrblock($address,'23.92.24.0/22','Hurricane Electric (ASN-HE1-0). '); //76e
$ax += cidrblock($address,'23.239.0.0/21','Hurricane Electric (ASN-HE1-1). '); //76e
$ax += cidrblock($address,'27.50.32.0/21','Hurricane Electric (ASN-HE1-2). '); //76e
$ax += cidrblock($address,'37.16.72.0/21','Hurricane Electric (ASN-HE1-3). '); //76e
$ax += cidrblock($address,'50.116.0.0/20','Hurricane Electric (ASN-HE1-4). '); //76e
$ax += cidrblock($address,'64.62.128.0/17','Hurricane Electric (ASN-HE1-5). '); //76e
$ax += cidrblock($address,'64.71.128.0/18','Hurricane Electric (ASN-HE1-6). '); //76e
$ax += cidrblock($address,'64.72.161.0/24','Hurricane Electric (ASN-HE1-7). '); //76e
$ax += cidrblock($address,'64.89.16.0/20','Hurricane Electric (ASN-HE1-8). '); //76e
$ax += cidrblock($address,'64.92.96.0/20','Hurricane Electric (ASN-HE1-9). '); //76e
$ax += cidrblock($address,'65.19.128.0/18','Hurricane Electric (ASN-HE1-10). '); //76e
$ax += cidrblock($address,'65.49.0.0/17','Hurricane Electric (ASN-HE1-11). '); //76e
if ((cidrblock($address,'65.49.67.0/24','')) && ($ax == 1) && (inmatch($whyblockout,'(ASN-HE1-11)',''))){$ax = 0; $whyblockout .= 'Access provider block bypass (BYP-ASN-HE1-11-01)';}//77f
$ax += cidrblock($address,'66.117.6.0/24','Hurricane Electric (ASN-HE1-12). '); //76e
$ax += cidrblock($address,'66.160.128.0/18','Hurricane Electric (ASN-HE1-13). '); //76e
$ax += cidrblock($address,'66.160.192.0/20','Hurricane Electric (ASN-HE1-14). '); //76e
$ax += cidrblock($address,'66.175.216.0/21','Hurricane Electric (ASN-HE1-15). '); //76e
$ax += cidrblock($address,'66.178.176.0/20','Hurricane Electric (ASN-HE1-16). '); //76e
$ax += cidrblock($address,'66.220.0.0/19','Hurricane Electric (ASN-HE1-17). '); //76e
$ax += cidrblock($address,'67.43.55.0/24','Hurricane Electric (ASN-HE1-18). '); //76e
$ax += cidrblock($address,'70.35.16.0/21','Hurricane Electric (ASN-HE1-19). '); //76e
$ax += cidrblock($address,'72.52.64.0/18','Hurricane Electric (ASN-HE1-20). '); //76e
$ax += cidrblock($address,'74.82.0.0/18','Hurricane Electric (ASN-HE1-21). '); //76e
$ax += cidrblock($address,'74.121.104.0/22','Hurricane Electric (ASN-HE1-22). '); //76e
$ax += cidrblock($address,'74.124.199.0/24','Hurricane Electric (ASN-HE1-23). '); //76e
$ax += cidrblock($address,'74.207.240.0/20','Hurricane Electric (ASN-HE1-24). '); //76e
$ax += cidrblock($address,'96.126.96.0/21','Hurricane Electric (ASN-HE1-25). '); //76e
$ax += cidrblock($address,'103.22.244.0/22','Hurricane Electric (ASN-HE1-26). '); //76e
$ax += cidrblock($address,'107.178.32.0/21','Hurricane Electric (ASN-HE1-27). '); //76e
$ax += cidrblock($address,'107.178.40.0/22','Hurricane Electric (ASN-HE1-28). '); //76e
$ax += cidrblock($address,'135.0.160.0/19','Hurricane Electric (ASN-HE1-29). '); //76e
$ax += cidrblock($address,'135.0.224.0/19','Hurricane Electric (ASN-HE1-30). '); //76e
$ax += cidrblock($address,'148.51.0.0/16','Hurricane Electric (ASN-HE1-31). '); //76e
$ax += cidrblock($address,'162.208.128.0/17','Hurricane Electric (ASN-HE1-32). '); //76e
$ax += cidrblock($address,'162.213.0.0/22','Hurricane Electric (ASN-HE1-33). '); //76e
$ax += cidrblock($address,'162.218.24.0/22','Hurricane Electric (ASN-HE1-34). '); //76e
$ax += cidrblock($address,'173.46.80.0/20','Hurricane Electric (ASN-HE1-35). '); //76e
$ax += cidrblock($address,'173.230.144.0/20','Hurricane Electric (ASN-HE1-36). '); //76e
$ax += cidrblock($address,'173.255.208.0/20','Hurricane Electric (ASN-HE1-37). '); //76e
$ax += cidrblock($address,'173.255.240.0/20','Hurricane Electric (ASN-HE1-38). '); //76e
$ax += cidrblock($address,'184.75.240.0/21','Hurricane Electric (ASN-HE1-39). '); //76e
$ax += cidrblock($address,'184.104.0.0/15','Hurricane Electric (ASN-HE1-40). '); //76e
$ax += cidrblock($address,'192.52.69.0/24','Hurricane Electric (ASN-HE1-41). '); //76e
$ax += cidrblock($address,'192.69.236.0/22','Hurricane Electric (ASN-HE1-42). '); //76e
$ax += cidrblock($address,'192.81.128.0/21','Hurricane Electric (ASN-HE1-43). '); //76e
$ax += cidrblock($address,'192.81.248.0/22','Hurricane Electric (ASN-HE1-44). '); //76e
$ax += cidrblock($address,'192.88.99.0/24','Hurricane Electric (ASN-HE1-45). '); //76e
$ax += cidrblock($address,'192.126.120.0/22','Hurricane Electric (ASN-HE1-46). '); //76e
$ax += cidrblock($address,'192.132.94.0/24','Hurricane Electric (ASN-HE1-47). '); //76e
$ax += cidrblock($address,'192.136.112.0/24','Hurricane Electric (ASN-HE1-48). '); //76e
$ax += cidrblock($address,'192.155.80.0/21','Hurricane Electric (ASN-HE1-49). '); //76e
$ax += cidrblock($address,'192.156.200.0/24','Hurricane Electric (ASN-HE1-50). '); //76e
$ax += cidrblock($address,'192.171.110.0/24','Hurricane Electric (ASN-HE1-51). '); //76e
$ax += cidrblock($address,'193.142.62.0/24','Hurricane Electric (ASN-HE1-52). '); //76e
$ax += cidrblock($address,'198.44.248.0/22','Hurricane Electric (ASN-HE1-53). '); //76e
$ax += cidrblock($address,'198.74.48.0/22','Hurricane Electric (ASN-HE1-54). '); //76e
$ax += cidrblock($address,'198.102.73.0/24','Hurricane Electric (ASN-HE1-55). '); //76e
$ax += cidrblock($address,'199.4.150.0/24','Hurricane Electric (ASN-HE1-56). '); //76e
$ax += cidrblock($address,'199.26.178.0/24','Hurricane Electric (ASN-HE1-57). '); //76e
$ax += cidrblock($address,'199.36.72.0/21','Hurricane Electric (ASN-HE1-58). '); //76e
$ax += cidrblock($address,'199.79.202.0/24','Hurricane Electric (ASN-HE1-59). '); //76e
$ax += cidrblock($address,'199.88.158.0/24','Hurricane Electric (ASN-HE1-60). '); //76e
$ax += cidrblock($address,'199.114.240.0/21','Hurricane Electric (ASN-HE1-61). '); //76e
$ax += cidrblock($address,'199.115.178.0/24','Hurricane Electric (ASN-HE1-62). '); //76e
$ax += cidrblock($address,'199.192.152.0/21','Hurricane Electric (ASN-HE1-63). '); //76e
$ax += cidrblock($address,'199.193.64.0/21','Hurricane Electric (ASN-HE1-64). '); //76e
$ax += cidrblock($address,'199.233.90.0/24','Hurricane Electric (ASN-HE1-65). '); //76e
$ax += cidrblock($address,'199.233.198.0/23','Hurricane Electric (ASN-HE1-66). '); //76e
$ax += cidrblock($address,'199.245.105.0/24','Hurricane Electric (ASN-HE1-67). '); //76e
$ax += cidrblock($address,'202.9.83.0/24','Hurricane Electric (ASN-HE1-68). '); //76e
$ax += cidrblock($address,'203.23.194.0/24','Hurricane Electric (ASN-HE1-69). '); //76e
$ax += cidrblock($address,'203.99.142.0/24','Hurricane Electric (ASN-HE1-70). '); //76e
$ax += cidrblock($address,'203.142.14.0/23','Hurricane Electric (ASN-HE1-71). '); //76e
$ax += cidrblock($address,'203.142.26.0/24','Hurricane Electric (ASN-HE1-72). '); //76e
$ax += cidrblock($address,'204.13.228.0/22','Hurricane Electric (ASN-HE1-73). '); //76e
$ax += cidrblock($address,'204.187.91.0/24','Hurricane Electric (ASN-HE1-74). '); //76e
$ax += cidrblock($address,'204.238.49.0/24','Hurricane Electric (ASN-HE1-75). '); //76e
$ax += cidrblock($address,'205.159.239.0/24','Hurricane Electric (ASN-HE1-76). '); //76e
$ax += cidrblock($address,'205.166.121.0/24','Hurricane Electric (ASN-HE1-77). '); //76e
$ax += cidrblock($address,'206.108.49.0/24','Hurricane Electric (ASN-HE1-78). '); //76e
$ax += cidrblock($address,'206.108.51.0/24','Hurricane Electric (ASN-HE1-79). '); //76e
$ax += cidrblock($address,'206.108.55.0/24','Hurricane Electric (ASN-HE1-80). '); //76e
$ax += cidrblock($address,'206.144.144.0/20','Hurricane Electric (ASN-HE1-81). '); //76e
$ax += cidrblock($address,'207.45.69.0/24','Hurricane Electric (ASN-HE1-82). '); //76e
$ax += cidrblock($address,'207.89.0.0/17','Hurricane Electric (ASN-HE1-83). '); //76e
$ax += cidrblock($address,'208.12.64.0/19','Hurricane Electric (ASN-HE1-84). '); //76e
$ax += cidrblock($address,'208.75.96.0/21','Hurricane Electric (ASN-HE1-85). '); //76e
$ax += cidrblock($address,'208.78.35.0/24','Hurricane Electric (ASN-HE1-86). '); //76e
$ax += cidrblock($address,'208.142.248.0/21','Hurricane Electric (ASN-HE1-87). '); //76e
$ax += cidrblock($address,'209.51.160.0/19','Hurricane Electric (ASN-HE1-88). '); //76e
$ax += cidrblock($address,'209.150.160.0/19','Hurricane Electric (ASN-HE1-89). '); //76e
$ax += cidrblock($address,'216.66.0.0/18','Hurricane Electric (ASN-HE1-90). '); //76e
//$ax += cidrblock($address,'216.66.64.0/19','Hurricane Electric (ASN-HE1-91). '); //76e mothballed 77b Possible access provider.
$ax += cidrblock($address,'216.75.229.0/24','Hurricane Electric (ASN-HE1-92). '); //76e
$ax += cidrblock($address,'216.75.236.0/23','Hurricane Electric (ASN-HE1-93). '); //76e
$ax += cidrblock($address,'216.151.156.0/23','Hurricane Electric (ASN-HE1-94). '); //76e
$ax += cidrblock($address,'216.171.124.0/24','Hurricane Electric (ASN-HE1-95). '); //76e
$ax += cidrblock($address,'216.171.201.0/24','Hurricane Electric (ASN-HE1-96). '); //76e
$ax += cidrblock($address,'216.171.202.0/24','Hurricane Electric (ASN-HE1-97). '); //76e
$ax += cidrblock($address,'216.171.204.0/23','Hurricane Electric (ASN-HE1-98). '); //76e
$ax += cidrblock($address,'216.171.206.0/24','Hurricane Electric (ASN-HE1-99). '); //76e
$ax += cidrblock($address,'216.171.208.0/24','Hurricane Electric (ASN-HE1-100). '); //76e
$ax += cidrblock($address,'216.171.218.0/24','Hurricane Electric (ASN-HE1-101). '); //76e
$ax += cidrblock($address,'216.171.220.0/23','Hurricane Electric (ASN-HE1-102). '); //76e
$ax += cidrblock($address,'216.218.128.0/17','Hurricane Electric (ASN-HE1-103). '); //76e
$ax += cidrblock($address,'216.224.64.0/19','Hurricane Electric (ASN-HE1-104). '); //76e
$ax += cidrblock($address,'216.229.96.0/20','Hurricane Electric (ASN-HE1-105). '); //76e

//Bypasses for (ASN-HEx) (mod 74d 77g)

if (((inmatch($whyblockout,'(ASN-HE1-)','')) || (inmatch($whyblockout,'(ASN-HE1-11)',''))) && ($ax > 0)){
	$zbamz = 0;
	$zbamz += rmatch($lcuseragent,'.getpebble.com','Nice enough to ask bypass. '); //74e
    $zbamz += inmatch($useragent,'Feedspot http://www.feedspot.com',' Feedspot bypass. ' ); //74c
	$zbamz += inmatch($useragent,'Feedly',' Feedly bypass. ' ); //74c
	if ($zbamz > 0){$ax -= 1;}
}

// Virpus Networks, not an access provider ISP.
// AS32875

$ax += cidrblock($address,'50.115.160.0/20','Virpus Networks (ASN-VP-0). '); //73b updated 77a
$ax += cidrblock($address,'173.0.48.0/20','Virpus Networks (ASN-VP-1). '); //73b updated 77a
$ax += cidrblock($address,'198.167.136.0/21','Virpus Networks (ASN-VP-2). '); //73b updated 77a
$ax += cidrblock($address,'198.175.124.0/22','Virpus Networks (ASN-VP-3). '); //73b updated 77a
$ax += cidrblock($address,'199.119.224.0/22','Virpus Networks (ASN-VP-4). '); //73b updated 77a
$ax += cidrblock($address,'199.180.128.0/21','Virpus Networks (ASN-VP-5). '); //73b updated 77a
$ax += cidrblock($address,'208.89.208.0/21','Virpus Networks (ASN-VP-6). '); //73b updated 77a

// Eonix, not an access provider ISP.
// Many improper ASN records. Known attack vector.
// AS30693 updated 08/19/15

$ax += cidrblock($address,'23.90.0.0/18','EONIX Network (ASN-EONIX-01). ');
$ax += cidrblock($address,'23.231.0.0/17','EONIX Network (ASN-EONIX-02). ');
$ax += cidrblock($address,'23.252.16.0/20','EONIX Network (ASN-EONIX-03). ');
$ax += cidrblock($address,'50.2.0.0/15','EONIX Network (ASN-EONIX-04). ');
$ax += cidrblock($address,'75.75.224.0/19','EONIX Network (ASN-EONIX-05). ');
$ax += cidrblock($address,'104.140.0.0/16','EONIX Network (ASN-EONIX-06). ');
$ax += cidrblock($address,'104.206.0.0/16','EONIX Network (ASN-EONIX-07). ');
$ax += cidrblock($address,'107.158.0.0/16','EONIX Network (ASN-EONIX-08). ');
$ax += cidrblock($address,'170.130.0.0/16','EONIX Network (ASN-EONIX-09). ');
$ax += cidrblock($address,'173.44.128.0/17','EONIX Network (ASN-EONIX-10). ');
$ax += cidrblock($address,'173.213.64.0/18','EONIX Network (ASN-EONIX-11). ');
$ax += cidrblock($address,'173.232.0.0/16','EONIX Network (ASN-EONIX-12). ');
$ax += cidrblock($address,'192.157.60.0/22','EONIX Network (ASN-EONIX-13). ');
$ax += cidrblock($address,'192.230.144.0/20','EONIX Network (ASN-EONIX-14). ');
$ax += cidrblock($address,'204.14.0.0/21','EONIX Network (ASN-EONIX-15). ');
$ax += cidrblock($address,'206.72.88.0/22','EONIX Network (ASN-EONIX-16). ');
$ax += cidrblock($address,'206.214.64.0/19','EONIX Network (ASN-EONIX-17). ');
$ax += cidrblock($address,'208.89.216.0/21','EONIX Network (ASN-EONIX-18). ');
$ax += cidrblock($address,'208.93.144.0/21','EONIX Network (ASN-EONIX-19). ');

// Pegasus Web Technology / Fortress ITX
// Not an access provider.
// AS25653, AS54600

$ax += cidrblock($address,'50.60.0.0/15','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-01). '); //77 updated
$ax += cidrblock($address,'63.140.0.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-02). '); //77 updated
$ax += cidrblock($address,'65.98.0.0/17','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-03). '); //77 updated
$ax += cidrblock($address,'65.181.64.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-04). '); //77 updated
$ax += cidrblock($address,'66.187.96.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-05). '); //77 updated
$ax += cidrblock($address,'67.219.16.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-06). '); //77 updated
$ax += cidrblock($address,'67.227.23.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-07). '); //77 updated
$ax += cidrblock($address,'69.57.160.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-08). '); //77 updated
$ax += cidrblock($address,'69.72.128.0/17','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-09). '); //77 updated
$ax += cidrblock($address,'69.168.232.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-10). '); //77 updated
$ax += cidrblock($address,'69.194.169.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-11). '); //77 updated
$ax += cidrblock($address,'69.194.170.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-12). '); //77 updated
$ax += cidrblock($address,'69.194.192.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-13). '); //77 updated
$ax += cidrblock($address,'69.194.195.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-14). '); //77 updated
$ax += cidrblock($address,'69.194.196.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-15). '); //77 updated
$ax += cidrblock($address,'69.194.198.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-16). '); //77 updated
$ax += cidrblock($address,'69.194.200.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-17). '); //77 updated
$ax += cidrblock($address,'69.194.202.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-18). '); //77 updated
$ax += cidrblock($address,'69.194.204.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-19). '); //77 updated
$ax += cidrblock($address,'74.114.116.0/22','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-20). '); //77 updated
$ax += cidrblock($address,'100.42.51.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-21). '); //77 updated
$ax += cidrblock($address,'100.42.52.0/22','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-22). '); //77 updated
$ax += cidrblock($address,'100.42.56.0/22','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-23). '); //77 updated
$ax += cidrblock($address,'100.42.60.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-24). '); //77 updated
$ax += cidrblock($address,'100.42.62.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-25). '); //77 updated
$ax += cidrblock($address,'104.233.128.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-26). '); //77 updated
$ax += cidrblock($address,'107.148.0.0/15','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-27). '); //77 updated
$ax += cidrblock($address,'108.186.0.0/16','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-28). '); //77 updated
$ax += cidrblock($address,'109.169.62.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-29). '); //77 updated
$ax += cidrblock($address,'109.169.72.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-30). '); //77 updated
$ax += cidrblock($address,'109.169.80.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-31). '); //77 updated
$ax += cidrblock($address,'137.175.0.0/17','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-32). '); //77 updated
$ax += cidrblock($address,'142.0.128.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-33). '); //77 updated
$ax += cidrblock($address,'142.4.96.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-34). '); //77 updated
$ax += cidrblock($address,'174.140.196.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-35). '); //77 updated
$ax += cidrblock($address,'186.96.2.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-36). '); //77 updated
$ax += cidrblock($address,'186.96.4.0/22','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-37). '); //77 updated
$ax += cidrblock($address,'186.96.8.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-38). '); //77 updated
$ax += cidrblock($address,'186.96.16.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-39). '); //77 updated
$ax += cidrblock($address,'186.96.32.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-40). '); //77 updated
$ax += cidrblock($address,'190.12.208.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-41). '); //77 updated
$ax += cidrblock($address,'190.92.136.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-42). '); //77 updated
$ax += cidrblock($address,'190.92.144.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-43). '); //77 updated
$ax += cidrblock($address,'190.92.160.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-44). '); //77 updated
$ax += cidrblock($address,'190.92.180.0/22','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-45). '); //77 updated
$ax += cidrblock($address,'190.92.184.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-46). '); //77 updated
$ax += cidrblock($address,'190.92.192.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-47). '); //77 updated
$ax += cidrblock($address,'190.92.208.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-48). '); //77 updated
$ax += cidrblock($address,'192.55.203.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-49). '); //77 updated
$ax += cidrblock($address,'192.74.224.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-50). '); //77 updated
$ax += cidrblock($address,'198.2.192.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-51). '); //77 updated
$ax += cidrblock($address,'198.47.96.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-52). '); //77 updated
$ax += cidrblock($address,'198.200.32.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-53). '); //77 updated
$ax += cidrblock($address,'199.180.100.0/22','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-54). '); //77 updated
$ax += cidrblock($address,'199.188.104.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-55). '); //77 updated
$ax += cidrblock($address,'206.209.48.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-56). '); //77 updated
$ax += cidrblock($address,'208.116.0.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-57). '); //77 updated
$ax += cidrblock($address,'209.21.64.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-58). '); //77 updated
$ax += cidrblock($address,'209.21.66.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-59). '); //77 updated
$ax += cidrblock($address,'209.21.68.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-60). '); //77 updated
$ax += cidrblock($address,'209.21.72.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-61). '); //77 updated
$ax += cidrblock($address,'209.140.128.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-62). '); //77 updated
$ax += cidrblock($address,'212.38.160.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-63). '); //77 updated
$ax += cidrblock($address,'216.67.224.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-64). '); //77 updated
$ax += cidrblock($address,'216.74.96.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider  (ASN-PWEBFITX-65). '); //77 updated

// Steadfast DNS
// Not an access provider.
// AS32748

$ax += cidrblock($address,'23.29.128.0/19','Steadfast DNS (ASN-SFDNS-001). ');
$ax += cidrblock($address,'23.227.192.0/20','Steadfast DNS (ASN-SFDNS-002). ');
$ax += cidrblock($address,'31.214.240.0/21','Steadfast DNS (ASN-SFDNS-003). ');
$ax += cidrblock($address,'37.1.208.0/21','Steadfast DNS (ASN-SFDNS-004). ');
$ax += cidrblock($address,'37.72.168.0/23','Steadfast DNS (ASN-SFDNS-005). ');
$ax += cidrblock($address,'38.106.155.0/24','Steadfast DNS (ASN-SFDNS-006). ');
$ax += cidrblock($address,'38.126.24.0/21','Steadfast DNS (ASN-SFDNS-007). ');
$ax += cidrblock($address,'46.21.154.0/23','Steadfast DNS (ASN-SFDNS-008). ');
$ax += cidrblock($address,'50.31.0.0/17','Steadfast DNS (ASN-SFDNS-009). ');
$ax += cidrblock($address,'64.17.32.0/20','Steadfast DNS (ASN-SFDNS-010). ');
$ax += cidrblock($address,'64.88.128.0/19','Steadfast DNS (ASN-SFDNS-011). ');
$ax += cidrblock($address,'66.103.16.0/20','Steadfast DNS (ASN-SFDNS-012). ');
$ax += cidrblock($address,'66.111.192.0/18','Steadfast DNS (ASN-SFDNS-013). ');
$ax += cidrblock($address,'67.20.50.0/23','Steadfast DNS (ASN-SFDNS-014). ');
$ax += cidrblock($address,'67.20.52.0/23','Steadfast DNS (ASN-SFDNS-015). ');
$ax += cidrblock($address,'67.20.57.0/24','Steadfast DNS (ASN-SFDNS-016). ');
$ax += cidrblock($address,'67.20.58.0/24','Steadfast DNS (ASN-SFDNS-017). ');
$ax += cidrblock($address,'67.20.61.0/24','Steadfast DNS (ASN-SFDNS-018). ');
$ax += cidrblock($address,'67.20.62.0/24','Steadfast DNS (ASN-SFDNS-019). ');
$ax += cidrblock($address,'67.202.64.0/18','Steadfast DNS (ASN-SFDNS-020). ');
$ax += cidrblock($address,'69.162.128.0/18','Steadfast DNS (ASN-SFDNS-021). ');
$ax += cidrblock($address,'69.168.224.0/21','Steadfast DNS (ASN-SFDNS-022). ');
$ax += cidrblock($address,'69.168.232.0/24','Steadfast DNS (ASN-SFDNS-023). ');
$ax += cidrblock($address,'72.44.88.0/22','Steadfast DNS (ASN-SFDNS-024). ');
$ax += cidrblock($address,'72.44.93.0/24','Steadfast DNS (ASN-SFDNS-025). ');
$ax += cidrblock($address,'72.44.94.0/23','Steadfast DNS (ASN-SFDNS-026). ');
$ax += cidrblock($address,'74.120.120.0/22','Steadfast DNS (ASN-SFDNS-027). ');
$ax += cidrblock($address,'89.46.32.0/21','Steadfast DNS (ASN-SFDNS-028). ');
$ax += cidrblock($address,'96.43.95.0/24','Steadfast DNS (ASN-SFDNS-029). ');
$ax += cidrblock($address,'104.128.48.0/20','Steadfast DNS (ASN-SFDNS-030). ');
$ax += cidrblock($address,'104.171.128.0/21','Steadfast DNS (ASN-SFDNS-031). ');
$ax += cidrblock($address,'104.250.166.0/24','Steadfast DNS (ASN-SFDNS-032). ');
$ax += cidrblock($address,'107.152.100.0/24','Steadfast DNS (ASN-SFDNS-033). ');
$ax += cidrblock($address,'107.191.176.0/20','Steadfast DNS (ASN-SFDNS-034). ');
$ax += cidrblock($address,'108.160.192.0/20','Steadfast DNS (ASN-SFDNS-035). ');
$ax += cidrblock($address,'114.31.209.0/24','Steadfast DNS (ASN-SFDNS-036). ');
$ax += cidrblock($address,'142.215.24.0/21','Steadfast DNS (ASN-SFDNS-037). ');
$ax += cidrblock($address,'149.54.112.0/21','Steadfast DNS (ASN-SFDNS-038). ');
$ax += cidrblock($address,'149.54.128.0/21','Steadfast DNS (ASN-SFDNS-039). ');
$ax += cidrblock($address,'149.54.144.0/21','Steadfast DNS (ASN-SFDNS-040). ');
$ax += cidrblock($address,'149.154.158.0/24','Steadfast DNS (ASN-SFDNS-041). ');
$ax += cidrblock($address,'149.255.32.0/22','Steadfast DNS (ASN-SFDNS-042). ');
$ax += cidrblock($address,'151.236.22.0/24','Steadfast DNS (ASN-SFDNS-043). ');
$ax += cidrblock($address,'158.255.213.0/24','Steadfast DNS (ASN-SFDNS-044). ');
$ax += cidrblock($address,'159.35.168.0/21','Steadfast DNS (ASN-SFDNS-045). ');
$ax += cidrblock($address,'159.35.184.0/21','Steadfast DNS (ASN-SFDNS-046). ');
$ax += cidrblock($address,'159.35.208.0/21','Steadfast DNS (ASN-SFDNS-047). ');
$ax += cidrblock($address,'159.35.218.0/23','Steadfast DNS (ASN-SFDNS-048). ');
$ax += cidrblock($address,'159.35.220.0/22','Steadfast DNS (ASN-SFDNS-049). ');
$ax += cidrblock($address,'159.35.232.0/22','Steadfast DNS (ASN-SFDNS-050). ');
$ax += cidrblock($address,'161.47.64.0/18','Steadfast DNS (ASN-SFDNS-051). ');
$ax += cidrblock($address,'162.208.54.0/23','Steadfast DNS (ASN-SFDNS-052). ');
$ax += cidrblock($address,'162.210.96.0/21','Steadfast DNS (ASN-SFDNS-053). ');
$ax += cidrblock($address,'162.211.66.0/24','Steadfast DNS (ASN-SFDNS-054). ');
$ax += cidrblock($address,'162.221.192.0/22','Steadfast DNS (ASN-SFDNS-055). ');
$ax += cidrblock($address,'162.249.125.0/24','Steadfast DNS (ASN-SFDNS-056). ');
$ax += cidrblock($address,'162.249.126.0/23','Steadfast DNS (ASN-SFDNS-057). ');
$ax += cidrblock($address,'162.251.143.0/24','Steadfast DNS (ASN-SFDNS-058). ');
$ax += cidrblock($address,'162.252.172.0/22','Steadfast DNS (ASN-SFDNS-059). ');
$ax += cidrblock($address,'162.255.208.0/22','Steadfast DNS (ASN-SFDNS-060). ');
$ax += cidrblock($address,'162.255.212.0/24','Steadfast DNS (ASN-SFDNS-061). ');
$ax += cidrblock($address,'167.89.0.0/20','Steadfast DNS (ASN-SFDNS-062). ');
$ax += cidrblock($address,'173.249.144.0/23','Steadfast DNS (ASN-SFDNS-063). ');
$ax += cidrblock($address,'173.249.149.0/24','Steadfast DNS (ASN-SFDNS-064). ');
$ax += cidrblock($address,'173.249.150.0/23','Steadfast DNS (ASN-SFDNS-065). ');
$ax += cidrblock($address,'173.249.152.0/24','Steadfast DNS (ASN-SFDNS-066). ');
$ax += cidrblock($address,'173.249.157.0/24','Steadfast DNS (ASN-SFDNS-067). ');
$ax += cidrblock($address,'173.249.158.0/23','Steadfast DNS (ASN-SFDNS-068). ');
$ax += cidrblock($address,'181.189.64.0/18','Steadfast DNS (ASN-SFDNS-069). ');
$ax += cidrblock($address,'184.170.250.0/24','Steadfast DNS (ASN-SFDNS-070). ');
$ax += cidrblock($address,'192.111.132.0/23','Steadfast DNS (ASN-SFDNS-071). ');
$ax += cidrblock($address,'198.21.0.0/21','Steadfast DNS (ASN-SFDNS-072). ');
$ax += cidrblock($address,'198.23.48.0/20','Steadfast DNS (ASN-SFDNS-073). ');
$ax += cidrblock($address,'198.54.104.0/21','Steadfast DNS (ASN-SFDNS-074). ');
$ax += cidrblock($address,'198.71.80.0/21','Steadfast DNS (ASN-SFDNS-075). ');
$ax += cidrblock($address,'198.180.140.0/24','Steadfast DNS (ASN-SFDNS-076). ');
$ax += cidrblock($address,'199.5.156.0/23','Steadfast DNS (ASN-SFDNS-077). ');
$ax += cidrblock($address,'199.38.182.0/24','Steadfast DNS (ASN-SFDNS-078). ');
$ax += cidrblock($address,'199.48.252.0/22','Steadfast DNS (ASN-SFDNS-079). ');
$ax += cidrblock($address,'199.66.108.0/22','Steadfast DNS (ASN-SFDNS-080). ');
$ax += cidrblock($address,'199.188.72.0/23','Steadfast DNS (ASN-SFDNS-081). ');
$ax += cidrblock($address,'199.193.252.0/23','Steadfast DNS (ASN-SFDNS-082). ');
$ax += cidrblock($address,'199.231.208.0/22','Steadfast DNS (ASN-SFDNS-083). ');
$ax += cidrblock($address,'204.8.16.0/22','Steadfast DNS (ASN-SFDNS-084). ');
$ax += cidrblock($address,'204.10.51.0/24','Steadfast DNS (ASN-SFDNS-085). ');
$ax += cidrblock($address,'204.10.52.0/22','Steadfast DNS (ASN-SFDNS-086). ');
$ax += cidrblock($address,'204.10.168.0/21','Steadfast DNS (ASN-SFDNS-087). ');
$ax += cidrblock($address,'204.138.71.0/24','Steadfast DNS (ASN-SFDNS-088). ');
$ax += cidrblock($address,'204.238.229.0/24','Steadfast DNS (ASN-SFDNS-089). ');
$ax += cidrblock($address,'206.55.104.0/21','Steadfast DNS (ASN-SFDNS-090). ');
$ax += cidrblock($address,'207.66.92.0/24','Steadfast DNS (ASN-SFDNS-091). ');
$ax += cidrblock($address,'207.66.109.0/24','Steadfast DNS (ASN-SFDNS-092). ');
$ax += cidrblock($address,'207.188.138.0/24','Steadfast DNS (ASN-SFDNS-093). ');
$ax += cidrblock($address,'207.188.167.0/24','Steadfast DNS (ASN-SFDNS-094). ');
$ax += cidrblock($address,'208.66.168.0/21','Steadfast DNS (ASN-SFDNS-095). ');
$ax += cidrblock($address,'208.92.68.0/22','Steadfast DNS (ASN-SFDNS-096). ');
$ax += cidrblock($address,'208.100.0.0/18','Steadfast DNS (ASN-SFDNS-097). ');
$ax += cidrblock($address,'208.117.0.0/18','Steadfast DNS (ASN-SFDNS-098). ');
$ax += cidrblock($address,'209.152.160.0/19','Steadfast DNS (ASN-SFDNS-099). ');
$ax += cidrblock($address,'209.177.145.0/24','Steadfast DNS (ASN-SFDNS-100). ');
$ax += cidrblock($address,'209.177.158.0/24','Steadfast DNS (ASN-SFDNS-101). ');
$ax += cidrblock($address,'216.86.144.0/20','Steadfast DNS (ASN-SFDNS-102). ');

// CyberBunker
// Not an access provider, and willingly participates in hosting web attacks.
// AS34109 and AS51088

$ax += cidrblock($address,'5.44.72.0/21','CyberBunker ASN (ASN-CYBERBUNKER-0). '); //73f
$ax += cidrblock($address,'31.134.200.0/21','CyberBunker ASN (ASN-CYBERBUNKER-1). '); //73f
$ax += cidrblock($address,'37.148.192.0/21','CyberBunker ASN (ASN-CYBERBUNKER-2). '); //73f
$ax += cidrblock($address,'46.174.134.0/23','CyberBunker ASN (ASN-CYBERBUNKER-3). '); //73f
$ax += cidrblock($address,'46.244.0.0/17','CyberBunker ASN (ASN-CYBERBUNKER-4). '); //73f
$ax += cidrblock($address,'81.30.64.0/20','CyberBunker ASN (ASN-CYBERBUNKER-5). '); //73f
$ax += cidrblock($address,'84.22.96.0/19','CyberBunker ASN (ASN-CYBERBUNKER-6). '); //73f
$ax += cidrblock($address,'84.243.192.0/18','CyberBunker ASN (ASN-CYBERBUNKER-7). '); //73f
$ax += cidrblock($address,'91.194.6.0/23','CyberBunker ASN (ASN-CYBERBUNKER-8). '); //73f
$ax += cidrblock($address,'91.209.12.0/24','CyberBunker ASN (ASN-CYBERBUNKER-9). '); //73f
$ax += cidrblock($address,'91.213.13.0/24','CyberBunker ASN (ASN-CYBERBUNKER-10). '); //73f
$ax += cidrblock($address,'91.224.164.0/23','CyberBunker ASN (ASN-CYBERBUNKER-11). '); //73f
$ax += cidrblock($address,'91.227.114.0/24','CyberBunker ASN (ASN-CYBERBUNKER-12). '); //73f
$ax += cidrblock($address,'91.230.33.0/24','CyberBunker ASN (ASN-CYBERBUNKER-13). '); //73f
$ax += cidrblock($address,'91.230.34.0/23','CyberBunker ASN (ASN-CYBERBUNKER-14). '); //73f
$ax += cidrblock($address,'91.233.52.0/23','CyberBunker ASN (ASN-CYBERBUNKER-15). '); //73f
$ax += cidrblock($address,'91.233.224.0/23','CyberBunker ASN (ASN-CYBERBUNKER-16). '); //73f
$ax += cidrblock($address,'91.234.203.0/24','CyberBunker ASN (ASN-CYBERBUNKER-17). '); //73f
$ax += cidrblock($address,'91.235.174.0/24','CyberBunker ASN (ASN-CYBERBUNKER-18). '); //73f
$ax += cidrblock($address,'93.93.120.0/21','CyberBunker ASN (ASN-CYBERBUNKER-19). '); //73f
$ax += cidrblock($address,'176.117.56.0/21','CyberBunker ASN (ASN-CYBERBUNKER-20). '); //73f
$ax += cidrblock($address,'178.238.96.0/24','CyberBunker ASN (ASN-CYBERBUNKER-21). '); //73f
$ax += cidrblock($address,'178.249.152.0/21','CyberBunker ASN (ASN-CYBERBUNKER-22). '); //73f
$ax += cidrblock($address,'178.250.16.0/21','CyberBunker ASN (ASN-CYBERBUNKER-23). '); //73f
$ax += cidrblock($address,'192.166.96.0/22','CyberBunker ASN (ASN-CYBERBUNKER-24). '); //73f
$ax += cidrblock($address,'193.108.238.0/24','CyberBunker ASN (ASN-CYBERBUNKER-25). '); //73f
$ax += cidrblock($address,'193.169.108.0/23','CyberBunker ASN (ASN-CYBERBUNKER-26). '); //73f
$ax += cidrblock($address,'194.145.194.0/23','CyberBunker ASN (ASN-CYBERBUNKER-27). '); //73f
$ax += cidrblock($address,'195.12.60.0/22','CyberBunker ASN (ASN-CYBERBUNKER-28). '); //73f
$ax += cidrblock($address,'195.88.202.0/23','CyberBunker ASN (ASN-CYBERBUNKER-29). '); //73f
$ax += cidrblock($address,'195.95.244.0/22','CyberBunker ASN (ASN-CYBERBUNKER-30). '); //73f
$ax += cidrblock($address,'195.95.248.0/23','CyberBunker ASN (ASN-CYBERBUNKER-31). '); //73f
$ax += cidrblock($address,'205.189.71.0/24','CyberBunker ASN (ASN-CYBERBUNKER-32). '); //73f
$ax += cidrblock($address,'205.189.72.0/23','CyberBunker ASN (ASN-CYBERBUNKER-33). '); //73f
$ax += cidrblock($address,'217.67.224.0/19','CyberBunker ASN (ASN-CYBERBUNKER-34). '); //73f
$ax += cidrblock($address,'250.250.250.0/24','CyberBunker ASN (ASN-CYBERBUNKER-35). '); //73f

// PIN-AS
// Small local access provider for Leningrad, HUGE spam-slinger.
// AS44050 updated 08/28/15

$ax += cidrblock($address,'5.8.0.0/21','ASN pinspb.ru (ASN-PINAS-01). ');
$ax += cidrblock($address,'5.8.40.0/21','ASN pinspb.ru (ASN-PINAS-02). ');
$ax += cidrblock($address,'5.8.56.0/22','ASN pinspb.ru (ASN-PINAS-03). ');
$ax += cidrblock($address,'5.8.62.0/23','ASN pinspb.ru (ASN-PINAS-04). ');
$ax += cidrblock($address,'5.8.64.0/20','ASN pinspb.ru (ASN-PINAS-05). ');
$ax += cidrblock($address,'5.8.88.0/21','ASN pinspb.ru (ASN-PINAS-06). ');
$ax += cidrblock($address,'5.101.0.0/18','ASN pinspb.ru (ASN-PINAS-07). ');
$ax += cidrblock($address,'5.101.64.0/19','ASN pinspb.ru (ASN-PINAS-08). ');
$ax += cidrblock($address,'5.101.172.0/22','ASN pinspb.ru (ASN-PINAS-09). ');
$ax += cidrblock($address,'5.101.192.0/19','ASN pinspb.ru (ASN-PINAS-10). ');
$ax += cidrblock($address,'5.188.0.0/16','ASN pinspb.ru (ASN-PINAS-11). ');
$ax += cidrblock($address,'31.44.184.0/23','ASN pinspb.ru (ASN-PINAS-12). ');
$ax += cidrblock($address,'31.184.192.0/19','ASN pinspb.ru (ASN-PINAS-13). ');
$ax += cidrblock($address,'31.184.228.0/23','ASN pinspb.ru (ASN-PINAS-14). ');
$ax += cidrblock($address,'31.184.232.0/23','ASN pinspb.ru (ASN-PINAS-15). ');
$ax += cidrblock($address,'31.184.237.0/24','ASN pinspb.ru (ASN-PINAS-16). ');
$ax += cidrblock($address,'31.184.238.0/23','ASN pinspb.ru (ASN-PINAS-17). ');
$ax += cidrblock($address,'31.184.240.0/23','ASN pinspb.ru (ASN-PINAS-18). ');
$ax += cidrblock($address,'31.184.242.0/24','ASN pinspb.ru (ASN-PINAS-19). ');
$ax += cidrblock($address,'37.9.48.0/24','ASN pinspb.ru (ASN-PINAS-20). ');
$ax += cidrblock($address,'37.9.50.0/23','ASN pinspb.ru (ASN-PINAS-21). ');
$ax += cidrblock($address,'37.9.53.0/24','ASN pinspb.ru (ASN-PINAS-22). ');
$ax += cidrblock($address,'37.9.55.0/24','ASN pinspb.ru (ASN-PINAS-23). ');
$ax += cidrblock($address,'37.139.50.0/23','ASN pinspb.ru (ASN-PINAS-24). ');
$ax += cidrblock($address,'37.139.53.0/24','ASN pinspb.ru (ASN-PINAS-25). ');
$ax += cidrblock($address,'37.139.54.0/23','ASN pinspb.ru (ASN-PINAS-26). ');
$ax += cidrblock($address,'46.161.4.0/22','ASN pinspb.ru (ASN-PINAS-27). ');
$ax += cidrblock($address,'46.161.8.0/22','ASN pinspb.ru (ASN-PINAS-28). ');
$ax += cidrblock($address,'46.161.16.0/21','ASN pinspb.ru (ASN-PINAS-29). ');
$ax += cidrblock($address,'46.161.24.0/23','ASN pinspb.ru (ASN-PINAS-30). ');
$ax += cidrblock($address,'46.161.27.0/24','ASN pinspb.ru (ASN-PINAS-31). ');
$ax += cidrblock($address,'46.161.28.0/23','ASN pinspb.ru (ASN-PINAS-32). ');
$ax += cidrblock($address,'46.161.30.0/24','ASN pinspb.ru (ASN-PINAS-33). ');
$ax += cidrblock($address,'46.161.32.0/21','ASN pinspb.ru (ASN-PINAS-34). ');
$ax += cidrblock($address,'46.161.41.0/24','ASN pinspb.ru (ASN-PINAS-35). ');
$ax += cidrblock($address,'46.161.42.0/24','ASN pinspb.ru (ASN-PINAS-36). ');
$ax += cidrblock($address,'46.161.44.0/23','ASN pinspb.ru (ASN-PINAS-37). ');
$ax += cidrblock($address,'91.220.131.0/24','ASN pinspb.ru (ASN-PINAS-38). ');
$ax += cidrblock($address,'91.240.128.0/24','ASN pinspb.ru (ASN-PINAS-39). ');
$ax += cidrblock($address,'91.243.80.0/20','ASN pinspb.ru (ASN-PINAS-40). ');
$ax += cidrblock($address,'91.243.176.0/20','ASN pinspb.ru (ASN-PINAS-41). ');
$ax += cidrblock($address,'91.244.192.0/20','ASN pinspb.ru (ASN-PINAS-42). ');
$ax += cidrblock($address,'93.95.67.0/24','ASN pinspb.ru (ASN-PINAS-43). ');
$ax += cidrblock($address,'95.181.238.64/27','ASN pinspb.ru (ASN-PINAS-44). ');
$ax += cidrblock($address,'95.181.242.224/31','ASN pinspb.ru (ASN-PINAS-45). ');
$ax += cidrblock($address,'95.181.246.224/31','ASN pinspb.ru (ASN-PINAS-46). ');
$ax += cidrblock($address,'95.215.0.0/22','ASN pinspb.ru (ASN-PINAS-47). ');
$ax += cidrblock($address,'146.185.216.0/22','ASN pinspb.ru (ASN-PINAS-48). ');
$ax += cidrblock($address,'146.185.220.0/23','ASN pinspb.ru (ASN-PINAS-49). ');
$ax += cidrblock($address,'146.185.224.0/21','ASN pinspb.ru (ASN-PINAS-50). ');
$ax += cidrblock($address,'146.185.234.0/24','ASN pinspb.ru (ASN-PINAS-51). ');
$ax += cidrblock($address,'146.185.237.0/24','ASN pinspb.ru (ASN-PINAS-52). ');
$ax += cidrblock($address,'146.185.240.0/23','ASN pinspb.ru (ASN-PINAS-53). ');
$ax += cidrblock($address,'146.185.243.0/24','ASN pinspb.ru (ASN-PINAS-54). ');
$ax += cidrblock($address,'146.185.244.0/23','ASN pinspb.ru (ASN-PINAS-55). ');
$ax += cidrblock($address,'146.185.250.0/23','ASN pinspb.ru (ASN-PINAS-56). ');
$ax += cidrblock($address,'146.185.252.0/24','ASN pinspb.ru (ASN-PINAS-57). ');
$ax += cidrblock($address,'179.60.150.0/23','ASN pinspb.ru (ASN-PINAS-58). ');
$ax += cidrblock($address,'188.143.128.0/17','ASN pinspb.ru (ASN-PINAS-59). ');
$ax += cidrblock($address,'193.93.192.0/22','ASN pinspb.ru (ASN-PINAS-60). ');
$ax += cidrblock($address,'193.107.216.0/22','ASN pinspb.ru (ASN-PINAS-61). ');
$ax += cidrblock($address,'194.11.16.0/24','ASN pinspb.ru (ASN-PINAS-62). ');
$ax += cidrblock($address,'194.11.20.0/23','ASN pinspb.ru (ASN-PINAS-63). ');
$ax += cidrblock($address,'195.2.240.0/23','ASN pinspb.ru (ASN-PINAS-64). ');
$ax += cidrblock($address,'195.211.124.0/22','ASN pinspb.ru (ASN-PINAS-65). ');

//  OVH Networks
//  Not an access provider, allows rampant abuse, hosts badware/bad services.
//  AS16276 updated 08/11/15

$ax += cidrblock($address,'5.39.0.0/17','OVH Networks (ASN-OVH-01). ');
$ax += cidrblock($address,'5.135.0.0/16','OVH Networks (ASN-OVH-02). ');
$ax += cidrblock($address,'5.196.0.0/16','OVH Networks (ASN-OVH-03). ');
$ax += cidrblock($address,'8.7.244.0/24','OVH Networks (ASN-OVH-04). ');
$ax += cidrblock($address,'8.18.128.0/24','OVH Networks (ASN-OVH-05). ');
$ax += cidrblock($address,'8.18.136.0/21','OVH Networks (ASN-OVH-06). ');
$ax += cidrblock($address,'8.18.172.0/24','OVH Networks (ASN-OVH-07). ');
$ax += cidrblock($address,'8.20.110.0/24','OVH Networks (ASN-OVH-08). ');
$ax += cidrblock($address,'8.21.41.0/24','OVH Networks (ASN-OVH-09). ');
$ax += cidrblock($address,'8.24.8.0/21','OVH Networks (ASN-OVH-10). ');
$ax += cidrblock($address,'8.26.94.0/24','OVH Networks (ASN-OVH-11). ');
$ax += cidrblock($address,'8.29.224.0/24','OVH Networks (ASN-OVH-12). ');
$ax += cidrblock($address,'8.30.208.0/21','OVH Networks (ASN-OVH-13). ');
$ax += cidrblock($address,'8.33.96.0/21','OVH Networks (ASN-OVH-14). ');
$ax += cidrblock($address,'8.33.128.0/21','OVH Networks (ASN-OVH-15). ');
$ax += cidrblock($address,'8.33.136.0/23','OVH Networks (ASN-OVH-16). ');
$ax += cidrblock($address,'37.59.0.0/16','OVH Networks (ASN-OVH-17). ');
$ax += cidrblock($address,'37.60.48.0/20','OVH Networks (ASN-OVH-18). ');
$ax += cidrblock($address,'37.187.0.0/16','OVH Networks (ASN-OVH-19). ');
$ax += cidrblock($address,'46.105.0.0/16','OVH Networks (ASN-OVH-20). ');
$ax += cidrblock($address,'51.254.0.0/15','OVH Networks (ASN-OVH-21). ');
$ax += cidrblock($address,'62.245.0.0/19','OVH Networks (ASN-OVH-22). ');
$ax += cidrblock($address,'87.98.128.0/17','OVH Networks (ASN-OVH-23). ');
$ax += cidrblock($address,'87.253.232.0/24','OVH Networks (ASN-OVH-24). ');
$ax += cidrblock($address,'91.90.88.0/21','OVH Networks (ASN-OVH-25). ');
$ax += cidrblock($address,'91.121.0.0/16','OVH Networks (ASN-OVH-26). ');
$ax += cidrblock($address,'92.222.0.0/16','OVH Networks (ASN-OVH-27). ');
$ax += cidrblock($address,'94.23.0.0/16','OVH Networks (ASN-OVH-28). ');
$ax += cidrblock($address,'103.5.12.0/22','OVH Networks (ASN-OVH-29). ');
$ax += cidrblock($address,'142.4.192.0/19','OVH Networks (ASN-OVH-30). ');
$ax += cidrblock($address,'149.202.0.0/16','OVH Networks (ASN-OVH-31). ');
$ax += cidrblock($address,'151.80.0.0/16','OVH Networks (ASN-OVH-32). ');
$ax += cidrblock($address,'158.69.0.0/16','OVH Networks (ASN-OVH-33). ');
$ax += cidrblock($address,'167.114.0.0/16','OVH Networks (ASN-OVH-34). ');
$ax += cidrblock($address,'176.31.0.0/16','OVH Networks (ASN-OVH-35). ');
$ax += cidrblock($address,'178.32.0.0/15','OVH Networks (ASN-OVH-36). ');
$ax += cidrblock($address,'185.10.17.0/24','OVH Networks (ASN-OVH-37). ');
$ax += cidrblock($address,'185.12.32.0/23','OVH Networks (ASN-OVH-38). ');
$ax += cidrblock($address,'188.165.0.0/16','OVH Networks (ASN-OVH-39). ');
$ax += cidrblock($address,'192.95.0.0/18','OVH Networks (ASN-OVH-40). ');
$ax += cidrblock($address,'192.99.0.0/16','OVH Networks (ASN-OVH-41). ');
$ax += cidrblock($address,'193.104.19.0/24','OVH Networks (ASN-OVH-42). ');
$ax += cidrblock($address,'193.104.56.0/24','OVH Networks (ASN-OVH-43). ');
$ax += cidrblock($address,'193.109.63.0/24','OVH Networks (ASN-OVH-44). ');
$ax += cidrblock($address,'195.110.30.0/23','OVH Networks (ASN-OVH-45). ');
$ax += cidrblock($address,'195.246.232.0/23','OVH Networks (ASN-OVH-46). ');
$ax += cidrblock($address,'198.27.64.0/18','OVH Networks (ASN-OVH-47). ');
$ax += cidrblock($address,'198.50.128.0/17','OVH Networks (ASN-OVH-48). ');
$ax += cidrblock($address,'198.100.144.0/20','OVH Networks (ASN-OVH-49). ');
$ax += cidrblock($address,'198.245.48.0/20','OVH Networks (ASN-OVH-50). ');
$ax += cidrblock($address,'213.186.32.0/19','OVH Networks (ASN-OVH-51). ');
$ax += cidrblock($address,'213.251.128.0/18','OVH Networks (ASN-OVH-52). ');

// TEST: Reprieve for possible human clusters on OVH DSL (started: APR-04-14)

if (($ax == 1) && (inmatch($whyblockout,'(ASN-OVH-','')) && (rmatch($hoster,'.dsl.ovh.fr',''))){$ax = 0; $whyblockout = '';} //76d

// IOMart
// Hosting Death by Captcha .com and .eu CAPTCHA cracking services.
// 74b. Updated 76f with 11 more ranges.
// AS20860 updated 08/28/15

$ax += cidrblock($address,'5.62.4.0/23','IO Mart (ASN-IOMART-001). ');
$ax += cidrblock($address,'5.62.8.0/21','IO Mart (ASN-IOMART-002). ');
$ax += cidrblock($address,'5.62.22.0/23','IO Mart (ASN-IOMART-003). ');
$ax += cidrblock($address,'5.62.24.0/21','IO Mart (ASN-IOMART-004). ');
$ax += cidrblock($address,'5.77.32.0/19','IO Mart (ASN-IOMART-005). ');
$ax += cidrblock($address,'5.133.176.0/21','IO Mart (ASN-IOMART-006). ');
$ax += cidrblock($address,'23.95.14.0/24','IO Mart (ASN-IOMART-007). ');
$ax += cidrblock($address,'31.24.39.0/24','IO Mart (ASN-IOMART-008). ');
$ax += cidrblock($address,'31.187.70.0/23','IO Mart (ASN-IOMART-009). ');
$ax += cidrblock($address,'31.216.48.0/24','IO Mart (ASN-IOMART-010). ');
$ax += cidrblock($address,'31.216.52.0/24','IO Mart (ASN-IOMART-011). ');
$ax += cidrblock($address,'37.77.144.0/21','IO Mart (ASN-IOMART-012). ');
$ax += cidrblock($address,'37.235.124.0/22','IO Mart (ASN-IOMART-013). ');
$ax += cidrblock($address,'37.247.116.0/23','IO Mart (ASN-IOMART-014). ');
$ax += cidrblock($address,'46.20.236.0/24','IO Mart (ASN-IOMART-015). ');
$ax += cidrblock($address,'46.102.106.0/24','IO Mart (ASN-IOMART-016). ');
$ax += cidrblock($address,'62.128.192.0/19','IO Mart (ASN-IOMART-017). ');
$ax += cidrblock($address,'62.233.64.0/18','IO Mart (ASN-IOMART-018). ');
$ax += cidrblock($address,'78.129.128.0/17','IO Mart (ASN-IOMART-019). ');
$ax += cidrblock($address,'79.171.32.0/21','IO Mart (ASN-IOMART-020). ');
$ax += cidrblock($address,'80.75.64.0/20','IO Mart (ASN-IOMART-021). ');
$ax += cidrblock($address,'80.84.49.0/24','IO Mart (ASN-IOMART-022). ');
$ax += cidrblock($address,'82.102.8.0/21','IO Mart (ASN-IOMART-023). ');
$ax += cidrblock($address,'82.145.32.0/19','IO Mart (ASN-IOMART-024). ');
$ax += cidrblock($address,'83.142.224.0/21','IO Mart (ASN-IOMART-025). ');
$ax += cidrblock($address,'84.22.160.0/19','IO Mart (ASN-IOMART-026). ');
$ax += cidrblock($address,'85.232.32.0/19','IO Mart (ASN-IOMART-027). ');
$ax += cidrblock($address,'86.105.235.0/24','IO Mart (ASN-IOMART-028). ');
$ax += cidrblock($address,'86.107.22.0/24','IO Mart (ASN-IOMART-029). ');
$ax += cidrblock($address,'86.107.42.0/24','IO Mart (ASN-IOMART-030). ');
$ax += cidrblock($address,'87.117.192.0/18','IO Mart (ASN-IOMART-031). ');
$ax += cidrblock($address,'88.150.140.0/22','IO Mart (ASN-IOMART-032). ');
$ax += cidrblock($address,'88.150.144.0/22','IO Mart (ASN-IOMART-033). ');
$ax += cidrblock($address,'88.150.154.0/24','IO Mart (ASN-IOMART-034). ');
$ax += cidrblock($address,'88.150.156.0/22','IO Mart (ASN-IOMART-035). ');
$ax += cidrblock($address,'88.150.160.0/21','IO Mart (ASN-IOMART-036). ');
$ax += cidrblock($address,'88.150.168.0/22','IO Mart (ASN-IOMART-037). ');
$ax += cidrblock($address,'88.150.230.0/24','IO Mart (ASN-IOMART-038). ');
$ax += cidrblock($address,'88.150.240.0/23','IO Mart (ASN-IOMART-039). ');
$ax += cidrblock($address,'88.150.252.0/23','IO Mart (ASN-IOMART-040). ');
$ax += cidrblock($address,'89.34.2.0/24','IO Mart (ASN-IOMART-041). ');
$ax += cidrblock($address,'89.39.71.0/24','IO Mart (ASN-IOMART-042). ');
$ax += cidrblock($address,'89.39.81.0/24','IO Mart (ASN-IOMART-043). ');
$ax += cidrblock($address,'89.39.213.0/24','IO Mart (ASN-IOMART-044). ');
$ax += cidrblock($address,'89.40.203.0/24','IO Mart (ASN-IOMART-045). ');
$ax += cidrblock($address,'89.42.12.0/24','IO Mart (ASN-IOMART-046). ');
$ax += cidrblock($address,'89.106.224.0/21','IO Mart (ASN-IOMART-047). ');
$ax += cidrblock($address,'89.207.168.0/21','IO Mart (ASN-IOMART-048). ');
$ax += cidrblock($address,'91.199.151.0/24','IO Mart (ASN-IOMART-049). ');
$ax += cidrblock($address,'91.207.220.0/23','IO Mart (ASN-IOMART-050). ');
$ax += cidrblock($address,'91.212.93.0/24','IO Mart (ASN-IOMART-051). ');
$ax += cidrblock($address,'91.215.180.0/22','IO Mart (ASN-IOMART-052). ');
$ax += cidrblock($address,'91.245.218.0/24','IO Mart (ASN-IOMART-053). ');
$ax += cidrblock($address,'93.113.56.0/24','IO Mart (ASN-IOMART-054). ');
$ax += cidrblock($address,'93.113.159.0/24','IO Mart (ASN-IOMART-055). ');
$ax += cidrblock($address,'93.117.65.0/24','IO Mart (ASN-IOMART-056). ');
$ax += cidrblock($address,'93.117.174.0/24','IO Mart (ASN-IOMART-057). ');
$ax += cidrblock($address,'93.174.10.0/24','IO Mart (ASN-IOMART-058). ');
$ax += cidrblock($address,'95.129.104.0/21','IO Mart (ASN-IOMART-059). ');
$ax += cidrblock($address,'95.154.192.0/18','IO Mart (ASN-IOMART-060). ');
$ax += cidrblock($address,'104.250.122.0/24','IO Mart (ASN-IOMART-061). ');
$ax += cidrblock($address,'109.75.160.0/21','IO Mart (ASN-IOMART-062). ');
$ax += cidrblock($address,'109.169.0.0/18','IO Mart (ASN-IOMART-063). ');
$ax += cidrblock($address,'109.169.64.0/19','IO Mart (ASN-IOMART-064). ');
$ax += cidrblock($address,'109.200.30.0/24','IO Mart (ASN-IOMART-065). ');
$ax += cidrblock($address,'109.203.103.0/24','IO Mart (ASN-IOMART-066). ');
$ax += cidrblock($address,'109.203.110.0/24','IO Mart (ASN-IOMART-067). ');
$ax += cidrblock($address,'109.203.117.0/24','IO Mart (ASN-IOMART-068). ');
$ax += cidrblock($address,'109.203.127.0/24','IO Mart (ASN-IOMART-069). ');
$ax += cidrblock($address,'130.185.144.0/21','IO Mart (ASN-IOMART-070). ');
$ax += cidrblock($address,'149.255.96.0/20','IO Mart (ASN-IOMART-071). ');
$ax += cidrblock($address,'159.255.208.0/21','IO Mart (ASN-IOMART-072). ');
$ax += cidrblock($address,'182.54.237.0/24','IO Mart (ASN-IOMART-073). ');
$ax += cidrblock($address,'185.17.148.0/22','IO Mart (ASN-IOMART-074). ');
$ax += cidrblock($address,'185.19.16.0/22','IO Mart (ASN-IOMART-075). ');
$ax += cidrblock($address,'185.20.48.0/24','IO Mart (ASN-IOMART-076). ');
$ax += cidrblock($address,'185.25.243.0/24','IO Mart (ASN-IOMART-077). ');
$ax += cidrblock($address,'185.26.148.0/23','IO Mart (ASN-IOMART-078). ');
$ax += cidrblock($address,'185.32.109.0/24','IO Mart (ASN-IOMART-079). ');
$ax += cidrblock($address,'185.32.110.0/24','IO Mart (ASN-IOMART-080). ');
$ax += cidrblock($address,'185.35.77.0/24','IO Mart (ASN-IOMART-081). ');
$ax += cidrblock($address,'185.35.79.0/24','IO Mart (ASN-IOMART-082). ');
$ax += cidrblock($address,'185.37.178.0/23','IO Mart (ASN-IOMART-083). ');
$ax += cidrblock($address,'185.57.188.0/22','IO Mart (ASN-IOMART-084). ');
$ax += cidrblock($address,'185.91.76.0/22','IO Mart (ASN-IOMART-085). ');
$ax += cidrblock($address,'185.92.252.0/22','IO Mart (ASN-IOMART-086). ');
$ax += cidrblock($address,'188.208.111.0/24','IO Mart (ASN-IOMART-087). ');
$ax += cidrblock($address,'188.210.255.0/24','IO Mart (ASN-IOMART-088). ');
$ax += cidrblock($address,'188.212.122.0/23','IO Mart (ASN-IOMART-089). ');
$ax += cidrblock($address,'188.214.198.0/24','IO Mart (ASN-IOMART-090). ');
$ax += cidrblock($address,'188.215.32.0/24','IO Mart (ASN-IOMART-091). ');
$ax += cidrblock($address,'188.227.169.0/24','IO Mart (ASN-IOMART-092). ');
$ax += cidrblock($address,'188.227.186.0/24','IO Mart (ASN-IOMART-093). ');
$ax += cidrblock($address,'192.121.166.0/23','IO Mart (ASN-IOMART-094). ');
$ax += cidrblock($address,'192.227.180.0/24','IO Mart (ASN-IOMART-095). ');
$ax += cidrblock($address,'192.253.244.0/24','IO Mart (ASN-IOMART-096). ');
$ax += cidrblock($address,'193.200.98.0/23','IO Mart (ASN-IOMART-097). ');
$ax += cidrblock($address,'193.201.200.0/23','IO Mart (ASN-IOMART-098). ');
$ax += cidrblock($address,'194.1.150.0/24','IO Mart (ASN-IOMART-099). ');
$ax += cidrblock($address,'194.6.235.0/24','IO Mart (ASN-IOMART-100). ');
$ax += cidrblock($address,'194.24.188.0/23','IO Mart (ASN-IOMART-101). ');
$ax += cidrblock($address,'195.24.230.0/23','IO Mart (ASN-IOMART-102). ');
$ax += cidrblock($address,'195.62.10.0/23','IO Mart (ASN-IOMART-103). ');
$ax += cidrblock($address,'195.177.192.0/23','IO Mart (ASN-IOMART-104). ');
$ax += cidrblock($address,'198.52.160.0/23','IO Mart (ASN-IOMART-105). ');
$ax += cidrblock($address,'206.187.52.0/22','IO Mart (ASN-IOMART-106). ');
$ax += cidrblock($address,'212.38.160.0/19','IO Mart (ASN-IOMART-107). ');
$ax += cidrblock($address,'212.84.160.0/19','IO Mart (ASN-IOMART-108). ');
$ax += cidrblock($address,'217.26.232.0/21','IO Mart (ASN-IOMART-109). ');
$ax += cidrblock($address,'217.77.176.0/20','IO Mart (ASN-IOMART-110). ');
$ax += cidrblock($address,'217.147.80.0/20','IO Mart (ASN-IOMART-111). ');
$ax += cidrblock($address,'217.194.208.0/20','IO Mart (ASN-IOMART-112). ');

// Bytemark Anonymous Proxies
// AS35425

$ax += cidrblock($address,'5.153.224.0/21','Bytemark Anonymous Proxies (ASN-BYTEMARK-0). '); //74b
$ax += cidrblock($address,'46.43.0.0/18','Bytemark Anonymous Proxies (ASN-BYTEMARK-1). '); //74b
$ax += cidrblock($address,'80.68.80.0/20','Bytemark Anonymous Proxies (ASN-BYTEMARK-2). '); //74b
$ax += cidrblock($address,'89.16.160.0/19','Bytemark Anonymous Proxies (ASN-BYTEMARK-3). '); //74b
$ax += cidrblock($address,'91.223.58.0/24','Bytemark Anonymous Proxies (ASN-BYTEMARK-4). '); //74b
$ax += cidrblock($address,'212.110.160.0/19','Bytemark Anonymous Proxies (ASN-BYTEMARK-5). '); //74b
$ax += cidrblock($address,'213.138.96.0/19','Bytemark Anonymous Proxies (ASN-BYTEMARK-6). '); //74b

// Plus Server AG
// AS8972

$ax += cidrblock($address,'5.1.120.0/21','Plus Server, not an access provider (ASN-PLSSRV-01). ');
$ax += cidrblock($address,'46.19.152.0/21','Plus Server, not an access provider (ASN-PLSSRV-02). ');
$ax += cidrblock($address,'46.22.32.0/20','Plus Server, not an access provider (ASN-PLSSRV-03). ');
$ax += cidrblock($address,'46.231.88.0/21','Plus Server, not an access provider (ASN-PLSSRV-04). ');
$ax += cidrblock($address,'62.75.128.0/17','Plus Server, not an access provider (ASN-PLSSRV-05). ');
$ax += cidrblock($address,'77.236.96.0/21','Plus Server, not an access provider (ASN-PLSSRV-06). ');
$ax += cidrblock($address,'80.86.80.0/20','Plus Server, not an access provider (ASN-PLSSRV-07). ');
$ax += cidrblock($address,'80.242.128.0/19','Plus Server, not an access provider (ASN-PLSSRV-08). ');
$ax += cidrblock($address,'83.142.128.0/21','Plus Server, not an access provider (ASN-PLSSRV-09). ');
$ax += cidrblock($address,'85.25.0.0/16','Plus Server, not an access provider (ASN-PLSSRV-10). ');
$ax += cidrblock($address,'85.93.88.0/21','Plus Server, not an access provider (ASN-PLSSRV-11). ');
$ax += cidrblock($address,'89.19.224.0/19','Plus Server, not an access provider (ASN-PLSSRV-12). ');
$ax += cidrblock($address,'89.207.248.0/21','Plus Server, not an access provider (ASN-PLSSRV-13). ');
$ax += cidrblock($address,'109.234.248.0/21','Plus Server, not an access provider (ASN-PLSSRV-14). ');
$ax += cidrblock($address,'188.138.0.0/17','Plus Server, not an access provider (ASN-PLSSRV-15). ');
$ax += cidrblock($address,'194.150.228.0/23','Plus Server, not an access provider (ASN-PLSSRV-16). ');
$ax += cidrblock($address,'195.66.102.0/24','Plus Server, not an access provider (ASN-PLSSRV-17). ');
$ax += cidrblock($address,'195.137.212.0/23','Plus Server, not an access provider (ASN-PLSSRV-18). ');
$ax += cidrblock($address,'195.149.74.0/24','Plus Server, not an access provider (ASN-PLSSRV-19). ');
$ax += cidrblock($address,'212.48.74.0/24','Plus Server, not an access provider (ASN-PLSSRV-20). ');
$ax += cidrblock($address,'213.174.32.0/19','Plus Server, not an access provider (ASN-PLSSRV-21). ');
$ax += cidrblock($address,'217.118.16.0/20','Plus Server, not an access provider (ASN-PLSSRV-22). ');
$ax += cidrblock($address,'217.172.160.0/19','Plus Server, not an access provider (ASN-PLSSRV-23). ');

// TrendMicro
// AS16880

$ax += cidrblock($address,'66.180.80.0/20','Trend Micro. Follows their users around, and attempts to get into restricted / private parts of websites. Privacy risk & Replay Attack (ASN-TRENDM-0). '); //74c
$ax += cidrblock($address,'149.2.139.0/24','Trend Micro. Follows their users around, and attempts to get into restricted / private parts of websites. Privacy risk & Replay Attack (ASN-TRENDM-1). '); //74c
$ax += cidrblock($address,'150.70.0.0/16','Trend Micro. Follows their users around, and attempts to get into restricted / private parts of websites. Privacy risk & Replay Attack (ASN-TRENDM-2). '); //74c
$ax += cidrblock($address,'216.99.128.0/20','Trend Micro. Follows their users around, and attempts to get into restricted / private parts of websites. Privacy risk & Replay Attack (ASN-TRENDM-3). '); //74c
$ax += cidrblock($address,'216.104.0.0/19','Trend Micro. Follows their users around, and attempts to get into restricted / private parts of websites. Privacy risk & Replay Attack (ASN-TRENDM-4). '); //74c

// Hetzner Online AG
// AS24940 updated 08/11/15

$ax += cidrblock($address,'5.9.0.0/16','Hetzner (ASN-HETZ-01). ');
$ax += cidrblock($address,'46.4.0.0/16','Hetzner (ASN-HETZ-02). ');
$ax += cidrblock($address,'78.46.0.0/15','Hetzner (ASN-HETZ-03). ');
$ax += cidrblock($address,'85.10.192.0/18','Hetzner (ASN-HETZ-04). ');
$ax += cidrblock($address,'88.198.0.0/16','Hetzner (ASN-HETZ-05). ');
$ax += cidrblock($address,'91.220.49.0/24','Hetzner (ASN-HETZ-06). ');
$ax += cidrblock($address,'91.233.8.0/22','Hetzner (ASN-HETZ-07). ');
$ax += cidrblock($address,'136.243.0.0/16','Hetzner (ASN-HETZ-08). ');
$ax += cidrblock($address,'138.201.0.0/16','Hetzner (ASN-HETZ-09). ');
$ax += cidrblock($address,'144.76.0.0/16','Hetzner (ASN-HETZ-10). ');
$ax += cidrblock($address,'148.251.0.0/16','Hetzner (ASN-HETZ-11). ');
$ax += cidrblock($address,'176.9.0.0/16','Hetzner (ASN-HETZ-12). ');
$ax += cidrblock($address,'176.102.168.0/21','Hetzner (ASN-HETZ-13). ');
$ax += cidrblock($address,'178.63.0.0/16','Hetzner (ASN-HETZ-14). ');
$ax += cidrblock($address,'185.12.64.0/22','Hetzner (ASN-HETZ-15). ');
$ax += cidrblock($address,'185.50.120.0/23','Hetzner (ASN-HETZ-16). ');
$ax += cidrblock($address,'188.40.0.0/16','Hetzner (ASN-HETZ-17). ');
$ax += cidrblock($address,'193.25.170.0/23','Hetzner (ASN-HETZ-18). ');
$ax += cidrblock($address,'193.28.90.0/24','Hetzner (ASN-HETZ-19). ');
$ax += cidrblock($address,'193.110.6.0/23','Hetzner (ASN-HETZ-20). ');
$ax += cidrblock($address,'193.223.77.0/24','Hetzner (ASN-HETZ-21). ');
$ax += cidrblock($address,'194.42.180.0/22','Hetzner (ASN-HETZ-22). ');
$ax += cidrblock($address,'194.42.184.0/22','Hetzner (ASN-HETZ-23). ');
$ax += cidrblock($address,'194.145.226.0/24','Hetzner (ASN-HETZ-24). ');
$ax += cidrblock($address,'195.248.224.0/24','Hetzner (ASN-HETZ-25). ');
$ax += cidrblock($address,'197.242.84.0/22','Hetzner (ASN-HETZ-26). ');
$ax += cidrblock($address,'213.133.96.0/19','Hetzner (ASN-HETZ-27). ');
$ax += cidrblock($address,'213.169.144.0/22','Hetzner (ASN-HETZ-28). ');
$ax += cidrblock($address,'213.239.192.0/18','Hetzner (ASN-HETZ-29). ');

// Digital Ocean, Inc.
// AS14061, AS62567, AS46652, AS200130

$ax += cidrblock($address,'5.101.96.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-0). '); //77g
$ax += cidrblock($address,'5.101.104.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-1). '); //77g
$ax += cidrblock($address,'37.139.0.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-2). '); //77g
$ax += cidrblock($address,'38.74.208.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-3). '); //77g
$ax += cidrblock($address,'69.55.48.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-4). '); //77g
$ax += cidrblock($address,'80.240.128.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-5). '); //77g
$ax += cidrblock($address,'82.196.0.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-6). '); //77g
$ax += cidrblock($address,'95.85.0.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-7). '); //77g
$ax += cidrblock($address,'104.131.128.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-8). '); //77g
$ax += cidrblock($address,'104.131.192.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-9). '); //77g
$ax += cidrblock($address,'107.170.0.0/16','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-10). '); //77g
$ax += cidrblock($address,'141.0.168.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-11). '); //77g
$ax += cidrblock($address,'146.185.128.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-12). '); //77g
$ax += cidrblock($address,'154.27.0.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-13). '); //77g
$ax += cidrblock($address,'162.243.0.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-14). '); //77g
$ax += cidrblock($address,'162.243.128.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-15). '); //77g
$ax += cidrblock($address,'162.243.160.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-16). '); //77g
$ax += cidrblock($address,'162.243.191.0/24','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-17). '); //77g
$ax += cidrblock($address,'162.243.192.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-18). '); //77g
$ax += cidrblock($address,'178.62.128.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-19). '); //77g
$ax += cidrblock($address,'185.14.184.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-20). '); //77g
$ax += cidrblock($address,'188.226.128.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-21). '); //77g
$ax += cidrblock($address,'192.34.56.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-22). '); //77g
$ax += cidrblock($address,'192.81.208.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-23). '); //77g
$ax += cidrblock($address,'192.241.128.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-24). '); //77g
$ax += cidrblock($address,'198.199.64.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-25). '); //77g
$ax += cidrblock($address,'198.211.96.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-26). '); //77g
$ax += cidrblock($address,'208.68.36.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-27). '); //77g

// Digital Ocean, Inc.
// AS393406

$ax += cidrblock($address,'45.55.128.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DONYC3-1). ');
$ax += cidrblock($address,'104.131.0.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DONYC3-2). ');
$ax += cidrblock($address,'104.131.160.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DONYC3-3). ');
$ax += cidrblock($address,'104.236.0.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DONYC3-4). ');
$ax += cidrblock($address,'104.236.192.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DONYC3-5). ');
$ax += cidrblock($address,'162.243.176.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DONYC3-6). ');
$ax += cidrblock($address,'162.243.184.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DONYC3-7). ');
$ax += cidrblock($address,'162.243.188.0/23','Digital Ocean, Inc. Not an access provider ISP (ASN-DONYC3-8). ');

// Root SA
// AS5577

$ax += cidrblock($address,'31.184.232.0/23','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-0). '); //76e
$ax += cidrblock($address,'31.184.244.0/23','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-1). '); //76e
$ax += cidrblock($address,'31.220.29.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-2). '); //76e
$ax += cidrblock($address,'37.114.43.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-3). '); //76e
$ax += cidrblock($address,'62.122.74.0/23','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-4). '); //76e
$ax += cidrblock($address,'83.243.8.0/21','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-5). '); //76e
$ax += cidrblock($address,'85.121.2.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-6). '); //76e
$ax += cidrblock($address,'91.220.84.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-7). '); //76e
$ax += cidrblock($address,'93.170.132.0/23','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-8). '); //76e
$ax += cidrblock($address,'93.186.79.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-9). '); //76e
$ax += cidrblock($address,'94.242.192.0/18','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-10). '); //76e
$ax += cidrblock($address,'185.5.45.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-11). '); //76e
$ax += cidrblock($address,'188.42.0.0/16','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-12). '); //76e
$ax += cidrblock($address,'195.24.72.0/21','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-13). '); //76e
$ax += cidrblock($address,'195.26.4.0/23','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-14). '); //76e
$ax += cidrblock($address,'212.114.56.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-15). '); //76e
$ax += cidrblock($address,'212.117.160.0/19','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-16). '); //76e

// XEEX network.
// AS27524

$ax += cidrblock($address,'8.3.210.0/24','XEEX (ASN-27524-0). '); //74d updated 76e
$ax += cidrblock($address,'12.179.248.0/22','XEEX (ASN-27524-1). '); //74d updated 76e
$ax += cidrblock($address,'38.64.68.0/22','XEEX (ASN-27524-2). '); //74d updated 76e
$ax += cidrblock($address,'50.7.128.0/19','XEEX (ASN-27524-3). '); //74d updated 76e
$ax += cidrblock($address,'63.216.76.0/24','XEEX (ASN-27524-4). '); //74d updated 76e
$ax += cidrblock($address,'63.216.246.0/24','XEEX (ASN-27524-5). '); //74d updated 76e
$ax += cidrblock($address,'63.217.27.0/24','XEEX (ASN-27524-6). '); //74d updated 76e
$ax += cidrblock($address,'63.218.20.0/24','XEEX (ASN-27524-7). '); //74d updated 76e
$ax += cidrblock($address,'63.219.21.0/24','XEEX (ASN-27524-8). '); //74d updated 76e
$ax += cidrblock($address,'63.220.57.0/24','XEEX (ASN-27524-9). '); //74d updated 76e
$ax += cidrblock($address,'63.221.5.0/24','XEEX (ASN-27524-10). '); //74d updated 76e
$ax += cidrblock($address,'63.221.232.0/24','XEEX (ASN-27524-11). '); //74d updated 76e
$ax += cidrblock($address,'64.145.80.0/20','XEEX (ASN-27524-12). '); //74d updated 76e
$ax += cidrblock($address,'64.156.175.0/24','XEEX (ASN-27524-13). '); //74d updated 76e
$ax += cidrblock($address,'66.17.156.0/23','XEEX (ASN-27524-14). '); //74d updated 76e
$ax += cidrblock($address,'66.172.60.0/23','XEEX (ASN-27524-15). '); //74d updated 76e
$ax += cidrblock($address,'66.227.12.0/22','XEEX (ASN-27524-16). '); //74d updated 76e
$ax += cidrblock($address,'67.220.64.0/20','XEEX (ASN-27524-17). '); //74d updated 76e
$ax += cidrblock($address,'68.64.160.0/20','XEEX (ASN-27524-18). '); //74d updated 76e
$ax += cidrblock($address,'69.26.160.0/19','XEEX (ASN-27524-19). '); //74d updated 76e
$ax += cidrblock($address,'72.13.16.0/20','XEEX (ASN-27524-20). '); //74d updated 76e
$ax += cidrblock($address,'72.20.63.0/24','XEEX (ASN-27524-21). '); //74d updated 76e
$ax += cidrblock($address,'72.34.97.0/24','XEEX (ASN-27524-22). '); //74d updated 76e
$ax += cidrblock($address,'72.34.98.0/24','XEEX (ASN-27524-23). '); //74d updated 76e
$ax += cidrblock($address,'74.63.92.0/22','XEEX (ASN-27524-24). '); //74d updated 76e
$ax += cidrblock($address,'86.104.11.0/24','XEEX (ASN-27524-25). '); //74d updated 76e
$ax += cidrblock($address,'86.104.220.0/22','XEEX (ASN-27524-26). '); //74d updated 76e
$ax += cidrblock($address,'89.40.16.0/22','XEEX (ASN-27524-27). '); //74d updated 76e
$ax += cidrblock($address,'89.40.71.0/24','XEEX (ASN-27524-28). '); //74d updated 76e
$ax += cidrblock($address,'89.43.62.0/23','XEEX (ASN-27524-29). '); //74d updated 76e
$ax += cidrblock($address,'89.46.100.0/22','XEEX (ASN-27524-30). '); //74d updated 76e
$ax += cidrblock($address,'92.114.4.0/22','XEEX (ASN-27524-31). '); //74d updated 76e
$ax += cidrblock($address,'96.6.96.0/20','XEEX (ASN-27524-32). '); //74d updated 76e
$ax += cidrblock($address,'96.7.144.0/20','XEEX (ASN-27524-33). '); //74d updated 76e
$ax += cidrblock($address,'108.179.64.0/18','XEEX (ASN-27524-34). '); //74d updated 76e
$ax += cidrblock($address,'113.212.64.0/19','XEEX (ASN-27524-35). '); //74d updated 76e
$ax += cidrblock($address,'128.13.0.0/16','XEEX (ASN-27524-36). '); //74d updated 76e
$ax += cidrblock($address,'151.192.0.0/16','XEEX (ASN-27524-37). '); //74d updated 76e
$ax += cidrblock($address,'154.37.66.0/24','XEEX (ASN-27524-38). '); //74d updated 76e
$ax += cidrblock($address,'162.213.128.0/22','XEEX (ASN-27524-39). '); //74d updated 76e
$ax += cidrblock($address,'163.182.32.0/21','XEEX (ASN-27524-40). '); //74d updated 76e
$ax += cidrblock($address,'168.205.0.0/16','XEEX (ASN-27524-41). '); //74d updated 76e
$ax += cidrblock($address,'173.205.216.0/23','XEEX (ASN-27524-42). '); //74d updated 76e
$ax += cidrblock($address,'173.231.192.0/18','XEEX (ASN-27524-43). '); //74d updated 76e
$ax += cidrblock($address,'173.249.192.0/18','XEEX (ASN-27524-44). '); //74d updated 76e
$ax += cidrblock($address,'194.28.156.0/22','XEEX (ASN-27524-45). '); //74d updated 76e
$ax += cidrblock($address,'198.13.124.0/22','XEEX (ASN-27524-46). '); //74d updated 76e
$ax += cidrblock($address,'198.16.64.0/18','XEEX (ASN-27524-47). '); //74d updated 76e
$ax += cidrblock($address,'199.89.2.0/24','XEEX (ASN-27524-48). '); //74d updated 76e
$ax += cidrblock($address,'199.114.212.0/22','XEEX (ASN-27524-49). '); //74d updated 76e
$ax += cidrblock($address,'199.249.179.0/24','XEEX (ASN-27524-50). '); //74d updated 76e
$ax += cidrblock($address,'199.249.180.0/23','XEEX (ASN-27524-51). '); //74d updated 76e
$ax += cidrblock($address,'199.249.182.0/24','XEEX (ASN-27524-52). '); //74d updated 76e
$ax += cidrblock($address,'199.255.236.0/22','XEEX (ASN-27524-53). '); //74d updated 76e
$ax += cidrblock($address,'204.8.33.0/24','XEEX (ASN-27524-54). '); //74d updated 76e
$ax += cidrblock($address,'204.8.35.0/24','XEEX (ASN-27524-55). '); //74d updated 76e
$ax += cidrblock($address,'204.11.18.0/23','XEEX (ASN-27524-56). '); //74d updated 76e
$ax += cidrblock($address,'204.45.224.0/19','XEEX (ASN-27524-57). '); //74d updated 76e
$ax += cidrblock($address,'204.71.16.176/29','XEEX (ASN-27524-58). '); //74d updated 76e
$ax += cidrblock($address,'205.134.238.0/23','XEEX (ASN-27524-59). '); //74d updated 76e
$ax += cidrblock($address,'205.177.3.0/24','XEEX (ASN-27524-60). '); //74d updated 76e
$ax += cidrblock($address,'205.252.0.0/24','XEEX (ASN-27524-61). '); //74d updated 76e
$ax += cidrblock($address,'206.161.11.0/24','XEEX (ASN-27524-62). '); //74d updated 76e
$ax += cidrblock($address,'206.161.141.0/24','XEEX (ASN-27524-63). '); //74d updated 76e
$ax += cidrblock($address,'206.226.64.0/18','XEEX (ASN-27524-64). '); //74d updated 76e
$ax += cidrblock($address,'207.0.203.0/24','XEEX (ASN-27524-65). '); //74d updated 76e
$ax += cidrblock($address,'207.126.64.0/24','XEEX (ASN-27524-66). '); //74d updated 76e
$ax += cidrblock($address,'207.176.22.0/24','XEEX (ASN-27524-67). '); //74d updated 76e
$ax += cidrblock($address,'207.226.11.0/24','XEEX (ASN-27524-68). '); //74d updated 76e
$ax += cidrblock($address,'207.226.112.0/24','XEEX (ASN-27524-69). '); //74d updated 76e
$ax += cidrblock($address,'207.245.198.0/23','XEEX (ASN-27524-70). '); //74d updated 76e
$ax += cidrblock($address,'207.246.198.0/23','XEEX (ASN-27524-71). '); //74d updated 76e
$ax += cidrblock($address,'208.51.60.0/22','XEEX (ASN-27524-72). '); //74d updated 76e
$ax += cidrblock($address,'208.77.20.0/22','XEEX (ASN-27524-73). '); //74d updated 76e
$ax += cidrblock($address,'208.78.139.0/24','XEEX (ASN-27524-74). '); //74d updated 76e
$ax += cidrblock($address,'208.90.0.0/21','XEEX (ASN-27524-75). '); //74d updated 76e
$ax += cidrblock($address,'209.159.140.0/23','XEEX (ASN-27524-76). '); //74d updated 76e
$ax += cidrblock($address,'209.242.192.0/19','XEEX (ASN-27524-77). '); //74d updated 76e
$ax += cidrblock($address,'209.245.124.0/24','XEEX (ASN-27524-78). '); //74d updated 76e
$ax += cidrblock($address,'216.59.0.0/19','XEEX (ASN-27524-79). '); //74d updated 76e
$ax += cidrblock($address,'216.59.48.0/21','XEEX (ASN-27524-80). '); //74d updated 76e
$ax += cidrblock($address,'216.59.128.0/18','XEEX (ASN-27524-81). '); //74d updated 76e
$ax += cidrblock($address,'216.151.128.0/19','XEEX (ASN-27524-82). '); //74d updated 76e
$ax += cidrblock($address,'216.152.240.0/20','XEEX (ASN-27524-83). '); //74d updated 76e
$ax += cidrblock($address,'216.156.142.0/23','XEEX (ASN-27524-84). '); //74d updated 76e

//  Corpcolo
//  AS17139

$ax += cidrblock($address,'66.117.0.0/20','Corpcolo (ASN-AS17139-0). '); //76e
$ax += cidrblock($address,'68.64.160.0/20','Corpcolo (ASN-AS17139-1). '); //76e
$ax += cidrblock($address,'72.37.152.0/24','Corpcolo (ASN-AS17139-2). '); //76e
$ax += cidrblock($address,'73.37.131.0/29','Corpcolo (ASN-AS17139-3). '); //76e
$ax += cidrblock($address,'74.82.37.0/24','Corpcolo (ASN-AS17139-4). '); //76e
$ax += cidrblock($address,'74.124.192.0/19','Corpcolo (ASN-AS17139-5). '); //76e
$ax += cidrblock($address,'173.247.224.0/19','Corpcolo (ASN-AS17139-6). '); //76e
$ax += cidrblock($address,'199.33.244.0/24','Corpcolo (ASN-AS17139-7). '); //76e
$ax += cidrblock($address,'199.79.202.0/24','Corpcolo (ASN-AS17139-8). '); //76e
$ax += cidrblock($address,'199.83.102.0/24','Corpcolo (ASN-AS17139-9). '); //76e
$ax += cidrblock($address,'199.195.142.0/23','Corpcolo (ASN-AS17139-10). '); //76e
$ax += cidrblock($address,'205.134.224.0/19','Corpcolo (ASN-AS17139-11). '); //76e
$ax += cidrblock($address,'206.62.144.0/22','Corpcolo (ASN-AS17139-12). '); //76e
$ax += cidrblock($address,'206.62.148.0/23','Corpcolo (ASN-AS17139-13). '); //76e
$ax += cidrblock($address,'206.125.168.0/24','Corpcolo (ASN-AS17139-14). '); //76e
$ax += cidrblock($address,'208.51.60.0/22','Corpcolo (ASN-AS17139-15). '); //76e
$ax += cidrblock($address,'208.79.92.0/24','Corpcolo (ASN-AS17139-16). '); //76e
$ax += cidrblock($address,'216.151.149.0/24','Corpcolo (ASN-AS17139-17). '); //76e
$ax += cidrblock($address,'216.152.242.0/24','Corpcolo (ASN-AS17139-18). '); //76e
$ax += cidrblock($address,'216.179.168.0/21','Corpcolo (ASN-AS17139-19). '); //76e
$ax += cidrblock($address,'216.179.208.0/24','Corpcolo (ASN-AS17139-20). '); //76e
$ax += cidrblock($address,'216.179.212.0/24','Corpcolo (ASN-AS17139-21). '); //76e
$ax += cidrblock($address,'216.179.218.0/24','Corpcolo (ASN-AS17139-22). '); //76e
$ax += cidrblock($address,'216.193.197.0/24','Corpcolo (ASN-AS17139-23). '); //76e
$ax += cidrblock($address,'216.193.219.0/24','Corpcolo (ASN-AS17139-24). '); //76e
$ax += cidrblock($address,'216.193.251.0/24','Corpcolo (ASN-AS17139-25). '); //76e

//  iWeb Technologies Inc.
//  AS32613

$ax += cidrblock($address,'38.108.70.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-0). '); //74d
$ax += cidrblock($address,'38.108.82.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-1). '); //74d
$ax += cidrblock($address,'64.15.128.0/19','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-2). '); //74d
$ax += cidrblock($address,'66.11.39.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-3). '); //74d
$ax += cidrblock($address,'66.234.16.0/20','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-4). '); //74d
$ax += cidrblock($address,'67.205.64.0/18','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-5). '); //74d
$ax += cidrblock($address,'70.38.0.0/17','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-6). '); //74d
$ax += cidrblock($address,'72.55.128.0/18','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-7). '); //74d
$ax += cidrblock($address,'74.113.72.0/23','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-8). '); //74d
$ax += cidrblock($address,'108.163.128.0/18','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-9). '); //74d
$ax += cidrblock($address,'174.141.228.0/22','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-10). '); //74d
$ax += cidrblock($address,'174.141.232.0/23','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-11). '); //74d
$ax += cidrblock($address,'174.142.0.0/16','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-12). '); //74d
$ax += cidrblock($address,'184.107.0.0/16','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-13). '); //74d
$ax += cidrblock($address,'189.91.32.0/23','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-14). '); //74d
$ax += cidrblock($address,'192.219.254.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-15). '); //74d
$ax += cidrblock($address,'198.50.96.0/19','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-16). '); //74d
$ax += cidrblock($address,'198.72.96.0/19','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-17). '); //74d
$ax += cidrblock($address,'199.84.182.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-18). '); //74d
$ax += cidrblock($address,'204.19.249.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-19). '); //74d
$ax += cidrblock($address,'204.19.251.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-20). '); //74d
$ax += cidrblock($address,'204.19.253.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-21). '); //74d
$ax += cidrblock($address,'204.19.254.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-22). '); //74d
$ax += cidrblock($address,'205.236.34.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-23). '); //74d
$ax += cidrblock($address,'206.123.20.0/23','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-24). '); //74d
$ax += cidrblock($address,'209.172.32.0/19','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-25). '); //74d

//  Reliable Hosting Services
//  AS29713

$ax += cidrblock($address,'199.15.248.0/21','Reliable Hosting Services. Not an access provider ISP. (ASN-RELIA-0). '); //74d
$ax += cidrblock($address,'208.73.20.0/22','Reliable Hosting Services. Not an access provider ISP. (ASN-RELIA-1). '); //74d

// Westhost
// AS29854

$ax += cidrblock($address,'31.220.5.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-0). '); //74d
$ax += cidrblock($address,'50.115.112.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-1). '); //74d
$ax += cidrblock($address,'67.212.224.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-2). '); //74d
$ax += cidrblock($address,'68.169.32.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-3). '); //74d
$ax += cidrblock($address,'69.36.160.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-4). '); //74d
$ax += cidrblock($address,'173.255.128.0/22','Westhost, not an access provider ISP (ASN-WESTHOST-5). '); //74d
$ax += cidrblock($address,'174.127.104.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-6). '); //74d
$ax += cidrblock($address,'174.127.112.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-7). '); //74d
$ax += cidrblock($address,'192.102.82.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-8). '); //74d
$ax += cidrblock($address,'198.105.208.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-9). '); //74d
$ax += cidrblock($address,'199.189.104.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-10). '); //74d
$ax += cidrblock($address,'199.195.192.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-11). '); //74d
$ax += cidrblock($address,'204.147.96.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-12). '); //74d
$ax += cidrblock($address,'206.130.96.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-13). '); //74d
$ax += cidrblock($address,'206.190.128.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-14). '); //74d
$ax += cidrblock($address,'206.209.240.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-15). '); //74d
$ax += cidrblock($address,'208.131.128.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-16). '); //74d
$ax += cidrblock($address,'209.95.32.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-17). '); //74d
$ax += cidrblock($address,'209.236.64.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-18). '); //74d

// Bezeq International
// AS8551

$ax += cidrblock($address,'23.34.224.0/20','BEZEQ-INT (ASN-BEZEQ-0). '); //74d
$ax += cidrblock($address,'31.25.112.0/23','BEZEQ-INT (ASN-BEZEQ-1). '); //74d
$ax += cidrblock($address,'31.168.0.0/16','BEZEQ-INT (ASN-BEZEQ-2). '); //74d
$ax += cidrblock($address,'62.219.0.0/16','BEZEQ-INT (ASN-BEZEQ-3). '); //74d
$ax += cidrblock($address,'79.176.0.0/13','BEZEQ-INT (ASN-BEZEQ-4). '); //74d
$ax += cidrblock($address,'80.74.96.0/20','BEZEQ-INT (ASN-BEZEQ-5). '); //74d
$ax += cidrblock($address,'81.218.0.0/16','BEZEQ-INT (ASN-BEZEQ-6). '); //74d
$ax += cidrblock($address,'82.80.0.0/15','BEZEQ-INT (ASN-BEZEQ-7). '); //74d
$ax += cidrblock($address,'84.108.0.0/14','BEZEQ-INT (ASN-BEZEQ-8). '); //74d
$ax += cidrblock($address,'85.114.96.0/21','BEZEQ-INT (ASN-BEZEQ-9). '); //74d
$ax += cidrblock($address,'85.130.128.0/17','BEZEQ-INT (ASN-BEZEQ-10). '); //74d
$ax += cidrblock($address,'91.192.200.0/22','BEZEQ-INT (ASN-BEZEQ-11). '); //74d
$ax += cidrblock($address,'91.228.248.0/24','BEZEQ-INT (ASN-BEZEQ-12). '); //74d
$ax += cidrblock($address,'91.246.218.0/24','BEZEQ-INT (ASN-BEZEQ-13). '); //74d
$ax += cidrblock($address,'92.122.128.0/20','BEZEQ-INT (ASN-BEZEQ-14). '); //74d
$ax += cidrblock($address,'95.101.4.0/22','BEZEQ-INT (ASN-BEZEQ-15). '); //74d
$ax += cidrblock($address,'109.64.0.0/14','BEZEQ-INT (ASN-BEZEQ-16). '); //74d
$ax += cidrblock($address,'147.235.228.0/23','BEZEQ-INT (ASN-BEZEQ-17). '); //74d
$ax += cidrblock($address,'184.27.128.0/23','BEZEQ-INT (ASN-BEZEQ-18). '); //74d
$ax += cidrblock($address,'192.114.11.0/24','BEZEQ-INT (ASN-BEZEQ-19). '); //74d
$ax += cidrblock($address,'192.114.40.0/21','BEZEQ-INT (ASN-BEZEQ-20). '); //74d
$ax += cidrblock($address,'192.114.64.0/20','BEZEQ-INT (ASN-BEZEQ-21). '); //74d
$ax += cidrblock($address,'192.114.80.0/22','BEZEQ-INT (ASN-BEZEQ-22). '); //74d
$ax += cidrblock($address,'192.114.144.0/22','BEZEQ-INT (ASN-BEZEQ-23). '); //74d
$ax += cidrblock($address,'192.115.16.0/20','BEZEQ-INT (ASN-BEZEQ-24). '); //74d
$ax += cidrblock($address,'192.115.56.0/21','BEZEQ-INT (ASN-BEZEQ-25). '); //74d
$ax += cidrblock($address,'192.115.104.0/22','BEZEQ-INT (ASN-BEZEQ-26). '); //74d
$ax += cidrblock($address,'192.115.128.0/21','BEZEQ-INT (ASN-BEZEQ-27). '); //74d
$ax += cidrblock($address,'192.115.184.0/21','BEZEQ-INT (ASN-BEZEQ-28). '); //74d
$ax += cidrblock($address,'192.116.4.0/23','BEZEQ-INT (ASN-BEZEQ-29). '); //74d
$ax += cidrblock($address,'192.116.10.0/23','BEZEQ-INT (ASN-BEZEQ-30). '); //74d
$ax += cidrblock($address,'192.116.12.0/22','BEZEQ-INT (ASN-BEZEQ-31). '); //74d
$ax += cidrblock($address,'192.117.96.0/19','BEZEQ-INT (ASN-BEZEQ-32). '); //74d
$ax += cidrblock($address,'192.117.232.0/21','BEZEQ-INT (ASN-BEZEQ-33). '); //74d
$ax += cidrblock($address,'192.118.88.0/22','BEZEQ-INT (ASN-BEZEQ-34). '); //74d
$ax += cidrblock($address,'192.118.112.0/22','BEZEQ-INT (ASN-BEZEQ-35). '); //74d
$ax += cidrblock($address,'192.118.132.0/22','BEZEQ-INT (ASN-BEZEQ-36). '); //74d
$ax += cidrblock($address,'193.138.92.0/24','BEZEQ-INT (ASN-BEZEQ-37). '); //74d
$ax += cidrblock($address,'194.114.146.0/23','BEZEQ-INT (ASN-BEZEQ-38). '); //74d
$ax += cidrblock($address,'194.153.101.0/24','BEZEQ-INT (ASN-BEZEQ-39). '); //74d
$ax += cidrblock($address,'195.22.148.0/23','BEZEQ-INT (ASN-BEZEQ-40). '); //74d
$ax += cidrblock($address,'195.177.108.0/22','BEZEQ-INT (ASN-BEZEQ-41). '); //74d
$ax += cidrblock($address,'195.200.92.0/23','BEZEQ-INT (ASN-BEZEQ-42). '); //74d
$ax += cidrblock($address,'195.213.229.0/24','BEZEQ-INT (ASN-BEZEQ-43). '); //74d
$ax += cidrblock($address,'206.82.140.0/24','BEZEQ-INT (ASN-BEZEQ-44). '); //74d
$ax += cidrblock($address,'207.117.93.0/24','BEZEQ-INT (ASN-BEZEQ-45). '); //74d
$ax += cidrblock($address,'212.25.64.0/18','BEZEQ-INT (ASN-BEZEQ-46). '); //74d
$ax += cidrblock($address,'212.179.0.0/16','BEZEQ-INT (ASN-BEZEQ-47). '); //74d
$ax += cidrblock($address,'213.31.203.0/24','BEZEQ-INT (ASN-BEZEQ-48). '); //74d
$ax += cidrblock($address,'213.31.208.0/23','BEZEQ-INT (ASN-BEZEQ-49). '); //74d
$ax += cidrblock($address,'217.22.112.0/22','BEZEQ-INT (ASN-BEZEQ-50). '); //74d
$ax += cidrblock($address,'217.22.116.0/23','BEZEQ-INT (ASN-BEZEQ-51). '); //74d
$ax += cidrblock($address,'217.194.200.0/22','BEZEQ-INT (ASN-BEZEQ-52). '); //74d

//  WholeSale Internet, Inc. & DataShack LLC
//  AS33387 & AS32097 updated 08/18/15

$ax += cidrblock($address,'41.242.144.0/24','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-01). ');
$ax += cidrblock($address,'63.141.224.0/19','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-02). ');
$ax += cidrblock($address,'69.30.192.0/18','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-03). ');
$ax += cidrblock($address,'69.197.128.0/18','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-04). ');
$ax += cidrblock($address,'74.91.16.0/20','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-05). ');
$ax += cidrblock($address,'103.25.63.0/24','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-06). ');
$ax += cidrblock($address,'107.150.32.0/19','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-07). ');
$ax += cidrblock($address,'142.54.160.0/19','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-08). ');
$ax += cidrblock($address,'153.89.0.0/16','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-09). ');
$ax += cidrblock($address,'162.251.120.0/22','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-10). ');
$ax += cidrblock($address,'173.208.128.0/17','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-11). ');
$ax += cidrblock($address,'179.0.32.0/19','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-12). ');
$ax += cidrblock($address,'179.0.64.0/18','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-13). ');
$ax += cidrblock($address,'185.94.98.0/24','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-14). ');
$ax += cidrblock($address,'190.113.32.0/19','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-15). ');
$ax += cidrblock($address,'192.151.144.0/20','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-16). ');
$ax += cidrblock($address,'192.187.96.0/19','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-17). ');
$ax += cidrblock($address,'198.204.224.0/19','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-18). ');
$ax += cidrblock($address,'199.168.96.0/21','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-19). ');
$ax += cidrblock($address,'199.245.63.0/24','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-20). ');
$ax += cidrblock($address,'201.218.160.0/19','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-21). ');
$ax += cidrblock($address,'204.10.160.0/22','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-22). ');
$ax += cidrblock($address,'204.12.192.0/18','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-23). ');
$ax += cidrblock($address,'206.51.7.0/24','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-24). ');
$ax += cidrblock($address,'206.131.192.0/20','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-25). ');
$ax += cidrblock($address,'208.67.0.0/21','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-26). ');
$ax += cidrblock($address,'208.89.208.0/21','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-27). ');
$ax += cidrblock($address,'208.94.240.0/21','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-28). ');
$ax += cidrblock($address,'208.110.64.0/19','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-29). ');
$ax += cidrblock($address,'216.75.228.0/24','WholeSale Internet, Inc. Not an access provider ISP. (ASN-WHOLESHACK-30). ');

// CoS International
// AS7914

$ax += cidrblock($address,'12.9.239.0/24','Known hostile network (ASN-CSI-0). '); //74d
$ax += cidrblock($address,'192.216.201.0/24','Known hostile network (ASN-CSI-1). '); //74d
$ax += cidrblock($address,'198.77.154.0/23','Known hostile network (ASN-CSI-2). '); //74d
$ax += cidrblock($address,'198.95.10.0/24','Known hostile network (ASN-CSI-3). '); //74d
$ax += cidrblock($address,'205.180.15.0/24','Known hostile network (ASN-CSI-4). '); //74d
$ax += cidrblock($address,'205.227.165.0/24','Known hostile network (ASN-CSI-5). '); //74d
$ax += cidrblock($address,'208.29.5.0/24','Known hostile network (ASN-CSI-6). '); //74d
$ax += cidrblock($address,'208.30.51.0/24','Known hostile network (ASN-CSI-7). '); //74d
$ax += cidrblock($address,'208.33.13.0/24','Known hostile network (ASN-CSI-8). '); //74d

// Avante Hosting
// AS36137 updated 08/20/15

$ax += cidrblock($address,'66.248.198.0/23','Avante Hosting, not an access provider (ASN-AVANTE-01). ');
$ax += cidrblock($address,'66.248.202.0/23','Avante Hosting, not an access provider (ASN-AVANTE-02). ');
$ax += cidrblock($address,'66.248.205.0/24','Avante Hosting, not an access provider (ASN-AVANTE-03). ');
$ax += cidrblock($address,'66.248.206.0/24','Avante Hosting, not an access provider (ASN-AVANTE-04). ');
$ax += cidrblock($address,'66.248.220.0/24','Avante Hosting, not an access provider (ASN-AVANTE-05). ');
$ax += cidrblock($address,'66.248.223.0/24','Avante Hosting, not an access provider (ASN-AVANTE-06). ');
$ax += cidrblock($address,'72.18.69.0/24','Avante Hosting, not an access provider (ASN-AVANTE-07). ');
$ax += cidrblock($address,'192.119.144.0/22','Avante Hosting, not an access provider (ASN-AVANTE-08). ');
$ax += cidrblock($address,'192.119.149.0/24','Avante Hosting, not an access provider (ASN-AVANTE-09). ');
$ax += cidrblock($address,'192.119.150.0/24','Avante Hosting, not an access provider (ASN-AVANTE-10). ');
$ax += cidrblock($address,'192.119.152.0/24','Avante Hosting, not an access provider (ASN-AVANTE-11). ');
$ax += cidrblock($address,'192.119.154.0/24','Avante Hosting, not an access provider (ASN-AVANTE-12). ');
$ax += cidrblock($address,'192.119.157.0/24','Avante Hosting, not an access provider (ASN-AVANTE-13). ');
$ax += cidrblock($address,'192.119.158.0/24','Avante Hosting, not an access provider (ASN-AVANTE-14). ');
$ax += cidrblock($address,'192.161.195.0/24','Avante Hosting, not an access provider (ASN-AVANTE-15). ');
$ax += cidrblock($address,'192.161.215.0/24','Avante Hosting, not an access provider (ASN-AVANTE-16). ');
$ax += cidrblock($address,'192.161.220.0/23','Avante Hosting, not an access provider (ASN-AVANTE-17). ');
$ax += cidrblock($address,'192.161.222.0/24','Avante Hosting, not an access provider (ASN-AVANTE-18). ');
$ax += cidrblock($address,'192.161.238.0/23','Avante Hosting, not an access provider (ASN-AVANTE-19). ');
$ax += cidrblock($address,'192.161.240.0/23','Avante Hosting, not an access provider (ASN-AVANTE-20). ');
$ax += cidrblock($address,'192.161.242.0/24','Avante Hosting, not an access provider (ASN-AVANTE-21). ');
$ax += cidrblock($address,'198.52.136.0/24','Avante Hosting, not an access provider (ASN-AVANTE-22). ');
$ax += cidrblock($address,'198.52.176.0/23','Avante Hosting, not an access provider (ASN-AVANTE-23). ');
$ax += cidrblock($address,'198.52.180.0/23','Avante Hosting, not an access provider (ASN-AVANTE-24). ');
$ax += cidrblock($address,'198.52.182.0/24','Avante Hosting, not an access provider (ASN-AVANTE-25). ');
$ax += cidrblock($address,'198.52.185.0/24','Avante Hosting, not an access provider (ASN-AVANTE-26). ');
$ax += cidrblock($address,'198.52.202.0/24','Avante Hosting, not an access provider (ASN-AVANTE-27). ');
$ax += cidrblock($address,'199.195.156.0/22','Avante Hosting, not an access provider (ASN-AVANTE-28). ');
$ax += cidrblock($address,'204.16.20.0/22','Avante Hosting, not an access provider (ASN-AVANTE-29). ');

// One and One Hosting
// AS8560

$ax += cidrblock($address,'50.21.176.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-0). '); //75a
$ax += cidrblock($address,'62.116.162.0/23','One and One hosting, not an access provider (ASN-ONEANDONE-1). '); //75a
$ax += cidrblock($address,'70.35.192.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-2). '); //75a
$ax += cidrblock($address,'74.208.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-3). '); //75a
$ax += cidrblock($address,'82.165.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-4). '); //75a
$ax += cidrblock($address,'87.106.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-5). '); //75a
$ax += cidrblock($address,'108.175.0.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-6). '); //75a
$ax += cidrblock($address,'195.20.224.0/19','One and One hosting, not an access provider (ASN-ONEANDONE-7). '); //75a
$ax += cidrblock($address,'198.71.48.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-8). '); //75a
$ax += cidrblock($address,'198.251.64.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-9). '); //75a
$ax += cidrblock($address,'212.227.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-10). '); //75a
$ax += cidrblock($address,'213.165.64.0/19','One and One hosting, not an access provider (ASN-ONEANDONE-11). '); //75a
$ax += cidrblock($address,'216.250.112.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-12). '); //75a
$ax += cidrblock($address,'217.72.192.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-13). '); //75a
$ax += cidrblock($address,'217.160.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-14). '); //75a

// Swift Networks Limited
// AS36923

$ax += cidrblock($address,'41.58.0.0/16','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-0). '); //75a
$ax += cidrblock($address,'41.189.0.0/19','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-1). '); //75a
$ax += cidrblock($address,'41.221.160.0/20','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-2). '); //75a
$ax += cidrblock($address,'41.222.64.0/21','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-3). '); //75a

// HostDime.com, Inc.
// 75a. Update 76f. Dropped from #1 to #3. Graph appears they are trying to clean things up.
// AS33182 updated 08/14/15

$ax += cidrblock($address,'5.226.171.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-01). ');
$ax += cidrblock($address,'5.226.173.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-02). ');
$ax += cidrblock($address,'8.10.120.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-03). ');
$ax += cidrblock($address,'8.19.188.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-04). ');
$ax += cidrblock($address,'8.33.160.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-05). ');
$ax += cidrblock($address,'23.92.60.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-06). ');
$ax += cidrblock($address,'23.239.129.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-07). ');
$ax += cidrblock($address,'23.239.134.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-08). ');
$ax += cidrblock($address,'23.239.145.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-09). ');
$ax += cidrblock($address,'23.239.159.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-10). ');
$ax += cidrblock($address,'23.249.224.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-11). ');
$ax += cidrblock($address,'37.46.120.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-12). ');
$ax += cidrblock($address,'45.59.16.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-13). ');
$ax += cidrblock($address,'45.59.31.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-14). ');
$ax += cidrblock($address,'63.142.244.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-15). ');
$ax += cidrblock($address,'64.37.48.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-16). ');
$ax += cidrblock($address,'64.72.112.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-17). ');
$ax += cidrblock($address,'64.132.144.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-18). ');
$ax += cidrblock($address,'65.248.144.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-19). ');
$ax += cidrblock($address,'66.7.192.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-20). ');
$ax += cidrblock($address,'66.193.174.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-21). ');
$ax += cidrblock($address,'66.193.230.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-22). ');
$ax += cidrblock($address,'66.194.40.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-23). ');
$ax += cidrblock($address,'66.194.152.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-24). ');
$ax += cidrblock($address,'66.194.238.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-25). ');
$ax += cidrblock($address,'66.195.16.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-26). ');
$ax += cidrblock($address,'66.195.124.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-27). ');
$ax += cidrblock($address,'66.195.240.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-28). ');
$ax += cidrblock($address,'66.195.252.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-29). ');
$ax += cidrblock($address,'67.23.224.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-30). ');
$ax += cidrblock($address,'69.80.224.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-31). ');
$ax += cidrblock($address,'72.29.64.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-32). ');
$ax += cidrblock($address,'86.111.176.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-33). ');
$ax += cidrblock($address,'98.142.96.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-34). ');
$ax += cidrblock($address,'103.13.240.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-35). ');
$ax += cidrblock($address,'104.37.25.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-36). ');
$ax += cidrblock($address,'104.37.58.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-37). ');
$ax += cidrblock($address,'104.143.92.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-38). ');
$ax += cidrblock($address,'104.194.218.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-39). ');
$ax += cidrblock($address,'104.251.80.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-40). ');
$ax += cidrblock($address,'104.251.89.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-41). ');
$ax += cidrblock($address,'104.251.212.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-42). ');
$ax += cidrblock($address,'107.161.176.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-43). ');
$ax += cidrblock($address,'107.190.128.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-44). ');
$ax += cidrblock($address,'109.73.160.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-45). ');
$ax += cidrblock($address,'129.75.0.0/18','HostDime.com Inc, #3 HE Rank (ASN-AS33182-46). ');
$ax += cidrblock($address,'129.75.64.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-47). ');
$ax += cidrblock($address,'129.75.67.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-48). ');
$ax += cidrblock($address,'129.75.72.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-49). ');
$ax += cidrblock($address,'129.75.80.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-50). ');
$ax += cidrblock($address,'129.75.96.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-51). ');
$ax += cidrblock($address,'129.75.120.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-52). ');
$ax += cidrblock($address,'129.75.128.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-53). ');
$ax += cidrblock($address,'129.75.140.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-54). ');
$ax += cidrblock($address,'129.75.152.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-55). ');
$ax += cidrblock($address,'129.75.168.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-56). ');
$ax += cidrblock($address,'129.75.192.0/18','HostDime.com Inc, #3 HE Rank (ASN-AS33182-57). ');
$ax += cidrblock($address,'129.134.32.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-58). ');
$ax += cidrblock($address,'129.134.64.0/18','HostDime.com Inc, #3 HE Rank (ASN-AS33182-59). ');
$ax += cidrblock($address,'129.134.128.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-60). ');
$ax += cidrblock($address,'129.134.160.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-61). ');
$ax += cidrblock($address,'129.134.208.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-62). ');
$ax += cidrblock($address,'129.134.224.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-63). ');
$ax += cidrblock($address,'138.121.200.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-64). ');
$ax += cidrblock($address,'138.128.160.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-65). ');
$ax += cidrblock($address,'162.221.184.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-66). ');
$ax += cidrblock($address,'172.111.134.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-67). ');
$ax += cidrblock($address,'179.48.64.0/19','HostDime.com Inc, #3 HE Rank (ASN-AS33182-68). ');
$ax += cidrblock($address,'179.191.176.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-69). ');
$ax += cidrblock($address,'181.214.51.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-70). ');
$ax += cidrblock($address,'184.171.240.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-71). ');
$ax += cidrblock($address,'185.7.80.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-72). ');
$ax += cidrblock($address,'185.34.40.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-73). ');
$ax += cidrblock($address,'185.38.44.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-74). ');
$ax += cidrblock($address,'190.123.196.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-75). ');
$ax += cidrblock($address,'191.96.111.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-76). ');
$ax += cidrblock($address,'191.96.113.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-77). ');
$ax += cidrblock($address,'191.96.114.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-78). ');
$ax += cidrblock($address,'191.101.48.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-79). ');
$ax += cidrblock($address,'191.101.224.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-80). ');
$ax += cidrblock($address,'198.49.64.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-81). ');
$ax += cidrblock($address,'198.136.48.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-82). ');
$ax += cidrblock($address,'199.166.30.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-83). ');
$ax += cidrblock($address,'199.168.184.0/21','HostDime.com Inc, #3 HE Rank (ASN-AS33182-84). ');
$ax += cidrblock($address,'200.106.144.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-85). ');
$ax += cidrblock($address,'201.131.124.0/22','HostDime.com Inc, #3 HE Rank (ASN-AS33182-86). ');
$ax += cidrblock($address,'201.163.118.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-87). ');
$ax += cidrblock($address,'208.184.146.0/23','HostDime.com Inc, #3 HE Rank (ASN-AS33182-88). ');
$ax += cidrblock($address,'209.148.83.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-89). ');
$ax += cidrblock($address,'209.148.85.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-90). ');
$ax += cidrblock($address,'209.148.90.0/24','HostDime.com Inc, #3 HE Rank (ASN-AS33182-91). ');
$ax += cidrblock($address,'212.18.224.0/20','HostDime.com Inc, #3 HE Rank (ASN-AS33182-92). ');

// New Dream Network, LLC, #2 Host Exploit rank.
// AS26347

$ax += cidrblock($address,'64.90.32.0/19','New Dream Network LLC, #2 HE Rank (ASN-AS26347-0). '); //75a
$ax += cidrblock($address,'64.111.96.0/19','New Dream Network LLC, #2 HE Rank (ASN-AS26347-1). '); //75a
$ax += cidrblock($address,'66.33.192.0/19','New Dream Network LLC, #2 HE Rank (ASN-AS26347-2). '); //75a
$ax += cidrblock($address,'67.205.0.0/18','New Dream Network LLC, #2 HE Rank (ASN-AS26347-3). '); //75a
$ax += cidrblock($address,'69.163.128.0/17','New Dream Network LLC, #2 HE Rank (ASN-AS26347-4). '); //75a
$ax += cidrblock($address,'75.119.192.0/19','New Dream Network LLC, #2 HE Rank (ASN-AS26347-5). '); //75a
$ax += cidrblock($address,'173.236.128.0/17','New Dream Network LLC, #2 HE Rank (ASN-AS26347-6). '); //75a
$ax += cidrblock($address,'205.196.208.0/20','New Dream Network LLC, #2 HE Rank (ASN-AS26347-7). '); //75a
$ax += cidrblock($address,'208.97.128.0/18','New Dream Network LLC, #2 HE Rank (ASN-AS26347-8). '); //75a
$ax += cidrblock($address,'208.113.128.0/17','New Dream Network LLC, #2 HE Rank (ASN-AS26347-9). '); //75a

// GoDaddy.com, LLC, #18 Host Exploit rank.
// AS26496

$ax += cidrblock($address,'23.229.128.0/17','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-0). '); //75a updated 76b
$ax += cidrblock($address,'37.148.200.0/21','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-1). '); //75a updated 76b
$ax += cidrblock($address,'46.252.192.0/20','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-2). '); //75a updated 76b
$ax += cidrblock($address,'50.62.0.0/15','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-3). '); //75a updated 76b
$ax += cidrblock($address,'63.241.136.0/24','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-4). '); //75a updated 76b
$ax += cidrblock($address,'64.202.160.0/19','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-5). '); //75a updated 76b
$ax += cidrblock($address,'66.210.39.0/24','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-6). '); //75a updated 76b
$ax += cidrblock($address,'68.178.128.0/17','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-7). '); //75a updated 76b
$ax += cidrblock($address,'72.167.0.0/16','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-8). '); //75a updated 76b
$ax += cidrblock($address,'97.74.0.0/16','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-9). '); //75a updated 76b
$ax += cidrblock($address,'103.1.172.0/22','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-10). '); //75a updated 76b
$ax += cidrblock($address,'118.139.160.0/19','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-11). '); //75a updated 76b
$ax += cidrblock($address,'146.255.32.0/20','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-12). '); //75a updated 76b
$ax += cidrblock($address,'160.153.0.0/16','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-13). '); //75a updated 76b
$ax += cidrblock($address,'166.62.0.0/17','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-14). '); //75a updated 76b
$ax += cidrblock($address,'173.201.0.0/16','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-15). '); //75a updated 76b
$ax += cidrblock($address,'182.50.128.0/19','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-16). '); //75a updated 76b
$ax += cidrblock($address,'184.168.0.0/16','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-17). '); //75a updated 76b
$ax += cidrblock($address,'185.7.248.0/22','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-18). '); //75a updated 76b
$ax += cidrblock($address,'188.121.32.0/19','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-19). '); //75a updated 76b
$ax += cidrblock($address,'192.169.128.0/17','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-20). '); //75a updated 76b
$ax += cidrblock($address,'192.186.192.0/18','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-21). '); //75a updated 76b
$ax += cidrblock($address,'198.12.128.0/17','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-22). '); //75a updated 76b
$ax += cidrblock($address,'198.71.128.0/17','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-23). '); //75a updated 76b
$ax += cidrblock($address,'203.124.96.0/19','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-24). '); //75a updated 76b
$ax += cidrblock($address,'206.16.40.0/21','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-25). '); //75a updated 76b
$ax += cidrblock($address,'208.109.0.0/16','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-26). '); //75a updated 76b
$ax += cidrblock($address,'216.69.128.0/18','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-27). '); //75a updated 76b
$ax += cidrblock($address,'216.138.70.0/23','GoDaddy.com LLC, #18 HE Rank  (ASN-GODADDY-28). '); //75a updated 76b

// PVNT Networks, #116 Host Exploit rank.
// AS21788

$ax += cidrblock($address,'64.120.128.0/17','PVNT Networks, #116 HE Rank (ASN-AS21788-0). '); //75a
$ax += cidrblock($address,'64.191.0.0/17','PVNT Networks, #116 HE Rank (ASN-AS21788-1). '); //75a
$ax += cidrblock($address,'66.96.192.0/18','PVNT Networks, #116 HE Rank (ASN-AS21788-2). '); //75a
$ax += cidrblock($address,'66.197.128.0/17','PVNT Networks, #116 HE Rank (ASN-AS21788-3). '); //75a
$ax += cidrblock($address,'96.9.128.0/18','PVNT Networks, #116 HE Rank (ASN-AS21788-4). '); //75a
$ax += cidrblock($address,'100.42.48.0/20','PVNT Networks, #116 HE Rank (ASN-AS21788-5). '); //75a
$ax += cidrblock($address,'108.175.144.0/20','PVNT Networks, #116 HE Rank (ASN-AS21788-6). '); //75a
$ax += cidrblock($address,'173.212.192.0/18','PVNT Networks, #116 HE Rank (ASN-AS21788-7). '); //75a
$ax += cidrblock($address,'184.22.0.0/16','PVNT Networks, #116 HE Rank (ASN-AS21788-8). '); //75a
$ax += cidrblock($address,'184.82.0.0/16','PVNT Networks, #116 HE Rank (ASN-AS21788-9). '); //75a
$ax += cidrblock($address,'198.58.80.0/20','PVNT Networks, #116 HE Rank (ASN-AS21788-10). '); //75a

// CariNet, Inc.  dedicated / cloud servers
// AS10439
// This is an optional block. Network does security scans for non-hostile purposes.
// Uncomment 5 lines below to activate.

//$ax += cidrblock($address,'66.240.192.0/18','CariNet, Inc. Not an access provider ISP. (ASN-CARINET-0). '); //75b
//$ax += cidrblock($address,'71.6.128.0/17','CariNet, Inc. Not an access provider ISP. (ASN-CARINET-1). '); //75b
//$ax += cidrblock($address,'209.126.128.0/17','CariNet, Inc. Not an access provider ISP. (ASN-CARINET-2). '); //75b
//$ax += cidrblock($address,'216.75.0.0/18','CariNet, Inc. Not an access provider ISP. (ASN-CARINET-3). '); //75b
//$ax += cidrblock($address,'216.98.128.0/19','CariNet, Inc. Not an access provider ISP. (ASN-CARINET-4). '); //75b

// BestHosting
// AS42655

$ax += cidrblock($address,'31.41.216.0/21','Network known to associate with malware, source: http://www.google.com/safebrowsing/diagnostic?site=AS:42655&hl=en (ASN-BESTHOSTING-0). '); //75b
$ax += cidrblock($address,'194.28.172.0/22','Network known to associate with malware, source: http://www.google.com/safebrowsing/diagnostic?site=AS:42655&hl=en (ASN-BESTHOSTING-1). '); //75b
$ax += cidrblock($address,'195.248.234.0/23','Network known to associate with malware, source: http://www.google.com/safebrowsing/diagnostic?site=AS:42655&hl=en (ASN-BESTHOSTING-2). '); //75b

// Internap
// AS12182

$ax += cidrblock($address,'23.92.184.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-0). '); //76b
$ax += cidrblock($address,'63.251.0.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-1). '); //76b
$ax += cidrblock($address,'63.251.100.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-2). '); //76b
$ax += cidrblock($address,'63.251.225.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-3). '); //76b
$ax += cidrblock($address,'63.251.229.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-4). '); //76b
$ax += cidrblock($address,'63.251.252.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-5). '); //76b
$ax += cidrblock($address,'63.251.254.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-6). '); //76b
$ax += cidrblock($address,'64.7.192.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-7). '); //76b
$ax += cidrblock($address,'64.74.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-8). '); //76b
$ax += cidrblock($address,'64.74.170.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-9). '); //76b
$ax += cidrblock($address,'64.74.208.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-10). '); //76b
$ax += cidrblock($address,'64.94.73.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-11). '); //76b
$ax += cidrblock($address,'64.94.96.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-12). '); //76b
$ax += cidrblock($address,'64.94.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-13). '); //76b
$ax += cidrblock($address,'64.94.158.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-14). '); //76b
$ax += cidrblock($address,'64.95.136.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-15). '); //76b
$ax += cidrblock($address,'64.95.140.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-16). '); //76b
$ax += cidrblock($address,'64.187.107.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-17). '); //76b
$ax += cidrblock($address,'66.79.143.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-18). '); //76b
$ax += cidrblock($address,'66.151.128.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-19). '); //76b
$ax += cidrblock($address,'69.12.32.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-20). '); //76b
$ax += cidrblock($address,'69.25.56.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-21). '); //76b
$ax += cidrblock($address,'69.25.81.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-22). '); //76b
$ax += cidrblock($address,'69.25.96.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-23). '); //76b
$ax += cidrblock($address,'70.42.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-24). '); //76b
$ax += cidrblock($address,'70.42.240.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-25). '); //76b
$ax += cidrblock($address,'71.19.216.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-26). '); //76b
$ax += cidrblock($address,'72.5.3.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-27). '); //76b
$ax += cidrblock($address,'72.5.64.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-28). '); //76b
$ax += cidrblock($address,'72.5.172.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-29). '); //76b
$ax += cidrblock($address,'72.5.224.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-30). '); //76b
$ax += cidrblock($address,'72.5.233.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-31). '); //76b
$ax += cidrblock($address,'74.91.118.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-32). '); //76b
$ax += cidrblock($address,'74.116.112.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-33). '); //76b
$ax += cidrblock($address,'74.118.48.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-34). '); //76b
$ax += cidrblock($address,'74.201.18.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-35). '); //76b
$ax += cidrblock($address,'74.201.80.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-36). '); //76b
$ax += cidrblock($address,'74.201.112.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-37). '); //76b
$ax += cidrblock($address,'74.201.154.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-38). '); //76b
$ax += cidrblock($address,'74.217.28.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-39). '); //76b
$ax += cidrblock($address,'74.217.64.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-40). '); //76b
$ax += cidrblock($address,'74.217.96.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-41). '); //76b
$ax += cidrblock($address,'74.217.193.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-42). '); //76b
$ax += cidrblock($address,'74.217.196.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-43). '); //76b
$ax += cidrblock($address,'74.217.200.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-44). '); //76b
$ax += cidrblock($address,'74.217.208.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-45). '); //76b
$ax += cidrblock($address,'75.98.0.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-46). '); //76b
$ax += cidrblock($address,'75.98.80.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-47). '); //76b
$ax += cidrblock($address,'85.202.160.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-48). '); //76b
$ax += cidrblock($address,'107.150.144.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-49). '); //76b
$ax += cidrblock($address,'159.135.0.0/16','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-50). '); //76b
$ax += cidrblock($address,'192.86.86.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-51). '); //76b
$ax += cidrblock($address,'192.251.220.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-52). '); //76b
$ax += cidrblock($address,'192.251.224.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-53). '); //76b
$ax += cidrblock($address,'193.93.232.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-54). '); //76b
$ax += cidrblock($address,'198.36.120.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-55). '); //76b
$ax += cidrblock($address,'198.36.124.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-56). '); //76b
$ax += cidrblock($address,'198.107.213.128/29','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-57). '); //76b
$ax += cidrblock($address,'198.107.213.200/29','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-58). '); //76b
$ax += cidrblock($address,'198.147.243.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-59). '); //76b
$ax += cidrblock($address,'198.147.244.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-60). '); //76b
$ax += cidrblock($address,'199.16.201.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-61). '); //76b
$ax += cidrblock($address,'199.16.206.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-62). '); //76b
$ax += cidrblock($address,'199.16.216.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-63). '); //76b
$ax += cidrblock($address,'199.19.195.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-64). '); //76b
$ax += cidrblock($address,'199.96.69.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-65). '); //76b
$ax += cidrblock($address,'199.102.240.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-66). '); //76b
$ax += cidrblock($address,'204.10.105.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-67). '); //76b
$ax += cidrblock($address,'204.14.108.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-68). '); //76b
$ax += cidrblock($address,'205.153.28.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-69). '); //76b
$ax += cidrblock($address,'205.153.103.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-70). '); //76b
$ax += cidrblock($address,'206.98.113.200/29','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-71). '); //76b
$ax += cidrblock($address,'208.64.56.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-72). '); //76b
$ax += cidrblock($address,'216.52.4.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-73). '); //76b
$ax += cidrblock($address,'216.52.17.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-74). '); //76b
$ax += cidrblock($address,'216.52.21.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-75). '); //76b
$ax += cidrblock($address,'216.52.29.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-76). '); //76b
$ax += cidrblock($address,'216.52.158.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-77). '); //76b
$ax += cidrblock($address,'216.129.174.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-78). '); //76b

// WEBSUPPORT-SRO-SK-AS
// AS51013

$ax += cidrblock($address,'37.9.168.0/21','Nasty slovak proxy service, participated in DoS attack. (ASN-WEBSUP-0). '); //76b
$ax += cidrblock($address,'195.210.28.0/23','Nasty slovak proxy service, participated in DoS attack. (ASN-WEBSUP-1). '); //76b

// XIRRA GmbH
// AS51191

$ax += cidrblock($address,'91.232.96.0/23','XIRRA (ASN-XIRRA-0). '); //76b
$ax += cidrblock($address,'130.185.104.0/21','XIRRA (ASN-XIRRA-1). '); //76b
$ax += cidrblock($address,'185.24.68.0/22','XIRRA (ASN-XIRRA-2). '); //76b
$ax += cidrblock($address,'195.138.240.0/21','XIRRA (ASN-XIRRA-3). '); //76b

// Unified Layer / Hostmonster
// Site on network caught hotlinking a resource on SBS!
// AS46606 HE Rank: 17

$ax += cidrblock($address,'50.87.0.0/16','Unified Layer/Hostmonster (ASN-UNIHM-0). '); //76c
$ax += cidrblock($address,'66.147.240.0/20','Unified Layer/Hostmonster (ASN-UNIHM-1). '); //76c
$ax += cidrblock($address,'67.20.64.0/18','Unified Layer/Hostmonster (ASN-UNIHM-2). '); //76c
$ax += cidrblock($address,'67.222.32.0/19','Unified Layer/Hostmonster (ASN-UNIHM-3). '); //76c
$ax += cidrblock($address,'69.89.16.0/20','Unified Layer/Hostmonster (ASN-UNIHM-4). '); //76c
$ax += cidrblock($address,'69.195.64.0/18','Unified Layer/Hostmonster (ASN-UNIHM-5). '); //76c
$ax += cidrblock($address,'70.40.192.0/19','Unified Layer/Hostmonster (ASN-UNIHM-6). '); //76c
$ax += cidrblock($address,'74.220.192.0/19','Unified Layer/Hostmonster (ASN-UNIHM-7). '); //76c
$ax += cidrblock($address,'142.4.0.0/19','Unified Layer/Hostmonster (ASN-UNIHM-8). '); //76c
$ax += cidrblock($address,'162.144.0.0/16','Unified Layer/Hostmonster (ASN-UNIHM-9). '); //76c
$ax += cidrblock($address,'162.214.0.0/15','Unified Layer/Hostmonster (ASN-UNIHM-10). '); //76c
$ax += cidrblock($address,'162.240.0.0/15','Unified Layer/Hostmonster (ASN-UNIHM-11). '); //76c
$ax += cidrblock($address,'173.254.0.0/17','Unified Layer/Hostmonster (ASN-UNIHM-12). '); //76c
$ax += cidrblock($address,'192.163.192.0/18','Unified Layer/Hostmonster (ASN-UNIHM-13). '); //76c
$ax += cidrblock($address,'192.185.0.0/19','Unified Layer/Hostmonster (ASN-UNIHM-14). '); //76c
$ax += cidrblock($address,'192.185.224.0/19','Unified Layer/Hostmonster (ASN-UNIHM-15). '); //76c
$ax += cidrblock($address,'192.232.192.0/18','Unified Layer/Hostmonster (ASN-UNIHM-16). '); //76c
$ax += cidrblock($address,'192.254.128.0/17','Unified Layer/Hostmonster (ASN-UNIHM-17). '); //76c
$ax += cidrblock($address,'198.1.64.0/18','Unified Layer/Hostmonster (ASN-UNIHM-18). '); //76c
$ax += cidrblock($address,'198.20.224.0/19','Unified Layer/Hostmonster (ASN-UNIHM-19). '); //76c
$ax += cidrblock($address,'198.57.128.0/17','Unified Layer/Hostmonster (ASN-UNIHM-20). '); //76c
$ax += cidrblock($address,'198.154.192.0/18','Unified Layer/Hostmonster (ASN-UNIHM-21). '); //76c

// WOWRACK Routing from Hyper to Wowrack
// Should not be contacting servers outside of routing purposes,
// but is participating in attacks nonetheless.
// AS23033 HE Rank: 1163

$ax += cidrblock($address,'31.22.118.0/23','Wowrack AS23033 (ASN-WOWRACK-0). '); //76d
$ax += cidrblock($address,'31.187.64.0/23','Wowrack AS23033 (ASN-WOWRACK-1). '); //76d
$ax += cidrblock($address,'64.79.201.0/24','Wowrack AS23033 (ASN-WOWRACK-2). '); //76d
$ax += cidrblock($address,'64.79.202.0/23','Wowrack AS23033 (ASN-WOWRACK-3). '); //76d
$ax += cidrblock($address,'64.79.212.0/24','Wowrack AS23033 (ASN-WOWRACK-4). '); //76d
$ax += cidrblock($address,'64.79.222.0/24','Wowrack AS23033 (ASN-WOWRACK-5). '); //76d
$ax += cidrblock($address,'64.246.167.0/24','Wowrack AS23033 (ASN-WOWRACK-6). '); //76d
$ax += cidrblock($address,'64.246.179.0/24','Wowrack AS23033 (ASN-WOWRACK-7). '); //76d
$ax += cidrblock($address,'64.246.180.0/24','Wowrack AS23033 (ASN-WOWRACK-8). '); //76d
$ax += cidrblock($address,'64.246.186.0/24','Wowrack AS23033 (ASN-WOWRACK-9). '); //76d
$ax += cidrblock($address,'64.246.190.0/24','Wowrack AS23033 (ASN-WOWRACK-10). '); //76d
$ax += cidrblock($address,'66.228.199.0/24','Wowrack AS23033 (ASN-WOWRACK-11). '); //76d
$ax += cidrblock($address,'66.228.219.0/24','Wowrack AS23033 (ASN-WOWRACK-12). '); //76d
$ax += cidrblock($address,'66.228.222.0/24','Wowrack AS23033 (ASN-WOWRACK-13). '); //76d
$ax += cidrblock($address,'66.249.2.0/24','Wowrack AS23033 (ASN-WOWRACK-14). '); //76d
$ax += cidrblock($address,'66.249.6.0/24','Wowrack AS23033 (ASN-WOWRACK-15). '); //76d
$ax += cidrblock($address,'66.249.26.0/23','Wowrack AS23033 (ASN-WOWRACK-16). '); //76d
$ax += cidrblock($address,'74.120.12.0/22','Wowrack AS23033 (ASN-WOWRACK-17). '); //76d
$ax += cidrblock($address,'74.121.184.0/21','Wowrack AS23033 (ASN-WOWRACK-18). '); //76d
$ax += cidrblock($address,'76.191.81.0/24','Wowrack AS23033 (ASN-WOWRACK-19). '); //76d
$ax += cidrblock($address,'76.191.82.0/23','Wowrack AS23033 (ASN-WOWRACK-20). '); //76d
$ax += cidrblock($address,'174.127.178.0/24','Wowrack AS23033 (ASN-WOWRACK-21). '); //76d
$ax += cidrblock($address,'176.124.113.0/24','Wowrack AS23033 (ASN-WOWRACK-22). '); //76d
$ax += cidrblock($address,'192.30.152.0/21','Wowrack AS23033 (ASN-WOWRACK-23). '); //76d
$ax += cidrblock($address,'192.34.108.0/22','Wowrack AS23033 (ASN-WOWRACK-24). '); //76d
$ax += cidrblock($address,'192.147.164.0/24','Wowrack AS23033 (ASN-WOWRACK-25). '); //76d
$ax += cidrblock($address,'192.169.68.0/23','Wowrack AS23033 (ASN-WOWRACK-26). '); //76d
$ax += cidrblock($address,'204.13.164.0/24','Wowrack AS23033 (ASN-WOWRACK-27). '); //76d
$ax += cidrblock($address,'204.14.120.0/22','Wowrack AS23033 (ASN-WOWRACK-28). '); //76d
$ax += cidrblock($address,'208.99.197.0/24','Wowrack AS23033 (ASN-WOWRACK-29). '); //76d
$ax += cidrblock($address,'208.115.96.0/19','Wowrack AS23033 (ASN-WOWRACK-30). '); //76d
$ax += cidrblock($address,'209.40.200.0/24','Wowrack AS23033 (ASN-WOWRACK-31). '); //76d
$ax += cidrblock($address,'209.59.192.0/19','Wowrack AS23033 (ASN-WOWRACK-32). '); //76d
$ax += cidrblock($address,'216.18.224.0/20','Wowrack AS23033 (ASN-WOWRACK-33). '); //76d
$ax += cidrblock($address,'216.176.176.0/20','Wowrack AS23033 (ASN-WOWRACK-34). '); //76d
$ax += cidrblock($address,'216.220.192.0/24','Wowrack AS23033 (ASN-WOWRACK-35). '); //76d
$ax += cidrblock($address,'216.220.195.0/24','Wowrack AS23033 (ASN-WOWRACK-36). '); //76d
$ax += cidrblock($address,'216.220.206.0/23','Wowrack AS23033 (ASN-WOWRACK-37). '); //76d
$ax += cidrblock($address,'216.244.64.0/19','Wowrack AS23033 (ASN-WOWRACK-38). '); //76d

// iDeal Hosting Tic. Ltd. Sti.
// Turkish host provider caught hammering honeypots
// AS60897

$ax += cidrblock($address,'213.238.166.0/23','iDeal Hosting AS60897 (ASN-iDEAL-0). '); //76d
$ax += cidrblock($address,'213.238.168.0/21','iDeal Hosting AS60897 (ASN-iDEAL-1). '); //76d
$ax += cidrblock($address,'213.238.178.0/23','iDeal Hosting AS60897 (ASN-iDEAL-2). '); //76d

// CyberVerse (Colocated Data Centers)
// AS11051

$ax += cidrblock($address,'38.118.146.0/23','CyberVerse (ASN-CBRVRS-0). '); //76d
$ax += cidrblock($address,'66.172.0.0/18','CyberVerse (ASN-CBRVRS-1). '); //76d
$ax += cidrblock($address,'66.180.192.0/20','CyberVerse (ASN-CBRVRS-2). '); //76d
$ax += cidrblock($address,'76.8.16.0/20','CyberVerse (ASN-CBRVRS-3). '); //76d
$ax += cidrblock($address,'184.170.144.0/20','CyberVerse (ASN-CBRVRS-4). '); //76d
$ax += cidrblock($address,'208.80.183.0/24','CyberVerse (ASN-CBRVRS-5). '); //76d
$ax += cidrblock($address,'209.151.224.0/19','CyberVerse (ASN-CBRVRS-6). '); //76d
$ax += cidrblock($address,'216.176.192.0/20','CyberVerse (ASN-CBRVRS-7). '); //76d

// Black Lotus Communications
// Only needed if you use their reverse proxy service. Ask for bypass.
// ** Next two lines to watch for 'cleaning up'
// http://sitevet.com/db/asn/AS54489
// http://www.blocklist.de/en/search.html?as=AS54489&action=search&send=start+search
// AS54489

$ax += cidrblock($address,'38.96.195.0/24','Black Lotus (ASN-54489-0). '); //76d
$ax += cidrblock($address,'38.121.52.0/23','Black Lotus (ASN-54489-1). '); //76d
$ax += cidrblock($address,'63.249.128.0/17','Black Lotus (ASN-54489-2). '); //76d
$ax += cidrblock($address,'64.182.0.0/16','Black Lotus (ASN-54489-3). '); //76d
$ax += cidrblock($address,'66.34.0.0/16','Black Lotus (ASN-54489-4). '); //76d
$ax += cidrblock($address,'66.221.0.0/16','Black Lotus (ASN-54489-5). '); //76d
$ax += cidrblock($address,'69.13.0.0/16','Black Lotus (ASN-54489-6). '); //76d
$ax += cidrblock($address,'198.73.50.0/24','Black Lotus (ASN-54489-7). '); //76d
$ax += cidrblock($address,'198.232.139.0/24','Black Lotus (ASN-54489-8). '); //76d
$ax += cidrblock($address,'208.225.192.0/20','Black Lotus (ASN-54489-9). '); //76d
$ax += cidrblock($address,'209.164.64.0/18','Black Lotus (ASN-54489-10). '); //76d
$ax += cidrblock($address,'216.19.206.0/24','Black Lotus (ASN-54489-11). '); //76d
$ax += cidrblock($address,'216.19.215.0/24','Black Lotus (ASN-54489-12). '); //76d
$ax += cidrblock($address,'216.19.223.0/24','Black Lotus (ASN-54489-13). '); //76d
$ax += cidrblock($address,'216.97.0.0/17','Black Lotus (ASN-54489-14). '); //76d
$ax += cidrblock($address,'216.221.160.0/19','Black Lotus (ASN-54489-15). '); //76d

// Quadranet
// AS29761, AS8100 updated 08/18/15

$ax += cidrblock($address,'23.92.52.0/22','Quadranet, not an access provider (ASN-QUADRA-001). ');
$ax += cidrblock($address,'23.247.0.0/19','Quadranet, not an access provider (ASN-QUADRA-002). ');
$ax += cidrblock($address,'23.252.96.0/20','Quadranet, not an access provider (ASN-QUADRA-003). ');
$ax += cidrblock($address,'38.127.212.0/22','Quadranet, not an access provider (ASN-QUADRA-004). ');
$ax += cidrblock($address,'43.229.18.0/23','Quadranet, not an access provider (ASN-QUADRA-005). ');
$ax += cidrblock($address,'43.251.8.0/22','Quadranet, not an access provider (ASN-QUADRA-006). ');
$ax += cidrblock($address,'45.41.140.0/22','Quadranet, not an access provider (ASN-QUADRA-007). ');
$ax += cidrblock($address,'45.56.144.0/22','Quadranet, not an access provider (ASN-QUADRA-008). ');
$ax += cidrblock($address,'45.58.52.0/24','Quadranet, not an access provider (ASN-QUADRA-009). ');
$ax += cidrblock($address,'45.61.112.0/20','Quadranet, not an access provider (ASN-QUADRA-010). ');
$ax += cidrblock($address,'45.62.96.0/19','Quadranet, not an access provider (ASN-QUADRA-011). ');
$ax += cidrblock($address,'45.78.0.0/18','Quadranet, not an access provider (ASN-QUADRA-012). ');
$ax += cidrblock($address,'45.118.124.0/22','Quadranet, not an access provider (ASN-QUADRA-013). ');
$ax += cidrblock($address,'45.120.4.0/22','Quadranet, not an access provider (ASN-QUADRA-014). ');
$ax += cidrblock($address,'50.93.201.0/24','Quadranet, not an access provider (ASN-QUADRA-015). ');
$ax += cidrblock($address,'50.93.202.0/23','Quadranet, not an access provider (ASN-QUADRA-016). ');
$ax += cidrblock($address,'50.93.204.0/24','Quadranet, not an access provider (ASN-QUADRA-017). ');
$ax += cidrblock($address,'50.115.160.0/20','Quadranet, not an access provider (ASN-QUADRA-018). ');
$ax += cidrblock($address,'63.142.240.0/22','Quadranet, not an access provider (ASN-QUADRA-019). ');
$ax += cidrblock($address,'64.57.132.0/23','Quadranet, not an access provider (ASN-QUADRA-020). ');
$ax += cidrblock($address,'64.110.129.0/24','Quadranet, not an access provider (ASN-QUADRA-021). ');
$ax += cidrblock($address,'64.110.130.0/24','Quadranet, not an access provider (ASN-QUADRA-022). ');
$ax += cidrblock($address,'64.235.249.0/24','Quadranet, not an access provider (ASN-QUADRA-023). ');
$ax += cidrblock($address,'64.239.147.0/24','Quadranet, not an access provider (ASN-QUADRA-024). ');
$ax += cidrblock($address,'64.239.177.0/24','Quadranet, not an access provider (ASN-QUADRA-025). ');
$ax += cidrblock($address,'64.239.180.0/23','Quadranet, not an access provider (ASN-QUADRA-026). ');
$ax += cidrblock($address,'64.239.182.0/24','Quadranet, not an access provider (ASN-QUADRA-027). ');
$ax += cidrblock($address,'66.55.76.0/23','Quadranet, not an access provider (ASN-QUADRA-028). ');
$ax += cidrblock($address,'66.55.78.0/24','Quadranet, not an access provider (ASN-QUADRA-029). ');
$ax += cidrblock($address,'66.55.180.0/24','Quadranet, not an access provider (ASN-QUADRA-030). ');
$ax += cidrblock($address,'66.55.183.0/24','Quadranet, not an access provider (ASN-QUADRA-031). ');
$ax += cidrblock($address,'66.63.160.0/19','Quadranet, not an access provider (ASN-QUADRA-032). ');
$ax += cidrblock($address,'66.85.26.0/23','Quadranet, not an access provider (ASN-QUADRA-033). ');
$ax += cidrblock($address,'66.146.60.0/24','Quadranet, not an access provider (ASN-QUADRA-034). ');
$ax += cidrblock($address,'66.154.96.0/19','Quadranet, not an access provider (ASN-QUADRA-035). ');
$ax += cidrblock($address,'66.212.16.0/20','Quadranet, not an access provider (ASN-QUADRA-036). ');
$ax += cidrblock($address,'67.205.128.0/18','Quadranet, not an access provider (ASN-QUADRA-037). ');
$ax += cidrblock($address,'67.207.64.0/19','Quadranet, not an access provider (ASN-QUADRA-038). ');
$ax += cidrblock($address,'67.215.224.0/19','Quadranet, not an access provider (ASN-QUADRA-039). ');
$ax += cidrblock($address,'69.12.64.0/19','Quadranet, not an access provider (ASN-QUADRA-040). ');
$ax += cidrblock($address,'69.25.14.0/24','Quadranet, not an access provider (ASN-QUADRA-041). ');
$ax += cidrblock($address,'69.80.228.0/24','Quadranet, not an access provider (ASN-QUADRA-042). ');
$ax += cidrblock($address,'69.80.230.0/24','Quadranet, not an access provider (ASN-QUADRA-043). ');
$ax += cidrblock($address,'69.174.96.0/21','Quadranet, not an access provider (ASN-QUADRA-044). ');
$ax += cidrblock($address,'72.11.128.0/19','Quadranet, not an access provider (ASN-QUADRA-045). ');
$ax += cidrblock($address,'72.37.130.0/24','Quadranet, not an access provider (ASN-QUADRA-046). ');
$ax += cidrblock($address,'72.37.138.0/24','Quadranet, not an access provider (ASN-QUADRA-047). ');
$ax += cidrblock($address,'72.37.159.0/24','Quadranet, not an access provider (ASN-QUADRA-048). ');
$ax += cidrblock($address,'72.37.164.0/24','Quadranet, not an access provider (ASN-QUADRA-049). ');
$ax += cidrblock($address,'72.37.174.0/24','Quadranet, not an access provider (ASN-QUADRA-050). ');
$ax += cidrblock($address,'72.37.179.0/24','Quadranet, not an access provider (ASN-QUADRA-051). ');
$ax += cidrblock($address,'72.37.213.0/24','Quadranet, not an access provider (ASN-QUADRA-052). ');
$ax += cidrblock($address,'72.37.214.0/23','Quadranet, not an access provider (ASN-QUADRA-053). ');
$ax += cidrblock($address,'72.37.220.0/24','Quadranet, not an access provider (ASN-QUADRA-054). ');
$ax += cidrblock($address,'74.91.32.0/20','Quadranet, not an access provider (ASN-QUADRA-055). ');
$ax += cidrblock($address,'74.113.48.0/21','Quadranet, not an access provider (ASN-QUADRA-056). ');
$ax += cidrblock($address,'74.121.148.0/22','Quadranet, not an access provider (ASN-QUADRA-057). ');
$ax += cidrblock($address,'83.143.247.0/24','Quadranet, not an access provider (ASN-QUADRA-058). ');
$ax += cidrblock($address,'96.44.128.0/18','Quadranet, not an access provider (ASN-QUADRA-059). ');
$ax += cidrblock($address,'96.47.224.0/20','Quadranet, not an access provider (ASN-QUADRA-060). ');
$ax += cidrblock($address,'98.143.144.0/20','Quadranet, not an access provider (ASN-QUADRA-061). ');
$ax += cidrblock($address,'103.21.208.0/22','Quadranet, not an access provider (ASN-QUADRA-062). ');
$ax += cidrblock($address,'103.58.176.0/22','Quadranet, not an access provider (ASN-QUADRA-063). ');
$ax += cidrblock($address,'103.60.64.0/22','Quadranet, not an access provider (ASN-QUADRA-064). ');
$ax += cidrblock($address,'103.225.167.0/24','Quadranet, not an access provider (ASN-QUADRA-065). ');
$ax += cidrblock($address,'103.235.4.0/24','Quadranet, not an access provider (ASN-QUADRA-066). ');
$ax += cidrblock($address,'103.251.36.0/22','Quadranet, not an access provider (ASN-QUADRA-067). ');
$ax += cidrblock($address,'104.37.0.0/23','Quadranet, not an access provider (ASN-QUADRA-068). ');
$ax += cidrblock($address,'104.37.4.0/24','Quadranet, not an access provider (ASN-QUADRA-069). ');
$ax += cidrblock($address,'104.37.59.0/24','Quadranet, not an access provider (ASN-QUADRA-070). ');
$ax += cidrblock($address,'104.128.80.0/20','Quadranet, not an access provider (ASN-QUADRA-071). ');
$ax += cidrblock($address,'104.143.88.0/22','Quadranet, not an access provider (ASN-QUADRA-072). ');
$ax += cidrblock($address,'104.160.32.0/20','Quadranet, not an access provider (ASN-QUADRA-073). ');
$ax += cidrblock($address,'104.166.106.0/24','Quadranet, not an access provider (ASN-QUADRA-074). ');
$ax += cidrblock($address,'104.167.16.0/20','Quadranet, not an access provider (ASN-QUADRA-075). ');
$ax += cidrblock($address,'104.192.28.0/22','Quadranet, not an access provider (ASN-QUADRA-076). ');
$ax += cidrblock($address,'104.194.64.0/19','Quadranet, not an access provider (ASN-QUADRA-077). ');
$ax += cidrblock($address,'104.194.192.0/22','Quadranet, not an access provider (ASN-QUADRA-078). ');
$ax += cidrblock($address,'104.200.160.0/20','Quadranet, not an access provider (ASN-QUADRA-079). ');
$ax += cidrblock($address,'104.223.0.0/17','Quadranet, not an access provider (ASN-QUADRA-080). ');
$ax += cidrblock($address,'104.224.128.0/18','Quadranet, not an access provider (ASN-QUADRA-081). ');
$ax += cidrblock($address,'104.238.46.0/23','Quadranet, not an access provider (ASN-QUADRA-082). ');
$ax += cidrblock($address,'104.243.246.0/24','Quadranet, not an access provider (ASN-QUADRA-083). ');
$ax += cidrblock($address,'104.244.7.0/24','Quadranet, not an access provider (ASN-QUADRA-084). ');
$ax += cidrblock($address,'104.244.152.0/21','Quadranet, not an access provider (ASN-QUADRA-085). ');
$ax += cidrblock($address,'104.245.240.0/21','Quadranet, not an access provider (ASN-QUADRA-086). ');
$ax += cidrblock($address,'104.250.161.0/24','Quadranet, not an access provider (ASN-QUADRA-087). ');
$ax += cidrblock($address,'104.250.163.0/24','Quadranet, not an access provider (ASN-QUADRA-088). ');
$ax += cidrblock($address,'104.250.174.0/24','Quadranet, not an access provider (ASN-QUADRA-089). ');
$ax += cidrblock($address,'104.250.178.0/24','Quadranet, not an access provider (ASN-QUADRA-090). ');
$ax += cidrblock($address,'104.251.180.0/22','Quadranet, not an access provider (ASN-QUADRA-091). ');
$ax += cidrblock($address,'104.251.208.0/23','Quadranet, not an access provider (ASN-QUADRA-092). ');
$ax += cidrblock($address,'104.254.56.0/24','Quadranet, not an access provider (ASN-QUADRA-093). ');
$ax += cidrblock($address,'104.254.61.0/24','Quadranet, not an access provider (ASN-QUADRA-094). ');
$ax += cidrblock($address,'104.255.220.0/22','Quadranet, not an access provider (ASN-QUADRA-095). ');
$ax += cidrblock($address,'107.150.26.0/24','Quadranet, not an access provider (ASN-QUADRA-096). ');
$ax += cidrblock($address,'107.150.31.0/24','Quadranet, not an access provider (ASN-QUADRA-097). ');
$ax += cidrblock($address,'107.161.80.0/20','Quadranet, not an access provider (ASN-QUADRA-098). ');
$ax += cidrblock($address,'107.167.32.0/19','Quadranet, not an access provider (ASN-QUADRA-099). ');
$ax += cidrblock($address,'107.178.128.0/18','Quadranet, not an access provider (ASN-QUADRA-100). ');
$ax += cidrblock($address,'107.181.77.0/24','Quadranet, not an access provider (ASN-QUADRA-101). ');
$ax += cidrblock($address,'107.182.176.0/20','Quadranet, not an access provider (ASN-QUADRA-102). ');
$ax += cidrblock($address,'109.169.54.0/24','Quadranet, not an access provider (ASN-QUADRA-103). ');
$ax += cidrblock($address,'109.169.56.0/21','Quadranet, not an access provider (ASN-QUADRA-104). ');
$ax += cidrblock($address,'109.169.64.0/21','Quadranet, not an access provider (ASN-QUADRA-105). ');
$ax += cidrblock($address,'109.169.82.0/23','Quadranet, not an access provider (ASN-QUADRA-106). ');
$ax += cidrblock($address,'109.169.84.0/23','Quadranet, not an access provider (ASN-QUADRA-107). ');
$ax += cidrblock($address,'138.128.192.0/19','Quadranet, not an access provider (ASN-QUADRA-108). ');
$ax += cidrblock($address,'146.71.32.0/20','Quadranet, not an access provider (ASN-QUADRA-109). ');
$ax += cidrblock($address,'146.148.128.0/17','Quadranet, not an access provider (ASN-QUADRA-110). ');
$ax += cidrblock($address,'155.94.128.0/17','Quadranet, not an access provider (ASN-QUADRA-111). ');
$ax += cidrblock($address,'155.254.38.0/24','Quadranet, not an access provider (ASN-QUADRA-112). ');
$ax += cidrblock($address,'162.211.65.0/24','Quadranet, not an access provider (ASN-QUADRA-113). ');
$ax += cidrblock($address,'162.211.224.0/21','Quadranet, not an access provider (ASN-QUADRA-114). ');
$ax += cidrblock($address,'162.220.244.0/24','Quadranet, not an access provider (ASN-QUADRA-115). ');
$ax += cidrblock($address,'162.249.16.0/22','Quadranet, not an access provider (ASN-QUADRA-116). ');
$ax += cidrblock($address,'162.253.176.0/22','Quadranet, not an access provider (ASN-QUADRA-117). ');
$ax += cidrblock($address,'167.160.36.0/24','Quadranet, not an access provider (ASN-QUADRA-118). ');
$ax += cidrblock($address,'167.160.160.0/21','Quadranet, not an access provider (ASN-QUADRA-119). ');
$ax += cidrblock($address,'172.97.64.0/21','Quadranet, not an access provider (ASN-QUADRA-120). ');
$ax += cidrblock($address,'173.44.32.0/19','Quadranet, not an access provider (ASN-QUADRA-121). ');
$ax += cidrblock($address,'173.82.0.0/16','Quadranet, not an access provider (ASN-QUADRA-122). ');
$ax += cidrblock($address,'173.205.80.0/20','Quadranet, not an access provider (ASN-QUADRA-123). ');
$ax += cidrblock($address,'173.254.192.0/18','Quadranet, not an access provider (ASN-QUADRA-124). ');
$ax += cidrblock($address,'174.138.0.0/17','Quadranet, not an access provider (ASN-QUADRA-125). ');
$ax += cidrblock($address,'179.48.0.0/18','Quadranet, not an access provider (ASN-QUADRA-126). ');
$ax += cidrblock($address,'179.51.220.0/22','Quadranet, not an access provider (ASN-QUADRA-127). ');
$ax += cidrblock($address,'179.63.144.0/21','Quadranet, not an access provider (ASN-QUADRA-128). ');
$ax += cidrblock($address,'181.174.208.0/20','Quadranet, not an access provider (ASN-QUADRA-129). ');
$ax += cidrblock($address,'181.174.224.0/19','Quadranet, not an access provider (ASN-QUADRA-130). ');
$ax += cidrblock($address,'181.233.152.0/21','Quadranet, not an access provider (ASN-QUADRA-131). ');
$ax += cidrblock($address,'181.233.160.0/19','Quadranet, not an access provider (ASN-QUADRA-132). ');
$ax += cidrblock($address,'183.182.10.0/24','Quadranet, not an access provider (ASN-QUADRA-133). ');
$ax += cidrblock($address,'185.73.128.0/22','Quadranet, not an access provider (ASN-QUADRA-134). ');
$ax += cidrblock($address,'190.113.32.0/19','Quadranet, not an access provider (ASN-QUADRA-135). ');
$ax += cidrblock($address,'192.52.166.0/23','Quadranet, not an access provider (ASN-QUADRA-136). ');
$ax += cidrblock($address,'192.83.199.0/24','Quadranet, not an access provider (ASN-QUADRA-137). ');
$ax += cidrblock($address,'192.119.140.0/22','Quadranet, not an access provider (ASN-QUADRA-138). ');
$ax += cidrblock($address,'192.159.162.0/23','Quadranet, not an access provider (ASN-QUADRA-139). ');
$ax += cidrblock($address,'192.159.166.0/23','Quadranet, not an access provider (ASN-QUADRA-140). ');
$ax += cidrblock($address,'192.161.48.0/20','Quadranet, not an access provider (ASN-QUADRA-141). ');
$ax += cidrblock($address,'192.161.160.0/19','Quadranet, not an access provider (ASN-QUADRA-142). ');
$ax += cidrblock($address,'192.169.6.0/23','Quadranet, not an access provider (ASN-QUADRA-143). ');
$ax += cidrblock($address,'192.189.2.0/24','Quadranet, not an access provider (ASN-QUADRA-144). ');
$ax += cidrblock($address,'192.196.208.0/20','Quadranet, not an access provider (ASN-QUADRA-145). ');
$ax += cidrblock($address,'192.200.192.0/19','Quadranet, not an access provider (ASN-QUADRA-146). ');
$ax += cidrblock($address,'192.225.224.0/22','Quadranet, not an access provider (ASN-QUADRA-147). ');
$ax += cidrblock($address,'192.225.228.0/23','Quadranet, not an access provider (ASN-QUADRA-148). ');
$ax += cidrblock($address,'192.243.112.0/20','Quadranet, not an access provider (ASN-QUADRA-149). ');
$ax += cidrblock($address,'193.17.68.0/24','Quadranet, not an access provider (ASN-QUADRA-150). ');
$ax += cidrblock($address,'193.30.161.0/24','Quadranet, not an access provider (ASN-QUADRA-151). ');
$ax += cidrblock($address,'193.200.30.0/24','Quadranet, not an access provider (ASN-QUADRA-152). ');
$ax += cidrblock($address,'198.35.44.0/22','Quadranet, not an access provider (ASN-QUADRA-153). ');
$ax += cidrblock($address,'198.55.96.0/19','Quadranet, not an access provider (ASN-QUADRA-154). ');
$ax += cidrblock($address,'198.96.88.0/21','Quadranet, not an access provider (ASN-QUADRA-155). ');
$ax += cidrblock($address,'198.167.136.0/21','Quadranet, not an access provider (ASN-QUADRA-156). ');
$ax += cidrblock($address,'198.175.124.0/22','Quadranet, not an access provider (ASN-QUADRA-157). ');
$ax += cidrblock($address,'198.180.167.0/24','Quadranet, not an access provider (ASN-QUADRA-158). ');
$ax += cidrblock($address,'198.252.108.0/24','Quadranet, not an access provider (ASN-QUADRA-159). ');
$ax += cidrblock($address,'199.30.136.0/21','Quadranet, not an access provider (ASN-QUADRA-160). ');
$ax += cidrblock($address,'199.115.164.0/22','Quadranet, not an access provider (ASN-QUADRA-161). ');
$ax += cidrblock($address,'199.180.254.0/23','Quadranet, not an access provider (ASN-QUADRA-162). ');
$ax += cidrblock($address,'199.202.216.0/21','Quadranet, not an access provider (ASN-QUADRA-163). ');
$ax += cidrblock($address,'202.131.55.0/24','Quadranet, not an access provider (ASN-QUADRA-164). ');
$ax += cidrblock($address,'203.7.164.0/24','Quadranet, not an access provider (ASN-QUADRA-165). ');
$ax += cidrblock($address,'204.9.16.0/21','Quadranet, not an access provider (ASN-QUADRA-166). ');
$ax += cidrblock($address,'204.44.64.0/18','Quadranet, not an access provider (ASN-QUADRA-167). ');
$ax += cidrblock($address,'204.152.192.0/19','Quadranet, not an access provider (ASN-QUADRA-168). ');
$ax += cidrblock($address,'205.147.0.0/18','Quadranet, not an access provider (ASN-QUADRA-169). ');
$ax += cidrblock($address,'206.82.244.0/22','Quadranet, not an access provider (ASN-QUADRA-170). ');
$ax += cidrblock($address,'206.100.64.4/30','Quadranet, not an access provider (ASN-QUADRA-171). ');
$ax += cidrblock($address,'206.115.86.0/24','Quadranet, not an access provider (ASN-QUADRA-172). ');
$ax += cidrblock($address,'206.115.92.0/22','Quadranet, not an access provider (ASN-QUADRA-173). ');
$ax += cidrblock($address,'206.117.149.0/24','Quadranet, not an access provider (ASN-QUADRA-174). ');
$ax += cidrblock($address,'206.126.96.0/24','Quadranet, not an access provider (ASN-QUADRA-175). ');
$ax += cidrblock($address,'206.185.8.0/22','Quadranet, not an access provider (ASN-QUADRA-176). ');
$ax += cidrblock($address,'206.191.192.0/19','Quadranet, not an access provider (ASN-QUADRA-177). ');
$ax += cidrblock($address,'207.51.48.0/20','Quadranet, not an access provider (ASN-QUADRA-178). ');
$ax += cidrblock($address,'207.53.64.0/21','Quadranet, not an access provider (ASN-QUADRA-179). ');
$ax += cidrblock($address,'207.151.236.0/24','Quadranet, not an access provider (ASN-QUADRA-180). ');
$ax += cidrblock($address,'207.154.192.0/18','Quadranet, not an access provider (ASN-QUADRA-181). ');
$ax += cidrblock($address,'207.246.200.0/24','Quadranet, not an access provider (ASN-QUADRA-182). ');
$ax += cidrblock($address,'208.74.168.0/21','Quadranet, not an access provider (ASN-QUADRA-183). ');
$ax += cidrblock($address,'208.79.93.0/24','Quadranet, not an access provider (ASN-QUADRA-184). ');
$ax += cidrblock($address,'208.90.120.0/22','Quadranet, not an access provider (ASN-QUADRA-185). ');
$ax += cidrblock($address,'208.175.172.184/30','Quadranet, not an access provider (ASN-QUADRA-186). ');
$ax += cidrblock($address,'209.17.66.0/24','Quadranet, not an access provider (ASN-QUADRA-187). ');
$ax += cidrblock($address,'209.73.64.0/18','Quadranet, not an access provider (ASN-QUADRA-188). ');
$ax += cidrblock($address,'209.134.0.0/18','Quadranet, not an access provider (ASN-QUADRA-189). ');
$ax += cidrblock($address,'212.38.176.0/20','Quadranet, not an access provider (ASN-QUADRA-190). ');
$ax += cidrblock($address,'216.14.104.0/24','Quadranet, not an access provider (ASN-QUADRA-191). ');
$ax += cidrblock($address,'216.31.171.0/24','Quadranet, not an access provider (ASN-QUADRA-192). ');
$ax += cidrblock($address,'216.45.48.0/20','Quadranet, not an access provider (ASN-QUADRA-193). ');
$ax += cidrblock($address,'216.59.128.0/18','Quadranet, not an access provider (ASN-QUADRA-194). ');
$ax += cidrblock($address,'216.144.224.0/20','Quadranet, not an access provider (ASN-QUADRA-195). ');
$ax += cidrblock($address,'216.189.159.0/24','Quadranet, not an access provider (ASN-QUADRA-196). ');
$ax += cidrblock($address,'216.193.195.0/24','Quadranet, not an access provider (ASN-QUADRA-197). ');
$ax += cidrblock($address,'216.193.226.0/23','Quadranet, not an access provider (ASN-QUADRA-198). ');
$ax += cidrblock($address,'218.246.130.0/24','Quadranet, not an access provider (ASN-QUADRA-199). ');

// Colocrossing
// AS36352 updated 08/14/15

$ax += cidrblock($address,'5.61.27.0/24','Colocrossing Network, not an access provider (ASN-36352-001). ');
$ax += cidrblock($address,'5.226.171.0/24','Colocrossing Network, not an access provider (ASN-36352-002). ');
$ax += cidrblock($address,'8.17.250.0/23','Colocrossing Network, not an access provider (ASN-36352-003). ');
$ax += cidrblock($address,'8.17.252.0/24','Colocrossing Network, not an access provider (ASN-36352-004). ');
$ax += cidrblock($address,'23.94.0.0/15','Colocrossing Network, not an access provider (ASN-36352-005). ');
$ax += cidrblock($address,'23.229.96.0/19','Colocrossing Network, not an access provider (ASN-36352-006). ');
$ax += cidrblock($address,'23.236.240.0/20','Colocrossing Network, not an access provider (ASN-36352-007). ');
$ax += cidrblock($address,'23.249.160.0/20','Colocrossing Network, not an access provider (ASN-36352-008). ');
$ax += cidrblock($address,'23.250.112.0/20','Colocrossing Network, not an access provider (ASN-36352-009). ');
$ax += cidrblock($address,'23.254.88.0/21','Colocrossing Network, not an access provider (ASN-36352-010). ');
$ax += cidrblock($address,'23.254.96.0/19','Colocrossing Network, not an access provider (ASN-36352-011). ');
$ax += cidrblock($address,'43.245.196.0/24','Colocrossing Network, not an access provider (ASN-36352-012). ');
$ax += cidrblock($address,'45.40.32.0/20','Colocrossing Network, not an access provider (ASN-36352-013). ');
$ax += cidrblock($address,'45.57.248.0/21','Colocrossing Network, not an access provider (ASN-36352-014). ');
$ax += cidrblock($address,'45.74.2.0/24','Colocrossing Network, not an access provider (ASN-36352-015). ');
$ax += cidrblock($address,'65.99.193.0/24','Colocrossing Network, not an access provider (ASN-36352-016). ');
$ax += cidrblock($address,'65.99.246.0/24','Colocrossing Network, not an access provider (ASN-36352-017). ');
$ax += cidrblock($address,'66.225.194.0/23','Colocrossing Network, not an access provider (ASN-36352-018). ');
$ax += cidrblock($address,'66.225.198.0/24','Colocrossing Network, not an access provider (ASN-36352-019). ');
$ax += cidrblock($address,'66.225.231.0/24','Colocrossing Network, not an access provider (ASN-36352-020). ');
$ax += cidrblock($address,'66.225.232.0/24','Colocrossing Network, not an access provider (ASN-36352-021). ');
$ax += cidrblock($address,'69.5.112.0/24','Colocrossing Network, not an access provider (ASN-36352-022). ');
$ax += cidrblock($address,'69.31.130.128/25','Colocrossing Network, not an access provider (ASN-36352-023). ');
$ax += cidrblock($address,'69.31.134.0/24','Colocrossing Network, not an access provider (ASN-36352-024). ');
$ax += cidrblock($address,'72.26.196.0/24','Colocrossing Network, not an access provider (ASN-36352-025). ');
$ax += cidrblock($address,'72.249.94.0/24','Colocrossing Network, not an access provider (ASN-36352-026). ');
$ax += cidrblock($address,'72.249.124.0/24','Colocrossing Network, not an access provider (ASN-36352-027). ');
$ax += cidrblock($address,'74.63.54.0/24','Colocrossing Network, not an access provider (ASN-36352-028). ');
$ax += cidrblock($address,'74.121.150.0/24','Colocrossing Network, not an access provider (ASN-36352-029). ');
$ax += cidrblock($address,'75.102.10.0/24','Colocrossing Network, not an access provider (ASN-36352-030). ');
$ax += cidrblock($address,'75.102.27.0/24','Colocrossing Network, not an access provider (ASN-36352-031). ');
$ax += cidrblock($address,'75.102.34.0/24','Colocrossing Network, not an access provider (ASN-36352-032). ');
$ax += cidrblock($address,'75.102.38.0/23','Colocrossing Network, not an access provider (ASN-36352-033). ');
$ax += cidrblock($address,'75.102.47.0/24','Colocrossing Network, not an access provider (ASN-36352-034). ');
$ax += cidrblock($address,'75.127.0.0/20','Colocrossing Network, not an access provider (ASN-36352-035). ');
$ax += cidrblock($address,'96.8.112.0/20','Colocrossing Network, not an access provider (ASN-36352-036). ');
$ax += cidrblock($address,'104.128.231.0/24','Colocrossing Network, not an access provider (ASN-36352-037). ');
$ax += cidrblock($address,'104.128.232.0/24','Colocrossing Network, not an access provider (ASN-36352-038). ');
$ax += cidrblock($address,'104.144.0.0/16','Colocrossing Network, not an access provider (ASN-36352-039). ');
$ax += cidrblock($address,'104.145.224.0/22','Colocrossing Network, not an access provider (ASN-36352-040). ');
$ax += cidrblock($address,'104.145.228.0/24','Colocrossing Network, not an access provider (ASN-36352-041). ');
$ax += cidrblock($address,'104.145.231.0/24','Colocrossing Network, not an access provider (ASN-36352-042). ');
$ax += cidrblock($address,'104.145.232.0/23','Colocrossing Network, not an access provider (ASN-36352-043). ');
$ax += cidrblock($address,'104.145.234.0/24','Colocrossing Network, not an access provider (ASN-36352-044). ');
$ax += cidrblock($address,'104.145.237.0/24','Colocrossing Network, not an access provider (ASN-36352-045). ');
$ax += cidrblock($address,'104.145.238.0/23','Colocrossing Network, not an access provider (ASN-36352-046). ');
$ax += cidrblock($address,'104.168.0.0/17','Colocrossing Network, not an access provider (ASN-36352-047). ');
$ax += cidrblock($address,'104.227.192.0/19','Colocrossing Network, not an access provider (ASN-36352-048). ');
$ax += cidrblock($address,'104.232.32.0/20','Colocrossing Network, not an access provider (ASN-36352-049). ');
$ax += cidrblock($address,'104.250.125.0/24','Colocrossing Network, not an access provider (ASN-36352-050). ');
$ax += cidrblock($address,'107.161.144.0/21','Colocrossing Network, not an access provider (ASN-36352-051). ');
$ax += cidrblock($address,'107.161.152.0/24','Colocrossing Network, not an access provider (ASN-36352-052). ');
$ax += cidrblock($address,'107.161.155.0/24','Colocrossing Network, not an access provider (ASN-36352-053). ');
$ax += cidrblock($address,'107.161.156.0/23','Colocrossing Network, not an access provider (ASN-36352-054). ');
$ax += cidrblock($address,'107.161.158.0/24','Colocrossing Network, not an access provider (ASN-36352-055). ');
$ax += cidrblock($address,'107.172.0.0/14','Colocrossing Network, not an access provider (ASN-36352-056). ');
$ax += cidrblock($address,'108.174.48.0/20','Colocrossing Network, not an access provider (ASN-36352-057). ');
$ax += cidrblock($address,'138.128.112.0/20','Colocrossing Network, not an access provider (ASN-36352-058). ');
$ax += cidrblock($address,'162.218.88.0/21','Colocrossing Network, not an access provider (ASN-36352-059). ');
$ax += cidrblock($address,'162.221.176.0/21','Colocrossing Network, not an access provider (ASN-36352-060). ');
$ax += cidrblock($address,'162.251.112.0/21','Colocrossing Network, not an access provider (ASN-36352-061). ');
$ax += cidrblock($address,'172.87.240.0/20','Colocrossing Network, not an access provider (ASN-36352-062). ');
$ax += cidrblock($address,'172.102.160.0/19','Colocrossing Network, not an access provider (ASN-36352-063). ');
$ax += cidrblock($address,'172.245.0.0/16','Colocrossing Network, not an access provider (ASN-36352-064). ');
$ax += cidrblock($address,'179.61.192.0/24','Colocrossing Network, not an access provider (ASN-36352-065). ');
$ax += cidrblock($address,'179.61.250.0/23','Colocrossing Network, not an access provider (ASN-36352-066). ');
$ax += cidrblock($address,'179.61.252.0/23','Colocrossing Network, not an access provider (ASN-36352-067). ');
$ax += cidrblock($address,'191.101.190.0/24','Colocrossing Network, not an access provider (ASN-36352-068). ');
$ax += cidrblock($address,'192.3.0.0/16','Colocrossing Network, not an access provider (ASN-36352-069). ');
$ax += cidrblock($address,'192.157.56.0/22','Colocrossing Network, not an access provider (ASN-36352-070). ');
$ax += cidrblock($address,'192.198.96.0/19','Colocrossing Network, not an access provider (ASN-36352-071). ');
$ax += cidrblock($address,'192.210.128.0/17','Colocrossing Network, not an access provider (ASN-36352-072). ');
$ax += cidrblock($address,'192.227.128.0/17','Colocrossing Network, not an access provider (ASN-36352-073). ');
$ax += cidrblock($address,'198.12.64.0/18','Colocrossing Network, not an access provider (ASN-36352-074). ');
$ax += cidrblock($address,'198.20.160.0/19','Colocrossing Network, not an access provider (ASN-36352-075). ');
$ax += cidrblock($address,'198.23.128.0/17','Colocrossing Network, not an access provider (ASN-36352-076). ');
$ax += cidrblock($address,'198.46.128.0/17','Colocrossing Network, not an access provider (ASN-36352-077). ');
$ax += cidrblock($address,'198.143.9.0/24','Colocrossing Network, not an access provider (ASN-36352-078). ');
$ax += cidrblock($address,'198.143.12.0/24','Colocrossing Network, not an access provider (ASN-36352-079). ');
$ax += cidrblock($address,'198.144.176.0/20','Colocrossing Network, not an access provider (ASN-36352-080). ');
$ax += cidrblock($address,'198.206.8.0/21','Colocrossing Network, not an access provider (ASN-36352-081). ');
$ax += cidrblock($address,'198.245.64.0/21','Colocrossing Network, not an access provider (ASN-36352-082). ');
$ax += cidrblock($address,'198.245.72.0/23','Colocrossing Network, not an access provider (ASN-36352-083). ');
$ax += cidrblock($address,'199.21.112.0/22','Colocrossing Network, not an access provider (ASN-36352-084). ');
$ax += cidrblock($address,'199.188.100.0/22','Colocrossing Network, not an access provider (ASN-36352-085). ');
$ax += cidrblock($address,'204.86.16.0/20','Colocrossing Network, not an access provider (ASN-36352-086). ');
$ax += cidrblock($address,'204.197.248.0/22','Colocrossing Network, not an access provider (ASN-36352-087). ');
$ax += cidrblock($address,'205.234.152.0/23','Colocrossing Network, not an access provider (ASN-36352-088). ');
$ax += cidrblock($address,'205.234.159.0/24','Colocrossing Network, not an access provider (ASN-36352-089). ');
$ax += cidrblock($address,'205.234.203.0/24','Colocrossing Network, not an access provider (ASN-36352-090). ');
$ax += cidrblock($address,'206.123.95.0/24','Colocrossing Network, not an access provider (ASN-36352-091). ');
$ax += cidrblock($address,'206.217.128.0/20','Colocrossing Network, not an access provider (ASN-36352-092). ');
$ax += cidrblock($address,'207.210.239.0/24','Colocrossing Network, not an access provider (ASN-36352-093). ');
$ax += cidrblock($address,'207.210.252.0/23','Colocrossing Network, not an access provider (ASN-36352-094). ');
$ax += cidrblock($address,'207.210.254.0/24','Colocrossing Network, not an access provider (ASN-36352-095). ');
$ax += cidrblock($address,'208.122.48.0/23','Colocrossing Network, not an access provider (ASN-36352-096). ');
$ax += cidrblock($address,'208.122.52.0/24','Colocrossing Network, not an access provider (ASN-36352-097). ');
$ax += cidrblock($address,'208.122.57.0/24','Colocrossing Network, not an access provider (ASN-36352-098). ');
$ax += cidrblock($address,'216.170.112.0/20','Colocrossing Network, not an access provider (ASN-36352-099). ');
$ax += cidrblock($address,'216.246.49.0/24','Colocrossing Network, not an access provider (ASN-36352-100). ');
$ax += cidrblock($address,'216.246.108.0/23','Colocrossing Network, not an access provider (ASN-36352-101). ');

// Serveryou Network
// AS11282

$ax += cidrblock($address,'23.234.0.0/19','Serveryou Network, not an access provider (ASN-11282-0). '); //76e
$ax += cidrblock($address,'23.234.40.0/21','Serveryou Network, not an access provider (ASN-11282-1). '); //76e
$ax += cidrblock($address,'23.234.56.0/22','Serveryou Network, not an access provider (ASN-11282-2). '); //76e
$ax += cidrblock($address,'122.10.112.0/20','Serveryou Network, not an access provider (ASN-11282-3). '); //76e
$ax += cidrblock($address,'192.0.16.0/20','Serveryou Network, not an access provider (ASN-11282-4). '); //76e
$ax += cidrblock($address,'192.249.80.0/22','Serveryou Network, not an access provider (ASN-11282-5). '); //76e
$ax += cidrblock($address,'192.249.88.0/21','Serveryou Network, not an access provider (ASN-11282-6). '); //76e
$ax += cidrblock($address,'198.1.128.0/18','Serveryou Network, not an access provider (ASN-11282-7). '); //76e
$ax += cidrblock($address,'198.15.128.0/17','Serveryou Network, not an access provider (ASN-11282-8). '); //76e
$ax += cidrblock($address,'198.44.224.0/20','Serveryou Network, not an access provider (ASN-11282-9). '); //76e
$ax += cidrblock($address,'198.44.240.0/21','Serveryou Network, not an access provider (ASN-11282-10). '); //76e
$ax += cidrblock($address,'198.44.252.0/22','Serveryou Network, not an access provider (ASN-11282-11). '); //76e
$ax += cidrblock($address,'198.105.160.0/19','Serveryou Network, not an access provider (ASN-11282-12). '); //76e
$ax += cidrblock($address,'198.177.56.0/21','Serveryou Network, not an access provider (ASN-11282-13). '); //76e
$ax += cidrblock($address,'199.231.64.0/21','Serveryou Network, not an access provider (ASN-11282-14). '); //76e

// Elastic Hosts + Connections4London, Web Host & Cloud Services.
// AS25577

$ax += cidrblock($address,'5.133.184.0/21','Cloud Services (ASN-C4LND-0). '); //76e
$ax += cidrblock($address,'5.152.176.0/24','Cloud Services (ASN-C4LND-1). '); //76e
$ax += cidrblock($address,'31.3.208.0/20','Cloud Services (ASN-C4LND-2). '); //76e
$ax += cidrblock($address,'37.58.24.0/21','Cloud Services (ASN-C4LND-3). '); //76e
$ax += cidrblock($address,'46.30.8.0/21','Cloud Services (ASN-C4LND-4). '); //76e
$ax += cidrblock($address,'62.69.140.0/24','Cloud Services (ASN-C4LND-5). '); //76e
$ax += cidrblock($address,'62.69.143.0/24','Cloud Services (ASN-C4LND-6). '); //76e
$ax += cidrblock($address,'77.111.212.0/22','Cloud Services (ASN-C4LND-7). '); //76e
$ax += cidrblock($address,'77.111.216.0/22','Cloud Services (ASN-C4LND-8). '); //76e
$ax += cidrblock($address,'81.27.64.0/19','Cloud Services (ASN-C4LND-9). '); //76e
$ax += cidrblock($address,'82.197.64.0/19','Cloud Services (ASN-C4LND-10). '); //76e
$ax += cidrblock($address,'84.45.0.0/17','Cloud Services (ASN-C4LND-11). '); //76e
$ax += cidrblock($address,'85.88.254.0/23','Cloud Services (ASN-C4LND-12). '); //76e
$ax += cidrblock($address,'85.159.88.0/21','Cloud Services (ASN-C4LND-13). '); //76e
$ax += cidrblock($address,'87.247.138.0/24','Cloud Services (ASN-C4LND-14). '); //76e
$ax += cidrblock($address,'89.106.144.0/21','Cloud Services (ASN-C4LND-15). '); //76e
$ax += cidrblock($address,'91.193.244.0/22','Cloud Services (ASN-C4LND-16). '); //76e
$ax += cidrblock($address,'91.195.112.0/23','Cloud Services (ASN-C4LND-17). '); //76e
$ax += cidrblock($address,'91.195.228.0/23','Cloud Services (ASN-C4LND-18). '); //76e
$ax += cidrblock($address,'91.199.181.0/24','Cloud Services (ASN-C4LND-19). '); //76e
$ax += cidrblock($address,'91.203.58.0/24','Cloud Services (ASN-C4LND-20). '); //76e
$ax += cidrblock($address,'91.206.118.0/23','Cloud Services (ASN-C4LND-21). '); //76e
$ax += cidrblock($address,'91.212.108.0/24','Cloud Services (ASN-C4LND-22). '); //76e
$ax += cidrblock($address,'91.213.200.0/24','Cloud Services (ASN-C4LND-23). '); //76e
$ax += cidrblock($address,'91.217.212.0/24','Cloud Services (ASN-C4LND-24). '); //76e
$ax += cidrblock($address,'91.217.245.0/24','Cloud Services (ASN-C4LND-25). '); //76e
$ax += cidrblock($address,'91.230.38.0/23','Cloud Services (ASN-C4LND-26). '); //76e
$ax += cidrblock($address,'91.247.73.0/24','Cloud Services (ASN-C4LND-27). '); //76e
$ax += cidrblock($address,'92.53.240.0/21','Cloud Services (ASN-C4LND-28). '); //76e
$ax += cidrblock($address,'109.104.96.0/19','Cloud Services (ASN-C4LND-29). '); //76e
$ax += cidrblock($address,'109.234.176.0/21','Cloud Services (ASN-C4LND-30). '); //76e
$ax += cidrblock($address,'178.22.8.0/23','Cloud Services (ASN-C4LND-31). '); //76e
$ax += cidrblock($address,'178.22.11.0/24','Cloud Services (ASN-C4LND-32). '); //76e
$ax += cidrblock($address,'179.48.128.0/19','Cloud Services (ASN-C4LND-33). '); //76e
$ax += cidrblock($address,'185.5.88.0/22','Cloud Services (ASN-C4LND-34). '); //76e
$ax += cidrblock($address,'185.23.56.0/22','Cloud Services (ASN-C4LND-35). '); //76e
$ax += cidrblock($address,'185.31.204.0/22','Cloud Services (ASN-C4LND-36). '); //76e
$ax += cidrblock($address,'192.160.10.0/24','Cloud Services (ASN-C4LND-37). '); //76e
$ax += cidrblock($address,'193.27.42.0/24','Cloud Services (ASN-C4LND-38). '); //76e
$ax += cidrblock($address,'193.35.157.0/24','Cloud Services (ASN-C4LND-39). '); //76e
$ax += cidrblock($address,'193.46.61.0/24','Cloud Services (ASN-C4LND-40). '); //76e
$ax += cidrblock($address,'193.104.108.0/24','Cloud Services (ASN-C4LND-41). '); //76e
$ax += cidrblock($address,'193.105.51.0/24','Cloud Services (ASN-C4LND-42). '); //76e
$ax += cidrblock($address,'193.105.61.0/24','Cloud Services (ASN-C4LND-43). '); //76e
$ax += cidrblock($address,'193.105.172.0/24','Cloud Services (ASN-C4LND-44). '); //76e
$ax += cidrblock($address,'193.109.220.0/24','Cloud Services (ASN-C4LND-45). '); //76e
$ax += cidrblock($address,'193.202.106.0/24','Cloud Services (ASN-C4LND-46). '); //76e
$ax += cidrblock($address,'193.218.160.0/20','Cloud Services (ASN-C4LND-47). '); //76e
$ax += cidrblock($address,'194.9.28.0/23','Cloud Services (ASN-C4LND-48). '); //76e
$ax += cidrblock($address,'194.50.54.0/24','Cloud Services (ASN-C4LND-49). '); //76e
$ax += cidrblock($address,'195.162.96.0/22','Cloud Services (ASN-C4LND-50). '); //76e
$ax += cidrblock($address,'195.189.12.0/22','Cloud Services (ASN-C4LND-51). '); //76e
$ax += cidrblock($address,'195.226.201.0/24','Cloud Services (ASN-C4LND-52). '); //76e

// SINGLEHOP-INC - SingleHop HE Rank 72 5/17/2014
// AS32475 updated 08/16/15

$ax += cidrblock($address,'8.6.74.0/23','Singlehop Network (ASN-32475-01). ');
$ax += cidrblock($address,'8.6.76.0/24','Singlehop Network (ASN-32475-02). ');
$ax += cidrblock($address,'23.91.112.0/21','Singlehop Network (ASN-32475-03). ');
$ax += cidrblock($address,'37.60.224.0/19','Singlehop Network (ASN-32475-04). ');
$ax += cidrblock($address,'63.208.142.0/24','Singlehop Network (ASN-32475-05). ');
$ax += cidrblock($address,'63.211.221.0/24','Singlehop Network (ASN-32475-06). ');
$ax += cidrblock($address,'64.46.96.0/19','Singlehop Network (ASN-32475-07). ');
$ax += cidrblock($address,'64.57.135.0/24','Singlehop Network (ASN-32475-08). ');
$ax += cidrblock($address,'65.60.0.0/18','Singlehop Network (ASN-32475-09). ');
$ax += cidrblock($address,'66.103.16.0/20','Singlehop Network (ASN-32475-10). ');
$ax += cidrblock($address,'66.225.203.128/25','Singlehop Network (ASN-32475-11). ');
$ax += cidrblock($address,'66.225.204.128/25','Singlehop Network (ASN-32475-12). ');
$ax += cidrblock($address,'66.225.233.0/25','Singlehop Network (ASN-32475-13). ');
$ax += cidrblock($address,'66.225.239.0/24','Singlehop Network (ASN-32475-14). ');
$ax += cidrblock($address,'66.225.254.0/23','Singlehop Network (ASN-32475-15). ');
$ax += cidrblock($address,'67.212.160.0/19','Singlehop Network (ASN-32475-16). ');
$ax += cidrblock($address,'68.168.32.0/19','Singlehop Network (ASN-32475-17). ');
$ax += cidrblock($address,'69.60.0.0/19','Singlehop Network (ASN-32475-18). ');
$ax += cidrblock($address,'69.87.240.0/20','Singlehop Network (ASN-32475-19). ');
$ax += cidrblock($address,'69.175.0.0/17','Singlehop Network (ASN-32475-20). ');
$ax += cidrblock($address,'74.113.46.0/24','Singlehop Network (ASN-32475-21). ');
$ax += cidrblock($address,'96.127.128.0/18','Singlehop Network (ASN-32475-22). ');
$ax += cidrblock($address,'99.198.96.0/19','Singlehop Network (ASN-32475-23). ');
$ax += cidrblock($address,'103.26.204.0/23','Singlehop Network (ASN-32475-24). ');
$ax += cidrblock($address,'103.26.207.0/24','Singlehop Network (ASN-32475-25). ');
$ax += cidrblock($address,'103.250.80.0/22','Singlehop Network (ASN-32475-26). ');
$ax += cidrblock($address,'104.171.12.0/24','Singlehop Network (ASN-32475-27). ');
$ax += cidrblock($address,'104.193.176.0/22','Singlehop Network (ASN-32475-28). ');
$ax += cidrblock($address,'104.193.180.0/23','Singlehop Network (ASN-32475-29). ');
$ax += cidrblock($address,'104.200.153.0/24','Singlehop Network (ASN-32475-30). ');
$ax += cidrblock($address,'104.200.155.0/24','Singlehop Network (ASN-32475-31). ');
$ax += cidrblock($address,'104.219.72.0/22','Singlehop Network (ASN-32475-32). ');
$ax += cidrblock($address,'104.245.88.0/22','Singlehop Network (ASN-32475-33). ');
$ax += cidrblock($address,'107.6.128.0/18','Singlehop Network (ASN-32475-34). ');
$ax += cidrblock($address,'108.61.103.0/24','Singlehop Network (ASN-32475-35). ');
$ax += cidrblock($address,'108.61.119.0/24','Singlehop Network (ASN-32475-36). ');
$ax += cidrblock($address,'108.61.223.0/24','Singlehop Network (ASN-32475-37). ');
$ax += cidrblock($address,'108.163.192.0/18','Singlehop Network (ASN-32475-38). ');
$ax += cidrblock($address,'108.178.0.0/18','Singlehop Network (ASN-32475-39). ');
$ax += cidrblock($address,'109.73.224.0/20','Singlehop Network (ASN-32475-40). ');
$ax += cidrblock($address,'109.199.96.0/19','Singlehop Network (ASN-32475-41). ');
$ax += cidrblock($address,'147.75.129.0/24','Singlehop Network (ASN-32475-42). ');
$ax += cidrblock($address,'162.244.165.0/24','Singlehop Network (ASN-32475-43). ');
$ax += cidrblock($address,'162.244.166.0/24','Singlehop Network (ASN-32475-44). ');
$ax += cidrblock($address,'162.251.140.0/24','Singlehop Network (ASN-32475-45). ');
$ax += cidrblock($address,'162.253.224.0/22','Singlehop Network (ASN-32475-46). ');
$ax += cidrblock($address,'167.114.0.0/16','Singlehop Network (ASN-32475-47). ');
$ax += cidrblock($address,'173.236.0.0/17','Singlehop Network (ASN-32475-48). ');
$ax += cidrblock($address,'179.48.192.0/20','Singlehop Network (ASN-32475-49). ');
$ax += cidrblock($address,'179.63.0.0/18','Singlehop Network (ASN-32475-50). ');
$ax += cidrblock($address,'181.224.32.0/19','Singlehop Network (ASN-32475-51). ');
$ax += cidrblock($address,'181.224.128.0/19','Singlehop Network (ASN-32475-52). ');
$ax += cidrblock($address,'184.154.0.0/16','Singlehop Network (ASN-32475-53). ');
$ax += cidrblock($address,'185.21.132.0/22','Singlehop Network (ASN-32475-54). ');
$ax += cidrblock($address,'185.56.84.0/22','Singlehop Network (ASN-32475-55). ');
$ax += cidrblock($address,'185.62.236.0/22','Singlehop Network (ASN-32475-56). ');
$ax += cidrblock($address,'192.0.72.0/21','Singlehop Network (ASN-32475-57). ');
$ax += cidrblock($address,'192.253.250.0/23','Singlehop Network (ASN-32475-58). ');
$ax += cidrblock($address,'192.253.252.0/24','Singlehop Network (ASN-32475-59). ');
$ax += cidrblock($address,'198.20.64.0/18','Singlehop Network (ASN-32475-60). ');
$ax += cidrblock($address,'198.91.80.0/20','Singlehop Network (ASN-32475-61). ');
$ax += cidrblock($address,'198.143.128.0/18','Singlehop Network (ASN-32475-62). ');
$ax += cidrblock($address,'198.181.116.0/22','Singlehop Network (ASN-32475-63). ');
$ax += cidrblock($address,'205.234.147.0/24','Singlehop Network (ASN-32475-64). ');
$ax += cidrblock($address,'205.234.148.0/24','Singlehop Network (ASN-32475-65). ');
$ax += cidrblock($address,'205.234.190.0/24','Singlehop Network (ASN-32475-66). ');
$ax += cidrblock($address,'205.234.193.0/24','Singlehop Network (ASN-32475-67). ');
$ax += cidrblock($address,'205.234.196.0/24','Singlehop Network (ASN-32475-68). ');
$ax += cidrblock($address,'205.234.202.0/24','Singlehop Network (ASN-32475-69). ');
$ax += cidrblock($address,'205.234.228.0/24','Singlehop Network (ASN-32475-70). ');
$ax += cidrblock($address,'205.234.239.0/24','Singlehop Network (ASN-32475-71). ');
$ax += cidrblock($address,'205.234.242.0/24','Singlehop Network (ASN-32475-72). ');
$ax += cidrblock($address,'205.234.251.0/24','Singlehop Network (ASN-32475-73). ');
$ax += cidrblock($address,'206.221.96.0/20','Singlehop Network (ASN-32475-74). ');
$ax += cidrblock($address,'209.131.112.0/20','Singlehop Network (ASN-32475-75). ');
$ax += cidrblock($address,'209.247.83.0/24','Singlehop Network (ASN-32475-76). ');
$ax += cidrblock($address,'216.104.32.0/20','Singlehop Network (ASN-32475-77). ');
$ax += cidrblock($address,'216.105.168.0/24','Singlehop Network (ASN-32475-78). ');
$ax += cidrblock($address,'216.151.166.0/24','Singlehop Network (ASN-32475-79). ');
$ax += cidrblock($address,'216.246.11.0/24','Singlehop Network (ASN-32475-80). ');
$ax += cidrblock($address,'216.246.22.0/24','Singlehop Network (ASN-32475-81). ');
$ax += cidrblock($address,'216.246.27.0/24','Singlehop Network (ASN-32475-82). ');
$ax += cidrblock($address,'216.246.32.0/24','Singlehop Network (ASN-32475-83). ');
$ax += cidrblock($address,'216.246.42.0/24','Singlehop Network (ASN-32475-84). ');
$ax += cidrblock($address,'216.246.48.0/24','Singlehop Network (ASN-32475-85). ');
$ax += cidrblock($address,'216.246.58.0/24','Singlehop Network (ASN-32475-86). ');
$ax += cidrblock($address,'216.246.60.0/22','Singlehop Network (ASN-32475-87). ');

// Domain Tools / Flektor
// AS17318

$ax += cidrblock($address,'64.124.237.0/24','Domain tools (ASN-17318-0). '); //76f
$ax += cidrblock($address,'64.125.155.0/24','Domain tools (ASN-17318-1). '); //76f
$ax += cidrblock($address,'64.125.156.0/23','Domain tools (ASN-17318-2). '); //76f
$ax += cidrblock($address,'66.249.16.0/23','Domain tools (ASN-17318-3). '); //76f
$ax += cidrblock($address,'199.30.228.0/22','Domain tools (ASN-17318-4). '); //76f
$ax += cidrblock($address,'208.51.144.0/22','Domain tools (ASN-17318-5). '); //76f

// megatypers.com Human Captcha Crackers Related
// AS29550 and AS8669

$ax += cidrblock($address,'31.170.120.0/21','AS29550 or AS8669 (ASN-MEGATYPERS-0). '); //76f
$ax += cidrblock($address,'31.193.128.0/20','AS29550 or AS8669 (ASN-MEGATYPERS-1). '); //76f
$ax += cidrblock($address,'37.75.234.0/24','AS29550 or AS8669 (ASN-MEGATYPERS-2). '); //76f
$ax += cidrblock($address,'46.249.208.0/20','AS29550 or AS8669 (ASN-MEGATYPERS-3). '); //76f
$ax += cidrblock($address,'78.143.252.0/24','AS29550 or AS8669 (ASN-MEGATYPERS-4). '); //76f
$ax += cidrblock($address,'85.234.128.0/19','AS29550 or AS8669 (ASN-MEGATYPERS-5). '); //76f
$ax += cidrblock($address,'91.103.216.0/21','AS29550 or AS8669 (ASN-MEGATYPERS-6). '); //76f
$ax += cidrblock($address,'91.186.0.0/19','AS29550 or AS8669 (ASN-MEGATYPERS-7). '); //76f
$ax += cidrblock($address,'91.198.3.0/24','AS29550 or AS8669 (ASN-MEGATYPERS-8). '); //76f
$ax += cidrblock($address,'92.48.64.0/18','AS29550 or AS8669 (ASN-MEGATYPERS-9). '); //76f
$ax += cidrblock($address,'94.76.192.0/18','AS29550 or AS8669 (ASN-MEGATYPERS-10). '); //76f
$ax += cidrblock($address,'109.75.168.0/21','AS29550 or AS8669 (ASN-MEGATYPERS-11). '); //76f
$ax += cidrblock($address,'109.203.96.0/19','AS29550 or AS8669 (ASN-MEGATYPERS-12). '); //76f
$ax += cidrblock($address,'115.124.105.0/24','AS29550 or AS8669 (ASN-MEGATYPERS-13). '); //76f
$ax += cidrblock($address,'115.124.110.0/23','AS29550 or AS8669 (ASN-MEGATYPERS-14). '); //76f
$ax += cidrblock($address,'115.124.116.0/23','AS29550 or AS8669 (ASN-MEGATYPERS-15). '); //76f
$ax += cidrblock($address,'151.236.32.0/19','AS29550 or AS8669 (ASN-MEGATYPERS-16). '); //76f
$ax += cidrblock($address,'158.255.40.0/21','AS29550 or AS8669 (ASN-MEGATYPERS-17). '); //76f
$ax += cidrblock($address,'185.10.200.0/22','AS29550 or AS8669 (ASN-MEGATYPERS-18). '); //76f
$ax += cidrblock($address,'185.17.252.0/22','AS29550 or AS8669 (ASN-MEGATYPERS-19). '); //76f
$ax += cidrblock($address,'185.26.148.0/24','AS29550 or AS8669 (ASN-MEGATYPERS-20). '); //76f
$ax += cidrblock($address,'185.28.90.0/24','AS29550 or AS8669 (ASN-MEGATYPERS-21). '); //76f
$ax += cidrblock($address,'194.150.194.0/24','AS29550 or AS8669 (ASN-MEGATYPERS-22). '); //76f
$ax += cidrblock($address,'194.153.218.0/24','AS29550 or AS8669 (ASN-MEGATYPERS-23). '); //76f
$ax += cidrblock($address,'195.206.160.0/19','AS29550 or AS8669 (ASN-MEGATYPERS-24). '); //76f
$ax += cidrblock($address,'212.9.192.0/22','AS29550 or AS8669 (ASN-MEGATYPERS-25). '); //76f
$ax += cidrblock($address,'212.33.222.0/23','AS29550 or AS8669 (ASN-MEGATYPERS-26). '); //76f
$ax += cidrblock($address,'213.175.192.0/19','AS29550 or AS8669 (ASN-MEGATYPERS-27). '); //76f
$ax += cidrblock($address,'213.229.64.0/18','AS29550 or AS8669 (ASN-MEGATYPERS-28). '); //76f
$ax += cidrblock($address,'217.112.80.0/20','AS29550 or AS8669 (ASN-MEGATYPERS-29). '); //76f

// Private Layer INC
// AS51852

$ax += cidrblock($address,'31.7.56.0/21','Private Layer INC (ASN-51852-0). '); //76f
$ax += cidrblock($address,'31.44.189.0/24','Private Layer INC (ASN-51852-1). '); //76f
$ax += cidrblock($address,'46.19.136.0/21','Private Layer INC (ASN-51852-2). '); //76f
$ax += cidrblock($address,'81.17.16.0/20','Private Layer INC (ASN-51852-3). '); //76f
$ax += cidrblock($address,'141.255.160.0/21','Private Layer INC (ASN-51852-4). '); //76f
$ax += cidrblock($address,'179.43.128.0/18','Private Layer INC (ASN-51852-5). '); //76f
$ax += cidrblock($address,'185.12.44.0/22','Private Layer INC (ASN-51852-6). '); //76f

// PSYCHZ.NET
// AS40676 updated 8/7/15

$ax += cidrblock($address,'23.91.0.0/19','psychz.net, not authorized to access this site (ASN-AS40676-001). ');
$ax += cidrblock($address,'23.226.135.0/24','psychz.net, not authorized to access this site (ASN-AS40676-002). ');
$ax += cidrblock($address,'23.228.192.0/18','psychz.net, not authorized to access this site (ASN-AS40676-003). ');
$ax += cidrblock($address,'23.238.128.0/17','psychz.net, not authorized to access this site (ASN-AS40676-004). ');
$ax += cidrblock($address,'23.251.32.0/19','psychz.net, not authorized to access this site (ASN-AS40676-005). ');
$ax += cidrblock($address,'43.224.154.0/23','psychz.net, not authorized to access this site (ASN-AS40676-006). ');
$ax += cidrblock($address,'43.250.72.0/22','psychz.net, not authorized to access this site (ASN-AS40676-007). ');
$ax += cidrblock($address,'45.34.0.0/15','psychz.net, not authorized to access this site (ASN-AS40676-008). ');
$ax += cidrblock($address,'45.58.61.0/24','psychz.net, not authorized to access this site (ASN-AS40676-009). ');
$ax += cidrblock($address,'45.74.1.0/24','psychz.net, not authorized to access this site (ASN-AS40676-010). ');
$ax += cidrblock($address,'45.74.2.0/23','psychz.net, not authorized to access this site (ASN-AS40676-011). ');
$ax += cidrblock($address,'45.74.4.0/22','psychz.net, not authorized to access this site (ASN-AS40676-012). ');
$ax += cidrblock($address,'45.74.8.0/21','psychz.net, not authorized to access this site (ASN-AS40676-013). ');
$ax += cidrblock($address,'45.74.16.0/24','psychz.net, not authorized to access this site (ASN-AS40676-014). ');
$ax += cidrblock($address,'45.113.80.0/24','psychz.net, not authorized to access this site (ASN-AS40676-015). ');
$ax += cidrblock($address,'49.246.226.0/23','psychz.net, not authorized to access this site (ASN-AS40676-016). ');
$ax += cidrblock($address,'49.246.234.0/23','psychz.net, not authorized to access this site (ASN-AS40676-017). ');
$ax += cidrblock($address,'66.11.119.0/24','psychz.net, not authorized to access this site (ASN-AS40676-018). ');
$ax += cidrblock($address,'66.23.198.0/23','psychz.net, not authorized to access this site (ASN-AS40676-019). ');
$ax += cidrblock($address,'66.23.200.0/21','psychz.net, not authorized to access this site (ASN-AS40676-020). ');
$ax += cidrblock($address,'69.165.64.0/22','psychz.net, not authorized to access this site (ASN-AS40676-021). ');
$ax += cidrblock($address,'69.165.72.0/21','psychz.net, not authorized to access this site (ASN-AS40676-022). ');
$ax += cidrblock($address,'74.117.56.0/21','psychz.net, not authorized to access this site (ASN-AS40676-023). ');
$ax += cidrblock($address,'104.128.112.0/20','psychz.net, not authorized to access this site (ASN-AS40676-024). ');
$ax += cidrblock($address,'104.128.235.0/24','psychz.net, not authorized to access this site (ASN-AS40676-025). ');
$ax += cidrblock($address,'104.143.32.0/22','psychz.net, not authorized to access this site (ASN-AS40676-026). ');
$ax += cidrblock($address,'104.143.41.0/24','psychz.net, not authorized to access this site (ASN-AS40676-027). ');
$ax += cidrblock($address,'104.143.42.0/23','psychz.net, not authorized to access this site (ASN-AS40676-028). ');
$ax += cidrblock($address,'104.143.44.0/22','psychz.net, not authorized to access this site (ASN-AS40676-029). ');
$ax += cidrblock($address,'104.143.128.0/19','psychz.net, not authorized to access this site (ASN-AS40676-030). ');
$ax += cidrblock($address,'104.149.0.0/16','psychz.net, not authorized to access this site (ASN-AS40676-031). ');
$ax += cidrblock($address,'104.194.207.0/24','psychz.net, not authorized to access this site (ASN-AS40676-032). ');
$ax += cidrblock($address,'104.216.0.0/15','psychz.net, not authorized to access this site (ASN-AS40676-033). ');
$ax += cidrblock($address,'104.218.160.0/21','psychz.net, not authorized to access this site (ASN-AS40676-034). ');
$ax += cidrblock($address,'104.244.152.0/24','psychz.net, not authorized to access this site (ASN-AS40676-035). ');
$ax += cidrblock($address,'104.247.216.0/22','psychz.net, not authorized to access this site (ASN-AS40676-036). ');
$ax += cidrblock($address,'104.250.165.0/24','psychz.net, not authorized to access this site (ASN-AS40676-037). ');
$ax += cidrblock($address,'104.250.166.0/23','psychz.net, not authorized to access this site (ASN-AS40676-038). ');
$ax += cidrblock($address,'104.250.168.0/22','psychz.net, not authorized to access this site (ASN-AS40676-039). ');
$ax += cidrblock($address,'104.250.172.0/24','psychz.net, not authorized to access this site (ASN-AS40676-040). ');
$ax += cidrblock($address,'104.250.181.0/24','psychz.net, not authorized to access this site (ASN-AS40676-041). ');
$ax += cidrblock($address,'104.250.184.0/24','psychz.net, not authorized to access this site (ASN-AS40676-042). ');
$ax += cidrblock($address,'104.250.186.0/23','psychz.net, not authorized to access this site (ASN-AS40676-043). ');
$ax += cidrblock($address,'104.250.189.0/24','psychz.net, not authorized to access this site (ASN-AS40676-044). ');
$ax += cidrblock($address,'104.250.190.0/23','psychz.net, not authorized to access this site (ASN-AS40676-045). ');
$ax += cidrblock($address,'104.254.62.0/24','psychz.net, not authorized to access this site (ASN-AS40676-046). ');
$ax += cidrblock($address,'104.254.112.0/21','psychz.net, not authorized to access this site (ASN-AS40676-047). ');
$ax += cidrblock($address,'104.254.188.0/22','psychz.net, not authorized to access this site (ASN-AS40676-048). ');
$ax += cidrblock($address,'107.150.96.0/19','psychz.net, not authorized to access this site (ASN-AS40676-049). ');
$ax += cidrblock($address,'107.151.192.0/18','psychz.net, not authorized to access this site (ASN-AS40676-050). ');
$ax += cidrblock($address,'107.160.0.0/16','psychz.net, not authorized to access this site (ASN-AS40676-051). ');
$ax += cidrblock($address,'107.178.144.0/20','psychz.net, not authorized to access this site (ASN-AS40676-052). ');
$ax += cidrblock($address,'107.178.160.0/19','psychz.net, not authorized to access this site (ASN-AS40676-053). ');
$ax += cidrblock($address,'107.190.226.0/23','psychz.net, not authorized to access this site (ASN-AS40676-054). ');
$ax += cidrblock($address,'107.190.228.0/22','psychz.net, not authorized to access this site (ASN-AS40676-055). ');
$ax += cidrblock($address,'108.171.240.0/20','psychz.net, not authorized to access this site (ASN-AS40676-056). ');
$ax += cidrblock($address,'123.108.128.0/23','psychz.net, not authorized to access this site (ASN-AS40676-057). ');
$ax += cidrblock($address,'142.147.88.0/23','psychz.net, not authorized to access this site (ASN-AS40676-058). ');
$ax += cidrblock($address,'146.148.128.0/19','psychz.net, not authorized to access this site (ASN-AS40676-059). ');
$ax += cidrblock($address,'146.148.176.0/20','psychz.net, not authorized to access this site (ASN-AS40676-060). ');
$ax += cidrblock($address,'146.148.192.0/18','psychz.net, not authorized to access this site (ASN-AS40676-061). ');
$ax += cidrblock($address,'150.242.36.0/22','psychz.net, not authorized to access this site (ASN-AS40676-062). ');
$ax += cidrblock($address,'162.209.244.0/22','psychz.net, not authorized to access this site (ASN-AS40676-063). ');
$ax += cidrblock($address,'162.253.209.0/24','psychz.net, not authorized to access this site (ASN-AS40676-064). ');
$ax += cidrblock($address,'162.253.210.0/23','psychz.net, not authorized to access this site (ASN-AS40676-065). ');
$ax += cidrblock($address,'162.253.212.0/22','psychz.net, not authorized to access this site (ASN-AS40676-066). ');
$ax += cidrblock($address,'172.93.121.0/24','psychz.net, not authorized to access this site (ASN-AS40676-067). ');
$ax += cidrblock($address,'172.94.23.0/24','psychz.net, not authorized to access this site (ASN-AS40676-068). ');
$ax += cidrblock($address,'172.94.24.0/21','psychz.net, not authorized to access this site (ASN-AS40676-069). ');
$ax += cidrblock($address,'172.94.32.0/22','psychz.net, not authorized to access this site (ASN-AS40676-070). ');
$ax += cidrblock($address,'172.94.36.0/23','psychz.net, not authorized to access this site (ASN-AS40676-071). ');
$ax += cidrblock($address,'172.94.38.0/24','psychz.net, not authorized to access this site (ASN-AS40676-072). ');
$ax += cidrblock($address,'172.106.0.0/15','psychz.net, not authorized to access this site (ASN-AS40676-073). ');
$ax += cidrblock($address,'173.224.208.0/20','psychz.net, not authorized to access this site (ASN-AS40676-074). ');
$ax += cidrblock($address,'183.182.10.0/23','psychz.net, not authorized to access this site (ASN-AS40676-075). ');
$ax += cidrblock($address,'183.182.18.0/23','psychz.net, not authorized to access this site (ASN-AS40676-076). ');
$ax += cidrblock($address,'183.182.20.0/23','psychz.net, not authorized to access this site (ASN-AS40676-077). ');
$ax += cidrblock($address,'183.182.22.0/24','psychz.net, not authorized to access this site (ASN-AS40676-078). ');
$ax += cidrblock($address,'192.126.124.0/23','psychz.net, not authorized to access this site (ASN-AS40676-079). ');
$ax += cidrblock($address,'192.184.32.0/19','psychz.net, not authorized to access this site (ASN-AS40676-080). ');
$ax += cidrblock($address,'192.210.48.0/20','psychz.net, not authorized to access this site (ASN-AS40676-081). ');
$ax += cidrblock($address,'198.13.96.0/19','psychz.net, not authorized to access this site (ASN-AS40676-082). ');
$ax += cidrblock($address,'198.44.160.0/19','psychz.net, not authorized to access this site (ASN-AS40676-083). ');
$ax += cidrblock($address,'199.15.112.0/21','psychz.net, not authorized to access this site (ASN-AS40676-084). ');
$ax += cidrblock($address,'199.71.212.0/22','psychz.net, not authorized to access this site (ASN-AS40676-085). ');
$ax += cidrblock($address,'199.83.88.0/21','psychz.net, not authorized to access this site (ASN-AS40676-086). ');
$ax += cidrblock($address,'199.119.200.0/21','psychz.net, not authorized to access this site (ASN-AS40676-087). ');
$ax += cidrblock($address,'199.245.58.0/24','psychz.net, not authorized to access this site (ASN-AS40676-088). ');
$ax += cidrblock($address,'199.245.100.0/23','psychz.net, not authorized to access this site (ASN-AS40676-089). ');
$ax += cidrblock($address,'203.90.24.0/22','psychz.net, not authorized to access this site (ASN-AS40676-090). ');
$ax += cidrblock($address,'206.123.130.0/23','psychz.net, not authorized to access this site (ASN-AS40676-091). ');
$ax += cidrblock($address,'206.123.132.0/23','psychz.net, not authorized to access this site (ASN-AS40676-092). ');
$ax += cidrblock($address,'206.123.140.0/24','psychz.net, not authorized to access this site (ASN-AS40676-093). ');
$ax += cidrblock($address,'208.81.167.0/24','psychz.net, not authorized to access this site (ASN-AS40676-094). ');
$ax += cidrblock($address,'208.87.240.0/22','psychz.net, not authorized to access this site (ASN-AS40676-095). ');
$ax += cidrblock($address,'211.155.64.0/23','psychz.net, not authorized to access this site (ASN-AS40676-096). ');
$ax += cidrblock($address,'216.24.192.0/20','psychz.net, not authorized to access this site (ASN-AS40676-097). ');
$ax += cidrblock($address,'216.99.144.0/20','psychz.net, not authorized to access this site (ASN-AS40676-098). ');
$ax += cidrblock($address,'216.126.224.0/22','psychz.net, not authorized to access this site (ASN-AS40676-099). ');
$ax += cidrblock($address,'218.246.140.0/22','psychz.net, not authorized to access this site (ASN-AS40676-100). ');

// ALNET-AS PP SKS-Lugan
// AS35804

$ax += cidrblock($address,'91.200.12.0/22','ALNET SKS-Lugan (ASN-ALNET-0). '); //77b
$ax += cidrblock($address,'185.37.192.0/22','ALNET SKS-Lugan (ASN-ALNET-1). '); //77b
$ax += cidrblock($address,'193.110.144.0/24','ALNET SKS-Lugan (ASN-ALNET-2). '); //77b
$ax += cidrblock($address,'193.110.168.0/23','ALNET SKS-Lugan (ASN-ALNET-3). '); //77b
$ax += cidrblock($address,'194.79.60.0/22','ALNET SKS-Lugan (ASN-ALNET-4). '); //77b
$ax += cidrblock($address,'194.145.220.0/23','ALNET SKS-Lugan (ASN-ALNET-5). '); //77b
$ax += cidrblock($address,'213.111.128.0/18','ALNET SKS-Lugan (ASN-ALNET-6). '); //77b

// MTS-INDIA-IN
// Allows spammer botnets to run wild on it's 116.202.0.0/15 block, possibly more.
// AS131222

$ax += cidrblock($address,'103.18.64.0/22','MTS-INDIA (ASN-131222-0). '); //77f
$ax += cidrblock($address,'116.202.0.0/15','MTS-INDIA (ASN-131222-1). '); //77f
$ax += cidrblock($address,'163.47.12.0/22','MTS-INDIA (ASN-131222-2). '); //77f
$ax += cidrblock($address,'180.149.32.0/21','MTS-INDIA (ASN-131222-3). '); //77f
$ax += cidrblock($address,'180.149.40.0/22','MTS-INDIA (ASN-131222-4). '); //77f
$ax += cidrblock($address,'180.149.44.0/23','MTS-INDIA (ASN-131222-5). '); //77f
$ax += cidrblock($address,'180.215.0.0/16','MTS-INDIA (ASN-131222-6). '); //77f

// ???
// Attempted to DoS SbS
// AS33387

$ax += cidrblock($address,'63.141.224.0/19','No-Name AS (ASN-33387-0). '); //77g
$ax += cidrblock($address,'69.197.185.0/24','No-Name AS (ASN-33387-1). '); //77g
$ax += cidrblock($address,'74.91.16.0/20','No-Name AS (ASN-33387-2). '); //77g
$ax += cidrblock($address,'104.167.17.0/24','No-Name AS (ASN-33387-3). '); //77g
$ax += cidrblock($address,'104.167.18.0/24','No-Name AS (ASN-33387-4). '); //77g
$ax += cidrblock($address,'107.150.32.0/19','No-Name AS (ASN-33387-5). '); //77g
$ax += cidrblock($address,'142.54.160.0/19','No-Name AS (ASN-33387-6). '); //77g
$ax += cidrblock($address,'173.208.138.0/24','No-Name AS (ASN-33387-7). '); //77g
$ax += cidrblock($address,'173.208.214.0/23','No-Name AS (ASN-33387-8). '); //77g
$ax += cidrblock($address,'173.208.218.0/24','No-Name AS (ASN-33387-9). '); //77g
$ax += cidrblock($address,'173.208.225.0/24','No-Name AS (ASN-33387-10). '); //77g
$ax += cidrblock($address,'173.208.226.0/24','No-Name AS (ASN-33387-11). '); //77g
$ax += cidrblock($address,'173.208.228.0/24','No-Name AS (ASN-33387-12). '); //77g
$ax += cidrblock($address,'179.0.32.0/19','No-Name AS (ASN-33387-13). '); //77g
$ax += cidrblock($address,'190.113.32.0/19','No-Name AS (ASN-33387-14). '); //77g
$ax += cidrblock($address,'192.151.144.0/20','No-Name AS (ASN-33387-15). '); //77g
$ax += cidrblock($address,'192.187.96.0/19','No-Name AS (ASN-33387-16). '); //77g
$ax += cidrblock($address,'198.204.224.0/19','No-Name AS (ASN-33387-17). '); //77g
$ax += cidrblock($address,'199.168.96.0/21','No-Name AS (ASN-33387-18). '); //77g

// Versaweb
// Caught hosting multiple blackhat SEO sites on multiple servers, all involved in one campaign no less.
// AS36114

$ax += cidrblock($address,'64.212.144.0/21','Versaweb hosting. (ASN-36114-0). '); //77g
$ax += cidrblock($address,'72.46.128.0/19','Versaweb hosting. (ASN-36114-1). '); //77g
$ax += cidrblock($address,'76.164.192.0/19','Versaweb hosting. (ASN-36114-2). '); //77g
$ax += cidrblock($address,'76.164.224.0/20','Versaweb hosting. (ASN-36114-3). '); //77g
$ax += cidrblock($address,'104.36.224.0/21','Versaweb hosting. (ASN-36114-4). '); //77g
$ax += cidrblock($address,'104.143.0.0/20','Versaweb hosting. (ASN-36114-5). '); //77g
$ax += cidrblock($address,'104.194.0.0/19','Versaweb hosting. (ASN-36114-6). '); //77g
$ax += cidrblock($address,'104.238.192.0/18','Versaweb hosting. (ASN-36114-7). '); //77g
$ax += cidrblock($address,'162.216.176.0/22','Versaweb hosting. (ASN-36114-8). '); //77g
$ax += cidrblock($address,'162.220.247.0/24','Versaweb hosting. (ASN-36114-9). '); //77g
$ax += cidrblock($address,'162.222.128.0/21','Versaweb hosting. (ASN-36114-10). '); //77g
$ax += cidrblock($address,'162.255.180.0/22','Versaweb hosting. (ASN-36114-11). '); //77g
$ax += cidrblock($address,'208.64.24.0/21','Versaweb hosting. (ASN-36114-12). '); //77g
$ax += cidrblock($address,'208.66.72.0/21','Versaweb hosting. (ASN-36114-13). '); //77g

// Volume Drive
// Hosting Datawagon Spam
// AS27176 updated 08/20/15

$ax += cidrblock($address,'45.119.208.0/22','Volume Drive spamhost (ASN-27176-1). ');
$ax += cidrblock($address,'103.60.12.0/22','Volume Drive spamhost (ASN-27176-2). ');
$ax += cidrblock($address,'104.128.236.0/24','Volume Drive spamhost (ASN-27176-3). ');
$ax += cidrblock($address,'104.192.0.0/22','Volume Drive spamhost (ASN-27176-4). ');
$ax += cidrblock($address,'104.219.232.0/21','Volume Drive spamhost (ASN-27176-5). ');
$ax += cidrblock($address,'162.253.66.0/24','Volume Drive spamhost (ASN-27176-6). ');
$ax += cidrblock($address,'209.45.176.0/24','Volume Drive spamhost (ASN-27176-7). ');

// Worldstream
// AS49981

$ax += cidrblock($address,'37.247.118.0/24','Worldstream (ASN-49981-0). '); //77g
$ax += cidrblock($address,'46.166.128.0/23','Worldstream (ASN-49981-1). '); //77g
$ax += cidrblock($address,'91.212.229.0/24','Worldstream (ASN-49981-2). '); //77g
$ax += cidrblock($address,'91.226.31.0/24','Worldstream (ASN-49981-3). '); //77g
$ax += cidrblock($address,'91.227.154.0/23','Worldstream (ASN-49981-4). '); //77g
$ax += cidrblock($address,'91.229.23.0/24','Worldstream (ASN-49981-5). '); //77g
$ax += cidrblock($address,'91.232.105.0/24','Worldstream (ASN-49981-6). '); //77g
$ax += cidrblock($address,'93.170.13.0/24','Worldstream (ASN-49981-7). '); //77g
$ax += cidrblock($address,'93.170.77.0/24','Worldstream (ASN-49981-8). '); //77g
$ax += cidrblock($address,'93.190.136.0/21','Worldstream (ASN-49981-9). '); //77g
$ax += cidrblock($address,'103.252.221.0/24','Worldstream (ASN-49981-10). '); //77g
$ax += cidrblock($address,'109.236.80.0/20','Worldstream (ASN-49981-11). '); //77g
$ax += cidrblock($address,'176.61.129.0/24','Worldstream (ASN-49981-12). '); //77g
$ax += cidrblock($address,'185.28.38.0/24','Worldstream (ASN-49981-13). '); //77g
$ax += cidrblock($address,'185.45.194.0/23','Worldstream (ASN-49981-14). '); //77g
$ax += cidrblock($address,'191.101.243.0/24','Worldstream (ASN-49981-15). '); //77g
$ax += cidrblock($address,'192.71.151.0/24','Worldstream (ASN-49981-16). '); //77g
$ax += cidrblock($address,'193.30.245.0/24','Worldstream (ASN-49981-17). '); //77g
$ax += cidrblock($address,'193.200.164.0/24','Worldstream (ASN-49981-18). '); //77g
$ax += cidrblock($address,'195.128.184.0/23','Worldstream (ASN-49981-19). '); //77g
$ax += cidrblock($address,'198.105.117.0/24','Worldstream (ASN-49981-20). '); //77g
$ax += cidrblock($address,'198.177.124.0/24','Worldstream (ASN-49981-21). '); //77g
$ax += cidrblock($address,'217.23.0.0/20','Worldstream (ASN-49981-22). '); //77g

// ???
// AS 7162

$ax += cidrblock($address,'186.234.0.0/18','AS7162, attacked SbS (ASN-7162-0). '); //77g
$ax += cidrblock($address,'186.234.64.0/20','AS7162, attacked SbS (ASN-7162-1). '); //77g
$ax += cidrblock($address,'186.234.127.0/24','AS7162, attacked SbS (ASN-7162-2). '); //77g
$ax += cidrblock($address,'186.234.128.0/18','AS7162, attacked SbS (ASN-7162-3). '); //77g
$ax += cidrblock($address,'187.17.64.0/18','AS7162, attacked SbS (ASN-7162-4). '); //77g
$ax += cidrblock($address,'189.38.56.0/21','AS7162, attacked SbS (ASN-7162-5). '); //77g
$ax += cidrblock($address,'200.98.0.0/16','AS7162, attacked SbS (ASN-7162-6). '); //77g
$ax += cidrblock($address,'200.147.0.0/16','AS7162, attacked SbS (ASN-7162-7). '); //77g
$ax += cidrblock($address,'200.187.192.0/18','AS7162, attacked SbS (ASN-7162-8). '); //77g
$ax += cidrblock($address,'200.221.0.0/16','AS7162, attacked SbS (ASN-7162-9). '); //77g

// Choopa (Constant source of attacks, and assisted in DDoS of SbS)
// AS20473

$ax += cidrblock($address,'4.79.145.0/24','Choopa Networks (ASN-20473-0). '); //77g
$ax += cidrblock($address,'5.187.8.0/21','Choopa Networks (ASN-20473-1). '); //77g
$ax += cidrblock($address,'8.2.0.0/24','Choopa Networks (ASN-20473-2). '); //77g
$ax += cidrblock($address,'8.2.120.0/23','Choopa Networks (ASN-20473-3). '); //77g
$ax += cidrblock($address,'8.2.122.0/24','Choopa Networks (ASN-20473-4). '); //77g
$ax += cidrblock($address,'8.3.5.0/24','Choopa Networks (ASN-20473-5). '); //77g
$ax += cidrblock($address,'8.3.6.0/23','Choopa Networks (ASN-20473-6). '); //77g
$ax += cidrblock($address,'8.3.28.0/23','Choopa Networks (ASN-20473-7). '); //77g
$ax += cidrblock($address,'8.6.2.0/23','Choopa Networks (ASN-20473-8). '); //77g
$ax += cidrblock($address,'8.6.8.0/23','Choopa Networks (ASN-20473-9). '); //77g
$ax += cidrblock($address,'8.6.15.0/24','Choopa Networks (ASN-20473-10). '); //77g
$ax += cidrblock($address,'8.6.74.0/23','Choopa Networks (ASN-20473-11). '); //77g
$ax += cidrblock($address,'8.6.76.0/23','Choopa Networks (ASN-20473-12). '); //77g
$ax += cidrblock($address,'8.6.193.0/24','Choopa Networks (ASN-20473-13). '); //77g
$ax += cidrblock($address,'8.7.233.0/24','Choopa Networks (ASN-20473-14). '); //77g
$ax += cidrblock($address,'8.9.3.0/24','Choopa Networks (ASN-20473-15). '); //77g
$ax += cidrblock($address,'8.9.4.0/23','Choopa Networks (ASN-20473-16). '); //77g
$ax += cidrblock($address,'8.9.6.0/24','Choopa Networks (ASN-20473-17). '); //77g
$ax += cidrblock($address,'8.9.8.0/23','Choopa Networks (ASN-20473-18). '); //77g
$ax += cidrblock($address,'8.9.11.0/24','Choopa Networks (ASN-20473-19). '); //77g
$ax += cidrblock($address,'8.9.15.0/24','Choopa Networks (ASN-20473-20). '); //77g
$ax += cidrblock($address,'8.9.16.0/23','Choopa Networks (ASN-20473-21). '); //77g
$ax += cidrblock($address,'8.9.30.0/23','Choopa Networks (ASN-20473-22). '); //77g
$ax += cidrblock($address,'8.9.36.0/23','Choopa Networks (ASN-20473-23). '); //77g
$ax += cidrblock($address,'8.12.16.0/21','Choopa Networks (ASN-20473-24). '); //77g
$ax += cidrblock($address,'8.12.64.0/23','Choopa Networks (ASN-20473-25). '); //77g
$ax += cidrblock($address,'8.12.68.0/22','Choopa Networks (ASN-20473-26). '); //77g
$ax += cidrblock($address,'8.18.92.0/23','Choopa Networks (ASN-20473-27). '); //77g
$ax += cidrblock($address,'23.92.48.0/20','Choopa Networks (ASN-20473-28). '); //77g
$ax += cidrblock($address,'23.227.128.0/19','Choopa Networks (ASN-20473-29). '); //77g
$ax += cidrblock($address,'23.249.226.0/24','Choopa Networks (ASN-20473-30). '); //77g
$ax += cidrblock($address,'37.75.128.0/21','Choopa Networks (ASN-20473-31). '); //77g
$ax += cidrblock($address,'43.224.32.0/22','Choopa Networks (ASN-20473-32). '); //77g
$ax += cidrblock($address,'45.63.0.0/17','Choopa Networks (ASN-20473-33). '); //77g
$ax += cidrblock($address,'62.67.42.0/24','Choopa Networks (ASN-20473-34). '); //77g
$ax += cidrblock($address,'63.208.142.0/24','Choopa Networks (ASN-20473-35). '); //77g
$ax += cidrblock($address,'63.209.32.0/22','Choopa Networks (ASN-20473-36). '); //77g
$ax += cidrblock($address,'63.209.36.0/23','Choopa Networks (ASN-20473-37). '); //77g
$ax += cidrblock($address,'63.209.148.0/24','Choopa Networks (ASN-20473-38). '); //77g
$ax += cidrblock($address,'63.210.145.0/24','Choopa Networks (ASN-20473-39). '); //77g
$ax += cidrblock($address,'63.210.148.0/23','Choopa Networks (ASN-20473-40). '); //77g
$ax += cidrblock($address,'63.211.105.0/24','Choopa Networks (ASN-20473-41). '); //77g
$ax += cidrblock($address,'63.211.110.0/23','Choopa Networks (ASN-20473-42). '); //77g
$ax += cidrblock($address,'63.211.221.0/24','Choopa Networks (ASN-20473-43). '); //77g
$ax += cidrblock($address,'63.215.74.0/24','Choopa Networks (ASN-20473-44). '); //77g
$ax += cidrblock($address,'64.154.38.0/24','Choopa Networks (ASN-20473-45). '); //77g
$ax += cidrblock($address,'64.156.14.0/24','Choopa Networks (ASN-20473-46). '); //77g
$ax += cidrblock($address,'64.237.32.0/19','Choopa Networks (ASN-20473-47). '); //77g
$ax += cidrblock($address,'66.55.128.0/19','Choopa Networks (ASN-20473-48). '); //77g
$ax += cidrblock($address,'67.43.224.0/20','Choopa Networks (ASN-20473-49). '); //77g
$ax += cidrblock($address,'67.215.0.0/20','Choopa Networks (ASN-20473-50). '); //77g
$ax += cidrblock($address,'67.220.176.0/20','Choopa Networks (ASN-20473-51). '); //77g
$ax += cidrblock($address,'68.71.63.0/24','Choopa Networks (ASN-20473-52). '); //77g
$ax += cidrblock($address,'68.232.160.0/19','Choopa Networks (ASN-20473-53). '); //77g
$ax += cidrblock($address,'72.26.196.0/24','Choopa Networks (ASN-20473-54). '); //77g
$ax += cidrblock($address,'74.63.54.0/24','Choopa Networks (ASN-20473-55). '); //77g
$ax += cidrblock($address,'74.115.168.0/24','Choopa Networks (ASN-20473-56). '); //77g
$ax += cidrblock($address,'89.167.134.0/24','Choopa Networks (ASN-20473-57). '); //77g
$ax += cidrblock($address,'91.217.135.0/24','Choopa Networks (ASN-20473-58). '); //77g
$ax += cidrblock($address,'103.43.72.0/22','Choopa Networks (ASN-20473-59). '); //77g
$ax += cidrblock($address,'104.156.224.0/19','Choopa Networks (ASN-20473-60). '); //77g
$ax += cidrblock($address,'104.168.74.0/23','Choopa Networks (ASN-20473-61). '); //77g
$ax += cidrblock($address,'104.207.128.0/19','Choopa Networks (ASN-20473-62). '); //77g
$ax += cidrblock($address,'104.238.128.0/18','Choopa Networks (ASN-20473-63). '); //77g
$ax += cidrblock($address,'104.243.32.0/20','Choopa Networks (ASN-20473-64). '); //77g
$ax += cidrblock($address,'104.250.96.0/22','Choopa Networks (ASN-20473-65). '); //77g
$ax += cidrblock($address,'104.251.85.0/24','Choopa Networks (ASN-20473-66). '); //77g
$ax += cidrblock($address,'104.251.91.0/24','Choopa Networks (ASN-20473-67). '); //77g
$ax += cidrblock($address,'107.151.0.0/18','Choopa Networks (ASN-20473-68). '); //77g
$ax += cidrblock($address,'107.161.174.0/24','Choopa Networks (ASN-20473-69). '); //77g
$ax += cidrblock($address,'107.181.69.0/24','Choopa Networks (ASN-20473-70). '); //77g
$ax += cidrblock($address,'107.181.148.0/22','Choopa Networks (ASN-20473-71). '); //77g
$ax += cidrblock($address,'107.191.32.0/19','Choopa Networks (ASN-20473-72). '); //77g
$ax += cidrblock($address,'108.61.0.0/16','Choopa Networks (ASN-20473-73). '); //77g
$ax += cidrblock($address,'108.174.61.0/24','Choopa Networks (ASN-20473-74). '); //77g
$ax += cidrblock($address,'108.175.160.0/20','Choopa Networks (ASN-20473-75). '); //77g
$ax += cidrblock($address,'110.232.116.0/22','Choopa Networks (ASN-20473-76). '); //77g
$ax += cidrblock($address,'131.221.45.0/24','Choopa Networks (ASN-20473-77). '); //77g
$ax += cidrblock($address,'146.20.36.0/22','Choopa Networks (ASN-20473-78). '); //77g
$ax += cidrblock($address,'146.20.40.0/21','Choopa Networks (ASN-20473-79). '); //77g
$ax += cidrblock($address,'162.216.224.0/22','Choopa Networks (ASN-20473-80). '); //77g
$ax += cidrblock($address,'162.217.132.0/22','Choopa Networks (ASN-20473-81). '); //77g
$ax += cidrblock($address,'162.217.251.0/24','Choopa Networks (ASN-20473-82). '); //77g
$ax += cidrblock($address,'162.218.232.0/21','Choopa Networks (ASN-20473-83). '); //77g
$ax += cidrblock($address,'162.220.216.0/22','Choopa Networks (ASN-20473-84). '); //77g
$ax += cidrblock($address,'167.160.64.0/19','Choopa Networks (ASN-20473-85). '); //77g
$ax += cidrblock($address,'167.160.190.0/23','Choopa Networks (ASN-20473-86). '); //77g
$ax += cidrblock($address,'172.245.0.0/16','Choopa Networks (ASN-20473-87). '); //77g
$ax += cidrblock($address,'173.199.0.0/17','Choopa Networks (ASN-20473-88). '); //77g
$ax += cidrblock($address,'185.35.78.0/24','Choopa Networks (ASN-20473-89). '); //77g
$ax += cidrblock($address,'192.3.24.0/23','Choopa Networks (ASN-20473-90). '); //77g
$ax += cidrblock($address,'192.3.164.0/23','Choopa Networks (ASN-20473-91). '); //77g
$ax += cidrblock($address,'192.119.8.0/21','Choopa Networks (ASN-20473-92). '); //77g
$ax += cidrblock($address,'192.253.248.0/23','Choopa Networks (ASN-20473-93). '); //77g
$ax += cidrblock($address,'193.106.32.0/22','Choopa Networks (ASN-20473-94). '); //77g
$ax += cidrblock($address,'195.122.134.0/23','Choopa Networks (ASN-20473-95). '); //77g
$ax += cidrblock($address,'198.12.72.0/22','Choopa Networks (ASN-20473-96). '); //77g
$ax += cidrblock($address,'198.98.48.0/20','Choopa Networks (ASN-20473-97). '); //77g
$ax += cidrblock($address,'198.147.24.0/21','Choopa Networks (ASN-20473-98). '); //77g
$ax += cidrblock($address,'198.176.44.0/22','Choopa Networks (ASN-20473-99). '); //77g
$ax += cidrblock($address,'199.48.176.0/21','Choopa Networks (ASN-20473-100). '); //77g
$ax += cidrblock($address,'199.188.100.0/23','Choopa Networks (ASN-20473-101). '); //77g
$ax += cidrblock($address,'199.188.102.0/24','Choopa Networks (ASN-20473-102). '); //77g
$ax += cidrblock($address,'199.195.248.0/21','Choopa Networks (ASN-20473-103). '); //77g
$ax += cidrblock($address,'203.170.24.0/24','Choopa Networks (ASN-20473-104). '); //77g
$ax += cidrblock($address,'204.15.232.0/22','Choopa Networks (ASN-20473-105). '); //77g
$ax += cidrblock($address,'205.234.247.0/24','Choopa Networks (ASN-20473-106). '); //77g
$ax += cidrblock($address,'205.234.250.0/24','Choopa Networks (ASN-20473-107). '); //77g
$ax += cidrblock($address,'206.125.164.0/22','Choopa Networks (ASN-20473-108). '); //77g
$ax += cidrblock($address,'206.217.128.0/23','Choopa Networks (ASN-20473-109). '); //77g
$ax += cidrblock($address,'206.221.176.0/20','Choopa Networks (ASN-20473-110). '); //77g
$ax += cidrblock($address,'208.80.38.0/24','Choopa Networks (ASN-20473-111). '); //77g
$ax += cidrblock($address,'208.82.120.0/22','Choopa Networks (ASN-20473-112). '); //77g
$ax += cidrblock($address,'208.122.48.0/23','Choopa Networks (ASN-20473-113). '); //77g
$ax += cidrblock($address,'208.122.52.0/24','Choopa Networks (ASN-20473-114). '); //77g
$ax += cidrblock($address,'208.122.57.0/24','Choopa Networks (ASN-20473-115). '); //77g
$ax += cidrblock($address,'208.167.224.0/19','Choopa Networks (ASN-20473-116). '); //77g
$ax += cidrblock($address,'209.205.192.0/19','Choopa Networks (ASN-20473-117). '); //77g
$ax += cidrblock($address,'209.222.0.0/19','Choopa Networks (ASN-20473-118). '); //77g
$ax += cidrblock($address,'209.246.142.0/23','Choopa Networks (ASN-20473-119). '); //77g
$ax += cidrblock($address,'209.246.170.0/24','Choopa Networks (ASN-20473-120). '); //77g
$ax += cidrblock($address,'209.247.83.0/24','Choopa Networks (ASN-20473-121). '); //77g
$ax += cidrblock($address,'212.187.208.0/23','Choopa Networks (ASN-20473-122). '); //77g
$ax += cidrblock($address,'212.187.246.0/23','Choopa Networks (ASN-20473-123). '); //77g
$ax += cidrblock($address,'213.19.130.0/23','Choopa Networks (ASN-20473-124). '); //77g
$ax += cidrblock($address,'213.19.136.0/23','Choopa Networks (ASN-20473-125). '); //77g
$ax += cidrblock($address,'213.244.180.0/24','Choopa Networks (ASN-20473-126). '); //77g
$ax += cidrblock($address,'213.244.191.0/24','Choopa Networks (ASN-20473-127). '); //77g
$ax += cidrblock($address,'216.32.200.0/21','Choopa Networks (ASN-20473-128). '); //77g
$ax += cidrblock($address,'216.32.208.0/22','Choopa Networks (ASN-20473-129). '); //77g
$ax += cidrblock($address,'216.155.128.0/19','Choopa Networks (ASN-20473-130). '); //77g
$ax += cidrblock($address,'217.163.10.0/23','Choopa Networks (ASN-20473-131). '); //77g
$ax += cidrblock($address,'217.163.22.0/23','Choopa Networks (ASN-20473-132). '); //77g
$ax += cidrblock($address,'217.163.24.0/21','Choopa Networks (ASN-20473-133). '); //77g

// *More, and smaller bad networks to avoid...

$ax += cidrblock($address,'70.39.128.0/17','packetexchange is a cloud service, not an access provider. '); //75a

$ax += cidrblock($address,'91.236.74.0/23','ELAN-AS Spamslingers (ELAN-AS). '); //75a

$ax += cidrblock($address,'173.0.0.0/20','ProXPN, anonymous proxy/vpn network (ProXPN). '); //75a

$ax += cidrblock($address,'23.90.192.0/18','Siftlogic (NET-SIFT-0). '); //77g
$ax += cidrblock($address,'192.119.48.0/20','Siftlogic (NET-SIFT-1). '); //77g
$ax += cidrblock($address,'192.196.192.0/20','Siftlogic (NET-SIFT-2). '); //77g

$ax += cidrblock($address,'202.46.32.0/19','ShenZhen Sunrise Technology Co, bot like activity. '); //74a fixed 74c

$ax += cidrblock($address,'67.198.128.0/20','Krypt Technologies. '); //72b
$ax += cidrblock($address,'98.126.0.0/16','Krypt Technologies. '); //72b

$ax += cidrblock($address,'31.170.16.0/21','Ad Technology SIA AS49191-1. '); //72d
$ax += cidrblock($address,'188.92.72.0/21','Ad Technology SIA AS49191-2. '); //72d

$ax += iprange($address,'195.216.160.0','195.216.191.255','a JUNIK. ');
$ax += iprange($address,'213.182.192.0','213.182.223.255','b JUNIK. ');

$ax += iprange($address,'87.245.192.0','87.245.255.255','RETN. ');

$ax += iprange($address,'64.116.161.0','64.116.161.255','a Eveloz. ');
$ax += iprange($address,'64.117.234.0','64.117.234.255','b Eveloz. ');
$ax += iprange($address,'190.122.160.0','190.122.175.255','c Eveloz. ');
$ax += iprange($address,'190.123.32.0','190.123.47.255','d Eveloz. ');
$ax += iprange($address,'200.63.40.0','200.63.47.255','e Eveloz. ');
$ax += iprange($address,'200.105.34.0','200.105.44.255','f Eveloz. ');
$ax += iprange($address,'200.115.128.0','200.115.159.255','g Eveloz. ');
$ax += iprange($address,'201.218.208.0','201.218.208.255','h Eveloz. ');

$ax += iprange($address,'66.186.0.0','66.186.31.255','a Alchemy Communications. ');
$ax += iprange($address,'66.226.0.0','66.226.31.255','b Alchemy Communications. ');
$ax += iprange($address,'72.26.96.0','72.26.127.255','c Alchemy Communications. ');
$ax += iprange($address,'205.144.160.0','205.144.175.255','d Alchemy Communications. ');
$ax += iprange($address,'208.76.216.0','208.76.219.255','e Alchemy Communications. ');
$ax += iprange($address,'208.118.48.0','208.118.63.255','f Alchemy Communications. ');
$ax += iprange($address,'209.132.192.0','209.132.255.255','g Alchemy Communications. ');
$ax += iprange($address,'216.250.112.0','216.250.127.255','h Alchemy Communications. ');

$ax += cidrblock($address,'46.229.160.0/20','Semrush Botnetwork (SEM-01). '); //74d

$ax += cidrblock($address,'46.19.168.0/23','Network has ethical issues (ASN-6Li-2H-0). '); //74d
$ax += cidrblock($address,'208.74.204.0/22','Network has ethical issues (ASN-6Li-2H-1). '); //74d

$ax += cidrblock($address,'199.180.248.0/21','RAM Host (ASN-RAMHOST-0). '); //76d

$ax += cidrblock($address,'81.161.32.0/20','Infokom Elektrindo (ASN-48226-0). '); //76f

$ax += cidrblock($address,'195.211.152.0/22','Unit-is Banned, 10HiT-IC 3a6opoHeHo (ASN-59564-IS-001). '); //77a

$ax += cidrblock($address,'38.99.82.0/24','Fieldtech Inc (BADNET-FTI). '); //77b

$ax += cidrblock($address,'14.96.0.0/14','TATAINDICOM-IN (Site Scraper) (BADNET-TATA). '); //77g

// RBN IP and IP Range Blocks 

$ax += iprange($address,'77.51.0.0','77.51.59.255','RBN. ');
$ax += iprange($address,'77.92.88.0','77.92.89.255','RBN. ');
$ax += iprange($address,'77.105.0.0','77.105.63.255','RBN. ');
$ax += iprange($address,'78.24.24.234','78.25.191.255','RBN. '); //split 72
$ax += iprange($address,'78.37.128.0','78.37.191.255','RBN. ');
$ax += iprange($address,'78.110.175.0','78.110.175.255','RBN. ');
$ax += iprange($address,'78.129.202.0','78.129.203.255','RBN. ');
$ax += iprange($address,'78.157.140.0','78.157.143.255','RBN. ');
$ax += iprange($address,'79.174.64.0','79.174.95.255','RBN. ');
$ax += iprange($address,'79.175.64.0','79.175.127.255','RBN. ');
$ax += iprange($address,'83.167.98.0','83.167.100.255','RBN. ');
$ax += iprange($address,'83.167.104.0','83.167.109.255','RBN. ');
$ax += iprange($address,'83.167.127.0','83.167.127.255','RBN. ');
$ax += iprange($address,'85.249.0.0','85.251.255.255','RBN. ');
$ax += iprange($address,'89.108.64.0','89.108.127.255','RBN. ');
$ax += iprange($address,'89.113.72.0','89.113.79.255','RBN. ');
$ax += iprange($address,'89.254.192.0','89.254.255.255','RBN. ');
$ax += iprange($address,'91.204.72.0','91.204.75.255','RBN. ');
$ax += iprange($address,'91.205.65.0','91.205.127.255','RBN. ');
$ax += iprange($address,'91.205.168.0','91.205.168.255','RBN. ');
$ax += cidrblock($address,'91.212.124.0/24','RBN. ');
$ax += iprange($address,'91.212.196.0','91.212.255.255','RBN. ');
$ax += iprange($address,'92.38.128.0','92.38.255.255','RBN. ');
$ax += iprange($address,'92.241.0.0','92.241.191.255','RBN. ');
$ax += iprange($address,'93.174.88.0','93.174.94.255','RBN. ');
$ax += iprange($address,'94.142.128.0','94.142.129.255','RBN. ');
$ax += iprange($address,'94.181.0.0','94.181.255.255','RBN. ');
$ax += iprange($address,'109.121.0.0','109.121.63.255','RBN. ');
$ax += iprange($address,'188.134.0.0','188.134.15.255','RBN. ');
$ax += iprange($address,'193.53.87.0','193.53.89.255','RBN. ');
$ax += cidrblock($address,'193.105.210.0/24','RBN. '); //70e
$ax += iprange($address,'193.109.248.0','193.109.249.255','RBN. ');
$ax += iprange($address,'193.189.126.0','193.189.127.255','RBN. ');
$ax += iprange($address,'194.106.188.0','194.106.191.255','RBN. ');
$ax += iprange($address,'194.165.42.0','194.165.42.255','RBN. ');
$ax += iprange($address,'195.2.252.0','195.2.253.255','RBN. ');
$ax += iprange($address,'195.88.0.0','195.88.255.255','RBN. ');
$ax += iprange($address,'195.189.80.0','195.189.83.255','RBN. ');
$ax += iprange($address,'208.64.24.0','208.64.27.255','RBN. ');
$ax += iprange($address,'212.15.65.0','212.15.255.255','RBN. ');
$ax += iprange($address,'212.152.60.128','212.152.63.255','RBN. ');
$ax += iprange($address,'213.219.192.0','213.219.255.255','RBN. ');
$ax += iprange($address,'213.248.0.0','213.248.63.255','RBN. ');

// Query Test

$ax += (inmatch($query,'xbadipx','Test Trigger to test function BADIP. '));

// Added since unofficial fork, non-mainlined release.

// VolumeDrive
// AS46664 created 08/20/15

$ax += cidrblock($address,'45.58.60.0/24','VolumeDrive (CUST-AS46664-01). ');
$ax += cidrblock($address,'74.118.192.0/22','VolumeDrive (CUST-AS46664-02). ');
$ax += cidrblock($address,'104.37.44.0/22','VolumeDrive (CUST-AS46664-03). ');
$ax += cidrblock($address,'104.192.103.0/24','VolumeDrive (CUST-AS46664-04). ');
$ax += cidrblock($address,'104.193.8.0/22','VolumeDrive (CUST-AS46664-05). ');
$ax += cidrblock($address,'104.245.96.0/21','VolumeDrive (CUST-AS46664-06). ');
$ax += cidrblock($address,'104.255.64.0/21','VolumeDrive (CUST-AS46664-07). ');
$ax += cidrblock($address,'107.182.16.0/20','VolumeDrive (CUST-AS46664-08). ');
$ax += cidrblock($address,'142.0.32.0/20','VolumeDrive (CUST-AS46664-09). ');
$ax += cidrblock($address,'162.213.24.0/21','VolumeDrive (CUST-AS46664-10). ');
$ax += cidrblock($address,'162.248.72.0/21','VolumeDrive (CUST-AS46664-11). ');
$ax += cidrblock($address,'172.81.128.0/21','VolumeDrive (CUST-AS46664-12). ');
$ax += cidrblock($address,'172.98.215.0/24','VolumeDrive (CUST-AS46664-13). ');
$ax += cidrblock($address,'173.242.112.0/20','VolumeDrive (CUST-AS46664-14). ');
$ax += cidrblock($address,'192.69.88.0/21','VolumeDrive (CUST-AS46664-15). ');
$ax += cidrblock($address,'199.19.104.0/21','VolumeDrive (CUST-AS46664-16). ');
$ax += cidrblock($address,'199.115.228.0/22','VolumeDrive (CUST-AS46664-17). ');
$ax += cidrblock($address,'199.168.136.0/21','VolumeDrive (CUST-AS46664-18). ');
$ax += cidrblock($address,'199.180.112.0/21','VolumeDrive (CUST-AS46664-19). ');
$ax += cidrblock($address,'204.124.180.0/22','VolumeDrive (CUST-AS46664-20). ');
$ax += cidrblock($address,'204.126.4.0/23','VolumeDrive (CUST-AS46664-21). ');

?>