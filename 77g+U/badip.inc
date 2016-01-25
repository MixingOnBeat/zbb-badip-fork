<?php
/**
 * ZB BLOCK MAIN BAD IP BLOCKS
 *
 * These are known bad IP blocks, both range and CIDR, that have been part of ZB Block since it's inception, with more
 * added as time goes on. More recent ones are suffixed by a //<version><beta-subversion>
 *
 * These are compiled with deep respect, and gratefulness from:
 * http://robtex.com (for the BGP info).
 * http://etmg.altervista.org/tools/aggregate.php (for the data cleaning).
 *
 * IT IS ILLEGAL TO USE THIS FILE IN WHOLE OR PART WITH WEBDEFENSE WEB ALARM OR ANY XYZER PRODUCT DUE TO VIOLATIONS OF
 * THE GNU/GPL V.2
 *
 * ZB BLOCK, WHEN YOU CARE ENOUGH TO STEAL THE VERY BEST (thanks DEC!)
 *
 * COPYRIGHT 2008-2016 GNU/GPL V.2 BY MIKE H.
 * FOR USE WITH ZB BLOCK OR ANY GNU/GPL V.2 COMPLIANT DERIVATIVE
 *
 * @package Maikuolan/zbb-badip-fork
 */

$zbbversion .= ' / BADIP-2016-01+U.10'; // Version number goes here. (product code)-(Year)-(Month)(issue letter)(+U = Unofficial fork, non-mainlined release).(Build number)

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
$ax += iprange($address,'67.215.230.0','67.215.230.255','Email harvester from India (setooz.com) (IP-014). ');
$ax += iprange($address,'68.168.216.0','68.168.216.255','Attacking /24 (IP-015). ');
$ax += iprange($address,'69.36.0.0','69.36.15.255','3IX / host-care (IP-016). ');
$ax += iprange($address,'69.72.128.0','69.72.159.255','Hacker/Spammer Hosts (IP-017). ');
$ax += iprange($address,'69.89.16.0','69.89.31.255','Hacker/Spammer Hosts (IP-018). ');
$ax += iprange($address,'69.210.185.0','69.210.185.7','spunge.org (IP-019). ');
$ax += iprange($address,'72.20.99.0','72.20.99.255','Content scraper for paid service (IP-020). ');
$ax += iprange($address,'72.27.0.0','72.27.213.104','Jamaica Spammer Network (frittobay) (IP-021). '); //70a split
$ax += iprange($address,'72.27.213.106','72.27.223.255','Jamaica Spammer Network (frittobay) (IP-022). '); //70a split
$ax += iprange($address,'79.143.177.0','79.143.177.255','Netherlands Site Host (doesn\'t need access to other sites) (IP-023). ');
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
$ax += iprange($address,'193.200.150.0','193.200.150.255','Anonymizing proxy network, hacker\'s paradise (IP-057). ');
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
$ax += iprange($address,'204.11.16.0','204.11.19.255','onestop.net (IP-071). ');
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
$ax += cidrblock($address,'194.71.222.0/23','ERRSY-NET: Proxy services for scrapers and SEOs (IP-105). '); //72b
$ax += cidrblock($address,'178.238.232.0/21','ice2solutions , known dangerous host/network (IP-106). '); //74c
$ax += lmatch($address,'78.158.11.226','Project Honey Pot rule-breaker, vulnerability scanner (IP-107). ');
$ax += cidrblock($address,'72.10.32.0/19','MediaTemple, illegal nameserver response on reverse lookup. Caught scraping (IP-099). ');


// Ecatel (updated 2016.01.19)
// AS29073
$ax += cidrblock($address,'5.8.61.0/24','Ecatel ASN29073 (ASN-ECATEL-00). ');
$ax += cidrblock($address,'46.243.146.0/24','Ecatel ASN29073 (ASN-ECATEL-01). ');
$ax += cidrblock($address,'46.243.148.0/24','Ecatel ASN29073 (ASN-ECATEL-02). ');
$ax += cidrblock($address,'80.82.64.0/22','Ecatel ASN29073 (ASN-ECATEL-03). ');
$ax += cidrblock($address,'80.82.68.0/23','Ecatel ASN29073 (ASN-ECATEL-04). ');
$ax += cidrblock($address,'80.82.70.0/24','Ecatel ASN29073 (ASN-ECATEL-05). ');
$ax += cidrblock($address,'80.82.76.0/22','Ecatel ASN29073 (ASN-ECATEL-06). ');
$ax += cidrblock($address,'89.248.160.0/21','Ecatel ASN29073 (ASN-ECATEL-07). ');
$ax += cidrblock($address,'89.248.168.0/22','Ecatel ASN29073 (ASN-ECATEL-08). ');
$ax += cidrblock($address,'89.248.172.0/23','Ecatel ASN29073 (ASN-ECATEL-09). ');
$ax += cidrblock($address,'89.248.174.0/24','Ecatel ASN29073 (ASN-ECATEL-10). ');
$ax += cidrblock($address,'93.174.88.0/21','Ecatel ASN29073 (ASN-ECATEL-11). ');
$ax += cidrblock($address,'94.102.48.0/20','Ecatel ASN29073 (ASN-ECATEL-12). ');
$ax += cidrblock($address,'172.94.9.0/24','Ecatel ASN29073 (ASN-ECATEL-13). ');
$ax += cidrblock($address,'185.56.82.0/24','Ecatel ASN29073 (ASN-ECATEL-14). ');
$ax += cidrblock($address,'188.72.103.0/24','Ecatel ASN29073 (ASN-ECATEL-15). ');
$ax += cidrblock($address,'188.72.106.0/24','Ecatel ASN29073 (ASN-ECATEL-16). ');
$ax += cidrblock($address,'188.72.117.0/24','Ecatel ASN29073 (ASN-ECATEL-17). ');
$ax += cidrblock($address,'213.184.105.0/24','Ecatel ASN29073 (ASN-ECATEL-18). ');
$ax += cidrblock($address,'213.184.113.0/24','Ecatel ASN29073 (ASN-ECATEL-19). ');
$ax += cidrblock($address,'213.184.115.0/24','Ecatel ASN29073 (ASN-ECATEL-20). ');
$ax += cidrblock($address,'213.184.117.0/24','Ecatel ASN29073 (ASN-ECATEL-21). ');
$ax += cidrblock($address,'213.184.124.0/24','Ecatel ASN29073 (ASN-ECATEL-22). ');


// Leaseweb Network (updated 2016.01.23)
// AS16265, AS28753, AS30633, AS60781
$ax += cidrblock($address,'5.44.144.0/22','Leaseweb Network (ASN-LEASEWEB-000). ');
$ax += cidrblock($address,'5.61.32.0/20','Leaseweb Network (ASN-LEASEWEB-001). ');
$ax += cidrblock($address,'5.79.64.0/18','Leaseweb Network (ASN-LEASEWEB-002). ');
$ax += cidrblock($address,'31.31.32.0/21','Leaseweb Network (ASN-LEASEWEB-003). ');
$ax += cidrblock($address,'31.186.168.0/22','Leaseweb Network (ASN-LEASEWEB-004). ');
$ax += cidrblock($address,'31.186.172.0/23','Leaseweb Network (ASN-LEASEWEB-005). ');
$ax += cidrblock($address,'37.1.144.0/22','Leaseweb Network (ASN-LEASEWEB-006). ');
$ax += cidrblock($address,'37.1.192.0/21','Leaseweb Network (ASN-LEASEWEB-007). ');
$ax += cidrblock($address,'37.1.216.0/21','Leaseweb Network (ASN-LEASEWEB-008). ');
$ax += cidrblock($address,'37.48.64.0/18','Leaseweb Network (ASN-LEASEWEB-009). ');
$ax += cidrblock($address,'37.58.48.0/20','Leaseweb Network (ASN-LEASEWEB-010). ');
$ax += cidrblock($address,'37.75.152.0/21','Leaseweb Network (ASN-LEASEWEB-011). ');
$ax += cidrblock($address,'41.191.215.0/24','Leaseweb Network (ASN-LEASEWEB-012). ');
$ax += cidrblock($address,'46.17.0.0/21','Leaseweb Network (ASN-LEASEWEB-013). ');
$ax += cidrblock($address,'46.17.14.0/23','Leaseweb Network (ASN-LEASEWEB-014). ');
$ax += cidrblock($address,'46.102.240.0/21','Leaseweb Network (ASN-LEASEWEB-015). ');
$ax += cidrblock($address,'46.165.192.0/18','Leaseweb Network (ASN-LEASEWEB-016). ');
$ax += cidrblock($address,'46.182.120.0/21','Leaseweb Network (ASN-LEASEWEB-017). ');
$ax += cidrblock($address,'46.182.176.0/21','Leaseweb Network (ASN-LEASEWEB-018). ');
$ax += cidrblock($address,'46.243.0.0/21','Leaseweb Network (ASN-LEASEWEB-019). ');
$ax += cidrblock($address,'62.84.240.0/22','Leaseweb Network (ASN-LEASEWEB-020). ');
$ax += cidrblock($address,'62.212.64.0/19','Leaseweb Network (ASN-LEASEWEB-021). ');
$ax += cidrblock($address,'77.81.240.0/21','Leaseweb Network (ASN-LEASEWEB-022). ');
$ax += cidrblock($address,'77.221.144.0/22','Leaseweb Network (ASN-LEASEWEB-023). ');
$ax += cidrblock($address,'77.223.144.0/23','Leaseweb Network (ASN-LEASEWEB-024). ');
$ax += cidrblock($address,'77.235.32.0/19','Leaseweb Network (ASN-LEASEWEB-025). ');
$ax += cidrblock($address,'78.30.43.0/24','Leaseweb Network (ASN-LEASEWEB-026). ');
$ax += cidrblock($address,'78.159.96.0/19','Leaseweb Network (ASN-LEASEWEB-027). ');
$ax += cidrblock($address,'79.137.128.0/24','Leaseweb Network (ASN-LEASEWEB-028). ');
$ax += cidrblock($address,'79.172.198.0/24','Leaseweb Network (ASN-LEASEWEB-029). ');
$ax += cidrblock($address,'80.65.32.0/20','Leaseweb Network (ASN-LEASEWEB-030). ');
$ax += cidrblock($address,'80.94.94.0/23','Leaseweb Network (ASN-LEASEWEB-031). ');
$ax += cidrblock($address,'80.253.248.0/22','Leaseweb Network (ASN-LEASEWEB-032). ');
$ax += cidrblock($address,'81.161.99.0/24','Leaseweb Network (ASN-LEASEWEB-033). ');
$ax += cidrblock($address,'82.150.152.0/24','Leaseweb Network (ASN-LEASEWEB-034). ');
$ax += cidrblock($address,'82.192.64.0/19','Leaseweb Network (ASN-LEASEWEB-035). ');
$ax += cidrblock($address,'83.149.64.0/18','Leaseweb Network (ASN-LEASEWEB-036). ');
$ax += cidrblock($address,'83.223.32.0/20','Leaseweb Network (ASN-LEASEWEB-037). ');
$ax += cidrblock($address,'84.16.224.0/19','Leaseweb Network (ASN-LEASEWEB-038). ');
$ax += cidrblock($address,'84.247.62.0/24','Leaseweb Network (ASN-LEASEWEB-039). ');
$ax += cidrblock($address,'85.17.0.0/16','Leaseweb Network (ASN-LEASEWEB-040). ');
$ax += cidrblock($address,'85.234.224.0/20','Leaseweb Network (ASN-LEASEWEB-041). ');
$ax += cidrblock($address,'87.236.96.0/21','Leaseweb Network (ASN-LEASEWEB-042). ');
$ax += cidrblock($address,'89.34.27.0/24','Leaseweb Network (ASN-LEASEWEB-043). ');
$ax += cidrblock($address,'89.36.36.0/24','Leaseweb Network (ASN-LEASEWEB-044). ');
$ax += cidrblock($address,'89.144.17.0/24','Leaseweb Network (ASN-LEASEWEB-045). ');
$ax += cidrblock($address,'89.144.18.0/24','Leaseweb Network (ASN-LEASEWEB-046). ');
$ax += cidrblock($address,'89.149.192.0/18','Leaseweb Network (ASN-LEASEWEB-047). ');
$ax += cidrblock($address,'91.109.16.0/20','Leaseweb Network (ASN-LEASEWEB-048). ');
$ax += cidrblock($address,'91.184.46.0/23','Leaseweb Network (ASN-LEASEWEB-049). ');
$ax += cidrblock($address,'91.184.48.0/20','Leaseweb Network (ASN-LEASEWEB-050). ');
$ax += cidrblock($address,'91.195.118.0/23','Leaseweb Network (ASN-LEASEWEB-051). ');
$ax += cidrblock($address,'91.217.72.0/23','Leaseweb Network (ASN-LEASEWEB-052). ');
$ax += cidrblock($address,'92.114.86.0/23','Leaseweb Network (ASN-LEASEWEB-053). ');
$ax += cidrblock($address,'93.176.128.0/23','Leaseweb Network (ASN-LEASEWEB-054). ');
$ax += cidrblock($address,'93.190.220.0/22','Leaseweb Network (ASN-LEASEWEB-055). ');
$ax += cidrblock($address,'94.75.192.0/18','Leaseweb Network (ASN-LEASEWEB-056). ');
$ax += cidrblock($address,'94.177.98.0/23','Leaseweb Network (ASN-LEASEWEB-057). ');
$ax += cidrblock($address,'94.177.146.0/24','Leaseweb Network (ASN-LEASEWEB-058). ');
$ax += cidrblock($address,'95.168.160.0/19','Leaseweb Network (ASN-LEASEWEB-059). ');
$ax += cidrblock($address,'95.211.0.0/16','Leaseweb Network (ASN-LEASEWEB-060). ');
$ax += cidrblock($address,'103.41.176.0/23','Leaseweb Network (ASN-LEASEWEB-061). ');
$ax += cidrblock($address,'108.59.0.0/20','Leaseweb Network (ASN-LEASEWEB-062). ');
$ax += cidrblock($address,'109.69.56.0/22','Leaseweb Network (ASN-LEASEWEB-063). ');
$ax += cidrblock($address,'109.70.0.0/21','Leaseweb Network (ASN-LEASEWEB-064). ');
$ax += cidrblock($address,'109.70.9.0/24','Leaseweb Network (ASN-LEASEWEB-065). ');
$ax += cidrblock($address,'109.70.10.0/23','Leaseweb Network (ASN-LEASEWEB-066). ');
$ax += cidrblock($address,'109.70.12.0/22','Leaseweb Network (ASN-LEASEWEB-067). ');
$ax += cidrblock($address,'109.120.175.0/24','Leaseweb Network (ASN-LEASEWEB-068). ');
$ax += cidrblock($address,'109.120.176.0/24','Leaseweb Network (ASN-LEASEWEB-069). ');
$ax += cidrblock($address,'109.120.180.0/22','Leaseweb Network (ASN-LEASEWEB-070). ');
$ax += cidrblock($address,'128.140.216.0/22','Leaseweb Network (ASN-LEASEWEB-071). ');
$ax += cidrblock($address,'145.255.128.0/21','Leaseweb Network (ASN-LEASEWEB-072). ');
$ax += cidrblock($address,'154.16.156.0/23','Leaseweb Network (ASN-LEASEWEB-073). ');
$ax += cidrblock($address,'159.255.192.0/22','Leaseweb Network (ASN-LEASEWEB-074). ');
$ax += cidrblock($address,'162.210.192.0/21','Leaseweb Network (ASN-LEASEWEB-075). ');
$ax += cidrblock($address,'162.219.212.0/22','Leaseweb Network (ASN-LEASEWEB-076). ');
$ax += cidrblock($address,'178.18.20.0/22','Leaseweb Network (ASN-LEASEWEB-077). ');
$ax += cidrblock($address,'178.18.24.0/23','Leaseweb Network (ASN-LEASEWEB-078). ');
$ax += cidrblock($address,'178.18.30.0/23','Leaseweb Network (ASN-LEASEWEB-079). ');
$ax += cidrblock($address,'178.162.128.0/17','Leaseweb Network (ASN-LEASEWEB-080). ');
$ax += cidrblock($address,'178.250.16.0/24','Leaseweb Network (ASN-LEASEWEB-081). ');
$ax += cidrblock($address,'178.250.18.0/24','Leaseweb Network (ASN-LEASEWEB-082). ');
$ax += cidrblock($address,'181.214.35.0/24','Leaseweb Network (ASN-LEASEWEB-083). ');
$ax += cidrblock($address,'181.214.50.0/24','Leaseweb Network (ASN-LEASEWEB-084). ');
$ax += cidrblock($address,'185.16.84.0/24','Leaseweb Network (ASN-LEASEWEB-085). ');
$ax += cidrblock($address,'185.17.32.0/22','Leaseweb Network (ASN-LEASEWEB-086). ');
$ax += cidrblock($address,'185.17.120.0/22','Leaseweb Network (ASN-LEASEWEB-087). ');
$ax += cidrblock($address,'185.17.144.0/22','Leaseweb Network (ASN-LEASEWEB-088). ');
$ax += cidrblock($address,'185.17.184.0/22','Leaseweb Network (ASN-LEASEWEB-089). ');
$ax += cidrblock($address,'185.22.4.0/22','Leaseweb Network (ASN-LEASEWEB-090). ');
$ax += cidrblock($address,'185.24.172.0/22','Leaseweb Network (ASN-LEASEWEB-091). ');
$ax += cidrblock($address,'185.24.240.0/24','Leaseweb Network (ASN-LEASEWEB-092). ');
$ax += cidrblock($address,'185.27.140.0/22','Leaseweb Network (ASN-LEASEWEB-093). ');
$ax += cidrblock($address,'185.28.68.0/22','Leaseweb Network (ASN-LEASEWEB-094). ');
$ax += cidrblock($address,'185.30.232.0/22','Leaseweb Network (ASN-LEASEWEB-095). ');
$ax += cidrblock($address,'185.32.14.0/23','Leaseweb Network (ASN-LEASEWEB-096). ');
$ax += cidrblock($address,'185.34.68.0/22','Leaseweb Network (ASN-LEASEWEB-097). ');
$ax += cidrblock($address,'185.38.185.0/24','Leaseweb Network (ASN-LEASEWEB-098). ');
$ax += cidrblock($address,'185.38.187.0/24','Leaseweb Network (ASN-LEASEWEB-099). ');
$ax += cidrblock($address,'185.44.22.0/23','Leaseweb Network (ASN-LEASEWEB-100). ');
$ax += cidrblock($address,'185.46.180.0/24','Leaseweb Network (ASN-LEASEWEB-101). ');
$ax += cidrblock($address,'185.46.232.0/24','Leaseweb Network (ASN-LEASEWEB-102). ');
$ax += cidrblock($address,'185.49.68.0/22','Leaseweb Network (ASN-LEASEWEB-103). ');
$ax += cidrblock($address,'185.51.192.0/22','Leaseweb Network (ASN-LEASEWEB-104). ');
$ax += cidrblock($address,'185.63.56.0/24','Leaseweb Network (ASN-LEASEWEB-105). ');
$ax += cidrblock($address,'185.63.152.0/22','Leaseweb Network (ASN-LEASEWEB-106). ');
$ax += cidrblock($address,'185.71.60.0/22','Leaseweb Network (ASN-LEASEWEB-107). ');
$ax += cidrblock($address,'185.71.224.0/22','Leaseweb Network (ASN-LEASEWEB-108). ');
$ax += cidrblock($address,'185.72.178.0/23','Leaseweb Network (ASN-LEASEWEB-109). ');
$ax += cidrblock($address,'185.73.32.0/23','Leaseweb Network (ASN-LEASEWEB-110). ');
$ax += cidrblock($address,'185.79.40.0/22','Leaseweb Network (ASN-LEASEWEB-111). ');
$ax += cidrblock($address,'185.83.96.0/22','Leaseweb Network (ASN-LEASEWEB-112). ');
$ax += cidrblock($address,'185.85.160.0/22','Leaseweb Network (ASN-LEASEWEB-113). ');
$ax += cidrblock($address,'185.85.240.0/22','Leaseweb Network (ASN-LEASEWEB-114). ');
$ax += cidrblock($address,'185.89.4.0/22','Leaseweb Network (ASN-LEASEWEB-115). ');
$ax += cidrblock($address,'185.95.164.0/22','Leaseweb Network (ASN-LEASEWEB-116). ');
$ax += cidrblock($address,'185.96.140.0/24','Leaseweb Network (ASN-LEASEWEB-117). ');
$ax += cidrblock($address,'185.99.96.0/22','Leaseweb Network (ASN-LEASEWEB-118). ');
$ax += cidrblock($address,'185.101.107.0/24','Leaseweb Network (ASN-LEASEWEB-119). ');
$ax += cidrblock($address,'185.102.27.0/24','Leaseweb Network (ASN-LEASEWEB-120). ');
$ax += cidrblock($address,'185.108.84.0/23','Leaseweb Network (ASN-LEASEWEB-121). ');
$ax += cidrblock($address,'185.113.88.0/22','Leaseweb Network (ASN-LEASEWEB-122). ');
$ax += cidrblock($address,'185.114.60.0/22','Leaseweb Network (ASN-LEASEWEB-123). ');
$ax += cidrblock($address,'185.114.140.0/22','Leaseweb Network (ASN-LEASEWEB-124). ');
$ax += cidrblock($address,'185.117.228.0/22','Leaseweb Network (ASN-LEASEWEB-125). ');
$ax += cidrblock($address,'185.122.164.0/22','Leaseweb Network (ASN-LEASEWEB-126). ');
$ax += cidrblock($address,'185.122.168.0/22','Leaseweb Network (ASN-LEASEWEB-127). ');
$ax += cidrblock($address,'185.124.200.0/22','Leaseweb Network (ASN-LEASEWEB-128). ');
$ax += cidrblock($address,'185.126.64.0/22','Leaseweb Network (ASN-LEASEWEB-129). ');
$ax += cidrblock($address,'185.131.24.0/22','Leaseweb Network (ASN-LEASEWEB-130). ');
$ax += cidrblock($address,'188.72.192.0/18','Leaseweb Network (ASN-LEASEWEB-131). ');
$ax += cidrblock($address,'188.208.38.0/23','Leaseweb Network (ASN-LEASEWEB-132). ');
$ax += cidrblock($address,'188.211.239.0/24','Leaseweb Network (ASN-LEASEWEB-133). ');
$ax += cidrblock($address,'188.215.35.0/24','Leaseweb Network (ASN-LEASEWEB-134). ');
$ax += cidrblock($address,'188.241.65.0/24','Leaseweb Network (ASN-LEASEWEB-135). ');
$ax += cidrblock($address,'190.105.193.0/24','Leaseweb Network (ASN-LEASEWEB-136). ');
$ax += cidrblock($address,'190.105.195.0/24','Leaseweb Network (ASN-LEASEWEB-137). ');
$ax += cidrblock($address,'191.96.112.0/24','Leaseweb Network (ASN-LEASEWEB-138). ');
$ax += cidrblock($address,'191.96.115.0/24','Leaseweb Network (ASN-LEASEWEB-139). ');
$ax += cidrblock($address,'191.101.16.0/24','Leaseweb Network (ASN-LEASEWEB-140). ');
$ax += cidrblock($address,'192.36.61.0/24','Leaseweb Network (ASN-LEASEWEB-141). ');
$ax += cidrblock($address,'192.96.200.0/21','Leaseweb Network (ASN-LEASEWEB-142). ');
$ax += cidrblock($address,'192.162.138.0/24','Leaseweb Network (ASN-LEASEWEB-143). ');
$ax += cidrblock($address,'193.25.180.0/23','Leaseweb Network (ASN-LEASEWEB-144). ');
$ax += cidrblock($address,'193.27.72.0/23','Leaseweb Network (ASN-LEASEWEB-145). ');
$ax += cidrblock($address,'193.43.92.0/24','Leaseweb Network (ASN-LEASEWEB-146). ');
$ax += cidrblock($address,'193.104.219.0/24','Leaseweb Network (ASN-LEASEWEB-147). ');
$ax += cidrblock($address,'193.151.91.0/24','Leaseweb Network (ASN-LEASEWEB-148). ');
$ax += cidrblock($address,'193.239.4.0/22','Leaseweb Network (ASN-LEASEWEB-149). ');
$ax += cidrblock($address,'193.242.108.0/24','Leaseweb Network (ASN-LEASEWEB-150). ');
$ax += cidrblock($address,'194.0.197.0/24','Leaseweb Network (ASN-LEASEWEB-151). ');
$ax += cidrblock($address,'194.60.71.0/24','Leaseweb Network (ASN-LEASEWEB-152). ');
$ax += cidrblock($address,'195.14.2.0/24','Leaseweb Network (ASN-LEASEWEB-153). ');
$ax += cidrblock($address,'195.14.21.0/24','Leaseweb Network (ASN-LEASEWEB-154). ');
$ax += cidrblock($address,'195.140.240.0/22','Leaseweb Network (ASN-LEASEWEB-155). ');
$ax += cidrblock($address,'195.200.82.0/23','Leaseweb Network (ASN-LEASEWEB-156). ');
$ax += cidrblock($address,'195.242.98.0/23','Leaseweb Network (ASN-LEASEWEB-157). ');
$ax += cidrblock($address,'198.7.56.0/21','Leaseweb Network (ASN-LEASEWEB-158). ');
$ax += cidrblock($address,'199.58.84.0/22','Leaseweb Network (ASN-LEASEWEB-159). ');
$ax += cidrblock($address,'199.115.112.0/21','Leaseweb Network (ASN-LEASEWEB-160). ');
$ax += cidrblock($address,'207.244.64.0/18','Leaseweb Network (ASN-LEASEWEB-161). ');
$ax += cidrblock($address,'208.64.45.0/24','Leaseweb Network (ASN-LEASEWEB-162). ');
$ax += cidrblock($address,'209.192.128.0/17','Leaseweb Network (ASN-LEASEWEB-163). ');
$ax += cidrblock($address,'212.7.192.0/21','Leaseweb Network (ASN-LEASEWEB-164). ');
$ax += cidrblock($address,'212.7.200.0/24','Leaseweb Network (ASN-LEASEWEB-165). ');
$ax += cidrblock($address,'212.7.202.0/24','Leaseweb Network (ASN-LEASEWEB-166). ');
$ax += cidrblock($address,'212.7.204.0/22','Leaseweb Network (ASN-LEASEWEB-167). ');
$ax += cidrblock($address,'212.7.208.0/21','Leaseweb Network (ASN-LEASEWEB-168). ');
$ax += cidrblock($address,'212.19.235.0/24','Leaseweb Network (ASN-LEASEWEB-169). ');
$ax += cidrblock($address,'212.19.236.0/24','Leaseweb Network (ASN-LEASEWEB-170). ');
$ax += cidrblock($address,'212.95.32.0/19','Leaseweb Network (ASN-LEASEWEB-171). ');
$ax += cidrblock($address,'213.142.132.0/22','Leaseweb Network (ASN-LEASEWEB-172). ');
$ax += cidrblock($address,'213.142.136.0/21','Leaseweb Network (ASN-LEASEWEB-173). ');
$ax += cidrblock($address,'213.142.144.0/22','Leaseweb Network (ASN-LEASEWEB-174). ');
$ax += cidrblock($address,'217.20.112.0/20','Leaseweb Network (ASN-LEASEWEB-175). ');
$ax += cidrblock($address,'217.73.56.0/21','Leaseweb Network (ASN-LEASEWEB-176). ');


// HOSTING-AS Tehnologii Budushego LLC (updated 2016.01.18)
// AS41665
$ax += cidrblock($address,'78.109.16.0/20','AS41665 (AS-HATB-0). ');
$ax += cidrblock($address,'194.54.88.0/22','AS41665 (AS-HATB-1). ');
$ax += cidrblock($address,'213.155.0.0/19','AS41665 (AS-HATB-2). ');


// MYLOC (updated 2016.01.18)
// AS24961
$ax += cidrblock($address,'5.104.104.0/21','Myloc AS24961 (AS-MYLOC-00). ');
$ax += cidrblock($address,'5.199.128.0/20','Myloc AS24961 (AS-MYLOC-01). ');
$ax += cidrblock($address,'31.22.104.0/22','Myloc AS24961 (AS-MYLOC-02). ');
$ax += cidrblock($address,'31.184.224.0/24','Myloc AS24961 (AS-MYLOC-03). ');
$ax += cidrblock($address,'37.157.248.0/21','Myloc AS24961 (AS-MYLOC-04). ');
$ax += cidrblock($address,'46.20.32.0/20','Myloc AS24961 (AS-MYLOC-05). ');
$ax += cidrblock($address,'46.228.192.0/20','Myloc AS24961 (AS-MYLOC-06). ');
$ax += cidrblock($address,'62.141.32.0/20','Myloc AS24961 (AS-MYLOC-07). ');
$ax += cidrblock($address,'77.81.109.0/24','Myloc AS24961 (AS-MYLOC-08). ');
$ax += cidrblock($address,'77.81.110.0/24','Myloc AS24961 (AS-MYLOC-09). ');
$ax += cidrblock($address,'78.31.64.0/21','Myloc AS24961 (AS-MYLOC-10). ');
$ax += cidrblock($address,'80.82.208.0/20','Myloc AS24961 (AS-MYLOC-11). ');
$ax += cidrblock($address,'80.86.170.0/23','Myloc AS24961 (AS-MYLOC-12). ');
$ax += cidrblock($address,'80.86.186.0/24','Myloc AS24961 (AS-MYLOC-13). ');
$ax += cidrblock($address,'81.30.144.0/20','Myloc AS24961 (AS-MYLOC-14). ');
$ax += cidrblock($address,'83.136.80.0/21','Myloc AS24961 (AS-MYLOC-15). ');
$ax += cidrblock($address,'85.14.240.0/20','Myloc AS24961 (AS-MYLOC-16). ');
$ax += cidrblock($address,'85.114.128.0/19','Myloc AS24961 (AS-MYLOC-17). ');
$ax += cidrblock($address,'89.163.128.0/19','Myloc AS24961 (AS-MYLOC-18). ');
$ax += cidrblock($address,'89.163.208.0/20','Myloc AS24961 (AS-MYLOC-19). ');
$ax += cidrblock($address,'89.163.224.0/19','Myloc AS24961 (AS-MYLOC-20). ');
$ax += cidrblock($address,'91.194.84.0/23','Myloc AS24961 (AS-MYLOC-21). ');
$ax += cidrblock($address,'91.212.85.0/24','Myloc AS24961 (AS-MYLOC-22). ');
$ax += cidrblock($address,'91.242.212.0/24','Myloc AS24961 (AS-MYLOC-23). ');
$ax += cidrblock($address,'93.186.192.0/20','Myloc AS24961 (AS-MYLOC-24). ');


// INFOBOX (updated 2016.01.18)
// AS30968
$ax += cidrblock($address,'77.221.128.0/19','INFOBOX AS30968 (AS-INFOBOX-0). ');
$ax += cidrblock($address,'92.243.64.0/19','INFOBOX AS30968 (AS-INFOBOX-1). ');
$ax += cidrblock($address,'109.120.128.0/18','INFOBOX AS30968 (AS-INFOBOX-2). ');


// SEDO (updated 2016.01.18)
// AS47846
$ax += cidrblock($address,'82.98.86.0/24','SEDO AS47846 (AS-SEDO-0). ');
$ax += cidrblock($address,'82.98.99.0/24','SEDO AS47846 (AS-SEDO-1). ');
$ax += cidrblock($address,'91.195.240.0/23','SEDO AS47846 (AS-SEDO-2). ');
$ax += cidrblock($address,'213.83.58.0/24','SEDO AS47846 (AS-SEDO-3). ');


// iweb/privatedns Domain Spammers
// Snooping on your site, sniping your domain.
$ax += rmatch($hoster,'privatedns.com','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += rmatch($hoster,'iweb.ca','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += rmatch($hoster,'iweb.com','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += lmatch($hoster,'iweb','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += lmatch($hoster,'www.iweb','RFC ignorant/Suspected domain name snipers/spammers. '); //70b


// Spamahost network.
// self explanatory!
$ax += cidrblock($address,'66.96.128.0/18','Spamahost known range. '); //70c
$ax += cidrblock($address,'83.229.128.0/17','Spamahost known range. '); //70c
$ax += cidrblock($address,'185.53.176.0/22','Spamahost known range. '); //2016.01.18
$ax += inmatch($hoster,'spamahost','Spamahost. '); //70c


// HOSTKEY B.V. (updated 2016.01.18)
// AS57043
$ax += cidrblock($address,'5.39.216.0/21','HostKey Network (AS-57043-0). ');
$ax += cidrblock($address,'31.192.109.0/24','HostKey Network (AS-57043-1). ');
$ax += cidrblock($address,'31.192.110.0/24','HostKey Network (AS-57043-2). ');
$ax += cidrblock($address,'46.17.96.0/21','HostKey Network (AS-57043-3). ');
$ax += cidrblock($address,'46.249.38.0/24','HostKey Network (AS-57043-4). ');
$ax += cidrblock($address,'146.0.72.0/21','HostKey Network (AS-57043-5). ');
$ax += cidrblock($address,'185.70.184.0/22','HostKey Network (AS-57043-6). ');
$ax += cidrblock($address,'185.130.224.0/22','HostKey Network (AS-57043-7). ');
$ax += cidrblock($address,'193.109.68.0/23','HostKey Network (AS-57043-8). ');
$ax += cidrblock($address,'195.162.68.0/23','HostKey Network (AS-57043-9). ');
$ax += rmatch($hoster,'hostkey.ru','Hostkey (known spammers). '); //70c


//AS15003
//Ubiquity Server Solutions
//Nobis Technology Group
//contains traces of other hosters, should not visit websites
//16th of January 2016
$ax += cidrblock($address,'23.19.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-001). ');
$ax += cidrblock($address,'23.80.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-002). ');
$ax += cidrblock($address,'23.81.0.0/17','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-003). ');
$ax += cidrblock($address,'23.81.128.0/18','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-004). ');
$ax += cidrblock($address,'23.81.192.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-005). ');
$ax += cidrblock($address,'23.81.216.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-006). ');
$ax += cidrblock($address,'23.81.224.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-007). ');
$ax += cidrblock($address,'23.82.0.0/17','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-008). ');
$ax += cidrblock($address,'23.82.128.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-009). ');
$ax += cidrblock($address,'23.82.160.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-010). ');
$ax += cidrblock($address,'23.82.176.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-011). ');
$ax += cidrblock($address,'23.82.192.0/18','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-012). ');
$ax += cidrblock($address,'23.83.0.0/18','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-013). ');
$ax += cidrblock($address,'23.83.64.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-014). ');
$ax += cidrblock($address,'23.83.96.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-015). ');
$ax += cidrblock($address,'23.83.128.0/18','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-016). ');
$ax += cidrblock($address,'23.83.192.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-017). ');
$ax += cidrblock($address,'23.104.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-018). ');
$ax += cidrblock($address,'23.105.0.0/17','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-019). ');
$ax += cidrblock($address,'23.105.128.0/18','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-020). ');
$ax += cidrblock($address,'23.106.0.0/17','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-021). ');
$ax += cidrblock($address,'23.106.160.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-022). ');
$ax += cidrblock($address,'23.106.192.0/18','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-023). ');
$ax += cidrblock($address,'23.107.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-024). ');
$ax += cidrblock($address,'23.108.0.0/15','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-025). ');
$ax += cidrblock($address,'23.110.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-026). ');
$ax += cidrblock($address,'23.111.16.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-027). ');
$ax += cidrblock($address,'23.111.248.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-028). ');
$ax += cidrblock($address,'23.111.251.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-029). ');
$ax += cidrblock($address,'23.111.253.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-030). ');
$ax += cidrblock($address,'23.111.254.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-031). ');
$ax += cidrblock($address,'23.224.0.0/15','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-032). ');
$ax += cidrblock($address,'23.235.160.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-033). ');
$ax += cidrblock($address,'23.248.192.0/18','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-034). ');
$ax += cidrblock($address,'64.120.1.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-035). ');
$ax += cidrblock($address,'64.120.2.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-036). ');
$ax += cidrblock($address,'64.120.4.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-037). ');
$ax += cidrblock($address,'64.120.8.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-038). ');
$ax += cidrblock($address,'64.120.16.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-039). ');
$ax += cidrblock($address,'64.120.32.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-040). ');
$ax += cidrblock($address,'64.120.64.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-041). ');
$ax += cidrblock($address,'64.120.66.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-042). ');
$ax += cidrblock($address,'64.120.68.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-043). ');
$ax += cidrblock($address,'64.120.71.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-044). ');
$ax += cidrblock($address,'64.120.72.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-045). ');
$ax += cidrblock($address,'64.120.80.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-046). ');
$ax += cidrblock($address,'64.120.96.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-047). ');
$ax += cidrblock($address,'64.120.105.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-048). ');
$ax += cidrblock($address,'64.120.106.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-049). ');
$ax += cidrblock($address,'64.120.109.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-050). ');
$ax += cidrblock($address,'64.120.112.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-051). ');
$ax += cidrblock($address,'64.120.122.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-052). ');
$ax += cidrblock($address,'64.120.124.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-053). ');
$ax += cidrblock($address,'67.201.0.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-054). ');
$ax += cidrblock($address,'67.201.48.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-055). ');
$ax += cidrblock($address,'69.31.107.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-056). ');
$ax += cidrblock($address,'69.147.224.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-057). ');
$ax += cidrblock($address,'69.147.227.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-058). ');
$ax += cidrblock($address,'69.147.228.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-059). ');
$ax += cidrblock($address,'69.147.232.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-060). ');
$ax += cidrblock($address,'69.147.240.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-061). ');
$ax += cidrblock($address,'69.147.244.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-062). ');
$ax += cidrblock($address,'69.147.246.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-063). ');
$ax += cidrblock($address,'69.147.248.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-064). ');
$ax += cidrblock($address,'69.174.60.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-065). ');
$ax += cidrblock($address,'70.32.32.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-066). ');
$ax += cidrblock($address,'72.37.204.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-067). ');
$ax += cidrblock($address,'72.37.221.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-068). ');
$ax += cidrblock($address,'72.37.222.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-069). ');
$ax += cidrblock($address,'72.37.224.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-070). ');
$ax += cidrblock($address,'72.37.237.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-071). ');
$ax += cidrblock($address,'72.37.242.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-072). ');
$ax += cidrblock($address,'72.37.246.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-073). ');
$ax += cidrblock($address,'74.113.144.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-074). ');
$ax += cidrblock($address,'104.238.32.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-075). ');
$ax += cidrblock($address,'104.238.45.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-076). ');
$ax += cidrblock($address,'108.62.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-077). ');
$ax += cidrblock($address,'108.171.33.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-078). ');
$ax += cidrblock($address,'108.171.34.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-079). ');
$ax += cidrblock($address,'108.171.36.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-080). ');
$ax += cidrblock($address,'108.171.38.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-081). ');
$ax += cidrblock($address,'108.171.43.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-082). ');
$ax += cidrblock($address,'108.171.44.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-083). ');
$ax += cidrblock($address,'108.171.53.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-084). ');
$ax += cidrblock($address,'108.171.54.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-085). ');
$ax += cidrblock($address,'108.171.56.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-086). ');
$ax += cidrblock($address,'108.171.59.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-087). ');
$ax += cidrblock($address,'108.171.60.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-088). ');
$ax += cidrblock($address,'108.171.63.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-089). ');
$ax += cidrblock($address,'108.177.128.0/17','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-090). ');
$ax += cidrblock($address,'108.187.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-091). ');
$ax += cidrblock($address,'142.91.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-092). ');
$ax += cidrblock($address,'142.234.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-093). ');
$ax += cidrblock($address,'147.255.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-094). ');
$ax += cidrblock($address,'162.209.128.0/17','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-095). ');
$ax += cidrblock($address,'162.222.68.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-096). ');
$ax += cidrblock($address,'162.246.185.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-097). ');
$ax += cidrblock($address,'162.246.186.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-098). ');
$ax += cidrblock($address,'167.160.116.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-099). ');
$ax += cidrblock($address,'172.240.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-100). ');
$ax += cidrblock($address,'172.241.0.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-101). ');
$ax += cidrblock($address,'172.241.32.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-102). ');
$ax += cidrblock($address,'172.241.56.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-103). ');
$ax += cidrblock($address,'172.241.72.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-104). ');
$ax += cidrblock($address,'172.241.80.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-105). ');
$ax += cidrblock($address,'172.241.88.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-106). ');
$ax += cidrblock($address,'172.241.96.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-107). ');
$ax += cidrblock($address,'172.241.128.0/18','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-108). ');
$ax += cidrblock($address,'172.241.192.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-109). ');
$ax += cidrblock($address,'172.241.224.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-110). ');
$ax += cidrblock($address,'172.241.240.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-111). ');
$ax += cidrblock($address,'172.247.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-112). ');
$ax += cidrblock($address,'172.255.0.0/16','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-113). ');
$ax += cidrblock($address,'173.208.0.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-114). ');
$ax += cidrblock($address,'173.208.32.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-115). ');
$ax += cidrblock($address,'173.208.48.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-116). ');
$ax += cidrblock($address,'173.208.56.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-117). ');
$ax += cidrblock($address,'173.208.62.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-118). ');
$ax += cidrblock($address,'173.208.64.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-119). ');
$ax += cidrblock($address,'173.208.96.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-120). ');
$ax += cidrblock($address,'173.208.104.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-121). ');
$ax += cidrblock($address,'173.208.106.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-122). ');
$ax += cidrblock($address,'173.208.108.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-123). ');
$ax += cidrblock($address,'173.208.112.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-124). ');
$ax += cidrblock($address,'173.208.114.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-125). ');
$ax += cidrblock($address,'173.208.118.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-126). ');
$ax += cidrblock($address,'173.208.120.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-127). ');
$ax += cidrblock($address,'173.234.0.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-128). ');
$ax += cidrblock($address,'173.234.16.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-129). ');
$ax += cidrblock($address,'173.234.32.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-130). ');
$ax += cidrblock($address,'173.234.64.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-131). ');
$ax += cidrblock($address,'173.234.80.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-132). ');
$ax += cidrblock($address,'173.234.88.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-133). ');
$ax += cidrblock($address,'173.234.90.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-134). ');
$ax += cidrblock($address,'173.234.92.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-135). ');
$ax += cidrblock($address,'173.234.96.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-136). ');
$ax += cidrblock($address,'173.234.105.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-137). ');
$ax += cidrblock($address,'173.234.109.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-138). ');
$ax += cidrblock($address,'173.234.110.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-139). ');
$ax += cidrblock($address,'173.234.112.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-140). ');
$ax += cidrblock($address,'173.234.128.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-141). ');
$ax += cidrblock($address,'173.234.160.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-142). ');
$ax += cidrblock($address,'173.234.176.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-143). ');
$ax += cidrblock($address,'173.234.184.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-144). ');
$ax += cidrblock($address,'173.234.188.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-145). ');
$ax += cidrblock($address,'173.234.190.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-146). ');
$ax += cidrblock($address,'173.234.192.0/18','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-147). ');
$ax += cidrblock($address,'174.34.128.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-148). ');
$ax += cidrblock($address,'174.34.160.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-149). ');
$ax += cidrblock($address,'174.34.176.0/21','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-150). ');
$ax += cidrblock($address,'174.34.184.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-151). ');
$ax += cidrblock($address,'174.34.188.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-152). ');
$ax += cidrblock($address,'174.34.190.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-153). ');
$ax += cidrblock($address,'181.214.53.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-154). ');
$ax += cidrblock($address,'191.96.100.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-155). ');
$ax += cidrblock($address,'191.96.107.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-156). ');
$ax += cidrblock($address,'191.101.178.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-157). ');
$ax += cidrblock($address,'192.151.236.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-158). ');
$ax += cidrblock($address,'192.161.80.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-159). ');
$ax += cidrblock($address,'192.163.160.0/19','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-160). ');
$ax += cidrblock($address,'192.229.64.0/18','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-161). ');
$ax += cidrblock($address,'192.238.128.0/17','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-162). ');
$ax += cidrblock($address,'192.253.243.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-163). ');
$ax += cidrblock($address,'192.253.245.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-164). ');
$ax += cidrblock($address,'192.253.246.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-165). ');
$ax += cidrblock($address,'196.45.112.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-166). ');
$ax += cidrblock($address,'198.48.96.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-167). ');
$ax += cidrblock($address,'198.48.112.0/22','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-168). ');
$ax += cidrblock($address,'206.123.128.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-169). ');
$ax += cidrblock($address,'206.123.143.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-170). ');
$ax += cidrblock($address,'206.123.144.0/23','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-171). ');
$ax += cidrblock($address,'216.6.224.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-172). ');
$ax += cidrblock($address,'216.152.224.0/20','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-173). ');
$ax += cidrblock($address,'216.193.237.0/24','Nobis Technology Group, Ubiquity Server Solutions. (ASN-NOBIS-TECH-174). ');
$ax += inmatch($hoster,'nobis','Nobis Technology Group. (ASN-NOBIS-TECH-175). ');
$ax += inmatch($hoster,'ubiquity','Nobis Technology Group. (ASN-NOBIS-TECH-176). ');


// Rackspace (updated 2016.01.18)
// AS19994, AS27357, AS15395, AS33070, AS12200
$ax += cidrblock($address,'5.79.0.0/18','Rackspace (ASN-RKSP-00). ');
$ax += cidrblock($address,'5.152.187.0/24','Rackspace (ASN-RKSP-01). ');
$ax += cidrblock($address,'23.253.0.0/16','Rackspace (ASN-RKSP-02). ');
$ax += cidrblock($address,'27.126.144.0/21','Rackspace (ASN-RKSP-03). ');
$ax += cidrblock($address,'31.222.128.0/18','Rackspace (ASN-RKSP-04). ');
$ax += cidrblock($address,'37.188.96.0/19','Rackspace (ASN-RKSP-05). ');
$ax += cidrblock($address,'46.38.160.0/19','Rackspace (ASN-RKSP-06). ');
$ax += cidrblock($address,'50.28.192.0/19','Rackspace (ASN-RKSP-07). ');
$ax += cidrblock($address,'50.28.224.0/21','Rackspace (ASN-RKSP-08). ');
$ax += cidrblock($address,'50.56.0.0/15','Rackspace (ASN-RKSP-09). ');
$ax += cidrblock($address,'64.39.0.0/19','Rackspace (ASN-RKSP-10). ');
$ax += cidrblock($address,'64.49.192.0/18','Rackspace (ASN-RKSP-11). ');
$ax += cidrblock($address,'65.61.128.0/18','Rackspace (ASN-RKSP-12). ');
$ax += cidrblock($address,'66.216.64.0/18','Rackspace (ASN-RKSP-13). ');
$ax += cidrblock($address,'67.23.0.0/19','Rackspace (ASN-RKSP-14). ');
$ax += cidrblock($address,'67.23.32.0/20','Rackspace (ASN-RKSP-15). ');
$ax += cidrblock($address,'67.192.0.0/16','Rackspace (ASN-RKSP-16). ');
$ax += cidrblock($address,'67.207.128.0/19','Rackspace (ASN-RKSP-17). ');
$ax += cidrblock($address,'69.20.0.0/17','Rackspace (ASN-RKSP-18). ');
$ax += cidrblock($address,'72.3.128.0/17','Rackspace (ASN-RKSP-19). ');
$ax += cidrblock($address,'72.4.112.0/20','Rackspace (ASN-RKSP-20). ');
$ax += cidrblock($address,'72.32.0.0/16','Rackspace (ASN-RKSP-21). ');
$ax += cidrblock($address,'74.91.80.0/20','Rackspace (ASN-RKSP-22). ');
$ax += cidrblock($address,'74.205.0.0/17','Rackspace (ASN-RKSP-23). ');
$ax += cidrblock($address,'78.136.0.0/18','Rackspace (ASN-RKSP-24). ');
$ax += cidrblock($address,'83.138.128.0/18','Rackspace (ASN-RKSP-25). ');
$ax += cidrblock($address,'89.234.0.0/18','Rackspace (ASN-RKSP-26). ');
$ax += cidrblock($address,'91.227.208.0/24','Rackspace (ASN-RKSP-27). ');
$ax += cidrblock($address,'92.52.64.0/18','Rackspace (ASN-RKSP-28). ');
$ax += cidrblock($address,'94.236.0.0/17','Rackspace (ASN-RKSP-29). ');
$ax += cidrblock($address,'95.138.128.0/18','Rackspace (ASN-RKSP-30). ');
$ax += cidrblock($address,'98.129.0.0/16','Rackspace (ASN-RKSP-31). ');
$ax += cidrblock($address,'103.28.40.0/22','Rackspace (ASN-RKSP-32). ');
$ax += cidrblock($address,'104.130.0.0/16','Rackspace (ASN-RKSP-33). ');
$ax += cidrblock($address,'104.239.128.0/17','Rackspace (ASN-RKSP-34). ');
$ax += cidrblock($address,'108.166.0.0/17','Rackspace (ASN-RKSP-35). ');
$ax += cidrblock($address,'108.171.160.0/19','Rackspace (ASN-RKSP-36). ');
$ax += cidrblock($address,'134.8.0.0/24','Rackspace (ASN-RKSP-37). ');
$ax += cidrblock($address,'134.8.2.0/24','Rackspace (ASN-RKSP-38). ');
$ax += cidrblock($address,'134.213.0.0/16','Rackspace (ASN-RKSP-39). ');
$ax += cidrblock($address,'142.0.184.0/22','Rackspace (ASN-RKSP-40). ');
$ax += cidrblock($address,'142.54.40.0/24','Rackspace (ASN-RKSP-41). ');
$ax += cidrblock($address,'146.20.0.0/16','Rackspace (ASN-RKSP-42). ');
$ax += cidrblock($address,'146.88.16.0/23','Rackspace (ASN-RKSP-43). ');
$ax += cidrblock($address,'146.88.18.0/24','Rackspace (ASN-RKSP-44). ');
$ax += cidrblock($address,'146.88.28.0/24','Rackspace (ASN-RKSP-45). ');
$ax += cidrblock($address,'146.177.0.0/16','Rackspace (ASN-RKSP-46). ');
$ax += cidrblock($address,'148.62.0.0/16','Rackspace (ASN-RKSP-47). ');
$ax += cidrblock($address,'156.43.59.0/24','Rackspace (ASN-RKSP-48). ');
$ax += cidrblock($address,'159.127.178.0/23','Rackspace (ASN-RKSP-49). ');
$ax += cidrblock($address,'161.47.0.0/18','Rackspace (ASN-RKSP-50). ');
$ax += cidrblock($address,'162.13.0.0/16','Rackspace (ASN-RKSP-51). ');
$ax += cidrblock($address,'162.209.0.0/17','Rackspace (ASN-RKSP-52). ');
$ax += cidrblock($address,'162.220.0.0/24','Rackspace (ASN-RKSP-53). ');
$ax += cidrblock($address,'162.242.128.0/17','Rackspace (ASN-RKSP-54). ');
$ax += cidrblock($address,'162.247.112.0/21','Rackspace (ASN-RKSP-55). ');
$ax += cidrblock($address,'163.47.180.0/22','Rackspace (ASN-RKSP-56). ');
$ax += cidrblock($address,'164.177.128.0/19','Rackspace (ASN-RKSP-57). ');
$ax += cidrblock($address,'166.78.0.0/16','Rackspace (ASN-RKSP-58). ');
$ax += cidrblock($address,'168.235.224.0/20','Rackspace (ASN-RKSP-59). ');
$ax += cidrblock($address,'172.99.64.0/18','Rackspace (ASN-RKSP-60). ');
$ax += cidrblock($address,'173.45.224.0/19','Rackspace (ASN-RKSP-61). ');
$ax += cidrblock($address,'173.203.0.0/16','Rackspace (ASN-RKSP-62). ');
$ax += cidrblock($address,'174.143.0.0/16','Rackspace (ASN-RKSP-63). ');
$ax += cidrblock($address,'175.107.191.0/24','Rackspace (ASN-RKSP-64). ');
$ax += cidrblock($address,'177.152.202.0/24','Rackspace (ASN-RKSP-65). ');
$ax += cidrblock($address,'184.106.0.0/16','Rackspace (ASN-RKSP-66). ');
$ax += cidrblock($address,'185.28.196.0/24','Rackspace (ASN-RKSP-67). ');
$ax += cidrblock($address,'185.36.144.0/22','Rackspace (ASN-RKSP-68). ');
$ax += cidrblock($address,'185.37.202.0/24','Rackspace (ASN-RKSP-69). ');
$ax += cidrblock($address,'185.64.72.0/24','Rackspace (ASN-RKSP-70). ');
$ax += cidrblock($address,'185.75.60.0/22','Rackspace (ASN-RKSP-71). ');
$ax += cidrblock($address,'192.40.168.0/21','Rackspace (ASN-RKSP-72). ');
$ax += cidrblock($address,'192.237.128.0/17','Rackspace (ASN-RKSP-73). ');
$ax += cidrblock($address,'193.142.244.0/24','Rackspace (ASN-RKSP-74). ');
$ax += cidrblock($address,'198.61.128.0/17','Rackspace (ASN-RKSP-75). ');
$ax += cidrblock($address,'198.101.128.0/17','Rackspace (ASN-RKSP-76). ');
$ax += cidrblock($address,'198.210.16.0/21','Rackspace (ASN-RKSP-77). ');
$ax += cidrblock($address,'198.254.64.0/20','Rackspace (ASN-RKSP-78). ');
$ax += cidrblock($address,'199.166.37.0/24','Rackspace (ASN-RKSP-79). ');
$ax += cidrblock($address,'203.55.21.0/24','Rackspace (ASN-RKSP-80). ');
$ax += cidrblock($address,'203.55.138.0/24','Rackspace (ASN-RKSP-81). ');
$ax += cidrblock($address,'204.75.142.0/24','Rackspace (ASN-RKSP-82). ');
$ax += cidrblock($address,'204.232.128.0/17','Rackspace (ASN-RKSP-83). ');
$ax += cidrblock($address,'205.166.177.0/24','Rackspace (ASN-RKSP-84). ');
$ax += cidrblock($address,'207.97.192.0/18','Rackspace (ASN-RKSP-85). ');
$ax += cidrblock($address,'208.78.96.0/21','Rackspace (ASN-RKSP-86). ');
$ax += cidrblock($address,'209.0.201.0/24','Rackspace (ASN-RKSP-87). ');
$ax += cidrblock($address,'209.20.64.0/19','Rackspace (ASN-RKSP-88). ');
$ax += cidrblock($address,'209.61.128.0/18','Rackspace (ASN-RKSP-89). ');
$ax += cidrblock($address,'209.114.32.0/19','Rackspace (ASN-RKSP-90). ');
$ax += cidrblock($address,'209.133.224.0/19','Rackspace (ASN-RKSP-91). ');
$ax += cidrblock($address,'209.163.232.0/21','Rackspace (ASN-RKSP-92). ');
$ax += cidrblock($address,'209.163.248.0/22','Rackspace (ASN-RKSP-93). ');
$ax += cidrblock($address,'212.64.128.0/19','Rackspace (ASN-RKSP-94). ');
if ($hoster != 'www.googlealert.com'){$ax += cidrblock($address,'212.100.224.0/19','Rackspace (ASN-RKSP-95). ');}
$ax += cidrblock($address,'216.18.148.0/22','Rackspace (ASN-RKSP-96). ');
$ax += cidrblock($address,'216.110.32.0/20','Rackspace (ASN-RKSP-97). ');


// Pakistan Telecom AS45595
// Spam without end, huge blacklistings! (updated 2016.01.18)
$ax += cidrblock($address,'39.32.0.0/11','Pakistan Telecom AS45595 (ASN-PkT-00). ');
$ax += cidrblock($address,'59.103.0.0/19','Pakistan Telecom AS45595 (ASN-PkT-01). ');
$ax += cidrblock($address,'59.103.48.0/20','Pakistan Telecom AS45595 (ASN-PkT-02). ');
$ax += cidrblock($address,'59.103.75.0/24','Pakistan Telecom AS45595 (ASN-PkT-03). ');
$ax += cidrblock($address,'59.103.76.0/24','Pakistan Telecom AS45595 (ASN-PkT-04). ');
$ax += cidrblock($address,'59.103.128.0/23','Pakistan Telecom AS45595 (ASN-PkT-05). ');
$ax += cidrblock($address,'59.103.132.0/22','Pakistan Telecom AS45595 (ASN-PkT-06). ');
$ax += cidrblock($address,'59.103.144.0/21','Pakistan Telecom AS45595 (ASN-PkT-07). ');
$ax += cidrblock($address,'59.103.155.0/24','Pakistan Telecom AS45595 (ASN-PkT-08). ');
$ax += cidrblock($address,'59.103.156.0/22','Pakistan Telecom AS45595 (ASN-PkT-09). ');
$ax += cidrblock($address,'59.103.164.0/22','Pakistan Telecom AS45595 (ASN-PkT-10). ');
$ax += cidrblock($address,'59.103.192.0/19','Pakistan Telecom AS45595 (ASN-PkT-11). ');
$ax += cidrblock($address,'59.103.224.0/24','Pakistan Telecom AS45595 (ASN-PkT-12). ');
$ax += cidrblock($address,'104.99.130.0/23','Pakistan Telecom AS45595 (ASN-PkT-13). ');
$ax += cidrblock($address,'104.99.132.0/22','Pakistan Telecom AS45595 (ASN-PkT-14). ');
$ax += cidrblock($address,'116.71.96.0/20','Pakistan Telecom AS45595 (ASN-PkT-15). ');
$ax += cidrblock($address,'116.71.192.0/18','Pakistan Telecom AS45595 (ASN-PkT-16). ');
$ax += cidrblock($address,'119.152.0.0/13','Pakistan Telecom AS45595 (ASN-PkT-17). ');
$ax += cidrblock($address,'182.176.0.0/12','Pakistan Telecom AS45595 (ASN-PkT-18). ');
$ax += cidrblock($address,'203.99.160.0/19','Pakistan Telecom AS45595 (ASN-PkT-19). ');
$ax += cidrblock($address,'203.128.252.0/24','Pakistan Telecom AS45595 (ASN-PkT-20). ');
$ax += cidrblock($address,'203.128.254.0/23','Pakistan Telecom AS45595 (ASN-PkT-21). ');
$ax += cidrblock($address,'203.135.11.0/24','Pakistan Telecom AS45595 (ASN-PkT-22). ');
$ax += cidrblock($address,'203.135.13.0/24','Pakistan Telecom AS45595 (ASN-PkT-23). ');
$ax += cidrblock($address,'203.135.16.0/24','Pakistan Telecom AS45595 (ASN-PkT-24). ');
$ax += cidrblock($address,'203.135.20.0/24','Pakistan Telecom AS45595 (ASN-PkT-25). ');
$ax += cidrblock($address,'203.135.24.0/23','Pakistan Telecom AS45595 (ASN-PkT-26). ');
$ax += cidrblock($address,'203.135.26.0/24','Pakistan Telecom AS45595 (ASN-PkT-27). ');
$ax += cidrblock($address,'203.135.30.0/24','Pakistan Telecom AS45595 (ASN-PkT-28). ');
$ax += cidrblock($address,'203.135.33.0/24','Pakistan Telecom AS45595 (ASN-PkT-29). ');
$ax += cidrblock($address,'203.135.34.0/23','Pakistan Telecom AS45595 (ASN-PkT-30). ');
$ax += cidrblock($address,'203.135.36.0/23','Pakistan Telecom AS45595 (ASN-PkT-31). ');
$ax += cidrblock($address,'203.135.38.0/24','Pakistan Telecom AS45595 (ASN-PkT-32). ');
$ax += cidrblock($address,'203.135.41.0/24','Pakistan Telecom AS45595 (ASN-PkT-33). ');
$ax += cidrblock($address,'203.135.43.0/24','Pakistan Telecom AS45595 (ASN-PkT-34). ');
$ax += cidrblock($address,'203.135.48.0/23','Pakistan Telecom AS45595 (ASN-PkT-35). ');
$ax += cidrblock($address,'203.135.50.0/24','Pakistan Telecom AS45595 (ASN-PkT-36). ');
$ax += cidrblock($address,'203.135.54.0/23','Pakistan Telecom AS45595 (ASN-PkT-37). ');
$ax += cidrblock($address,'203.135.58.0/24','Pakistan Telecom AS45595 (ASN-PkT-38). ');
$ax += cidrblock($address,'203.135.61.0/24','Pakistan Telecom AS45595 (ASN-PkT-39). ');


// Kintiskton LLC, Mark Manager copyright check bot (abusive history) (updated 2016.01.22)
$ax += cidrblock($address,'63.110.158.0/24','Kintiskton LLC (ASN-KINT-00). ');
$ax += cidrblock($address,'63.110.187.0/24','Kintiskton LLC (ASN-KINT-01). ');
$ax += cidrblock($address,'64.124.0.0/15','Kintiskton LLC (ASN-KINT-02). ');
$ax += cidrblock($address,'65.200.47.0/24','Kintiskton LLC (ASN-KINT-03). ');
$ax += cidrblock($address,'65.200.90.0/24','Kintiskton LLC (ASN-KINT-04). ');
$ax += cidrblock($address,'65.208.151.0/24','Kintiskton LLC (ASN-KINT-05). ');
$ax += cidrblock($address,'65.208.174.0/24','Kintiskton LLC (ASN-KINT-06). ');
$ax += cidrblock($address,'65.208.181.0/24','Kintiskton LLC (ASN-KINT-07). ');
$ax += cidrblock($address,'65.208.185.0/24','Kintiskton LLC (ASN-KINT-08). ');
$ax += cidrblock($address,'65.208.189.0/24','Kintiskton LLC (ASN-KINT-09). ');
$ax += cidrblock($address,'65.211.195.0/24','Kintiskton LLC (ASN-KINT-10). ');
$ax += cidrblock($address,'70.42.144.0/23','Kintiskton LLC (ASN-KINT-11). ');
$ax += cidrblock($address,'76.216.100.0/24','Kintiskton LLC (ASN-KINT-12). ');
$ax += cidrblock($address,'128.177.0.0/16','Kintiskton LLC (ASN-KINT-13). ');
$ax += cidrblock($address,'207.126.96.0/19','Kintiskton LLC (ASN-KINT-14). ');
$ax += cidrblock($address,'208.184.0.0/15','Kintiskton LLC (ASN-KINT-15). ');
$ax += cidrblock($address,'209.66.64.0/18','Kintiskton LLC (ASN-KINT-16). ');
$ax += cidrblock($address,'209.133.0.0/17','Kintiskton LLC (ASN-KINT-17). ');
$ax += cidrblock($address,'209.249.0.0/16','Kintiskton LLC (ASN-KINT-18). ');
$ax += cidrblock($address,'216.200.0.0/16','Kintiskton LLC (ASN-KINT-19). ');


// Limestone networks, Hosts of hackforums.net (updated 2016.01.19)
// AS46475
$ax += cidrblock($address,'63.143.32.0/19','Limestone Networks AS46475 (ASN-LSN-00). ');
$ax += cidrblock($address,'64.31.0.0/18','Limestone Networks AS46475 (ASN-LSN-01). ');
$ax += cidrblock($address,'69.162.64.0/18','Limestone Networks AS46475 (ASN-LSN-02). ');
$ax += cidrblock($address,'74.63.192.0/18','Limestone Networks AS46475 (ASN-LSN-03). ');
$ax += cidrblock($address,'103.3.166.0/24','Limestone Networks AS46475 (ASN-LSN-04). ');
$ax += cidrblock($address,'103.60.218.0/24','Limestone Networks AS46475 (ASN-LSN-05). ');
$ax += cidrblock($address,'135.84.217.0/24','Limestone Networks AS46475 (ASN-LSN-06). ');
$ax += cidrblock($address,'162.253.40.0/22','Limestone Networks AS46475 (ASN-LSN-07). ');
$ax += cidrblock($address,'192.169.80.0/20','Limestone Networks AS46475 (ASN-LSN-08). ');
$ax += cidrblock($address,'208.115.192.0/18','Limestone Networks AS46475 (ASN-LSN-09). ');
$ax += cidrblock($address,'216.144.240.0/20','Limestone Networks AS46475 (ASN-LSN-10). ');
$ax += cidrblock($address,'216.245.192.0/19','Limestone Networks AS46475 (ASN-LSN-11). ');


// Redstation Network (updated 2016.01.19)
// AS35662
$ax += cidrblock($address,'5.152.192.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-00). ');
$ax += cidrblock($address,'31.3.224.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-01). ');
$ax += cidrblock($address,'37.157.240.0/21','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-02). ');
$ax += cidrblock($address,'37.220.0.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-03). ');
$ax += cidrblock($address,'77.245.64.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-04). ');
$ax += cidrblock($address,'79.143.80.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-05). ');
$ax += cidrblock($address,'80.84.48.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-06). ');
$ax += cidrblock($address,'80.243.176.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-07). ');
$ax += cidrblock($address,'81.94.192.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-08). ');
$ax += cidrblock($address,'82.102.8.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-09). ');
$ax += cidrblock($address,'87.236.209.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-10). ');
$ax += cidrblock($address,'87.236.214.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-11). ');
$ax += cidrblock($address,'88.150.128.0/21','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-12). ');
$ax += cidrblock($address,'88.150.136.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-13). ');
$ax += cidrblock($address,'88.150.148.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-14). ');
$ax += cidrblock($address,'88.150.152.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-15). ');
$ax += cidrblock($address,'88.150.172.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-16). ');
$ax += cidrblock($address,'88.150.176.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-17). ');
$ax += cidrblock($address,'88.150.192.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-18). ');
$ax += cidrblock($address,'88.150.224.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-19). ');
$ax += cidrblock($address,'88.150.242.0/23','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-20). ');
$ax += cidrblock($address,'88.150.244.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-21). ');
$ax += cidrblock($address,'88.150.248.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-22). ');
$ax += cidrblock($address,'91.225.0.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-23). ');
$ax += cidrblock($address,'91.228.206.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-24). ');
$ax += cidrblock($address,'91.238.100.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-25). ');
$ax += cidrblock($address,'109.73.64.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-26). ');
$ax += cidrblock($address,'109.200.0.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-27). ');
$ax += cidrblock($address,'149.3.128.0/20','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-28). ');
$ax += cidrblock($address,'176.56.192.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-29). ');
$ax += cidrblock($address,'176.227.192.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-30). ');
$ax += cidrblock($address,'185.5.0.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-31). ');
$ax += cidrblock($address,'185.20.96.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-32). ');
$ax += cidrblock($address,'185.36.76.0/22','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-33). ');
$ax += cidrblock($address,'188.72.99.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-34). ');
$ax += cidrblock($address,'188.212.122.0/23','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-35). ');
$ax += cidrblock($address,'188.227.160.0/19','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-36). ');
$ax += cidrblock($address,'190.121.209.0/24','Redstation Limited, not an access provider ISP. (ASN-REDSTATION-37). ');


// AnchorFree Ltd network (updated 2016.01.19)
// AS26642
$ax += cidrblock($address,'46.16.34.0/23','AnchorFree Ltd network (AS-AF-00). ');
$ax += cidrblock($address,'74.115.3.0/24','AnchorFree Ltd network (AS-AF-01). ');
$ax += cidrblock($address,'74.115.5.0/24','AnchorFree Ltd network (AS-AF-02). ');
$ax += cidrblock($address,'85.237.197.0/24','AnchorFree Ltd network (AS-AF-03). ');
$ax += cidrblock($address,'85.237.222.0/24','AnchorFree Ltd network (AS-AF-04). ');


// CH-NET S.R.L. (updated 2016.01.19)
// Romainian network trying to hack user accounts.
// AS41011
$ax += cidrblock($address,'89.41.172.0/23','Romainian network trying to hack user accounts (ASN-AS41011-00). ');
$ax += cidrblock($address,'93.113.36.0/23','Romainian network trying to hack user accounts (ASN-AS41011-01). ');
$ax += cidrblock($address,'93.115.240.0/23','Romainian network trying to hack user accounts (ASN-AS41011-02). ');
$ax += cidrblock($address,'185.123.220.0/22','Romainian network trying to hack user accounts (ASN-AS41011-03). ');
$ax += cidrblock($address,'188.208.32.0/23','Romainian network trying to hack user accounts (ASN-AS41011-04). ');
$ax += cidrblock($address,'188.213.232.0/24','Romainian network trying to hack user accounts (ASN-AS41011-05). ');
$ax += cidrblock($address,'188.214.159.0/24','Romainian network trying to hack user accounts (ASN-AS41011-06). ');
$ax += cidrblock($address,'188.214.192.0/24','Romainian network trying to hack user accounts (ASN-AS41011-07). ');


// Swiftway / Botmaster Labs (updated 2016.01.19)
// AS35017
$ax += cidrblock($address,'5.56.133.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-00). ');
$ax += cidrblock($address,'5.61.28.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-01). ');
$ax += cidrblock($address,'23.227.192.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-02). ');
$ax += cidrblock($address,'31.187.78.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-03). ');
$ax += cidrblock($address,'37.1.208.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-04). ');
$ax += cidrblock($address,'37.72.168.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-05). ');
$ax += cidrblock($address,'38.69.204.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-06). ');
$ax += cidrblock($address,'45.74.17.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-07). ');
$ax += cidrblock($address,'45.74.18.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-08). ');
$ax += cidrblock($address,'45.74.20.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-09). ');
$ax += cidrblock($address,'45.74.24.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-10). ');
$ax += cidrblock($address,'45.74.32.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-11). ');
$ax += cidrblock($address,'45.74.34.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-12). ');
$ax += cidrblock($address,'45.74.40.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-13). ');
$ax += cidrblock($address,'45.74.47.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-14). ');
$ax += cidrblock($address,'45.74.48.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-15). ');
$ax += cidrblock($address,'45.74.56.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-16). ');
$ax += cidrblock($address,'46.21.144.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-17). ');
$ax += cidrblock($address,'46.243.150.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-18). ');
$ax += cidrblock($address,'69.1.69.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-19). ');
$ax += cidrblock($address,'89.233.104.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-20). ');
$ax += cidrblock($address,'91.199.45.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-21). ');
$ax += cidrblock($address,'91.239.64.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-22). ');
$ax += cidrblock($address,'94.100.16.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-23). ');
$ax += cidrblock($address,'104.143.32.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-24). ');
$ax += cidrblock($address,'104.243.251.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-25). ');
$ax += cidrblock($address,'104.250.160.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-26). ');
$ax += cidrblock($address,'114.31.208.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-27). ');
$ax += cidrblock($address,'114.31.210.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-28). ');
$ax += cidrblock($address,'114.141.112.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-29). ');
$ax += cidrblock($address,'149.154.158.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-30). ');
$ax += cidrblock($address,'149.255.32.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-31). ');
$ax += cidrblock($address,'151.236.16.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-32). ');
$ax += cidrblock($address,'151.236.22.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-33). ');
$ax += cidrblock($address,'158.255.213.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-34). ');
$ax += cidrblock($address,'162.252.172.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-35). ');
$ax += cidrblock($address,'172.94.10.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-36). ');
$ax += cidrblock($address,'172.94.19.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-37). ');
$ax += cidrblock($address,'172.94.28.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-38). ');
$ax += cidrblock($address,'172.94.64.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-39). ');
$ax += cidrblock($address,'172.94.67.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-40). ');
$ax += cidrblock($address,'172.94.68.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-41). ');
$ax += cidrblock($address,'172.94.70.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-42). ');
$ax += cidrblock($address,'172.94.72.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-43). ');
$ax += cidrblock($address,'172.94.80.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-44). ');
$ax += cidrblock($address,'172.94.92.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-45). ');
$ax += cidrblock($address,'172.94.113.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-46). ');
$ax += cidrblock($address,'172.94.114.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-47). ');
$ax += cidrblock($address,'172.111.136.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-48). ');
$ax += cidrblock($address,'172.111.152.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-49). ');
$ax += cidrblock($address,'191.101.20.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-50). ');
$ax += cidrblock($address,'191.101.31.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-51). ');
$ax += cidrblock($address,'193.221.125.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-52). ');
$ax += cidrblock($address,'194.126.172.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-53). ');
$ax += cidrblock($address,'195.242.152.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-54). ');
$ax += cidrblock($address,'198.176.48.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-55). ');
$ax += cidrblock($address,'206.123.146.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-56). ');
$ax += cidrblock($address,'206.123.150.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-57). ');
$ax += cidrblock($address,'206.123.152.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-58). ');
$ax += cidrblock($address,'209.222.76.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-59). ');
$ax += cidrblock($address,'209.251.26.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-60). ');


// SoftLayer Technologies/The Planet/Everyones Internet Hostile & Spam Tolerant Networks
// AS36351, AS36420, AS30315, AS13749, AS21844 (updated 2016.01.23)
$ax += cidrblock($address,'5.10.64.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-000). ');
$ax += cidrblock($address,'5.62.21.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-001). ');
$ax += cidrblock($address,'5.153.0.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-002). ');
$ax += cidrblock($address,'12.96.160.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-003). ');
$ax += cidrblock($address,'23.91.120.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-004). ');
$ax += cidrblock($address,'23.239.24.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-005). ');
$ax += cidrblock($address,'23.246.192.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-006). ');
$ax += cidrblock($address,'23.252.100.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-007). ');
$ax += cidrblock($address,'27.100.36.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-008). ');
$ax += cidrblock($address,'31.24.225.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-009). ');
$ax += cidrblock($address,'37.18.176.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-010). ');
$ax += cidrblock($address,'37.46.10.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-011). ');
$ax += cidrblock($address,'37.46.14.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-012). ');
$ax += cidrblock($address,'37.58.64.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-013). ');
$ax += cidrblock($address,'37.60.246.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-014). ');
$ax += cidrblock($address,'37.130.224.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-015). ');
$ax += cidrblock($address,'43.226.228.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-016). ');
$ax += cidrblock($address,'43.226.230.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-017). ');
$ax += cidrblock($address,'43.228.157.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-018). ');
$ax += cidrblock($address,'43.228.159.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-019). ');
$ax += cidrblock($address,'43.245.117.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-020). ');
$ax += cidrblock($address,'43.245.168.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-021). ');
$ax += cidrblock($address,'43.250.48.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-022). ');
$ax += cidrblock($address,'43.252.139.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-023). ');
$ax += cidrblock($address,'43.255.188.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-024). ');
$ax += cidrblock($address,'45.33.0.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-025). ');
$ax += cidrblock($address,'45.33.112.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-026). ');
$ax += cidrblock($address,'45.41.133.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-027). ');
$ax += cidrblock($address,'45.41.135.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-028). ');
$ax += cidrblock($address,'45.56.64.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-029). ');
$ax += cidrblock($address,'45.56.120.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-030). ');
$ax += cidrblock($address,'45.56.131.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-031). ');
$ax += cidrblock($address,'45.56.146.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-032). ');
$ax += cidrblock($address,'45.56.151.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-033). ');
$ax += cidrblock($address,'45.56.153.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-034). ');
$ax += cidrblock($address,'45.56.154.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-035). ');
$ax += cidrblock($address,'45.56.156.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-036). ');
$ax += cidrblock($address,'45.74.39.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-037). ');
$ax += cidrblock($address,'45.74.41.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-038). ');
$ax += cidrblock($address,'45.74.42.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-039). ');
$ax += cidrblock($address,'45.74.44.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-040). ');
$ax += cidrblock($address,'45.74.59.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-041). ');
$ax += cidrblock($address,'45.74.60.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-042). ');
$ax += cidrblock($address,'45.79.0.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-043). ');
$ax += cidrblock($address,'45.115.25.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-044). ');
$ax += cidrblock($address,'45.116.12.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-045). ');
$ax += cidrblock($address,'45.117.100.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-046). ');
$ax += cidrblock($address,'45.120.156.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-047). ');
$ax += cidrblock($address,'45.120.159.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-048). ');
$ax += cidrblock($address,'45.124.64.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-049). ');
$ax += cidrblock($address,'45.124.112.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-050). ');
$ax += cidrblock($address,'45.125.0.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-051). ');
$ax += cidrblock($address,'45.127.92.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-052). ');
$ax += cidrblock($address,'46.16.184.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-053). ');
$ax += cidrblock($address,'50.22.0.0/15','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-054). ');
$ax += cidrblock($address,'50.97.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-055). ');
$ax += cidrblock($address,'50.116.16.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-056). ');
$ax += cidrblock($address,'63.141.128.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-057). ');
$ax += cidrblock($address,'64.5.32.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-058). ');
$ax += cidrblock($address,'64.64.121.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-059). ');
$ax += cidrblock($address,'64.246.0.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-060). ');
$ax += cidrblock($address,'65.181.111.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-061). ');
$ax += cidrblock($address,'66.98.128.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-062). ');
$ax += cidrblock($address,'66.228.48.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-063). ');
$ax += cidrblock($address,'66.228.112.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-064). ');
$ax += cidrblock($address,'66.241.112.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-065). ');
$ax += cidrblock($address,'67.15.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-066). ');
$ax += cidrblock($address,'67.18.0.0/15','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-067). ');
$ax += cidrblock($address,'67.213.208.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-068). ');
$ax += cidrblock($address,'67.213.216.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-069). ');
$ax += cidrblock($address,'67.213.218.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-070). ');
$ax += cidrblock($address,'67.213.220.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-071). ');
$ax += cidrblock($address,'67.228.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-072). ');
$ax += cidrblock($address,'69.4.224.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-073). ');
$ax += cidrblock($address,'69.41.224.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-074). ');
$ax += cidrblock($address,'69.56.128.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-075). ');
$ax += cidrblock($address,'69.57.128.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-076). ');
$ax += cidrblock($address,'69.93.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-077). ');
$ax += cidrblock($address,'69.164.192.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-078). ');
$ax += cidrblock($address,'69.168.235.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-079). ');
$ax += cidrblock($address,'69.168.236.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-080). ');
$ax += cidrblock($address,'69.168.238.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-081). ');
$ax += cidrblock($address,'70.84.0.0/14','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-082). ');
$ax += cidrblock($address,'72.14.176.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-083). ');
$ax += cidrblock($address,'74.52.0.0/14','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-084). ');
$ax += cidrblock($address,'74.86.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-085). ');
$ax += cidrblock($address,'74.116.84.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-086). ');
$ax += cidrblock($address,'74.121.55.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-087). ');
$ax += cidrblock($address,'75.125.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-088). ');
$ax += cidrblock($address,'75.126.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-089). ');
$ax += cidrblock($address,'81.95.144.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-090). ');
$ax += cidrblock($address,'85.203.20.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-091). ');
$ax += cidrblock($address,'89.38.52.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-092). ');
$ax += cidrblock($address,'96.47.32.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-093). ');
$ax += cidrblock($address,'96.47.40.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-094). ');
$ax += cidrblock($address,'96.126.112.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-095). ');
$ax += cidrblock($address,'100.42.49.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-096). ');
$ax += cidrblock($address,'100.42.50.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-097). ');
$ax += cidrblock($address,'100.42.52.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-098). ');
$ax += cidrblock($address,'100.42.56.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-099). ');
$ax += cidrblock($address,'100.42.60.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-100). ');
$ax += cidrblock($address,'100.42.62.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-101). ');
$ax += cidrblock($address,'103.4.192.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-102). ');
$ax += cidrblock($address,'103.19.0.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-103). ');
$ax += cidrblock($address,'103.27.76.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-104). ');
$ax += cidrblock($address,'103.35.56.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-105). ');
$ax += cidrblock($address,'103.41.172.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-106). ');
$ax += cidrblock($address,'103.44.72.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-107). ');
$ax += cidrblock($address,'103.46.141.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-108). ');
$ax += cidrblock($address,'103.46.143.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-109). ');
$ax += cidrblock($address,'103.52.212.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-110). ');
$ax += cidrblock($address,'103.53.196.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-111). ');
$ax += cidrblock($address,'103.56.52.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-112). ');
$ax += cidrblock($address,'103.56.216.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-113). ');
$ax += cidrblock($address,'103.57.165.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-114). ');
$ax += cidrblock($address,'103.57.166.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-115). ');
$ax += cidrblock($address,'103.192.176.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-116). ');
$ax += cidrblock($address,'103.192.178.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-117). ');
$ax += cidrblock($address,'103.192.224.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-118). ');
$ax += cidrblock($address,'103.193.4.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-119). ');
$ax += cidrblock($address,'103.193.128.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-120). ');
$ax += cidrblock($address,'103.194.40.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-121). ');
$ax += cidrblock($address,'103.194.43.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-122). ');
$ax += cidrblock($address,'103.195.150.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-123). ');
$ax += cidrblock($address,'103.197.160.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-124). ');
$ax += cidrblock($address,'103.197.252.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-125). ');
$ax += cidrblock($address,'103.198.76.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-126). ');
$ax += cidrblock($address,'103.200.96.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-127). ');
$ax += cidrblock($address,'103.200.112.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-128). ');
$ax += cidrblock($address,'103.201.128.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-129). ');
$ax += cidrblock($address,'103.201.130.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-130). ');
$ax += cidrblock($address,'103.203.56.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-131). ');
$ax += cidrblock($address,'103.203.90.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-132). ');
$ax += cidrblock($address,'103.204.13.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-133). ');
$ax += cidrblock($address,'103.226.228.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-134). ');
$ax += cidrblock($address,'103.227.156.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-135). ');
$ax += cidrblock($address,'103.227.208.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-136). ');
$ax += cidrblock($address,'103.243.19.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-137). ');
$ax += cidrblock($address,'103.243.72.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-138). ');
$ax += cidrblock($address,'103.243.144.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-139). ');
$ax += cidrblock($address,'103.243.204.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-140). ');
$ax += cidrblock($address,'103.253.25.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-141). ');
$ax += cidrblock($address,'103.253.26.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-142). ');
$ax += cidrblock($address,'104.37.3.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-143). ');
$ax += cidrblock($address,'104.37.5.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-144). ');
$ax += cidrblock($address,'104.152.64.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-145). ');
$ax += cidrblock($address,'104.167.30.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-146). ');
$ax += cidrblock($address,'104.167.217.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-147). ');
$ax += cidrblock($address,'104.171.0.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-148). ');
$ax += cidrblock($address,'104.171.4.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-149). ');
$ax += cidrblock($address,'104.171.7.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-150). ');
$ax += cidrblock($address,'104.171.8.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-151). ');
$ax += cidrblock($address,'104.171.13.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-152). ');
$ax += cidrblock($address,'104.171.14.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-153). ');
$ax += cidrblock($address,'104.193.183.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-154). ');
$ax += cidrblock($address,'104.193.184.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-155). ');
$ax += cidrblock($address,'104.194.203.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-156). ');
$ax += cidrblock($address,'104.194.216.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-157). ');
$ax += cidrblock($address,'104.195.64.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-158). ');
$ax += cidrblock($address,'104.195.80.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-159). ');
$ax += cidrblock($address,'104.200.16.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-160). ');
$ax += cidrblock($address,'104.207.69.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-161). ');
$ax += cidrblock($address,'104.207.76.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-162). ');
$ax += cidrblock($address,'104.207.83.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-163). ');
$ax += cidrblock($address,'104.207.84.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-164). ');
$ax += cidrblock($address,'104.222.131.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-165). ');
$ax += cidrblock($address,'104.222.140.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-166). ');
$ax += cidrblock($address,'104.222.145.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-167). ');
$ax += cidrblock($address,'104.222.149.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-168). ');
$ax += cidrblock($address,'104.237.91.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-169). ');
$ax += cidrblock($address,'104.237.93.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-170). ');
$ax += cidrblock($address,'104.237.128.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-171). ');
$ax += cidrblock($address,'104.238.57.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-172). ');
$ax += cidrblock($address,'104.238.59.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-173). ');
$ax += cidrblock($address,'104.243.249.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-174). ');
$ax += cidrblock($address,'104.243.253.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-175). ');
$ax += cidrblock($address,'104.245.12.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-176). ');
$ax += cidrblock($address,'104.249.128.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-177). ');
$ax += cidrblock($address,'104.250.172.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-178). ');
$ax += cidrblock($address,'104.250.179.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-179). ');
$ax += cidrblock($address,'104.250.183.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-180). ');
$ax += cidrblock($address,'107.153.20.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-181). ');
$ax += cidrblock($address,'107.168.32.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-182). ');
$ax += cidrblock($address,'107.168.48.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-183). ');
$ax += cidrblock($address,'107.168.70.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-184). ');
$ax += cidrblock($address,'107.168.80.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-185). ');
$ax += cidrblock($address,'108.167.162.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-186). ');
$ax += cidrblock($address,'108.168.128.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-187). ');
$ax += cidrblock($address,'108.174.144.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-188). ');
$ax += cidrblock($address,'108.174.154.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-189). ');
$ax += cidrblock($address,'108.174.156.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-190). ');
$ax += cidrblock($address,'108.175.144.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-191). ');
$ax += cidrblock($address,'108.175.152.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-192). ');
$ax += cidrblock($address,'108.175.154.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-193). ');
$ax += cidrblock($address,'108.175.156.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-194). ');
$ax += cidrblock($address,'108.229.0.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-195). ');
$ax += cidrblock($address,'109.73.228.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-196). ');
$ax += cidrblock($address,'109.73.234.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-197). ');
$ax += cidrblock($address,'109.199.117.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-198). ');
$ax += cidrblock($address,'109.199.119.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-199). ');
$ax += cidrblock($address,'109.199.122.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-200). ');
$ax += cidrblock($address,'109.199.126.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-201). ');
$ax += cidrblock($address,'111.221.45.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-202). ');
$ax += cidrblock($address,'111.221.46.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-203). ');
$ax += cidrblock($address,'115.124.32.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-204). ');
$ax += cidrblock($address,'116.213.44.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-205). ');
$ax += cidrblock($address,'119.18.48.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-206). ');
$ax += cidrblock($address,'119.18.53.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-207). ');
$ax += cidrblock($address,'119.18.56.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-208). ');
$ax += cidrblock($address,'119.81.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-209). ');
$ax += cidrblock($address,'122.10.103.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-210). ');
$ax += cidrblock($address,'122.128.96.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-211). ');
$ax += cidrblock($address,'124.108.23.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-212). ');
$ax += cidrblock($address,'129.33.138.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-213). ');
$ax += cidrblock($address,'129.41.128.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-214). ');
$ax += cidrblock($address,'129.41.222.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-215). ');
$ax += cidrblock($address,'129.41.224.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-216). ');
$ax += cidrblock($address,'129.42.18.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-217). ');
$ax += cidrblock($address,'129.42.20.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-218). ');
$ax += cidrblock($address,'134.168.0.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-219). ');
$ax += cidrblock($address,'138.204.168.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-220). ');
$ax += cidrblock($address,'142.147.95.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-221). ');
$ax += cidrblock($address,'146.88.128.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-222). ');
$ax += cidrblock($address,'146.88.135.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-223). ');
$ax += cidrblock($address,'147.75.130.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-224). ');
$ax += cidrblock($address,'149.75.192.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-225). ');
$ax += cidrblock($address,'153.92.41.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-226). ');
$ax += cidrblock($address,'153.92.43.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-227). ');
$ax += cidrblock($address,'153.92.44.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-228). ');
$ax += cidrblock($address,'153.92.46.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-229). ');
$ax += cidrblock($address,'154.16.96.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-230). ');
$ax += cidrblock($address,'155.254.246.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-231). ');
$ax += cidrblock($address,'158.85.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-232). ');
$ax += cidrblock($address,'159.8.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-233). ');
$ax += cidrblock($address,'159.100.176.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-234). ');
$ax += cidrblock($address,'159.100.184.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-235). ');
$ax += cidrblock($address,'159.100.188.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-236). ');
$ax += cidrblock($address,'159.100.190.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-237). ');
$ax += cidrblock($address,'159.122.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-238). ');
$ax += cidrblock($address,'159.253.128.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-239). ');
$ax += cidrblock($address,'161.202.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-240). ');
$ax += cidrblock($address,'162.210.48.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-241). ');
$ax += cidrblock($address,'162.244.167.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-242). ');
$ax += cidrblock($address,'162.246.184.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-243). ');
$ax += cidrblock($address,'162.253.144.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-244). ');
$ax += cidrblock($address,'162.254.160.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-245). ');
$ax += cidrblock($address,'165.212.98.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-246). ');
$ax += cidrblock($address,'165.212.240.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-247). ');
$ax += cidrblock($address,'167.160.113.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-248). ');
$ax += cidrblock($address,'168.1.0.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-249). ');
$ax += cidrblock($address,'168.1.128.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-250). ');
$ax += cidrblock($address,'169.38.64.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-251). ');
$ax += cidrblock($address,'169.44.0.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-252). ');
$ax += cidrblock($address,'169.45.0.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-253). ');
$ax += cidrblock($address,'169.45.64.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-254). ');
$ax += cidrblock($address,'169.45.128.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-255). ');
$ax += cidrblock($address,'169.50.0.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-256). ');
$ax += cidrblock($address,'169.50.128.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-257). ');
$ax += cidrblock($address,'169.53.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-258). ');
$ax += cidrblock($address,'169.54.0.0/15','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-259). ');
$ax += cidrblock($address,'169.57.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-260). ');
$ax += cidrblock($address,'172.81.110.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-261). ');
$ax += cidrblock($address,'172.94.3.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-262). ');
$ax += cidrblock($address,'172.94.4.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-263). ');
$ax += cidrblock($address,'172.94.6.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-264). ');
$ax += cidrblock($address,'172.94.27.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-265). ');
$ax += cidrblock($address,'172.94.29.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-266). ');
$ax += cidrblock($address,'172.94.39.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-267). ');
$ax += cidrblock($address,'172.94.46.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-268). ');
$ax += cidrblock($address,'172.94.48.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-269). ');
$ax += cidrblock($address,'172.94.82.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-270). ');
$ax += cidrblock($address,'172.94.84.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-271). ');
$ax += cidrblock($address,'172.94.86.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-272). ');
$ax += cidrblock($address,'172.94.88.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-273). ');
$ax += cidrblock($address,'172.94.116.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-274). ');
$ax += cidrblock($address,'172.94.118.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-275). ');
$ax += cidrblock($address,'172.94.120.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-276). ');
$ax += cidrblock($address,'172.96.113.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-277). ');
$ax += cidrblock($address,'172.96.114.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-278). ');
$ax += cidrblock($address,'172.96.116.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-279). ');
$ax += cidrblock($address,'172.96.120.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-280). ');
$ax += cidrblock($address,'172.111.135.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-281). ');
$ax += cidrblock($address,'172.111.137.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-282). ');
$ax += cidrblock($address,'172.111.145.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-283). ');
$ax += cidrblock($address,'172.111.153.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-284). ');
$ax += cidrblock($address,'172.111.155.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-285). ');
$ax += cidrblock($address,'172.111.160.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-286). ');
$ax += cidrblock($address,'172.111.162.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-287). ');
$ax += cidrblock($address,'172.111.164.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-288). ');
$ax += cidrblock($address,'172.111.169.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-289). ');
$ax += cidrblock($address,'172.111.236.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-290). ');
$ax += cidrblock($address,'172.111.240.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-291). ');
$ax += cidrblock($address,'173.192.0.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-292). ');
$ax += cidrblock($address,'173.192.128.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-293). ');
$ax += cidrblock($address,'173.192.192.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-294). ');
$ax += cidrblock($address,'173.192.224.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-295). ');
$ax += cidrblock($address,'173.192.240.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-296). ');
$ax += cidrblock($address,'173.192.244.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-297). ');
$ax += cidrblock($address,'173.192.248.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-298). ');
$ax += cidrblock($address,'173.193.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-299). ');
$ax += cidrblock($address,'173.239.207.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-300). ');
$ax += cidrblock($address,'173.244.192.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-301). ');
$ax += cidrblock($address,'173.244.203.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-302). ');
$ax += cidrblock($address,'173.244.204.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-303). ');
$ax += cidrblock($address,'173.244.210.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-304). ');
$ax += cidrblock($address,'173.244.212.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-305). ');
$ax += cidrblock($address,'173.244.216.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-306). ');
$ax += cidrblock($address,'173.244.218.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-307). ');
$ax += cidrblock($address,'173.244.220.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-308). ');
$ax += cidrblock($address,'173.255.132.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-309). ');
$ax += cidrblock($address,'173.255.136.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-310). ');
$ax += cidrblock($address,'173.255.192.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-311). ');
$ax += cidrblock($address,'174.36.0.0/15','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-312). ');
$ax += cidrblock($address,'174.120.0.0/14','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-313). ');
$ax += cidrblock($address,'174.127.64.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-314). ');
$ax += cidrblock($address,'174.127.68.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-315). ');
$ax += cidrblock($address,'174.127.71.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-316). ');
$ax += cidrblock($address,'174.127.72.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-317). ');
$ax += cidrblock($address,'174.127.76.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-318). ');
$ax += cidrblock($address,'174.127.78.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-319). ');
$ax += cidrblock($address,'174.127.80.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-320). ');
$ax += cidrblock($address,'174.127.85.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-321). ');
$ax += cidrblock($address,'174.127.86.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-322). ');
$ax += cidrblock($address,'174.127.88.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-323). ');
$ax += cidrblock($address,'174.127.92.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-324). ');
$ax += cidrblock($address,'174.127.96.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-325). ');
$ax += cidrblock($address,'174.132.0.0/15','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-326). ');
$ax += cidrblock($address,'175.158.105.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-327). ');
$ax += cidrblock($address,'175.158.107.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-328). ');
$ax += cidrblock($address,'176.126.67.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-329). ');
$ax += cidrblock($address,'176.126.68.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-330). ');
$ax += cidrblock($address,'177.136.8.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-331). ');
$ax += cidrblock($address,'179.61.246.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-332). ');
$ax += cidrblock($address,'179.61.250.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-333). ');
$ax += cidrblock($address,'180.235.137.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-334). ');
$ax += cidrblock($address,'180.235.138.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-335). ');
$ax += cidrblock($address,'181.41.193.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-336). ');
$ax += cidrblock($address,'181.224.149.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-337). ');
$ax += cidrblock($address,'181.224.150.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-338). ');
$ax += cidrblock($address,'181.224.156.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-339). ');
$ax += cidrblock($address,'184.172.0.0/15','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-340). ');
$ax += cidrblock($address,'185.10.228.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-341). ');
$ax += cidrblock($address,'185.13.56.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-342). ');
$ax += cidrblock($address,'185.21.132.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-343). ');
$ax += cidrblock($address,'185.51.164.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-344). ');
$ax += cidrblock($address,'185.62.236.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-345). ');
$ax += cidrblock($address,'185.74.47.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-346). ');
$ax += cidrblock($address,'185.99.135.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-347). ');
$ax += cidrblock($address,'185.106.204.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-348). ');
$ax += cidrblock($address,'185.115.241.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-349). ');
$ax += cidrblock($address,'185.123.96.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-350). ');
$ax += cidrblock($address,'186.26.96.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-351). ');
$ax += cidrblock($address,'188.72.100.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-352). ');
$ax += cidrblock($address,'190.105.194.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-353). ');
$ax += cidrblock($address,'191.96.49.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-354). ');
$ax += cidrblock($address,'191.96.64.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-355). ');
$ax += cidrblock($address,'191.96.103.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-356). ');
$ax += cidrblock($address,'191.96.105.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-357). ');
$ax += cidrblock($address,'191.101.56.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-358). ');
$ax += cidrblock($address,'191.101.63.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-359). ');
$ax += cidrblock($address,'191.101.135.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-360). ');
$ax += cidrblock($address,'191.101.179.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-361). ');
$ax += cidrblock($address,'192.40.176.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-362). ');
$ax += cidrblock($address,'192.77.241.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-363). ');
$ax += cidrblock($address,'192.81.139.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-364). ');
$ax += cidrblock($address,'192.155.192.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-365). ');
$ax += cidrblock($address,'192.169.48.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-366). ');
$ax += cidrblock($address,'192.200.160.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-367). ');
$ax += cidrblock($address,'192.230.46.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-368). ');
$ax += cidrblock($address,'192.240.209.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-369). ');
$ax += cidrblock($address,'192.240.215.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-370). ');
$ax += cidrblock($address,'192.253.242.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-371). ');
$ax += cidrblock($address,'192.253.248.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-372). ');
$ax += cidrblock($address,'192.253.252.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-373). ');
$ax += cidrblock($address,'192.255.0.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-374). ');
$ax += cidrblock($address,'196.45.123.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-375). ');
$ax += cidrblock($address,'198.11.192.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-376). ');
$ax += cidrblock($address,'198.23.64.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-377). ');
$ax += cidrblock($address,'198.58.80.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-378). ');
$ax += cidrblock($address,'198.58.82.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-379). ');
$ax += cidrblock($address,'198.58.84.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-380). ');
$ax += cidrblock($address,'198.58.88.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-381). ');
$ax += cidrblock($address,'198.58.96.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-382). ');
$ax += cidrblock($address,'198.105.221.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-383). ');
$ax += cidrblock($address,'198.105.222.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-384). ');
$ax += cidrblock($address,'198.144.16.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-385). ');
$ax += cidrblock($address,'198.144.24.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-386). ');
$ax += cidrblock($address,'198.144.28.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-387). ');
$ax += cidrblock($address,'198.144.30.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-388). ');
$ax += cidrblock($address,'198.252.64.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-389). ');
$ax += cidrblock($address,'198.252.96.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-390). ');
$ax += cidrblock($address,'198.252.100.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-391). ');
$ax += cidrblock($address,'198.252.104.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-392). ');
$ax += cidrblock($address,'199.166.34.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-393). ');
$ax += cidrblock($address,'199.167.226.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-394). ');
$ax += cidrblock($address,'199.185.180.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-395). ');
$ax += cidrblock($address,'199.187.172.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-396). ');
$ax += cidrblock($address,'199.195.192.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-397). ');
$ax += cidrblock($address,'199.244.72.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-398). ');
$ax += cidrblock($address,'202.5.220.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-399). ');
$ax += cidrblock($address,'202.5.223.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-400). ');
$ax += cidrblock($address,'202.81.5.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-401). ');
$ax += cidrblock($address,'202.168.152.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-402). ');
$ax += cidrblock($address,'202.170.196.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-403). ');
$ax += cidrblock($address,'203.27.26.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-404). ');
$ax += cidrblock($address,'203.57.74.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-405). ');
$ax += cidrblock($address,'205.201.129.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-406). ');
$ax += cidrblock($address,'205.201.130.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-407). ');
$ax += cidrblock($address,'205.201.136.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-408). ');
$ax += cidrblock($address,'206.190.155.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-409). ');
$ax += cidrblock($address,'206.190.156.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-410). ');
$ax += cidrblock($address,'206.217.192.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-411). ');
$ax += cidrblock($address,'206.217.200.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-412). ');
$ax += cidrblock($address,'206.217.208.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-413). ');
$ax += cidrblock($address,'206.253.232.0/21','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-414). ');
$ax += cidrblock($address,'206.253.248.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-415). ');
$ax += cidrblock($address,'207.44.128.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-416). ');
$ax += cidrblock($address,'207.189.184.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-417). ');
$ax += cidrblock($address,'207.218.192.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-418). ');
$ax += cidrblock($address,'208.43.0.0/16','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-419). ');
$ax += cidrblock($address,'208.73.4.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-420). ');
$ax += cidrblock($address,'208.73.7.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-421). ');
$ax += cidrblock($address,'208.75.56.0/22','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-422). ');
$ax += cidrblock($address,'208.101.0.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-423). ');
$ax += cidrblock($address,'209.62.0.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-424). ');
$ax += cidrblock($address,'209.85.0.0/17','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-425). ');
$ax += cidrblock($address,'209.95.57.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-426). ');
$ax += cidrblock($address,'209.95.58.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-427). ');
$ax += cidrblock($address,'209.95.60.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-428). ');
$ax += cidrblock($address,'209.95.62.0/23','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-429). ');
$ax += cidrblock($address,'213.52.131.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-430). ');
$ax += cidrblock($address,'216.12.192.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-431). ');
$ax += cidrblock($address,'216.40.192.0/18','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-432). ');
$ax += cidrblock($address,'216.127.64.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-433). ');
$ax += cidrblock($address,'216.185.96.0/19','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-434). ');
$ax += cidrblock($address,'216.234.240.0/20','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-435). ');
$ax += cidrblock($address,'216.239.104.0/24','Softlayer/ThePlanet/Everyone/Reach (ASN-SLTP-436). ');


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

// Prolexic Technologies DDoS mitigation services. (updated 2016.01.20)
// AS32787, AS7743
// Attempted DoSing of: SpambotSecurity.com from IP 114.141.72.50 on 2012-12-09 @2230 hours MST
$ax += cidrblock($address,'62.172.140.0/24','Prolexic Technologies (ASN-PLX-00). ');
$ax += cidrblock($address,'63.251.64.0/23','Prolexic Technologies (ASN-PLX-01). ');
$ax += cidrblock($address,'66.150.54.0/24','Prolexic Technologies (ASN-PLX-02). ');
$ax += cidrblock($address,'72.52.0.0/24','Prolexic Technologies (ASN-PLX-03). ');
$ax += cidrblock($address,'72.52.2.0/24','Prolexic Technologies (ASN-PLX-04). ');
$ax += cidrblock($address,'72.52.4.0/22','Prolexic Technologies (ASN-PLX-05). ');
$ax += cidrblock($address,'72.52.8.0/21','Prolexic Technologies (ASN-PLX-06). ');
$ax += cidrblock($address,'72.52.16.0/20','Prolexic Technologies (ASN-PLX-07). ');
$ax += cidrblock($address,'72.52.32.0/21','Prolexic Technologies (ASN-PLX-08). ');
$ax += cidrblock($address,'72.52.40.0/22','Prolexic Technologies (ASN-PLX-09). ');
$ax += cidrblock($address,'72.52.44.0/23','Prolexic Technologies (ASN-PLX-10). ');
$ax += cidrblock($address,'72.52.46.0/24','Prolexic Technologies (ASN-PLX-11). ');
$ax += cidrblock($address,'72.52.48.0/21','Prolexic Technologies (ASN-PLX-12). ');
$ax += cidrblock($address,'72.52.56.0/22','Prolexic Technologies (ASN-PLX-13). ');
$ax += cidrblock($address,'72.52.60.0/23','Prolexic Technologies (ASN-PLX-14). ');
$ax += cidrblock($address,'75.98.76.0/24','Prolexic Technologies (ASN-PLX-15). ');
$ax += cidrblock($address,'80.65.251.0/24','Prolexic Technologies (ASN-PLX-16). ');
$ax += cidrblock($address,'81.174.71.0/24','Prolexic Technologies (ASN-PLX-17). ');
$ax += cidrblock($address,'93.191.168.0/23','Prolexic Technologies (ASN-PLX-18). ');
$ax += cidrblock($address,'93.191.172.0/24','Prolexic Technologies (ASN-PLX-19). ');
$ax += cidrblock($address,'114.141.72.0/23','Prolexic Technologies (ASN-PLX-20). ');
$ax += cidrblock($address,'114.141.76.0/24','Prolexic Technologies (ASN-PLX-21). ');
$ax += cidrblock($address,'145.15.41.0/24','Prolexic Technologies (ASN-PLX-22). ');
$ax += cidrblock($address,'159.53.0.0/16','Prolexic Technologies (ASN-PLX-23). ');
$ax += cidrblock($address,'193.19.90.0/23','Prolexic Technologies (ASN-PLX-24). ');
$ax += cidrblock($address,'193.47.187.0/24','Prolexic Technologies (ASN-PLX-25). ');
$ax += cidrblock($address,'193.200.156.0/24','Prolexic Technologies (ASN-PLX-26). ');
$ax += cidrblock($address,'194.34.8.0/23','Prolexic Technologies (ASN-PLX-27). ');
$ax += cidrblock($address,'194.34.10.0/24','Prolexic Technologies (ASN-PLX-28). ');
$ax += cidrblock($address,'194.50.35.0/24','Prolexic Technologies (ASN-PLX-29). ');
$ax += cidrblock($address,'194.75.128.0/23','Prolexic Technologies (ASN-PLX-30). ');
$ax += cidrblock($address,'195.171.195.0/24','Prolexic Technologies (ASN-PLX-31). ');
$ax += cidrblock($address,'195.171.220.0/24','Prolexic Technologies (ASN-PLX-32). ');
$ax += cidrblock($address,'199.253.243.0/24','Prolexic Technologies (ASN-PLX-33). ');
$ax += cidrblock($address,'199.253.244.0/23','Prolexic Technologies (ASN-PLX-34). ');
$ax += cidrblock($address,'203.127.2.0/24','Prolexic Technologies (ASN-PLX-35). ');
$ax += cidrblock($address,'205.173.39.0/24','Prolexic Technologies (ASN-PLX-36). ');
$ax += cidrblock($address,'207.203.28.0/23','Prolexic Technologies (ASN-PLX-37). ');
$ax += cidrblock($address,'207.203.30.0/24','Prolexic Technologies (ASN-PLX-38). ');
$ax += cidrblock($address,'209.112.14.0/24','Prolexic Technologies (ASN-PLX-39). ');
$ax += cidrblock($address,'209.200.132.0/23','Prolexic Technologies (ASN-PLX-40). ');
$ax += cidrblock($address,'209.200.134.0/24','Prolexic Technologies (ASN-PLX-41). ');
$ax += cidrblock($address,'209.200.136.0/21','Prolexic Technologies (ASN-PLX-42). ');
$ax += cidrblock($address,'209.200.144.0/21','Prolexic Technologies (ASN-PLX-43). ');
$ax += cidrblock($address,'209.200.152.0/22','Prolexic Technologies (ASN-PLX-44). ');
$ax += cidrblock($address,'209.200.156.0/24','Prolexic Technologies (ASN-PLX-45). ');
$ax += cidrblock($address,'209.200.158.0/23','Prolexic Technologies (ASN-PLX-46). ');
$ax += cidrblock($address,'209.200.160.0/20','Prolexic Technologies (ASN-PLX-47). ');
$ax += cidrblock($address,'209.200.176.0/21','Prolexic Technologies (ASN-PLX-48). ');
$ax += cidrblock($address,'209.200.184.0/23','Prolexic Technologies (ASN-PLX-49). ');
$ax += cidrblock($address,'209.200.186.0/24','Prolexic Technologies (ASN-PLX-50). ');
$ax += cidrblock($address,'209.200.188.0/22','Prolexic Technologies (ASN-PLX-51). ');
$ax += cidrblock($address,'209.211.208.0/22','Prolexic Technologies (ASN-PLX-52). ');
$ax += cidrblock($address,'210.130.217.0/24','Prolexic Technologies (ASN-PLX-53). ');
$ax += cidrblock($address,'210.130.218.0/24','Prolexic Technologies (ASN-PLX-54). ');
$ax += cidrblock($address,'210.130.233.0/24','Prolexic Technologies (ASN-PLX-55). ');
$ax += cidrblock($address,'210.130.234.0/24','Prolexic Technologies (ASN-PLX-56). ');
$ax += cidrblock($address,'212.239.17.0/24','Prolexic Technologies (ASN-PLX-57). ');
$ax += cidrblock($address,'216.12.45.0/24','Prolexic Technologies (ASN-PLX-58). ');


// Portlane Networks AB (updated 2016.01.20)
// Huge set of anonymous VPN and Proxy spamming services!
// AS42708
$ax += cidrblock($address,'5.198.248.0/21','Portlane Networks AB (ASN-PTL-000). ');
$ax += cidrblock($address,'5.249.160.0/21','Portlane Networks AB (ASN-PTL-001). ');
$ax += cidrblock($address,'5.254.128.0/19','Portlane Networks AB (ASN-PTL-002). ');
$ax += cidrblock($address,'31.187.64.0/24','Portlane Networks AB (ASN-PTL-003). ');
$ax += cidrblock($address,'31.187.76.0/24','Portlane Networks AB (ASN-PTL-004). ');
$ax += cidrblock($address,'31.220.4.0/22','Portlane Networks AB (ASN-PTL-005). ');
$ax += cidrblock($address,'31.220.15.0/24','Portlane Networks AB (ASN-PTL-006). ');
$ax += cidrblock($address,'31.220.30.0/24','Portlane Networks AB (ASN-PTL-007). ');
$ax += cidrblock($address,'31.220.42.0/23','Portlane Networks AB (ASN-PTL-008). ');
$ax += cidrblock($address,'31.220.44.0/23','Portlane Networks AB (ASN-PTL-009). ');
$ax += cidrblock($address,'46.246.0.0/17','Portlane Networks AB (ASN-PTL-010). ');
$ax += cidrblock($address,'80.67.0.0/20','Portlane Networks AB (ASN-PTL-011). ');
$ax += cidrblock($address,'80.243.125.0/24','Portlane Networks AB (ASN-PTL-012). ');
$ax += cidrblock($address,'91.213.246.0/24','Portlane Networks AB (ASN-PTL-013). ');
$ax += cidrblock($address,'91.217.189.0/24','Portlane Networks AB (ASN-PTL-014). ');
$ax += cidrblock($address,'91.236.116.0/24','Portlane Networks AB (ASN-PTL-015). ');
$ax += cidrblock($address,'109.230.199.0/24','Portlane Networks AB (ASN-PTL-016). ');
$ax += cidrblock($address,'141.138.208.0/21','Portlane Networks AB (ASN-PTL-017). ');
$ax += cidrblock($address,'153.92.126.0/23','Portlane Networks AB (ASN-PTL-018). ');
$ax += cidrblock($address,'172.94.0.0/24','Portlane Networks AB (ASN-PTL-019). ');
$ax += cidrblock($address,'176.126.65.0/24','Portlane Networks AB (ASN-PTL-020). ');
$ax += cidrblock($address,'176.126.84.0/23','Portlane Networks AB (ASN-PTL-021). ');
$ax += cidrblock($address,'178.73.192.0/18','Portlane Networks AB (ASN-PTL-022). ');
$ax += cidrblock($address,'185.5.44.0/24','Portlane Networks AB (ASN-PTL-023). ');
$ax += cidrblock($address,'185.9.3.0/24','Portlane Networks AB (ASN-PTL-024). ');
$ax += cidrblock($address,'185.13.40.0/22','Portlane Networks AB (ASN-PTL-025). ');
$ax += cidrblock($address,'185.16.87.0/24','Portlane Networks AB (ASN-PTL-026). ');
$ax += cidrblock($address,'185.66.144.0/22','Portlane Networks AB (ASN-PTL-027). ');
$ax += cidrblock($address,'185.97.214.0/24','Portlane Networks AB (ASN-PTL-028). ');
$ax += cidrblock($address,'185.120.6.0/24','Portlane Networks AB (ASN-PTL-029). ');
$ax += cidrblock($address,'188.126.64.0/19','Portlane Networks AB (ASN-PTL-030). ');
$ax += cidrblock($address,'192.36.119.0/24','Portlane Networks AB (ASN-PTL-031). ');
$ax += cidrblock($address,'192.36.121.0/24','Portlane Networks AB (ASN-PTL-032). ');
$ax += cidrblock($address,'192.36.154.0/24','Portlane Networks AB (ASN-PTL-033). ');
$ax += cidrblock($address,'192.36.166.0/24','Portlane Networks AB (ASN-PTL-034). ');
$ax += cidrblock($address,'192.36.198.0/24','Portlane Networks AB (ASN-PTL-035). ');
$ax += cidrblock($address,'192.36.207.0/24','Portlane Networks AB (ASN-PTL-036). ');
$ax += cidrblock($address,'192.36.217.0/24','Portlane Networks AB (ASN-PTL-037). ');
$ax += cidrblock($address,'192.36.226.0/24','Portlane Networks AB (ASN-PTL-038). ');
$ax += cidrblock($address,'192.36.241.0/24','Portlane Networks AB (ASN-PTL-039). ');
$ax += cidrblock($address,'192.36.248.0/24','Portlane Networks AB (ASN-PTL-040). ');
$ax += cidrblock($address,'192.71.8.0/24','Portlane Networks AB (ASN-PTL-041). ');
$ax += cidrblock($address,'192.71.10.0/24','Portlane Networks AB (ASN-PTL-042). ');
$ax += cidrblock($address,'192.71.12.0/24','Portlane Networks AB (ASN-PTL-043). ');
$ax += cidrblock($address,'192.71.23.0/24','Portlane Networks AB (ASN-PTL-044). ');
$ax += cidrblock($address,'192.71.30.0/24','Portlane Networks AB (ASN-PTL-045). ');
$ax += cidrblock($address,'192.71.36.0/24','Portlane Networks AB (ASN-PTL-046). ');
$ax += cidrblock($address,'192.71.38.0/24','Portlane Networks AB (ASN-PTL-047). ');
$ax += cidrblock($address,'192.71.42.0/24','Portlane Networks AB (ASN-PTL-048). ');
$ax += cidrblock($address,'192.71.44.0/24','Portlane Networks AB (ASN-PTL-049). ');
$ax += cidrblock($address,'192.71.46.0/24','Portlane Networks AB (ASN-PTL-050). ');
$ax += cidrblock($address,'192.71.48.0/24','Portlane Networks AB (ASN-PTL-051). ');
$ax += cidrblock($address,'192.71.50.0/24','Portlane Networks AB (ASN-PTL-052). ');
$ax += cidrblock($address,'192.71.52.0/24','Portlane Networks AB (ASN-PTL-053). ');
$ax += cidrblock($address,'192.71.57.0/24','Portlane Networks AB (ASN-PTL-054). ');
$ax += cidrblock($address,'192.71.59.0/24','Portlane Networks AB (ASN-PTL-055). ');
$ax += cidrblock($address,'192.71.61.0/24','Portlane Networks AB (ASN-PTL-056). ');
$ax += cidrblock($address,'192.71.74.0/24','Portlane Networks AB (ASN-PTL-057). ');
$ax += cidrblock($address,'192.71.81.0/24','Portlane Networks AB (ASN-PTL-058). ');
$ax += cidrblock($address,'192.71.103.0/24','Portlane Networks AB (ASN-PTL-059). ');
$ax += cidrblock($address,'192.71.126.0/24','Portlane Networks AB (ASN-PTL-060). ');
$ax += cidrblock($address,'192.71.142.0/24','Portlane Networks AB (ASN-PTL-061). ');
$ax += cidrblock($address,'192.71.144.0/24','Portlane Networks AB (ASN-PTL-062). ');
$ax += cidrblock($address,'192.121.122.0/23','Portlane Networks AB (ASN-PTL-063). ');
$ax += cidrblock($address,'192.121.124.0/23','Portlane Networks AB (ASN-PTL-064). ');
$ax += cidrblock($address,'192.121.126.0/24','Portlane Networks AB (ASN-PTL-065). ');
$ax += cidrblock($address,'192.121.134.0/23','Portlane Networks AB (ASN-PTL-066). ');
$ax += cidrblock($address,'192.121.136.0/24','Portlane Networks AB (ASN-PTL-067). ');
$ax += cidrblock($address,'192.121.146.0/23','Portlane Networks AB (ASN-PTL-068). ');
$ax += cidrblock($address,'192.121.148.0/23','Portlane Networks AB (ASN-PTL-069). ');
$ax += cidrblock($address,'192.121.152.0/24','Portlane Networks AB (ASN-PTL-070). ');
$ax += cidrblock($address,'192.121.155.0/24','Portlane Networks AB (ASN-PTL-071). ');
$ax += cidrblock($address,'192.121.185.0/24','Portlane Networks AB (ASN-PTL-072). ');
$ax += cidrblock($address,'192.121.186.0/24','Portlane Networks AB (ASN-PTL-073). ');
$ax += cidrblock($address,'192.121.225.0/24','Portlane Networks AB (ASN-PTL-074). ');
$ax += cidrblock($address,'192.121.251.0/24','Portlane Networks AB (ASN-PTL-075). ');
$ax += cidrblock($address,'192.165.17.0/24','Portlane Networks AB (ASN-PTL-076). ');
$ax += cidrblock($address,'192.165.48.0/24','Portlane Networks AB (ASN-PTL-077). ');
$ax += cidrblock($address,'192.165.121.0/24','Portlane Networks AB (ASN-PTL-078). ');
$ax += cidrblock($address,'192.165.123.0/24','Portlane Networks AB (ASN-PTL-079). ');
$ax += cidrblock($address,'192.165.205.0/24','Portlane Networks AB (ASN-PTL-080). ');
$ax += cidrblock($address,'192.176.27.0/24','Portlane Networks AB (ASN-PTL-081). ');
$ax += cidrblock($address,'192.176.28.0/24','Portlane Networks AB (ASN-PTL-082). ');
$ax += cidrblock($address,'193.25.127.0/24','Portlane Networks AB (ASN-PTL-083). ');
$ax += cidrblock($address,'193.105.134.0/24','Portlane Networks AB (ASN-PTL-084). ');
$ax += cidrblock($address,'193.180.123.0/24','Portlane Networks AB (ASN-PTL-085). ');
$ax += cidrblock($address,'193.181.16.0/22','Portlane Networks AB (ASN-PTL-086). ');
$ax += cidrblock($address,'193.181.234.0/24','Portlane Networks AB (ASN-PTL-087). ');
$ax += cidrblock($address,'193.182.19.0/24','Portlane Networks AB (ASN-PTL-088). ');
$ax += cidrblock($address,'193.183.82.0/23','Portlane Networks AB (ASN-PTL-089). ');
$ax += cidrblock($address,'193.183.84.0/24','Portlane Networks AB (ASN-PTL-090). ');
$ax += cidrblock($address,'193.183.86.0/23','Portlane Networks AB (ASN-PTL-091). ');
$ax += cidrblock($address,'193.183.88.0/23','Portlane Networks AB (ASN-PTL-092). ');
$ax += cidrblock($address,'193.183.108.0/22','Portlane Networks AB (ASN-PTL-093). ');
$ax += cidrblock($address,'193.183.120.0/22','Portlane Networks AB (ASN-PTL-094). ');
$ax += cidrblock($address,'193.234.255.0/24','Portlane Networks AB (ASN-PTL-095). ');
$ax += cidrblock($address,'193.235.73.0/24','Portlane Networks AB (ASN-PTL-096). ');
$ax += cidrblock($address,'193.235.200.0/23','Portlane Networks AB (ASN-PTL-097). ');
$ax += cidrblock($address,'194.14.28.0/23','Portlane Networks AB (ASN-PTL-098). ');
$ax += cidrblock($address,'194.14.45.0/24','Portlane Networks AB (ASN-PTL-099). ');
$ax += cidrblock($address,'194.14.85.0/24','Portlane Networks AB (ASN-PTL-100). ');
$ax += cidrblock($address,'194.14.87.0/24','Portlane Networks AB (ASN-PTL-101). ');
$ax += cidrblock($address,'194.14.206.0/24','Portlane Networks AB (ASN-PTL-102). ');
$ax += cidrblock($address,'194.14.222.0/23','Portlane Networks AB (ASN-PTL-103). ');
$ax += cidrblock($address,'194.68.96.0/24','Portlane Networks AB (ASN-PTL-104). ');
$ax += cidrblock($address,'194.68.112.0/23','Portlane Networks AB (ASN-PTL-105). ');
$ax += cidrblock($address,'194.103.9.0/24','Portlane Networks AB (ASN-PTL-106). ');
$ax += cidrblock($address,'194.103.11.0/24','Portlane Networks AB (ASN-PTL-107). ');
$ax += cidrblock($address,'194.103.33.0/24','Portlane Networks AB (ASN-PTL-108). ');
$ax += cidrblock($address,'194.103.207.0/24','Portlane Networks AB (ASN-PTL-109). ');
$ax += cidrblock($address,'194.103.211.0/24','Portlane Networks AB (ASN-PTL-110). ');
$ax += cidrblock($address,'194.103.212.0/23','Portlane Networks AB (ASN-PTL-111). ');
$ax += cidrblock($address,'194.132.11.0/24','Portlane Networks AB (ASN-PTL-112). ');
$ax += cidrblock($address,'194.132.31.0/24','Portlane Networks AB (ASN-PTL-113). ');
$ax += cidrblock($address,'194.132.112.0/24','Portlane Networks AB (ASN-PTL-114). ');
$ax += cidrblock($address,'194.132.115.0/24','Portlane Networks AB (ASN-PTL-115). ');
$ax += cidrblock($address,'194.132.200.0/22','Portlane Networks AB (ASN-PTL-116). ');
$ax += cidrblock($address,'198.105.121.0/24','Portlane Networks AB (ASN-PTL-117). ');


// WEBEXXPURTS / Deepak Servers and Colocation. Not an access provider ISP. (updated 2016.01.20)
// OLD: AS57972 NEW: AS57858, AS60485
$ax += cidrblock($address,'5.34.240.0/21','WEBEXXPURTS (ASN-WXX-00). ');
$ax += cidrblock($address,'5.153.232.0/22','WEBEXXPURTS (ASN-WXX-01). ');
$ax += cidrblock($address,'5.153.237.0/24','WEBEXXPURTS (ASN-WXX-02). ');
$ax += cidrblock($address,'5.153.238.0/24','WEBEXXPURTS (ASN-WXX-03). ');
$ax += cidrblock($address,'5.157.0.0/22','WEBEXXPURTS (ASN-WXX-04). ');
$ax += cidrblock($address,'5.157.6.0/24','WEBEXXPURTS (ASN-WXX-05). ');
$ax += cidrblock($address,'5.157.10.0/23','WEBEXXPURTS (ASN-WXX-06). ');
$ax += cidrblock($address,'5.157.14.0/23','WEBEXXPURTS (ASN-WXX-07). ');
$ax += cidrblock($address,'5.157.16.0/24','WEBEXXPURTS (ASN-WXX-08). ');
$ax += cidrblock($address,'5.157.36.0/24','WEBEXXPURTS (ASN-WXX-09). ');
$ax += cidrblock($address,'5.157.38.0/23','WEBEXXPURTS (ASN-WXX-10). ');
$ax += cidrblock($address,'5.157.40.0/22','WEBEXXPURTS (ASN-WXX-11). ');
$ax += cidrblock($address,'5.157.44.0/23','WEBEXXPURTS (ASN-WXX-12). ');
$ax += cidrblock($address,'5.157.48.0/23','WEBEXXPURTS (ASN-WXX-13). ');
$ax += cidrblock($address,'5.157.50.0/24','WEBEXXPURTS (ASN-WXX-14). ');
$ax += cidrblock($address,'5.157.54.0/24','WEBEXXPURTS (ASN-WXX-15). ');
$ax += cidrblock($address,'37.72.184.0/23','WEBEXXPURTS (ASN-WXX-16). ');
$ax += cidrblock($address,'37.72.188.0/22','WEBEXXPURTS (ASN-WXX-17). ');
$ax += cidrblock($address,'37.203.208.0/22','WEBEXXPURTS (ASN-WXX-18). ');
$ax += cidrblock($address,'37.203.212.0/23','WEBEXXPURTS (ASN-WXX-19). ');
$ax += cidrblock($address,'37.203.214.0/24','WEBEXXPURTS (ASN-WXX-20). ');
$ax += cidrblock($address,'46.29.248.0/21','WEBEXXPURTS (ASN-WXX-21). ');
$ax += cidrblock($address,'91.108.176.0/21','WEBEXXPURTS (ASN-WXX-22). ');
$ax += cidrblock($address,'130.185.152.0/23','WEBEXXPURTS (ASN-WXX-23). ');
$ax += cidrblock($address,'130.185.155.0/24','WEBEXXPURTS (ASN-WXX-24). ');
$ax += cidrblock($address,'130.185.156.0/22','WEBEXXPURTS (ASN-WXX-25). ');
$ax += cidrblock($address,'151.237.176.0/22','WEBEXXPURTS (ASN-WXX-26). ');
$ax += cidrblock($address,'151.237.180.0/23','WEBEXXPURTS (ASN-WXX-27). ');
$ax += cidrblock($address,'151.237.184.0/23','WEBEXXPURTS (ASN-WXX-28). ');
$ax += cidrblock($address,'151.237.188.0/22','WEBEXXPURTS (ASN-WXX-29). ');
$ax += cidrblock($address,'165.231.0.0/22','WEBEXXPURTS (ASN-WXX-30). ');
$ax += cidrblock($address,'165.231.8.0/24','WEBEXXPURTS (ASN-WXX-31). ');
$ax += cidrblock($address,'165.231.14.0/24','WEBEXXPURTS (ASN-WXX-32). ');
$ax += cidrblock($address,'165.231.16.0/24','WEBEXXPURTS (ASN-WXX-33). ');
$ax += cidrblock($address,'165.231.18.0/24','WEBEXXPURTS (ASN-WXX-34). ');
$ax += cidrblock($address,'165.231.20.0/24','WEBEXXPURTS (ASN-WXX-35). ');
$ax += cidrblock($address,'165.231.27.0/24','WEBEXXPURTS (ASN-WXX-36). ');
$ax += cidrblock($address,'165.231.80.0/24','WEBEXXPURTS (ASN-WXX-37). ');
$ax += cidrblock($address,'165.231.83.0/24','WEBEXXPURTS (ASN-WXX-38). ');
$ax += cidrblock($address,'165.231.84.0/24','WEBEXXPURTS (ASN-WXX-39). ');
$ax += cidrblock($address,'165.231.87.0/24','WEBEXXPURTS (ASN-WXX-40). ');
$ax += cidrblock($address,'165.231.90.0/24','WEBEXXPURTS (ASN-WXX-41). ');
$ax += cidrblock($address,'165.231.92.0/24','WEBEXXPURTS (ASN-WXX-42). ');
$ax += cidrblock($address,'165.231.95.0/24','WEBEXXPURTS (ASN-WXX-43). ');
$ax += cidrblock($address,'176.61.136.0/21','WEBEXXPURTS (ASN-WXX-44). ');
$ax += cidrblock($address,'178.216.48.0/21','WEBEXXPURTS (ASN-WXX-45). ');
$ax += cidrblock($address,'185.3.132.0/22','WEBEXXPURTS (ASN-WXX-46). ');
$ax += cidrblock($address,'196.196.0.0/24','WEBEXXPURTS (ASN-WXX-47). ');
$ax += cidrblock($address,'196.196.2.0/23','WEBEXXPURTS (ASN-WXX-48). ');
$ax += cidrblock($address,'196.196.4.0/24','WEBEXXPURTS (ASN-WXX-49). ');
$ax += cidrblock($address,'196.196.16.0/24','WEBEXXPURTS (ASN-WXX-50). ');
$ax += cidrblock($address,'196.196.18.0/24','WEBEXXPURTS (ASN-WXX-51). ');
$ax += cidrblock($address,'196.196.20.0/24','WEBEXXPURTS (ASN-WXX-52). ');
$ax += cidrblock($address,'196.196.22.0/24','WEBEXXPURTS (ASN-WXX-53). ');
$ax += cidrblock($address,'196.196.24.0/24','WEBEXXPURTS (ASN-WXX-54). ');
$ax += cidrblock($address,'196.196.28.0/24','WEBEXXPURTS (ASN-WXX-55). ');
$ax += cidrblock($address,'196.196.33.0/24','WEBEXXPURTS (ASN-WXX-56). ');
$ax += cidrblock($address,'196.196.34.0/24','WEBEXXPURTS (ASN-WXX-57). ');
$ax += cidrblock($address,'196.196.37.0/24','WEBEXXPURTS (ASN-WXX-58). ');
$ax += cidrblock($address,'196.196.39.0/24','WEBEXXPURTS (ASN-WXX-59). ');


// Hurricane Electric, not an access provider ISP. (updated 2016.01.23)
// Too many infected and hostile servers. Good folks otherwise (Free DYN-DNS service SBS enjoys)
// AS6939
$ax += cidrblock($address,'5.152.177.0/24','Hurricane Electric (ASN-HE1-000). ');
$ax += cidrblock($address,'5.152.179.0/24','Hurricane Electric (ASN-HE1-001). ');
$ax += cidrblock($address,'5.152.180.0/22','Hurricane Electric (ASN-HE1-002). ');
$ax += cidrblock($address,'23.92.24.0/22','Hurricane Electric (ASN-HE1-003). ');
$ax += cidrblock($address,'23.239.0.0/21','Hurricane Electric (ASN-HE1-004). ');
$ax += cidrblock($address,'23.239.20.0/22','Hurricane Electric (ASN-HE1-005). ');
$ax += cidrblock($address,'27.50.32.0/21','Hurricane Electric (ASN-HE1-006). ');
$ax += cidrblock($address,'37.16.72.0/21','Hurricane Electric (ASN-HE1-007). ');
$ax += cidrblock($address,'45.33.32.0/19','Hurricane Electric (ASN-HE1-008). ');
$ax += cidrblock($address,'45.33.104.0/21','Hurricane Electric (ASN-HE1-009). ');
$ax += cidrblock($address,'45.33.128.0/20','Hurricane Electric (ASN-HE1-010). ');
$ax += cidrblock($address,'45.56.80.0/20','Hurricane Electric (ASN-HE1-011). ');
$ax += cidrblock($address,'45.79.64.0/18','Hurricane Electric (ASN-HE1-012). ');
$ax += cidrblock($address,'45.79.224.0/19','Hurricane Electric (ASN-HE1-013). ');
$ax += cidrblock($address,'50.116.0.0/20','Hurricane Electric (ASN-HE1-014). ');
$ax += cidrblock($address,'64.62.128.0/17','Hurricane Electric (ASN-HE1-015). ');
$ax += cidrblock($address,'64.71.128.0/18','Hurricane Electric (ASN-HE1-016). ');
$ax += cidrblock($address,'64.187.96.0/19','Hurricane Electric (ASN-HE1-017). ');
$ax += cidrblock($address,'65.19.128.0/18','Hurricane Electric (ASN-HE1-018). ');
$ax += cidrblock($address,'65.49.0.0/17','Hurricane Electric (ASN-HE1-019). ');
if ((cidrblock($address,'65.49.67.0/24','')) && ($ax == 1) && (inmatch($whyblockout,'(ASN-HE1-019)',''))){$ax = 0; $whyblockout .= 'Access provider block bypass (BYP-ASN-HE1-019-01)';} //77f modified 2016.01.23/BADIP-2016-01+U.9
$ax += cidrblock($address,'66.160.128.0/18','Hurricane Electric (ASN-HE1-020). ');
$ax += cidrblock($address,'66.160.192.0/20','Hurricane Electric (ASN-HE1-021). ');
$ax += cidrblock($address,'66.175.216.0/21','Hurricane Electric (ASN-HE1-022). ');
$ax += cidrblock($address,'66.178.176.0/20','Hurricane Electric (ASN-HE1-023). ');
$ax += cidrblock($address,'66.220.0.0/19','Hurricane Electric (ASN-HE1-024). ');
$ax += cidrblock($address,'70.35.16.0/21','Hurricane Electric (ASN-HE1-025). ');
$ax += cidrblock($address,'72.52.64.0/18','Hurricane Electric (ASN-HE1-026). ');
$ax += cidrblock($address,'74.82.0.0/18','Hurricane Electric (ASN-HE1-027). ');
$ax += cidrblock($address,'74.113.40.0/24','Hurricane Electric (ASN-HE1-028). ');
$ax += cidrblock($address,'74.113.42.0/24','Hurricane Electric (ASN-HE1-029). ');
$ax += cidrblock($address,'74.113.44.0/24','Hurricane Electric (ASN-HE1-030). ');
$ax += cidrblock($address,'74.113.46.0/23','Hurricane Electric (ASN-HE1-031). ');
$ax += cidrblock($address,'74.113.68.0/22','Hurricane Electric (ASN-HE1-032). ');
$ax += cidrblock($address,'74.121.104.0/22','Hurricane Electric (ASN-HE1-033). ');
$ax += cidrblock($address,'74.207.240.0/20','Hurricane Electric (ASN-HE1-034). ');
$ax += cidrblock($address,'96.126.96.0/21','Hurricane Electric (ASN-HE1-035). ');
$ax += cidrblock($address,'98.158.224.0/20','Hurricane Electric (ASN-HE1-036). ');
$ax += cidrblock($address,'103.193.186.0/23','Hurricane Electric (ASN-HE1-037). ');
$ax += cidrblock($address,'103.249.0.0/24','Hurricane Electric (ASN-HE1-038). ');
$ax += cidrblock($address,'104.36.120.0/22','Hurricane Electric (ASN-HE1-039). ');
$ax += cidrblock($address,'104.129.240.0/20','Hurricane Electric (ASN-HE1-040). ');
$ax += cidrblock($address,'104.193.248.0/22','Hurricane Electric (ASN-HE1-041). ');
$ax += cidrblock($address,'104.200.24.0/22','Hurricane Electric (ASN-HE1-042). ');
$ax += cidrblock($address,'104.218.36.0/22','Hurricane Electric (ASN-HE1-043). ');
$ax += cidrblock($address,'104.219.136.0/21','Hurricane Electric (ASN-HE1-044). ');
$ax += cidrblock($address,'104.237.152.0/21','Hurricane Electric (ASN-HE1-045). ');
$ax += cidrblock($address,'104.255.240.0/21','Hurricane Electric (ASN-HE1-046). ');
$ax += cidrblock($address,'107.178.32.0/20','Hurricane Electric (ASN-HE1-047). ');
$ax += cidrblock($address,'124.252.252.0/24','Hurricane Electric (ASN-HE1-048). ');
$ax += cidrblock($address,'148.51.0.0/16','Hurricane Electric (ASN-HE1-049). ');
$ax += cidrblock($address,'161.123.225.0/24','Hurricane Electric (ASN-HE1-050). ');
$ax += cidrblock($address,'162.219.48.0/23','Hurricane Electric (ASN-HE1-051). ');
$ax += cidrblock($address,'162.219.50.0/24','Hurricane Electric (ASN-HE1-052). ');
$ax += cidrblock($address,'162.247.12.0/22','Hurricane Electric (ASN-HE1-053). ');
$ax += cidrblock($address,'162.249.152.0/22','Hurricane Electric (ASN-HE1-054). ');
$ax += cidrblock($address,'173.230.144.0/20','Hurricane Electric (ASN-HE1-055). ');
$ax += cidrblock($address,'173.255.208.0/20','Hurricane Electric (ASN-HE1-056). ');
$ax += cidrblock($address,'173.255.240.0/20','Hurricane Electric (ASN-HE1-057). ');
$ax += cidrblock($address,'184.75.240.0/21','Hurricane Electric (ASN-HE1-058). ');
$ax += cidrblock($address,'184.104.0.0/15','Hurricane Electric (ASN-HE1-059). ');
$ax += cidrblock($address,'185.101.97.0/24','Hurricane Electric (ASN-HE1-060). ');
$ax += cidrblock($address,'185.114.36.0/24','Hurricane Electric (ASN-HE1-061). ');
$ax += cidrblock($address,'191.101.245.0/24','Hurricane Electric (ASN-HE1-062). ');
$ax += cidrblock($address,'192.52.69.0/24','Hurricane Electric (ASN-HE1-063). ');
$ax += cidrblock($address,'192.52.250.0/23','Hurricane Electric (ASN-HE1-064). ');
$ax += cidrblock($address,'192.81.128.0/21','Hurricane Electric (ASN-HE1-065). ');
$ax += cidrblock($address,'192.81.196.0/22','Hurricane Electric (ASN-HE1-066). ');
$ax += cidrblock($address,'192.81.248.0/22','Hurricane Electric (ASN-HE1-067). ');
$ax += cidrblock($address,'192.88.99.0/24','Hurricane Electric (ASN-HE1-068). ');
// $ax += cidrblock($address,'192.126.120.0/22','Hurricane Electric (ASN-HE1-069). '); Duplicate of ASN-26484-39
$ax += cidrblock($address,'192.132.94.0/24','Hurricane Electric (ASN-HE1-070). ');
$ax += cidrblock($address,'192.136.112.0/24','Hurricane Electric (ASN-HE1-071). ');
$ax += cidrblock($address,'192.155.80.0/21','Hurricane Electric (ASN-HE1-072). ');
$ax += cidrblock($address,'192.156.200.0/24','Hurricane Electric (ASN-HE1-073). ');
$ax += cidrblock($address,'192.190.255.0/24','Hurricane Electric (ASN-HE1-074). ');
$ax += cidrblock($address,'193.142.62.0/24','Hurricane Electric (ASN-HE1-075). ');
$ax += cidrblock($address,'198.36.120.0/21','Hurricane Electric (ASN-HE1-076). ');
$ax += cidrblock($address,'198.74.48.0/22','Hurricane Electric (ASN-HE1-077). ');
$ax += cidrblock($address,'198.102.73.0/24','Hurricane Electric (ASN-HE1-078). ');
$ax += cidrblock($address,'199.4.150.0/24','Hurricane Electric (ASN-HE1-079). ');
$ax += cidrblock($address,'199.16.200.0/21','Hurricane Electric (ASN-HE1-080). ');
$ax += cidrblock($address,'199.34.120.0/21','Hurricane Electric (ASN-HE1-081). ');
$ax += cidrblock($address,'199.74.248.0/24','Hurricane Electric (ASN-HE1-082). ');
$ax += cidrblock($address,'199.88.158.0/24','Hurricane Electric (ASN-HE1-083). ');
$ax += cidrblock($address,'199.233.90.0/24','Hurricane Electric (ASN-HE1-084). ');
$ax += cidrblock($address,'199.233.198.0/23','Hurricane Electric (ASN-HE1-085). ');
$ax += cidrblock($address,'199.245.105.0/24','Hurricane Electric (ASN-HE1-086). ');
$ax += cidrblock($address,'203.12.6.0/24','Hurricane Electric (ASN-HE1-087). ');
$ax += cidrblock($address,'203.99.142.0/24','Hurricane Electric (ASN-HE1-088). ');
$ax += cidrblock($address,'204.10.104.0/21','Hurricane Electric (ASN-HE1-089). ');
$ax += cidrblock($address,'204.14.104.0/21','Hurricane Electric (ASN-HE1-090). ');
$ax += cidrblock($address,'204.187.91.0/24','Hurricane Electric (ASN-HE1-091). ');
$ax += cidrblock($address,'204.238.49.0/24','Hurricane Electric (ASN-HE1-092). ');
$ax += cidrblock($address,'205.159.239.0/24','Hurricane Electric (ASN-HE1-093). ');
$ax += cidrblock($address,'205.166.121.0/24','Hurricane Electric (ASN-HE1-094). ');
$ax += cidrblock($address,'206.108.49.0/24','Hurricane Electric (ASN-HE1-095). ');
$ax += cidrblock($address,'206.108.51.0/24','Hurricane Electric (ASN-HE1-096). ');
$ax += cidrblock($address,'206.108.55.0/24','Hurricane Electric (ASN-HE1-097). ');
$ax += cidrblock($address,'206.144.144.0/20','Hurricane Electric (ASN-HE1-098). ');
$ax += cidrblock($address,'207.171.210.0/23','Hurricane Electric (ASN-HE1-099). ');
$ax += cidrblock($address,'207.171.226.0/24','Hurricane Electric (ASN-HE1-100). ');
$ax += cidrblock($address,'208.75.96.0/21','Hurricane Electric (ASN-HE1-101). ');
$ax += cidrblock($address,'209.51.160.0/19','Hurricane Electric (ASN-HE1-102). ');
$ax += cidrblock($address,'209.150.160.0/19','Hurricane Electric (ASN-HE1-103). ');
// $ax += cidrblock($address,'213.52.131.0/24','Hurricane Electric (ASN-HE1-104). '); Duplicate of ASN-SLTP-430.
$ax += cidrblock($address,'216.66.0.0/18','Hurricane Electric (ASN-HE1-105). ');
// $ax += cidrblock($address,'216.66.64.0/19','Hurricane Electric (ASN-HE1-106). '); Possible access provider (can we confirm this?)
$ax += cidrblock($address,'216.105.164.0/22','Hurricane Electric (ASN-HE1-107). ');
$ax += cidrblock($address,'216.126.60.0/22','Hurricane Electric (ASN-HE1-108). ');
$ax += cidrblock($address,'216.152.64.0/20','Hurricane Electric (ASN-HE1-109). ');
$ax += cidrblock($address,'216.163.108.0/24','Hurricane Electric (ASN-HE1-110). ');
$ax += cidrblock($address,'216.171.192.0/23','Hurricane Electric (ASN-HE1-111). ');
$ax += cidrblock($address,'216.171.196.0/24','Hurricane Electric (ASN-HE1-112). ');
$ax += cidrblock($address,'216.171.201.0/24','Hurricane Electric (ASN-HE1-113). ');
$ax += cidrblock($address,'216.171.202.0/24','Hurricane Electric (ASN-HE1-114). ');
$ax += cidrblock($address,'216.171.204.0/23','Hurricane Electric (ASN-HE1-115). ');
$ax += cidrblock($address,'216.171.206.0/24','Hurricane Electric (ASN-HE1-116). ');
$ax += cidrblock($address,'216.171.208.0/24','Hurricane Electric (ASN-HE1-117). ');
$ax += cidrblock($address,'216.171.218.0/24','Hurricane Electric (ASN-HE1-118). ');
$ax += cidrblock($address,'216.171.220.0/23','Hurricane Electric (ASN-HE1-119). ');
$ax += cidrblock($address,'216.218.128.0/17','Hurricane Electric (ASN-HE1-120). ');
$ax += cidrblock($address,'216.224.64.0/19','Hurricane Electric (ASN-HE1-121). ');
$ax += cidrblock($address,'216.229.96.0/20','Hurricane Electric (ASN-HE1-122). ');


//Bypasses for (ASN-HEx) (mod 74d 77g 2016.01.23/BADIP-2016-01+U.9)

if (((inmatch($whyblockout,'(ASN-HE1-)','')) || (inmatch($whyblockout,'(ASN-HE1-019)',''))) && ($ax > 0)){
	$zbamz = 0;
	$zbamz += rmatch($lcuseragent,'.getpebble.com','Nice enough to ask bypass. '); //74e
    $zbamz += inmatch($useragent,'Feedspot http://www.feedspot.com',' Feedspot bypass. ' ); //74c
	$zbamz += inmatch($useragent,'Feedly',' Feedly bypass. ' ); //74c
	if ($zbamz > 0){$ax -= 1;}
}


// Virpus Networks, not an access provider ISP. (updated 2016.01.19)
// AS32875
$ax += cidrblock($address,'50.115.160.0/20','Virpus Networks (ASN-VP-0). ');
$ax += cidrblock($address,'173.0.48.0/20','Virpus Networks (ASN-VP-1). ');
$ax += cidrblock($address,'198.167.136.0/21','Virpus Networks (ASN-VP-2). ');
$ax += cidrblock($address,'198.175.124.0/22','Virpus Networks (ASN-VP-3). ');
$ax += cidrblock($address,'199.119.224.0/22','Virpus Networks (ASN-VP-4). ');
$ax += cidrblock($address,'199.180.128.0/21','Virpus Networks (ASN-VP-5). ');
$ax += cidrblock($address,'208.89.208.0/21','Virpus Networks (ASN-VP-6). ');


// Eonix Corporation, not an access provider ISP. (updated 2016.01.20)
// Many improper ASN records. Known attack vector.
// AS30693
$ax += cidrblock($address,'23.90.0.0/18','EONIX Network (ASN-EONIX-00). ');
$ax += cidrblock($address,'23.231.0.0/17','EONIX Network (ASN-EONIX-01). ');
$ax += cidrblock($address,'23.252.16.0/20','EONIX Network (ASN-EONIX-02). ');
$ax += cidrblock($address,'50.2.0.0/15','EONIX Network (ASN-EONIX-03). ');
$ax += cidrblock($address,'75.75.224.0/19','EONIX Network (ASN-EONIX-04). ');
$ax += cidrblock($address,'104.140.0.0/16','EONIX Network (ASN-EONIX-05). ');
$ax += cidrblock($address,'104.206.0.0/16','EONIX Network (ASN-EONIX-06). ');
$ax += cidrblock($address,'107.158.0.0/16','EONIX Network (ASN-EONIX-07). ');
$ax += cidrblock($address,'170.130.0.0/16','EONIX Network (ASN-EONIX-08). ');
$ax += cidrblock($address,'173.44.128.0/17','EONIX Network (ASN-EONIX-09). ');
$ax += cidrblock($address,'173.213.64.0/18','EONIX Network (ASN-EONIX-10). ');
$ax += cidrblock($address,'173.232.0.0/16','EONIX Network (ASN-EONIX-11). ');
$ax += cidrblock($address,'192.157.60.0/22','EONIX Network (ASN-EONIX-12). ');
$ax += cidrblock($address,'192.230.144.0/20','EONIX Network (ASN-EONIX-13). ');
$ax += cidrblock($address,'206.214.64.0/19','EONIX Network (ASN-EONIX-14). ');
$ax += cidrblock($address,'208.89.216.0/21','EONIX Network (ASN-EONIX-15). ');


// Pegasus Web Technology / Fortress ITX, Not an access provider. (updated 2016.01.19)
// AS25653, AS54600
$ax += cidrblock($address,'50.60.0.0/15','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-00). ');
$ax += cidrblock($address,'63.140.0.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-01). ');
$ax += cidrblock($address,'65.98.0.0/17','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-02). ');
$ax += cidrblock($address,'65.181.64.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-03). ');
$ax += cidrblock($address,'66.187.96.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-04). ');
$ax += cidrblock($address,'67.227.23.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-05). ');
$ax += cidrblock($address,'69.57.160.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-06). ');
$ax += cidrblock($address,'69.72.128.0/17','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-07). ');
$ax += cidrblock($address,'69.194.160.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-08). ');
$ax += cidrblock($address,'69.194.162.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-09). ');
$ax += cidrblock($address,'69.194.169.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-10). ');
$ax += cidrblock($address,'69.194.170.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-11). ');
$ax += cidrblock($address,'69.194.192.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-12). ');
$ax += cidrblock($address,'69.194.200.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-13). ');
$ax += cidrblock($address,'69.194.202.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-14). ');
$ax += cidrblock($address,'69.194.204.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-15). ');
$ax += cidrblock($address,'104.233.128.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-16). ');
$ax += cidrblock($address,'107.148.0.0/15','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-17). ');
$ax += cidrblock($address,'108.186.0.0/16','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-18). ');
$ax += cidrblock($address,'137.175.0.0/17','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-19). ');
$ax += cidrblock($address,'142.0.128.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-20). ');
$ax += cidrblock($address,'142.4.96.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-21). ');
$ax += cidrblock($address,'174.140.196.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-22). ');
$ax += cidrblock($address,'192.74.224.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-23). ');
$ax += cidrblock($address,'198.2.192.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-24). ');
$ax += cidrblock($address,'198.47.96.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-25). ');
$ax += cidrblock($address,'198.200.32.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-26). ');
$ax += cidrblock($address,'199.180.100.0/22','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-27). ');
$ax += cidrblock($address,'199.188.104.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-28). ');
$ax += cidrblock($address,'208.116.0.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-29). ');
$ax += cidrblock($address,'209.21.64.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-30). ');
$ax += cidrblock($address,'209.21.66.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-31). ');
$ax += cidrblock($address,'209.21.68.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-32). ');
$ax += cidrblock($address,'209.21.72.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-33). ');
$ax += cidrblock($address,'209.21.78.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-34). ');
$ax += cidrblock($address,'209.140.128.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-35). ');
$ax += cidrblock($address,'216.67.224.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-36). ');
$ax += cidrblock($address,'216.74.96.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-37). ');


// Steadfast DNS (updated 2016.01.19)
// AS32748
$ax += cidrblock($address,'23.29.128.0/19','Steadfast DNS (ASN-SFDNS-00). ');
$ax += cidrblock($address,'45.114.132.0/22','Steadfast DNS (ASN-SFDNS-01). ');
$ax += cidrblock($address,'49.156.0.0/22','Steadfast DNS (ASN-SFDNS-02). ');
$ax += cidrblock($address,'50.31.0.0/17','Steadfast DNS (ASN-SFDNS-03). ');
$ax += cidrblock($address,'66.85.89.0/24','Steadfast DNS (ASN-SFDNS-04). ');
$ax += cidrblock($address,'67.20.50.0/23','Steadfast DNS (ASN-SFDNS-05). ');
$ax += cidrblock($address,'67.20.52.0/23','Steadfast DNS (ASN-SFDNS-06). ');
$ax += cidrblock($address,'67.20.57.0/24','Steadfast DNS (ASN-SFDNS-07). ');
$ax += cidrblock($address,'67.20.58.0/24','Steadfast DNS (ASN-SFDNS-08). ');
$ax += cidrblock($address,'67.20.61.0/24','Steadfast DNS (ASN-SFDNS-09). ');
$ax += cidrblock($address,'67.20.62.0/24','Steadfast DNS (ASN-SFDNS-10). ');
$ax += cidrblock($address,'67.202.64.0/18','Steadfast DNS (ASN-SFDNS-11). ');
$ax += cidrblock($address,'69.162.128.0/18','Steadfast DNS (ASN-SFDNS-12). ');
$ax += cidrblock($address,'72.44.88.0/22','Steadfast DNS (ASN-SFDNS-13). ');
$ax += cidrblock($address,'72.44.93.0/24','Steadfast DNS (ASN-SFDNS-14). ');
$ax += cidrblock($address,'72.44.94.0/23','Steadfast DNS (ASN-SFDNS-15). ');
$ax += cidrblock($address,'74.120.120.0/22','Steadfast DNS (ASN-SFDNS-16). ');
$ax += cidrblock($address,'103.30.196.0/22','Steadfast DNS (ASN-SFDNS-17). ');
$ax += cidrblock($address,'103.54.84.0/22','Steadfast DNS (ASN-SFDNS-18). ');
$ax += cidrblock($address,'104.171.128.0/21','Steadfast DNS (ASN-SFDNS-19). ');
$ax += cidrblock($address,'107.191.176.0/22','Steadfast DNS (ASN-SFDNS-20). ');
$ax += cidrblock($address,'162.208.54.0/23','Steadfast DNS (ASN-SFDNS-21). ');
$ax += cidrblock($address,'162.210.96.0/21','Steadfast DNS (ASN-SFDNS-22). ');
$ax += cidrblock($address,'162.249.125.0/24','Steadfast DNS (ASN-SFDNS-23). ');
$ax += cidrblock($address,'162.249.126.0/23','Steadfast DNS (ASN-SFDNS-24). ');
$ax += cidrblock($address,'167.89.0.0/20','Steadfast DNS (ASN-SFDNS-25). ');
$ax += cidrblock($address,'173.249.144.0/23','Steadfast DNS (ASN-SFDNS-26). ');
$ax += cidrblock($address,'173.249.149.0/24','Steadfast DNS (ASN-SFDNS-27). ');
$ax += cidrblock($address,'173.249.150.0/23','Steadfast DNS (ASN-SFDNS-28). ');
$ax += cidrblock($address,'173.249.152.0/24','Steadfast DNS (ASN-SFDNS-29). ');
$ax += cidrblock($address,'198.23.48.0/20','Steadfast DNS (ASN-SFDNS-30). ');
$ax += cidrblock($address,'199.48.252.0/22','Steadfast DNS (ASN-SFDNS-31). ');
$ax += cidrblock($address,'204.238.229.0/24','Steadfast DNS (ASN-SFDNS-32). ');
$ax += cidrblock($address,'208.66.168.0/21','Steadfast DNS (ASN-SFDNS-33). ');
$ax += cidrblock($address,'208.100.0.0/18','Steadfast DNS (ASN-SFDNS-34). ');
$ax += cidrblock($address,'208.117.0.0/18','Steadfast DNS (ASN-SFDNS-35). ');
$ax += cidrblock($address,'216.86.144.0/20','Steadfast DNS (ASN-SFDNS-36). ');


// CyberBunker (updated 2016.01.19)
// Not an access provider, and willingly participates in hosting web attacks.
// AS34109 and AS51088
$ax += cidrblock($address,'5.44.72.0/21','CyberBunker ASN (ASN-CYBERBUNKER-00). ');
$ax += cidrblock($address,'31.134.200.0/21','CyberBunker ASN (ASN-CYBERBUNKER-01). ');
$ax += cidrblock($address,'37.148.184.0/24','CyberBunker ASN (ASN-CYBERBUNKER-02). ');
$ax += cidrblock($address,'46.244.0.0/19','CyberBunker ASN (ASN-CYBERBUNKER-03). ');
$ax += cidrblock($address,'46.244.96.0/19','CyberBunker ASN (ASN-CYBERBUNKER-04). ');
$ax += cidrblock($address,'91.209.12.0/24','CyberBunker ASN (ASN-CYBERBUNKER-05). ');
$ax += cidrblock($address,'91.213.13.0/24','CyberBunker ASN (ASN-CYBERBUNKER-06). ');
$ax += cidrblock($address,'91.233.224.0/23','CyberBunker ASN (ASN-CYBERBUNKER-07). ');
$ax += cidrblock($address,'92.240.144.0/22','CyberBunker ASN (ASN-CYBERBUNKER-08). ');
$ax += cidrblock($address,'93.93.120.0/21','CyberBunker ASN (ASN-CYBERBUNKER-09). ');
$ax += cidrblock($address,'93.188.68.0/22','CyberBunker ASN (ASN-CYBERBUNKER-10). ');
$ax += cidrblock($address,'109.238.128.0/20','CyberBunker ASN (ASN-CYBERBUNKER-11). ');
$ax += cidrblock($address,'178.249.152.0/21','CyberBunker ASN (ASN-CYBERBUNKER-12). ');
$ax += cidrblock($address,'185.30.204.0/22','CyberBunker ASN (ASN-CYBERBUNKER-13). ');
$ax += cidrblock($address,'185.34.220.0/22','CyberBunker ASN (ASN-CYBERBUNKER-14). ');
$ax += cidrblock($address,'185.37.4.0/23','CyberBunker ASN (ASN-CYBERBUNKER-15). ');
$ax += cidrblock($address,'185.37.6.0/24','CyberBunker ASN (ASN-CYBERBUNKER-16). ');
$ax += cidrblock($address,'185.44.244.0/22','CyberBunker ASN (ASN-CYBERBUNKER-17). ');
$ax += cidrblock($address,'185.51.52.0/23','CyberBunker ASN (ASN-CYBERBUNKER-18). ');
$ax += cidrblock($address,'185.63.244.0/22','CyberBunker ASN (ASN-CYBERBUNKER-19). ');
$ax += cidrblock($address,'185.82.88.0/22','CyberBunker ASN (ASN-CYBERBUNKER-20). ');
$ax += cidrblock($address,'185.103.56.0/22','CyberBunker ASN (ASN-CYBERBUNKER-21). ');
$ax += cidrblock($address,'192.166.96.0/22','CyberBunker ASN (ASN-CYBERBUNKER-22). ');
$ax += cidrblock($address,'193.108.238.0/24','CyberBunker ASN (ASN-CYBERBUNKER-23). ');


// PIN-AS (updated 2016.01.20)
// Small local access provider for Leningrad, HUGE spam-slinger.
// AS44050
$ax += cidrblock($address,'5.8.8.0/21','ASN pinspb.ru (ASN-PINAS-00). ');
$ax += cidrblock($address,'5.8.16.0/21','ASN pinspb.ru (ASN-PINAS-01). ');
$ax += cidrblock($address,'5.8.48.0/21','ASN pinspb.ru (ASN-PINAS-02). ');
$ax += cidrblock($address,'5.8.56.0/22','ASN pinspb.ru (ASN-PINAS-03). ');
$ax += cidrblock($address,'5.8.60.0/24','ASN pinspb.ru (ASN-PINAS-04). ');
$ax += cidrblock($address,'5.8.62.0/24','ASN pinspb.ru (ASN-PINAS-05). ');
$ax += cidrblock($address,'5.8.65.0/24','ASN pinspb.ru (ASN-PINAS-06). ');
$ax += cidrblock($address,'5.8.66.0/23','ASN pinspb.ru (ASN-PINAS-07). ');
$ax += cidrblock($address,'5.8.72.0/21','ASN pinspb.ru (ASN-PINAS-08). ');
$ax += cidrblock($address,'5.8.88.0/21','ASN pinspb.ru (ASN-PINAS-09). ');
$ax += cidrblock($address,'5.101.0.0/19','ASN pinspb.ru (ASN-PINAS-10). ');
$ax += cidrblock($address,'5.101.48.0/20','ASN pinspb.ru (ASN-PINAS-11). ');
$ax += cidrblock($address,'5.101.64.0/19','ASN pinspb.ru (ASN-PINAS-12). ');
$ax += cidrblock($address,'5.188.0.0/16','ASN pinspb.ru (ASN-PINAS-13). ');
$ax += cidrblock($address,'5.189.248.0/22','ASN pinspb.ru (ASN-PINAS-14). ');
$ax += cidrblock($address,'31.44.184.0/23','ASN pinspb.ru (ASN-PINAS-15). ');
$ax += cidrblock($address,'31.184.192.0/19','ASN pinspb.ru (ASN-PINAS-16). ');
$ax += cidrblock($address,'31.184.228.0/23','ASN pinspb.ru (ASN-PINAS-17). ');
$ax += cidrblock($address,'31.184.232.0/23','ASN pinspb.ru (ASN-PINAS-18). ');
$ax += cidrblock($address,'31.184.235.0/24','ASN pinspb.ru (ASN-PINAS-19). ');
$ax += cidrblock($address,'31.184.237.0/24','ASN pinspb.ru (ASN-PINAS-20). ');
$ax += cidrblock($address,'31.184.238.0/23','ASN pinspb.ru (ASN-PINAS-21). ');
$ax += cidrblock($address,'31.184.240.0/23','ASN pinspb.ru (ASN-PINAS-22). ');
$ax += cidrblock($address,'31.184.242.0/24','ASN pinspb.ru (ASN-PINAS-23). ');
$ax += cidrblock($address,'37.9.48.0/24','ASN pinspb.ru (ASN-PINAS-24). ');
$ax += cidrblock($address,'37.9.50.0/23','ASN pinspb.ru (ASN-PINAS-25). ');
$ax += cidrblock($address,'37.9.53.0/24','ASN pinspb.ru (ASN-PINAS-26). ');
$ax += cidrblock($address,'37.9.55.0/24','ASN pinspb.ru (ASN-PINAS-27). ');
$ax += cidrblock($address,'37.139.50.0/23','ASN pinspb.ru (ASN-PINAS-28). ');
$ax += cidrblock($address,'37.139.53.0/24','ASN pinspb.ru (ASN-PINAS-29). ');
$ax += cidrblock($address,'37.139.54.0/23','ASN pinspb.ru (ASN-PINAS-30). ');
$ax += cidrblock($address,'37.139.56.0/22','ASN pinspb.ru (ASN-PINAS-31). ');
$ax += cidrblock($address,'46.161.4.0/22','ASN pinspb.ru (ASN-PINAS-32). ');
$ax += cidrblock($address,'46.161.8.0/22','ASN pinspb.ru (ASN-PINAS-33). ');
$ax += cidrblock($address,'46.161.16.0/21','ASN pinspb.ru (ASN-PINAS-34). ');
$ax += cidrblock($address,'46.161.24.0/23','ASN pinspb.ru (ASN-PINAS-35). ');
$ax += cidrblock($address,'46.161.28.0/23','ASN pinspb.ru (ASN-PINAS-36). ');
$ax += cidrblock($address,'46.161.30.0/24','ASN pinspb.ru (ASN-PINAS-37). ');
$ax += cidrblock($address,'46.161.32.0/21','ASN pinspb.ru (ASN-PINAS-38). ');
$ax += cidrblock($address,'46.161.41.0/24','ASN pinspb.ru (ASN-PINAS-39). ');
$ax += cidrblock($address,'46.161.44.0/23','ASN pinspb.ru (ASN-PINAS-40). ');
$ax += cidrblock($address,'46.161.48.0/22','ASN pinspb.ru (ASN-PINAS-41). ');
$ax += cidrblock($address,'91.220.131.0/24','ASN pinspb.ru (ASN-PINAS-42). ');
$ax += cidrblock($address,'91.243.80.0/20','ASN pinspb.ru (ASN-PINAS-43). ');
$ax += cidrblock($address,'95.215.0.0/22','ASN pinspb.ru (ASN-PINAS-44). ');
$ax += cidrblock($address,'146.185.216.0/22','ASN pinspb.ru (ASN-PINAS-45). ');
$ax += cidrblock($address,'146.185.220.0/23','ASN pinspb.ru (ASN-PINAS-46). ');
$ax += cidrblock($address,'146.185.224.0/21','ASN pinspb.ru (ASN-PINAS-47). ');
$ax += cidrblock($address,'146.185.234.0/24','ASN pinspb.ru (ASN-PINAS-48). ');
$ax += cidrblock($address,'146.185.237.0/24','ASN pinspb.ru (ASN-PINAS-49). ');
$ax += cidrblock($address,'146.185.240.0/23','ASN pinspb.ru (ASN-PINAS-50). ');
$ax += cidrblock($address,'146.185.243.0/24','ASN pinspb.ru (ASN-PINAS-51). ');
$ax += cidrblock($address,'146.185.244.0/23','ASN pinspb.ru (ASN-PINAS-52). ');
$ax += cidrblock($address,'146.185.249.0/24','ASN pinspb.ru (ASN-PINAS-53). ');
$ax += cidrblock($address,'146.185.250.0/23','ASN pinspb.ru (ASN-PINAS-54). ');
$ax += cidrblock($address,'146.185.252.0/24','ASN pinspb.ru (ASN-PINAS-55). ');
$ax += cidrblock($address,'188.143.128.0/17','ASN pinspb.ru (ASN-PINAS-56). ');
$ax += cidrblock($address,'193.93.192.0/22','ASN pinspb.ru (ASN-PINAS-57). ');
$ax += cidrblock($address,'193.107.216.0/22','ASN pinspb.ru (ASN-PINAS-58). ');
$ax += cidrblock($address,'195.2.240.0/23','ASN pinspb.ru (ASN-PINAS-59). ');
$ax += cidrblock($address,'195.211.124.0/22','ASN pinspb.ru (ASN-PINAS-60). ');


// OVH Networks (updated 2016.01.20)
// Not an access provider, allows rampant abuse, hosts badware/bad services.
// AS16276
$ax += cidrblock($address,'5.39.0.0/17','OVH Networks (ASN-OVH-00). ');
$ax += cidrblock($address,'5.135.0.0/16','OVH Networks (ASN-OVH-01). ');
$ax += cidrblock($address,'5.196.0.0/16','OVH Networks (ASN-OVH-02). ');
$ax += cidrblock($address,'8.7.244.0/24','OVH Networks (ASN-OVH-03). ');
$ax += cidrblock($address,'8.18.128.0/24','OVH Networks (ASN-OVH-04). ');
$ax += cidrblock($address,'8.18.136.0/21','OVH Networks (ASN-OVH-05). ');
$ax += cidrblock($address,'8.18.172.0/24','OVH Networks (ASN-OVH-06). ');
$ax += cidrblock($address,'8.20.110.0/24','OVH Networks (ASN-OVH-07). ');
$ax += cidrblock($address,'8.21.41.0/24','OVH Networks (ASN-OVH-08). ');
$ax += cidrblock($address,'8.24.8.0/21','OVH Networks (ASN-OVH-09). ');
$ax += cidrblock($address,'8.26.94.0/24','OVH Networks (ASN-OVH-10). ');
$ax += cidrblock($address,'8.29.224.0/24','OVH Networks (ASN-OVH-11). ');
$ax += cidrblock($address,'8.30.208.0/21','OVH Networks (ASN-OVH-12). ');
$ax += cidrblock($address,'8.33.96.0/21','OVH Networks (ASN-OVH-13). ');
$ax += cidrblock($address,'8.33.128.0/21','OVH Networks (ASN-OVH-14). ');
$ax += cidrblock($address,'8.33.136.0/23','OVH Networks (ASN-OVH-15). ');
$ax += cidrblock($address,'37.59.0.0/16','OVH Networks (ASN-OVH-16). ');
$ax += cidrblock($address,'37.60.48.0/20','OVH Networks (ASN-OVH-17). ');
$ax += cidrblock($address,'37.187.0.0/16','OVH Networks (ASN-OVH-18). ');
$ax += cidrblock($address,'46.105.0.0/16','OVH Networks (ASN-OVH-19). ');
$ax += cidrblock($address,'51.254.0.0/15','OVH Networks (ASN-OVH-20). ');
$ax += cidrblock($address,'62.245.0.0/19','OVH Networks (ASN-OVH-21). ');
$ax += cidrblock($address,'87.98.128.0/17','OVH Networks (ASN-OVH-22). ');
$ax += cidrblock($address,'91.90.88.0/21','OVH Networks (ASN-OVH-23). ');
$ax += cidrblock($address,'91.121.0.0/16','OVH Networks (ASN-OVH-24). ');
$ax += cidrblock($address,'92.222.0.0/16','OVH Networks (ASN-OVH-25). ');
$ax += cidrblock($address,'94.23.0.0/16','OVH Networks (ASN-OVH-26). ');
$ax += cidrblock($address,'103.5.12.0/22','OVH Networks (ASN-OVH-27). ');
$ax += cidrblock($address,'142.4.192.0/19','OVH Networks (ASN-OVH-28). ');
$ax += cidrblock($address,'149.56.0.0/16','OVH Networks (ASN-OVH-29). ');
$ax += cidrblock($address,'149.202.0.0/16','OVH Networks (ASN-OVH-30). ');
$ax += cidrblock($address,'151.80.0.0/16','OVH Networks (ASN-OVH-31). ');
$ax += cidrblock($address,'158.69.0.0/16','OVH Networks (ASN-OVH-32). ');
$ax += cidrblock($address,'164.132.0.0/16','OVH Networks (ASN-OVH-33). ');
$ax += cidrblock($address,'167.114.0.0/16','OVH Networks (ASN-OVH-34). ');
$ax += cidrblock($address,'176.31.0.0/16','OVH Networks (ASN-OVH-35). ');
$ax += cidrblock($address,'178.32.0.0/15','OVH Networks (ASN-OVH-36). ');
$ax += cidrblock($address,'185.12.32.0/23','OVH Networks (ASN-OVH-37). ');
$ax += cidrblock($address,'188.165.0.0/16','OVH Networks (ASN-OVH-38). ');
$ax += cidrblock($address,'192.95.0.0/18','OVH Networks (ASN-OVH-39). ');
$ax += cidrblock($address,'192.99.0.0/16','OVH Networks (ASN-OVH-40). ');
$ax += cidrblock($address,'193.104.19.0/24','OVH Networks (ASN-OVH-41). ');
$ax += cidrblock($address,'193.109.63.0/24','OVH Networks (ASN-OVH-42). ');
$ax += cidrblock($address,'195.110.30.0/23','OVH Networks (ASN-OVH-43). ');
$ax += cidrblock($address,'195.246.232.0/23','OVH Networks (ASN-OVH-44). ');
$ax += cidrblock($address,'198.27.64.0/18','OVH Networks (ASN-OVH-45). ');
$ax += cidrblock($address,'198.50.128.0/17','OVH Networks (ASN-OVH-46). ');
$ax += cidrblock($address,'198.100.144.0/20','OVH Networks (ASN-OVH-47). ');
$ax += cidrblock($address,'198.245.48.0/20','OVH Networks (ASN-OVH-48). ');
$ax += cidrblock($address,'213.186.32.0/19','OVH Networks (ASN-OVH-49). ');
$ax += cidrblock($address,'213.251.128.0/18','OVH Networks (ASN-OVH-50). ');


// TEST: Reprieve for possible human clusters on OVH DSL (started: APR-04-14)

if (($ax == 1) && (inmatch($whyblockout,'(ASN-OVH-','')) && (rmatch($hoster,'.dsl.ovh.fr',''))){$ax = 0; $whyblockout = '';} //76d


// IOMart and *RapidSwitch (Crimeware Friendly ISP; hpHosts Blog warned us about this one).
// Hosting Death by Captcha .com and .eu CAPTCHA cracking services.
// AS20860 (updated 2016.01.18)
$ax += cidrblock($address,'5.62.4.0/23','IOMart, Privax, RapidSwitch (AS-20860-000). ');
$ax += cidrblock($address,'5.62.8.0/21','IOMart, Privax, RapidSwitch (AS-20860-001). ');
$ax += cidrblock($address,'5.62.22.0/23','IOMart, Privax, RapidSwitch (AS-20860-002). ');
$ax += cidrblock($address,'5.62.24.0/21','IOMart, Privax, RapidSwitch (AS-20860-003). ');
$ax += cidrblock($address,'5.77.32.0/19','IOMart, Privax, RapidSwitch (AS-20860-004). ');
$ax += cidrblock($address,'5.133.176.0/21','IOMart, Privax, RapidSwitch (AS-20860-005). ');
$ax += cidrblock($address,'31.24.39.0/24','IOMart, Privax, RapidSwitch (AS-20860-006). ');
$ax += cidrblock($address,'31.187.70.0/23','IOMart, Privax, RapidSwitch (AS-20860-007). ');
$ax += cidrblock($address,'31.216.48.0/24','IOMart, Privax, RapidSwitch (AS-20860-008). ');
$ax += cidrblock($address,'31.216.52.0/24','IOMart, Privax, RapidSwitch (AS-20860-009). ');
$ax += cidrblock($address,'37.235.124.0/22','IOMart, Privax, RapidSwitch (AS-20860-010). ');
$ax += cidrblock($address,'37.247.116.0/23','IOMart, Privax, RapidSwitch (AS-20860-011). ');
$ax += cidrblock($address,'46.20.236.0/24','IOMart, Privax, RapidSwitch (AS-20860-012). ');
$ax += cidrblock($address,'46.102.106.0/24','IOMart, Privax, RapidSwitch (AS-20860-013). ');
$ax += cidrblock($address,'62.128.192.0/19','IOMart, Privax, RapidSwitch (AS-20860-014). ');
$ax += cidrblock($address,'62.233.64.0/18','IOMart, Privax, RapidSwitch (AS-20860-015). ');
$ax += cidrblock($address,'64.64.123.0/24','IOMart, Privax, RapidSwitch (AS-20860-016). ');
$ax += cidrblock($address,'78.129.128.0/17','IOMart, Privax, RapidSwitch (AS-20860-017). ');
$ax += cidrblock($address,'79.171.32.0/21','IOMart, Privax, RapidSwitch (AS-20860-018). ');
$ax += cidrblock($address,'80.75.64.0/20','IOMart, Privax, RapidSwitch (AS-20860-019). ');
$ax += cidrblock($address,'80.84.49.0/24','IOMart, Privax, RapidSwitch (AS-20860-020). ');
$ax += cidrblock($address,'81.94.192.0/24','IOMart, Privax, RapidSwitch (AS-20860-021). ');
$ax += cidrblock($address,'82.102.8.0/21','IOMart, Privax, RapidSwitch (AS-20860-022). ');
$ax += cidrblock($address,'82.145.32.0/19','IOMart, Privax, RapidSwitch (AS-20860-023). ');
$ax += cidrblock($address,'83.142.224.0/21','IOMart, Privax, RapidSwitch (AS-20860-024). ');
$ax += cidrblock($address,'84.22.160.0/19','IOMart, Privax, RapidSwitch (AS-20860-025). ');
$ax += cidrblock($address,'85.232.32.0/19','IOMart, Privax, RapidSwitch (AS-20860-026). ');
$ax += cidrblock($address,'86.105.235.0/24','IOMart, Privax, RapidSwitch (AS-20860-027). ');
$ax += cidrblock($address,'86.107.22.0/24','IOMart, Privax, RapidSwitch (AS-20860-028). ');
$ax += cidrblock($address,'86.107.42.0/24','IOMart, Privax, RapidSwitch (AS-20860-029). ');
$ax += cidrblock($address,'87.117.192.0/18','IOMart, Privax, RapidSwitch (AS-20860-030). ');
$ax += cidrblock($address,'88.150.137.0/24','IOMart, Privax, RapidSwitch (AS-20860-031). ');
$ax += cidrblock($address,'88.150.140.0/22','IOMart, Privax, RapidSwitch (AS-20860-032). ');
$ax += cidrblock($address,'88.150.144.0/22','IOMart, Privax, RapidSwitch (AS-20860-033). ');
$ax += cidrblock($address,'88.150.154.0/24','IOMart, Privax, RapidSwitch (AS-20860-034). ');
$ax += cidrblock($address,'88.150.156.0/22','IOMart, Privax, RapidSwitch (AS-20860-035). ');
$ax += cidrblock($address,'88.150.160.0/21','IOMart, Privax, RapidSwitch (AS-20860-036). ');
$ax += cidrblock($address,'88.150.168.0/22','IOMart, Privax, RapidSwitch (AS-20860-037). ');
$ax += cidrblock($address,'88.150.206.0/24','IOMart, Privax, RapidSwitch (AS-20860-038). ');
$ax += cidrblock($address,'88.150.230.0/24','IOMart, Privax, RapidSwitch (AS-20860-039). ');
$ax += cidrblock($address,'88.150.240.0/23','IOMart, Privax, RapidSwitch (AS-20860-040). ');
$ax += cidrblock($address,'88.150.252.0/23','IOMart, Privax, RapidSwitch (AS-20860-041). ');
$ax += cidrblock($address,'89.34.2.0/24','IOMart, Privax, RapidSwitch (AS-20860-042). ');
$ax += cidrblock($address,'89.39.71.0/24','IOMart, Privax, RapidSwitch (AS-20860-043). ');
$ax += cidrblock($address,'89.39.81.0/24','IOMart, Privax, RapidSwitch (AS-20860-044). ');
$ax += cidrblock($address,'89.39.213.0/24','IOMart, Privax, RapidSwitch (AS-20860-045). ');
$ax += cidrblock($address,'89.40.203.0/24','IOMart, Privax, RapidSwitch (AS-20860-046). ');
$ax += cidrblock($address,'89.42.12.0/24','IOMart, Privax, RapidSwitch (AS-20860-047). ');
$ax += cidrblock($address,'89.207.168.0/21','IOMart, Privax, RapidSwitch (AS-20860-048). ');
$ax += cidrblock($address,'91.199.151.0/24','IOMart, Privax, RapidSwitch (AS-20860-049). ');
$ax += cidrblock($address,'91.207.220.0/23','IOMart, Privax, RapidSwitch (AS-20860-050). ');
$ax += cidrblock($address,'91.212.93.0/24','IOMart, Privax, RapidSwitch (AS-20860-051). ');
$ax += cidrblock($address,'91.215.180.0/22','IOMart, Privax, RapidSwitch (AS-20860-052). ');
$ax += cidrblock($address,'91.245.218.0/24','IOMart, Privax, RapidSwitch (AS-20860-053). ');
$ax += cidrblock($address,'93.113.56.0/24','IOMart, Privax, RapidSwitch (AS-20860-054). ');
$ax += cidrblock($address,'93.113.159.0/24','IOMart, Privax, RapidSwitch (AS-20860-055). ');
$ax += cidrblock($address,'93.117.65.0/24','IOMart, Privax, RapidSwitch (AS-20860-056). ');
$ax += cidrblock($address,'93.117.174.0/24','IOMart, Privax, RapidSwitch (AS-20860-057). ');
$ax += cidrblock($address,'93.174.10.0/24','IOMart, Privax, RapidSwitch (AS-20860-058). ');
$ax += cidrblock($address,'95.129.104.0/21','IOMart, Privax, RapidSwitch (AS-20860-059). ');
$ax += cidrblock($address,'95.154.192.0/18','IOMart, Privax, RapidSwitch (AS-20860-060). ');
$ax += cidrblock($address,'109.75.160.0/21','IOMart, Privax, RapidSwitch (AS-20860-061). ');
$ax += cidrblock($address,'109.169.0.0/18','IOMart, Privax, RapidSwitch (AS-20860-062). ');
$ax += cidrblock($address,'109.169.64.0/19','IOMart, Privax, RapidSwitch (AS-20860-063). ');
$ax += cidrblock($address,'109.200.30.0/24','IOMart, Privax, RapidSwitch (AS-20860-064). ');
$ax += cidrblock($address,'109.203.103.0/24','IOMart, Privax, RapidSwitch (AS-20860-065). ');
$ax += cidrblock($address,'109.203.110.0/24','IOMart, Privax, RapidSwitch (AS-20860-066). ');
$ax += cidrblock($address,'109.203.117.0/24','IOMart, Privax, RapidSwitch (AS-20860-067). ');
$ax += cidrblock($address,'109.203.127.0/24','IOMart, Privax, RapidSwitch (AS-20860-068). ');
$ax += cidrblock($address,'130.185.144.0/21','IOMart, Privax, RapidSwitch (AS-20860-069). ');
$ax += cidrblock($address,'149.255.96.0/20','IOMart, Privax, RapidSwitch (AS-20860-070). ');
$ax += cidrblock($address,'159.255.208.0/21','IOMart, Privax, RapidSwitch (AS-20860-071). ');
$ax += cidrblock($address,'172.93.122.0/24','IOMart, Privax, RapidSwitch (AS-20860-072). ');
$ax += cidrblock($address,'172.111.165.0/24','IOMart, Privax, RapidSwitch (AS-20860-073). ');
$ax += cidrblock($address,'172.111.166.0/24','IOMart, Privax, RapidSwitch (AS-20860-074). ');
$ax += cidrblock($address,'182.54.237.0/24','IOMart, Privax, RapidSwitch (AS-20860-075). ');
$ax += cidrblock($address,'185.17.148.0/22','IOMart, Privax, RapidSwitch (AS-20860-076). ');
$ax += cidrblock($address,'185.19.16.0/22','IOMart, Privax, RapidSwitch (AS-20860-077). ');
$ax += cidrblock($address,'185.20.48.0/24','IOMart, Privax, RapidSwitch (AS-20860-078). ');
$ax += cidrblock($address,'185.25.243.0/24','IOMart, Privax, RapidSwitch (AS-20860-079). ');
$ax += cidrblock($address,'185.26.148.0/23','IOMart, Privax, RapidSwitch (AS-20860-080). ');
$ax += cidrblock($address,'185.32.109.0/24','IOMart, Privax, RapidSwitch (AS-20860-081). ');
$ax += cidrblock($address,'185.32.110.0/24','IOMart, Privax, RapidSwitch (AS-20860-082). ');
$ax += cidrblock($address,'185.35.77.0/24','IOMart, Privax, RapidSwitch (AS-20860-083). ');
$ax += cidrblock($address,'185.35.79.0/24','IOMart, Privax, RapidSwitch (AS-20860-084). ');
$ax += cidrblock($address,'185.37.178.0/23','IOMart, Privax, RapidSwitch (AS-20860-085). ');
$ax += cidrblock($address,'185.57.188.0/22','IOMart, Privax, RapidSwitch (AS-20860-086). ');
$ax += cidrblock($address,'185.91.76.0/22','IOMart, Privax, RapidSwitch (AS-20860-087). ');
$ax += cidrblock($address,'185.92.252.0/22','IOMart, Privax, RapidSwitch (AS-20860-088). ');
$ax += cidrblock($address,'185.116.212.0/22','IOMart, Privax, RapidSwitch (AS-20860-089). ');
$ax += cidrblock($address,'185.131.8.0/23','IOMart, Privax, RapidSwitch (AS-20860-090). ');
$ax += cidrblock($address,'188.208.111.0/24','IOMart, Privax, RapidSwitch (AS-20860-091). ');
$ax += cidrblock($address,'188.210.255.0/24','IOMart, Privax, RapidSwitch (AS-20860-092). ');
$ax += cidrblock($address,'188.214.198.0/24','IOMart, Privax, RapidSwitch (AS-20860-093). ');
$ax += cidrblock($address,'188.215.32.0/24','IOMart, Privax, RapidSwitch (AS-20860-094). ');
$ax += cidrblock($address,'188.227.169.0/24','IOMart, Privax, RapidSwitch (AS-20860-095). ');
$ax += cidrblock($address,'188.227.170.0/24','IOMart, Privax, RapidSwitch (AS-20860-096). ');
$ax += cidrblock($address,'188.227.186.0/24','IOMart, Privax, RapidSwitch (AS-20860-097). ');
$ax += cidrblock($address,'192.121.166.0/23','IOMart, Privax, RapidSwitch (AS-20860-098). ');
$ax += cidrblock($address,'192.253.244.0/24','IOMart, Privax, RapidSwitch (AS-20860-099). ');
$ax += cidrblock($address,'193.200.98.0/23','IOMart, Privax, RapidSwitch (AS-20860-100). ');
$ax += cidrblock($address,'193.201.200.0/23','IOMart, Privax, RapidSwitch (AS-20860-101). ');
$ax += cidrblock($address,'194.1.150.0/24','IOMart, Privax, RapidSwitch (AS-20860-102). ');
$ax += cidrblock($address,'194.6.235.0/24','IOMart, Privax, RapidSwitch (AS-20860-103). ');
$ax += cidrblock($address,'195.24.230.0/23','IOMart, Privax, RapidSwitch (AS-20860-104). ');
$ax += cidrblock($address,'195.62.10.0/23','IOMart, Privax, RapidSwitch (AS-20860-105). ');
$ax += cidrblock($address,'195.177.192.0/23','IOMart, Privax, RapidSwitch (AS-20860-106). ');
$ax += cidrblock($address,'198.52.160.0/23','IOMart, Privax, RapidSwitch (AS-20860-107). ');
$ax += cidrblock($address,'206.187.52.0/22','IOMart, Privax, RapidSwitch (AS-20860-108). ');
$ax += cidrblock($address,'212.38.160.0/19','IOMart, Privax, RapidSwitch (AS-20860-109). ');
$ax += cidrblock($address,'212.84.160.0/19','IOMart, Privax, RapidSwitch (AS-20860-110). ');
$ax += cidrblock($address,'217.19.1.0/24','IOMart, Privax, RapidSwitch (AS-20860-111). ');
$ax += cidrblock($address,'217.26.232.0/21','IOMart, Privax, RapidSwitch (AS-20860-112). ');
$ax += cidrblock($address,'217.77.176.0/20','IOMart, Privax, RapidSwitch (AS-20860-113). ');
$ax += cidrblock($address,'217.147.80.0/20','IOMart, Privax, RapidSwitch (AS-20860-114). ');
$ax += cidrblock($address,'217.194.208.0/20','IOMart, Privax, RapidSwitch (AS-20860-115). ');


// Bytemark Anonymous Proxies (updated 2016.01.20)
// AS35425
$ax += cidrblock($address,'5.28.56.0/21','Bytemark Anonymous Proxies (ASN-BYTEMARK-00). ');
$ax += cidrblock($address,'5.153.224.0/21','Bytemark Anonymous Proxies (ASN-BYTEMARK-01). ');
$ax += cidrblock($address,'46.43.0.0/18','Bytemark Anonymous Proxies (ASN-BYTEMARK-02). ');
$ax += cidrblock($address,'80.68.80.0/20','Bytemark Anonymous Proxies (ASN-BYTEMARK-03). ');
$ax += cidrblock($address,'89.16.160.0/19','Bytemark Anonymous Proxies (ASN-BYTEMARK-04). ');
$ax += cidrblock($address,'91.223.58.0/24','Bytemark Anonymous Proxies (ASN-BYTEMARK-05). ');
$ax += cidrblock($address,'185.15.240.0/22','Bytemark Anonymous Proxies (ASN-BYTEMARK-06). ');
$ax += cidrblock($address,'185.90.192.0/22','Bytemark Anonymous Proxies (ASN-BYTEMARK-07). ');
$ax += cidrblock($address,'185.98.188.0/24','Bytemark Anonymous Proxies (ASN-BYTEMARK-08). ');
$ax += cidrblock($address,'185.128.208.0/23','Bytemark Anonymous Proxies (ASN-BYTEMARK-09). ');
$ax += cidrblock($address,'185.128.220.0/23','Bytemark Anonymous Proxies (ASN-BYTEMARK-10). ');
$ax += cidrblock($address,'193.227.244.0/23','Bytemark Anonymous Proxies (ASN-BYTEMARK-11). ');
$ax += cidrblock($address,'212.110.160.0/19','Bytemark Anonymous Proxies (ASN-BYTEMARK-12). ');
$ax += cidrblock($address,'213.138.96.0/19','Bytemark Anonymous Proxies (ASN-BYTEMARK-13). ');


// Plus Server, not an access provider (updated 2016.01.25)
// AS8972, AS25074
$ax += cidrblock($address,'5.1.120.0/21','Plus Server, not an access provider (ASN-PLSSRV-00). ');
$ax += cidrblock($address,'46.22.32.0/20','Plus Server, not an access provider (ASN-PLSSRV-01). ');
$ax += cidrblock($address,'46.229.47.0/24','Plus Server, not an access provider (ASN-PLSSRV-02). ');
$ax += cidrblock($address,'46.231.88.0/21','Plus Server, not an access provider (ASN-PLSSRV-03). ');
$ax += cidrblock($address,'62.67.211.0/24','Plus Server, not an access provider (ASN-PLSSRV-04). ');
$ax += cidrblock($address,'62.67.212.0/23','Plus Server, not an access provider (ASN-PLSSRV-05). ');
$ax += cidrblock($address,'62.67.215.0/24','Plus Server, not an access provider (ASN-PLSSRV-06). ');
$ax += cidrblock($address,'62.67.233.0/24','Plus Server, not an access provider (ASN-PLSSRV-07). ');
$ax += cidrblock($address,'62.75.128.0/17','Plus Server, not an access provider (ASN-PLSSRV-08). ');
$ax += cidrblock($address,'62.138.0.0/19','Plus Server, not an access provider (ASN-PLSSRV-09). ');
$ax += cidrblock($address,'62.138.192.0/20','Plus Server, not an access provider (ASN-PLSSRV-10). ');
$ax += cidrblock($address,'77.236.96.0/21','Plus Server, not an access provider (ASN-PLSSRV-11). ');
$ax += cidrblock($address,'78.138.64.0/18','Plus Server, not an access provider (ASN-PLSSRV-12). ');
$ax += cidrblock($address,'80.86.80.0/20','Plus Server, not an access provider (ASN-PLSSRV-13). ');
$ax += cidrblock($address,'80.242.128.0/19','Plus Server, not an access provider (ASN-PLSSRV-14). ');
$ax += cidrblock($address,'83.142.128.0/21','Plus Server, not an access provider (ASN-PLSSRV-15). ');
$ax += cidrblock($address,'83.220.128.0/19','Plus Server, not an access provider (ASN-PLSSRV-16). ');
$ax += cidrblock($address,'84.246.125.0/24','Plus Server, not an access provider (ASN-PLSSRV-17). ');
$ax += cidrblock($address,'84.246.126.0/24','Plus Server, not an access provider (ASN-PLSSRV-18). ');
$ax += cidrblock($address,'85.25.0.0/16','Plus Server, not an access provider (ASN-PLSSRV-19). ');
$ax += cidrblock($address,'85.93.65.0/24','Plus Server, not an access provider (ASN-PLSSRV-20). ');
$ax += cidrblock($address,'85.93.66.0/23','Plus Server, not an access provider (ASN-PLSSRV-21). ');
$ax += cidrblock($address,'85.93.80.0/24','Plus Server, not an access provider (ASN-PLSSRV-22). ');
$ax += cidrblock($address,'85.93.83.0/24','Plus Server, not an access provider (ASN-PLSSRV-23). ');
$ax += cidrblock($address,'85.93.88.0/21','Plus Server, not an access provider (ASN-PLSSRV-24). ');
$ax += cidrblock($address,'87.119.192.0/19','Plus Server, not an access provider (ASN-PLSSRV-25). ');
$ax += cidrblock($address,'89.19.224.0/19','Plus Server, not an access provider (ASN-PLSSRV-26). ');
$ax += cidrblock($address,'91.194.132.0/23','Plus Server, not an access provider (ASN-PLSSRV-27). ');
$ax += cidrblock($address,'91.198.250.0/24','Plus Server, not an access provider (ASN-PLSSRV-28). ');
$ax += cidrblock($address,'91.217.174.0/23','Plus Server, not an access provider (ASN-PLSSRV-29). ');
$ax += cidrblock($address,'91.223.20.0/24','Plus Server, not an access provider (ASN-PLSSRV-30). ');
$ax += cidrblock($address,'95.174.80.0/21','Plus Server, not an access provider (ASN-PLSSRV-31). ');
$ax += cidrblock($address,'109.234.248.0/21','Plus Server, not an access provider (ASN-PLSSRV-32). ');
$ax += cidrblock($address,'185.5.24.0/23','Plus Server, not an access provider (ASN-PLSSRV-33). ');
$ax += cidrblock($address,'185.5.27.0/24','Plus Server, not an access provider (ASN-PLSSRV-34). ');
$ax += cidrblock($address,'188.138.0.0/17','Plus Server, not an access provider (ASN-PLSSRV-35). ');
$ax += cidrblock($address,'194.30.185.0/24','Plus Server, not an access provider (ASN-PLSSRV-36). ');
$ax += cidrblock($address,'194.145.192.0/23','Plus Server, not an access provider (ASN-PLSSRV-37). ');
$ax += cidrblock($address,'194.150.228.0/23','Plus Server, not an access provider (ASN-PLSSRV-38). ');
$ax += cidrblock($address,'195.10.208.0/24','Plus Server, not an access provider (ASN-PLSSRV-39). ');
$ax += cidrblock($address,'195.66.102.0/24','Plus Server, not an access provider (ASN-PLSSRV-40). ');
$ax += cidrblock($address,'195.122.141.0/24','Plus Server, not an access provider (ASN-PLSSRV-41). ');
$ax += cidrblock($address,'195.137.212.0/23','Plus Server, not an access provider (ASN-PLSSRV-42). ');
$ax += cidrblock($address,'195.149.74.0/24','Plus Server, not an access provider (ASN-PLSSRV-43). ');
$ax += cidrblock($address,'212.40.160.0/24','Plus Server, not an access provider (ASN-PLSSRV-44). ');
$ax += cidrblock($address,'212.40.163.0/24','Plus Server, not an access provider (ASN-PLSSRV-45). ');
$ax += cidrblock($address,'212.40.164.0/24','Plus Server, not an access provider (ASN-PLSSRV-46). ');
$ax += cidrblock($address,'212.40.166.0/23','Plus Server, not an access provider (ASN-PLSSRV-47). ');
$ax += cidrblock($address,'212.40.168.0/24','Plus Server, not an access provider (ASN-PLSSRV-48). ');
$ax += cidrblock($address,'212.40.171.0/24','Plus Server, not an access provider (ASN-PLSSRV-49). ');
$ax += cidrblock($address,'212.40.172.0/23','Plus Server, not an access provider (ASN-PLSSRV-50). ');
$ax += cidrblock($address,'212.40.174.0/24','Plus Server, not an access provider (ASN-PLSSRV-51). ');
$ax += cidrblock($address,'212.40.176.0/21','Plus Server, not an access provider (ASN-PLSSRV-52). ');
$ax += cidrblock($address,'212.40.185.0/24','Plus Server, not an access provider (ASN-PLSSRV-53). ');
$ax += cidrblock($address,'212.40.186.0/24','Plus Server, not an access provider (ASN-PLSSRV-54). ');
$ax += cidrblock($address,'212.40.189.0/24','Plus Server, not an access provider (ASN-PLSSRV-55). ');
$ax += cidrblock($address,'212.48.74.0/24','Plus Server, not an access provider (ASN-PLSSRV-56). ');
$ax += cidrblock($address,'212.48.90.0/24','Plus Server, not an access provider (ASN-PLSSRV-57). ');
$ax += cidrblock($address,'212.48.93.0/24','Plus Server, not an access provider (ASN-PLSSRV-58). ');
$ax += cidrblock($address,'212.162.12.0/22','Plus Server, not an access provider (ASN-PLSSRV-59). ');
$ax += cidrblock($address,'212.162.52.0/23','Plus Server, not an access provider (ASN-PLSSRV-60). ');
$ax += cidrblock($address,'212.162.56.0/23','Plus Server, not an access provider (ASN-PLSSRV-61). ');
$ax += cidrblock($address,'213.131.224.0/19','Plus Server, not an access provider (ASN-PLSSRV-62). ');
$ax += cidrblock($address,'213.174.32.0/19','Plus Server, not an access provider (ASN-PLSSRV-63). ');
$ax += cidrblock($address,'213.203.192.0/18','Plus Server, not an access provider (ASN-PLSSRV-64). ');
$ax += cidrblock($address,'217.118.16.0/20','Plus Server, not an access provider (ASN-PLSSRV-65). ');
$ax += cidrblock($address,'217.119.49.0/24','Plus Server, not an access provider (ASN-PLSSRV-66). ');
$ax += cidrblock($address,'217.119.50.0/23','Plus Server, not an access provider (ASN-PLSSRV-67). ');
$ax += cidrblock($address,'217.119.52.0/22','Plus Server, not an access provider (ASN-PLSSRV-68). ');
$ax += cidrblock($address,'217.119.56.0/22','Plus Server, not an access provider (ASN-PLSSRV-69). ');
$ax += cidrblock($address,'217.119.63.0/24','Plus Server, not an access provider (ASN-PLSSRV-70). ');
$ax += cidrblock($address,'217.172.160.0/19','Plus Server, not an access provider (ASN-PLSSRV-71). ');


// Trend Micro (updated 2016.01.20)
// AS16880, AS36421
$ax += cidrblock($address,'8.30.172.0/24','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-00). ');
$ax += cidrblock($address,'66.180.80.0/20','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-01). ');
$ax += cidrblock($address,'150.70.0.0/20','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-02). ');
$ax += cidrblock($address,'150.70.31.0/24','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-03). ');
$ax += cidrblock($address,'150.70.48.0/20','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-04). ');
$ax += cidrblock($address,'150.70.64.0/18','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-05). ');
$ax += cidrblock($address,'150.70.144.0/20','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-06). ');
$ax += cidrblock($address,'150.70.160.0/19','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-07). ');
$ax += cidrblock($address,'150.70.192.0/21','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-08). ');
$ax += cidrblock($address,'150.70.224.0/19','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-09). ');
$ax += cidrblock($address,'202.3.185.0/24','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-10). ');
$ax += cidrblock($address,'206.165.76.0/24','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-11). ');
$ax += cidrblock($address,'216.99.128.0/20','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-12). ');
$ax += cidrblock($address,'216.104.0.0/19','Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (ASN-TRENDM-13). ');

// Some of the old CIDRs included with the Trend Micro ranges prior to the 2016.01.20 update have ended up as part of
// the Cogent ASN. Cogent seems to have a questionable history, from what I've been able to ascertain, and there are
// definitely some bad actors among the CIDRs currently announced by their ASN ("Cogent Communications Group", AS174).
// Due to losing those CIDRs from the Trend Micro ASN to the Cogent ASN and due to at least a handful of bad actors I
// can spot on sight by looking at the Cogent CIDR announces, I'd -like- to write a signature block for the Cogent ASN.
// However, unfortunately, there are also at least a handful of legitimate, innocent ISPs covered by their CIDRs, which
// would be blocked if I were to write such a signature block, which would likely lead to numerous false positives and
// problems for innocent users. That, and in addition, due to the significant fragmentation of their CIDRs, writing
// such a signature block would likely lead to performance issues for ZB Block. As such, unfortunately, I think it
// would be appropriate to leave them out. This has also been mentioned and covered by Zaphod in various posts to the
// Spambot Security forums. -Maikuolan (2015.01.20).
// Refer to these:
// Wikipedia's page on Cogent: en.wikipedia.org/wiki/Cogent_Communications
// Some references to the Cogent ASN in the past, made to the forums (search for "Cogent"):
// spambotsecurity.com/forum/viewtopic.php?f=14&t=3014 and spambotsecurity.com/forum/viewtopic.php?f=7&t=1966
// Cogent CIDRs, according to bgp.he.net (if you want to write your own signatures for them anyway): bgp.he.net/AS174


// Hetzner Online AG (updated 2016.01.20)
// AS24940
$ax += cidrblock($address,'5.9.0.0/16','Hetzner (ASN-HETZ-00). ');
$ax += cidrblock($address,'46.4.0.0/16','Hetzner (ASN-HETZ-01). ');
$ax += cidrblock($address,'78.46.0.0/15','Hetzner (ASN-HETZ-02). ');
$ax += cidrblock($address,'85.10.192.0/18','Hetzner (ASN-HETZ-03). ');
$ax += cidrblock($address,'88.198.0.0/16','Hetzner (ASN-HETZ-04). ');
$ax += cidrblock($address,'91.220.49.0/24','Hetzner (ASN-HETZ-05). ');
$ax += cidrblock($address,'91.233.8.0/22','Hetzner (ASN-HETZ-06). ');
$ax += cidrblock($address,'136.243.0.0/16','Hetzner (ASN-HETZ-07). ');
$ax += cidrblock($address,'138.201.0.0/16','Hetzner (ASN-HETZ-08). ');
$ax += cidrblock($address,'144.76.0.0/16','Hetzner (ASN-HETZ-09). ');
$ax += cidrblock($address,'148.251.0.0/16','Hetzner (ASN-HETZ-10). ');
$ax += cidrblock($address,'176.9.0.0/16','Hetzner (ASN-HETZ-11). ');
$ax += cidrblock($address,'176.102.168.0/21','Hetzner (ASN-HETZ-12). ');
$ax += cidrblock($address,'178.63.0.0/16','Hetzner (ASN-HETZ-13). ');
$ax += cidrblock($address,'185.12.64.0/22','Hetzner (ASN-HETZ-14). ');
$ax += cidrblock($address,'185.50.120.0/23','Hetzner (ASN-HETZ-15). ');
$ax += cidrblock($address,'185.107.52.0/22','Hetzner (ASN-HETZ-16). ');
$ax += cidrblock($address,'185.126.28.0/22','Hetzner (ASN-HETZ-17). ');
$ax += cidrblock($address,'188.40.0.0/16','Hetzner (ASN-HETZ-18). ');
$ax += cidrblock($address,'193.25.170.0/23','Hetzner (ASN-HETZ-19). ');
$ax += cidrblock($address,'193.47.99.0/24','Hetzner (ASN-HETZ-20). ');
$ax += cidrblock($address,'193.110.6.0/23','Hetzner (ASN-HETZ-21). ');
$ax += cidrblock($address,'193.223.77.0/24','Hetzner (ASN-HETZ-22). ');
$ax += cidrblock($address,'194.42.180.0/22','Hetzner (ASN-HETZ-23). ');
$ax += cidrblock($address,'194.42.184.0/22','Hetzner (ASN-HETZ-24). ');
$ax += cidrblock($address,'194.145.226.0/24','Hetzner (ASN-HETZ-25). ');
$ax += cidrblock($address,'195.60.226.0/24','Hetzner (ASN-HETZ-26). ');
$ax += cidrblock($address,'195.248.224.0/24','Hetzner (ASN-HETZ-27). ');
$ax += cidrblock($address,'197.242.84.0/22','Hetzner (ASN-HETZ-28). ');
$ax += cidrblock($address,'213.133.96.0/19','Hetzner (ASN-HETZ-29). ');
$ax += cidrblock($address,'213.169.144.0/22','Hetzner (ASN-HETZ-30). ');
$ax += cidrblock($address,'213.239.192.0/18','Hetzner (ASN-HETZ-31). ');


// Digital Ocean, Inc. (updated 2016.01.22)
// AS393406, AS14061, AS62567, AS46652, AS200130, AS394362
$ax += cidrblock($address,'5.101.96.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-00). ');
$ax += cidrblock($address,'5.101.104.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-01). ');
$ax += cidrblock($address,'37.139.0.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-02). ');
$ax += cidrblock($address,'45.55.0.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-03). ');
$ax += cidrblock($address,'45.55.64.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-04). ');
$ax += cidrblock($address,'45.55.96.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-05). ');
$ax += cidrblock($address,'45.55.112.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-06). ');
$ax += cidrblock($address,'45.55.128.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-07). ');
$ax += cidrblock($address,'69.55.48.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-08). ');
$ax += cidrblock($address,'141.0.168.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-09). ');
$ax += cidrblock($address,'146.185.128.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-10). ');
$ax += cidrblock($address,'159.203.0.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-11). ');
$ax += cidrblock($address,'159.203.128.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-12). ');
$ax += cidrblock($address,'159.203.144.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-13). ');
$ax += cidrblock($address,'159.203.192.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-14). ');
$ax += cidrblock($address,'162.243.0.0/16','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-15). ');
$ax += cidrblock($address,'178.62.128.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-16). ');
$ax += cidrblock($address,'185.14.184.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-17). ');
$ax += cidrblock($address,'185.88.180.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-18). ');
$ax += cidrblock($address,'188.166.128.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-19). ');
$ax += cidrblock($address,'188.226.128.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-20). ');
$ax += cidrblock($address,'192.34.56.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-21). ');
$ax += cidrblock($address,'192.81.208.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-22). ');
$ax += cidrblock($address,'192.241.128.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-23). ');
$ax += cidrblock($address,'198.199.64.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-24). ');
$ax += cidrblock($address,'198.211.96.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-25). ');
$ax += cidrblock($address,'208.68.36.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-26). ');


// Root SA (updated 2016.01.20)
// AS5577
$ax += cidrblock($address,'31.131.7.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-00). ');
$ax += cidrblock($address,'83.243.8.0/21','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-01). ');
$ax += cidrblock($address,'91.193.74.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-02). ');
$ax += cidrblock($address,'93.186.79.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-03). ');
$ax += cidrblock($address,'94.242.192.0/18','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-04). ');
$ax += cidrblock($address,'146.185.239.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-05). ');
$ax += cidrblock($address,'179.63.80.0/20','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-06). ');
$ax += cidrblock($address,'185.90.61.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-07). ');
$ax += cidrblock($address,'185.103.172.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-08). ');
$ax += cidrblock($address,'185.103.174.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-09). ');
$ax += cidrblock($address,'185.121.24.0/23','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-10). ');
$ax += cidrblock($address,'188.42.152.0/21','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-11). ');
$ax += cidrblock($address,'194.68.32.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-12). ');
$ax += cidrblock($address,'195.24.72.0/21','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-13). ');
$ax += cidrblock($address,'195.26.4.0/23','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-14). ');
$ax += cidrblock($address,'212.117.160.0/19','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-15). ');
$ax += cidrblock($address,'217.73.56.0/24','Root SA http://sitevet.com/db/asn/AS5577 (ASN-ROOTSA-16). ');


// XEEX network (updated 2016.01.19)
// AS27524
$ax += cidrblock($address,'69.26.160.0/19','XEEX (ASN-27524-0). ');
$ax += cidrblock($address,'113.212.64.0/19','XEEX (ASN-27524-1). ');
$ax += cidrblock($address,'162.213.128.0/22','XEEX (ASN-27524-2). ');
$ax += cidrblock($address,'199.249.179.0/24','XEEX (ASN-27524-3). ');
$ax += cidrblock($address,'199.249.180.0/23','XEEX (ASN-27524-4). ');
$ax += cidrblock($address,'209.242.192.0/19','XEEX (ASN-27524-5). ');
$ax += cidrblock($address,'216.151.128.0/19','XEEX (ASN-27524-6). ');
$ax += cidrblock($address,'216.152.240.0/20','XEEX (ASN-27524-7). ');


// ColoGuys (updated 2016.01.19)
// AS40775
$ax += cidrblock($address,'64.209.56.0/21','ColoGuys (ASN-40775-0). ');
$ax += cidrblock($address,'64.209.68.0/22','ColoGuys (ASN-40775-0). ');
$ax += cidrblock($address,'64.214.184.0/21','ColoGuys (ASN-40775-0). ');
$ax += cidrblock($address,'66.207.160.0/20','ColoGuys (ASN-40775-0). ');
$ax += cidrblock($address,'67.43.48.0/20','ColoGuys (ASN-40775-0). ');
$ax += cidrblock($address,'103.6.219.0/24','ColoGuys (ASN-40775-0). ');
$ax += cidrblock($address,'173.242.48.0/20','ColoGuys (ASN-40775-0). ');
$ax += cidrblock($address,'199.115.176.0/21','ColoGuys (ASN-40775-0). ');
$ax += cidrblock($address,'207.126.64.0/19','ColoGuys (ASN-40775-0). ');
$ax += cidrblock($address,'209.130.152.0/22','ColoGuys (ASN-40775-0). ');
$ax += cidrblock($address,'209.135.0.0/19','ColoGuys (ASN-40775-0). ');


// Tzulo Inc (updated 2016.01.19)
// AS11878
$ax += cidrblock($address,'23.234.64.0/18','Tzulo Inc (ASN-11878-00). ');
$ax += cidrblock($address,'23.255.0.0/17','Tzulo Inc (ASN-11878-01). ');
$ax += cidrblock($address,'68.235.32.0/19','Tzulo Inc (ASN-11878-02). ');
$ax += cidrblock($address,'107.152.32.0/20','Tzulo Inc (ASN-11878-03). ');
$ax += cidrblock($address,'154.16.97.0/24','Tzulo Inc (ASN-11878-04). ');
$ax += cidrblock($address,'154.16.98.0/23','Tzulo Inc (ASN-11878-05). ');
$ax += cidrblock($address,'154.16.100.0/22','Tzulo Inc (ASN-11878-06). ');
$ax += cidrblock($address,'162.208.8.0/22','Tzulo Inc (ASN-11878-07). ');
$ax += cidrblock($address,'162.212.152.0/21','Tzulo Inc (ASN-11878-08). ');
$ax += cidrblock($address,'173.231.192.0/18','Tzulo Inc (ASN-11878-09). ');
$ax += cidrblock($address,'173.249.192.0/18','Tzulo Inc (ASN-11878-10). ');
$ax += cidrblock($address,'173.253.0.0/17','Tzulo Inc (ASN-11878-11). ');
$ax += cidrblock($address,'181.214.128.0/19','Tzulo Inc (ASN-11878-12). ');
$ax += cidrblock($address,'181.214.206.0/23','Tzulo Inc (ASN-11878-13). ');
$ax += cidrblock($address,'181.215.199.0/24','Tzulo Inc (ASN-11878-14). ');
$ax += cidrblock($address,'181.215.200.0/21','Tzulo Inc (ASN-11878-15). ');
$ax += cidrblock($address,'181.215.208.0/22','Tzulo Inc (ASN-11878-16). ');
$ax += cidrblock($address,'181.215.212.0/23','Tzulo Inc (ASN-11878-17). ');
$ax += cidrblock($address,'181.215.215.0/24','Tzulo Inc (ASN-11878-18). ');
$ax += cidrblock($address,'181.215.216.0/21','Tzulo Inc (ASN-11878-19). ');
$ax += cidrblock($address,'181.215.224.0/21','Tzulo Inc (ASN-11878-20). ');
$ax += cidrblock($address,'181.215.232.0/23','Tzulo Inc (ASN-11878-21). ');
$ax += cidrblock($address,'181.215.234.0/24','Tzulo Inc (ASN-11878-22). ');
$ax += cidrblock($address,'191.96.27.0/24','Tzulo Inc (ASN-11878-23). ');
$ax += cidrblock($address,'191.96.38.0/24','Tzulo Inc (ASN-11878-24). ');
$ax += cidrblock($address,'191.101.202.0/23','Tzulo Inc (ASN-11878-25). ');
$ax += cidrblock($address,'192.196.224.0/20','Tzulo Inc (ASN-11878-26). ');
$ax += cidrblock($address,'192.243.96.0/20','Tzulo Inc (ASN-11878-27). ');
$ax += cidrblock($address,'198.44.128.0/19','Tzulo Inc (ASN-11878-28). ');
$ax += cidrblock($address,'198.54.128.0/21','Tzulo Inc (ASN-11878-29). ');
$ax += cidrblock($address,'199.175.48.0/21','Tzulo Inc (ASN-11878-30). ');
$ax += cidrblock($address,'206.226.64.0/18','Tzulo Inc (ASN-11878-31). ');
$ax += cidrblock($address,'208.77.16.0/21','Tzulo Inc (ASN-11878-32). ');


// Corpcolo (updated 2016.01.20)
// AS17139
$ax += cidrblock($address,'45.3.32.0/20','Corpcolo (ASN-AS17139-00). ');
$ax += cidrblock($address,'45.3.55.0/24','Corpcolo (ASN-AS17139-01). ');
$ax += cidrblock($address,'45.3.56.0/21','Corpcolo (ASN-AS17139-02). ');
$ax += cidrblock($address,'45.78.80.0/20','Corpcolo (ASN-AS17139-03). ');
$ax += cidrblock($address,'66.11.113.0/24','Corpcolo (ASN-AS17139-04). ');
$ax += cidrblock($address,'66.117.0.0/20','Corpcolo (ASN-AS17139-05). ');
$ax += cidrblock($address,'68.64.160.0/20','Corpcolo (ASN-AS17139-06). ');
$ax += cidrblock($address,'72.37.152.0/24','Corpcolo (ASN-AS17139-07). ');
$ax += cidrblock($address,'74.82.37.0/24','Corpcolo (ASN-AS17139-08). ');
$ax += cidrblock($address,'74.124.192.0/19','Corpcolo (ASN-AS17139-09). ');
$ax += cidrblock($address,'103.193.184.0/22','Corpcolo (ASN-AS17139-10). ');
$ax += cidrblock($address,'104.167.16.0/21','Corpcolo (ASN-AS17139-11). ');
$ax += cidrblock($address,'104.167.24.0/22','Corpcolo (ASN-AS17139-12). ');
$ax += cidrblock($address,'104.167.28.0/23','Corpcolo (ASN-AS17139-13). ');
$ax += cidrblock($address,'104.207.32.0/19','Corpcolo (ASN-AS17139-14). ');
$ax += cidrblock($address,'162.220.218.0/24','Corpcolo (ASN-AS17139-15). ');
$ax += cidrblock($address,'172.86.120.0/21','Corpcolo (ASN-AS17139-16). ');
$ax += cidrblock($address,'172.98.214.0/24','Corpcolo (ASN-AS17139-17). ');
$ax += cidrblock($address,'173.247.224.0/19','Corpcolo (ASN-AS17139-18). ');
$ax += cidrblock($address,'192.101.46.0/23','Corpcolo (ASN-AS17139-19). ');
$ax += cidrblock($address,'199.83.102.0/24','Corpcolo (ASN-AS17139-20). ');
$ax += cidrblock($address,'199.195.142.0/23','Corpcolo (ASN-AS17139-21). ');
$ax += cidrblock($address,'205.134.224.0/19','Corpcolo (ASN-AS17139-22). ');
$ax += cidrblock($address,'206.62.144.0/22','Corpcolo (ASN-AS17139-23). ');
$ax += cidrblock($address,'206.62.148.0/24','Corpcolo (ASN-AS17139-24). ');
$ax += cidrblock($address,'208.51.60.0/22','Corpcolo (ASN-AS17139-25). ');
$ax += cidrblock($address,'216.179.168.0/21','Corpcolo (ASN-AS17139-26). ');
$ax += cidrblock($address,'216.179.208.0/24','Corpcolo (ASN-AS17139-27). ');
$ax += cidrblock($address,'216.179.212.0/24','Corpcolo (ASN-AS17139-28). ');
$ax += cidrblock($address,'216.179.218.0/24','Corpcolo (ASN-AS17139-29). ');
$ax += cidrblock($address,'216.193.197.0/24','Corpcolo (ASN-AS17139-30). ');
$ax += cidrblock($address,'216.193.219.0/24','Corpcolo (ASN-AS17139-31). ');
$ax += cidrblock($address,'216.193.251.0/24','Corpcolo (ASN-AS17139-32). ');


// iWeb Technologies Inc. (updated 2016.01.20)
// AS32613
$ax += cidrblock($address,'38.108.70.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-00). ');
$ax += cidrblock($address,'64.15.128.0/19','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-01). ');
$ax += cidrblock($address,'67.205.64.0/18','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-02). ');
$ax += cidrblock($address,'70.38.0.0/17','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-03). ');
$ax += cidrblock($address,'72.55.128.0/18','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-04). ');
$ax += cidrblock($address,'107.161.64.0/20','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-05). ');
$ax += cidrblock($address,'108.163.128.0/18','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-06). ');
$ax += cidrblock($address,'173.244.55.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-07). ');
$ax += cidrblock($address,'174.141.228.0/22','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-08). ');
$ax += cidrblock($address,'174.141.232.0/23','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-09). ');
$ax += cidrblock($address,'174.142.0.0/16','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-10). ');
$ax += cidrblock($address,'184.107.0.0/16','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-11). ');
$ax += cidrblock($address,'189.91.32.0/23','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-12). ');
$ax += cidrblock($address,'192.175.96.0/19','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-13). ');
$ax += cidrblock($address,'192.219.254.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-14). ');
$ax += cidrblock($address,'198.50.96.0/19','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-15). ');
$ax += cidrblock($address,'198.72.96.0/19','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-16). ');
$ax += cidrblock($address,'203.167.7.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-17). ');
$ax += cidrblock($address,'204.19.249.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-18). ');
$ax += cidrblock($address,'204.19.251.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-19). ');
$ax += cidrblock($address,'204.19.253.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-20). ');
$ax += cidrblock($address,'204.19.254.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-21). ');
$ax += cidrblock($address,'205.236.34.0/24','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-22). ');
$ax += cidrblock($address,'206.123.20.0/23','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-23). ');
$ax += cidrblock($address,'209.172.32.0/19','iWeb Technologies Inc. Not an access provider ISP (ASN-IWEB-24). ');


// Reliable Hosting Services (updated 2016.01.20)
// AS29713, AS33597
$ax += cidrblock($address,'8.60.0.0/16','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-00). ');
$ax += cidrblock($address,'8.111.0.0/16','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-01). ');
$ax += cidrblock($address,'8.133.0.0/16','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-02). ');
$ax += cidrblock($address,'8.150.0.0/16','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-03). ');
$ax += cidrblock($address,'8.186.0.0/16','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-04). ');
$ax += cidrblock($address,'8.189.0.0/16','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-05). ');
$ax += cidrblock($address,'38.81.194.0/23','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-06). ');
$ax += cidrblock($address,'46.165.0.0/16','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-07). ');
$ax += cidrblock($address,'61.55.145.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-08). ');
$ax += cidrblock($address,'66.231.176.0/20','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-09). ');
$ax += cidrblock($address,'67.208.64.0/19','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-10). ');
$ax += cidrblock($address,'69.26.176.0/23','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-11). ');
$ax += cidrblock($address,'69.26.178.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-12). ');
$ax += cidrblock($address,'69.169.0.0/17','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-13). ');
$ax += cidrblock($address,'70.33.160.0/19','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-14). ');
$ax += cidrblock($address,'74.112.255.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-15). ');
$ax += cidrblock($address,'113.160.0.0/16','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-16). ');
$ax += cidrblock($address,'120.209.19.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-17). ');
$ax += cidrblock($address,'123.173.125.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-18). ');
$ax += cidrblock($address,'130.185.182.0/23','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-19). ');
$ax += cidrblock($address,'173.45.0.0/18','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-20). ');
$ax += cidrblock($address,'173.205.128.0/17','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-21). ');
$ax += cidrblock($address,'173.245.104.0/22','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-22). ');
$ax += cidrblock($address,'173.245.108.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-23). ');
$ax += cidrblock($address,'174.128.128.0/18','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-24). ');
$ax += cidrblock($address,'190.102.100.0/22','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-25). ');
$ax += cidrblock($address,'192.82.109.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-26). ');
$ax += cidrblock($address,'198.62.86.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-27). ');
$ax += cidrblock($address,'199.15.248.0/21','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-28). ');
$ax += cidrblock($address,'199.115.248.0/22','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-29). ');
$ax += cidrblock($address,'199.167.224.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-30). ');
$ax += cidrblock($address,'199.188.228.0/22','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-31). ');
$ax += cidrblock($address,'205.251.0.0/17','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-32). ');
$ax += cidrblock($address,'208.73.20.0/22','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-33). ');
$ax += cidrblock($address,'208.94.144.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-34). ');
$ax += cidrblock($address,'218.21.220.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-35). ');


// Westhost (updated 2016.01.20)
// AS29854
$ax += cidrblock($address,'27.126.249.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-00). ');
$ax += cidrblock($address,'27.126.250.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-01). ');
$ax += cidrblock($address,'50.115.112.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-02). ');
$ax += cidrblock($address,'67.212.224.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-03). ');
$ax += cidrblock($address,'68.169.32.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-04). ');
$ax += cidrblock($address,'69.36.160.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-05). ');
$ax += cidrblock($address,'104.245.11.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-06). ');
$ax += cidrblock($address,'107.181.188.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-07). ');
$ax += cidrblock($address,'107.182.224.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-08). ');
$ax += cidrblock($address,'172.98.91.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-09). ');
$ax += cidrblock($address,'173.244.192.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-10). ');
$ax += cidrblock($address,'173.255.128.0/22','Westhost, not an access provider ISP (ASN-WESTHOST-11). ');
$ax += cidrblock($address,'174.127.104.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-12). ');
$ax += cidrblock($address,'174.127.112.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-13). ');
$ax += cidrblock($address,'185.72.156.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-14). ');
$ax += cidrblock($address,'185.72.158.0/23','Westhost, not an access provider ISP (ASN-WESTHOST-15). ');
$ax += cidrblock($address,'192.245.255.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-16). ');
$ax += cidrblock($address,'198.105.208.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-17). ');
$ax += cidrblock($address,'199.189.104.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-18). ');
$ax += cidrblock($address,'199.195.192.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-19). ');
$ax += cidrblock($address,'206.130.96.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-20). ');
$ax += cidrblock($address,'206.190.128.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-21). ');
$ax += cidrblock($address,'208.131.128.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-22). ');
$ax += cidrblock($address,'209.95.32.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-23). ');
$ax += cidrblock($address,'209.236.64.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-24). ');


// Bezeq International (updated 2016.01.20)
// AS8551
$ax += cidrblock($address,'23.34.224.0/20','BEZEQ-INT (ASN-BEZEQ-00). ');
$ax += cidrblock($address,'31.168.0.0/17','BEZEQ-INT (ASN-BEZEQ-01). ');
$ax += cidrblock($address,'31.168.128.0/18','BEZEQ-INT (ASN-BEZEQ-02). ');
$ax += cidrblock($address,'31.168.192.0/19','BEZEQ-INT (ASN-BEZEQ-03). ');
$ax += cidrblock($address,'31.168.224.0/20','BEZEQ-INT (ASN-BEZEQ-04). ');
$ax += cidrblock($address,'31.168.240.0/21','BEZEQ-INT (ASN-BEZEQ-05). ');
$ax += cidrblock($address,'31.168.251.0/24','BEZEQ-INT (ASN-BEZEQ-06). ');
$ax += cidrblock($address,'31.168.252.0/24','BEZEQ-INT (ASN-BEZEQ-07). ');
$ax += cidrblock($address,'62.219.0.0/16','BEZEQ-INT (ASN-BEZEQ-08). ');
$ax += cidrblock($address,'79.176.0.0/13','BEZEQ-INT (ASN-BEZEQ-09). ');
$ax += cidrblock($address,'81.218.0.0/16','BEZEQ-INT (ASN-BEZEQ-10). ');
$ax += cidrblock($address,'82.80.1.0/24','BEZEQ-INT (ASN-BEZEQ-11). ');
$ax += cidrblock($address,'82.80.2.0/23','BEZEQ-INT (ASN-BEZEQ-12). ');
$ax += cidrblock($address,'82.80.4.0/22','BEZEQ-INT (ASN-BEZEQ-13). ');
$ax += cidrblock($address,'82.80.8.0/23','BEZEQ-INT (ASN-BEZEQ-14). ');
$ax += cidrblock($address,'82.80.12.0/24','BEZEQ-INT (ASN-BEZEQ-15). ');
$ax += cidrblock($address,'82.80.14.0/23','BEZEQ-INT (ASN-BEZEQ-16). ');
$ax += cidrblock($address,'82.80.16.0/20','BEZEQ-INT (ASN-BEZEQ-17). ');
$ax += cidrblock($address,'82.80.32.0/19','BEZEQ-INT (ASN-BEZEQ-18). ');
$ax += cidrblock($address,'82.80.64.0/18','BEZEQ-INT (ASN-BEZEQ-19). ');
$ax += cidrblock($address,'82.80.128.0/17','BEZEQ-INT (ASN-BEZEQ-20). ');
$ax += cidrblock($address,'82.81.0.0/16','BEZEQ-INT (ASN-BEZEQ-21). ');
$ax += cidrblock($address,'84.108.0.0/14','BEZEQ-INT (ASN-BEZEQ-22). ');
$ax += cidrblock($address,'85.130.128.0/17','BEZEQ-INT (ASN-BEZEQ-23). ');
$ax += cidrblock($address,'92.122.128.0/20','BEZEQ-INT (ASN-BEZEQ-24). ');
$ax += cidrblock($address,'95.101.4.0/22','BEZEQ-INT (ASN-BEZEQ-25). ');
$ax += cidrblock($address,'104.70.127.0/24','BEZEQ-INT (ASN-BEZEQ-26). ');
$ax += cidrblock($address,'104.70.176.0/23','BEZEQ-INT (ASN-BEZEQ-27). ');
$ax += cidrblock($address,'104.70.186.0/23','BEZEQ-INT (ASN-BEZEQ-28). ');
$ax += cidrblock($address,'104.74.71.0/24','BEZEQ-INT (ASN-BEZEQ-29). ');
$ax += cidrblock($address,'104.77.202.0/24','BEZEQ-INT (ASN-BEZEQ-30). ');
$ax += cidrblock($address,'104.79.198.0/23','BEZEQ-INT (ASN-BEZEQ-31). ');
$ax += cidrblock($address,'104.79.200.0/22','BEZEQ-INT (ASN-BEZEQ-32). ');
$ax += cidrblock($address,'104.79.208.0/20','BEZEQ-INT (ASN-BEZEQ-33). ');
$ax += cidrblock($address,'104.79.224.0/20','BEZEQ-INT (ASN-BEZEQ-34). ');
$ax += cidrblock($address,'109.64.0.0/14','BEZEQ-INT (ASN-BEZEQ-35). ');
$ax += cidrblock($address,'184.27.128.0/23','BEZEQ-INT (ASN-BEZEQ-36). ');
$ax += cidrblock($address,'192.114.11.0/24','BEZEQ-INT (ASN-BEZEQ-37). ');
$ax += cidrblock($address,'192.114.40.0/21','BEZEQ-INT (ASN-BEZEQ-38). ');
$ax += cidrblock($address,'192.114.64.0/20','BEZEQ-INT (ASN-BEZEQ-39). ');
$ax += cidrblock($address,'192.114.80.0/24','BEZEQ-INT (ASN-BEZEQ-40). ');
$ax += cidrblock($address,'192.114.83.0/24','BEZEQ-INT (ASN-BEZEQ-41). ');
$ax += cidrblock($address,'192.114.144.0/22','BEZEQ-INT (ASN-BEZEQ-42). ');
$ax += cidrblock($address,'192.115.16.0/20','BEZEQ-INT (ASN-BEZEQ-43). ');
$ax += cidrblock($address,'192.115.56.0/21','BEZEQ-INT (ASN-BEZEQ-44). ');
$ax += cidrblock($address,'192.115.104.0/22','BEZEQ-INT (ASN-BEZEQ-45). ');
$ax += cidrblock($address,'192.115.128.0/21','BEZEQ-INT (ASN-BEZEQ-46). ');
$ax += cidrblock($address,'192.115.184.0/21','BEZEQ-INT (ASN-BEZEQ-47). ');
$ax += cidrblock($address,'192.117.96.0/19','BEZEQ-INT (ASN-BEZEQ-48). ');
$ax += cidrblock($address,'192.117.232.0/21','BEZEQ-INT (ASN-BEZEQ-49). ');
$ax += cidrblock($address,'206.82.140.0/24','BEZEQ-INT (ASN-BEZEQ-50). ');
$ax += cidrblock($address,'212.25.64.0/18','BEZEQ-INT (ASN-BEZEQ-51). ');
$ax += cidrblock($address,'212.179.0.0/16','BEZEQ-INT (ASN-BEZEQ-52). ');
$ax += cidrblock($address,'217.194.200.0/23','BEZEQ-INT (ASN-BEZEQ-53). ');


// WholeSale Internet, Inc. & DataShack LLC (updated 2016.01.20)
// AS33387 (attempted to DoS SbS), AS32097
$ax += cidrblock($address,'63.141.224.0/19','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-00). ');
$ax += cidrblock($address,'69.30.192.0/18','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-01). ');
$ax += cidrblock($address,'69.197.128.0/18','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-02). ');
$ax += cidrblock($address,'74.91.16.0/20','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-03). ');
$ax += cidrblock($address,'103.25.63.0/24','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-04). ');
$ax += cidrblock($address,'104.193.212.0/22','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-05). ');
$ax += cidrblock($address,'107.150.32.0/19','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-06). ');
$ax += cidrblock($address,'142.54.160.0/19','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-07). ');
$ax += cidrblock($address,'153.89.0.0/16','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-08). ');
$ax += cidrblock($address,'162.251.120.0/22','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-09). ');
$ax += cidrblock($address,'173.208.128.0/17','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-10). ');
$ax += cidrblock($address,'179.0.32.0/19','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-11). ');
$ax += cidrblock($address,'179.0.64.0/18','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-12). ');
$ax += cidrblock($address,'185.94.98.0/24','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-13). ');
$ax += cidrblock($address,'190.113.32.0/19','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-14). ');
$ax += cidrblock($address,'192.151.144.0/20','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-15). ');
$ax += cidrblock($address,'192.187.96.0/19','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-16). ');
$ax += cidrblock($address,'198.204.224.0/19','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-17). ');
$ax += cidrblock($address,'199.168.96.0/21','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-18). ');
$ax += cidrblock($address,'201.218.160.0/19','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-19). ');
$ax += cidrblock($address,'204.10.160.0/22','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-20). ');
$ax += cidrblock($address,'204.12.192.0/18','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-21). ');
$ax += cidrblock($address,'208.67.0.0/21','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-22). ');
$ax += cidrblock($address,'208.110.64.0/19','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESHACK-23). ');


// CoS International (updated 2016.01.20)
// AS7914
$ax += cidrblock($address,'12.9.239.0/24','Known hostile network (ASN-CSI-0). ');
$ax += cidrblock($address,'192.216.201.0/24','Known hostile network (ASN-CSI-1). ');
$ax += cidrblock($address,'198.77.154.0/23','Known hostile network (ASN-CSI-2). ');
$ax += cidrblock($address,'198.95.10.0/24','Known hostile network (ASN-CSI-3). ');
$ax += cidrblock($address,'205.180.15.0/24','Known hostile network (ASN-CSI-4). ');
$ax += cidrblock($address,'208.29.5.0/24','Known hostile network (ASN-CSI-5). ');
$ax += cidrblock($address,'208.30.51.0/24','Known hostile network (ASN-CSI-6). ');
$ax += cidrblock($address,'208.33.13.0/24','Known hostile network (ASN-CSI-7). ');


// Avante Hosting (updated 2016.01.21)
// AS36137
$ax += cidrblock($address,'66.248.198.0/23','Avante Hosting, not an access provider (ASN-AVANTE-0). ');
$ax += cidrblock($address,'45.59.72.0/21','Avante Hosting, not an access provider (ASN-AVANTE-1). ');
$ax += cidrblock($address,'45.62.176.0/20','Avante Hosting, not an access provider (ASN-AVANTE-2). ');
$ax += cidrblock($address,'66.248.192.0/19','Avante Hosting, not an access provider (ASN-AVANTE-3). ');
$ax += cidrblock($address,'192.119.144.0/20','Avante Hosting, not an access provider (ASN-AVANTE-4). ');
$ax += cidrblock($address,'192.161.192.0/18','Avante Hosting, not an access provider (ASN-AVANTE-5). ');
$ax += cidrblock($address,'192.241.8.0/21','Avante Hosting, not an access provider (ASN-AVANTE-6). ');
$ax += cidrblock($address,'198.52.128.0/17','Avante Hosting, not an access provider (ASN-AVANTE-7). ');
$ax += cidrblock($address,'199.195.156.0/22','Avante Hosting, not an access provider (ASN-AVANTE-8). ');


// Tex-Link Communications, Inc. (updated 2016.01.21)
// AS11457
$ax += cidrblock($address,'66.52.209.0/24','Tex-Link Communications, not an access provider (ASN-TEXLINK-0). ');
$ax += cidrblock($address,'66.52.224.0/22','Tex-Link Communications, not an access provider (ASN-TEXLINK-1). ');
$ax += cidrblock($address,'66.118.0.0/18','Tex-Link Communications, not an access provider (ASN-TEXLINK-2). ');
$ax += cidrblock($address,'66.118.224.0/19','Tex-Link Communications, not an access provider (ASN-TEXLINK-3). ');
$ax += cidrblock($address,'72.18.64.0/19','Tex-Link Communications, not an access provider (ASN-TEXLINK-4). ');
$ax += cidrblock($address,'208.99.0.0/18','Tex-Link Communications, not an access provider (ASN-TEXLINK-5). ');


// Ready Server, Dedicated Server Hosting (updated 2016.01.21)
// AS63930
$ax += cidrblock($address,'45.125.192.0/22','Ready Server, not an access provider (ASN-RSDSH-0). ');
$ax += cidrblock($address,'103.47.208.0/22','Ready Server, not an access provider (ASN-RSDSH-1). ');
$ax += cidrblock($address,'103.195.151.0/24','Ready Server, not an access provider (ASN-RSDSH-2). ');
$ax += cidrblock($address,'154.16.95.0/24','Ready Server, not an access provider (ASN-RSDSH-3). ');
$ax += cidrblock($address,'192.241.8.0/24','Ready Server, not an access provider (ASN-RSDSH-4). ');


// One and One Hosting / 1&1 Internet AG (updated 2016.01.21)
// AS8560
$ax += cidrblock($address,'37.98.148.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-00). ');
$ax += cidrblock($address,'50.21.176.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-01). ');
$ax += cidrblock($address,'62.151.180.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-02). ');
$ax += cidrblock($address,'66.175.232.0/21','One and One hosting, not an access provider (ASN-ONEANDONE-03). ');
$ax += cidrblock($address,'70.35.192.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-04). ');
$ax += cidrblock($address,'74.208.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-05). ');
$ax += cidrblock($address,'77.68.0.0/17','One and One hosting, not an access provider (ASN-ONEANDONE-06). ');
$ax += cidrblock($address,'79.99.40.0/21','One and One hosting, not an access provider (ASN-ONEANDONE-07). ');
$ax += cidrblock($address,'82.165.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-08). ');
$ax += cidrblock($address,'87.106.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-09). ');
$ax += cidrblock($address,'88.208.192.0/18','One and One hosting, not an access provider (ASN-ONEANDONE-10). ');
$ax += cidrblock($address,'93.90.192.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-11). ');
$ax += cidrblock($address,'104.192.4.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-12). ');
$ax += cidrblock($address,'104.219.40.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-13). ');
$ax += cidrblock($address,'104.254.244.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-14). ');
$ax += cidrblock($address,'108.175.0.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-15). ');
$ax += cidrblock($address,'109.228.0.0/18','One and One hosting, not an access provider (ASN-ONEANDONE-16). ');
$ax += cidrblock($address,'162.222.200.0/21','One and One hosting, not an access provider (ASN-ONEANDONE-17). ');
$ax += cidrblock($address,'162.252.156.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-18). ');
$ax += cidrblock($address,'162.255.84.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-19). ');
$ax += cidrblock($address,'192.195.77.0/24','One and One hosting, not an access provider (ASN-ONEANDONE-20). ');
$ax += cidrblock($address,'195.20.224.0/19','One and One hosting, not an access provider (ASN-ONEANDONE-21). ');
$ax += cidrblock($address,'198.71.48.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-22). ');
$ax += cidrblock($address,'198.251.64.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-23). ');
$ax += cidrblock($address,'212.227.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-24). ');
$ax += cidrblock($address,'213.165.64.0/19','One and One hosting, not an access provider (ASN-ONEANDONE-25). ');
$ax += cidrblock($address,'213.171.192.0/19','One and One hosting, not an access provider (ASN-ONEANDONE-26). ');
$ax += cidrblock($address,'216.250.112.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-27). ');
$ax += cidrblock($address,'217.72.192.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-28). ');
$ax += cidrblock($address,'217.160.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-29). ');
$ax += cidrblock($address,'217.174.240.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-30). ');


// Swift Networks Limited (updated 2016.01.21)
// AS36923
$ax += cidrblock($address,'41.58.0.0/16','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-0). ');
$ax += cidrblock($address,'41.189.0.0/19','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-1). ');
$ax += cidrblock($address,'41.221.160.0/20','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-2). ');
$ax += cidrblock($address,'41.222.64.0/21','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-3). ');
$ax += cidrblock($address,'129.18.0.0/16','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-4). ');


// PVNT Networks, #116 Host Exploit rank.
// AS21788 updated 09/02/15
//
// I checked the BGP records for this ASN on 2016.01.21, but it didn't seem to contain any announces. Leaving it as is
// for now, unless someone else wants to try their hand at updating this one. Cheers. -Maikuolan.
$ax += cidrblock($address,'64.120.128.0/17','PVNT Networks, #116 HE Rank (ASN-AS21788-01). ');
$ax += cidrblock($address,'64.191.0.0/17','PVNT Networks, #116 HE Rank (ASN-AS21788-02). ');
$ax += cidrblock($address,'66.7.186.0/23','PVNT Networks, #116 HE Rank (ASN-AS21788-03). ');
$ax += cidrblock($address,'66.7.188.0/23','PVNT Networks, #116 HE Rank (ASN-AS21788-04). ');
$ax += cidrblock($address,'66.54.168.0/23','PVNT Networks, #116 HE Rank (ASN-AS21788-05). ');
$ax += cidrblock($address,'66.54.216.0/21','PVNT Networks, #116 HE Rank (ASN-AS21788-06). ');
$ax += cidrblock($address,'66.96.192.0/18','PVNT Networks, #116 HE Rank (ASN-AS21788-07). ');
$ax += cidrblock($address,'66.197.128.0/17','PVNT Networks, #116 HE Rank (ASN-AS21788-08). ');
$ax += cidrblock($address,'66.227.0.0/21','PVNT Networks, #116 HE Rank (ASN-AS21788-09). ');
$ax += cidrblock($address,'66.227.24.0/22','PVNT Networks, #116 HE Rank (ASN-AS21788-10). ');
$ax += cidrblock($address,'66.227.32.0/21','PVNT Networks, #116 HE Rank (ASN-AS21788-11). ');
$ax += cidrblock($address,'66.227.112.0/20','PVNT Networks, #116 HE Rank (ASN-AS21788-12). ');
$ax += cidrblock($address,'96.9.128.0/18','PVNT Networks, #116 HE Rank (ASN-AS21788-13). ');
$ax += cidrblock($address,'108.175.148.0/22','PVNT Networks, #116 HE Rank (ASN-AS21788-14). ');
$ax += cidrblock($address,'173.212.192.0/18','PVNT Networks, #116 HE Rank (ASN-AS21788-15). ');
$ax += cidrblock($address,'184.22.128.0/19','PVNT Networks, #116 HE Rank (ASN-AS21788-16). ');
$ax += cidrblock($address,'184.22.192.0/19','PVNT Networks, #116 HE Rank (ASN-AS21788-17). ');
$ax += cidrblock($address,'184.82.0.0/17','PVNT Networks, #116 HE Rank (ASN-AS21788-18). ');
$ax += cidrblock($address,'184.82.128.0/18','PVNT Networks, #116 HE Rank (ASN-AS21788-19). ');
$ax += cidrblock($address,'184.82.192.0/19','PVNT Networks, #116 HE Rank (ASN-AS21788-20). ');
$ax += cidrblock($address,'209.120.128.0/21','PVNT Networks, #116 HE Rank (ASN-AS21788-21). ');
$ax += cidrblock($address,'209.120.180.0/22','PVNT Networks, #116 HE Rank (ASN-AS21788-22). ');


// CariNet, Inc.  dedicated / cloud servers
// AS10439
// This is an optional block. Network does security scans for non-hostile purposes.
// Uncomment 5 lines below to activate.

//$ax += cidrblock($address,'66.240.192.0/18','CariNet, Inc. Not an access provider ISP. (ASN-CARINET-0). '); //75b
//$ax += cidrblock($address,'71.6.128.0/17','CariNet, Inc. Not an access provider ISP. (ASN-CARINET-1). '); //75b
//$ax += cidrblock($address,'209.126.128.0/17','CariNet, Inc. Not an access provider ISP. (ASN-CARINET-2). '); //75b
//$ax += cidrblock($address,'216.75.0.0/18','CariNet, Inc. Not an access provider ISP. (ASN-CARINET-3). '); //75b
//$ax += cidrblock($address,'216.98.128.0/19','CariNet, Inc. Not an access provider ISP. (ASN-CARINET-4). '); //75b


// BestHosting (records checked on 2016.01.21, no changes required)
// AS42655
$ax += cidrblock($address,'31.41.216.0/21','Network known to associate with malware, source: http://www.google.com/safebrowsing/diagnostic?site=AS:42655&hl=en (ASN-BESTHOSTING-0). '); //75b
$ax += cidrblock($address,'194.28.172.0/22','Network known to associate with malware, source: http://www.google.com/safebrowsing/diagnostic?site=AS:42655&hl=en (ASN-BESTHOSTING-1). '); //75b
$ax += cidrblock($address,'195.248.234.0/23','Network known to associate with malware, source: http://www.google.com/safebrowsing/diagnostic?site=AS:42655&hl=en (ASN-BESTHOSTING-2). '); //75b


// Internap (updated 2016.01.21)
// AS12182, AS10912
$ax += cidrblock($address,'5.104.242.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-00). ');
$ax += cidrblock($address,'23.92.184.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-01). ');
$ax += cidrblock($address,'63.251.100.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-02). ');
$ax += cidrblock($address,'63.251.192.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-03). ');
$ax += cidrblock($address,'64.7.192.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-04). ');
$ax += cidrblock($address,'64.74.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-05). ');
$ax += cidrblock($address,'64.74.160.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-06). ');
$ax += cidrblock($address,'64.74.208.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-07). ');
$ax += cidrblock($address,'64.94.96.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-08). ');
$ax += cidrblock($address,'64.95.136.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-09). ');
$ax += cidrblock($address,'64.95.140.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-10). ');
$ax += cidrblock($address,'64.95.156.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-11). ');
$ax += cidrblock($address,'66.150.144.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-12). ');
$ax += cidrblock($address,'66.150.176.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-13). ');
$ax += cidrblock($address,'66.151.48.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-14). ');
$ax += cidrblock($address,'66.151.128.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-15). ');
$ax += cidrblock($address,'69.25.56.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-16). ');
$ax += cidrblock($address,'69.88.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-17). ');
$ax += cidrblock($address,'70.42.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-18). ');
$ax += cidrblock($address,'70.42.240.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-19). ');
$ax += cidrblock($address,'72.5.3.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-20). ');
$ax += cidrblock($address,'72.5.64.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-21). ');
$ax += cidrblock($address,'72.5.224.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-22). ');
$ax += cidrblock($address,'72.5.233.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-23). ');
$ax += cidrblock($address,'74.91.118.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-24). ');
$ax += cidrblock($address,'74.116.112.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-25). ');
$ax += cidrblock($address,'74.118.48.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-26). ');
$ax += cidrblock($address,'74.201.16.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-27). ');
$ax += cidrblock($address,'74.201.64.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-28). ');
$ax += cidrblock($address,'74.201.112.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-29). ');
$ax += cidrblock($address,'74.217.24.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-30). ');
$ax += cidrblock($address,'74.217.64.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-31). ');
$ax += cidrblock($address,'74.217.96.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-32). ');
$ax += cidrblock($address,'74.217.144.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-33). ');
$ax += cidrblock($address,'74.217.187.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-34). ');
$ax += cidrblock($address,'74.217.208.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-35). ');
$ax += cidrblock($address,'75.98.0.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-36). ');
$ax += cidrblock($address,'75.98.80.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-37). ');
$ax += cidrblock($address,'107.150.144.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-38). ');
$ax += cidrblock($address,'130.50.200.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-39). ');
$ax += cidrblock($address,'192.43.206.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-40). ');
$ax += cidrblock($address,'199.245.176.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-41). ');
$ax += cidrblock($address,'204.153.219.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-42). ');
$ax += cidrblock($address,'208.64.56.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-43). ');
$ax += cidrblock($address,'216.52.28.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-44). ');
$ax += cidrblock($address,'216.52.208.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-45). ');
$ax += cidrblock($address,'216.52.224.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-46). ');
$ax += cidrblock($address,'216.133.224.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-47). ');


// WEBSUPPORT-SRO-SK-AS (updated 2016.01.21)
// AS51013
$ax += cidrblock($address,'37.9.168.0/21','Nasty slovak proxy service, participated in DoS attack (ASN-WEBSUP-0). ');
$ax += cidrblock($address,'185.111.88.0/22','Nasty slovak proxy service, participated in DoS attack (ASN-WEBSUP-1). ');
$ax += cidrblock($address,'195.210.28.0/23','Nasty slovak proxy service, participated in DoS attack (ASN-WEBSUP-2). ');


// XIRRA GmbH (updated 2015.09.03; records checked on 2016.01.21, no changes required)
// AS51191
$ax += cidrblock($address,'91.232.96.0/23','XIRRA (ASN-XIRRA-1). ');
$ax += cidrblock($address,'130.185.104.0/21','XIRRA (ASN-XIRRA-2). ');
$ax += cidrblock($address,'185.24.68.0/22','XIRRA (ASN-XIRRA-3). ');
$ax += cidrblock($address,'185.108.216.0/22','XIRRA (ASN-XIRRA-4). ');
$ax += cidrblock($address,'195.138.240.0/21','XIRRA (ASN-XIRRA-5). ');


// Unified Layer / Hostmonster (updated 2016.01.21)
// Site on network caught hotlinking a resource on SBS!
// AS46606 HE Rank: 17
$ax += cidrblock($address,'50.87.0.0/16','Unified Layer/Hostmonster (ASN-UNIHM-00). ');
$ax += cidrblock($address,'66.147.240.0/20','Unified Layer/Hostmonster (ASN-UNIHM-01). ');
$ax += cidrblock($address,'67.20.64.0/18','Unified Layer/Hostmonster (ASN-UNIHM-02). ');
$ax += cidrblock($address,'67.222.32.0/19','Unified Layer/Hostmonster (ASN-UNIHM-03). ');
$ax += cidrblock($address,'69.89.16.0/20','Unified Layer/Hostmonster (ASN-UNIHM-04). ');
$ax += cidrblock($address,'69.195.64.0/18','Unified Layer/Hostmonster (ASN-UNIHM-05). ');
$ax += cidrblock($address,'70.40.192.0/19','Unified Layer/Hostmonster (ASN-UNIHM-06). ');
$ax += cidrblock($address,'74.220.192.0/19','Unified Layer/Hostmonster (ASN-UNIHM-07). ');
$ax += cidrblock($address,'142.4.0.0/19','Unified Layer/Hostmonster (ASN-UNIHM-08). ');
$ax += cidrblock($address,'162.144.0.0/16','Unified Layer/Hostmonster (ASN-UNIHM-09). ');
$ax += cidrblock($address,'162.214.0.0/15','Unified Layer/Hostmonster (ASN-UNIHM-10). ');
$ax += cidrblock($address,'173.254.0.0/17','Unified Layer/Hostmonster (ASN-UNIHM-11). ');
$ax += cidrblock($address,'192.163.192.0/18','Unified Layer/Hostmonster (ASN-UNIHM-12). ');
$ax += cidrblock($address,'192.185.224.0/19','Unified Layer/Hostmonster (ASN-UNIHM-13). ');
$ax += cidrblock($address,'192.232.192.0/18','Unified Layer/Hostmonster (ASN-UNIHM-14). ');
$ax += cidrblock($address,'192.254.128.0/17','Unified Layer/Hostmonster (ASN-UNIHM-15). ');
$ax += cidrblock($address,'198.1.64.0/18','Unified Layer/Hostmonster (ASN-UNIHM-16). ');
$ax += cidrblock($address,'198.20.224.0/19','Unified Layer/Hostmonster (ASN-UNIHM-17). ');
$ax += cidrblock($address,'198.57.128.0/17','Unified Layer/Hostmonster (ASN-UNIHM-18). ');
$ax += cidrblock($address,'198.154.192.0/18','Unified Layer/Hostmonster (ASN-UNIHM-19). ');


// WOWRACK Routing from Hyper to Wowrack
// Should not be contacting servers outside of routing purposes,
// but is participating in attacks nonetheless.
// AS23033 HE Rank: 1163 (updated 2016.01.22)
$ax += cidrblock($address,'50.115.170.0/23','Wowrack AS23033 (ASN-WOWRACK-00). ');
$ax += cidrblock($address,'50.115.172.0/23','Wowrack AS23033 (ASN-WOWRACK-01). ');
$ax += cidrblock($address,'74.121.184.0/21','Wowrack AS23033 (ASN-WOWRACK-02). ');
$ax += cidrblock($address,'76.191.81.0/24','Wowrack AS23033 (ASN-WOWRACK-03). ');
$ax += cidrblock($address,'76.191.82.0/23','Wowrack AS23033 (ASN-WOWRACK-04). ');
$ax += cidrblock($address,'173.0.51.0/24','Wowrack AS23033 (ASN-WOWRACK-05). ');
$ax += cidrblock($address,'173.0.52.0/24','Wowrack AS23033 (ASN-WOWRACK-06). ');
$ax += cidrblock($address,'173.0.63.0/24','Wowrack AS23033 (ASN-WOWRACK-07). ');
$ax += cidrblock($address,'192.34.108.0/22','Wowrack AS23033 (ASN-WOWRACK-08). ');
$ax += cidrblock($address,'192.251.193.0/24','Wowrack AS23033 (ASN-WOWRACK-09). ');
$ax += cidrblock($address,'198.167.136.0/23','Wowrack AS23033 (ASN-WOWRACK-10). ');
$ax += cidrblock($address,'198.167.139.0/24','Wowrack AS23033 (ASN-WOWRACK-11). ');
$ax += cidrblock($address,'198.167.140.0/22','Wowrack AS23033 (ASN-WOWRACK-12). ');
$ax += cidrblock($address,'198.175.126.0/23','Wowrack AS23033 (ASN-WOWRACK-13). ');
$ax += cidrblock($address,'199.180.128.0/24','Wowrack AS23033 (ASN-WOWRACK-14). ');
$ax += cidrblock($address,'199.180.133.0/24','Wowrack AS23033 (ASN-WOWRACK-15). ');
$ax += cidrblock($address,'199.180.134.0/24','Wowrack AS23033 (ASN-WOWRACK-16). ');
$ax += cidrblock($address,'207.244.144.0/20','Wowrack AS23033 (ASN-WOWRACK-17). ');
$ax += cidrblock($address,'208.89.211.0/24','Wowrack AS23033 (ASN-WOWRACK-18). ');
$ax += cidrblock($address,'208.89.215.0/24','Wowrack AS23033 (ASN-WOWRACK-19). ');
$ax += cidrblock($address,'208.115.96.0/19','Wowrack AS23033 (ASN-WOWRACK-20). ');
$ax += cidrblock($address,'209.40.200.0/24','Wowrack AS23033 (ASN-WOWRACK-21). ');
$ax += cidrblock($address,'209.90.224.0/20','Wowrack AS23033 (ASN-WOWRACK-22). ');
$ax += cidrblock($address,'216.176.176.0/20','Wowrack AS23033 (ASN-WOWRACK-23). ');
$ax += cidrblock($address,'216.244.64.0/19','Wowrack AS23033 (ASN-WOWRACK-24). ');


// HyperHosting (updated 2016.01.21)
// AS197746
$ax += cidrblock($address,'31.22.112.0/23','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-1). ');
$ax += cidrblock($address,'31.22.115.0/24','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-2). ');
$ax += cidrblock($address,'31.22.118.0/23','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-3). ');
$ax += cidrblock($address,'62.1.216.0/24','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-4). ');
$ax += cidrblock($address,'185.23.88.0/23','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-5). ');
$ax += cidrblock($address,'194.219.79.0/24','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-6). ');


// SWIFT VENTURES Inc (updated 2016.01.22)
// AS25700
$ax += cidrblock($address,'74.117.174.0/24','Swift Ventures spam/scrape network (ASN-SWIFT-00). ');
$ax += cidrblock($address,'204.8.32.0/24','Swift Ventures spam/scrape network (ASN-SWIFT-01). ');
$ax += cidrblock($address,'204.8.34.0/24','Swift Ventures spam/scrape network (ASN-SWIFT-02). ');
$ax += cidrblock($address,'204.13.164.0/22','Swift Ventures spam/scrape network (ASN-SWIFT-03). ');
$ax += cidrblock($address,'204.14.122.0/23','Swift Ventures spam/scrape network (ASN-SWIFT-04). ');
$ax += cidrblock($address,'204.15.224.0/21','Swift Ventures spam/scrape network (ASN-SWIFT-05). ');
$ax += cidrblock($address,'208.99.192.0/21','Swift Ventures spam/scrape network (ASN-SWIFT-06). ');
$ax += cidrblock($address,'208.99.200.0/24','Swift Ventures spam/scrape network (ASN-SWIFT-07). ');
$ax += cidrblock($address,'208.99.202.0/23','Swift Ventures spam/scrape network (ASN-SWIFT-08). ');
$ax += cidrblock($address,'208.99.204.0/22','Swift Ventures spam/scrape network (ASN-SWIFT-09). ');
$ax += cidrblock($address,'208.99.208.0/22','Swift Ventures spam/scrape network (ASN-SWIFT-10). ');
$ax += cidrblock($address,'208.99.214.0/23','Swift Ventures spam/scrape network (ASN-SWIFT-11). ');
$ax += cidrblock($address,'208.99.216.0/21','Swift Ventures spam/scrape network (ASN-SWIFT-12). ');


// iDeal Hosting Tic. Ltd. Sti. (updated 2016.01.25)
// Turkish host provider caught hammering honeypots
// AS29262, AS60897
$ax += cidrblock($address,'185.85.189.0/24','iDeal Hosting (ASN-iDEAL-00). ');
$ax += cidrblock($address,'185.85.190.0/23','iDeal Hosting (ASN-iDEAL-01). ');
$ax += cidrblock($address,'185.85.237.0/24','iDeal Hosting (ASN-iDEAL-02). ');
$ax += cidrblock($address,'185.85.238.0/23','iDeal Hosting (ASN-iDEAL-03). ');
$ax += cidrblock($address,'185.86.5.0/24','iDeal Hosting (ASN-iDEAL-04). ');
$ax += cidrblock($address,'185.86.81.0/24','iDeal Hosting (ASN-iDEAL-05). ');
$ax += cidrblock($address,'185.86.82.0/23','iDeal Hosting (ASN-iDEAL-06). ');
$ax += cidrblock($address,'185.86.153.0/24','iDeal Hosting (ASN-iDEAL-07). ');
$ax += cidrblock($address,'185.86.154.0/24','iDeal Hosting (ASN-iDEAL-08). ');
$ax += cidrblock($address,'185.86.164.0/22','iDeal Hosting (ASN-iDEAL-09). ');
$ax += cidrblock($address,'185.87.26.0/23','iDeal Hosting (ASN-iDEAL-10). ');
$ax += cidrblock($address,'185.87.121.0/24','iDeal Hosting (ASN-iDEAL-11). ');
$ax += cidrblock($address,'185.87.122.0/23','iDeal Hosting (ASN-iDEAL-12). ');
$ax += cidrblock($address,'185.98.60.0/24','iDeal Hosting (ASN-iDEAL-13). ');
$ax += cidrblock($address,'185.119.80.0/23','iDeal Hosting (ASN-iDEAL-14). ');
$ax += cidrblock($address,'185.119.82.0/24','iDeal Hosting (ASN-iDEAL-15). ');
$ax += cidrblock($address,'213.238.166.0/23','iDeal Hosting (ASN-iDEAL-16). ');
$ax += cidrblock($address,'213.238.168.0/21','iDeal Hosting (ASN-iDEAL-17). ');
$ax += cidrblock($address,'213.238.178.0/23','iDeal Hosting (ASN-iDEAL-18). ');


// CyberVerse (Colocated Data Centers)
// AS11051 (updated 2016.01.22)
$ax += cidrblock($address,'66.172.0.0/18','CyberVerse (ASN-CBRVRS-0). ');
$ax += cidrblock($address,'66.180.192.0/20','CyberVerse (ASN-CBRVRS-1). ');
$ax += cidrblock($address,'76.8.16.0/20','CyberVerse (ASN-CBRVRS-2). ');
$ax += cidrblock($address,'184.170.144.0/20','CyberVerse (ASN-CBRVRS-3). ');
$ax += cidrblock($address,'208.80.183.0/24','CyberVerse (ASN-CBRVRS-4). ');
$ax += cidrblock($address,'209.151.224.0/19','CyberVerse (ASN-CBRVRS-5). ');
$ax += cidrblock($address,'216.176.192.0/20','CyberVerse (ASN-CBRVRS-6). ');


// Black Lotus Communications (updated 2016.01.22)
// Only needed if you use their reverse proxy service. Ask for bypass.
// ** Next two lines to watch for 'cleaning up'
// http://sitevet.com/db/asn/AS54489
// http://www.blocklist.de/en/search.html?as=AS54489&action=search&send=start+search
// AS54489
$ax += cidrblock($address,'44.110.0.0/24','Black Lotus (ASN-54489-00). ');
$ax += cidrblock($address,'63.249.128.0/17','Black Lotus (ASN-54489-01). ');
$ax += cidrblock($address,'64.182.0.0/16','Black Lotus (ASN-54489-02). ');
$ax += cidrblock($address,'66.34.0.0/16','Black Lotus (ASN-54489-03). ');
$ax += cidrblock($address,'66.221.0.0/16','Black Lotus (ASN-54489-04). ');
$ax += cidrblock($address,'69.13.0.0/16','Black Lotus (ASN-54489-05). ');
$ax += cidrblock($address,'198.73.50.0/24','Black Lotus (ASN-54489-06). ');
$ax += cidrblock($address,'198.232.139.0/24','Black Lotus (ASN-54489-07). ');
$ax += cidrblock($address,'209.164.64.0/18','Black Lotus (ASN-54489-08). ');
$ax += cidrblock($address,'216.19.223.0/24','Black Lotus (ASN-54489-09). ');
$ax += cidrblock($address,'216.97.0.0/17','Black Lotus (ASN-54489-10). ');
$ax += cidrblock($address,'216.221.160.0/19','Black Lotus (ASN-54489-11). ');


// Quadranet (updated 2016.01.22)
// AS29761, AS8100
$ax += cidrblock($address,'23.92.52.0/22','Quadranet, not an access provider (ASN-QUADRA-000). ');
$ax += cidrblock($address,'43.229.18.0/23','Quadranet, not an access provider (ASN-QUADRA-001). ');
$ax += cidrblock($address,'43.251.8.0/22','Quadranet, not an access provider (ASN-QUADRA-002). ');
$ax += cidrblock($address,'45.41.140.0/22','Quadranet, not an access provider (ASN-QUADRA-003). ');
$ax += cidrblock($address,'45.56.144.0/22','Quadranet, not an access provider (ASN-QUADRA-004). ');
$ax += cidrblock($address,'45.61.112.0/20','Quadranet, not an access provider (ASN-QUADRA-005). ');
$ax += cidrblock($address,'45.62.96.0/20','Quadranet, not an access provider (ASN-QUADRA-006). ');
$ax += cidrblock($address,'45.118.124.0/22','Quadranet, not an access provider (ASN-QUADRA-007). ');
$ax += cidrblock($address,'45.120.4.0/22','Quadranet, not an access provider (ASN-QUADRA-008). ');
$ax += cidrblock($address,'45.127.206.0/23','Quadranet, not an access provider (ASN-QUADRA-009). ');
$ax += cidrblock($address,'59.153.60.0/22','Quadranet, not an access provider (ASN-QUADRA-010). ');
$ax += cidrblock($address,'63.142.240.0/22','Quadranet, not an access provider (ASN-QUADRA-011). ');
$ax += cidrblock($address,'63.142.248.0/23','Quadranet, not an access provider (ASN-QUADRA-012). ');
$ax += cidrblock($address,'64.57.132.0/24','Quadranet, not an access provider (ASN-QUADRA-013). ');
$ax += cidrblock($address,'64.110.129.0/24','Quadranet, not an access provider (ASN-QUADRA-014). ');
$ax += cidrblock($address,'64.110.130.0/24','Quadranet, not an access provider (ASN-QUADRA-015). ');
$ax += cidrblock($address,'66.55.76.0/24','Quadranet, not an access provider (ASN-QUADRA-016). ');
$ax += cidrblock($address,'66.63.160.0/19','Quadranet, not an access provider (ASN-QUADRA-017). ');
$ax += cidrblock($address,'66.85.26.0/23','Quadranet, not an access provider (ASN-QUADRA-018). ');
$ax += cidrblock($address,'66.154.96.0/19','Quadranet, not an access provider (ASN-QUADRA-019). ');
$ax += cidrblock($address,'66.212.16.0/20','Quadranet, not an access provider (ASN-QUADRA-020). ');
$ax += cidrblock($address,'67.215.224.0/19','Quadranet, not an access provider (ASN-QUADRA-021). ');
$ax += cidrblock($address,'69.12.64.0/19','Quadranet, not an access provider (ASN-QUADRA-022). ');
$ax += cidrblock($address,'69.174.96.0/21','Quadranet, not an access provider (ASN-QUADRA-023). ');
$ax += cidrblock($address,'72.11.128.0/19','Quadranet, not an access provider (ASN-QUADRA-024). ');
$ax += cidrblock($address,'96.44.128.0/18','Quadranet, not an access provider (ASN-QUADRA-025). ');
$ax += cidrblock($address,'96.47.224.0/20','Quadranet, not an access provider (ASN-QUADRA-026). ');
$ax += cidrblock($address,'98.143.144.0/20','Quadranet, not an access provider (ASN-QUADRA-027). ');
$ax += cidrblock($address,'103.21.208.0/22','Quadranet, not an access provider (ASN-QUADRA-028). ');
$ax += cidrblock($address,'103.58.176.0/22','Quadranet, not an access provider (ASN-QUADRA-029). ');
$ax += cidrblock($address,'103.60.64.0/22','Quadranet, not an access provider (ASN-QUADRA-030). ');
$ax += cidrblock($address,'103.235.4.0/24','Quadranet, not an access provider (ASN-QUADRA-031). ');
$ax += cidrblock($address,'103.236.221.0/24','Quadranet, not an access provider (ASN-QUADRA-032). ');
$ax += cidrblock($address,'103.236.222.0/23','Quadranet, not an access provider (ASN-QUADRA-033). ');
$ax += cidrblock($address,'103.238.80.0/22','Quadranet, not an access provider (ASN-QUADRA-034). ');
$ax += cidrblock($address,'104.37.0.0/24','Quadranet, not an access provider (ASN-QUADRA-035). ');
$ax += cidrblock($address,'104.37.4.0/24','Quadranet, not an access provider (ASN-QUADRA-036). ');
$ax += cidrblock($address,'104.37.59.0/24','Quadranet, not an access provider (ASN-QUADRA-037). ');
$ax += cidrblock($address,'104.128.84.0/22','Quadranet, not an access provider (ASN-QUADRA-038). ');
$ax += cidrblock($address,'104.128.88.0/21','Quadranet, not an access provider (ASN-QUADRA-039). ');
$ax += cidrblock($address,'104.129.0.0/18','Quadranet, not an access provider (ASN-QUADRA-040). ');
$ax += cidrblock($address,'104.143.88.0/22','Quadranet, not an access provider (ASN-QUADRA-041). ');
$ax += cidrblock($address,'104.160.40.0/21','Quadranet, not an access provider (ASN-QUADRA-042). ');
$ax += cidrblock($address,'104.192.28.0/22','Quadranet, not an access provider (ASN-QUADRA-043). ');
$ax += cidrblock($address,'104.194.64.0/19','Quadranet, not an access provider (ASN-QUADRA-044). ');
$ax += cidrblock($address,'104.194.192.0/22','Quadranet, not an access provider (ASN-QUADRA-045). ');
$ax += cidrblock($address,'104.200.160.0/20','Quadranet, not an access provider (ASN-QUADRA-046). ');
$ax += cidrblock($address,'104.223.0.0/17','Quadranet, not an access provider (ASN-QUADRA-047). ');
$ax += cidrblock($address,'104.224.128.0/21','Quadranet, not an access provider (ASN-QUADRA-048). ');
$ax += cidrblock($address,'104.224.152.0/21','Quadranet, not an access provider (ASN-QUADRA-049). ');
$ax += cidrblock($address,'104.224.160.0/21','Quadranet, not an access provider (ASN-QUADRA-050). ');
$ax += cidrblock($address,'104.224.176.0/20','Quadranet, not an access provider (ASN-QUADRA-051). ');
$ax += cidrblock($address,'104.238.33.0/24','Quadranet, not an access provider (ASN-QUADRA-052). ');
$ax += cidrblock($address,'104.238.46.0/23','Quadranet, not an access provider (ASN-QUADRA-053). ');
$ax += cidrblock($address,'104.243.246.0/24','Quadranet, not an access provider (ASN-QUADRA-054). ');
$ax += cidrblock($address,'104.244.7.0/24','Quadranet, not an access provider (ASN-QUADRA-055). ');
$ax += cidrblock($address,'104.244.157.0/24','Quadranet, not an access provider (ASN-QUADRA-056). ');
$ax += cidrblock($address,'104.245.240.0/21','Quadranet, not an access provider (ASN-QUADRA-057). ');
$ax += cidrblock($address,'104.250.163.0/24','Quadranet, not an access provider (ASN-QUADRA-058). ');
$ax += cidrblock($address,'104.250.174.0/24','Quadranet, not an access provider (ASN-QUADRA-059). ');
$ax += cidrblock($address,'104.250.178.0/24','Quadranet, not an access provider (ASN-QUADRA-060). ');
$ax += cidrblock($address,'104.251.180.0/22','Quadranet, not an access provider (ASN-QUADRA-061). ');
$ax += cidrblock($address,'104.251.186.0/23','Quadranet, not an access provider (ASN-QUADRA-062). ');
$ax += cidrblock($address,'104.251.208.0/23','Quadranet, not an access provider (ASN-QUADRA-063). ');
$ax += cidrblock($address,'104.254.56.0/24','Quadranet, not an access provider (ASN-QUADRA-064). ');
$ax += cidrblock($address,'104.254.61.0/24','Quadranet, not an access provider (ASN-QUADRA-065). ');
$ax += cidrblock($address,'104.255.220.0/22','Quadranet, not an access provider (ASN-QUADRA-066). ');
$ax += cidrblock($address,'104.255.225.0/24','Quadranet, not an access provider (ASN-QUADRA-067). ');
$ax += cidrblock($address,'104.255.229.0/24','Quadranet, not an access provider (ASN-QUADRA-068). ');
$ax += cidrblock($address,'104.255.231.0/24','Quadranet, not an access provider (ASN-QUADRA-069). ');
$ax += cidrblock($address,'107.150.31.0/24','Quadranet, not an access provider (ASN-QUADRA-070). ');
$ax += cidrblock($address,'107.161.80.0/20','Quadranet, not an access provider (ASN-QUADRA-071). ');
$ax += cidrblock($address,'107.167.32.0/19','Quadranet, not an access provider (ASN-QUADRA-072). ');
$ax += cidrblock($address,'107.178.140.0/22','Quadranet, not an access provider (ASN-QUADRA-073). ');
$ax += cidrblock($address,'107.181.77.0/24','Quadranet, not an access provider (ASN-QUADRA-074). ');
$ax += cidrblock($address,'107.182.180.0/22','Quadranet, not an access provider (ASN-QUADRA-075). ');
$ax += cidrblock($address,'107.182.184.0/21','Quadranet, not an access provider (ASN-QUADRA-076). ');
$ax += cidrblock($address,'138.128.192.0/20','Quadranet, not an access provider (ASN-QUADRA-077). ');
$ax += cidrblock($address,'138.128.220.0/22','Quadranet, not an access provider (ASN-QUADRA-078). ');
$ax += cidrblock($address,'146.71.32.0/20','Quadranet, not an access provider (ASN-QUADRA-079). ');
$ax += cidrblock($address,'146.148.160.0/21','Quadranet, not an access provider (ASN-QUADRA-080). ');
$ax += cidrblock($address,'155.94.128.0/17','Quadranet, not an access provider (ASN-QUADRA-081). ');
$ax += cidrblock($address,'155.254.38.0/24','Quadranet, not an access provider (ASN-QUADRA-082). ');
$ax += cidrblock($address,'162.211.65.0/24','Quadranet, not an access provider (ASN-QUADRA-083). ');
$ax += cidrblock($address,'162.220.244.0/24','Quadranet, not an access provider (ASN-QUADRA-084). ');
$ax += cidrblock($address,'162.253.178.0/23','Quadranet, not an access provider (ASN-QUADRA-085). ');
$ax += cidrblock($address,'167.160.36.0/24','Quadranet, not an access provider (ASN-QUADRA-086). ');
$ax += cidrblock($address,'172.97.64.0/24','Quadranet, not an access provider (ASN-QUADRA-087). ');
$ax += cidrblock($address,'172.97.66.0/23','Quadranet, not an access provider (ASN-QUADRA-088). ');
$ax += cidrblock($address,'172.97.68.0/23','Quadranet, not an access provider (ASN-QUADRA-089). ');
$ax += cidrblock($address,'172.110.24.0/24','Quadranet, not an access provider (ASN-QUADRA-090). ');
$ax += cidrblock($address,'173.44.32.0/19','Quadranet, not an access provider (ASN-QUADRA-091). ');
$ax += cidrblock($address,'173.205.80.0/20','Quadranet, not an access provider (ASN-QUADRA-092). ');
$ax += cidrblock($address,'173.254.192.0/18','Quadranet, not an access provider (ASN-QUADRA-093). ');
$ax += cidrblock($address,'183.182.10.0/24','Quadranet, not an access provider (ASN-QUADRA-094). ');
$ax += cidrblock($address,'185.73.128.0/22','Quadranet, not an access provider (ASN-QUADRA-095). ');
$ax += cidrblock($address,'185.121.152.0/24','Quadranet, not an access provider (ASN-QUADRA-096). ');
$ax += cidrblock($address,'192.52.166.0/23','Quadranet, not an access provider (ASN-QUADRA-097). ');
$ax += cidrblock($address,'192.119.140.0/22','Quadranet, not an access provider (ASN-QUADRA-098). ');
$ax += cidrblock($address,'192.161.48.0/20','Quadranet, not an access provider (ASN-QUADRA-099). ');
$ax += cidrblock($address,'192.161.160.0/19','Quadranet, not an access provider (ASN-QUADRA-100). ');
$ax += cidrblock($address,'192.169.6.0/23','Quadranet, not an access provider (ASN-QUADRA-101). ');
$ax += cidrblock($address,'192.189.2.0/24','Quadranet, not an access provider (ASN-QUADRA-102). ');
$ax += cidrblock($address,'192.225.224.0/22','Quadranet, not an access provider (ASN-QUADRA-103). ');
$ax += cidrblock($address,'192.225.228.0/23','Quadranet, not an access provider (ASN-QUADRA-104). ');
$ax += cidrblock($address,'193.17.68.0/24','Quadranet, not an access provider (ASN-QUADRA-105). ');
$ax += cidrblock($address,'193.30.161.0/24','Quadranet, not an access provider (ASN-QUADRA-106). ');
$ax += cidrblock($address,'193.200.30.0/24','Quadranet, not an access provider (ASN-QUADRA-107). ');
$ax += cidrblock($address,'198.55.96.0/19','Quadranet, not an access provider (ASN-QUADRA-108). ');
$ax += cidrblock($address,'198.96.88.0/21','Quadranet, not an access provider (ASN-QUADRA-109). ');
$ax += cidrblock($address,'198.175.228.0/24','Quadranet, not an access provider (ASN-QUADRA-110). ');
$ax += cidrblock($address,'198.180.167.0/24','Quadranet, not an access provider (ASN-QUADRA-111). ');
$ax += cidrblock($address,'199.89.0.0/23','Quadranet, not an access provider (ASN-QUADRA-112). ');
$ax += cidrblock($address,'199.180.254.0/23','Quadranet, not an access provider (ASN-QUADRA-113). ');
$ax += cidrblock($address,'199.202.223.0/24','Quadranet, not an access provider (ASN-QUADRA-114). ');
$ax += cidrblock($address,'199.249.182.0/24','Quadranet, not an access provider (ASN-QUADRA-115). ');
$ax += cidrblock($address,'202.131.55.0/24','Quadranet, not an access provider (ASN-QUADRA-116). ');
$ax += cidrblock($address,'203.7.164.0/24','Quadranet, not an access provider (ASN-QUADRA-117). ');
$ax += cidrblock($address,'204.44.64.0/18','Quadranet, not an access provider (ASN-QUADRA-118). ');
$ax += cidrblock($address,'204.152.192.0/19','Quadranet, not an access provider (ASN-QUADRA-119). ');
$ax += cidrblock($address,'206.126.96.0/24','Quadranet, not an access provider (ASN-QUADRA-120). ');
$ax += cidrblock($address,'207.246.200.0/24','Quadranet, not an access provider (ASN-QUADRA-121). ');
$ax += cidrblock($address,'216.45.48.0/20','Quadranet, not an access provider (ASN-QUADRA-122). ');
$ax += cidrblock($address,'216.144.224.0/20','Quadranet, not an access provider (ASN-QUADRA-123). ');
$ax += cidrblock($address,'218.246.130.0/24','Quadranet, not an access provider (ASN-QUADRA-124). ');


// Colocrossing (updated 2016.01.22)
// AS36352
$ax += cidrblock($address,'5.226.171.0/24','Colocrossing Network, not an access provider (ASN-36352-000). ');
$ax += cidrblock($address,'8.17.250.0/23','Colocrossing Network, not an access provider (ASN-36352-001). ');
$ax += cidrblock($address,'8.17.252.0/24','Colocrossing Network, not an access provider (ASN-36352-002). ');
$ax += cidrblock($address,'23.94.0.0/15','Colocrossing Network, not an access provider (ASN-36352-003). ');
$ax += cidrblock($address,'23.229.96.0/19','Colocrossing Network, not an access provider (ASN-36352-004). ');
$ax += cidrblock($address,'23.236.240.0/20','Colocrossing Network, not an access provider (ASN-36352-005). ');
$ax += cidrblock($address,'23.249.160.0/20','Colocrossing Network, not an access provider (ASN-36352-006). ');
$ax += cidrblock($address,'23.250.112.0/20','Colocrossing Network, not an access provider (ASN-36352-007). ');
$ax += cidrblock($address,'23.254.88.0/21','Colocrossing Network, not an access provider (ASN-36352-008). ');
$ax += cidrblock($address,'23.254.96.0/21','Colocrossing Network, not an access provider (ASN-36352-009). ');
$ax += cidrblock($address,'23.254.104.0/23','Colocrossing Network, not an access provider (ASN-36352-010). ');
$ax += cidrblock($address,'23.254.106.0/24','Colocrossing Network, not an access provider (ASN-36352-011). ');
$ax += cidrblock($address,'23.254.112.0/20','Colocrossing Network, not an access provider (ASN-36352-012). ');
$ax += cidrblock($address,'43.245.196.0/24','Colocrossing Network, not an access provider (ASN-36352-013). ');
$ax += cidrblock($address,'45.40.32.0/20','Colocrossing Network, not an access provider (ASN-36352-014). ');
$ax += cidrblock($address,'45.57.240.0/23','Colocrossing Network, not an access provider (ASN-36352-015). ');
$ax += cidrblock($address,'45.57.243.0/24','Colocrossing Network, not an access provider (ASN-36352-016). ');
$ax += cidrblock($address,'45.57.244.0/24','Colocrossing Network, not an access provider (ASN-36352-017). ');
$ax += cidrblock($address,'45.57.248.0/21','Colocrossing Network, not an access provider (ASN-36352-018). ');
$ax += cidrblock($address,'45.74.2.0/24','Colocrossing Network, not an access provider (ASN-36352-019). ');
$ax += cidrblock($address,'65.99.193.0/24','Colocrossing Network, not an access provider (ASN-36352-020). ');
$ax += cidrblock($address,'65.99.246.0/24','Colocrossing Network, not an access provider (ASN-36352-021). ');
$ax += cidrblock($address,'66.225.194.0/23','Colocrossing Network, not an access provider (ASN-36352-022). ');
$ax += cidrblock($address,'66.225.198.0/24','Colocrossing Network, not an access provider (ASN-36352-023). ');
$ax += cidrblock($address,'66.225.231.0/24','Colocrossing Network, not an access provider (ASN-36352-024). ');
$ax += cidrblock($address,'66.225.232.0/24','Colocrossing Network, not an access provider (ASN-36352-025). ');
$ax += cidrblock($address,'69.31.134.0/24','Colocrossing Network, not an access provider (ASN-36352-026). ');
$ax += cidrblock($address,'72.249.94.0/24','Colocrossing Network, not an access provider (ASN-36352-027). ');
$ax += cidrblock($address,'72.249.124.0/24','Colocrossing Network, not an access provider (ASN-36352-028). ');
$ax += cidrblock($address,'75.102.10.0/24','Colocrossing Network, not an access provider (ASN-36352-029). ');
$ax += cidrblock($address,'75.102.27.0/24','Colocrossing Network, not an access provider (ASN-36352-030). ');
$ax += cidrblock($address,'75.102.34.0/24','Colocrossing Network, not an access provider (ASN-36352-031). ');
$ax += cidrblock($address,'75.102.38.0/23','Colocrossing Network, not an access provider (ASN-36352-032). ');
$ax += cidrblock($address,'75.127.0.0/20','Colocrossing Network, not an access provider (ASN-36352-033). ');
$ax += cidrblock($address,'96.8.112.0/20','Colocrossing Network, not an access provider (ASN-36352-034). ');
$ax += cidrblock($address,'104.128.231.0/24','Colocrossing Network, not an access provider (ASN-36352-035). ');
$ax += cidrblock($address,'104.128.232.0/24','Colocrossing Network, not an access provider (ASN-36352-036). ');
$ax += cidrblock($address,'104.145.227.0/24','Colocrossing Network, not an access provider (ASN-36352-037). ');
$ax += cidrblock($address,'104.145.231.0/24','Colocrossing Network, not an access provider (ASN-36352-038). ');
$ax += cidrblock($address,'104.145.232.0/23','Colocrossing Network, not an access provider (ASN-36352-039). ');
$ax += cidrblock($address,'104.145.234.0/24','Colocrossing Network, not an access provider (ASN-36352-040). ');
$ax += cidrblock($address,'104.145.237.0/24','Colocrossing Network, not an access provider (ASN-36352-041). ');
$ax += cidrblock($address,'104.145.238.0/24','Colocrossing Network, not an access provider (ASN-36352-042). ');
$ax += cidrblock($address,'104.168.0.0/17','Colocrossing Network, not an access provider (ASN-36352-043). ');
$ax += cidrblock($address,'104.227.192.0/19','Colocrossing Network, not an access provider (ASN-36352-044). ');
$ax += cidrblock($address,'104.232.32.0/20','Colocrossing Network, not an access provider (ASN-36352-045). ');
$ax += cidrblock($address,'104.250.124.0/23','Colocrossing Network, not an access provider (ASN-36352-046). ');
$ax += cidrblock($address,'104.250.126.0/24','Colocrossing Network, not an access provider (ASN-36352-047). ');
$ax += cidrblock($address,'107.161.144.0/21','Colocrossing Network, not an access provider (ASN-36352-048). ');
$ax += cidrblock($address,'107.161.152.0/24','Colocrossing Network, not an access provider (ASN-36352-049). ');
$ax += cidrblock($address,'107.161.155.0/24','Colocrossing Network, not an access provider (ASN-36352-050). ');
$ax += cidrblock($address,'107.161.156.0/22','Colocrossing Network, not an access provider (ASN-36352-051). ');
$ax += cidrblock($address,'107.172.0.0/17','Colocrossing Network, not an access provider (ASN-36352-052). ');
$ax += cidrblock($address,'107.172.128.0/21','Colocrossing Network, not an access provider (ASN-36352-053). ');
$ax += cidrblock($address,'107.172.138.0/23','Colocrossing Network, not an access provider (ASN-36352-054). ');
$ax += cidrblock($address,'107.172.140.0/22','Colocrossing Network, not an access provider (ASN-36352-055). ');
$ax += cidrblock($address,'107.172.144.0/22','Colocrossing Network, not an access provider (ASN-36352-056). ');
$ax += cidrblock($address,'107.172.148.0/24','Colocrossing Network, not an access provider (ASN-36352-057). ');
$ax += cidrblock($address,'107.172.154.0/24','Colocrossing Network, not an access provider (ASN-36352-058). ');
$ax += cidrblock($address,'107.172.158.0/23','Colocrossing Network, not an access provider (ASN-36352-059). ');
$ax += cidrblock($address,'107.172.160.0/19','Colocrossing Network, not an access provider (ASN-36352-060). ');
$ax += cidrblock($address,'107.172.192.0/18','Colocrossing Network, not an access provider (ASN-36352-061). ');
$ax += cidrblock($address,'107.173.0.0/16','Colocrossing Network, not an access provider (ASN-36352-062). ');
$ax += cidrblock($address,'107.174.0.0/15','Colocrossing Network, not an access provider (ASN-36352-063). ');
$ax += cidrblock($address,'108.174.48.0/20','Colocrossing Network, not an access provider (ASN-36352-064). ');
$ax += cidrblock($address,'138.128.112.0/20','Colocrossing Network, not an access provider (ASN-36352-065). ');
$ax += cidrblock($address,'162.218.88.0/21','Colocrossing Network, not an access provider (ASN-36352-066). ');
$ax += cidrblock($address,'162.221.176.0/21','Colocrossing Network, not an access provider (ASN-36352-067). ');
$ax += cidrblock($address,'172.87.240.0/20','Colocrossing Network, not an access provider (ASN-36352-068). ');
$ax += cidrblock($address,'172.102.160.0/22','Colocrossing Network, not an access provider (ASN-36352-069). ');
$ax += cidrblock($address,'172.102.168.0/22','Colocrossing Network, not an access provider (ASN-36352-070). ');
$ax += cidrblock($address,'172.102.176.0/22','Colocrossing Network, not an access provider (ASN-36352-071). ');
$ax += cidrblock($address,'172.102.184.0/21','Colocrossing Network, not an access provider (ASN-36352-072). ');
$ax += cidrblock($address,'172.245.0.0/19','Colocrossing Network, not an access provider (ASN-36352-073). ');
$ax += cidrblock($address,'172.245.32.0/20','Colocrossing Network, not an access provider (ASN-36352-074). ');
$ax += cidrblock($address,'172.245.54.0/23','Colocrossing Network, not an access provider (ASN-36352-075). ');
$ax += cidrblock($address,'172.245.56.0/21','Colocrossing Network, not an access provider (ASN-36352-076). ');
$ax += cidrblock($address,'172.245.64.0/18','Colocrossing Network, not an access provider (ASN-36352-077). ');
$ax += cidrblock($address,'172.245.128.0/19','Colocrossing Network, not an access provider (ASN-36352-078). ');
$ax += cidrblock($address,'172.245.176.0/21','Colocrossing Network, not an access provider (ASN-36352-079). ');
$ax += cidrblock($address,'172.245.184.0/22','Colocrossing Network, not an access provider (ASN-36352-080). ');
$ax += cidrblock($address,'172.245.189.0/24','Colocrossing Network, not an access provider (ASN-36352-081). ');
$ax += cidrblock($address,'172.245.190.0/23','Colocrossing Network, not an access provider (ASN-36352-082). ');
$ax += cidrblock($address,'172.245.208.0/20','Colocrossing Network, not an access provider (ASN-36352-083). ');
$ax += cidrblock($address,'172.245.224.0/19','Colocrossing Network, not an access provider (ASN-36352-084). ');
$ax += cidrblock($address,'179.61.192.0/24','Colocrossing Network, not an access provider (ASN-36352-085). ');
$ax += cidrblock($address,'179.61.252.0/23','Colocrossing Network, not an access provider (ASN-36352-086). ');
$ax += cidrblock($address,'191.96.106.0/24','Colocrossing Network, not an access provider (ASN-36352-087). ');
$ax += cidrblock($address,'191.101.50.0/24','Colocrossing Network, not an access provider (ASN-36352-088). ');
$ax += cidrblock($address,'192.3.0.0/18','Colocrossing Network, not an access provider (ASN-36352-089). ');
$ax += cidrblock($address,'192.3.80.0/20','Colocrossing Network, not an access provider (ASN-36352-090). ');
$ax += cidrblock($address,'192.3.96.0/19','Colocrossing Network, not an access provider (ASN-36352-091). ');
$ax += cidrblock($address,'192.3.128.0/18','Colocrossing Network, not an access provider (ASN-36352-092). ');
$ax += cidrblock($address,'192.3.192.0/19','Colocrossing Network, not an access provider (ASN-36352-093). ');
$ax += cidrblock($address,'192.3.228.0/22','Colocrossing Network, not an access provider (ASN-36352-094). ');
$ax += cidrblock($address,'192.3.232.0/21','Colocrossing Network, not an access provider (ASN-36352-095). ');
$ax += cidrblock($address,'192.3.240.0/20','Colocrossing Network, not an access provider (ASN-36352-096). ');
$ax += cidrblock($address,'192.157.30.0/24','Colocrossing Network, not an access provider (ASN-36352-097). ');
$ax += cidrblock($address,'192.210.128.0/20','Colocrossing Network, not an access provider (ASN-36352-098). ');
$ax += cidrblock($address,'192.210.144.0/21','Colocrossing Network, not an access provider (ASN-36352-099). ');
$ax += cidrblock($address,'192.210.160.0/19','Colocrossing Network, not an access provider (ASN-36352-100). ');
$ax += cidrblock($address,'192.210.192.0/19','Colocrossing Network, not an access provider (ASN-36352-101). ');
$ax += cidrblock($address,'192.210.226.0/23','Colocrossing Network, not an access provider (ASN-36352-102). ');
$ax += cidrblock($address,'192.210.228.0/22','Colocrossing Network, not an access provider (ASN-36352-103). ');
$ax += cidrblock($address,'192.210.232.0/21','Colocrossing Network, not an access provider (ASN-36352-104). ');
$ax += cidrblock($address,'192.210.240.0/20','Colocrossing Network, not an access provider (ASN-36352-105). ');
$ax += cidrblock($address,'192.227.128.0/20','Colocrossing Network, not an access provider (ASN-36352-106). ');
$ax += cidrblock($address,'192.227.144.0/22','Colocrossing Network, not an access provider (ASN-36352-107). ');
$ax += cidrblock($address,'192.227.149.0/24','Colocrossing Network, not an access provider (ASN-36352-108). ');
$ax += cidrblock($address,'192.227.152.0/22','Colocrossing Network, not an access provider (ASN-36352-109). ');
$ax += cidrblock($address,'192.227.158.0/24','Colocrossing Network, not an access provider (ASN-36352-110). ');
$ax += cidrblock($address,'192.227.160.0/19','Colocrossing Network, not an access provider (ASN-36352-111). ');
$ax += cidrblock($address,'192.227.192.0/18','Colocrossing Network, not an access provider (ASN-36352-112). ');
$ax += cidrblock($address,'198.12.64.0/18','Colocrossing Network, not an access provider (ASN-36352-113). ');
$ax += cidrblock($address,'198.23.128.0/19','Colocrossing Network, not an access provider (ASN-36352-114). ');
$ax += cidrblock($address,'198.23.160.0/23','Colocrossing Network, not an access provider (ASN-36352-115). ');
$ax += cidrblock($address,'198.23.164.0/22','Colocrossing Network, not an access provider (ASN-36352-116). ');
$ax += cidrblock($address,'198.23.168.0/21','Colocrossing Network, not an access provider (ASN-36352-117). ');
$ax += cidrblock($address,'198.23.176.0/20','Colocrossing Network, not an access provider (ASN-36352-118). ');
$ax += cidrblock($address,'198.23.192.0/18','Colocrossing Network, not an access provider (ASN-36352-119). ');
$ax += cidrblock($address,'198.46.128.0/19','Colocrossing Network, not an access provider (ASN-36352-120). ');
$ax += cidrblock($address,'198.46.160.0/22','Colocrossing Network, not an access provider (ASN-36352-121). ');
$ax += cidrblock($address,'198.46.168.0/21','Colocrossing Network, not an access provider (ASN-36352-122). ');
$ax += cidrblock($address,'198.46.176.0/20','Colocrossing Network, not an access provider (ASN-36352-123). ');
$ax += cidrblock($address,'198.46.192.0/23','Colocrossing Network, not an access provider (ASN-36352-124). ');
$ax += cidrblock($address,'198.46.195.0/24','Colocrossing Network, not an access provider (ASN-36352-125). ');
$ax += cidrblock($address,'198.46.198.0/24','Colocrossing Network, not an access provider (ASN-36352-126). ');
$ax += cidrblock($address,'198.46.202.0/24','Colocrossing Network, not an access provider (ASN-36352-127). ');
$ax += cidrblock($address,'198.46.208.0/20','Colocrossing Network, not an access provider (ASN-36352-128). ');
$ax += cidrblock($address,'198.46.224.0/19','Colocrossing Network, not an access provider (ASN-36352-129). ');
$ax += cidrblock($address,'198.143.9.0/24','Colocrossing Network, not an access provider (ASN-36352-130). ');
$ax += cidrblock($address,'198.143.12.0/24','Colocrossing Network, not an access provider (ASN-36352-131). ');
$ax += cidrblock($address,'198.144.176.0/20','Colocrossing Network, not an access provider (ASN-36352-132). ');
$ax += cidrblock($address,'198.206.8.0/21','Colocrossing Network, not an access provider (ASN-36352-133). ');
$ax += cidrblock($address,'199.21.112.0/22','Colocrossing Network, not an access provider (ASN-36352-134). ');
$ax += cidrblock($address,'199.188.100.0/22','Colocrossing Network, not an access provider (ASN-36352-135). ');
$ax += cidrblock($address,'204.86.16.0/20','Colocrossing Network, not an access provider (ASN-36352-136). ');
$ax += cidrblock($address,'205.234.152.0/23','Colocrossing Network, not an access provider (ASN-36352-137). ');
$ax += cidrblock($address,'205.234.159.0/24','Colocrossing Network, not an access provider (ASN-36352-138). ');
$ax += cidrblock($address,'205.234.203.0/24','Colocrossing Network, not an access provider (ASN-36352-139). ');
$ax += cidrblock($address,'206.123.95.0/24','Colocrossing Network, not an access provider (ASN-36352-140). ');
$ax += cidrblock($address,'206.217.128.0/20','Colocrossing Network, not an access provider (ASN-36352-141). ');
$ax += cidrblock($address,'207.210.239.0/24','Colocrossing Network, not an access provider (ASN-36352-142). ');
$ax += cidrblock($address,'207.210.254.0/24','Colocrossing Network, not an access provider (ASN-36352-143). ');
$ax += cidrblock($address,'216.170.112.0/20','Colocrossing Network, not an access provider (ASN-36352-144). ');
$ax += cidrblock($address,'216.246.49.0/24','Colocrossing Network, not an access provider (ASN-36352-145). ');
$ax += cidrblock($address,'216.246.108.0/23','Colocrossing Network, not an access provider (ASN-36352-146). ');


// Serveryou Network (updated 2016.01.22)
// AS11282
$ax += cidrblock($address,'104.251.224.0/21','Serveryou Network, not an access provider (ASN-11282-00). ');
$ax += cidrblock($address,'104.251.232.0/22','Serveryou Network, not an access provider (ASN-11282-01). ');
$ax += cidrblock($address,'104.251.236.0/23','Serveryou Network, not an access provider (ASN-11282-02). ');
$ax += cidrblock($address,'122.10.120.0/21','Serveryou Network, not an access provider (ASN-11282-03). ');
$ax += cidrblock($address,'192.0.16.0/20','Serveryou Network, not an access provider (ASN-11282-04). ');
$ax += cidrblock($address,'192.249.80.0/22','Serveryou Network, not an access provider (ASN-11282-05). ');
$ax += cidrblock($address,'198.1.128.0/18','Serveryou Network, not an access provider (ASN-11282-06). ');
$ax += cidrblock($address,'198.15.128.0/17','Serveryou Network, not an access provider (ASN-11282-07). ');
$ax += cidrblock($address,'198.44.224.0/20','Serveryou Network, not an access provider (ASN-11282-08). ');
$ax += cidrblock($address,'198.44.252.0/23','Serveryou Network, not an access provider (ASN-11282-09). ');
$ax += cidrblock($address,'198.105.160.0/19','Serveryou Network, not an access provider (ASN-11282-10). ');
$ax += cidrblock($address,'198.177.56.0/21','Serveryou Network, not an access provider (ASN-11282-11). ');
$ax += cidrblock($address,'199.231.64.0/21','Serveryou Network, not an access provider (ASN-11282-12). ');


// Hostspace Networks (updated 2016.01.22)
// AS26484
$ax += cidrblock($address,'23.226.54.0/24','Hostspace Networks, not an access provider (ASN-26484-00). ');
$ax += cidrblock($address,'23.226.57.0/24','Hostspace Networks, not an access provider (ASN-26484-01). ');
$ax += cidrblock($address,'23.226.63.0/24','Hostspace Networks, not an access provider (ASN-26484-02). ');
$ax += cidrblock($address,'23.234.0.0/19','Hostspace Networks, not an access provider (ASN-26484-03). ');
$ax += cidrblock($address,'23.234.32.0/21','Hostspace Networks, not an access provider (ASN-26484-04). ');
$ax += cidrblock($address,'23.234.48.0/21','Hostspace Networks, not an access provider (ASN-26484-05). ');
$ax += cidrblock($address,'23.234.60.0/22','Hostspace Networks, not an access provider (ASN-26484-06). ');
$ax += cidrblock($address,'23.235.165.0/24','Hostspace Networks, not an access provider (ASN-26484-07). ');
$ax += cidrblock($address,'23.235.170.0/24','Hostspace Networks, not an access provider (ASN-26484-08). ');
$ax += cidrblock($address,'23.235.172.0/22','Hostspace Networks, not an access provider (ASN-26484-09). ');
$ax += cidrblock($address,'23.235.183.0/24','Hostspace Networks, not an access provider (ASN-26484-10). ');
$ax += cidrblock($address,'23.248.198.0/24','Hostspace Networks, not an access provider (ASN-26484-11). ');
$ax += cidrblock($address,'23.248.201.0/24','Hostspace Networks, not an access provider (ASN-26484-12). ');
$ax += cidrblock($address,'23.248.202.0/24','Hostspace Networks, not an access provider (ASN-26484-13). ');
$ax += cidrblock($address,'23.248.205.0/24','Hostspace Networks, not an access provider (ASN-26484-14). ');
$ax += cidrblock($address,'23.248.206.0/24','Hostspace Networks, not an access provider (ASN-26484-15). ');
$ax += cidrblock($address,'23.248.227.0/24','Hostspace Networks, not an access provider (ASN-26484-16). ');
$ax += cidrblock($address,'23.248.242.0/24','Hostspace Networks, not an access provider (ASN-26484-17). ');
$ax += cidrblock($address,'23.252.160.0/20','Hostspace Networks, not an access provider (ASN-26484-18). ');
$ax += cidrblock($address,'43.228.232.0/22','Hostspace Networks, not an access provider (ASN-26484-19). ');
$ax += cidrblock($address,'43.230.112.0/22','Hostspace Networks, not an access provider (ASN-26484-20). ');
$ax += cidrblock($address,'43.230.140.0/22','Hostspace Networks, not an access provider (ASN-26484-21). ');
$ax += cidrblock($address,'43.230.144.0/22','Hostspace Networks, not an access provider (ASN-26484-22). ');
$ax += cidrblock($address,'45.61.240.0/22','Hostspace Networks, not an access provider (ASN-26484-23). ');
$ax += cidrblock($address,'45.61.244.0/23','Hostspace Networks, not an access provider (ASN-26484-24). ');
$ax += cidrblock($address,'45.61.246.0/24','Hostspace Networks, not an access provider (ASN-26484-25). ');
$ax += cidrblock($address,'45.61.248.0/21','Hostspace Networks, not an access provider (ASN-26484-26). ');
$ax += cidrblock($address,'66.102.253.0/24','Hostspace Networks, not an access provider (ASN-26484-27). ');
$ax += cidrblock($address,'98.159.100.0/23','Hostspace Networks, not an access provider (ASN-26484-28). ');
$ax += cidrblock($address,'103.41.184.0/24','Hostspace Networks, not an access provider (ASN-26484-29). ');
$ax += cidrblock($address,'103.47.240.0/22','Hostspace Networks, not an access provider (ASN-26484-30). ');
$ax += cidrblock($address,'103.49.156.0/22','Hostspace Networks, not an access provider (ASN-26484-31). ');
$ax += cidrblock($address,'103.49.208.0/21','Hostspace Networks, not an access provider (ASN-26484-32). ');
$ax += cidrblock($address,'103.53.7.0/24','Hostspace Networks, not an access provider (ASN-26484-33). ');
$ax += cidrblock($address,'122.10.102.0/24','Hostspace Networks, not an access provider (ASN-26484-34). ');
$ax += cidrblock($address,'162.211.180.0/22','Hostspace Networks, not an access provider (ASN-26484-35). ');
$ax += cidrblock($address,'162.212.180.0/22','Hostspace Networks, not an access provider (ASN-26484-36). ');
$ax += cidrblock($address,'162.251.92.0/22','Hostspace Networks, not an access provider (ASN-26484-37). ');
$ax += cidrblock($address,'192.126.112.0/21','Hostspace Networks, not an access provider (ASN-26484-38). ');
$ax += cidrblock($address,'192.126.120.0/22','Hostspace Networks, not an access provider (ASN-26484-39). ');
$ax += cidrblock($address,'192.126.126.0/23','Hostspace Networks, not an access provider (ASN-26484-40). ');
$ax += cidrblock($address,'198.44.248.0/22','Hostspace Networks, not an access provider (ASN-26484-41). ');
$ax += cidrblock($address,'198.177.127.0/24','Hostspace Networks, not an access provider (ASN-26484-42). ');
$ax += cidrblock($address,'207.254.182.0/24','Hostspace Networks, not an access provider (ASN-26484-43). ');


// Elastic Hosts + Connections4London, Web Host & Cloud Services. (updated 2016.01.22)
// AS25577
$ax += cidrblock($address,'5.133.184.0/21','Cloud Services (ASN-C4LND-00). ');
$ax += cidrblock($address,'5.152.176.0/24','Cloud Services (ASN-C4LND-01). ');
$ax += cidrblock($address,'31.3.208.0/20','Cloud Services (ASN-C4LND-02). ');
$ax += cidrblock($address,'37.58.24.0/21','Cloud Services (ASN-C4LND-03). ');
$ax += cidrblock($address,'46.227.40.0/21','Cloud Services (ASN-C4LND-04). ');
$ax += cidrblock($address,'62.69.143.0/24','Cloud Services (ASN-C4LND-05). ');
$ax += cidrblock($address,'81.27.64.0/19','Cloud Services (ASN-C4LND-06). ');
$ax += cidrblock($address,'82.197.64.0/19','Cloud Services (ASN-C4LND-07). ');
$ax += cidrblock($address,'84.45.0.0/17','Cloud Services (ASN-C4LND-08). ');
$ax += cidrblock($address,'85.88.254.0/23','Cloud Services (ASN-C4LND-09). ');
$ax += cidrblock($address,'85.159.88.0/21','Cloud Services (ASN-C4LND-10). ');
$ax += cidrblock($address,'87.247.138.0/24','Cloud Services (ASN-C4LND-11). ');
$ax += cidrblock($address,'91.195.112.0/23','Cloud Services (ASN-C4LND-12). ');
$ax += cidrblock($address,'91.206.118.0/23','Cloud Services (ASN-C4LND-13). ');
$ax += cidrblock($address,'91.212.108.0/24','Cloud Services (ASN-C4LND-14). ');
$ax += cidrblock($address,'91.213.200.0/24','Cloud Services (ASN-C4LND-15). ');
$ax += cidrblock($address,'91.217.212.0/24','Cloud Services (ASN-C4LND-16). ');
$ax += cidrblock($address,'91.217.245.0/24','Cloud Services (ASN-C4LND-17). ');
$ax += cidrblock($address,'91.247.73.0/24','Cloud Services (ASN-C4LND-18). ');
$ax += cidrblock($address,'92.53.240.0/21','Cloud Services (ASN-C4LND-19). ');
$ax += cidrblock($address,'109.104.96.0/19','Cloud Services (ASN-C4LND-20). ');
$ax += cidrblock($address,'179.48.128.0/19','Cloud Services (ASN-C4LND-21). ');
$ax += cidrblock($address,'179.63.0.0/20','Cloud Services (ASN-C4LND-22). ');
$ax += cidrblock($address,'179.63.32.0/20','Cloud Services (ASN-C4LND-23). ');
$ax += cidrblock($address,'185.5.88.0/22','Cloud Services (ASN-C4LND-24). ');
$ax += cidrblock($address,'185.23.56.0/22','Cloud Services (ASN-C4LND-25). ');
$ax += cidrblock($address,'185.55.252.0/24','Cloud Services (ASN-C4LND-26). ');
$ax += cidrblock($address,'185.67.140.0/22','Cloud Services (ASN-C4LND-27). ');
$ax += cidrblock($address,'185.115.120.0/22','Cloud Services (ASN-C4LND-28). ');
$ax += cidrblock($address,'192.160.10.0/24','Cloud Services (ASN-C4LND-29). ');
$ax += cidrblock($address,'193.27.42.0/24','Cloud Services (ASN-C4LND-30). ');
$ax += cidrblock($address,'193.35.157.0/24','Cloud Services (ASN-C4LND-31). ');
$ax += cidrblock($address,'193.46.61.0/24','Cloud Services (ASN-C4LND-32). ');
$ax += cidrblock($address,'193.104.108.0/24','Cloud Services (ASN-C4LND-33). ');
$ax += cidrblock($address,'193.105.51.0/24','Cloud Services (ASN-C4LND-34). ');
$ax += cidrblock($address,'193.105.61.0/24','Cloud Services (ASN-C4LND-35). ');
$ax += cidrblock($address,'193.105.172.0/24','Cloud Services (ASN-C4LND-36). ');
$ax += cidrblock($address,'193.109.220.0/24','Cloud Services (ASN-C4LND-37). ');
$ax += cidrblock($address,'193.218.160.0/20','Cloud Services (ASN-C4LND-38). ');
$ax += cidrblock($address,'194.9.28.0/23','Cloud Services (ASN-C4LND-39). ');
$ax += cidrblock($address,'194.50.54.0/24','Cloud Services (ASN-C4LND-40). ');
$ax += cidrblock($address,'195.189.12.0/22','Cloud Services (ASN-C4LND-41). ');
$ax += cidrblock($address,'195.226.201.0/24','Cloud Services (ASN-C4LND-42). ');
$ax += cidrblock($address,'195.230.19.0/24','Cloud Services (ASN-C4LND-43). ');


// SINGLEHOP-INC - SingleHop HE Rank 72 (updated 2016.01.22)
// AS32475
$ax += cidrblock($address,'23.91.112.0/21','Singlehop Network (ASN-32475-00). ');
$ax += cidrblock($address,'37.60.224.0/20','Singlehop Network (ASN-32475-01). ');
$ax += cidrblock($address,'37.60.240.0/22','Singlehop Network (ASN-32475-02). ');
$ax += cidrblock($address,'37.60.244.0/23','Singlehop Network (ASN-32475-03). ');
$ax += cidrblock($address,'37.60.247.0/24','Singlehop Network (ASN-32475-04). ');
$ax += cidrblock($address,'37.60.248.0/22','Singlehop Network (ASN-32475-05). ');
$ax += cidrblock($address,'64.57.135.0/24','Singlehop Network (ASN-32475-06). ');
$ax += cidrblock($address,'65.60.0.0/18','Singlehop Network (ASN-32475-07). ');
$ax += cidrblock($address,'66.103.16.0/20','Singlehop Network (ASN-32475-08). ');
$ax += cidrblock($address,'67.212.160.0/19','Singlehop Network (ASN-32475-09). ');
$ax += cidrblock($address,'69.175.0.0/17','Singlehop Network (ASN-32475-10). ');
$ax += cidrblock($address,'96.127.128.0/18','Singlehop Network (ASN-32475-11). ');
$ax += cidrblock($address,'99.198.96.0/19','Singlehop Network (ASN-32475-12). ');
$ax += cidrblock($address,'104.171.12.0/24','Singlehop Network (ASN-32475-13). ');
$ax += cidrblock($address,'104.200.153.0/24','Singlehop Network (ASN-32475-14). ');
$ax += cidrblock($address,'104.200.155.0/24','Singlehop Network (ASN-32475-15). ');
$ax += cidrblock($address,'104.219.72.0/22','Singlehop Network (ASN-32475-16). ');
$ax += cidrblock($address,'107.6.128.0/18','Singlehop Network (ASN-32475-17). ');
$ax += cidrblock($address,'108.163.192.0/18','Singlehop Network (ASN-32475-18). ');
$ax += cidrblock($address,'108.178.0.0/18','Singlehop Network (ASN-32475-19). ');
$ax += cidrblock($address,'109.73.224.0/20','Singlehop Network (ASN-32475-20). ');
$ax += cidrblock($address,'109.199.96.0/19','Singlehop Network (ASN-32475-21). ');
$ax += cidrblock($address,'147.75.129.0/24','Singlehop Network (ASN-32475-22). ');
$ax += cidrblock($address,'162.244.165.0/24','Singlehop Network (ASN-32475-23). ');
$ax += cidrblock($address,'162.244.166.0/24','Singlehop Network (ASN-32475-24). ');
$ax += cidrblock($address,'162.251.140.0/24','Singlehop Network (ASN-32475-25). ');
$ax += cidrblock($address,'162.253.224.0/22','Singlehop Network (ASN-32475-26). ');
$ax += cidrblock($address,'172.94.44.0/23','Singlehop Network (ASN-32475-27). ');
$ax += cidrblock($address,'173.236.0.0/17','Singlehop Network (ASN-32475-28). ');
$ax += cidrblock($address,'181.215.237.0/24','Singlehop Network (ASN-32475-29). ');
$ax += cidrblock($address,'181.224.128.0/20','Singlehop Network (ASN-32475-30). ');
$ax += cidrblock($address,'181.224.144.0/22','Singlehop Network (ASN-32475-31). ');
$ax += cidrblock($address,'181.224.148.0/24','Singlehop Network (ASN-32475-32). ');
$ax += cidrblock($address,'181.224.152.0/22','Singlehop Network (ASN-32475-33). ');
$ax += cidrblock($address,'184.154.0.0/16','Singlehop Network (ASN-32475-34). ');
$ax += cidrblock($address,'185.21.133.0/24','Singlehop Network (ASN-32475-35). ');
$ax += cidrblock($address,'185.21.134.0/23','Singlehop Network (ASN-32475-36). ');
$ax += cidrblock($address,'185.56.84.0/22','Singlehop Network (ASN-32475-37). ');
$ax += cidrblock($address,'185.62.236.0/22','Singlehop Network (ASN-32475-38). ');
$ax += cidrblock($address,'185.126.96.0/23','Singlehop Network (ASN-32475-39). ');
$ax += cidrblock($address,'192.92.97.0/24','Singlehop Network (ASN-32475-40). ');
$ax += cidrblock($address,'198.20.64.0/18','Singlehop Network (ASN-32475-41). ');
$ax += cidrblock($address,'198.91.80.0/20','Singlehop Network (ASN-32475-42). ');
$ax += cidrblock($address,'198.143.128.0/18','Singlehop Network (ASN-32475-43). ');
$ax += cidrblock($address,'199.26.192.0/24','Singlehop Network (ASN-32475-44). ');
$ax += cidrblock($address,'209.222.114.0/24','Singlehop Network (ASN-32475-45). ');
$ax += cidrblock($address,'216.104.32.0/20','Singlehop Network (ASN-32475-46). ');
$ax += cidrblock($address,'216.151.166.0/24','Singlehop Network (ASN-32475-47). ');


// eUKhost LTD (updated 2016.01.22)
// AS29550
$ax += cidrblock($address,'31.193.128.0/20','Cloud services linked to captcha crackers (ASN-29550-00). ');
$ax += cidrblock($address,'85.234.128.0/19','Cloud services linked to captcha crackers (ASN-29550-01). ');
$ax += cidrblock($address,'91.186.0.0/19','Cloud services linked to captcha crackers (ASN-29550-02). ');
$ax += cidrblock($address,'92.48.64.0/18','Cloud services linked to captcha crackers (ASN-29550-03). ');
$ax += cidrblock($address,'94.76.192.0/18','Cloud services linked to captcha crackers (ASN-29550-04). ');
$ax += cidrblock($address,'109.75.168.0/21','Cloud services linked to captcha crackers (ASN-29550-05). ');
$ax += cidrblock($address,'109.203.96.0/19','Cloud services linked to captcha crackers (ASN-29550-06). ');
$ax += cidrblock($address,'115.124.105.0/24','Cloud services linked to captcha crackers (ASN-29550-07). ');
$ax += cidrblock($address,'115.124.110.0/23','Cloud services linked to captcha crackers (ASN-29550-08). ');
$ax += cidrblock($address,'115.124.116.0/23','Cloud services linked to captcha crackers (ASN-29550-09). ');
$ax += cidrblock($address,'151.236.32.0/19','Cloud services linked to captcha crackers (ASN-29550-10). ');
$ax += cidrblock($address,'158.255.40.0/21','Cloud services linked to captcha crackers (ASN-29550-11). ');
$ax += cidrblock($address,'185.2.4.0/22','Cloud services linked to captcha crackers (ASN-29550-12). ');
$ax += cidrblock($address,'185.17.252.0/22','Cloud services linked to captcha crackers (ASN-29550-13). ');
$ax += cidrblock($address,'213.175.192.0/19','Cloud services linked to captcha crackers (ASN-29550-14). ');
$ax += cidrblock($address,'213.229.64.0/18','Cloud services linked to captcha crackers (ASN-29550-15). ');
$ax += cidrblock($address,'217.112.80.0/20','Cloud services linked to captcha crackers (ASN-29550-16). ');


// Total Web Solutions Ltd (updated 2016.01.22)
// AS8669
$ax += cidrblock($address,'195.206.160.0/23','Cloud services linked to captcha crackers (ASN-8669-00). ');
$ax += cidrblock($address,'195.206.162.0/24','Cloud services linked to captcha crackers (ASN-8669-01). ');
$ax += cidrblock($address,'195.206.168.0/23','Cloud services linked to captcha crackers (ASN-8669-02). ');


// Dataflame Internet Services Ltd (updated 2016.01.22)
// AS12703
$ax += cidrblock($address,'5.153.64.0/19','Cloud services linked to captcha crackers (ASN-12703-00). ');
$ax += cidrblock($address,'5.172.152.0/21','Cloud services linked to captcha crackers (ASN-12703-01). ');
$ax += cidrblock($address,'31.170.120.0/21','Cloud services linked to captcha crackers (ASN-12703-02). ');
$ax += cidrblock($address,'37.75.232.0/22','Cloud services linked to captcha crackers (ASN-12703-03). ');
$ax += cidrblock($address,'37.75.236.0/24','Cloud services linked to captcha crackers (ASN-12703-04). ');
$ax += cidrblock($address,'46.249.192.0/19','Cloud services linked to captcha crackers (ASN-12703-05). ');
$ax += cidrblock($address,'84.19.224.0/19','Cloud services linked to captcha crackers (ASN-12703-06). ');
$ax += cidrblock($address,'87.246.64.0/18','Cloud services linked to captcha crackers (ASN-12703-07). ');
$ax += cidrblock($address,'91.103.216.0/21','Cloud services linked to captcha crackers (ASN-12703-08). ');
$ax += cidrblock($address,'91.186.28.0/24','Cloud services linked to captcha crackers (ASN-12703-09). ');
$ax += cidrblock($address,'91.198.3.0/24','Cloud services linked to captcha crackers (ASN-12703-10). ');
$ax += cidrblock($address,'91.207.50.0/23','Cloud services linked to captcha crackers (ASN-12703-11). ');
$ax += cidrblock($address,'91.209.178.0/24','Cloud services linked to captcha crackers (ASN-12703-12). ');
$ax += cidrblock($address,'91.228.251.0/24','Cloud services linked to captcha crackers (ASN-12703-13). ');
$ax += cidrblock($address,'91.230.168.0/24','Cloud services linked to captcha crackers (ASN-12703-14). ');
$ax += cidrblock($address,'91.238.160.0/22','Cloud services linked to captcha crackers (ASN-12703-15). ');
$ax += cidrblock($address,'91.238.164.0/23','Cloud services linked to captcha crackers (ASN-12703-16). ');
$ax += cidrblock($address,'91.239.73.0/24','Cloud services linked to captcha crackers (ASN-12703-17). ');
$ax += cidrblock($address,'91.241.0.0/23','Cloud services linked to captcha crackers (ASN-12703-18). ');
$ax += cidrblock($address,'91.244.126.0/24','Cloud services linked to captcha crackers (ASN-12703-19). ');
$ax += cidrblock($address,'94.126.120.0/23','Cloud services linked to captcha crackers (ASN-12703-20). ');
$ax += cidrblock($address,'185.10.200.0/22','Cloud services linked to captcha crackers (ASN-12703-21). ');
$ax += cidrblock($address,'185.28.90.0/23','Cloud services linked to captcha crackers (ASN-12703-22). ');
$ax += cidrblock($address,'185.29.44.0/24','Cloud services linked to captcha crackers (ASN-12703-23). ');
$ax += cidrblock($address,'185.29.224.0/23','Cloud services linked to captcha crackers (ASN-12703-24). ');
$ax += cidrblock($address,'185.38.104.0/22','Cloud services linked to captcha crackers (ASN-12703-25). ');
$ax += cidrblock($address,'185.43.48.0/22','Cloud services linked to captcha crackers (ASN-12703-26). ');
$ax += cidrblock($address,'185.43.76.0/22','Cloud services linked to captcha crackers (ASN-12703-27). ');
$ax += cidrblock($address,'185.64.88.0/22','Cloud services linked to captcha crackers (ASN-12703-28). ');
$ax += cidrblock($address,'185.68.112.0/23','Cloud services linked to captcha crackers (ASN-12703-29). ');
$ax += cidrblock($address,'185.71.184.0/22','Cloud services linked to captcha crackers (ASN-12703-30). ');
$ax += cidrblock($address,'185.76.44.0/24','Cloud services linked to captcha crackers (ASN-12703-31). ');
$ax += cidrblock($address,'185.94.184.0/22','Cloud services linked to captcha crackers (ASN-12703-32). ');
$ax += cidrblock($address,'188.68.164.0/22','Cloud services linked to captcha crackers (ASN-12703-33). ');
$ax += cidrblock($address,'193.29.223.0/24','Cloud services linked to captcha crackers (ASN-12703-34). ');
$ax += cidrblock($address,'193.187.55.0/24','Cloud services linked to captcha crackers (ASN-12703-35). ');
$ax += cidrblock($address,'193.219.115.0/24','Cloud services linked to captcha crackers (ASN-12703-36). ');
$ax += cidrblock($address,'194.150.194.0/24','Cloud services linked to captcha crackers (ASN-12703-37). ');
$ax += cidrblock($address,'195.47.244.0/24','Cloud services linked to captcha crackers (ASN-12703-38). ');
$ax += cidrblock($address,'195.68.228.0/23','Cloud services linked to captcha crackers (ASN-12703-39). ');
$ax += cidrblock($address,'195.242.154.0/23','Cloud services linked to captcha crackers (ASN-12703-40). ');
$ax += cidrblock($address,'195.242.236.0/24','Cloud services linked to captcha crackers (ASN-12703-41). ');
$ax += cidrblock($address,'195.242.238.0/23','Cloud services linked to captcha crackers (ASN-12703-42). ');
$ax += cidrblock($address,'195.248.70.0/24','Cloud services linked to captcha crackers (ASN-12703-43). ');
$ax += cidrblock($address,'203.62.208.0/23','Cloud services linked to captcha crackers (ASN-12703-44). ');
$ax += cidrblock($address,'212.20.224.0/19','Cloud services linked to captcha crackers (ASN-12703-45). ');
$ax += cidrblock($address,'217.30.112.0/20','Cloud services linked to captcha crackers (ASN-12703-46). ');


// Private Layer INC (updated 2015.09.04; records checked on 2016.01.22, no changes required)
// AS51852
$ax += cidrblock($address,'31.7.56.0/21','Private Layer INC (ASN-51852-01). ');
$ax += cidrblock($address,'31.44.189.0/24','Private Layer INC (ASN-51852-02). ');
$ax += cidrblock($address,'46.19.136.0/21','Private Layer INC (ASN-51852-03). ');
$ax += cidrblock($address,'46.102.152.0/24','Private Layer INC (ASN-51852-04). ');
$ax += cidrblock($address,'81.17.16.0/20','Private Layer INC (ASN-51852-05). ');
$ax += cidrblock($address,'141.255.160.0/21','Private Layer INC (ASN-51852-06). ');
$ax += cidrblock($address,'176.223.111.0/24','Private Layer INC (ASN-51852-07). ');
$ax += cidrblock($address,'179.43.128.0/18','Private Layer INC (ASN-51852-08). ');
$ax += cidrblock($address,'185.12.44.0/22','Private Layer INC (ASN-51852-09). ');
$ax += cidrblock($address,'190.211.252.0/22','Private Layer INC (ASN-51852-10). ');


// PSYCHZ.NET (updated 2016.01.22)
// AS40676
$ax += cidrblock($address,'23.91.0.0/19','psychz.net, not authorized to access this site (ASN-AS40676-000). ');
$ax += cidrblock($address,'23.228.192.0/18','psychz.net, not authorized to access this site (ASN-AS40676-001). ');
$ax += cidrblock($address,'23.238.128.0/17','psychz.net, not authorized to access this site (ASN-AS40676-002). ');
$ax += cidrblock($address,'23.251.32.0/19','psychz.net, not authorized to access this site (ASN-AS40676-003). ');
$ax += cidrblock($address,'43.224.154.0/23','psychz.net, not authorized to access this site (ASN-AS40676-004). ');
$ax += cidrblock($address,'43.246.114.0/23','psychz.net, not authorized to access this site (ASN-AS40676-005). ');
$ax += cidrblock($address,'43.250.72.0/22','psychz.net, not authorized to access this site (ASN-AS40676-006). ');
$ax += cidrblock($address,'45.34.0.0/15','psychz.net, not authorized to access this site (ASN-AS40676-007). ');
$ax += cidrblock($address,'45.58.61.0/24','psychz.net, not authorized to access this site (ASN-AS40676-008). ');
$ax += cidrblock($address,'45.74.1.0/24','psychz.net, not authorized to access this site (ASN-AS40676-009). ');
$ax += cidrblock($address,'45.74.5.0/24','psychz.net, not authorized to access this site (ASN-AS40676-010). ');
$ax += cidrblock($address,'45.74.6.0/23','psychz.net, not authorized to access this site (ASN-AS40676-011). ');
$ax += cidrblock($address,'45.74.8.0/21','psychz.net, not authorized to access this site (ASN-AS40676-012). ');
$ax += cidrblock($address,'45.74.16.0/24','psychz.net, not authorized to access this site (ASN-AS40676-013). ');
$ax += cidrblock($address,'45.113.80.0/24','psychz.net, not authorized to access this site (ASN-AS40676-014). ');
$ax += cidrblock($address,'45.125.164.0/24','psychz.net, not authorized to access this site (ASN-AS40676-015). ');
$ax += cidrblock($address,'49.246.226.0/23','psychz.net, not authorized to access this site (ASN-AS40676-016). ');
$ax += cidrblock($address,'49.246.234.0/23','psychz.net, not authorized to access this site (ASN-AS40676-017). ');
$ax += cidrblock($address,'69.165.64.0/22','psychz.net, not authorized to access this site (ASN-AS40676-018). ');
$ax += cidrblock($address,'69.165.72.0/21','psychz.net, not authorized to access this site (ASN-AS40676-019). ');
$ax += cidrblock($address,'74.117.56.0/21','psychz.net, not authorized to access this site (ASN-AS40676-020). ');
$ax += cidrblock($address,'103.231.184.0/24','psychz.net, not authorized to access this site (ASN-AS40676-021). ');
$ax += cidrblock($address,'103.241.213.0/24','psychz.net, not authorized to access this site (ASN-AS40676-022). ');
$ax += cidrblock($address,'104.128.112.0/20','psychz.net, not authorized to access this site (ASN-AS40676-023). ');
$ax += cidrblock($address,'104.128.235.0/24','psychz.net, not authorized to access this site (ASN-AS40676-024). ');
$ax += cidrblock($address,'104.143.128.0/19','psychz.net, not authorized to access this site (ASN-AS40676-025). ');
$ax += cidrblock($address,'104.145.226.0/24','psychz.net, not authorized to access this site (ASN-AS40676-026). ');
$ax += cidrblock($address,'104.149.0.0/16','psychz.net, not authorized to access this site (ASN-AS40676-027). ');
$ax += cidrblock($address,'104.216.0.0/15','psychz.net, not authorized to access this site (ASN-AS40676-028). ');
$ax += cidrblock($address,'104.218.160.0/21','psychz.net, not authorized to access this site (ASN-AS40676-029). ');
$ax += cidrblock($address,'104.244.152.0/24','psychz.net, not authorized to access this site (ASN-AS40676-030). ');
$ax += cidrblock($address,'104.250.127.0/24','psychz.net, not authorized to access this site (ASN-AS40676-031). ');
$ax += cidrblock($address,'104.250.166.0/24','psychz.net, not authorized to access this site (ASN-AS40676-032). ');
$ax += cidrblock($address,'104.250.168.0/24','psychz.net, not authorized to access this site (ASN-AS40676-033). ');
$ax += cidrblock($address,'104.250.170.0/23','psychz.net, not authorized to access this site (ASN-AS40676-034). ');
$ax += cidrblock($address,'104.250.181.0/24','psychz.net, not authorized to access this site (ASN-AS40676-035). ');
$ax += cidrblock($address,'104.250.184.0/24','psychz.net, not authorized to access this site (ASN-AS40676-036). ');
$ax += cidrblock($address,'104.250.186.0/24','psychz.net, not authorized to access this site (ASN-AS40676-037). ');
$ax += cidrblock($address,'104.254.62.0/24','psychz.net, not authorized to access this site (ASN-AS40676-038). ');
$ax += cidrblock($address,'104.254.112.0/21','psychz.net, not authorized to access this site (ASN-AS40676-039). ');
$ax += cidrblock($address,'104.254.188.0/22','psychz.net, not authorized to access this site (ASN-AS40676-040). ');
$ax += cidrblock($address,'107.151.192.0/18','psychz.net, not authorized to access this site (ASN-AS40676-041). ');
$ax += cidrblock($address,'107.160.0.0/16','psychz.net, not authorized to access this site (ASN-AS40676-042). ');
$ax += cidrblock($address,'107.178.144.0/20','psychz.net, not authorized to access this site (ASN-AS40676-043). ');
$ax += cidrblock($address,'107.178.160.0/19','psychz.net, not authorized to access this site (ASN-AS40676-044). ');
$ax += cidrblock($address,'107.190.226.0/23','psychz.net, not authorized to access this site (ASN-AS40676-045). ');
$ax += cidrblock($address,'107.190.228.0/22','psychz.net, not authorized to access this site (ASN-AS40676-046). ');
$ax += cidrblock($address,'108.171.240.0/20','psychz.net, not authorized to access this site (ASN-AS40676-047). ');
$ax += cidrblock($address,'123.108.128.0/23','psychz.net, not authorized to access this site (ASN-AS40676-048). ');
$ax += cidrblock($address,'142.147.88.0/24','psychz.net, not authorized to access this site (ASN-AS40676-049). ');
$ax += cidrblock($address,'144.172.68.0/23','psychz.net, not authorized to access this site (ASN-AS40676-050). ');
$ax += cidrblock($address,'144.172.70.0/24','psychz.net, not authorized to access this site (ASN-AS40676-051). ');
$ax += cidrblock($address,'146.148.128.0/19','psychz.net, not authorized to access this site (ASN-AS40676-052). ');
$ax += cidrblock($address,'146.148.176.0/20','psychz.net, not authorized to access this site (ASN-AS40676-053). ');
$ax += cidrblock($address,'146.148.192.0/18','psychz.net, not authorized to access this site (ASN-AS40676-054). ');
$ax += cidrblock($address,'150.242.36.0/22','psychz.net, not authorized to access this site (ASN-AS40676-055). ');
$ax += cidrblock($address,'162.250.140.0/22','psychz.net, not authorized to access this site (ASN-AS40676-056). ');
$ax += cidrblock($address,'162.253.209.0/24','psychz.net, not authorized to access this site (ASN-AS40676-057). ');
$ax += cidrblock($address,'162.253.210.0/23','psychz.net, not authorized to access this site (ASN-AS40676-058). ');
$ax += cidrblock($address,'162.253.212.0/22','psychz.net, not authorized to access this site (ASN-AS40676-059). ');
$ax += cidrblock($address,'172.81.120.0/21','psychz.net, not authorized to access this site (ASN-AS40676-060). ');
$ax += cidrblock($address,'172.86.148.0/24','psychz.net, not authorized to access this site (ASN-AS40676-061). ');
$ax += cidrblock($address,'172.93.121.0/24','psychz.net, not authorized to access this site (ASN-AS40676-062). ');
$ax += cidrblock($address,'172.94.23.0/24','psychz.net, not authorized to access this site (ASN-AS40676-063). ');
$ax += cidrblock($address,'172.94.24.0/23','psychz.net, not authorized to access this site (ASN-AS40676-064). ');
$ax += cidrblock($address,'172.94.26.0/24','psychz.net, not authorized to access this site (ASN-AS40676-065). ');
$ax += cidrblock($address,'172.94.31.0/24','psychz.net, not authorized to access this site (ASN-AS40676-066). ');
$ax += cidrblock($address,'172.94.32.0/24','psychz.net, not authorized to access this site (ASN-AS40676-067). ');
$ax += cidrblock($address,'172.94.34.0/23','psychz.net, not authorized to access this site (ASN-AS40676-068). ');
$ax += cidrblock($address,'172.94.36.0/24','psychz.net, not authorized to access this site (ASN-AS40676-069). ');
$ax += cidrblock($address,'172.94.38.0/24','psychz.net, not authorized to access this site (ASN-AS40676-070). ');
$ax += cidrblock($address,'172.106.0.0/20','psychz.net, not authorized to access this site (ASN-AS40676-071). ');
$ax += cidrblock($address,'172.106.16.0/23','psychz.net, not authorized to access this site (ASN-AS40676-072). ');
$ax += cidrblock($address,'172.110.9.0/24','psychz.net, not authorized to access this site (ASN-AS40676-073). ');
$ax += cidrblock($address,'172.110.10.0/24','psychz.net, not authorized to access this site (ASN-AS40676-074). ');
$ax += cidrblock($address,'172.110.20.0/24','psychz.net, not authorized to access this site (ASN-AS40676-075). ');
$ax += cidrblock($address,'172.110.26.0/24','psychz.net, not authorized to access this site (ASN-AS40676-076). ');
$ax += cidrblock($address,'172.111.235.0/24','psychz.net, not authorized to access this site (ASN-AS40676-077). ');
$ax += cidrblock($address,'173.224.208.0/20','psychz.net, not authorized to access this site (ASN-AS40676-078). ');
$ax += cidrblock($address,'183.182.10.0/23','psychz.net, not authorized to access this site (ASN-AS40676-079). ');
$ax += cidrblock($address,'183.182.18.0/23','psychz.net, not authorized to access this site (ASN-AS40676-080). ');
$ax += cidrblock($address,'183.182.20.0/23','psychz.net, not authorized to access this site (ASN-AS40676-081). ');
$ax += cidrblock($address,'183.182.22.0/24','psychz.net, not authorized to access this site (ASN-AS40676-082). ');
$ax += cidrblock($address,'185.133.210.0/23','psychz.net, not authorized to access this site (ASN-AS40676-083). ');
$ax += cidrblock($address,'192.81.250.0/24','psychz.net, not authorized to access this site (ASN-AS40676-084). ');
$ax += cidrblock($address,'192.126.124.0/23','psychz.net, not authorized to access this site (ASN-AS40676-085). ');
$ax += cidrblock($address,'192.184.32.0/19','psychz.net, not authorized to access this site (ASN-AS40676-086). ');
$ax += cidrblock($address,'192.210.48.0/20','psychz.net, not authorized to access this site (ASN-AS40676-087). ');
$ax += cidrblock($address,'198.13.96.0/19','psychz.net, not authorized to access this site (ASN-AS40676-088). ');
$ax += cidrblock($address,'198.44.160.0/19','psychz.net, not authorized to access this site (ASN-AS40676-089). ');
$ax += cidrblock($address,'199.15.112.0/21','psychz.net, not authorized to access this site (ASN-AS40676-090). ');
$ax += cidrblock($address,'199.47.39.0/24','psychz.net, not authorized to access this site (ASN-AS40676-091). ');
$ax += cidrblock($address,'199.71.212.0/22','psychz.net, not authorized to access this site (ASN-AS40676-092). ');
$ax += cidrblock($address,'199.83.88.0/21','psychz.net, not authorized to access this site (ASN-AS40676-093). ');
$ax += cidrblock($address,'199.119.200.0/21','psychz.net, not authorized to access this site (ASN-AS40676-094). ');
$ax += cidrblock($address,'199.245.100.0/23','psychz.net, not authorized to access this site (ASN-AS40676-095). ');
$ax += cidrblock($address,'206.123.131.0/24','psychz.net, not authorized to access this site (ASN-AS40676-096). ');
$ax += cidrblock($address,'206.123.132.0/23','psychz.net, not authorized to access this site (ASN-AS40676-097). ');
$ax += cidrblock($address,'206.123.140.0/24','psychz.net, not authorized to access this site (ASN-AS40676-098). ');
$ax += cidrblock($address,'208.87.240.0/22','psychz.net, not authorized to access this site (ASN-AS40676-099). ');
$ax += cidrblock($address,'211.155.64.0/23','psychz.net, not authorized to access this site (ASN-AS40676-100). ');
$ax += cidrblock($address,'216.24.192.0/20','psychz.net, not authorized to access this site (ASN-AS40676-101). ');
$ax += cidrblock($address,'216.99.144.0/20','psychz.net, not authorized to access this site (ASN-AS40676-102). ');
$ax += cidrblock($address,'218.246.140.0/22','psychz.net, not authorized to access this site (ASN-AS40676-103). ');


// ALNET-AS PP SKS-Lugan (updated 2016.01.18)
// AS35804
$ax += cidrblock($address,'91.200.12.0/22','ALNET SKS-Lugan (ASN-ALNET-0). ');
$ax += cidrblock($address,'91.202.212.0/22','ALNET SKS-Lugan (ASN-ALNET-1). ');
$ax += cidrblock($address,'193.110.144.0/24','ALNET SKS-Lugan (ASN-ALNET-2). ');
$ax += cidrblock($address,'193.110.168.0/23','ALNET SKS-Lugan (ASN-ALNET-3). ');
$ax += cidrblock($address,'194.79.60.0/22','ALNET SKS-Lugan (ASN-ALNET-4). ');
$ax += cidrblock($address,'194.145.220.0/23','ALNET SKS-Lugan (ASN-ALNET-5). ');
$ax += cidrblock($address,'213.111.128.0/18','ALNET SKS-Lugan (ASN-ALNET-6). ');


// MTS-INDIA-IN (updated 2016.01.22)
// Allows spammer botnets to run wild on it's 116.202.0.0/15 block, possibly more.
// AS131222
$ax += cidrblock($address,'103.18.64.0/22','MTS-INDIA (ASN-131222-00). ');
$ax += cidrblock($address,'116.202.0.0/19','MTS-INDIA (ASN-131222-01). ');
$ax += cidrblock($address,'116.202.32.0/20','MTS-INDIA (ASN-131222-02). ');
$ax += cidrblock($address,'116.202.48.0/21','MTS-INDIA (ASN-131222-03). ');
$ax += cidrblock($address,'116.202.64.0/18','MTS-INDIA (ASN-131222-04). ');
$ax += cidrblock($address,'116.202.128.0/17','MTS-INDIA (ASN-131222-05). ');
$ax += cidrblock($address,'116.203.0.0/16','MTS-INDIA (ASN-131222-06). ');
$ax += cidrblock($address,'163.47.12.0/22','MTS-INDIA (ASN-131222-07). ');
$ax += cidrblock($address,'180.149.32.0/22','MTS-INDIA (ASN-131222-08). ');
$ax += cidrblock($address,'180.149.40.0/22','MTS-INDIA (ASN-131222-09). ');
$ax += cidrblock($address,'180.215.0.0/16','MTS-INDIA (ASN-131222-10). ');


// Versaweb (updated 2016.01.23)
// Caught hosting multiple blackhat SEO sites on multiple servers, all involved in one campaign no less.
// AS36114
$ax += cidrblock($address,'72.46.128.0/19','Versaweb hosting (ASN-36114-00). ');
$ax += cidrblock($address,'76.164.192.0/19','Versaweb hosting (ASN-36114-01). ');
$ax += cidrblock($address,'76.164.224.0/21','Versaweb hosting (ASN-36114-02). ');
$ax += cidrblock($address,'76.164.232.0/23','Versaweb hosting (ASN-36114-03). ');
$ax += cidrblock($address,'76.164.236.0/22','Versaweb hosting (ASN-36114-04). ');
$ax += cidrblock($address,'104.36.224.0/21','Versaweb hosting (ASN-36114-05). ');
$ax += cidrblock($address,'104.143.0.0/20','Versaweb hosting (ASN-36114-06). ');
$ax += cidrblock($address,'104.194.0.0/19','Versaweb hosting (ASN-36114-07). ');
$ax += cidrblock($address,'104.238.192.0/18','Versaweb hosting (ASN-36114-08). ');
$ax += cidrblock($address,'162.216.176.0/22','Versaweb hosting (ASN-36114-09). ');
$ax += cidrblock($address,'162.220.247.0/24','Versaweb hosting (ASN-36114-10). ');
$ax += cidrblock($address,'162.222.128.0/21','Versaweb hosting (ASN-36114-11). ');
$ax += cidrblock($address,'162.255.180.0/22','Versaweb hosting (ASN-36114-12). ');
$ax += cidrblock($address,'172.96.128.0/19','Versaweb hosting (ASN-36114-13). ');
$ax += cidrblock($address,'208.64.24.0/21','Versaweb hosting (ASN-36114-14). ');
$ax += cidrblock($address,'208.66.72.0/21','Versaweb hosting (ASN-36114-15). ');


// Volume Drive (updated 2016.01.23)
// Hosting Datawagon Spam
// AS27176, AS46664
$ax += cidrblock($address,'45.119.40.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-00). ');
$ax += cidrblock($address,'45.119.208.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-01). ');
$ax += cidrblock($address,'74.118.192.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-02). ');
$ax += cidrblock($address,'103.59.92.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-03). ');
$ax += cidrblock($address,'103.60.12.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-04). ');
$ax += cidrblock($address,'103.196.26.0/23','Volume Drive spamhost (AS-VOLUMEDRIVE-05). ');
$ax += cidrblock($address,'104.37.44.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-06). ');
$ax += cidrblock($address,'104.128.236.0/24','Volume Drive spamhost (AS-VOLUMEDRIVE-07). ');
$ax += cidrblock($address,'104.192.0.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-08). ');
$ax += cidrblock($address,'104.193.8.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-09). ');
$ax += cidrblock($address,'104.219.232.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-10). ');
$ax += cidrblock($address,'104.245.96.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-11). ');
$ax += cidrblock($address,'104.255.64.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-12). ');
$ax += cidrblock($address,'107.182.16.0/20','Volume Drive spamhost (AS-VOLUMEDRIVE-13). ');
$ax += cidrblock($address,'142.0.32.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-14). ');
$ax += cidrblock($address,'142.0.40.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-15). ');
$ax += cidrblock($address,'142.0.44.0/23','Volume Drive spamhost (AS-VOLUMEDRIVE-16). ');
$ax += cidrblock($address,'142.0.46.0/24','Volume Drive spamhost (AS-VOLUMEDRIVE-17). ');
$ax += cidrblock($address,'161.123.233.0/24','Volume Drive spamhost (AS-VOLUMEDRIVE-18). ');
$ax += cidrblock($address,'162.213.24.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-19). ');
$ax += cidrblock($address,'162.248.72.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-20). ');
$ax += cidrblock($address,'162.253.66.0/24','Volume Drive spamhost (AS-VOLUMEDRIVE-21). ');
$ax += cidrblock($address,'172.81.128.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-22). ');
$ax += cidrblock($address,'173.242.112.0/20','Volume Drive spamhost (AS-VOLUMEDRIVE-23). ');
$ax += cidrblock($address,'181.41.196.0/24','Volume Drive spamhost (AS-VOLUMEDRIVE-24). ');
$ax += cidrblock($address,'191.96.8.0/24','Volume Drive spamhost (AS-VOLUMEDRIVE-25). ');
$ax += cidrblock($address,'191.101.51.0/24','Volume Drive spamhost (AS-VOLUMEDRIVE-26). ');
$ax += cidrblock($address,'192.69.88.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-27). ');
$ax += cidrblock($address,'199.19.104.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-28). ');
$ax += cidrblock($address,'199.115.228.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-29). ');
$ax += cidrblock($address,'199.168.136.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-30). ');
$ax += cidrblock($address,'199.180.112.0/21','Volume Drive spamhost (AS-VOLUMEDRIVE-31). ');
$ax += cidrblock($address,'199.254.168.0/24','Volume Drive spamhost (AS-VOLUMEDRIVE-32). ');
$ax += cidrblock($address,'204.124.180.0/22','Volume Drive spamhost (AS-VOLUMEDRIVE-33). ');


// Worldstream
// AS49981 updated 09/04/15
$ax += cidrblock($address,'37.247.118.0/24','Worldstream (ASN-49981-01). ');
$ax += cidrblock($address,'46.166.128.0/23','Worldstream (ASN-49981-02). ');
$ax += cidrblock($address,'86.105.18.0/24','Worldstream (ASN-49981-03). ');
$ax += cidrblock($address,'91.193.75.0/24','Worldstream (ASN-49981-04). ');
$ax += cidrblock($address,'91.212.229.0/24','Worldstream (ASN-49981-05). ');
$ax += cidrblock($address,'91.226.31.0/24','Worldstream (ASN-49981-06). ');
$ax += cidrblock($address,'91.227.154.0/23','Worldstream (ASN-49981-07). ');
$ax += cidrblock($address,'91.229.23.0/24','Worldstream (ASN-49981-08). ');
$ax += cidrblock($address,'91.232.105.0/24','Worldstream (ASN-49981-09). ');
$ax += cidrblock($address,'93.170.13.0/24','Worldstream (ASN-49981-10). ');
$ax += cidrblock($address,'93.170.77.0/24','Worldstream (ASN-49981-11). ');
$ax += cidrblock($address,'93.190.136.0/21','Worldstream (ASN-49981-12). ');
$ax += cidrblock($address,'95.156.251.0/24','Worldstream (ASN-49981-13). ');
$ax += cidrblock($address,'103.252.221.0/24','Worldstream (ASN-49981-14). ');
$ax += cidrblock($address,'109.236.80.0/20','Worldstream (ASN-49981-15). ');
$ax += cidrblock($address,'176.61.129.0/24','Worldstream (ASN-49981-16). ');
$ax += cidrblock($address,'185.2.80.0/22','Worldstream (ASN-49981-17). ');
$ax += cidrblock($address,'185.28.38.0/24','Worldstream (ASN-49981-18). ');
$ax += cidrblock($address,'185.73.112.0/24','Worldstream (ASN-49981-19). ');
$ax += cidrblock($address,'185.94.29.0/24','Worldstream (ASN-49981-20). ');
$ax += cidrblock($address,'185.105.192.0/22','Worldstream (ASN-49981-21). ');
$ax += cidrblock($address,'191.101.243.0/24','Worldstream (ASN-49981-22). ');
$ax += cidrblock($address,'192.71.151.0/24','Worldstream (ASN-49981-23). ');
$ax += cidrblock($address,'192.76.138.0/24','Worldstream (ASN-49981-24). ');
$ax += cidrblock($address,'193.30.245.0/24','Worldstream (ASN-49981-25). ');
$ax += cidrblock($address,'193.200.164.0/24','Worldstream (ASN-49981-26). ');
$ax += cidrblock($address,'195.128.184.0/23','Worldstream (ASN-49981-27). ');
$ax += cidrblock($address,'198.105.117.0/24','Worldstream (ASN-49981-28). ');
$ax += cidrblock($address,'198.177.124.0/24','Worldstream (ASN-49981-29). ');
$ax += cidrblock($address,'217.23.0.0/20','Worldstream (ASN-49981-30). ');


// UOL (updated 2016.01.23)
// AS7162
$ax += cidrblock($address,'186.234.0.0/18','AS7162, attacked SbS (ASN-7162-00). ');
$ax += cidrblock($address,'186.234.64.0/20','AS7162, attacked SbS (ASN-7162-01). ');
$ax += cidrblock($address,'186.234.127.0/24','AS7162, attacked SbS (ASN-7162-02). ');
$ax += cidrblock($address,'186.234.128.0/18','AS7162, attacked SbS (ASN-7162-03). ');
$ax += cidrblock($address,'186.234.195.0/24','AS7162, attacked SbS (ASN-7162-04). ');
$ax += cidrblock($address,'186.234.196.0/24','AS7162, attacked SbS (ASN-7162-05). ');
$ax += cidrblock($address,'186.234.211.0/24','AS7162, attacked SbS (ASN-7162-06). ');
$ax += cidrblock($address,'186.234.253.0/24','AS7162, attacked SbS (ASN-7162-07). ');
$ax += cidrblock($address,'187.17.64.0/18','AS7162, attacked SbS (ASN-7162-08). ');
$ax += cidrblock($address,'189.36.51.0/24','AS7162, attacked SbS (ASN-7162-09). ');
$ax += cidrblock($address,'189.38.56.0/21','AS7162, attacked SbS (ASN-7162-10). ');
$ax += cidrblock($address,'200.98.0.0/16','AS7162, attacked SbS (ASN-7162-11). ');
$ax += cidrblock($address,'200.147.0.0/16','AS7162, attacked SbS (ASN-7162-12). ');
$ax += cidrblock($address,'200.187.192.0/18','AS7162, attacked SbS (ASN-7162-13). ');
$ax += cidrblock($address,'200.221.0.0/16','AS7162, attacked SbS (ASN-7162-14). ');
$ax += cidrblock($address,'201.85.123.0/24','AS7162, attacked SbS (ASN-7162-15). ');


// Choopa (Constant source of attacks, and assisted in DDoS of SbS)
// AS20473 (updated 2016.01.23)
$ax += cidrblock($address,'4.79.145.0/24','Choopa Networks (ASN-20473-000). ');
$ax += cidrblock($address,'8.2.0.0/24','Choopa Networks (ASN-20473-001). ');
$ax += cidrblock($address,'8.2.120.0/23','Choopa Networks (ASN-20473-002). ');
$ax += cidrblock($address,'8.2.122.0/24','Choopa Networks (ASN-20473-003). ');
$ax += cidrblock($address,'8.3.5.0/24','Choopa Networks (ASN-20473-004). ');
$ax += cidrblock($address,'8.3.6.0/23','Choopa Networks (ASN-20473-005). ');
$ax += cidrblock($address,'8.3.28.0/23','Choopa Networks (ASN-20473-006). ');
$ax += cidrblock($address,'8.6.2.0/23','Choopa Networks (ASN-20473-007). ');
$ax += cidrblock($address,'8.6.8.0/23','Choopa Networks (ASN-20473-008). ');
$ax += cidrblock($address,'8.6.15.0/24','Choopa Networks (ASN-20473-009). ');
$ax += cidrblock($address,'8.6.74.0/23','Choopa Networks (ASN-20473-010). ');
$ax += cidrblock($address,'8.6.76.0/23','Choopa Networks (ASN-20473-011). ');
$ax += cidrblock($address,'8.6.193.0/24','Choopa Networks (ASN-20473-012). ');
$ax += cidrblock($address,'8.7.233.0/24','Choopa Networks (ASN-20473-013). ');
$ax += cidrblock($address,'8.9.3.0/24','Choopa Networks (ASN-20473-014). ');
$ax += cidrblock($address,'8.9.4.0/23','Choopa Networks (ASN-20473-015). ');
$ax += cidrblock($address,'8.9.6.0/24','Choopa Networks (ASN-20473-016). ');
$ax += cidrblock($address,'8.9.8.0/23','Choopa Networks (ASN-20473-017). ');
$ax += cidrblock($address,'8.9.11.0/24','Choopa Networks (ASN-20473-018). ');
$ax += cidrblock($address,'8.9.15.0/24','Choopa Networks (ASN-20473-019). ');
$ax += cidrblock($address,'8.9.16.0/23','Choopa Networks (ASN-20473-020). ');
$ax += cidrblock($address,'8.9.30.0/23','Choopa Networks (ASN-20473-021). ');
$ax += cidrblock($address,'8.9.36.0/23','Choopa Networks (ASN-20473-022). ');
$ax += cidrblock($address,'8.12.16.0/21','Choopa Networks (ASN-20473-023). ');
$ax += cidrblock($address,'8.12.64.0/23','Choopa Networks (ASN-20473-024). ');
$ax += cidrblock($address,'8.12.68.0/22','Choopa Networks (ASN-20473-025). ');
$ax += cidrblock($address,'8.18.92.0/23','Choopa Networks (ASN-20473-026). ');
$ax += cidrblock($address,'43.224.32.0/22','Choopa Networks (ASN-20473-027). ');
$ax += cidrblock($address,'45.32.0.0/17','Choopa Networks (ASN-20473-028). ');
$ax += cidrblock($address,'45.32.128.0/19','Choopa Networks (ASN-20473-029). ');
$ax += cidrblock($address,'45.32.160.0/20','Choopa Networks (ASN-20473-030). ');
$ax += cidrblock($address,'45.32.176.0/21','Choopa Networks (ASN-20473-031). ');
$ax += cidrblock($address,'45.32.192.0/18','Choopa Networks (ASN-20473-032). ');
$ax += cidrblock($address,'45.43.2.0/23','Choopa Networks (ASN-20473-033). ');
$ax += cidrblock($address,'45.43.10.0/23','Choopa Networks (ASN-20473-034). ');
$ax += cidrblock($address,'45.43.14.0/23','Choopa Networks (ASN-20473-035). ');
$ax += cidrblock($address,'45.43.18.0/23','Choopa Networks (ASN-20473-036). ');
$ax += cidrblock($address,'45.43.20.0/24','Choopa Networks (ASN-20473-037). ');
$ax += cidrblock($address,'45.56.148.0/23','Choopa Networks (ASN-20473-038). ');
$ax += cidrblock($address,'45.58.112.0/20','Choopa Networks (ASN-20473-039). ');
$ax += cidrblock($address,'45.59.17.0/24','Choopa Networks (ASN-20473-040). ');
$ax += cidrblock($address,'45.59.23.0/24','Choopa Networks (ASN-20473-041). ');
$ax += cidrblock($address,'45.63.0.0/17','Choopa Networks (ASN-20473-042). ');
$ax += cidrblock($address,'45.76.0.0/15','Choopa Networks (ASN-20473-043). ');
$ax += cidrblock($address,'45.117.156.0/22','Choopa Networks (ASN-20473-044). ');
$ax += cidrblock($address,'45.126.208.0/22','Choopa Networks (ASN-20473-045). ');
$ax += cidrblock($address,'62.67.42.0/24','Choopa Networks (ASN-20473-046). ');
$ax += cidrblock($address,'63.208.142.0/24','Choopa Networks (ASN-20473-047). ');
$ax += cidrblock($address,'63.209.32.0/22','Choopa Networks (ASN-20473-048). ');
$ax += cidrblock($address,'63.209.36.0/23','Choopa Networks (ASN-20473-049). ');
$ax += cidrblock($address,'63.210.145.0/24','Choopa Networks (ASN-20473-050). ');
$ax += cidrblock($address,'63.210.148.0/23','Choopa Networks (ASN-20473-051). ');
$ax += cidrblock($address,'63.211.105.0/24','Choopa Networks (ASN-20473-052). ');
$ax += cidrblock($address,'63.211.110.0/23','Choopa Networks (ASN-20473-053). ');
$ax += cidrblock($address,'63.211.221.0/24','Choopa Networks (ASN-20473-054). ');
$ax += cidrblock($address,'63.215.74.0/24','Choopa Networks (ASN-20473-055). ');
$ax += cidrblock($address,'64.110.131.0/24','Choopa Networks (ASN-20473-056). ');
$ax += cidrblock($address,'64.154.38.0/24','Choopa Networks (ASN-20473-057). ');
$ax += cidrblock($address,'64.156.14.0/24','Choopa Networks (ASN-20473-058). ');
$ax += cidrblock($address,'64.237.32.0/19','Choopa Networks (ASN-20473-059). ');
$ax += cidrblock($address,'66.11.112.0/24','Choopa Networks (ASN-20473-060). ');
$ax += cidrblock($address,'66.11.114.0/24','Choopa Networks (ASN-20473-061). ');
$ax += cidrblock($address,'66.11.116.0/24','Choopa Networks (ASN-20473-062). ');
$ax += cidrblock($address,'66.55.128.0/19','Choopa Networks (ASN-20473-063). ');
$ax += cidrblock($address,'68.232.160.0/19','Choopa Networks (ASN-20473-064). ');
$ax += cidrblock($address,'85.190.153.0/24','Choopa Networks (ASN-20473-065). ');
$ax += cidrblock($address,'85.203.21.0/24','Choopa Networks (ASN-20473-066). ');
$ax += cidrblock($address,'89.167.134.0/24','Choopa Networks (ASN-20473-067). ');
$ax += cidrblock($address,'103.43.72.0/22','Choopa Networks (ASN-20473-068). ');
$ax += cidrblock($address,'103.195.100.0/22','Choopa Networks (ASN-20473-069). ');
$ax += cidrblock($address,'103.241.212.0/24','Choopa Networks (ASN-20473-070). ');
$ax += cidrblock($address,'104.156.224.0/19','Choopa Networks (ASN-20473-071). ');
$ax += cidrblock($address,'104.207.128.0/19','Choopa Networks (ASN-20473-072). ');
$ax += cidrblock($address,'104.238.128.0/21','Choopa Networks (ASN-20473-073). ');
$ax += cidrblock($address,'104.238.136.0/22','Choopa Networks (ASN-20473-074). ');
$ax += cidrblock($address,'104.238.140.0/23','Choopa Networks (ASN-20473-075). ');
$ax += cidrblock($address,'104.238.143.0/24','Choopa Networks (ASN-20473-076). ');
$ax += cidrblock($address,'104.238.144.0/20','Choopa Networks (ASN-20473-077). ');
$ax += cidrblock($address,'104.238.160.0/19','Choopa Networks (ASN-20473-078). ');
$ax += cidrblock($address,'104.243.32.0/20','Choopa Networks (ASN-20473-079). ');
$ax += cidrblock($address,'104.250.119.0/24','Choopa Networks (ASN-20473-080). ');
$ax += cidrblock($address,'104.250.120.0/24','Choopa Networks (ASN-20473-081). ');
$ax += cidrblock($address,'104.250.122.0/23','Choopa Networks (ASN-20473-082). ');
$ax += cidrblock($address,'104.250.164.0/24','Choopa Networks (ASN-20473-083). ');
$ax += cidrblock($address,'104.250.188.0/24','Choopa Networks (ASN-20473-084). ');
$ax += cidrblock($address,'104.251.85.0/24','Choopa Networks (ASN-20473-085). ');
$ax += cidrblock($address,'104.251.91.0/24','Choopa Networks (ASN-20473-086). ');
$ax += cidrblock($address,'104.255.224.0/24','Choopa Networks (ASN-20473-087). ');
$ax += cidrblock($address,'104.255.226.0/24','Choopa Networks (ASN-20473-088). ');
$ax += cidrblock($address,'104.255.228.0/24','Choopa Networks (ASN-20473-089). ');
$ax += cidrblock($address,'104.255.230.0/24','Choopa Networks (ASN-20473-090). ');
$ax += cidrblock($address,'107.181.69.0/24','Choopa Networks (ASN-20473-091). ');
$ax += cidrblock($address,'107.181.148.0/24','Choopa Networks (ASN-20473-092). ');
$ax += cidrblock($address,'107.191.32.0/19','Choopa Networks (ASN-20473-093). ');
$ax += cidrblock($address,'108.61.0.0/18','Choopa Networks (ASN-20473-094). ');
$ax += cidrblock($address,'108.61.64.0/19','Choopa Networks (ASN-20473-095). ');
$ax += cidrblock($address,'108.61.96.0/22','Choopa Networks (ASN-20473-096). ');
$ax += cidrblock($address,'108.61.100.0/23','Choopa Networks (ASN-20473-097). ');
$ax += cidrblock($address,'108.61.103.0/24','Choopa Networks (ASN-20473-098). ');
$ax += cidrblock($address,'108.61.104.0/21','Choopa Networks (ASN-20473-099). ');
$ax += cidrblock($address,'108.61.112.0/20','Choopa Networks (ASN-20473-100). ');
$ax += cidrblock($address,'108.61.128.0/19','Choopa Networks (ASN-20473-101). ');
$ax += cidrblock($address,'108.61.160.0/20','Choopa Networks (ASN-20473-102). ');
$ax += cidrblock($address,'108.61.176.0/21','Choopa Networks (ASN-20473-103). ');
$ax += cidrblock($address,'108.61.184.0/23','Choopa Networks (ASN-20473-104). ');
$ax += cidrblock($address,'108.61.188.0/22','Choopa Networks (ASN-20473-105). ');
$ax += cidrblock($address,'108.61.192.0/19','Choopa Networks (ASN-20473-106). ');
$ax += cidrblock($address,'108.61.224.0/20','Choopa Networks (ASN-20473-107). ');
$ax += cidrblock($address,'108.61.240.0/22','Choopa Networks (ASN-20473-108). ');
$ax += cidrblock($address,'108.61.245.0/24','Choopa Networks (ASN-20473-109). ');
$ax += cidrblock($address,'108.61.246.0/23','Choopa Networks (ASN-20473-110). ');
$ax += cidrblock($address,'108.61.249.0/24','Choopa Networks (ASN-20473-111). ');
$ax += cidrblock($address,'108.61.250.0/23','Choopa Networks (ASN-20473-112). ');
$ax += cidrblock($address,'108.61.252.0/22','Choopa Networks (ASN-20473-113). ');
$ax += cidrblock($address,'131.221.45.0/24','Choopa Networks (ASN-20473-114). ');
$ax += cidrblock($address,'162.220.219.0/24','Choopa Networks (ASN-20473-115). ');
$ax += cidrblock($address,'162.253.176.0/24','Choopa Networks (ASN-20473-116). ');
$ax += cidrblock($address,'172.86.144.0/24','Choopa Networks (ASN-20473-117). ');
$ax += cidrblock($address,'172.93.96.0/21','Choopa Networks (ASN-20473-118). ');
$ax += cidrblock($address,'172.93.104.0/22','Choopa Networks (ASN-20473-119). ');
$ax += cidrblock($address,'172.93.110.0/23','Choopa Networks (ASN-20473-120). ');
$ax += cidrblock($address,'172.94.37.0/24','Choopa Networks (ASN-20473-121). ');
$ax += cidrblock($address,'172.98.210.0/24','Choopa Networks (ASN-20473-122). ');
$ax += cidrblock($address,'172.111.151.0/24','Choopa Networks (ASN-20473-123). ');
$ax += cidrblock($address,'173.199.64.0/20','Choopa Networks (ASN-20473-124). ');
$ax += cidrblock($address,'173.199.81.0/24','Choopa Networks (ASN-20473-125). ');
$ax += cidrblock($address,'173.199.82.0/23','Choopa Networks (ASN-20473-126). ');
$ax += cidrblock($address,'173.199.84.0/22','Choopa Networks (ASN-20473-127). ');
$ax += cidrblock($address,'173.199.88.0/21','Choopa Networks (ASN-20473-128). ');
$ax += cidrblock($address,'173.199.96.0/19','Choopa Networks (ASN-20473-129). ');
$ax += cidrblock($address,'185.35.78.0/24','Choopa Networks (ASN-20473-130). ');
$ax += cidrblock($address,'185.92.220.0/22','Choopa Networks (ASN-20473-131). ');
$ax += cidrblock($address,'190.102.111.0/24','Choopa Networks (ASN-20473-132). ');
$ax += cidrblock($address,'191.101.28.0/24','Choopa Networks (ASN-20473-133). ');
$ax += cidrblock($address,'191.101.183.0/24','Choopa Networks (ASN-20473-134). ');
$ax += cidrblock($address,'192.154.213.0/24','Choopa Networks (ASN-20473-135). ');
$ax += cidrblock($address,'192.154.214.0/24','Choopa Networks (ASN-20473-136). ');
$ax += cidrblock($address,'192.209.62.0/24','Choopa Networks (ASN-20473-137). ');
$ax += cidrblock($address,'195.122.134.0/23','Choopa Networks (ASN-20473-138). ');
$ax += cidrblock($address,'198.17.215.0/24','Choopa Networks (ASN-20473-139). ');
$ax += cidrblock($address,'199.48.176.0/22','Choopa Networks (ASN-20473-140). ');
$ax += cidrblock($address,'199.48.183.0/24','Choopa Networks (ASN-20473-141). ');
$ax += cidrblock($address,'205.234.250.0/24','Choopa Networks (ASN-20473-142). ');
$ax += cidrblock($address,'206.221.176.0/20','Choopa Networks (ASN-20473-143). ');
$ax += cidrblock($address,'208.167.224.0/19','Choopa Networks (ASN-20473-144). ');
$ax += cidrblock($address,'209.182.110.0/24','Choopa Networks (ASN-20473-145). ');
$ax += cidrblock($address,'209.222.0.0/20','Choopa Networks (ASN-20473-146). ');
$ax += cidrblock($address,'209.222.16.0/21','Choopa Networks (ASN-20473-147). ');
$ax += cidrblock($address,'209.222.24.0/22','Choopa Networks (ASN-20473-148). ');
$ax += cidrblock($address,'209.222.29.0/24','Choopa Networks (ASN-20473-149). ');
$ax += cidrblock($address,'209.222.30.0/24','Choopa Networks (ASN-20473-150). ');
$ax += cidrblock($address,'209.246.142.0/23','Choopa Networks (ASN-20473-151). ');
$ax += cidrblock($address,'209.246.170.0/24','Choopa Networks (ASN-20473-152). ');
$ax += cidrblock($address,'209.247.83.0/24','Choopa Networks (ASN-20473-153). ');
$ax += cidrblock($address,'212.187.208.0/23','Choopa Networks (ASN-20473-154). ');
$ax += cidrblock($address,'212.187.246.0/23','Choopa Networks (ASN-20473-155). ');
$ax += cidrblock($address,'216.155.128.0/19','Choopa Networks (ASN-20473-156). ');
$ax += cidrblock($address,'217.163.10.0/23','Choopa Networks (ASN-20473-157). ');
$ax += cidrblock($address,'217.163.22.0/23','Choopa Networks (ASN-20473-158). ');
$ax += cidrblock($address,'217.163.24.0/21','Choopa Networks (ASN-20473-159). ');


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


?>