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
 */

$zbbversion .= ' / BADIP-2016-06+U.1'; // Version number goes here. (product code)-(Year)-(Month)(issue letter)(+U = Unofficial fork, non-mainlined release).(Build number)

// *php 5 fix
global $whyblockout, $ax;

// **START SIGNATURES**

// *IPs and IP Ranges

$ax += cidrblock($address,'108.3.64.0/18','Cyberterrorist hiding in this netblock of 16384 IPs (IP-100). '); //71g
$ax += cidrblock($address,'118.98.0.0/17','Spammy Indonesia Netblock (IP-045). '); // mod 71h
$ax += cidrblock($address,'178.239.48.0/20','Hostile Belize Block (IP-050). '); //69f
$ax += cidrblock($address,'194.71.222.0/23','ERRSY-NET: Proxy services for scrapers and SEOs (IP-105). '); // Checked: 2016.04.17 (Not sure if valid; New ASN, "BinaryGrid Industries AB"; "ERRSY-NET" no longer listed); AS24668
$ax += cidrblock($address,'203.160.0.0/23','Vietnam Junk Mailer/Forum Spammer (Spoofed as 203.160.1.49 localhost!) (IP-069). '); // Updated: 2016.04.17
$ax += iprange($address,'118.175.254.0','118.175.255.255','Bangkok Attack prone 512 address block (IP-046). ');
$ax += iprange($address,'122.182.2.0','122.182.2.255','India spammer/malware host (IP-047). ');
$ax += iprange($address,'124.123.0.0','124.125.255.255','Indian hackers - 192K address netblock is bad (IP-048). ');
$ax += iprange($address,'141.11.0.0','141.11.255.255','technicolor.c0m (IP-049). '); //69d
$ax += iprange($address,'173.45.65.155','173.45.65.158','Bot not obeying nofollow (IP-052). '); //71f
$ax += iprange($address,'187.32.0.0','187.32.255.255','Problematic Brazilian netblock (IP-051). ');
$ax += iprange($address,'189.112.0.0','189.112.255.255','Problematic Brazilian netblock (IP-056). ');
$ax += iprange($address,'189.15.0.0','189.15.255.255','Problematic Brazilian netblock (IP-054). ');
$ax += iprange($address,'189.41.0.0','189.41.255.255','Problematic Brazilian netblock (IP-055). ');
$ax += iprange($address,'193.200.150.0','193.200.150.255','Anonymizing proxy network, hacker\'s paradise (IP-057). '); // Checked: 2016.04.13 (Good); www.anonymouse.org
$ax += iprange($address,'194.8.74.0','194.8.75.255','British Virgin Islands Spambots (IP-058). ');
$ax += iprange($address,'195.238.38.0','195.238.71.255','Problematic netblock (IP-060). ');
$ax += iprange($address,'195.238.95.0','195.238.118.255','Problematic netblock (IP-061). ');
$ax += iprange($address,'195.87.102.0','195.87.102.255','Comment spammer netblock (IP-059). ');
$ax += iprange($address,'200.146.192.0','200.146.255.255','Problematic Brazilian netblock (IP-063). ');
$ax += iprange($address,'200.170.128.0','200.170.255.255','Problematic Brazilian netblock (IP-064). ');
$ax += iprange($address,'200.225.192.0','200.225.255.255','Problematic Brazilian netblock (IP-065). ');
$ax += iprange($address,'200.233.128.0','200.233.255.255','Problematic Brazilian netblock (IP-066). ');
$ax += iprange($address,'200.63.42.0','200.63.47.255','panamaserver.com .ru (IP-062). ');
$ax += iprange($address,'201.16.128.0','201.16.255.255','Problematic Brazilian netblock (IP-067). ');
$ax += iprange($address,'201.48.0.0','201.48.255.255','Problematic Brazilian netblock (IP-068). ');
$ax += iprange($address,'204.11.16.0','204.11.19.255','onestop.net (IP-071). ');
$ax += iprange($address,'204.124.180.0','204.124.183.255','Comment spammer netblock (IP-074). ');
$ax += iprange($address,'204.244.109.240','204.244.109.247','Tynt, Evil Proxy (IP-075). ');
$ax += iprange($address,'204.244.120.176','204.244.120.183','Tynt, Evil Proxy (IP-076). ');
$ax += iprange($address,'206.161.0.0','206.161.255.255','Questionable Hosts, some malicious. Do not need access to your site (IP-077). ');
$ax += iprange($address,'208.115.111.240','208.115.111.255','Dotbot - Paid Service SEO Service (Keyword Spamming Aides) (IP-085). ');
$ax += iprange($address,'209.135.34.0','209.135.157.255','Questionable Hosts, some malicious. Do not need access to your site (IP-087). ');
$ax += iprange($address,'209.249.0.0','209.249.255.255','HUGE block of spam-mail servers, and scanbots (IP-088). ');
$ax += iprange($address,'209.62.96.0','209.62.127.255','Questionable Hosts, some malicious. Do not need access to your site (IP-086). ');
$ax += iprange($address,'210.0.160.0','210.0.255.255','Japanese servers on Hong Kong netblock, suspicious (IP-089). ');
$ax += iprange($address,'211.43.0.0','211.45.191.255','Korean Suspicious (IP-090). ');
$ax += iprange($address,'211.91.0.0','211.97.255.255','Chinese Bad Block (IP-091). ');
$ax += iprange($address,'212.113.41.0','212.113.63.255','Ukraine Bad Block (IP-092). ');
$ax += iprange($address,'212.178.0.0','212.178.29.255','Ukraine Bad Block (IP-094). ');
$ax += iprange($address,'213.166.128.0','213.166.159.255','Saudi Arabia bothost (IP-095). ');
$ax += iprange($address,'216.240.128.0','216.240.159.255','Abusive Network (IP-096). '); //71d
$ax += iprange($address,'218.56.21.0','218.56.21.255','Chinese Bad Block (IP-097). ');
$ax += iprange($address,'222.124.31.0','222.124.255.255','India Bad Block (IP-098). ');
$ax += iprange($address,'5.135.18.160','5.135.18.191','Leak ID scraper. (IP-102). '); //71
$ax += iprange($address,'59.93.0.0','59.93.255.255','India bad block (IP-008). ');
$ax += iprange($address,'65.208.151.112','65.208.151.119','Jarvis Universal Purchase Company (IP-011). ');
$ax += iprange($address,'67.215.230.0','67.215.230.255','Email harvester from India (setooz.com) (IP-014). ');
$ax += iprange($address,'68.168.216.0','68.168.216.255','Attacking /24 (IP-015). ');
$ax += iprange($address,'69.210.185.0','69.210.185.7','spunge.org (IP-019). ');
$ax += iprange($address,'69.36.0.0','69.36.15.255','3IX / host-care (IP-016). ');
$ax += iprange($address,'69.72.128.0','69.72.159.255','Hacker/Spammer Hosts (IP-017). ');
$ax += iprange($address,'69.89.16.0','69.89.31.255','Hacker/Spammer Hosts (IP-018). ');
$ax += iprange($address,'72.20.99.0','72.20.99.255','Content scraper for paid service (IP-020). ');
$ax += iprange($address,'72.27.0.0','72.27.213.104','Jamaica Spammer Network (frittobay) (IP-021). '); //70a split
$ax += iprange($address,'72.27.213.106','72.27.223.255','Jamaica Spammer Network (frittobay) (IP-022). '); //70a split
$ax += iprange($address,'80.81.159.0','80.81.159.255','Problematic netblock (IP-024). ');
$ax += iprange($address,'80.81.208.0','80.81.223.255','Problematic netblock (IP-025). ');
$ax += iprange($address,'80.87.152.0','80.87.152.255','Server farm infected with grum spambot (IP-026). ');
$ax += iprange($address,'80.93.122.0','80.93.122.255','Ukrainian Attack Prone Netblock (IP-027). ');
$ax += iprange($address,'81.223.254.0','81.223.254.127','smartservercontrol.com (IP-029). ');
$ax += iprange($address,'83.233.30.0','83.233.33.255','Multiple referer spam block (IP-030). ');
$ax += iprange($address,'84.201.224.0','84.201.239.255','Spam network (IP-031). ');
$ax += iprange($address,'85.131.188.0','85.131.191.255','.de hosts (IP-032). ');
$ax += iprange($address,'87.101.0.0','87.101.15.255','PureHosting.nl, a possible extention of keyweb.de .ru (bothost) (IP-033). ');
$ax += iprange($address,'87.118.68.0','87.118.122.255','keyweb.de .ru (bothost) (IP-034). ');
$ax += iprange($address,'87.248.162.0','87.248.189.255','Moldavia Bad Block (IP-036). ');
$ax += iprange($address,'87.248.64.0','87.248.95.255','Polish Bad Block (IP-035). ');
$ax += iprange($address,'91.205.40.0','91.205.43.255','British Virgin Islands Spambots (IP-037). ');
$ax += iprange($address,'95.24.0.0','95.24.255.255','Corbina.ru (IP-039). '); // Checked: 2016.04.17 (Valid and a very high spam risk, but belongs to a DSL provider, and doesn't cover the whole ASN; could be nixed or expanded, pending on preference); AS8402
$ax += lmatch($address,'78.158.11.226','Project Honey Pot rule-breaker, vulnerability scanner (IP-107). '); // Checked: 2016.04.17 (Good); AS43700


// ahbr company limited (updated 2016.04.17)
// AS30938
$ax += cidrblock($address,'5.39.248.0/21','Telewings/AHBR, data center and source of spam (ASN-AHBR-00). ');
$ax += cidrblock($address,'5.144.176.0/21','Telewings/AHBR, data center and source of spam (ASN-AHBR-01). ');
$ax += cidrblock($address,'5.178.96.0/21','Telewings/AHBR, data center and source of spam (ASN-AHBR-02). ');
$ax += cidrblock($address,'5.178.104.0/24','Telewings/AHBR, data center and source of spam (ASN-AHBR-03). ');
$ax += cidrblock($address,'5.178.108.0/22','Telewings/AHBR, data center and source of spam (ASN-AHBR-04). ');
$ax += cidrblock($address,'31.192.240.0/21','Telewings/AHBR, data center and source of spam (ASN-AHBR-05). ');
$ax += cidrblock($address,'185.5.36.0/22','Telewings/AHBR, data center and source of spam (ASN-AHBR-06). ');


// Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (updated 2016.04.17)
// AS31815
$ax += cidrblock($address,'64.13.192.0/18','Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-MEDIATEMPLE-00). ');
$ax += cidrblock($address,'64.207.128.0/18','Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-MEDIATEMPLE-01). ');
$ax += cidrblock($address,'70.32.64.0/18','Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-MEDIATEMPLE-02). ');
$ax += cidrblock($address,'72.10.32.0/19','Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-MEDIATEMPLE-03). ');
$ax += cidrblock($address,'72.47.192.0/18','Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-MEDIATEMPLE-04). ');
$ax += cidrblock($address,'205.186.128.0/18','Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-MEDIATEMPLE-05). ');
$ax += cidrblock($address,'216.70.64.0/18','Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-MEDIATEMPLE-06). ');


// ViaEuropa i Lund AB (updated 2016.04.17)
// AS47155
$ax += cidrblock($address,'93.182.128.0/18','Heavy abuse Swedish VPN (ASN-VIAEU-00). ');
$ax += cidrblock($address,'185.123.228.0/22','Heavy abuse Swedish VPN (ASN-VIAEU-01). ');


// Ecatel (updated 2016.01.19 / checked 2016.03.02)
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


// Leaseweb Network (updated 2016.03.15)
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
$ax += cidrblock($address,'80.253.248.0/22','Leaseweb Network (ASN-LEASEWEB-031). ');
$ax += cidrblock($address,'81.161.99.0/24','Leaseweb Network (ASN-LEASEWEB-032). ');
$ax += cidrblock($address,'82.150.152.0/24','Leaseweb Network (ASN-LEASEWEB-033). ');
$ax += cidrblock($address,'82.192.64.0/19','Leaseweb Network (ASN-LEASEWEB-034). ');
$ax += cidrblock($address,'83.149.64.0/18','Leaseweb Network (ASN-LEASEWEB-035). ');
$ax += cidrblock($address,'83.223.32.0/20','Leaseweb Network (ASN-LEASEWEB-036). ');
$ax += cidrblock($address,'84.16.224.0/19','Leaseweb Network (ASN-LEASEWEB-037). ');
$ax += cidrblock($address,'84.247.62.0/24','Leaseweb Network (ASN-LEASEWEB-038). ');
$ax += cidrblock($address,'85.17.0.0/16','Leaseweb Network (ASN-LEASEWEB-039). ');
$ax += cidrblock($address,'85.234.224.0/20','Leaseweb Network (ASN-LEASEWEB-040). ');
$ax += cidrblock($address,'87.236.96.0/21','Leaseweb Network (ASN-LEASEWEB-041). ');
$ax += cidrblock($address,'89.34.27.0/24','Leaseweb Network (ASN-LEASEWEB-042). ');
$ax += cidrblock($address,'89.36.36.0/24','Leaseweb Network (ASN-LEASEWEB-043). ');
$ax += cidrblock($address,'89.38.38.0/24','Leaseweb Network (ASN-LEASEWEB-044). ');
$ax += cidrblock($address,'89.46.46.0/24','Leaseweb Network (ASN-LEASEWEB-045). ');
$ax += cidrblock($address,'89.144.17.0/24','Leaseweb Network (ASN-LEASEWEB-046). ');
$ax += cidrblock($address,'89.144.18.0/24','Leaseweb Network (ASN-LEASEWEB-047). ');
$ax += cidrblock($address,'89.149.192.0/18','Leaseweb Network (ASN-LEASEWEB-048). ');
$ax += cidrblock($address,'89.255.254.0/23','Leaseweb Network (ASN-LEASEWEB-049). ');
$ax += cidrblock($address,'91.109.16.0/20','Leaseweb Network (ASN-LEASEWEB-050). ');
$ax += cidrblock($address,'91.184.46.0/23','Leaseweb Network (ASN-LEASEWEB-051). ');
$ax += cidrblock($address,'91.184.48.0/20','Leaseweb Network (ASN-LEASEWEB-052). ');
$ax += cidrblock($address,'91.195.118.0/23','Leaseweb Network (ASN-LEASEWEB-053). ');
$ax += cidrblock($address,'92.114.86.0/23','Leaseweb Network (ASN-LEASEWEB-054). ');
$ax += cidrblock($address,'93.176.128.0/23','Leaseweb Network (ASN-LEASEWEB-055). ');
$ax += cidrblock($address,'93.190.220.0/22','Leaseweb Network (ASN-LEASEWEB-056). ');
$ax += cidrblock($address,'94.75.192.0/18','Leaseweb Network (ASN-LEASEWEB-057). ');
$ax += cidrblock($address,'94.177.98.0/23','Leaseweb Network (ASN-LEASEWEB-058). ');
$ax += cidrblock($address,'94.177.146.0/24','Leaseweb Network (ASN-LEASEWEB-059). ');
$ax += cidrblock($address,'95.168.160.0/19','Leaseweb Network (ASN-LEASEWEB-060). ');
$ax += cidrblock($address,'95.211.0.0/16','Leaseweb Network (ASN-LEASEWEB-061). ');
$ax += cidrblock($address,'103.41.176.0/23','Leaseweb Network (ASN-LEASEWEB-062). ');
$ax += cidrblock($address,'108.59.0.0/20','Leaseweb Network (ASN-LEASEWEB-063). ');
$ax += cidrblock($address,'109.69.56.0/22','Leaseweb Network (ASN-LEASEWEB-064). ');
$ax += cidrblock($address,'109.70.0.0/21','Leaseweb Network (ASN-LEASEWEB-065). ');
$ax += cidrblock($address,'109.70.9.0/24','Leaseweb Network (ASN-LEASEWEB-066). ');
$ax += cidrblock($address,'109.70.10.0/23','Leaseweb Network (ASN-LEASEWEB-067). ');
$ax += cidrblock($address,'109.70.12.0/22','Leaseweb Network (ASN-LEASEWEB-068). ');
$ax += cidrblock($address,'109.120.175.0/24','Leaseweb Network (ASN-LEASEWEB-069). ');
$ax += cidrblock($address,'109.120.176.0/24','Leaseweb Network (ASN-LEASEWEB-070). ');
$ax += cidrblock($address,'109.120.180.0/22','Leaseweb Network (ASN-LEASEWEB-071). ');
$ax += cidrblock($address,'128.140.216.0/22','Leaseweb Network (ASN-LEASEWEB-072). ');
$ax += cidrblock($address,'145.255.128.0/21','Leaseweb Network (ASN-LEASEWEB-073). ');
$ax += cidrblock($address,'154.16.156.0/23','Leaseweb Network (ASN-LEASEWEB-074). ');
$ax += cidrblock($address,'159.255.192.0/22','Leaseweb Network (ASN-LEASEWEB-075). ');
$ax += cidrblock($address,'162.210.192.0/21','Leaseweb Network (ASN-LEASEWEB-076). ');
$ax += cidrblock($address,'162.219.212.0/22','Leaseweb Network (ASN-LEASEWEB-077). ');
$ax += cidrblock($address,'178.18.20.0/22','Leaseweb Network (ASN-LEASEWEB-078). ');
$ax += cidrblock($address,'178.18.24.0/23','Leaseweb Network (ASN-LEASEWEB-079). ');
$ax += cidrblock($address,'178.18.30.0/23','Leaseweb Network (ASN-LEASEWEB-080). ');
$ax += cidrblock($address,'178.162.128.0/17','Leaseweb Network (ASN-LEASEWEB-081). ');
$ax += cidrblock($address,'178.250.16.0/24','Leaseweb Network (ASN-LEASEWEB-082). ');
$ax += cidrblock($address,'178.250.18.0/24','Leaseweb Network (ASN-LEASEWEB-083). ');
$ax += cidrblock($address,'181.214.35.0/24','Leaseweb Network (ASN-LEASEWEB-084). ');
$ax += cidrblock($address,'181.214.50.0/24','Leaseweb Network (ASN-LEASEWEB-085). ');
$ax += cidrblock($address,'185.16.84.0/24','Leaseweb Network (ASN-LEASEWEB-086). ');
$ax += cidrblock($address,'185.17.32.0/22','Leaseweb Network (ASN-LEASEWEB-087). ');
$ax += cidrblock($address,'185.17.120.0/22','Leaseweb Network (ASN-LEASEWEB-088). ');
$ax += cidrblock($address,'185.17.144.0/22','Leaseweb Network (ASN-LEASEWEB-089). ');
$ax += cidrblock($address,'185.17.184.0/22','Leaseweb Network (ASN-LEASEWEB-090). ');
$ax += cidrblock($address,'185.22.4.0/22','Leaseweb Network (ASN-LEASEWEB-091). ');
$ax += cidrblock($address,'185.24.172.0/23','Leaseweb Network (ASN-LEASEWEB-092). ');
$ax += cidrblock($address,'185.24.174.0/24','Leaseweb Network (ASN-LEASEWEB-093). ');
$ax += cidrblock($address,'185.24.240.0/24','Leaseweb Network (ASN-LEASEWEB-094). ');
$ax += cidrblock($address,'185.27.140.0/22','Leaseweb Network (ASN-LEASEWEB-095). ');
$ax += cidrblock($address,'185.28.68.0/22','Leaseweb Network (ASN-LEASEWEB-096). ');
$ax += cidrblock($address,'185.30.232.0/22','Leaseweb Network (ASN-LEASEWEB-097). ');
$ax += cidrblock($address,'185.32.14.0/23','Leaseweb Network (ASN-LEASEWEB-098). ');
$ax += cidrblock($address,'185.34.68.0/22','Leaseweb Network (ASN-LEASEWEB-099). ');
$ax += cidrblock($address,'185.38.185.0/24','Leaseweb Network (ASN-LEASEWEB-100). ');
$ax += cidrblock($address,'185.38.187.0/24','Leaseweb Network (ASN-LEASEWEB-101). ');
$ax += cidrblock($address,'185.44.22.0/23','Leaseweb Network (ASN-LEASEWEB-102). ');
$ax += cidrblock($address,'185.46.180.0/23','Leaseweb Network (ASN-LEASEWEB-103). ');
$ax += cidrblock($address,'185.46.232.0/24','Leaseweb Network (ASN-LEASEWEB-104). ');
$ax += cidrblock($address,'185.49.68.0/22','Leaseweb Network (ASN-LEASEWEB-105). ');
$ax += cidrblock($address,'185.51.192.0/22','Leaseweb Network (ASN-LEASEWEB-106). ');
$ax += cidrblock($address,'185.63.56.0/24','Leaseweb Network (ASN-LEASEWEB-107). ');
$ax += cidrblock($address,'185.63.152.0/22','Leaseweb Network (ASN-LEASEWEB-108). ');
$ax += cidrblock($address,'185.71.60.0/22','Leaseweb Network (ASN-LEASEWEB-109). ');
$ax += cidrblock($address,'185.71.224.0/22','Leaseweb Network (ASN-LEASEWEB-110). ');
$ax += cidrblock($address,'185.72.178.0/23','Leaseweb Network (ASN-LEASEWEB-111). ');
$ax += cidrblock($address,'185.73.32.0/23','Leaseweb Network (ASN-LEASEWEB-112). ');
$ax += cidrblock($address,'185.79.40.0/22','Leaseweb Network (ASN-LEASEWEB-113). ');
$ax += cidrblock($address,'185.83.96.0/22','Leaseweb Network (ASN-LEASEWEB-114). ');
$ax += cidrblock($address,'185.85.160.0/22','Leaseweb Network (ASN-LEASEWEB-115). ');
$ax += cidrblock($address,'185.85.240.0/22','Leaseweb Network (ASN-LEASEWEB-116). ');
$ax += cidrblock($address,'185.89.4.0/22','Leaseweb Network (ASN-LEASEWEB-117). ');
$ax += cidrblock($address,'185.95.164.0/22','Leaseweb Network (ASN-LEASEWEB-118). ');
$ax += cidrblock($address,'185.96.140.0/24','Leaseweb Network (ASN-LEASEWEB-119). ');
$ax += cidrblock($address,'185.99.96.0/22','Leaseweb Network (ASN-LEASEWEB-120). ');
$ax += cidrblock($address,'185.101.107.0/24','Leaseweb Network (ASN-LEASEWEB-121). ');
$ax += cidrblock($address,'185.102.27.0/24','Leaseweb Network (ASN-LEASEWEB-122). ');
$ax += cidrblock($address,'185.108.84.0/23','Leaseweb Network (ASN-LEASEWEB-123). ');
$ax += cidrblock($address,'185.113.88.0/22','Leaseweb Network (ASN-LEASEWEB-124). ');
$ax += cidrblock($address,'185.114.60.0/22','Leaseweb Network (ASN-LEASEWEB-125). ');
$ax += cidrblock($address,'185.114.140.0/22','Leaseweb Network (ASN-LEASEWEB-126). ');
$ax += cidrblock($address,'185.117.228.0/22','Leaseweb Network (ASN-LEASEWEB-127). ');
$ax += cidrblock($address,'185.122.164.0/22','Leaseweb Network (ASN-LEASEWEB-128). ');
$ax += cidrblock($address,'185.122.168.0/22','Leaseweb Network (ASN-LEASEWEB-129). ');
$ax += cidrblock($address,'185.124.200.0/22','Leaseweb Network (ASN-LEASEWEB-130). ');
$ax += cidrblock($address,'185.126.64.0/22','Leaseweb Network (ASN-LEASEWEB-131). ');
$ax += cidrblock($address,'185.131.24.0/22','Leaseweb Network (ASN-LEASEWEB-132). ');
$ax += cidrblock($address,'185.142.100.0/22','Leaseweb Network (ASN-LEASEWEB-133). ');
$ax += cidrblock($address,'188.72.192.0/18','Leaseweb Network (ASN-LEASEWEB-134). ');
$ax += cidrblock($address,'188.208.38.0/23','Leaseweb Network (ASN-LEASEWEB-135). ');
$ax += cidrblock($address,'188.211.239.0/24','Leaseweb Network (ASN-LEASEWEB-136). ');
$ax += cidrblock($address,'188.215.35.0/24','Leaseweb Network (ASN-LEASEWEB-137). ');
$ax += cidrblock($address,'188.241.65.0/24','Leaseweb Network (ASN-LEASEWEB-138). ');
$ax += cidrblock($address,'190.105.193.0/24','Leaseweb Network (ASN-LEASEWEB-139). ');
$ax += cidrblock($address,'190.105.195.0/24','Leaseweb Network (ASN-LEASEWEB-140). ');
$ax += cidrblock($address,'191.96.112.0/24','Leaseweb Network (ASN-LEASEWEB-141). ');
$ax += cidrblock($address,'191.96.115.0/24','Leaseweb Network (ASN-LEASEWEB-142). ');
$ax += cidrblock($address,'191.101.16.0/24','Leaseweb Network (ASN-LEASEWEB-143). ');
$ax += cidrblock($address,'192.36.61.0/24','Leaseweb Network (ASN-LEASEWEB-144). ');
$ax += cidrblock($address,'192.96.200.0/21','Leaseweb Network (ASN-LEASEWEB-145). ');
$ax += cidrblock($address,'193.27.72.0/23','Leaseweb Network (ASN-LEASEWEB-146). ');
$ax += cidrblock($address,'193.43.92.0/24','Leaseweb Network (ASN-LEASEWEB-147). ');
$ax += cidrblock($address,'193.104.219.0/24','Leaseweb Network (ASN-LEASEWEB-148). ');
$ax += cidrblock($address,'193.239.4.0/22','Leaseweb Network (ASN-LEASEWEB-149). ');
$ax += cidrblock($address,'193.242.108.0/24','Leaseweb Network (ASN-LEASEWEB-150). ');
$ax += cidrblock($address,'194.0.197.0/24','Leaseweb Network (ASN-LEASEWEB-151). ');
$ax += cidrblock($address,'194.60.71.0/24','Leaseweb Network (ASN-LEASEWEB-152). ');
$ax += cidrblock($address,'195.14.2.0/24','Leaseweb Network (ASN-LEASEWEB-153). ');
$ax += cidrblock($address,'195.14.21.0/24','Leaseweb Network (ASN-LEASEWEB-154). ');
$ax += cidrblock($address,'195.140.240.0/22','Leaseweb Network (ASN-LEASEWEB-155). ');
$ax += cidrblock($address,'195.190.146.0/24','Leaseweb Network (ASN-LEASEWEB-156). ');
$ax += cidrblock($address,'195.200.82.0/23','Leaseweb Network (ASN-LEASEWEB-157). ');
$ax += cidrblock($address,'195.242.98.0/23','Leaseweb Network (ASN-LEASEWEB-158). ');
$ax += cidrblock($address,'198.7.56.0/21','Leaseweb Network (ASN-LEASEWEB-159). ');
$ax += cidrblock($address,'199.58.84.0/22','Leaseweb Network (ASN-LEASEWEB-160). ');
$ax += cidrblock($address,'199.115.112.0/21','Leaseweb Network (ASN-LEASEWEB-161). ');
$ax += cidrblock($address,'207.244.64.0/18','Leaseweb Network (ASN-LEASEWEB-162). ');
$ax += cidrblock($address,'208.64.45.0/24','Leaseweb Network (ASN-LEASEWEB-163). ');
$ax += cidrblock($address,'209.192.128.0/17','Leaseweb Network (ASN-LEASEWEB-164). ');
$ax += cidrblock($address,'212.7.192.0/21','Leaseweb Network (ASN-LEASEWEB-165). ');
$ax += cidrblock($address,'212.7.200.0/24','Leaseweb Network (ASN-LEASEWEB-166). ');
$ax += cidrblock($address,'212.7.202.0/24','Leaseweb Network (ASN-LEASEWEB-167). ');
$ax += cidrblock($address,'212.7.204.0/22','Leaseweb Network (ASN-LEASEWEB-168). ');
$ax += cidrblock($address,'212.7.208.0/21','Leaseweb Network (ASN-LEASEWEB-169). ');
$ax += cidrblock($address,'212.19.235.0/24','Leaseweb Network (ASN-LEASEWEB-170). ');
$ax += cidrblock($address,'212.19.236.0/24','Leaseweb Network (ASN-LEASEWEB-171). ');
$ax += cidrblock($address,'212.95.32.0/19','Leaseweb Network (ASN-LEASEWEB-172). ');
$ax += cidrblock($address,'213.142.132.0/22','Leaseweb Network (ASN-LEASEWEB-173). ');
$ax += cidrblock($address,'213.142.136.0/21','Leaseweb Network (ASN-LEASEWEB-174). ');
$ax += cidrblock($address,'213.142.144.0/22','Leaseweb Network (ASN-LEASEWEB-175). ');
$ax += cidrblock($address,'217.20.112.0/20','Leaseweb Network (ASN-LEASEWEB-176). ');
$ax += cidrblock($address,'217.73.56.0/21','Leaseweb Network (ASN-LEASEWEB-177). ');


// HOSTING-AS Tehnologii Budushego LLC (updated 2016.01.18 / checked 2016.03.02)
// AS41665
$ax += cidrblock($address,'78.109.16.0/20','AS41665 (AS-HATB-0). ');
$ax += cidrblock($address,'194.54.88.0/22','AS41665 (AS-HATB-1). ');
$ax += cidrblock($address,'213.155.0.0/19','AS41665 (AS-HATB-2). ');


// MYLOC (updated 2016.04.23)
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
$ax += cidrblock($address,'141.8.244.0/22','Myloc AS24961 (AS-MYLOC-25). ');
$ax += cidrblock($address,'141.8.248.0/24','Myloc AS24961 (AS-MYLOC-26). ');
$ax += cidrblock($address,'146.0.32.0/20','Myloc AS24961 (AS-MYLOC-27). ');
$ax += cidrblock($address,'185.15.244.0/22','Myloc AS24961 (AS-MYLOC-28). ');
$ax += cidrblock($address,'185.97.5.0/24','Myloc AS24961 (AS-MYLOC-29). ');
$ax += cidrblock($address,'185.114.108.0/24','Myloc AS24961 (AS-MYLOC-30). ');
$ax += cidrblock($address,'185.144.236.0/22','Myloc AS24961 (AS-MYLOC-31). ');
$ax += cidrblock($address,'188.214.93.0/24','Myloc AS24961 (AS-MYLOC-32). ');
$ax += cidrblock($address,'191.96.66.0/24','Myloc AS24961 (AS-MYLOC-33). ');
$ax += cidrblock($address,'193.22.251.0/24','Myloc AS24961 (AS-MYLOC-34). ');
$ax += cidrblock($address,'193.41.200.0/24','Myloc AS24961 (AS-MYLOC-35). ');
$ax += cidrblock($address,'193.47.99.0/24','Myloc AS24961 (AS-MYLOC-36). ');
$ax += cidrblock($address,'193.111.136.0/21','Myloc AS24961 (AS-MYLOC-37). ');
$ax += cidrblock($address,'193.111.198.0/23','Myloc AS24961 (AS-MYLOC-38). ');
$ax += cidrblock($address,'199.201.240.0/24','Myloc AS24961 (AS-MYLOC-39). ');
$ax += cidrblock($address,'213.202.208.0/20','Myloc AS24961 (AS-MYLOC-40). ');
$ax += cidrblock($address,'217.79.176.0/20','Myloc AS24961 (AS-MYLOC-41). ');


// INFOBOX (updated 2016.01.18 / checked 2016.05.15)
// AS30968
$ax += cidrblock($address,'77.221.128.0/19','INFOBOX AS30968 (AS-INFOBOX-0). ');
$ax += cidrblock($address,'92.243.64.0/19','INFOBOX AS30968 (AS-INFOBOX-1). ');
$ax += cidrblock($address,'109.120.128.0/18','INFOBOX AS30968 (AS-INFOBOX-2). ');


// SEDO (updated 2016.01.18 / checked 2016.05.15)
// AS47846
$ax += cidrblock($address,'82.98.86.0/24','SEDO AS47846 (AS-SEDO-0). ');
$ax += cidrblock($address,'82.98.99.0/24','SEDO AS47846 (AS-SEDO-1). ');
$ax += cidrblock($address,'91.195.240.0/23','SEDO AS47846 (AS-SEDO-2). ');
$ax += cidrblock($address,'213.83.58.0/24','SEDO AS47846 (AS-SEDO-3). ');


// Elos Host (updated 2016.05.15)
// AS61718
$ax += cidrblock($address,'131.72.52.0/22','Elos Host (AS-ELOSHOST-0). ');
$ax += cidrblock($address,'131.255.140.0/22','Elos Host (AS-ELOSHOST-1). ');
$ax += cidrblock($address,'138.117.196.0/22','Elos Host (AS-ELOSHOST-2). ');


// iweb/privatedns Domain Spammers
// Snooping on your site, sniping your domain.
$ax += rmatch($hoster,'privatedns.com','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += rmatch($hoster,'iweb.ca','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += rmatch($hoster,'iweb.com','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += lmatch($hoster,'iweb','RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += lmatch($hoster,'www.iweb','RFC ignorant/Suspected domain name snipers/spammers. '); //70b


// Spamahost network.
// self explanatory!
$ax += inmatch($hoster,'spamahost','Spamahost known range (SPAMAHOST-00). '); // updated 70c / checked 2016.04.27
$ax += cidrblock($address,'54.72.0.0/16','Spamahost known range (SPAMAHOST-01). '); // updated 2016.04.27


// HOSTKEY B.V. (updated 2016.01.18 / checked 2016.04.27)
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


// Mir Telematiki Ltd (updated 2016.04.27)
// AS49335
$ax += cidrblock($address,'31.192.104.0/22','Mir Telematiki (AS-49335-00). ');
$ax += cidrblock($address,'31.192.108.0/24','Mir Telematiki (AS-49335-01). ');
$ax += cidrblock($address,'31.192.111.0/24','Mir Telematiki (AS-49335-02). ');
$ax += cidrblock($address,'62.76.255.0/24','Mir Telematiki (AS-49335-03). ');
$ax += cidrblock($address,'80.90.244.0/24','Mir Telematiki (AS-49335-04). ');
$ax += cidrblock($address,'86.105.227.0/24','Mir Telematiki (AS-49335-05). ');
$ax += cidrblock($address,'86.106.102.0/24','Mir Telematiki (AS-49335-06). ');
$ax += cidrblock($address,'91.210.104.0/22','Mir Telematiki (AS-49335-07). ');
$ax += cidrblock($address,'91.218.112.0/22','Mir Telematiki (AS-49335-08). ');
$ax += cidrblock($address,'91.218.244.0/22','Mir Telematiki (AS-49335-09). ');
$ax += cidrblock($address,'91.237.249.0/24','Mir Telematiki (AS-49335-10). ');
$ax += cidrblock($address,'94.177.123.0/24','Mir Telematiki (AS-49335-11). ');
$ax += cidrblock($address,'111.90.159.0/24','Mir Telematiki (AS-49335-12). ');
$ax += cidrblock($address,'141.105.64.0/21','Mir Telematiki (AS-49335-13). ');
$ax += cidrblock($address,'158.255.0.0/21','Mir Telematiki (AS-49335-14). ');
$ax += cidrblock($address,'185.42.100.0/24','Mir Telematiki (AS-49335-15). ');
$ax += cidrblock($address,'185.42.102.0/23','Mir Telematiki (AS-49335-16). ');
$ax += cidrblock($address,'185.70.104.0/22','Mir Telematiki (AS-49335-17). ');
$ax += cidrblock($address,'185.130.212.0/22','Mir Telematiki (AS-49335-18). ');
$ax += cidrblock($address,'185.133.228.0/22','Mir Telematiki (AS-49335-19). ');
$ax += cidrblock($address,'193.124.20.0/23','Mir Telematiki (AS-49335-20). ');


// Nobis Technology Group, LLC
// AS15003 (updated 2016.03.28)
$ax += cidrblock($address,'23.19.0.0/16','Nobis Technology Group (ASN-NOBIS-000). ');
$ax += cidrblock($address,'23.80.0.0/16','Nobis Technology Group (ASN-NOBIS-001). ');
$ax += cidrblock($address,'23.81.0.0/17','Nobis Technology Group (ASN-NOBIS-002). ');
$ax += cidrblock($address,'23.81.128.0/18','Nobis Technology Group (ASN-NOBIS-003). ');
$ax += cidrblock($address,'23.81.192.0/20','Nobis Technology Group (ASN-NOBIS-004). ');
$ax += cidrblock($address,'23.81.216.0/21','Nobis Technology Group (ASN-NOBIS-005). ');
$ax += cidrblock($address,'23.81.224.0/19','Nobis Technology Group (ASN-NOBIS-006). ');
$ax += cidrblock($address,'23.82.0.0/17','Nobis Technology Group (ASN-NOBIS-007). ');
$ax += cidrblock($address,'23.82.128.0/19','Nobis Technology Group (ASN-NOBIS-008). ');
$ax += cidrblock($address,'23.82.160.0/21','Nobis Technology Group (ASN-NOBIS-009). ');
$ax += cidrblock($address,'23.82.176.0/20','Nobis Technology Group (ASN-NOBIS-010). ');
$ax += cidrblock($address,'23.82.192.0/18','Nobis Technology Group (ASN-NOBIS-011). ');
$ax += cidrblock($address,'23.83.0.0/18','Nobis Technology Group (ASN-NOBIS-012). ');
$ax += cidrblock($address,'23.83.64.0/19','Nobis Technology Group (ASN-NOBIS-013). ');
$ax += cidrblock($address,'23.83.96.0/20','Nobis Technology Group (ASN-NOBIS-014). ');
$ax += cidrblock($address,'23.83.128.0/18','Nobis Technology Group (ASN-NOBIS-015). ');
$ax += cidrblock($address,'23.83.192.0/20','Nobis Technology Group (ASN-NOBIS-016). ');
$ax += cidrblock($address,'23.104.0.0/16','Nobis Technology Group (ASN-NOBIS-017). ');
$ax += cidrblock($address,'23.105.0.0/17','Nobis Technology Group (ASN-NOBIS-018). ');
$ax += cidrblock($address,'23.105.128.0/18','Nobis Technology Group (ASN-NOBIS-019). ');
$ax += cidrblock($address,'23.106.0.0/17','Nobis Technology Group (ASN-NOBIS-020). ');
$ax += cidrblock($address,'23.106.160.0/19','Nobis Technology Group (ASN-NOBIS-021). ');
$ax += cidrblock($address,'23.106.192.0/18','Nobis Technology Group (ASN-NOBIS-022). ');
$ax += cidrblock($address,'23.107.0.0/16','Nobis Technology Group (ASN-NOBIS-023). ');
$ax += cidrblock($address,'23.108.0.0/15','Nobis Technology Group (ASN-NOBIS-024). ');
$ax += cidrblock($address,'23.110.0.0/16','Nobis Technology Group (ASN-NOBIS-025). ');
$ax += cidrblock($address,'23.111.16.0/21','Nobis Technology Group (ASN-NOBIS-026). ');
$ax += cidrblock($address,'23.111.248.0/22','Nobis Technology Group (ASN-NOBIS-027). ');
$ax += cidrblock($address,'23.111.253.0/24','Nobis Technology Group (ASN-NOBIS-028). ');
$ax += cidrblock($address,'23.111.254.0/23','Nobis Technology Group (ASN-NOBIS-029). ');
$ax += cidrblock($address,'23.224.0.0/15','Nobis Technology Group (ASN-NOBIS-030). ');
$ax += cidrblock($address,'23.235.160.0/19','Nobis Technology Group (ASN-NOBIS-031). ');
$ax += cidrblock($address,'23.248.192.0/18','Nobis Technology Group (ASN-NOBIS-032). ');
$ax += cidrblock($address,'64.120.1.0/24','Nobis Technology Group (ASN-NOBIS-033). ');
$ax += cidrblock($address,'64.120.2.0/23','Nobis Technology Group (ASN-NOBIS-034). ');
$ax += cidrblock($address,'64.120.4.0/22','Nobis Technology Group (ASN-NOBIS-035). ');
$ax += cidrblock($address,'64.120.8.0/21','Nobis Technology Group (ASN-NOBIS-036). ');
$ax += cidrblock($address,'64.120.16.0/20','Nobis Technology Group (ASN-NOBIS-037). ');
$ax += cidrblock($address,'64.120.32.0/19','Nobis Technology Group (ASN-NOBIS-038). ');
$ax += cidrblock($address,'64.120.64.0/23','Nobis Technology Group (ASN-NOBIS-039). ');
$ax += cidrblock($address,'64.120.66.0/24','Nobis Technology Group (ASN-NOBIS-040). ');
$ax += cidrblock($address,'64.120.68.0/23','Nobis Technology Group (ASN-NOBIS-041). ');
$ax += cidrblock($address,'64.120.71.0/24','Nobis Technology Group (ASN-NOBIS-042). ');
$ax += cidrblock($address,'64.120.72.0/21','Nobis Technology Group (ASN-NOBIS-043). ');
$ax += cidrblock($address,'64.120.80.0/20','Nobis Technology Group (ASN-NOBIS-044). ');
$ax += cidrblock($address,'64.120.96.0/21','Nobis Technology Group (ASN-NOBIS-045). ');
$ax += cidrblock($address,'64.120.105.0/24','Nobis Technology Group (ASN-NOBIS-046). ');
$ax += cidrblock($address,'64.120.106.0/24','Nobis Technology Group (ASN-NOBIS-047). ');
$ax += cidrblock($address,'64.120.109.0/24','Nobis Technology Group (ASN-NOBIS-048). ');
$ax += cidrblock($address,'64.120.112.0/21','Nobis Technology Group (ASN-NOBIS-049). ');
$ax += cidrblock($address,'64.120.122.0/23','Nobis Technology Group (ASN-NOBIS-050). ');
$ax += cidrblock($address,'64.120.124.0/22','Nobis Technology Group (ASN-NOBIS-051). ');
$ax += cidrblock($address,'67.201.0.0/21','Nobis Technology Group (ASN-NOBIS-052). ');
$ax += cidrblock($address,'67.201.48.0/23','Nobis Technology Group (ASN-NOBIS-053). ');
$ax += cidrblock($address,'69.31.107.0/24','Nobis Technology Group (ASN-NOBIS-054). ');
$ax += cidrblock($address,'69.147.224.0/23','Nobis Technology Group (ASN-NOBIS-055). ');
$ax += cidrblock($address,'69.147.227.0/24','Nobis Technology Group (ASN-NOBIS-056). ');
$ax += cidrblock($address,'69.147.228.0/22','Nobis Technology Group (ASN-NOBIS-057). ');
$ax += cidrblock($address,'69.147.232.0/21','Nobis Technology Group (ASN-NOBIS-058). ');
$ax += cidrblock($address,'69.147.240.0/22','Nobis Technology Group (ASN-NOBIS-059). ');
$ax += cidrblock($address,'69.147.244.0/24','Nobis Technology Group (ASN-NOBIS-060). ');
$ax += cidrblock($address,'69.147.246.0/23','Nobis Technology Group (ASN-NOBIS-061). ');
$ax += cidrblock($address,'69.147.248.0/21','Nobis Technology Group (ASN-NOBIS-062). ');
$ax += cidrblock($address,'69.174.60.0/22','Nobis Technology Group (ASN-NOBIS-063). ');
$ax += cidrblock($address,'70.32.32.0/20','Nobis Technology Group (ASN-NOBIS-064). ');
$ax += cidrblock($address,'72.37.204.0/24','Nobis Technology Group (ASN-NOBIS-065). ');
$ax += cidrblock($address,'72.37.221.0/24','Nobis Technology Group (ASN-NOBIS-066). ');
$ax += cidrblock($address,'72.37.222.0/23','Nobis Technology Group (ASN-NOBIS-067). ');
$ax += cidrblock($address,'72.37.224.0/21','Nobis Technology Group (ASN-NOBIS-068). ');
$ax += cidrblock($address,'72.37.237.0/24','Nobis Technology Group (ASN-NOBIS-069). ');
$ax += cidrblock($address,'72.37.242.0/23','Nobis Technology Group (ASN-NOBIS-070). ');
$ax += cidrblock($address,'72.37.246.0/23','Nobis Technology Group (ASN-NOBIS-071). ');
$ax += cidrblock($address,'74.113.144.0/22','Nobis Technology Group (ASN-NOBIS-072). ');
$ax += cidrblock($address,'104.238.32.0/24','Nobis Technology Group (ASN-NOBIS-073). ');
$ax += cidrblock($address,'104.238.45.0/24','Nobis Technology Group (ASN-NOBIS-074). ');
$ax += cidrblock($address,'108.62.0.0/16','Nobis Technology Group (ASN-NOBIS-075). ');
$ax += cidrblock($address,'108.171.33.0/24','Nobis Technology Group (ASN-NOBIS-076). ');
$ax += cidrblock($address,'108.171.34.0/23','Nobis Technology Group (ASN-NOBIS-077). ');
$ax += cidrblock($address,'108.171.36.0/23','Nobis Technology Group (ASN-NOBIS-078). ');
$ax += cidrblock($address,'108.171.38.0/24','Nobis Technology Group (ASN-NOBIS-079). ');
$ax += cidrblock($address,'108.171.43.0/24','Nobis Technology Group (ASN-NOBIS-080). ');
$ax += cidrblock($address,'108.171.44.0/22','Nobis Technology Group (ASN-NOBIS-081). ');
$ax += cidrblock($address,'108.171.53.0/24','Nobis Technology Group (ASN-NOBIS-082). ');
$ax += cidrblock($address,'108.171.54.0/23','Nobis Technology Group (ASN-NOBIS-083). ');
$ax += cidrblock($address,'108.171.56.0/24','Nobis Technology Group (ASN-NOBIS-084). ');
$ax += cidrblock($address,'108.171.59.0/24','Nobis Technology Group (ASN-NOBIS-085). ');
$ax += cidrblock($address,'108.171.60.0/23','Nobis Technology Group (ASN-NOBIS-086). ');
$ax += cidrblock($address,'108.171.63.0/24','Nobis Technology Group (ASN-NOBIS-087). ');
$ax += cidrblock($address,'108.177.128.0/17','Nobis Technology Group (ASN-NOBIS-088). ');
$ax += cidrblock($address,'108.187.0.0/16','Nobis Technology Group (ASN-NOBIS-089). ');
$ax += cidrblock($address,'142.91.0.0/16','Nobis Technology Group (ASN-NOBIS-090). ');
$ax += cidrblock($address,'142.234.0.0/16','Nobis Technology Group (ASN-NOBIS-091). ');
$ax += cidrblock($address,'147.255.0.0/16','Nobis Technology Group (ASN-NOBIS-092). ');
$ax += cidrblock($address,'162.209.128.0/17','Nobis Technology Group (ASN-NOBIS-093). ');
$ax += cidrblock($address,'162.222.68.0/22','Nobis Technology Group (ASN-NOBIS-094). ');
$ax += cidrblock($address,'162.246.185.0/24','Nobis Technology Group (ASN-NOBIS-095). ');
$ax += cidrblock($address,'162.246.186.0/24','Nobis Technology Group (ASN-NOBIS-096). ');
$ax += cidrblock($address,'167.160.116.0/24','Nobis Technology Group (ASN-NOBIS-097). ');
$ax += cidrblock($address,'172.240.0.0/16','Nobis Technology Group (ASN-NOBIS-098). ');
$ax += cidrblock($address,'172.241.0.0/19','Nobis Technology Group (ASN-NOBIS-099). ');
$ax += cidrblock($address,'172.241.32.0/21','Nobis Technology Group (ASN-NOBIS-100). ');
$ax += cidrblock($address,'172.241.56.0/21','Nobis Technology Group (ASN-NOBIS-101). ');
$ax += cidrblock($address,'172.241.72.0/21','Nobis Technology Group (ASN-NOBIS-102). ');
$ax += cidrblock($address,'172.241.80.0/22','Nobis Technology Group (ASN-NOBIS-103). ');
$ax += cidrblock($address,'172.241.88.0/21','Nobis Technology Group (ASN-NOBIS-104). ');
$ax += cidrblock($address,'172.241.96.0/19','Nobis Technology Group (ASN-NOBIS-105). ');
$ax += cidrblock($address,'172.241.128.0/18','Nobis Technology Group (ASN-NOBIS-106). ');
$ax += cidrblock($address,'172.241.192.0/19','Nobis Technology Group (ASN-NOBIS-107). ');
$ax += cidrblock($address,'172.241.224.0/20','Nobis Technology Group (ASN-NOBIS-108). ');
$ax += cidrblock($address,'172.241.240.0/21','Nobis Technology Group (ASN-NOBIS-109). ');
$ax += cidrblock($address,'172.247.0.0/16','Nobis Technology Group (ASN-NOBIS-110). ');
$ax += cidrblock($address,'172.255.0.0/19','Nobis Technology Group (ASN-NOBIS-111). ');
$ax += cidrblock($address,'172.255.32.0/20','Nobis Technology Group (ASN-NOBIS-112). ');
$ax += cidrblock($address,'172.255.64.0/18','Nobis Technology Group (ASN-NOBIS-113). ');
$ax += cidrblock($address,'172.255.128.0/17','Nobis Technology Group (ASN-NOBIS-114). ');
$ax += cidrblock($address,'173.208.0.0/19','Nobis Technology Group (ASN-NOBIS-115). ');
$ax += cidrblock($address,'173.208.32.0/20','Nobis Technology Group (ASN-NOBIS-116). ');
$ax += cidrblock($address,'173.208.48.0/21','Nobis Technology Group (ASN-NOBIS-117). ');
$ax += cidrblock($address,'173.208.56.0/22','Nobis Technology Group (ASN-NOBIS-118). ');
$ax += cidrblock($address,'173.208.62.0/23','Nobis Technology Group (ASN-NOBIS-119). ');
$ax += cidrblock($address,'173.208.64.0/19','Nobis Technology Group (ASN-NOBIS-120). ');
$ax += cidrblock($address,'173.208.96.0/21','Nobis Technology Group (ASN-NOBIS-121). ');
$ax += cidrblock($address,'173.208.104.0/24','Nobis Technology Group (ASN-NOBIS-122). ');
$ax += cidrblock($address,'173.208.106.0/23','Nobis Technology Group (ASN-NOBIS-123). ');
$ax += cidrblock($address,'173.208.108.0/22','Nobis Technology Group (ASN-NOBIS-124). ');
$ax += cidrblock($address,'173.208.112.0/24','Nobis Technology Group (ASN-NOBIS-125). ');
$ax += cidrblock($address,'173.208.114.0/23','Nobis Technology Group (ASN-NOBIS-126). ');
$ax += cidrblock($address,'173.208.118.0/23','Nobis Technology Group (ASN-NOBIS-127). ');
$ax += cidrblock($address,'173.208.120.0/21','Nobis Technology Group (ASN-NOBIS-128). ');
$ax += cidrblock($address,'173.234.0.0/20','Nobis Technology Group (ASN-NOBIS-129). ');
$ax += cidrblock($address,'173.234.16.0/21','Nobis Technology Group (ASN-NOBIS-130). ');
$ax += cidrblock($address,'173.234.32.0/19','Nobis Technology Group (ASN-NOBIS-131). ');
$ax += cidrblock($address,'173.234.64.0/20','Nobis Technology Group (ASN-NOBIS-132). ');
$ax += cidrblock($address,'173.234.80.0/21','Nobis Technology Group (ASN-NOBIS-133). ');
$ax += cidrblock($address,'173.234.88.0/23','Nobis Technology Group (ASN-NOBIS-134). ');
$ax += cidrblock($address,'173.234.90.0/24','Nobis Technology Group (ASN-NOBIS-135). ');
$ax += cidrblock($address,'173.234.92.0/22','Nobis Technology Group (ASN-NOBIS-136). ');
$ax += cidrblock($address,'173.234.96.0/21','Nobis Technology Group (ASN-NOBIS-137). ');
$ax += cidrblock($address,'173.234.105.0/24','Nobis Technology Group (ASN-NOBIS-138). ');
$ax += cidrblock($address,'173.234.109.0/24','Nobis Technology Group (ASN-NOBIS-139). ');
$ax += cidrblock($address,'173.234.110.0/23','Nobis Technology Group (ASN-NOBIS-140). ');
$ax += cidrblock($address,'173.234.112.0/20','Nobis Technology Group (ASN-NOBIS-141). ');
$ax += cidrblock($address,'173.234.128.0/19','Nobis Technology Group (ASN-NOBIS-142). ');
$ax += cidrblock($address,'173.234.160.0/20','Nobis Technology Group (ASN-NOBIS-143). ');
$ax += cidrblock($address,'173.234.176.0/21','Nobis Technology Group (ASN-NOBIS-144). ');
$ax += cidrblock($address,'173.234.184.0/22','Nobis Technology Group (ASN-NOBIS-145). ');
$ax += cidrblock($address,'173.234.188.0/24','Nobis Technology Group (ASN-NOBIS-146). ');
$ax += cidrblock($address,'173.234.190.0/23','Nobis Technology Group (ASN-NOBIS-147). ');
$ax += cidrblock($address,'173.234.192.0/18','Nobis Technology Group (ASN-NOBIS-148). ');
$ax += cidrblock($address,'174.34.128.0/19','Nobis Technology Group (ASN-NOBIS-149). ');
$ax += cidrblock($address,'174.34.160.0/20','Nobis Technology Group (ASN-NOBIS-150). ');
$ax += cidrblock($address,'174.34.176.0/21','Nobis Technology Group (ASN-NOBIS-151). ');
$ax += cidrblock($address,'174.34.184.0/22','Nobis Technology Group (ASN-NOBIS-152). ');
$ax += cidrblock($address,'174.34.188.0/23','Nobis Technology Group (ASN-NOBIS-153). ');
$ax += cidrblock($address,'174.34.190.0/24','Nobis Technology Group (ASN-NOBIS-154). ');
$ax += cidrblock($address,'181.214.53.0/24','Nobis Technology Group (ASN-NOBIS-155). ');
$ax += cidrblock($address,'191.96.100.0/24','Nobis Technology Group (ASN-NOBIS-156). ');
$ax += cidrblock($address,'191.96.107.0/24','Nobis Technology Group (ASN-NOBIS-157). ');
$ax += cidrblock($address,'191.101.178.0/24','Nobis Technology Group (ASN-NOBIS-158). ');
$ax += cidrblock($address,'192.151.236.0/22','Nobis Technology Group (ASN-NOBIS-159). ');
$ax += cidrblock($address,'192.161.80.0/20','Nobis Technology Group (ASN-NOBIS-160). ');
$ax += cidrblock($address,'192.163.160.0/19','Nobis Technology Group (ASN-NOBIS-161). ');
$ax += cidrblock($address,'192.229.64.0/18','Nobis Technology Group (ASN-NOBIS-162). ');
$ax += cidrblock($address,'192.238.128.0/17','Nobis Technology Group (ASN-NOBIS-163). ');
$ax += cidrblock($address,'192.253.243.0/24','Nobis Technology Group (ASN-NOBIS-164). ');
$ax += cidrblock($address,'192.253.245.0/24','Nobis Technology Group (ASN-NOBIS-165). ');
$ax += cidrblock($address,'192.253.246.0/24','Nobis Technology Group (ASN-NOBIS-166). ');
$ax += cidrblock($address,'196.45.112.0/22','Nobis Technology Group (ASN-NOBIS-167). ');
$ax += cidrblock($address,'198.48.96.0/20','Nobis Technology Group (ASN-NOBIS-168). ');
$ax += cidrblock($address,'198.48.112.0/22','Nobis Technology Group (ASN-NOBIS-169). ');
$ax += cidrblock($address,'206.123.128.0/23','Nobis Technology Group (ASN-NOBIS-170). ');
$ax += cidrblock($address,'206.123.143.0/24','Nobis Technology Group (ASN-NOBIS-171). ');
$ax += cidrblock($address,'206.123.144.0/23','Nobis Technology Group (ASN-NOBIS-172). ');
$ax += cidrblock($address,'216.6.224.0/20','Nobis Technology Group (ASN-NOBIS-173). ');
$ax += cidrblock($address,'216.152.224.0/20','Nobis Technology Group (ASN-NOBIS-174). ');
$ax += cidrblock($address,'216.193.237.0/24','Nobis Technology Group (ASN-NOBIS-175). ');
$ax += inmatch($hoster,'nobis','Nobis Technology Group. (ASN-NOBIS-TECH-175). ');
$ax += inmatch($hoster,'ubiquity','Nobis Technology Group. (ASN-NOBIS-TECH-176). ');


// Rackspace (updated 2016.04.27)
// AS10532, AS15395, AS19994, AS22720, AS27357, AS33070, AS44716, AS45187, AS47715, AS58683
$ax += cidrblock($address,'5.79.0.0/18','Rackspace (ASN-RKSP-000). ');
$ax += cidrblock($address,'5.152.187.0/24','Rackspace (ASN-RKSP-001). ');
$ax += cidrblock($address,'23.253.0.0/16','Rackspace (ASN-RKSP-002). ');
$ax += cidrblock($address,'27.126.144.0/21','Rackspace (ASN-RKSP-003). ');
$ax += cidrblock($address,'31.222.128.0/18','Rackspace (ASN-RKSP-004). ');
$ax += cidrblock($address,'37.188.96.0/19','Rackspace (ASN-RKSP-005). ');
$ax += cidrblock($address,'46.38.160.0/19','Rackspace (ASN-RKSP-006). ');
$ax += cidrblock($address,'50.28.192.0/19','Rackspace (ASN-RKSP-007). ');
$ax += cidrblock($address,'50.28.224.0/21','Rackspace (ASN-RKSP-008). ');
$ax += cidrblock($address,'50.28.232.0/22','Rackspace (ASN-RKSP-009). ');
$ax += cidrblock($address,'50.56.0.0/15','Rackspace (ASN-RKSP-010). ');
$ax += cidrblock($address,'64.39.0.0/19','Rackspace (ASN-RKSP-011). ');
$ax += cidrblock($address,'64.49.192.0/18','Rackspace (ASN-RKSP-012). ');
$ax += cidrblock($address,'65.61.128.0/18','Rackspace (ASN-RKSP-013). ');
$ax += cidrblock($address,'66.216.64.0/18','Rackspace (ASN-RKSP-014). ');
$ax += cidrblock($address,'67.23.0.0/19','Rackspace (ASN-RKSP-015). ');
$ax += cidrblock($address,'67.23.32.0/20','Rackspace (ASN-RKSP-016). ');
$ax += cidrblock($address,'67.192.0.0/16','Rackspace (ASN-RKSP-017). ');
$ax += cidrblock($address,'67.207.128.0/19','Rackspace (ASN-RKSP-018). ');
$ax += cidrblock($address,'69.20.0.0/17','Rackspace (ASN-RKSP-019). ');
$ax += cidrblock($address,'72.3.128.0/17','Rackspace (ASN-RKSP-020). ');
$ax += cidrblock($address,'72.4.112.0/20','Rackspace (ASN-RKSP-021). ');
$ax += cidrblock($address,'72.32.0.0/16','Rackspace (ASN-RKSP-022). ');
$ax += cidrblock($address,'74.91.80.0/20','Rackspace (ASN-RKSP-023). ');
$ax += cidrblock($address,'74.205.0.0/17','Rackspace (ASN-RKSP-024). ');
$ax += cidrblock($address,'78.136.0.0/18','Rackspace (ASN-RKSP-025). ');
$ax += cidrblock($address,'83.138.128.0/18','Rackspace (ASN-RKSP-026). ');
$ax += cidrblock($address,'87.225.128.0/17','Rackspace (ASN-RKSP-027). ');
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
$ax += cidrblock($address,'117.74.104.0/21','Rackspace (ASN-RKSP-039). ');
$ax += cidrblock($address,'119.9.0.0/17','Rackspace (ASN-RKSP-040). ');
$ax += cidrblock($address,'119.9.128.0/18','Rackspace (ASN-RKSP-041). ');
$ax += cidrblock($address,'120.136.32.0/20','Rackspace (ASN-RKSP-042). ');
$ax += cidrblock($address,'134.8.0.0/23','Rackspace (ASN-RKSP-043). ');
$ax += cidrblock($address,'134.8.2.0/24','Rackspace (ASN-RKSP-044). ');
$ax += cidrblock($address,'134.213.0.0/16','Rackspace (ASN-RKSP-045). ');
$ax += cidrblock($address,'142.0.184.0/22','Rackspace (ASN-RKSP-046). ');
$ax += cidrblock($address,'142.54.40.0/24','Rackspace (ASN-RKSP-047). ');
$ax += cidrblock($address,'146.20.0.0/16','Rackspace (ASN-RKSP-048). ');
$ax += cidrblock($address,'146.88.18.0/24','Rackspace (ASN-RKSP-049). ');
$ax += cidrblock($address,'146.88.28.0/24','Rackspace (ASN-RKSP-050). ');
$ax += cidrblock($address,'146.177.0.0/16','Rackspace (ASN-RKSP-051). ');
$ax += cidrblock($address,'148.62.0.0/16','Rackspace (ASN-RKSP-052). ');
$ax += cidrblock($address,'156.43.59.0/24','Rackspace (ASN-RKSP-053). ');
$ax += cidrblock($address,'159.127.178.0/23','Rackspace (ASN-RKSP-054). ');
$ax += cidrblock($address,'161.47.0.0/18','Rackspace (ASN-RKSP-055). ');
if ($address !== '162.13.83.46') {
    /** Bypass for "googlealert.com", "gigaalert.com", "copyscape.com". **/
    $ax += cidrblock($address,'162.13.0.0/16','Rackspace (ASN-RKSP-056). ');
}
$ax += cidrblock($address,'162.209.0.0/17','Rackspace (ASN-RKSP-057). ');
$ax += cidrblock($address,'162.220.0.0/24','Rackspace (ASN-RKSP-058). ');
$ax += cidrblock($address,'162.242.128.0/17','Rackspace (ASN-RKSP-059). ');
$ax += cidrblock($address,'162.247.112.0/21','Rackspace (ASN-RKSP-060). ');
$ax += cidrblock($address,'164.177.128.0/19','Rackspace (ASN-RKSP-061). ');
$ax += cidrblock($address,'166.78.0.0/16','Rackspace (ASN-RKSP-062). ');
$ax += cidrblock($address,'168.235.224.0/20','Rackspace (ASN-RKSP-063). ');
$ax += cidrblock($address,'172.99.64.0/18','Rackspace (ASN-RKSP-064). ');
$ax += cidrblock($address,'173.45.224.0/19','Rackspace (ASN-RKSP-065). ');
$ax += cidrblock($address,'173.203.0.0/16','Rackspace (ASN-RKSP-066). ');
$ax += cidrblock($address,'174.143.0.0/16','Rackspace (ASN-RKSP-067). ');
$ax += cidrblock($address,'177.152.202.0/24','Rackspace (ASN-RKSP-068). ');
$ax += cidrblock($address,'180.150.128.0/19','Rackspace (ASN-RKSP-069). ');
$ax += cidrblock($address,'184.106.0.0/16','Rackspace (ASN-RKSP-070). ');
$ax += cidrblock($address,'185.28.196.0/24','Rackspace (ASN-RKSP-071). ');
$ax += cidrblock($address,'185.36.144.0/22','Rackspace (ASN-RKSP-072). ');
$ax += cidrblock($address,'185.37.202.0/24','Rackspace (ASN-RKSP-073). ');
$ax += cidrblock($address,'185.51.76.0/22','Rackspace (ASN-RKSP-074). ');
$ax += cidrblock($address,'185.64.72.0/24','Rackspace (ASN-RKSP-075). ');
$ax += cidrblock($address,'185.75.60.0/22','Rackspace (ASN-RKSP-076). ');
$ax += cidrblock($address,'185.118.172.0/22','Rackspace (ASN-RKSP-077). ');
$ax += cidrblock($address,'192.40.168.0/21','Rackspace (ASN-RKSP-078). ');
$ax += cidrblock($address,'192.233.7.0/24','Rackspace (ASN-RKSP-079). ');
$ax += cidrblock($address,'192.237.128.0/17','Rackspace (ASN-RKSP-080). ');
$ax += cidrblock($address,'193.142.244.0/24','Rackspace (ASN-RKSP-081). ');
$ax += cidrblock($address,'195.190.31.0/24','Rackspace (ASN-RKSP-082). ');
$ax += cidrblock($address,'198.61.128.0/17','Rackspace (ASN-RKSP-083). ');
$ax += cidrblock($address,'198.101.128.0/17','Rackspace (ASN-RKSP-084). ');
$ax += cidrblock($address,'198.210.16.0/21','Rackspace (ASN-RKSP-085). ');
$ax += cidrblock($address,'198.254.64.0/20','Rackspace (ASN-RKSP-086). ');
$ax += cidrblock($address,'199.166.36.0/23','Rackspace (ASN-RKSP-087). ');
$ax += cidrblock($address,'201.131.3.0/24','Rackspace (ASN-RKSP-088). ');
$ax += cidrblock($address,'203.55.21.0/24','Rackspace (ASN-RKSP-089). ');
$ax += cidrblock($address,'203.55.138.0/24','Rackspace (ASN-RKSP-090). ');
$ax += cidrblock($address,'203.60.0.0/17','Rackspace (ASN-RKSP-091). ');
$ax += cidrblock($address,'204.63.38.0/23','Rackspace (ASN-RKSP-092). ');
$ax += cidrblock($address,'204.75.142.0/24','Rackspace (ASN-RKSP-093). ');
$ax += cidrblock($address,'204.232.128.0/17','Rackspace (ASN-RKSP-094). ');
$ax += cidrblock($address,'205.166.177.0/24','Rackspace (ASN-RKSP-095). ');
$ax += cidrblock($address,'207.97.192.0/18','Rackspace (ASN-RKSP-096). ');
$ax += cidrblock($address,'208.78.96.0/21','Rackspace (ASN-RKSP-097). ');
$ax += cidrblock($address,'209.0.201.0/24','Rackspace (ASN-RKSP-098). ');
$ax += cidrblock($address,'209.20.64.0/19','Rackspace (ASN-RKSP-099). ');
$ax += cidrblock($address,'209.61.128.0/18','Rackspace (ASN-RKSP-100). ');
$ax += cidrblock($address,'209.114.32.0/19','Rackspace (ASN-RKSP-101). ');
$ax += cidrblock($address,'209.133.224.0/19','Rackspace (ASN-RKSP-102). ');
$ax += cidrblock($address,'209.163.232.0/21','Rackspace (ASN-RKSP-103). ');
$ax += cidrblock($address,'209.163.248.0/22','Rackspace (ASN-RKSP-104). ');
$ax += cidrblock($address,'212.21.64.0/19','Rackspace (ASN-RKSP-105). ');
$ax += cidrblock($address,'212.42.224.0/19','Rackspace (ASN-RKSP-106). ');
$ax += cidrblock($address,'212.64.128.0/19','Rackspace (ASN-RKSP-107). ');
$ax += cidrblock($address,'212.100.224.0/19','Rackspace (ASN-RKSP-108). ');
$ax += cidrblock($address,'216.18.148.0/22','Rackspace (ASN-RKSP-109). ');
$ax += cidrblock($address,'216.110.32.0/20','Rackspace (ASN-RKSP-110). ');
$ax += cidrblock($address,'216.239.98.0/24','Rackspace (ASN-RKSP-111). ');
$ax += cidrblock($address,'216.239.100.0/24','Rackspace (ASN-RKSP-112). ');


// Pakistan Telecom AS45595
// Spam without end, huge blacklistings! (updated 2016.04.27)
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
$ax += cidrblock($address,'59.103.168.0/24','Pakistan Telecom AS45595 (ASN-PkT-11). ');
$ax += cidrblock($address,'59.103.192.0/19','Pakistan Telecom AS45595 (ASN-PkT-12). ');
$ax += cidrblock($address,'59.103.224.0/24','Pakistan Telecom AS45595 (ASN-PkT-13). ');
$ax += cidrblock($address,'104.99.130.0/23','Pakistan Telecom AS45595 (ASN-PkT-14). ');
$ax += cidrblock($address,'104.99.132.0/22','Pakistan Telecom AS45595 (ASN-PkT-15). ');
$ax += cidrblock($address,'116.71.96.0/20','Pakistan Telecom AS45595 (ASN-PkT-16). ');
$ax += cidrblock($address,'116.71.192.0/18','Pakistan Telecom AS45595 (ASN-PkT-17). ');
$ax += cidrblock($address,'119.152.0.0/13','Pakistan Telecom AS45595 (ASN-PkT-18). ');
$ax += cidrblock($address,'182.176.0.0/12','Pakistan Telecom AS45595 (ASN-PkT-19). ');
$ax += cidrblock($address,'203.99.160.0/19','Pakistan Telecom AS45595 (ASN-PkT-20). ');
$ax += cidrblock($address,'203.128.252.0/24','Pakistan Telecom AS45595 (ASN-PkT-21). ');
$ax += cidrblock($address,'203.128.254.0/23','Pakistan Telecom AS45595 (ASN-PkT-22). ');
$ax += cidrblock($address,'203.135.11.0/24','Pakistan Telecom AS45595 (ASN-PkT-23). ');
$ax += cidrblock($address,'203.135.13.0/24','Pakistan Telecom AS45595 (ASN-PkT-24). ');
$ax += cidrblock($address,'203.135.16.0/24','Pakistan Telecom AS45595 (ASN-PkT-25). ');
$ax += cidrblock($address,'203.135.20.0/24','Pakistan Telecom AS45595 (ASN-PkT-26). ');
$ax += cidrblock($address,'203.135.24.0/23','Pakistan Telecom AS45595 (ASN-PkT-27). ');
$ax += cidrblock($address,'203.135.26.0/24','Pakistan Telecom AS45595 (ASN-PkT-28). ');
$ax += cidrblock($address,'203.135.30.0/24','Pakistan Telecom AS45595 (ASN-PkT-29). ');
$ax += cidrblock($address,'203.135.33.0/24','Pakistan Telecom AS45595 (ASN-PkT-30). ');
$ax += cidrblock($address,'203.135.34.0/23','Pakistan Telecom AS45595 (ASN-PkT-31). ');
$ax += cidrblock($address,'203.135.36.0/24','Pakistan Telecom AS45595 (ASN-PkT-32). ');
$ax += cidrblock($address,'203.135.38.0/24','Pakistan Telecom AS45595 (ASN-PkT-33). ');
$ax += cidrblock($address,'203.135.41.0/24','Pakistan Telecom AS45595 (ASN-PkT-34). ');
$ax += cidrblock($address,'203.135.43.0/24','Pakistan Telecom AS45595 (ASN-PkT-35). ');
$ax += cidrblock($address,'203.135.48.0/23','Pakistan Telecom AS45595 (ASN-PkT-36). ');
$ax += cidrblock($address,'203.135.50.0/24','Pakistan Telecom AS45595 (ASN-PkT-37). ');
$ax += cidrblock($address,'203.135.54.0/23','Pakistan Telecom AS45595 (ASN-PkT-38). ');
$ax += cidrblock($address,'203.135.58.0/24','Pakistan Telecom AS45595 (ASN-PkT-39). ');
$ax += cidrblock($address,'203.135.61.0/24','Pakistan Telecom AS45595 (ASN-PkT-40). ');


// Kintiskton LLC, Mark Manager copyright check bot (abusive history) (updated 2016.04.13)
$ax += cidrblock($address,'63.110.187.0/24','Kintiskton LLC (ASN-KINT-01). ');


// Limestone networks, Hosts of hackforums.net (updated 2016.01.19 / checked 2016.03.04)
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


// Redstation Network (updated 2016.05.21)
// AS35662
$ax += cidrblock($address,'5.152.192.0/19','Redstation Limited, not an access provider ISP (ASN-REDSTATION-00). ');
$ax += cidrblock($address,'31.3.224.0/19','Redstation Limited, not an access provider ISP (ASN-REDSTATION-01). ');
$ax += cidrblock($address,'37.157.240.0/21','Redstation Limited, not an access provider ISP (ASN-REDSTATION-02). ');
$ax += cidrblock($address,'37.220.0.0/19','Redstation Limited, not an access provider ISP (ASN-REDSTATION-03). ');
$ax += cidrblock($address,'77.245.64.0/20','Redstation Limited, not an access provider ISP (ASN-REDSTATION-04). ');
$ax += cidrblock($address,'79.143.80.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-05). ');
$ax += cidrblock($address,'80.84.48.0/20','Redstation Limited, not an access provider ISP (ASN-REDSTATION-06). ');
$ax += cidrblock($address,'80.243.176.0/20','Redstation Limited, not an access provider ISP (ASN-REDSTATION-07). ');
$ax += cidrblock($address,'81.94.192.0/20','Redstation Limited, not an access provider ISP (ASN-REDSTATION-08). ');
$ax += cidrblock($address,'82.102.8.0/24','Redstation Limited, not an access provider ISP (ASN-REDSTATION-09). ');
$ax += cidrblock($address,'87.236.209.0/24','Redstation Limited, not an access provider ISP (ASN-REDSTATION-10). ');
$ax += cidrblock($address,'87.236.214.0/24','Redstation Limited, not an access provider ISP (ASN-REDSTATION-11). ');
$ax += cidrblock($address,'88.150.128.0/21','Redstation Limited, not an access provider ISP (ASN-REDSTATION-12). ');
$ax += cidrblock($address,'88.150.136.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-13). ');
$ax += cidrblock($address,'88.150.148.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-14). ');
$ax += cidrblock($address,'88.150.152.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-15). ');
$ax += cidrblock($address,'88.150.172.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-16). ');
$ax += cidrblock($address,'88.150.176.0/20','Redstation Limited, not an access provider ISP (ASN-REDSTATION-17). ');
$ax += cidrblock($address,'88.150.192.0/19','Redstation Limited, not an access provider ISP (ASN-REDSTATION-18). ');
$ax += cidrblock($address,'88.150.224.0/20','Redstation Limited, not an access provider ISP (ASN-REDSTATION-19). ');
$ax += cidrblock($address,'88.150.242.0/23','Redstation Limited, not an access provider ISP (ASN-REDSTATION-20). ');
$ax += cidrblock($address,'88.150.244.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-21). ');
$ax += cidrblock($address,'88.150.248.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-22). ');
$ax += cidrblock($address,'91.225.0.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-23). ');
$ax += cidrblock($address,'91.228.206.0/24','Redstation Limited, not an access provider ISP (ASN-REDSTATION-24). ');
$ax += cidrblock($address,'91.238.100.0/24','Redstation Limited, not an access provider ISP (ASN-REDSTATION-25). ');
$ax += cidrblock($address,'109.73.64.0/20','Redstation Limited, not an access provider ISP (ASN-REDSTATION-26). ');
$ax += cidrblock($address,'109.200.0.0/19','Redstation Limited, not an access provider ISP (ASN-REDSTATION-27). ');
$ax += cidrblock($address,'149.3.128.0/20','Redstation Limited, not an access provider ISP (ASN-REDSTATION-28). ');
$ax += cidrblock($address,'176.56.192.0/19','Redstation Limited, not an access provider ISP (ASN-REDSTATION-29). ');
$ax += cidrblock($address,'176.227.192.0/19','Redstation Limited, not an access provider ISP (ASN-REDSTATION-30). ');
$ax += cidrblock($address,'185.5.0.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-31). ');
$ax += cidrblock($address,'185.20.96.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-32). ');
$ax += cidrblock($address,'185.36.76.0/22','Redstation Limited, not an access provider ISP (ASN-REDSTATION-33). ');
$ax += cidrblock($address,'188.72.99.0/24','Redstation Limited, not an access provider ISP (ASN-REDSTATION-34). ');
$ax += cidrblock($address,'188.212.122.0/23','Redstation Limited, not an access provider ISP (ASN-REDSTATION-35). ');
$ax += cidrblock($address,'188.227.160.0/19','Redstation Limited, not an access provider ISP (ASN-REDSTATION-36). ');
$ax += cidrblock($address,'190.121.209.0/24','Redstation Limited, not an access provider ISP (ASN-REDSTATION-37). ');


// AnchorFree Ltd network (updated 2016.01.19 / checked 2016.03.04)
// AS26642
$ax += cidrblock($address,'46.16.34.0/23','AnchorFree Ltd network (AS-AF-00). ');
$ax += cidrblock($address,'74.115.3.0/24','AnchorFree Ltd network (AS-AF-01). ');
$ax += cidrblock($address,'74.115.5.0/24','AnchorFree Ltd network (AS-AF-02). ');
$ax += cidrblock($address,'85.237.197.0/24','AnchorFree Ltd network (AS-AF-03). ');
$ax += cidrblock($address,'85.237.222.0/24','AnchorFree Ltd network (AS-AF-04). ');


// CH-NET S.R.L. (updated 2016.03.04 / checked 2016.05.15)
// Romainian network trying to hack user accounts.
// AS41011
$ax += cidrblock($address,'89.41.172.0/23','Romainian network trying to hack user accounts (ASN-AS41011-00). ');
$ax += cidrblock($address,'93.113.36.0/23','Romainian network trying to hack user accounts (ASN-AS41011-01). ');
$ax += cidrblock($address,'93.115.240.0/23','Romainian network trying to hack user accounts (ASN-AS41011-02). ');
$ax += cidrblock($address,'93.188.205.0/24','Romainian network trying to hack user accounts (ASN-AS41011-03). ');
$ax += cidrblock($address,'185.123.220.0/22','Romainian network trying to hack user accounts (ASN-AS41011-04). ');
$ax += cidrblock($address,'185.125.192.0/22','Romainian network trying to hack user accounts (ASN-AS41011-05). ');
$ax += cidrblock($address,'188.208.32.0/23','Romainian network trying to hack user accounts (ASN-AS41011-06). ');
$ax += cidrblock($address,'188.213.232.0/24','Romainian network trying to hack user accounts (ASN-AS41011-07). ');
$ax += cidrblock($address,'188.214.159.0/24','Romainian network trying to hack user accounts (ASN-AS41011-08). ');
$ax += cidrblock($address,'188.214.192.0/24','Romainian network trying to hack user accounts (ASN-AS41011-09). ');


// Swiftway / Botmaster Labs (updated 2016.04.23)
// AS35017
$ax += cidrblock($address,'5.56.133.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-00). ');
$ax += cidrblock($address,'23.227.192.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-01). ');
$ax += cidrblock($address,'31.187.78.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-02). ');
$ax += cidrblock($address,'37.1.208.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-03). ');
$ax += cidrblock($address,'37.72.168.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-04). ');
$ax += cidrblock($address,'38.69.204.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-05). ');
$ax += cidrblock($address,'45.74.17.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-06). ');
$ax += cidrblock($address,'45.74.18.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-07). ');
$ax += cidrblock($address,'45.74.20.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-08). ');
$ax += cidrblock($address,'45.74.24.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-09). ');
$ax += cidrblock($address,'45.74.32.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-10). ');
$ax += cidrblock($address,'45.74.34.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-11). ');
$ax += cidrblock($address,'45.74.40.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-12). ');
$ax += cidrblock($address,'45.74.47.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-13). ');
$ax += cidrblock($address,'45.74.48.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-14). ');
$ax += cidrblock($address,'45.74.56.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-15). ');
$ax += cidrblock($address,'46.21.144.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-16). ');
$ax += cidrblock($address,'46.243.150.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-17). ');
$ax += cidrblock($address,'69.1.69.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-18). ');
$ax += cidrblock($address,'89.233.104.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-19). ');
$ax += cidrblock($address,'91.199.45.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-20). ');
$ax += cidrblock($address,'91.239.64.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-21). ');
$ax += cidrblock($address,'94.100.16.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-22). ');
$ax += cidrblock($address,'104.143.32.0/20','Swiftway / Botmaster Labs AS35017 (ASN-SFT-23). ');
$ax += cidrblock($address,'104.243.251.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-24). ');
$ax += cidrblock($address,'104.250.160.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-25). ');
$ax += cidrblock($address,'114.31.208.0/23','Swiftway / Botmaster Labs AS35017 (ASN-SFT-26). ');
$ax += cidrblock($address,'114.31.210.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-27). ');
$ax += cidrblock($address,'114.141.112.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-28). ');
$ax += cidrblock($address,'149.154.158.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-29). ');
$ax += cidrblock($address,'149.255.32.0/21','Swiftway / Botmaster Labs AS35017 (ASN-SFT-30). ');
$ax += cidrblock($address,'151.236.16.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-31). ');
$ax += cidrblock($address,'151.236.22.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-32). ');
$ax += cidrblock($address,'158.255.213.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-33). ');
$ax += cidrblock($address,'162.252.172.0/22','Swiftway / Botmaster Labs AS35017 (ASN-SFT-34). ');
$ax += cidrblock($address,'172.94.10.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-35). ');
$ax += cidrblock($address,'172.94.19.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-36). ');
$ax += cidrblock($address,'172.94.21.0/24','Swiftway / Botmaster Labs AS35017 (ASN-SFT-37). ');
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


// SoftLayer Technologies; Hostile & Spam Tolerant Networks
// AS21844, AS36351 (updated 2016.05.21)
$ax += cidrblock($address,'5.10.64.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-000). ');
$ax += cidrblock($address,'5.62.21.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-001). ');
$ax += cidrblock($address,'5.153.0.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-002). ');
$ax += cidrblock($address,'12.96.160.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-003). ');
$ax += cidrblock($address,'23.91.120.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-004). ');
$ax += cidrblock($address,'23.239.24.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-005). ');
$ax += cidrblock($address,'23.246.192.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-006). ');
$ax += cidrblock($address,'23.252.100.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-007). ');
$ax += cidrblock($address,'27.100.36.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-008). ');
$ax += cidrblock($address,'31.24.225.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-09). ');
$ax += cidrblock($address,'37.18.176.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-010). ');
$ax += cidrblock($address,'37.58.64.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-011). ');
$ax += cidrblock($address,'37.60.246.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-012). ');
$ax += cidrblock($address,'37.60.254.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-013). ');
$ax += cidrblock($address,'37.130.224.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-014). ');
$ax += cidrblock($address,'43.226.228.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-015). ');
$ax += cidrblock($address,'43.226.230.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-016). ');
$ax += cidrblock($address,'43.228.157.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-017). ');
$ax += cidrblock($address,'43.228.159.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-018). ');
$ax += cidrblock($address,'43.245.117.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-019). ');
$ax += cidrblock($address,'43.245.168.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-020). ');
$ax += cidrblock($address,'43.250.48.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-021). ');
$ax += cidrblock($address,'43.255.188.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-022). ');
$ax += cidrblock($address,'45.33.0.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-023). ');
$ax += cidrblock($address,'45.33.112.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-024). ');
$ax += cidrblock($address,'45.41.133.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-025). ');
$ax += cidrblock($address,'45.41.135.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-026). ');
$ax += cidrblock($address,'45.56.64.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-027). ');
$ax += cidrblock($address,'45.56.120.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-028). ');
$ax += cidrblock($address,'45.56.131.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-029). ');
$ax += cidrblock($address,'45.56.146.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-030). ');
$ax += cidrblock($address,'45.56.151.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-031). ');
$ax += cidrblock($address,'45.56.152.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-032). ');
$ax += cidrblock($address,'45.74.39.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-033). ');
$ax += cidrblock($address,'45.74.41.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-034). ');
$ax += cidrblock($address,'45.74.42.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-035). ');
$ax += cidrblock($address,'45.74.44.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-036). ');
$ax += cidrblock($address,'45.74.59.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-037). ');
$ax += cidrblock($address,'45.74.60.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-038). ');
$ax += cidrblock($address,'45.79.0.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-039). ');
$ax += cidrblock($address,'45.115.25.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-040). ');
$ax += cidrblock($address,'45.116.12.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-041). ');
$ax += cidrblock($address,'45.117.100.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-042). ');
$ax += cidrblock($address,'45.120.156.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-043). ');
$ax += cidrblock($address,'45.120.159.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-044). ');
$ax += cidrblock($address,'45.124.64.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-045). ');
$ax += cidrblock($address,'45.125.0.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-046). ');
$ax += cidrblock($address,'45.127.92.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-047). ');
$ax += cidrblock($address,'46.16.184.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-048). ');
$ax += cidrblock($address,'50.22.0.0/15','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-049). ');
$ax += cidrblock($address,'50.97.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-050). ');
$ax += cidrblock($address,'50.116.16.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-051). ');
$ax += cidrblock($address,'52.128.24.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-052). ');
$ax += cidrblock($address,'52.128.28.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-053). ');
$ax += cidrblock($address,'63.141.128.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-054). ');
$ax += cidrblock($address,'64.5.32.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-055). ');
$ax += cidrblock($address,'64.64.121.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-056). ');
$ax += cidrblock($address,'64.246.0.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-057). ');
$ax += cidrblock($address,'65.181.111.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-058). ');
$ax += cidrblock($address,'66.98.128.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-059). ');
$ax += cidrblock($address,'66.228.48.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-060). ');
$ax += cidrblock($address,'66.228.112.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-061). ');
$ax += cidrblock($address,'66.241.112.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-062). ');
$ax += cidrblock($address,'67.15.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-063). ');
$ax += cidrblock($address,'67.18.0.0/15','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-064). ');
$ax += cidrblock($address,'67.213.208.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-065). ');
$ax += cidrblock($address,'67.213.216.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-066). ');
$ax += cidrblock($address,'67.213.218.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-067). ');
$ax += cidrblock($address,'67.213.220.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-068). ');
$ax += cidrblock($address,'67.228.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-069). ');
$ax += cidrblock($address,'69.4.224.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-070). ');
$ax += cidrblock($address,'69.41.224.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-071). ');
$ax += cidrblock($address,'69.56.128.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-072). ');
$ax += cidrblock($address,'69.57.128.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-073). ');
$ax += cidrblock($address,'69.93.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-074). ');
$ax += cidrblock($address,'69.164.192.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-075). ');
$ax += cidrblock($address,'69.168.235.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-076). ');
$ax += cidrblock($address,'69.168.236.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-077). ');
$ax += cidrblock($address,'69.168.238.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-078). ');
$ax += cidrblock($address,'70.84.0.0/14','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-079). ');
$ax += cidrblock($address,'72.14.176.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-080). ');
$ax += cidrblock($address,'74.52.0.0/14','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-081). ');
$ax += cidrblock($address,'74.86.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-082). ');
$ax += cidrblock($address,'74.116.84.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-083). ');
$ax += cidrblock($address,'74.121.54.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-084). ');
$ax += cidrblock($address,'75.125.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-085). ');
$ax += cidrblock($address,'75.126.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-086). ');
$ax += cidrblock($address,'77.104.128.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-087). ');
$ax += cidrblock($address,'77.104.132.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-088). ');
$ax += cidrblock($address,'77.104.134.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-089). ');
$ax += cidrblock($address,'77.104.140.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-090). ');
$ax += cidrblock($address,'77.104.142.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-091). ');
$ax += cidrblock($address,'81.95.144.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-092). ');
$ax += cidrblock($address,'85.203.20.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-093). ');
$ax += cidrblock($address,'85.203.23.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-094). ');
$ax += cidrblock($address,'85.203.44.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-095). ');
$ax += cidrblock($address,'85.203.47.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-096). ');
$ax += cidrblock($address,'86.105.160.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-097). ');
$ax += cidrblock($address,'86.106.120.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-098). ');
$ax += cidrblock($address,'89.37.28.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-99). ');
$ax += cidrblock($address,'89.38.52.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-100). ');
$ax += cidrblock($address,'89.43.51.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-101). ');
$ax += cidrblock($address,'93.114.92.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-102). ');
$ax += cidrblock($address,'93.115.48.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-103). ');
$ax += cidrblock($address,'96.47.32.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-104). ');
$ax += cidrblock($address,'96.47.40.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-105). ');
$ax += cidrblock($address,'96.126.112.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-106). ');
$ax += cidrblock($address,'100.42.50.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-107). ');
$ax += cidrblock($address,'100.42.52.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-108). ');
$ax += cidrblock($address,'100.42.56.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-109). ');
$ax += cidrblock($address,'103.4.192.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-110). ');
$ax += cidrblock($address,'103.19.0.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-111). ');
$ax += cidrblock($address,'103.26.204.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-112). ');
$ax += cidrblock($address,'103.27.76.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-113). ');
$ax += cidrblock($address,'103.41.172.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-114). ');
$ax += cidrblock($address,'103.44.72.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-115). ');
$ax += cidrblock($address,'103.46.141.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-116). ');
$ax += cidrblock($address,'103.46.143.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-117). ');
$ax += cidrblock($address,'103.53.196.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-118). ');
$ax += cidrblock($address,'103.56.52.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-119). ');
$ax += cidrblock($address,'103.56.216.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-120). ');
$ax += cidrblock($address,'103.57.165.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-121). ');
$ax += cidrblock($address,'103.57.166.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-122). ');
$ax += cidrblock($address,'103.192.176.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-123). ');
$ax += cidrblock($address,'103.192.178.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-124). ');
$ax += cidrblock($address,'103.192.224.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-125). ');
$ax += cidrblock($address,'103.193.4.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-126). ');
$ax += cidrblock($address,'103.193.128.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-127). ');
$ax += cidrblock($address,'103.194.40.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-128). ');
$ax += cidrblock($address,'103.194.43.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-129). ');
$ax += cidrblock($address,'103.195.150.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-130). ');
$ax += cidrblock($address,'103.197.160.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-131). ');
$ax += cidrblock($address,'103.197.252.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-132). ');
$ax += cidrblock($address,'103.198.76.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-133). ');
$ax += cidrblock($address,'103.200.96.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-134). ');
$ax += cidrblock($address,'103.200.112.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-135). ');
$ax += cidrblock($address,'103.201.128.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-136). ');
$ax += cidrblock($address,'103.201.130.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-137). ');
$ax += cidrblock($address,'103.203.56.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-138). ');
$ax += cidrblock($address,'103.203.90.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-139). ');
$ax += cidrblock($address,'103.204.13.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-140). ');
$ax += cidrblock($address,'103.204.172.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-141). ');
$ax += cidrblock($address,'103.207.68.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-142). ');
$ax += cidrblock($address,'103.208.220.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-143). ');
$ax += cidrblock($address,'103.226.228.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-144). ');
$ax += cidrblock($address,'103.227.156.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-145). ');
$ax += cidrblock($address,'103.227.208.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-146). ');
$ax += cidrblock($address,'103.243.19.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-147). ');
$ax += cidrblock($address,'103.243.72.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-148). ');
$ax += cidrblock($address,'103.243.144.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-149). ');
$ax += cidrblock($address,'103.243.204.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-150). ');
$ax += cidrblock($address,'104.37.3.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-151). ');
$ax += cidrblock($address,'104.37.5.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-152). ');
$ax += cidrblock($address,'104.152.64.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-153). ');
$ax += cidrblock($address,'104.167.30.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-154). ');
$ax += cidrblock($address,'104.167.217.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-155). ');
$ax += cidrblock($address,'104.171.0.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-156). ');
$ax += cidrblock($address,'104.171.4.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-157). ');
$ax += cidrblock($address,'104.171.9.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-158). ');
$ax += cidrblock($address,'104.171.10.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-159). ');
$ax += cidrblock($address,'104.171.13.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-160). ');
$ax += cidrblock($address,'104.171.14.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-161). ');
$ax += cidrblock($address,'104.193.183.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-162). ');
$ax += cidrblock($address,'104.193.184.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-163). ');
$ax += cidrblock($address,'104.194.203.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-164). ');
$ax += cidrblock($address,'104.194.216.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-165). ');
$ax += cidrblock($address,'104.195.64.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-166). ');
$ax += cidrblock($address,'104.195.80.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-167). ');
$ax += cidrblock($address,'104.195.84.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-168). ');
$ax += cidrblock($address,'104.200.16.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-169). ');
$ax += cidrblock($address,'104.207.69.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-170). ');
$ax += cidrblock($address,'104.207.76.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-171). ');
$ax += cidrblock($address,'104.207.83.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-172). ');
$ax += cidrblock($address,'104.207.84.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-173). ');
$ax += cidrblock($address,'104.222.131.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-174). ');
$ax += cidrblock($address,'104.222.140.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-175). ');
$ax += cidrblock($address,'104.222.145.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-176). ');
$ax += cidrblock($address,'104.222.149.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-177). ');
$ax += cidrblock($address,'104.237.91.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-178). ');
$ax += cidrblock($address,'104.237.93.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-179). ');
$ax += cidrblock($address,'104.237.128.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-180). ');
$ax += cidrblock($address,'104.238.51.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-181). ');
$ax += cidrblock($address,'104.238.57.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-182). ');
$ax += cidrblock($address,'104.238.59.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-183). ');
$ax += cidrblock($address,'104.243.245.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-184). ');
$ax += cidrblock($address,'104.243.249.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-185). ');
$ax += cidrblock($address,'104.243.253.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-186). ');
$ax += cidrblock($address,'104.245.12.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-187). ');
$ax += cidrblock($address,'104.249.128.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-188). ');
$ax += cidrblock($address,'104.250.172.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-189). ');
$ax += cidrblock($address,'104.250.179.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-190). ');
$ax += cidrblock($address,'104.250.183.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-191). ');
$ax += cidrblock($address,'104.251.239.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-192). ');
$ax += cidrblock($address,'107.153.20.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-193). ');
$ax += cidrblock($address,'107.168.32.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-194). ');
$ax += cidrblock($address,'107.168.48.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-195). ');
$ax += cidrblock($address,'107.168.70.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-196). ');
$ax += cidrblock($address,'107.168.80.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-197). ');
$ax += cidrblock($address,'108.167.162.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-198). ');
$ax += cidrblock($address,'108.168.128.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-199). ');
$ax += cidrblock($address,'108.174.144.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-200). ');
$ax += cidrblock($address,'108.174.154.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-201). ');
$ax += cidrblock($address,'108.174.156.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-202). ');
$ax += cidrblock($address,'108.175.147.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-203). ');
$ax += cidrblock($address,'108.175.148.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-204). ');
$ax += cidrblock($address,'108.175.150.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-205). ');
$ax += cidrblock($address,'108.175.152.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-206). ');
$ax += cidrblock($address,'108.175.157.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-207). ');
$ax += cidrblock($address,'108.175.158.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-208). ');
$ax += cidrblock($address,'108.229.0.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-209). ');
$ax += cidrblock($address,'109.73.228.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-210). ');
$ax += cidrblock($address,'109.73.234.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-211). ');
$ax += cidrblock($address,'109.199.117.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-212). ');
$ax += cidrblock($address,'109.199.119.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-213). ');
$ax += cidrblock($address,'109.199.122.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-214). ');
$ax += cidrblock($address,'109.199.126.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-215). ');
$ax += cidrblock($address,'115.124.32.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-216). ');
$ax += cidrblock($address,'116.213.44.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-217). ');
$ax += cidrblock($address,'119.18.48.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-218). ');
$ax += cidrblock($address,'119.18.53.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-219). ');
$ax += cidrblock($address,'119.18.56.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-220). ');
$ax += cidrblock($address,'119.81.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-221). ');
$ax += cidrblock($address,'122.10.103.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-222). ');
$ax += cidrblock($address,'122.128.96.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-223). ');
$ax += cidrblock($address,'124.108.23.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-224). ');
$ax += cidrblock($address,'129.33.138.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-225). ');
$ax += cidrblock($address,'129.33.243.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-226). ');
$ax += cidrblock($address,'129.35.158.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-227). ');
$ax += cidrblock($address,'129.35.176.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-228). ');
$ax += cidrblock($address,'129.35.180.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-229). ');
$ax += cidrblock($address,'129.35.182.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-230). ');
$ax += cidrblock($address,'129.35.190.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-231). ');
$ax += cidrblock($address,'129.35.236.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-232). ');
$ax += cidrblock($address,'129.35.238.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-233). ');
$ax += cidrblock($address,'129.41.128.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-234). ');
$ax += cidrblock($address,'129.41.181.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-235). ');
$ax += cidrblock($address,'129.41.184.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-236). ');
$ax += cidrblock($address,'129.41.222.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-237). ');
$ax += cidrblock($address,'129.41.224.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-238). ');
$ax += cidrblock($address,'129.42.18.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-239). ');
$ax += cidrblock($address,'129.42.20.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-240). ');
$ax += cidrblock($address,'134.168.0.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-241). ');
$ax += cidrblock($address,'138.204.168.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-242). ');
$ax += cidrblock($address,'142.147.95.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-243). ');
$ax += cidrblock($address,'146.88.128.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-244). ');
$ax += cidrblock($address,'146.88.135.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-245). ');
$ax += cidrblock($address,'147.75.130.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-246). ');
$ax += cidrblock($address,'147.75.132.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-247). ');
$ax += cidrblock($address,'149.75.192.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-248). ');
$ax += cidrblock($address,'153.92.41.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-249). ');
$ax += cidrblock($address,'153.92.43.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-250). ');
$ax += cidrblock($address,'153.92.44.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-251). ');
$ax += cidrblock($address,'153.92.46.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-252). ');
$ax += cidrblock($address,'154.16.96.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-253). ');
$ax += cidrblock($address,'155.254.246.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-254). ');
$ax += cidrblock($address,'158.85.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-255). ');
$ax += cidrblock($address,'159.8.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-256). ');
$ax += cidrblock($address,'159.100.176.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-257). ');
$ax += cidrblock($address,'159.100.184.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-258). ');
$ax += cidrblock($address,'159.100.188.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-259). ');
$ax += cidrblock($address,'159.100.190.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-260). ');
$ax += cidrblock($address,'159.122.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-261). ');
$ax += cidrblock($address,'159.253.128.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-262). ');
$ax += cidrblock($address,'161.202.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-263). ');
$ax += cidrblock($address,'162.210.48.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-264). ');
$ax += cidrblock($address,'162.246.184.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-265). ');
$ax += cidrblock($address,'162.253.144.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-266). ');
$ax += cidrblock($address,'162.254.160.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-267). ');
$ax += cidrblock($address,'165.212.98.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-268). ');
$ax += cidrblock($address,'165.212.240.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-269). ');
$ax += cidrblock($address,'167.160.113.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-270). ');
$ax += cidrblock($address,'168.1.0.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-271). ');
$ax += cidrblock($address,'168.1.128.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-272). ');
$ax += cidrblock($address,'168.227.36.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-273). ');
$ax += cidrblock($address,'169.38.64.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-274). ');
$ax += cidrblock($address,'169.44.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-275). ');
$ax += cidrblock($address,'169.45.0.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-276). ');
$ax += cidrblock($address,'169.45.64.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-277). ');
$ax += cidrblock($address,'169.45.128.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-278). ');
$ax += cidrblock($address,'169.46.0.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-279). ');
$ax += cidrblock($address,'169.50.0.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-280). ');
$ax += cidrblock($address,'169.50.128.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-281). ');
$ax += cidrblock($address,'169.53.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-282). ');
$ax += cidrblock($address,'169.54.0.0/15','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-283). ');
$ax += cidrblock($address,'169.56.128.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-284). ');
$ax += cidrblock($address,'169.57.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-285). ');
$ax += cidrblock($address,'170.224.168.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-286). ');
$ax += cidrblock($address,'170.224.170.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-287). ');
$ax += cidrblock($address,'170.224.208.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-288). ');
$ax += cidrblock($address,'172.81.110.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-289). ');
$ax += cidrblock($address,'172.94.3.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-290). ');
$ax += cidrblock($address,'172.94.4.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-291). ');
$ax += cidrblock($address,'172.94.6.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-292). ');
$ax += cidrblock($address,'172.94.27.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-293). ');
$ax += cidrblock($address,'172.94.29.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-294). ');
$ax += cidrblock($address,'172.94.39.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-295). ');
$ax += cidrblock($address,'172.94.46.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-296). ');
$ax += cidrblock($address,'172.94.48.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-297). ');
$ax += cidrblock($address,'172.94.82.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-298). ');
$ax += cidrblock($address,'172.94.84.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-299). ');
$ax += cidrblock($address,'172.94.86.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-300). ');
$ax += cidrblock($address,'172.94.88.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-301). ');
$ax += cidrblock($address,'172.94.94.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-302). ');
$ax += cidrblock($address,'172.94.100.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-303). ');
$ax += cidrblock($address,'172.94.103.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-304). ');
$ax += cidrblock($address,'172.94.104.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-305). ');
$ax += cidrblock($address,'172.94.111.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-306). ');
$ax += cidrblock($address,'172.94.116.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-307). ');
$ax += cidrblock($address,'172.94.118.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-308). ');
$ax += cidrblock($address,'172.94.120.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-309). ');
$ax += cidrblock($address,'172.111.135.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-310). ');
$ax += cidrblock($address,'172.111.137.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-311). ');
$ax += cidrblock($address,'172.111.139.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-312). ');
$ax += cidrblock($address,'172.111.142.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-313). ');
$ax += cidrblock($address,'172.111.145.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-314). ');
$ax += cidrblock($address,'172.111.147.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-315). ');
$ax += cidrblock($address,'172.111.153.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-316). ');
$ax += cidrblock($address,'172.111.155.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-317). ');
$ax += cidrblock($address,'172.111.161.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-318). ');
$ax += cidrblock($address,'172.111.162.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-319). ');
$ax += cidrblock($address,'172.111.164.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-320). ');
$ax += cidrblock($address,'172.111.167.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-321). ');
$ax += cidrblock($address,'172.111.168.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-322). ');
$ax += cidrblock($address,'172.111.172.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-323). ');
$ax += cidrblock($address,'172.111.176.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-324). ');
$ax += cidrblock($address,'172.111.178.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-325). ');
$ax += cidrblock($address,'172.111.180.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-326). ');
$ax += cidrblock($address,'172.111.186.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-327). ');
$ax += cidrblock($address,'172.111.189.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-328). ');
$ax += cidrblock($address,'172.111.192.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-329). ');
$ax += cidrblock($address,'172.111.236.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-330). ');
$ax += cidrblock($address,'172.111.240.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-331). ');
$ax += cidrblock($address,'173.192.0.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-332). ');
$ax += cidrblock($address,'173.192.128.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-333). ');
$ax += cidrblock($address,'173.192.192.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-334). ');
$ax += cidrblock($address,'173.192.224.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-335). ');
$ax += cidrblock($address,'173.192.240.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-336). ');
$ax += cidrblock($address,'173.192.244.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-337). ');
$ax += cidrblock($address,'173.192.248.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-338). ');
$ax += cidrblock($address,'173.193.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-339). ');
$ax += cidrblock($address,'173.239.207.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-340). ');
$ax += cidrblock($address,'173.244.192.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-341). ');
$ax += cidrblock($address,'173.244.194.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-342). ');
$ax += cidrblock($address,'173.244.196.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-343). ');
$ax += cidrblock($address,'173.244.199.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-344). ');
$ax += cidrblock($address,'173.244.203.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-345). ');
$ax += cidrblock($address,'173.244.204.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-346). ');
$ax += cidrblock($address,'173.244.210.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-347). ');
$ax += cidrblock($address,'173.244.212.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-348). ');
$ax += cidrblock($address,'173.244.216.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-349). ');
$ax += cidrblock($address,'173.244.218.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-350). ');
$ax += cidrblock($address,'173.244.220.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-351). ');
$ax += cidrblock($address,'173.255.132.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-352). ');
$ax += cidrblock($address,'173.255.136.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-353). ');
$ax += cidrblock($address,'173.255.192.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-354). ');
$ax += cidrblock($address,'174.36.0.0/15','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-355). ');
$ax += cidrblock($address,'174.120.0.0/14','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-356). ');
$ax += cidrblock($address,'174.127.64.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-357). ');
$ax += cidrblock($address,'174.127.68.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-358). ');
$ax += cidrblock($address,'174.127.71.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-359). ');
$ax += cidrblock($address,'174.127.72.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-360). ');
$ax += cidrblock($address,'174.127.76.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-361). ');
$ax += cidrblock($address,'174.127.78.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-362). ');
$ax += cidrblock($address,'174.127.80.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-363). ');
$ax += cidrblock($address,'174.127.85.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-364). ');
$ax += cidrblock($address,'174.127.86.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-365). ');
$ax += cidrblock($address,'174.127.88.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-366). ');
$ax += cidrblock($address,'174.127.90.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-367). ');
$ax += cidrblock($address,'174.127.92.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-368). ');
$ax += cidrblock($address,'174.127.96.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-369). ');
$ax += cidrblock($address,'174.132.0.0/15','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-370). ');
$ax += cidrblock($address,'175.158.105.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-371). ');
$ax += cidrblock($address,'175.158.107.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-372). ');
$ax += cidrblock($address,'176.126.68.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-373). ');
$ax += cidrblock($address,'176.126.72.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-374). ');
$ax += cidrblock($address,'177.136.8.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-375). ');
$ax += cidrblock($address,'179.61.246.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-376). ');
$ax += cidrblock($address,'179.61.250.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-377). ');
$ax += cidrblock($address,'180.235.137.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-378). ');
$ax += cidrblock($address,'180.235.138.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-379). ');
$ax += cidrblock($address,'181.41.128.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-380). ');
$ax += cidrblock($address,'181.41.193.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-381). ');
$ax += cidrblock($address,'181.224.149.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-382). ');
$ax += cidrblock($address,'181.224.150.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-383). ');
$ax += cidrblock($address,'181.224.156.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-384). ');
$ax += cidrblock($address,'184.172.0.0/15','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-385). ');
$ax += cidrblock($address,'185.10.228.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-386). ');
$ax += cidrblock($address,'185.13.56.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-387). ');
$ax += cidrblock($address,'185.21.132.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-388). ');
$ax += cidrblock($address,'185.51.164.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-389). ');
$ax += cidrblock($address,'185.62.236.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-390). ');
$ax += cidrblock($address,'185.74.47.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-391). ');
$ax += cidrblock($address,'185.99.135.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-392). ');
$ax += cidrblock($address,'185.106.204.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-393). ');
$ax += cidrblock($address,'185.115.241.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-394). ');
$ax += cidrblock($address,'185.123.96.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-395). ');
$ax += cidrblock($address,'185.147.58.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-396). ');
$ax += cidrblock($address,'188.72.100.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-397). ');
$ax += cidrblock($address,'188.214.40.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-398). ');
$ax += cidrblock($address,'188.240.32.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-399). ');
$ax += cidrblock($address,'190.105.194.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-400). ');
$ax += cidrblock($address,'191.96.49.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-401). ');
$ax += cidrblock($address,'191.96.64.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-402). ');
$ax += cidrblock($address,'191.96.103.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-403). ');
$ax += cidrblock($address,'191.96.105.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-404). ');
$ax += cidrblock($address,'191.101.56.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-405). ');
$ax += cidrblock($address,'191.101.63.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-406). ');
$ax += cidrblock($address,'191.101.135.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-407). ');
$ax += cidrblock($address,'191.101.179.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-408). ');
$ax += cidrblock($address,'192.40.176.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-409). ');
$ax += cidrblock($address,'192.77.241.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-410). ');
$ax += cidrblock($address,'192.81.139.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-411). ');
$ax += cidrblock($address,'192.86.39.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-412). ');
$ax += cidrblock($address,'192.155.192.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-413). ');
$ax += cidrblock($address,'192.156.219.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-414). ');
$ax += cidrblock($address,'192.169.48.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-415). ');
$ax += cidrblock($address,'192.200.160.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-416). ');
$ax += cidrblock($address,'192.230.46.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-417). ');
$ax += cidrblock($address,'192.240.209.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-418). ');
$ax += cidrblock($address,'192.240.215.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-419). ');
$ax += cidrblock($address,'192.253.242.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-420). ');
$ax += cidrblock($address,'192.253.248.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-421). ');
$ax += cidrblock($address,'192.253.252.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-422). ');
$ax += cidrblock($address,'192.255.0.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-423). ');
$ax += cidrblock($address,'196.45.123.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-424). ');
$ax += cidrblock($address,'198.11.192.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-425). ');
$ax += cidrblock($address,'198.23.64.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-426). ');
$ax += cidrblock($address,'198.58.80.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-427). ');
$ax += cidrblock($address,'198.58.82.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-428). ');
$ax += cidrblock($address,'198.58.84.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-429). ');
$ax += cidrblock($address,'198.58.86.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-430). ');
$ax += cidrblock($address,'198.58.88.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-431). ');
$ax += cidrblock($address,'198.58.96.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-432). ');
$ax += cidrblock($address,'198.105.221.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-433). ');
$ax += cidrblock($address,'198.105.222.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-434). ');
$ax += cidrblock($address,'198.144.16.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-435). ');
$ax += cidrblock($address,'198.144.24.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-436). ');
$ax += cidrblock($address,'198.144.28.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-437). ');
$ax += cidrblock($address,'198.144.30.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-438). ');
$ax += cidrblock($address,'198.252.64.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-439). ');
$ax += cidrblock($address,'198.252.96.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-440). ');
$ax += cidrblock($address,'198.252.100.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-441). ');
$ax += cidrblock($address,'198.252.104.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-442). ');
$ax += cidrblock($address,'199.166.34.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-443). ');
$ax += cidrblock($address,'199.167.226.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-444). ');
$ax += cidrblock($address,'199.185.180.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-445). ');
$ax += cidrblock($address,'199.187.172.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-446). ');
$ax += cidrblock($address,'199.195.192.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-447). ');
$ax += cidrblock($address,'199.244.72.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-448). ');
$ax += cidrblock($address,'199.255.32.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-449). ');
$ax += cidrblock($address,'202.5.220.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-450). ');
$ax += cidrblock($address,'202.5.223.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-451). ');
$ax += cidrblock($address,'202.81.5.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-452). ');
$ax += cidrblock($address,'202.170.196.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-453). ');
$ax += cidrblock($address,'203.27.26.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-454). ');
$ax += cidrblock($address,'203.57.74.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-455). ');
$ax += cidrblock($address,'203.76.244.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-456). ');
$ax += cidrblock($address,'203.76.246.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-457). ');
$ax += cidrblock($address,'205.201.138.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-458). ');
$ax += cidrblock($address,'206.190.155.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-459). ');
$ax += cidrblock($address,'206.190.156.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-460). ');
$ax += cidrblock($address,'206.217.192.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-461). ');
$ax += cidrblock($address,'206.217.200.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-462). ');
$ax += cidrblock($address,'206.217.208.0/20','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-463). ');
$ax += cidrblock($address,'206.253.232.0/21','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-464). ');
$ax += cidrblock($address,'206.253.248.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-465). ');
$ax += cidrblock($address,'207.44.128.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-466). ');
$ax += cidrblock($address,'207.189.184.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-467). ');
$ax += cidrblock($address,'207.218.192.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-468). ');
$ax += cidrblock($address,'208.43.0.0/16','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-469). ');
$ax += cidrblock($address,'208.73.4.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-470). ');
$ax += cidrblock($address,'208.73.7.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-471). ');
$ax += cidrblock($address,'208.75.56.0/22','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-472). ');
$ax += cidrblock($address,'208.101.0.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-473). ');
$ax += cidrblock($address,'209.62.0.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-474). ');
$ax += cidrblock($address,'209.85.0.0/17','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-475). ');
$ax += cidrblock($address,'209.95.57.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-476). ');
$ax += cidrblock($address,'209.95.58.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-477). ');
$ax += cidrblock($address,'209.95.60.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-478). ');
$ax += cidrblock($address,'209.95.62.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-479). ');
$ax += cidrblock($address,'210.16.120.0/23','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-480). ');
$ax += cidrblock($address,'213.52.131.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-481). ');
$ax += cidrblock($address,'216.12.192.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-482). ');
$ax += cidrblock($address,'216.40.192.0/18','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-483). ');
$ax += cidrblock($address,'216.127.64.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-484). ');
$ax += cidrblock($address,'216.185.96.0/19','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-485). ');
$ax += cidrblock($address,'216.234.250.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-486). ');
$ax += cidrblock($address,'216.239.104.0/24','SoftLayer Technologies; Access denied (ASN-SOFTLAYER-487). ');


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


// JPMorgan Chase & Co
// AS7743 (updated 2016.05.31)
$ax += cidrblock($address,'159.53.0.0/16','JPMorgan Chase & Co; Access denied (ASN-JPMORGAN-0). ');
$ax += cidrblock($address,'199.253.243.0/24','JPMorgan Chase & Co; Access denied (ASN-JPMORGAN-1). ');
$ax += cidrblock($address,'199.253.244.0/23','JPMorgan Chase & Co; Access denied (ASN-JPMORGAN-2). ');
$ax += cidrblock($address,'209.211.208.0/22','JPMorgan Chase & Co; Access denied (ASN-JPMORGAN-3). ');


// Akamai Technologies (updated 2016.06.02)
// AS12222, AS16625, AS18680, AS18717, AS20940, AS21342, AS21399, AS23454,
// AS23903, AS24319, AS31108, AS31110, AS32787, AS33905, AS34164, AS35204,
// AS35993, AS35994, AS39836, AS43639, AS48163, AS49846, AS393234.
$ax += cidrblock($address,'2.16.0.0/13','Akamai Technologies; Access denied (ASN-AKAMAI-000). ');
$ax += cidrblock($address,'12.171.92.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-001). ');
$ax += cidrblock($address,'23.0.0.0/12','Akamai Technologies; Access denied (ASN-AKAMAI-002). ');
$ax += cidrblock($address,'23.32.0.0/11','Akamai Technologies; Access denied (ASN-AKAMAI-003). ');
$ax += cidrblock($address,'23.64.0.0/14','Akamai Technologies; Access denied (ASN-AKAMAI-004). ');
$ax += cidrblock($address,'23.72.0.0/13','Akamai Technologies; Access denied (ASN-AKAMAI-005). ');
$ax += cidrblock($address,'23.192.0.0/11','Akamai Technologies; Access denied (ASN-AKAMAI-006). ');
$ax += cidrblock($address,'24.143.207.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-007). ');
$ax += cidrblock($address,'41.193.163.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-008). ');
$ax += cidrblock($address,'43.254.120.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-009). ');
$ax += cidrblock($address,'59.151.128.0/18','Akamai Technologies; Access denied (ASN-AKAMAI-010). ');
$ax += cidrblock($address,'60.254.128.0/18','Akamai Technologies; Access denied (ASN-AKAMAI-011). ');
$ax += cidrblock($address,'62.172.140.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-012). ');
$ax += cidrblock($address,'62.209.41.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-013). ');
$ax += cidrblock($address,'63.144.176.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-014). ');
$ax += cidrblock($address,'63.146.70.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-015). ');
$ax += cidrblock($address,'63.151.137.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-016). ');
$ax += cidrblock($address,'63.208.195.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-017). ');
$ax += cidrblock($address,'63.217.8.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-018). ');
$ax += cidrblock($address,'63.217.232.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-019). ');
$ax += cidrblock($address,'63.227.135.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-020). ');
$ax += cidrblock($address,'63.233.60.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-021). ');
$ax += cidrblock($address,'63.233.224.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-022). ');
$ax += cidrblock($address,'63.239.232.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-023). ');
$ax += cidrblock($address,'63.251.46.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-024). ');
$ax += cidrblock($address,'63.251.64.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-025). ');
$ax += cidrblock($address,'64.86.133.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-026). ');
$ax += cidrblock($address,'64.94.46.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-027). ');
$ax += cidrblock($address,'64.145.72.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-028). ');
$ax += cidrblock($address,'64.145.87.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-029). ');
$ax += cidrblock($address,'65.116.164.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-030). ');
$ax += cidrblock($address,'65.122.93.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-031). ');
$ax += cidrblock($address,'66.150.54.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-032). ');
$ax += cidrblock($address,'66.150.108.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-033). ');
$ax += cidrblock($address,'66.171.227.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-034). ');
$ax += cidrblock($address,'66.171.234.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-035). ');
$ax += cidrblock($address,'66.198.8.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-036). ');
$ax += cidrblock($address,'67.131.232.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-037). ');
$ax += cidrblock($address,'67.220.142.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-038). ');
$ax += cidrblock($address,'69.25.247.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-039). ');
$ax += cidrblock($address,'69.31.20.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-040). ');
$ax += cidrblock($address,'69.31.57.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-041). ');
$ax += cidrblock($address,'69.31.106.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-042). ');
$ax += cidrblock($address,'69.192.0.0/16','Akamai Technologies; Access denied (ASN-AKAMAI-043). ');
$ax += cidrblock($address,'72.52.0.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-044). ');
$ax += cidrblock($address,'72.52.2.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-045). ');
$ax += cidrblock($address,'72.52.4.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-046). ');
$ax += cidrblock($address,'72.52.8.0/21','Akamai Technologies; Access denied (ASN-AKAMAI-047). ');
$ax += cidrblock($address,'72.52.16.0/20','Akamai Technologies; Access denied (ASN-AKAMAI-048). ');
$ax += cidrblock($address,'72.52.32.0/21','Akamai Technologies; Access denied (ASN-AKAMAI-049). ');
$ax += cidrblock($address,'72.52.40.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-050). ');
$ax += cidrblock($address,'72.52.44.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-051). ');
$ax += cidrblock($address,'72.52.46.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-052). ');
$ax += cidrblock($address,'72.52.48.0/21','Akamai Technologies; Access denied (ASN-AKAMAI-053). ');
$ax += cidrblock($address,'72.52.56.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-054). ');
$ax += cidrblock($address,'72.52.60.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-055). ');
$ax += cidrblock($address,'72.246.0.0/15','Akamai Technologies; Access denied (ASN-AKAMAI-056). ');
$ax += cidrblock($address,'74.201.74.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-057). ');
$ax += cidrblock($address,'75.98.76.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-058). ');
$ax += cidrblock($address,'80.65.251.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-059). ');
$ax += cidrblock($address,'80.67.64.0/19','Akamai Technologies; Access denied (ASN-AKAMAI-060). ');
$ax += cidrblock($address,'81.93.191.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-061). ');
$ax += cidrblock($address,'81.174.71.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-062). ');
$ax += cidrblock($address,'82.112.106.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-063). ');
$ax += cidrblock($address,'83.217.226.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-064). ');
$ax += cidrblock($address,'83.217.247.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-065). ');
$ax += cidrblock($address,'84.53.128.0/18','Akamai Technologies; Access denied (ASN-AKAMAI-066). ');
$ax += cidrblock($address,'88.221.0.0/16','Akamai Technologies; Access denied (ASN-AKAMAI-067). ');
$ax += cidrblock($address,'92.122.0.0/15','Akamai Technologies; Access denied (ASN-AKAMAI-068). ');
$ax += cidrblock($address,'93.191.168.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-069). ');
$ax += cidrblock($address,'93.191.172.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-070). ');
$ax += cidrblock($address,'93.191.175.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-071). ');
$ax += cidrblock($address,'95.100.0.0/15','Akamai Technologies; Access denied (ASN-AKAMAI-072). ');
$ax += cidrblock($address,'96.6.0.0/15','Akamai Technologies; Access denied (ASN-AKAMAI-073). ');
$ax += cidrblock($address,'96.16.0.0/15','Akamai Technologies; Access denied (ASN-AKAMAI-074). ');
$ax += cidrblock($address,'103.238.148.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-075). ');
$ax += cidrblock($address,'104.64.0.0/10','Akamai Technologies; Access denied (ASN-AKAMAI-076). ');
$ax += cidrblock($address,'107.191.134.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-077). ');
$ax += cidrblock($address,'111.108.66.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-078). ');
$ax += cidrblock($address,'114.141.72.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-079). ');
$ax += cidrblock($address,'118.214.0.0/16','Akamai Technologies; Access denied (ASN-AKAMAI-080). ');
$ax += cidrblock($address,'118.215.0.0/17','Akamai Technologies; Access denied (ASN-AKAMAI-081). ');
$ax += cidrblock($address,'118.215.128.0/18','Akamai Technologies; Access denied (ASN-AKAMAI-082). ');
$ax += cidrblock($address,'122.56.36.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-083). ');
$ax += cidrblock($address,'122.252.32.0/19','Akamai Technologies; Access denied (ASN-AKAMAI-084). ');
$ax += cidrblock($address,'122.252.128.0/20','Akamai Technologies; Access denied (ASN-AKAMAI-085). ');
$ax += cidrblock($address,'124.155.192.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-086). ');
$ax += cidrblock($address,'125.56.128.0/17','Akamai Technologies; Access denied (ASN-AKAMAI-087). ');
$ax += cidrblock($address,'125.252.192.0/18','Akamai Technologies; Access denied (ASN-AKAMAI-088). ');
$ax += cidrblock($address,'128.177.166.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-089). ');
$ax += cidrblock($address,'128.177.188.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-090). ');
$ax += cidrblock($address,'128.241.89.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-091). ');
$ax += cidrblock($address,'128.241.91.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-092). ');
$ax += cidrblock($address,'128.241.221.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-093). ');
$ax += cidrblock($address,'141.93.12.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-094). ');
$ax += cidrblock($address,'145.15.41.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-095). ');
$ax += cidrblock($address,'157.203.50.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-096). ');
$ax += cidrblock($address,'157.238.74.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-097). ');
$ax += cidrblock($address,'165.254.32.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-098). ');
$ax += cidrblock($address,'165.254.40.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-99). ');
$ax += cidrblock($address,'165.254.52.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-100). ');
$ax += cidrblock($address,'165.254.94.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-101). ');
$ax += cidrblock($address,'165.254.99.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-102). ');
$ax += cidrblock($address,'165.254.127.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-103). ');
$ax += cidrblock($address,'165.254.133.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-104). ');
$ax += cidrblock($address,'165.254.156.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-105). ');
$ax += cidrblock($address,'165.254.204.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-106). ');
$ax += cidrblock($address,'168.143.240.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-107). ');
$ax += cidrblock($address,'168.143.242.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-108). ');
$ax += cidrblock($address,'168.143.252.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-109). ');
$ax += cidrblock($address,'172.224.0.0/12','Akamai Technologies; Access denied (ASN-AKAMAI-110). ');
$ax += cidrblock($address,'173.205.6.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-111). ');
$ax += cidrblock($address,'173.205.78.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-112). ');
$ax += cidrblock($address,'173.222.0.0/15','Akamai Technologies; Access denied (ASN-AKAMAI-113). ');
$ax += cidrblock($address,'182.51.200.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-114). ');
$ax += cidrblock($address,'184.24.0.0/13','Akamai Technologies; Access denied (ASN-AKAMAI-115). ');
$ax += cidrblock($address,'184.50.0.0/15','Akamai Technologies; Access denied (ASN-AKAMAI-116). ');
$ax += cidrblock($address,'184.84.0.0/14','Akamai Technologies; Access denied (ASN-AKAMAI-117). ');
$ax += cidrblock($address,'190.2.175.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-118). ');
$ax += cidrblock($address,'192.204.3.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-119). ');
$ax += cidrblock($address,'192.204.4.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-120). ');
$ax += cidrblock($address,'193.19.90.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-121). ');
$ax += cidrblock($address,'193.21.248.0/21','Akamai Technologies; Access denied (ASN-AKAMAI-122). ');
$ax += cidrblock($address,'193.47.187.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-123). ');
$ax += cidrblock($address,'193.108.88.0/21','Akamai Technologies; Access denied (ASN-AKAMAI-124). ');
$ax += cidrblock($address,'193.108.152.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-125). ');
$ax += cidrblock($address,'193.200.156.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-126). ');
$ax += cidrblock($address,'194.34.8.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-127). ');
$ax += cidrblock($address,'194.34.10.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-128). ');
$ax += cidrblock($address,'194.50.35.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-129). ');
$ax += cidrblock($address,'194.75.128.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-130). ');
$ax += cidrblock($address,'194.88.65.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-131). ');
$ax += cidrblock($address,'195.171.195.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-132). ');
$ax += cidrblock($address,'195.171.220.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-133). ');
$ax += cidrblock($address,'195.245.124.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-134). ');
$ax += cidrblock($address,'196.14.124.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-135). ');
$ax += cidrblock($address,'196.26.74.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-136). ');
$ax += cidrblock($address,'196.35.224.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-137). ');
$ax += cidrblock($address,'197.97.46.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-138). ');
$ax += cidrblock($address,'198.87.51.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-139). ');
$ax += cidrblock($address,'198.144.112.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-140). ');
$ax += cidrblock($address,'200.14.44.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-141). ');
$ax += cidrblock($address,'200.25.52.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-142). ');
$ax += cidrblock($address,'200.136.36.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-143). ');
$ax += cidrblock($address,'201.220.10.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-144). ');
$ax += cidrblock($address,'203.69.138.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-145). ');
$ax += cidrblock($address,'203.69.141.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-146). ');
$ax += cidrblock($address,'203.198.20.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-147). ');
$ax += cidrblock($address,'204.0.54.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-148). ');
$ax += cidrblock($address,'204.2.187.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-149). ');
$ax += cidrblock($address,'204.2.199.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-150). ');
$ax += cidrblock($address,'204.2.215.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-151). ');
$ax += cidrblock($address,'204.8.48.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-152). ');
$ax += cidrblock($address,'204.10.28.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-153). ');
$ax += cidrblock($address,'204.93.38.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-154). ');
$ax += cidrblock($address,'204.93.40.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-155). ');
$ax += cidrblock($address,'204.95.24.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-156). ');
$ax += cidrblock($address,'205.173.39.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-157). ');
$ax += cidrblock($address,'206.161.222.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-158). ');
$ax += cidrblock($address,'206.207.84.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-159). ');
$ax += cidrblock($address,'206.239.100.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-160). ');
$ax += cidrblock($address,'207.109.111.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-161). ');
$ax += cidrblock($address,'207.203.28.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-162). ');
$ax += cidrblock($address,'207.203.30.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-163). ');
$ax += cidrblock($address,'208.50.241.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-164). ');
$ax += cidrblock($address,'208.185.54.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-165). ');
$ax += cidrblock($address,'209.65.14.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-166). ');
$ax += cidrblock($address,'209.107.209.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-167). ');
$ax += cidrblock($address,'209.112.14.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-168). ');
$ax += cidrblock($address,'209.200.128.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-169). ');
$ax += cidrblock($address,'209.200.131.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-170). ');
$ax += cidrblock($address,'209.200.132.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-171). ');
$ax += cidrblock($address,'209.200.134.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-172). ');
$ax += cidrblock($address,'209.200.136.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-173). ');
$ax += cidrblock($address,'209.200.140.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-174). ');
$ax += cidrblock($address,'209.200.142.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-175). ');
$ax += cidrblock($address,'209.200.144.0/21','Akamai Technologies; Access denied (ASN-AKAMAI-176). ');
$ax += cidrblock($address,'209.200.152.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-177). ');
$ax += cidrblock($address,'209.200.156.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-178). ');
$ax += cidrblock($address,'209.200.158.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-179). ');
$ax += cidrblock($address,'209.200.160.0/20','Akamai Technologies; Access denied (ASN-AKAMAI-180). ');
$ax += cidrblock($address,'209.200.176.0/21','Akamai Technologies; Access denied (ASN-AKAMAI-181). ');
$ax += cidrblock($address,'209.200.184.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-182). ');
$ax += cidrblock($address,'209.200.186.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-183). ');
$ax += cidrblock($address,'209.200.188.0/22','Akamai Technologies; Access denied (ASN-AKAMAI-184). ');
$ax += cidrblock($address,'209.211.201.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-185). ');
$ax += cidrblock($address,'209.234.252.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-186). ');
$ax += cidrblock($address,'210.54.146.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-187). ');
$ax += cidrblock($address,'210.55.181.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-188). ');
$ax += cidrblock($address,'210.61.248.0/23','Akamai Technologies; Access denied (ASN-AKAMAI-189). ');
$ax += cidrblock($address,'212.239.17.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-190). ');
$ax += cidrblock($address,'213.198.96.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-191). ');
$ax += cidrblock($address,'216.12.45.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-192). ');
$ax += cidrblock($address,'216.151.176.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-193). ');
$ax += cidrblock($address,'216.151.187.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-194). ');
$ax += cidrblock($address,'216.151.190.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-195). ');
$ax += cidrblock($address,'216.206.30.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-196). ');
$ax += cidrblock($address,'216.206.36.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-197). ');
$ax += cidrblock($address,'216.238.147.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-198). ');
$ax += cidrblock($address,'219.76.11.0/24','Akamai Technologies; Access denied (ASN-AKAMAI-199). ');


// Portlane Networks AB (updated 2016.01.20 / checked 2016.03.12)
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


// Inter Connects Inc (updated 2016.05.21)
// AS57858, AS57972, AS60485
$ax += cidrblock($address,'5.34.240.0/21','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-00). ');
$ax += cidrblock($address,'5.153.232.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-01). ');
$ax += cidrblock($address,'5.153.234.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-02). ');
$ax += cidrblock($address,'5.153.238.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-03). ');
$ax += cidrblock($address,'5.157.0.0/22','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-04). ');
$ax += cidrblock($address,'5.157.11.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-05). ');
$ax += cidrblock($address,'5.157.14.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-06). ');
$ax += cidrblock($address,'5.157.16.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-07). ');
$ax += cidrblock($address,'5.157.36.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-08). ');
$ax += cidrblock($address,'5.157.38.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-09). ');
$ax += cidrblock($address,'5.157.40.0/22','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-10). ');
$ax += cidrblock($address,'5.157.44.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-11). ');
$ax += cidrblock($address,'5.157.48.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-12). ');
$ax += cidrblock($address,'5.157.50.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-13). ');
$ax += cidrblock($address,'5.157.53.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-14). ');
$ax += cidrblock($address,'5.157.54.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-15). ');
$ax += cidrblock($address,'37.72.184.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-16). ');
$ax += cidrblock($address,'37.72.188.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-17). ');
$ax += cidrblock($address,'37.72.190.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-18). ');
$ax += cidrblock($address,'37.203.209.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-19). ');
$ax += cidrblock($address,'37.203.212.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-20). ');
$ax += cidrblock($address,'37.203.214.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-21). ');
$ax += cidrblock($address,'46.29.248.0/21','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-22). ');
$ax += cidrblock($address,'91.108.176.0/22','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-23). ');
$ax += cidrblock($address,'91.108.180.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-24). ');
$ax += cidrblock($address,'91.108.183.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-25). ');
$ax += cidrblock($address,'130.185.152.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-26). ');
$ax += cidrblock($address,'130.185.155.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-27). ');
$ax += cidrblock($address,'130.185.156.0/22','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-28). ');
$ax += cidrblock($address,'151.237.176.0/22','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-29). ');
$ax += cidrblock($address,'151.237.180.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-30). ');
$ax += cidrblock($address,'151.237.184.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-31). ');
$ax += cidrblock($address,'151.237.186.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-32). ');
$ax += cidrblock($address,'151.237.188.0/22','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-33). ');
$ax += cidrblock($address,'165.231.2.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-34). ');
$ax += cidrblock($address,'165.231.20.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-35). ');
$ax += cidrblock($address,'165.231.80.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-36). ');
$ax += cidrblock($address,'165.231.83.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-37). ');
$ax += cidrblock($address,'165.231.84.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-38). ');
$ax += cidrblock($address,'165.231.87.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-39). ');
$ax += cidrblock($address,'165.231.90.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-40). ');
$ax += cidrblock($address,'165.231.92.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-41). ');
$ax += cidrblock($address,'165.231.95.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-42). ');
$ax += cidrblock($address,'176.61.136.0/21','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-43). ');
$ax += cidrblock($address,'178.216.48.0/22','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-44). ');
$ax += cidrblock($address,'178.216.52.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-45). ');
$ax += cidrblock($address,'178.216.54.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-46). ');
$ax += cidrblock($address,'185.3.132.0/22','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-47). ');
$ax += cidrblock($address,'196.196.2.0/23','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-48). ');
$ax += cidrblock($address,'196.196.16.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-49). ');
$ax += cidrblock($address,'196.196.34.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-50). ');
$ax += cidrblock($address,'196.196.37.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-51). ');
$ax += cidrblock($address,'196.196.39.0/24','Inter Connects Inc, not an access provider ISP (ASN-INTERCONNECTS-52). ');


// Hurricane Electric, not an access provider ISP.
// Too many infected and hostile servers. Good folks otherwise (Free DYN-DNS service SBS enjoys)
// AS6939 (updated 2016.06.09)
$ax += cidrblock($address,'5.152.177.0/24','Hurricane Electric (ASN-HE1-00). ');
$ax += cidrblock($address,'5.152.179.0/24','Hurricane Electric (ASN-HE1-01). ');
$ax += cidrblock($address,'5.152.180.0/22','Hurricane Electric (ASN-HE1-02). ');
$ax += cidrblock($address,'27.50.32.0/21','Hurricane Electric (ASN-HE1-03). ');
$ax += cidrblock($address,'37.16.72.0/21','Hurricane Electric (ASN-HE1-04). ');
$ax += cidrblock($address,'45.33.128.0/20','Hurricane Electric (ASN-HE1-05). ');
$ax += cidrblock($address,'45.40.96.0/19','Hurricane Electric (ASN-HE1-06). ');
$ax += cidrblock($address,'64.62.128.0/17','Hurricane Electric (ASN-HE1-07). ');
$ax += cidrblock($address,'64.71.128.0/18','Hurricane Electric (ASN-HE1-08). ');
$ax += cidrblock($address,'64.187.96.0/19','Hurricane Electric (ASN-HE1-09). ');
$ax += cidrblock($address,'65.19.128.0/18','Hurricane Electric (ASN-HE1-10). ');
$ax += cidrblock($address,'65.49.0.0/17','Hurricane Electric (ASN-HE1-11). ');
if (cidrblock($address,'65.49.67.0/24','') && $ax === 1 && inmatch($whyblockout,'(ASN-HE1-11)','')) {
    $ax = 0;
    $whyblockout .= 'Access provider block bypass (BYP-ASN-HE1-11). ';
}
$ax += cidrblock($address,'66.160.128.0/18','Hurricane Electric (ASN-HE1-12). ');
$ax += cidrblock($address,'66.160.192.0/20','Hurricane Electric (ASN-HE1-13). ');
$ax += cidrblock($address,'66.178.176.0/20','Hurricane Electric (ASN-HE1-14). ');
$ax += cidrblock($address,'66.220.0.0/19','Hurricane Electric (ASN-HE1-15). ');
$ax += cidrblock($address,'70.35.16.0/21','Hurricane Electric (ASN-HE1-16). ');
$ax += cidrblock($address,'72.52.64.0/18','Hurricane Electric (ASN-HE1-17). ');
$ax += cidrblock($address,'74.82.0.0/18','Hurricane Electric (ASN-HE1-18). ');
$ax += cidrblock($address,'74.113.68.0/22','Hurricane Electric (ASN-HE1-19). ');
$ax += cidrblock($address,'74.121.104.0/22','Hurricane Electric (ASN-HE1-20). ');
$ax += cidrblock($address,'98.158.224.0/20','Hurricane Electric (ASN-HE1-21). ');
$ax += cidrblock($address,'103.193.186.0/23','Hurricane Electric (ASN-HE1-22). ');
$ax += cidrblock($address,'103.249.0.0/24','Hurricane Electric (ASN-HE1-23). ');
$ax += cidrblock($address,'104.36.120.0/22','Hurricane Electric (ASN-HE1-24). ');
$ax += cidrblock($address,'104.129.240.0/20','Hurricane Electric (ASN-HE1-25). ');
$ax += cidrblock($address,'104.193.248.0/22','Hurricane Electric (ASN-HE1-26). ');
$ax += cidrblock($address,'104.218.36.0/22','Hurricane Electric (ASN-HE1-27). ');
$ax += cidrblock($address,'104.255.240.0/21','Hurricane Electric (ASN-HE1-28). ');
$ax += cidrblock($address,'107.178.32.0/20','Hurricane Electric (ASN-HE1-29). ');
$ax += cidrblock($address,'124.252.252.0/23','Hurricane Electric (ASN-HE1-30). ');
$ax += cidrblock($address,'148.51.0.0/16','Hurricane Electric (ASN-HE1-31). ');
$ax += cidrblock($address,'157.52.32.0/20','Hurricane Electric (ASN-HE1-32). ');
$ax += cidrblock($address,'162.219.48.0/23','Hurricane Electric (ASN-HE1-33). ');
$ax += cidrblock($address,'162.219.50.0/24','Hurricane Electric (ASN-HE1-34). ');
$ax += cidrblock($address,'162.247.12.0/22','Hurricane Electric (ASN-HE1-35). ');
$ax += cidrblock($address,'162.247.75.0/24','Hurricane Electric (ASN-HE1-36). ');
$ax += cidrblock($address,'162.249.152.0/22','Hurricane Electric (ASN-HE1-37). ');
$ax += cidrblock($address,'172.96.112.0/24','Hurricane Electric (ASN-HE1-38). ');
$ax += cidrblock($address,'184.75.240.0/21','Hurricane Electric (ASN-HE1-39). ');
$ax += cidrblock($address,'184.104.0.0/15','Hurricane Electric (ASN-HE1-40). ');
$ax += cidrblock($address,'185.101.97.0/24','Hurricane Electric (ASN-HE1-41). ');
$ax += cidrblock($address,'185.114.36.0/24','Hurricane Electric (ASN-HE1-42). ');
$ax += cidrblock($address,'191.101.245.0/24','Hurricane Electric (ASN-HE1-43). ');
$ax += cidrblock($address,'192.52.69.0/24','Hurricane Electric (ASN-HE1-44). ');
$ax += cidrblock($address,'192.52.250.0/23','Hurricane Electric (ASN-HE1-45). ');
$ax += cidrblock($address,'192.81.196.0/22','Hurricane Electric (ASN-HE1-46). ');
$ax += cidrblock($address,'192.88.99.0/24','Hurricane Electric (ASN-HE1-47). ');
$ax += cidrblock($address,'192.132.94.0/24','Hurricane Electric (ASN-HE1-49). ');
$ax += cidrblock($address,'192.136.112.0/24','Hurricane Electric (ASN-HE1-50). ');
$ax += cidrblock($address,'192.156.200.0/24','Hurricane Electric (ASN-HE1-51). ');
$ax += cidrblock($address,'192.190.255.0/24','Hurricane Electric (ASN-HE1-52). ');
$ax += cidrblock($address,'193.142.62.0/24','Hurricane Electric (ASN-HE1-53). ');
$ax += cidrblock($address,'198.36.120.0/21','Hurricane Electric (ASN-HE1-54). ');
$ax += cidrblock($address,'198.102.73.0/24','Hurricane Electric (ASN-HE1-55). ');
$ax += cidrblock($address,'199.4.150.0/24','Hurricane Electric (ASN-HE1-56). ');
$ax += cidrblock($address,'199.16.200.0/21','Hurricane Electric (ASN-HE1-57). ');
$ax += cidrblock($address,'199.34.120.0/21','Hurricane Electric (ASN-HE1-58). ');
$ax += cidrblock($address,'199.74.248.0/24','Hurricane Electric (ASN-HE1-59). ');
$ax += cidrblock($address,'199.88.158.0/24','Hurricane Electric (ASN-HE1-60). ');
$ax += cidrblock($address,'199.233.90.0/24','Hurricane Electric (ASN-HE1-61). ');
$ax += cidrblock($address,'199.233.198.0/23','Hurricane Electric (ASN-HE1-62). ');
$ax += cidrblock($address,'199.245.105.0/24','Hurricane Electric (ASN-HE1-63). ');
$ax += cidrblock($address,'203.12.6.0/24','Hurricane Electric (ASN-HE1-64). ');
$ax += cidrblock($address,'203.99.142.0/24','Hurricane Electric (ASN-HE1-65). ');
$ax += cidrblock($address,'204.10.104.0/21','Hurricane Electric (ASN-HE1-66). ');
$ax += cidrblock($address,'204.14.104.0/21','Hurricane Electric (ASN-HE1-67). ');
$ax += cidrblock($address,'204.187.91.0/24','Hurricane Electric (ASN-HE1-68). ');
$ax += cidrblock($address,'204.238.49.0/24','Hurricane Electric (ASN-HE1-69). ');
$ax += cidrblock($address,'205.159.239.0/24','Hurricane Electric (ASN-HE1-70). ');
$ax += cidrblock($address,'205.166.121.0/24','Hurricane Electric (ASN-HE1-71). ');
$ax += cidrblock($address,'206.108.49.0/24','Hurricane Electric (ASN-HE1-72). ');
$ax += cidrblock($address,'206.108.51.0/24','Hurricane Electric (ASN-HE1-73). ');
$ax += cidrblock($address,'206.108.55.0/24','Hurricane Electric (ASN-HE1-74). ');
$ax += cidrblock($address,'206.144.144.0/20','Hurricane Electric (ASN-HE1-75). ');
$ax += cidrblock($address,'207.171.210.0/23','Hurricane Electric (ASN-HE1-76). ');
$ax += cidrblock($address,'207.171.226.0/24','Hurricane Electric (ASN-HE1-77). ');
$ax += cidrblock($address,'208.75.96.0/21','Hurricane Electric (ASN-HE1-78). ');
$ax += cidrblock($address,'209.51.160.0/19','Hurricane Electric (ASN-HE1-79). ');
$ax += cidrblock($address,'209.150.160.0/19','Hurricane Electric (ASN-HE1-80). ');
$ax += cidrblock($address,'216.66.0.0/18','Hurricane Electric (ASN-HE1-81). ');
$ax += cidrblock($address,'216.66.64.0/19','Hurricane Electric (ASN-HE1-82). ');
$ax += cidrblock($address,'216.105.164.0/22','Hurricane Electric (ASN-HE1-83). ');
$ax += cidrblock($address,'216.126.60.0/22','Hurricane Electric (ASN-HE1-84). ');
$ax += cidrblock($address,'216.152.64.0/20','Hurricane Electric (ASN-HE1-85). ');
$ax += cidrblock($address,'216.163.108.0/24','Hurricane Electric (ASN-HE1-86). ');
$ax += cidrblock($address,'216.171.192.0/23','Hurricane Electric (ASN-HE1-87). ');
$ax += cidrblock($address,'216.171.196.0/24','Hurricane Electric (ASN-HE1-88). ');
$ax += cidrblock($address,'216.171.201.0/24','Hurricane Electric (ASN-HE1-89). ');
$ax += cidrblock($address,'216.171.202.0/23','Hurricane Electric (ASN-HE1-90). ');
$ax += cidrblock($address,'216.171.204.0/23','Hurricane Electric (ASN-HE1-91). ');
$ax += cidrblock($address,'216.171.206.0/24','Hurricane Electric (ASN-HE1-92). ');
$ax += cidrblock($address,'216.171.208.0/24','Hurricane Electric (ASN-HE1-93). ');
$ax += cidrblock($address,'216.171.218.0/24','Hurricane Electric (ASN-HE1-94). ');
$ax += cidrblock($address,'216.171.220.0/23','Hurricane Electric (ASN-HE1-95). ');
$ax += cidrblock($address,'216.218.128.0/17','Hurricane Electric (ASN-HE1-96). ');
$ax += cidrblock($address,'216.224.64.0/19','Hurricane Electric (ASN-HE1-97). ');
$ax += cidrblock($address,'216.229.96.0/20','Hurricane Electric (ASN-HE1-98). ');


// Bypasses for Hurricane Electric (updated 2016.06.09)
if (inmatch($whyblockout,'(ASN-HE1-)','') && $ax > 0) {
    $zbamz = 0;
    $zbamz += rmatch($lcuseragent,'.getpebble.com','Nice enough to ask bypass. '); //74e
    $zbamz += inmatch($useragent,'Feedspot http://www.feedspot.com',' Feedspot bypass. ' ); //74c
    $zbamz += inmatch($useragent,'Feedly',' Feedly bypass. ' ); //74c
    if ($zbamz > 0) {
        $ax -= 1;
    }
}


// Eonix Corporation, not an access provider ISP. (updated 2016.04.30)
// Many improper ASN records. Known attack vector.
// AS30693, AS49532, AS62904
$ax += cidrblock($address,'23.90.0.0/18','Eonix Corporation (ASN-EONIX-00). ');
$ax += cidrblock($address,'23.231.0.0/17','Eonix Corporation (ASN-EONIX-01). ');
$ax += cidrblock($address,'50.2.0.0/15','Eonix Corporation (ASN-EONIX-02). ');
$ax += cidrblock($address,'75.75.224.0/19','Eonix Corporation (ASN-EONIX-03). ');
$ax += cidrblock($address,'104.140.0.0/16','Eonix Corporation (ASN-EONIX-04). ');
$ax += cidrblock($address,'104.193.40.0/22','Eonix Corporation (ASN-EONIX-05). ');
$ax += cidrblock($address,'104.206.0.0/16','Eonix Corporation (ASN-EONIX-06). ');
$ax += cidrblock($address,'104.218.232.0/21','Eonix Corporation (ASN-EONIX-07). ');
$ax += cidrblock($address,'107.158.0.0/16','Eonix Corporation (ASN-EONIX-08). ');
$ax += cidrblock($address,'170.130.0.0/16','Eonix Corporation (ASN-EONIX-09). ');
$ax += cidrblock($address,'172.94.93.0/24','Eonix Corporation (ASN-EONIX-10). ');
$ax += cidrblock($address,'173.44.128.0/17','Eonix Corporation (ASN-EONIX-11). ');
$ax += cidrblock($address,'173.213.64.0/18','Eonix Corporation (ASN-EONIX-12). ');
$ax += cidrblock($address,'173.232.0.0/16','Eonix Corporation (ASN-EONIX-13). ');
$ax += cidrblock($address,'185.137.136.0/22','Eonix Corporation (ASN-EONIX-14). ');
$ax += cidrblock($address,'192.157.60.0/22','Eonix Corporation (ASN-EONIX-15). ');
$ax += cidrblock($address,'192.230.144.0/20','Eonix Corporation (ASN-EONIX-16). ');
$ax += cidrblock($address,'199.66.112.0/22','Eonix Corporation (ASN-EONIX-17). ');
$ax += cidrblock($address,'199.127.72.0/21','Eonix Corporation (ASN-EONIX-18). ');
$ax += cidrblock($address,'206.214.64.0/19','Eonix Corporation (ASN-EONIX-19). ');
$ax += cidrblock($address,'208.89.216.0/21','Eonix Corporation (ASN-EONIX-20). ');


// Pegasus Web Technology / Fortress ITX, Not an access provider. (updated 2016.04.27)
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
$ax += cidrblock($address,'104.192.80.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-16). ');
$ax += cidrblock($address,'104.233.128.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-17). ');
$ax += cidrblock($address,'107.148.0.0/15','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-18). ');
$ax += cidrblock($address,'108.186.0.0/16','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-19). ');
$ax += cidrblock($address,'137.175.0.0/17','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-20). ');
$ax += cidrblock($address,'142.0.128.0/20','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-21). ');
$ax += cidrblock($address,'142.4.96.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-22). ');
$ax += cidrblock($address,'174.140.196.0/23','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-23). ');
$ax += cidrblock($address,'192.74.224.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-24). ');
$ax += cidrblock($address,'198.2.192.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-25). ');
$ax += cidrblock($address,'198.47.96.0/24','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-26). ');
$ax += cidrblock($address,'198.200.32.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-27). ');
$ax += cidrblock($address,'199.180.100.0/22','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-28). ');
$ax += cidrblock($address,'199.188.104.0/21','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-29). ');
$ax += cidrblock($address,'208.116.0.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-30). ');
$ax += cidrblock($address,'209.140.128.0/18','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-31). ');
$ax += cidrblock($address,'216.67.224.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-32). ');
$ax += cidrblock($address,'216.74.96.0/19','Pegasus Web Technologies / Fortress ITX, Not an access provider (ASN-PWEBFITX-33). ');


// Steadfast DNS (updated 2016.03.13)
// AS32748, AS46440
$ax += cidrblock($address,'23.29.128.0/19','Steadfast DNS (ASN-SFDNS-00). ');
$ax += cidrblock($address,'45.114.132.0/22','Steadfast DNS (ASN-SFDNS-01). ');
$ax += cidrblock($address,'49.156.0.0/22','Steadfast DNS (ASN-SFDNS-02). ');
$ax += cidrblock($address,'50.31.0.0/17','Steadfast DNS (ASN-SFDNS-03). ');
$ax += cidrblock($address,'66.85.89.0/24','Steadfast DNS (ASN-SFDNS-04). ');
$ax += cidrblock($address,'67.202.64.0/18','Steadfast DNS (ASN-SFDNS-05). ');
$ax += cidrblock($address,'69.162.128.0/18','Steadfast DNS (ASN-SFDNS-06). ');
$ax += cidrblock($address,'74.120.120.0/22','Steadfast DNS (ASN-SFDNS-07). ');
$ax += cidrblock($address,'103.30.196.0/22','Steadfast DNS (ASN-SFDNS-08). ');
$ax += cidrblock($address,'103.54.84.0/22','Steadfast DNS (ASN-SFDNS-09). ');
$ax += cidrblock($address,'104.171.128.0/21','Steadfast DNS (ASN-SFDNS-10). ');
$ax += cidrblock($address,'107.191.176.0/22','Steadfast DNS (ASN-SFDNS-11). ');
$ax += cidrblock($address,'162.208.54.0/23','Steadfast DNS (ASN-SFDNS-12). ');
$ax += cidrblock($address,'162.210.96.0/21','Steadfast DNS (ASN-SFDNS-13). ');
$ax += cidrblock($address,'162.249.125.0/24','Steadfast DNS (ASN-SFDNS-14). ');
$ax += cidrblock($address,'162.249.126.0/23','Steadfast DNS (ASN-SFDNS-15). ');
$ax += cidrblock($address,'167.89.0.0/20','Steadfast DNS (ASN-SFDNS-16). ');
$ax += cidrblock($address,'198.23.48.0/20','Steadfast DNS (ASN-SFDNS-17). ');
$ax += cidrblock($address,'204.238.229.0/24','Steadfast DNS (ASN-SFDNS-18). ');
$ax += cidrblock($address,'208.66.168.0/21','Steadfast DNS (ASN-SFDNS-19). ');
$ax += cidrblock($address,'208.100.0.0/18','Steadfast DNS (ASN-SFDNS-20). ');
$ax += cidrblock($address,'208.117.0.0/18','Steadfast DNS (ASN-SFDNS-21). ');
$ax += cidrblock($address,'216.86.144.0/20','Steadfast DNS (ASN-SFDNS-22). ');


// CyberBunker (updated 2016.04.27)
// Not an access provider, and willingly participates in hosting web attacks.
// AS51088
$ax += cidrblock($address,'5.44.72.0/21','CyberBunker ASN (ASN-CYBERBUNKER-00). ');
$ax += cidrblock($address,'31.134.200.0/21','CyberBunker ASN (ASN-CYBERBUNKER-01). ');
$ax += cidrblock($address,'37.148.184.0/24','CyberBunker ASN (ASN-CYBERBUNKER-02). ');
$ax += cidrblock($address,'46.244.0.0/19','CyberBunker ASN (ASN-CYBERBUNKER-03). ');
$ax += cidrblock($address,'46.244.96.0/19','CyberBunker ASN (ASN-CYBERBUNKER-04). ');
$ax += cidrblock($address,'91.209.12.0/24','CyberBunker ASN (ASN-CYBERBUNKER-05). ');
$ax += cidrblock($address,'91.213.13.0/24','CyberBunker ASN (ASN-CYBERBUNKER-06). ');
$ax += cidrblock($address,'91.233.224.0/23','CyberBunker ASN (ASN-CYBERBUNKER-07). ');
$ax += cidrblock($address,'92.240.144.0/21','CyberBunker ASN (ASN-CYBERBUNKER-08). ');
$ax += cidrblock($address,'93.93.120.0/21','CyberBunker ASN (ASN-CYBERBUNKER-09). ');
$ax += cidrblock($address,'93.188.68.0/22','CyberBunker ASN (ASN-CYBERBUNKER-10). ');
$ax += cidrblock($address,'157.97.0.0/18','CyberBunker ASN (ASN-CYBERBUNKER-11). ');
$ax += cidrblock($address,'157.97.64.0/19','CyberBunker ASN (ASN-CYBERBUNKER-12). ');
$ax += cidrblock($address,'157.97.96.0/23','CyberBunker ASN (ASN-CYBERBUNKER-13). ');
$ax += cidrblock($address,'157.97.100.0/22','CyberBunker ASN (ASN-CYBERBUNKER-14). ');
$ax += cidrblock($address,'157.97.104.0/21','CyberBunker ASN (ASN-CYBERBUNKER-15). ');
$ax += cidrblock($address,'157.97.112.0/20','CyberBunker ASN (ASN-CYBERBUNKER-16). ');
$ax += cidrblock($address,'157.97.128.0/17','CyberBunker ASN (ASN-CYBERBUNKER-17). ');
$ax += cidrblock($address,'178.249.152.0/21','CyberBunker ASN (ASN-CYBERBUNKER-18). ');
$ax += cidrblock($address,'185.30.204.0/22','CyberBunker ASN (ASN-CYBERBUNKER-19). ');
$ax += cidrblock($address,'185.34.220.0/22','CyberBunker ASN (ASN-CYBERBUNKER-20). ');
$ax += cidrblock($address,'185.37.4.0/23','CyberBunker ASN (ASN-CYBERBUNKER-21). ');
$ax += cidrblock($address,'185.37.6.0/24','CyberBunker ASN (ASN-CYBERBUNKER-22). ');
$ax += cidrblock($address,'185.44.244.0/22','CyberBunker ASN (ASN-CYBERBUNKER-23). ');
$ax += cidrblock($address,'185.51.48.0/22','CyberBunker ASN (ASN-CYBERBUNKER-24). ');
$ax += cidrblock($address,'185.51.52.0/23','CyberBunker ASN (ASN-CYBERBUNKER-25). ');
$ax += cidrblock($address,'185.63.244.0/22','CyberBunker ASN (ASN-CYBERBUNKER-26). ');
$ax += cidrblock($address,'185.82.88.0/22','CyberBunker ASN (ASN-CYBERBUNKER-27). ');
$ax += cidrblock($address,'185.103.56.0/22','CyberBunker ASN (ASN-CYBERBUNKER-28). ');
$ax += cidrblock($address,'192.166.96.0/22','CyberBunker ASN (ASN-CYBERBUNKER-29). ');
$ax += cidrblock($address,'193.108.238.0/24','CyberBunker ASN (ASN-CYBERBUNKER-30). ');


// PIN-AS (updated 2016.03.13)
// Small local access provider for Leningrad, HUGE spam-slinger.
// AS44050
$ax += cidrblock($address,'5.8.8.0/21','ASN pinspb.ru (ASN-PINAS-00). ');
$ax += cidrblock($address,'5.8.16.0/21','ASN pinspb.ru (ASN-PINAS-01). ');
$ax += cidrblock($address,'5.8.48.0/21','ASN pinspb.ru (ASN-PINAS-02). ');
$ax += cidrblock($address,'5.8.56.0/22','ASN pinspb.ru (ASN-PINAS-03). ');
$ax += cidrblock($address,'5.8.62.0/24','ASN pinspb.ru (ASN-PINAS-04). ');
$ax += cidrblock($address,'5.8.65.0/24','ASN pinspb.ru (ASN-PINAS-05). ');
$ax += cidrblock($address,'5.8.67.0/24','ASN pinspb.ru (ASN-PINAS-06). ');
$ax += cidrblock($address,'5.8.72.0/21','ASN pinspb.ru (ASN-PINAS-07). ');
$ax += cidrblock($address,'5.8.88.0/21','ASN pinspb.ru (ASN-PINAS-08). ');
$ax += cidrblock($address,'5.101.0.0/20','ASN pinspb.ru (ASN-PINAS-09). ');
$ax += cidrblock($address,'5.101.48.0/20','ASN pinspb.ru (ASN-PINAS-10). ');
$ax += cidrblock($address,'5.101.64.0/19','ASN pinspb.ru (ASN-PINAS-11). ');
$ax += cidrblock($address,'5.188.0.0/17','ASN pinspb.ru (ASN-PINAS-12). ');
$ax += cidrblock($address,'5.188.128.0/18','ASN pinspb.ru (ASN-PINAS-13). ');
$ax += cidrblock($address,'5.188.192.0/19','ASN pinspb.ru (ASN-PINAS-14). ');
$ax += cidrblock($address,'5.189.248.0/22','ASN pinspb.ru (ASN-PINAS-15). ');
$ax += cidrblock($address,'31.44.184.0/23','ASN pinspb.ru (ASN-PINAS-16). ');
$ax += cidrblock($address,'31.184.192.0/19','ASN pinspb.ru (ASN-PINAS-17). ');
$ax += cidrblock($address,'31.184.228.0/23','ASN pinspb.ru (ASN-PINAS-18). ');
$ax += cidrblock($address,'31.184.232.0/23','ASN pinspb.ru (ASN-PINAS-19). ');
$ax += cidrblock($address,'31.184.235.0/24','ASN pinspb.ru (ASN-PINAS-20). ');
$ax += cidrblock($address,'31.184.237.0/24','ASN pinspb.ru (ASN-PINAS-21). ');
$ax += cidrblock($address,'31.184.238.0/23','ASN pinspb.ru (ASN-PINAS-22). ');
$ax += cidrblock($address,'31.184.240.0/23','ASN pinspb.ru (ASN-PINAS-23). ');
$ax += cidrblock($address,'31.184.242.0/24','ASN pinspb.ru (ASN-PINAS-24). ');
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
$ax += cidrblock($address,'82.118.235.0/24','ASN pinspb.ru (ASN-PINAS-42). ');
$ax += cidrblock($address,'91.220.131.0/24','ASN pinspb.ru (ASN-PINAS-43). ');
$ax += cidrblock($address,'91.243.80.0/20','ASN pinspb.ru (ASN-PINAS-44). ');
$ax += cidrblock($address,'95.215.0.0/22','ASN pinspb.ru (ASN-PINAS-45). ');
$ax += cidrblock($address,'130.185.238.0/24','ASN pinspb.ru (ASN-PINAS-46). ');
$ax += cidrblock($address,'130.185.249.0/24','ASN pinspb.ru (ASN-PINAS-47). ');
$ax += cidrblock($address,'130.185.255.0/24','ASN pinspb.ru (ASN-PINAS-48). ');
$ax += cidrblock($address,'146.185.216.0/22','ASN pinspb.ru (ASN-PINAS-49). ');
$ax += cidrblock($address,'146.185.220.0/23','ASN pinspb.ru (ASN-PINAS-50). ');
$ax += cidrblock($address,'146.185.224.0/21','ASN pinspb.ru (ASN-PINAS-51). ');
$ax += cidrblock($address,'146.185.234.0/24','ASN pinspb.ru (ASN-PINAS-52). ');
$ax += cidrblock($address,'146.185.237.0/24','ASN pinspb.ru (ASN-PINAS-53). ');
$ax += cidrblock($address,'146.185.240.0/23','ASN pinspb.ru (ASN-PINAS-54). ');
$ax += cidrblock($address,'146.185.243.0/24','ASN pinspb.ru (ASN-PINAS-55). ');
$ax += cidrblock($address,'146.185.244.0/23','ASN pinspb.ru (ASN-PINAS-56). ');
$ax += cidrblock($address,'146.185.249.0/24','ASN pinspb.ru (ASN-PINAS-57). ');
$ax += cidrblock($address,'146.185.250.0/23','ASN pinspb.ru (ASN-PINAS-58). ');
$ax += cidrblock($address,'146.185.252.0/24','ASN pinspb.ru (ASN-PINAS-59). ');
$ax += cidrblock($address,'188.143.128.0/17','ASN pinspb.ru (ASN-PINAS-60). ');
$ax += cidrblock($address,'193.93.192.0/22','ASN pinspb.ru (ASN-PINAS-61). ');
$ax += cidrblock($address,'193.107.216.0/22','ASN pinspb.ru (ASN-PINAS-62). ');
$ax += cidrblock($address,'195.2.240.0/23','ASN pinspb.ru (ASN-PINAS-63). ');
$ax += cidrblock($address,'195.211.124.0/22','ASN pinspb.ru (ASN-PINAS-64). ');


// OVH Networks (updated 2016.04.18)
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
$ax += cidrblock($address,'91.134.0.0/16','OVH Networks (ASN-OVH-25). ');
$ax += cidrblock($address,'92.222.0.0/16','OVH Networks (ASN-OVH-26). ');
$ax += cidrblock($address,'94.23.0.0/16','OVH Networks (ASN-OVH-27). ');
$ax += cidrblock($address,'103.5.12.0/22','OVH Networks (ASN-OVH-28). ');
$ax += cidrblock($address,'142.4.192.0/19','OVH Networks (ASN-OVH-29). ');
$ax += cidrblock($address,'149.56.0.0/16','OVH Networks (ASN-OVH-30). ');
$ax += cidrblock($address,'149.202.0.0/16','OVH Networks (ASN-OVH-31). ');
$ax += cidrblock($address,'151.80.0.0/16','OVH Networks (ASN-OVH-32). ');
$ax += cidrblock($address,'158.69.0.0/16','OVH Networks (ASN-OVH-33). ');
$ax += cidrblock($address,'164.132.0.0/16','OVH Networks (ASN-OVH-34). ');
$ax += cidrblock($address,'167.114.0.0/16','OVH Networks (ASN-OVH-35). ');
$ax += cidrblock($address,'176.31.0.0/16','OVH Networks (ASN-OVH-36). ');
$ax += cidrblock($address,'178.32.0.0/15','OVH Networks (ASN-OVH-37). ');
$ax += cidrblock($address,'185.12.32.0/23','OVH Networks (ASN-OVH-38). ');
$ax += cidrblock($address,'188.165.0.0/16','OVH Networks (ASN-OVH-39). ');
$ax += cidrblock($address,'192.95.0.0/18','OVH Networks (ASN-OVH-40). ');
$ax += cidrblock($address,'192.99.0.0/16','OVH Networks (ASN-OVH-41). ');
$ax += cidrblock($address,'193.104.19.0/24','OVH Networks (ASN-OVH-42). ');
$ax += cidrblock($address,'193.109.63.0/24','OVH Networks (ASN-OVH-43). ');
$ax += cidrblock($address,'195.110.30.0/23','OVH Networks (ASN-OVH-44). ');
$ax += cidrblock($address,'195.246.232.0/23','OVH Networks (ASN-OVH-45). ');
$ax += cidrblock($address,'198.27.64.0/18','OVH Networks (ASN-OVH-46). ');
$ax += cidrblock($address,'198.50.128.0/17','OVH Networks (ASN-OVH-47). ');
$ax += cidrblock($address,'198.100.144.0/20','OVH Networks (ASN-OVH-48). ');
$ax += cidrblock($address,'198.245.48.0/20','OVH Networks (ASN-OVH-49). ');
$ax += cidrblock($address,'213.186.32.0/19','OVH Networks (ASN-OVH-50). ');
$ax += cidrblock($address,'213.251.128.0/18','OVH Networks (ASN-OVH-51). ');


// TEST: Reprieve for possible human clusters on OVH DSL (started: APR-04-14)

if (($ax == 1) && (inmatch($whyblockout,'(ASN-OVH-','')) && (rmatch($hoster,'.dsl.ovh.fr',''))){$ax = 0; $whyblockout = '';} //76d


// IOMart and *RapidSwitch (Crimeware Friendly ISP; hpHosts Blog warned us about this one).
// Hosting Death by Captcha .com and .eu CAPTCHA cracking services.
// AS20860, AS21130 (updated 2016.04.25)
$ax += cidrblock($address,'5.62.4.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-000). ');
$ax += cidrblock($address,'5.62.8.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-001). ');
$ax += cidrblock($address,'5.62.22.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-002). ');
$ax += cidrblock($address,'5.62.24.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-003). ');
$ax += cidrblock($address,'5.77.32.0/19','IOMart, Privax, RapidSwitch (ASN-IOMART-004). ');
$ax += cidrblock($address,'5.133.176.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-005). ');
$ax += cidrblock($address,'31.24.39.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-006). ');
$ax += cidrblock($address,'31.187.70.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-007). ');
$ax += cidrblock($address,'31.216.48.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-008). ');
$ax += cidrblock($address,'37.235.124.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-009). ');
$ax += cidrblock($address,'37.247.116.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-010). ');
$ax += cidrblock($address,'46.20.236.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-011). ');
$ax += cidrblock($address,'46.102.106.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-012). ');
$ax += cidrblock($address,'62.128.192.0/19','IOMart, Privax, RapidSwitch (ASN-IOMART-013). ');
$ax += cidrblock($address,'62.233.64.0/18','IOMart, Privax, RapidSwitch (ASN-IOMART-014). ');
$ax += cidrblock($address,'64.64.123.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-015). ');
$ax += cidrblock($address,'78.129.128.0/17','IOMart, Privax, RapidSwitch (ASN-IOMART-016). ');
$ax += cidrblock($address,'79.171.32.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-017). ');
$ax += cidrblock($address,'80.75.64.0/20','IOMart, Privax, RapidSwitch (ASN-IOMART-018). ');
$ax += cidrblock($address,'80.84.49.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-019). ');
$ax += cidrblock($address,'81.94.192.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-020). ');
$ax += cidrblock($address,'82.102.8.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-021). ');
$ax += cidrblock($address,'82.145.32.0/19','IOMart, Privax, RapidSwitch (ASN-IOMART-022). ');
$ax += cidrblock($address,'83.142.224.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-023). ');
$ax += cidrblock($address,'84.22.160.0/19','IOMart, Privax, RapidSwitch (ASN-IOMART-024). ');
$ax += cidrblock($address,'85.232.32.0/19','IOMart, Privax, RapidSwitch (ASN-IOMART-025). ');
$ax += cidrblock($address,'86.105.235.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-026). ');
$ax += cidrblock($address,'86.107.22.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-027). ');
$ax += cidrblock($address,'86.107.42.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-028). ');
$ax += cidrblock($address,'87.117.192.0/18','IOMart, Privax, RapidSwitch (ASN-IOMART-029). ');
$ax += cidrblock($address,'88.150.137.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-030). ');
$ax += cidrblock($address,'88.150.140.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-031). ');
$ax += cidrblock($address,'88.150.144.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-032). ');
$ax += cidrblock($address,'88.150.154.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-033). ');
$ax += cidrblock($address,'88.150.156.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-034). ');
$ax += cidrblock($address,'88.150.160.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-035). ');
$ax += cidrblock($address,'88.150.168.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-036). ');
$ax += cidrblock($address,'88.150.206.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-037). ');
$ax += cidrblock($address,'88.150.230.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-038). ');
$ax += cidrblock($address,'88.150.240.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-039). ');
$ax += cidrblock($address,'88.150.252.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-040). ');
$ax += cidrblock($address,'89.34.2.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-041). ');
$ax += cidrblock($address,'89.39.71.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-042). ');
$ax += cidrblock($address,'89.39.81.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-043). ');
$ax += cidrblock($address,'89.39.213.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-044). ');
$ax += cidrblock($address,'89.40.203.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-045). ');
$ax += cidrblock($address,'89.42.12.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-046). ');
$ax += cidrblock($address,'89.207.168.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-047). ');
$ax += cidrblock($address,'91.199.151.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-048). ');
$ax += cidrblock($address,'91.207.220.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-049). ');
$ax += cidrblock($address,'91.212.93.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-050). ');
$ax += cidrblock($address,'91.215.180.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-051). ');
$ax += cidrblock($address,'91.245.218.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-052). ');
$ax += cidrblock($address,'93.113.56.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-053). ');
$ax += cidrblock($address,'93.113.159.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-054). ');
$ax += cidrblock($address,'93.117.65.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-055). ');
$ax += cidrblock($address,'93.117.174.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-056). ');
$ax += cidrblock($address,'93.174.10.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-057). ');
$ax += cidrblock($address,'95.129.104.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-058). ');
$ax += cidrblock($address,'95.154.192.0/18','IOMart, Privax, RapidSwitch (ASN-IOMART-059). ');
$ax += cidrblock($address,'104.237.241.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-060). ');
$ax += cidrblock($address,'109.75.160.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-061). ');
$ax += cidrblock($address,'109.169.0.0/18','IOMart, Privax, RapidSwitch (ASN-IOMART-062). ');
$ax += cidrblock($address,'109.169.64.0/19','IOMart, Privax, RapidSwitch (ASN-IOMART-063). ');
$ax += cidrblock($address,'109.200.30.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-064). ');
$ax += cidrblock($address,'109.203.103.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-065). ');
$ax += cidrblock($address,'109.203.110.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-066). ');
$ax += cidrblock($address,'109.203.117.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-067). ');
$ax += cidrblock($address,'109.203.127.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-068). ');
$ax += cidrblock($address,'130.185.144.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-069). ');
$ax += cidrblock($address,'149.255.96.0/20','IOMart, Privax, RapidSwitch (ASN-IOMART-070). ');
$ax += cidrblock($address,'159.255.208.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-071). ');
$ax += cidrblock($address,'172.93.122.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-072). ');
$ax += cidrblock($address,'172.111.165.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-073). ');
$ax += cidrblock($address,'172.111.166.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-074). ');
$ax += cidrblock($address,'182.54.237.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-075). ');
$ax += cidrblock($address,'185.17.148.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-076). ');
$ax += cidrblock($address,'185.19.16.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-077). ');
$ax += cidrblock($address,'185.20.48.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-078). ');
$ax += cidrblock($address,'185.25.243.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-079). ');
$ax += cidrblock($address,'185.26.148.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-080). ');
$ax += cidrblock($address,'185.32.109.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-081). ');
$ax += cidrblock($address,'185.32.110.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-082). ');
$ax += cidrblock($address,'185.35.77.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-083). ');
$ax += cidrblock($address,'185.35.79.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-084). ');
$ax += cidrblock($address,'185.37.178.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-085). ');
$ax += cidrblock($address,'185.57.188.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-086). ');
$ax += cidrblock($address,'185.91.76.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-087). ');
$ax += cidrblock($address,'185.116.212.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-088). ');
$ax += cidrblock($address,'185.131.8.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-089). ');
$ax += cidrblock($address,'185.141.192.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-090). ');
$ax += cidrblock($address,'185.145.156.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-091). ');
$ax += cidrblock($address,'188.208.111.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-092). ');
$ax += cidrblock($address,'188.210.255.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-093). ');
$ax += cidrblock($address,'188.214.198.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-094). ');
$ax += cidrblock($address,'188.215.32.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-095). ');
$ax += cidrblock($address,'188.227.169.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-096). ');
$ax += cidrblock($address,'188.227.170.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-097). ');
$ax += cidrblock($address,'188.227.174.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-098). ');
$ax += cidrblock($address,'188.227.186.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-099). ');
$ax += cidrblock($address,'192.121.166.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-100). ');
$ax += cidrblock($address,'192.253.244.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-101). ');
$ax += cidrblock($address,'193.200.98.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-102). ');
$ax += cidrblock($address,'193.201.200.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-103). ');
$ax += cidrblock($address,'194.1.150.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-104). ');
$ax += cidrblock($address,'194.6.235.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-105). ');
$ax += cidrblock($address,'195.24.230.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-106). ');
$ax += cidrblock($address,'195.62.10.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-107). ');
$ax += cidrblock($address,'195.177.192.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-108). ');
$ax += cidrblock($address,'198.52.160.0/23','IOMart, Privax, RapidSwitch (ASN-IOMART-109). ');
$ax += cidrblock($address,'206.187.52.0/22','IOMart, Privax, RapidSwitch (ASN-IOMART-110). ');
$ax += cidrblock($address,'212.38.160.0/19','IOMart, Privax, RapidSwitch (ASN-IOMART-111). ');
$ax += cidrblock($address,'212.84.160.0/19','IOMart, Privax, RapidSwitch (ASN-IOMART-112). ');
$ax += cidrblock($address,'217.19.1.0/24','IOMart, Privax, RapidSwitch (ASN-IOMART-113). ');
$ax += cidrblock($address,'217.26.232.0/21','IOMart, Privax, RapidSwitch (ASN-IOMART-114). ');
$ax += cidrblock($address,'217.77.176.0/20','IOMart, Privax, RapidSwitch (ASN-IOMART-115). ');
$ax += cidrblock($address,'217.147.80.0/20','IOMart, Privax, RapidSwitch (ASN-IOMART-116). ');
$ax += cidrblock($address,'217.194.208.0/20','IOMart, Privax, RapidSwitch (ASN-IOMART-117). ');


// Bytemark Anonymous Proxies (updated 2016.01.20 / checked 2016.03.12)
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


// Plus Server, not an access provider (updated 2016.06.09)
// AS8972, AS25074
$ax += cidrblock($address,'5.1.120.0/21','Plus Server, not an access provider (ASN-PLSSRV-00). ');
$ax += cidrblock($address,'46.22.32.0/20','Plus Server, not an access provider (ASN-PLSSRV-01). ');
$ax += cidrblock($address,'46.229.46.0/23','Plus Server, not an access provider (ASN-PLSSRV-02). ');
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
$ax += cidrblock($address,'95.174.80.0/21','Plus Server, not an access provider (ASN-PLSSRV-28). ');
$ax += cidrblock($address,'109.234.248.0/21','Plus Server, not an access provider (ASN-PLSSRV-29). ');
$ax += cidrblock($address,'185.5.24.0/23','Plus Server, not an access provider (ASN-PLSSRV-30). ');
$ax += cidrblock($address,'185.5.27.0/24','Plus Server, not an access provider (ASN-PLSSRV-31). ');
$ax += cidrblock($address,'188.138.0.0/17','Plus Server, not an access provider (ASN-PLSSRV-32). ');
$ax += cidrblock($address,'194.30.185.0/24','Plus Server, not an access provider (ASN-PLSSRV-33). ');
$ax += cidrblock($address,'194.150.228.0/23','Plus Server, not an access provider (ASN-PLSSRV-34). ');
$ax += cidrblock($address,'195.66.102.0/24','Plus Server, not an access provider (ASN-PLSSRV-35). ');
$ax += cidrblock($address,'195.122.141.0/24','Plus Server, not an access provider (ASN-PLSSRV-36). ');
$ax += cidrblock($address,'195.137.212.0/23','Plus Server, not an access provider (ASN-PLSSRV-37). ');
$ax += cidrblock($address,'195.149.74.0/24','Plus Server, not an access provider (ASN-PLSSRV-38). ');
$ax += cidrblock($address,'212.40.160.0/24','Plus Server, not an access provider (ASN-PLSSRV-39). ');
$ax += cidrblock($address,'212.40.163.0/24','Plus Server, not an access provider (ASN-PLSSRV-40). ');
$ax += cidrblock($address,'212.40.164.0/24','Plus Server, not an access provider (ASN-PLSSRV-41). ');
$ax += cidrblock($address,'212.40.166.0/23','Plus Server, not an access provider (ASN-PLSSRV-42). ');
$ax += cidrblock($address,'212.40.168.0/24','Plus Server, not an access provider (ASN-PLSSRV-43). ');
$ax += cidrblock($address,'212.40.171.0/24','Plus Server, not an access provider (ASN-PLSSRV-44). ');
$ax += cidrblock($address,'212.40.172.0/23','Plus Server, not an access provider (ASN-PLSSRV-45). ');
$ax += cidrblock($address,'212.40.174.0/24','Plus Server, not an access provider (ASN-PLSSRV-46). ');
$ax += cidrblock($address,'212.40.176.0/21','Plus Server, not an access provider (ASN-PLSSRV-47). ');
$ax += cidrblock($address,'212.40.185.0/24','Plus Server, not an access provider (ASN-PLSSRV-48). ');
$ax += cidrblock($address,'212.40.186.0/24','Plus Server, not an access provider (ASN-PLSSRV-49). ');
$ax += cidrblock($address,'212.40.189.0/24','Plus Server, not an access provider (ASN-PLSSRV-50). ');
$ax += cidrblock($address,'212.48.74.0/24','Plus Server, not an access provider (ASN-PLSSRV-51). ');
$ax += cidrblock($address,'212.48.90.0/24','Plus Server, not an access provider (ASN-PLSSRV-52). ');
$ax += cidrblock($address,'212.48.93.0/24','Plus Server, not an access provider (ASN-PLSSRV-53). ');
$ax += cidrblock($address,'212.162.12.0/22','Plus Server, not an access provider (ASN-PLSSRV-54). ');
$ax += cidrblock($address,'212.162.52.0/23','Plus Server, not an access provider (ASN-PLSSRV-55). ');
$ax += cidrblock($address,'212.162.56.0/23','Plus Server, not an access provider (ASN-PLSSRV-56). ');
$ax += cidrblock($address,'213.131.224.0/19','Plus Server, not an access provider (ASN-PLSSRV-57). ');
$ax += cidrblock($address,'213.174.32.0/19','Plus Server, not an access provider (ASN-PLSSRV-58). ');
$ax += cidrblock($address,'213.203.192.0/18','Plus Server, not an access provider (ASN-PLSSRV-59). ');
$ax += cidrblock($address,'217.118.16.0/20','Plus Server, not an access provider (ASN-PLSSRV-60). ');
$ax += cidrblock($address,'217.119.49.0/24','Plus Server, not an access provider (ASN-PLSSRV-61). ');
$ax += cidrblock($address,'217.119.50.0/23','Plus Server, not an access provider (ASN-PLSSRV-62). ');
$ax += cidrblock($address,'217.119.52.0/22','Plus Server, not an access provider (ASN-PLSSRV-63). ');
$ax += cidrblock($address,'217.119.56.0/22','Plus Server, not an access provider (ASN-PLSSRV-64). ');
$ax += cidrblock($address,'217.119.63.0/24','Plus Server, not an access provider (ASN-PLSSRV-65). ');
$ax += cidrblock($address,'217.172.160.0/19','Plus Server, not an access provider (ASN-PLSSRV-66). ');


// Trend Micro (updated 2016.01.20 / checked 2016.03.12)
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


/* AS174 ("Cogent Communications"): "Big Hosting Plus", "DME Hosting LLC", "EGIHosting", "FDCservers.net",
"High Point Host", "Lunanode Hosting Inc.", "Pleasant Hosting", "Power Up Hosting, Inc.",
"Rica Costa Hosting RCH, S.A.", "Sovremennie Techologii Biznesa", "FORTUNIX NETWORKS L.P." (this list of names may
change as time passes, and may need continual adjustments in the future). Updated: 2016.02.05

The community has seen and experienced a significant amount of unwanted traffic from their ASN in the past (hack
attempts, spamming, scraping, various forms of general malicious activity, etc), and IPs sending out this type of
traffic, usually, should definitely be blocked, but unfortunately, their ASN is very widely-encompassing and interlaces
significantly with with a number of benign, innocent ISPs, human endpoint connections (DSL and ADSL connections, etc),
as well as with backbone architecture and various IPs and CIDRs that we definitely shouldn't be blocking. As a
compromise for this situation, I'm including a section in this signature file for their CIDRs, but, rather than simply
including the entire ASN, I'm making a point of only including those CIDRs that I can confirm don't belong the human
endpoint connections and those CIDRs that appear to be cloud services (ie, if they announce in a way that makes them
appear to be a hosting service, server leaser, colocation service, etc).

Wikipedia page about Cogent Communications: en.wikipedia.org/wiki/Cogent_Communications
Refer bgpmon.net/large-scale-bgp-hijack-out-of-india/
Refer forums.spybot.info/showthread.php?23632-SPAM-frauds-fakes-and-other-MALWARE-deliveries/page37
Refer research.dyn.com/2013/11/mitm-internet-hijacking/
Refer spambotsecurity.com/forum/viewtopic.php?f=14&t=3014
Refer spambotsecurity.com/forum/viewtopic.php?f=7&t=1966
HE Rank: 249; Refer sitevet.com/db/asn/AS174 */

$ax += cidrblock($address,'23.27.15.0/24','Cogent. Not an access provider ISP (ASN-COGENT-000). ');
$ax += cidrblock($address,'50.7.1.0/24','Cogent. Not an access provider ISP (ASN-COGENT-001). ');
$ax += cidrblock($address,'50.7.2.0/23','Cogent. Not an access provider ISP (ASN-COGENT-002). ');
$ax += cidrblock($address,'50.7.36.0/22','Cogent. Not an access provider ISP (ASN-COGENT-003). ');
$ax += cidrblock($address,'50.7.40.0/21','Cogent. Not an access provider ISP (ASN-COGENT-004). ');
$ax += cidrblock($address,'50.7.50.0/23','Cogent. Not an access provider ISP (ASN-COGENT-005). ');
$ax += cidrblock($address,'50.7.60.0/22','Cogent. Not an access provider ISP (ASN-COGENT-006). ');
$ax += cidrblock($address,'50.7.64.0/22','Cogent. Not an access provider ISP (ASN-COGENT-007). ');
$ax += cidrblock($address,'50.7.80.0/20','Cogent. Not an access provider ISP (ASN-COGENT-008). ');
$ax += cidrblock($address,'50.7.113.0/24','Cogent. Not an access provider ISP (ASN-COGENT-009). ');
$ax += cidrblock($address,'50.7.114.0/23','Cogent. Not an access provider ISP (ASN-COGENT-010). ');
$ax += cidrblock($address,'50.7.120.0/21','Cogent. Not an access provider ISP (ASN-COGENT-011). ');
$ax += cidrblock($address,'50.7.128.0/21','Cogent. Not an access provider ISP (ASN-COGENT-012). ');
$ax += cidrblock($address,'50.7.136.0/22','Cogent. Not an access provider ISP (ASN-COGENT-013). ');
$ax += cidrblock($address,'50.7.144.0/21','Cogent. Not an access provider ISP (ASN-COGENT-014). ');
$ax += cidrblock($address,'50.7.152.0/22','Cogent. Not an access provider ISP (ASN-COGENT-015). ');
$ax += cidrblock($address,'50.7.160.0/22','Cogent. Not an access provider ISP (ASN-COGENT-016). ');
$ax += cidrblock($address,'50.7.168.0/21','Cogent. Not an access provider ISP (ASN-COGENT-017). ');
$ax += cidrblock($address,'50.7.180.0/22','Cogent. Not an access provider ISP (ASN-COGENT-018). ');
$ax += cidrblock($address,'50.7.184.0/24','Cogent. Not an access provider ISP (ASN-COGENT-019). ');
$ax += cidrblock($address,'66.90.82.0/24','Cogent. Not an access provider ISP (ASN-COGENT-020). ');
$ax += cidrblock($address,'66.90.84.0/24','Cogent. Not an access provider ISP (ASN-COGENT-021). ');
$ax += cidrblock($address,'66.90.91.0/24','Cogent. Not an access provider ISP (ASN-COGENT-022). ');
$ax += cidrblock($address,'66.90.96.0/24','Cogent. Not an access provider ISP (ASN-COGENT-023). ');
$ax += cidrblock($address,'66.90.98.0/23','Cogent. Not an access provider ISP (ASN-COGENT-024). ');
$ax += cidrblock($address,'66.90.108.0/24','Cogent. Not an access provider ISP (ASN-COGENT-025). ');
$ax += cidrblock($address,'66.90.119.0/24','Cogent. Not an access provider ISP (ASN-COGENT-026). ');
$ax += cidrblock($address,'66.90.120.0/23','Cogent. Not an access provider ISP (ASN-COGENT-027). ');
$ax += cidrblock($address,'66.90.122.0/24','Cogent. Not an access provider ISP (ASN-COGENT-028). ');
$ax += cidrblock($address,'66.90.125.0/24','Cogent. Not an access provider ISP (ASN-COGENT-029). ');
$ax += cidrblock($address,'67.159.0.0/23','Cogent. Not an access provider ISP (ASN-COGENT-030). ');
$ax += cidrblock($address,'67.159.10.0/24','Cogent. Not an access provider ISP (ASN-COGENT-031). ');
$ax += cidrblock($address,'67.159.13.0/24','Cogent. Not an access provider ISP (ASN-COGENT-032). ');
$ax += cidrblock($address,'67.159.16.0/24','Cogent. Not an access provider ISP (ASN-COGENT-033). ');
$ax += cidrblock($address,'67.159.19.0/24','Cogent. Not an access provider ISP (ASN-COGENT-034). ');
$ax += cidrblock($address,'67.159.39.0/24','Cogent. Not an access provider ISP (ASN-COGENT-035). ');
$ax += cidrblock($address,'67.159.40.0/21','Cogent. Not an access provider ISP (ASN-COGENT-036). ');
$ax += cidrblock($address,'67.159.48.0/22','Cogent. Not an access provider ISP (ASN-COGENT-037). ');
$ax += cidrblock($address,'67.159.52.0/23','Cogent. Not an access provider ISP (ASN-COGENT-038). ');
$ax += cidrblock($address,'67.159.55.0/24','Cogent. Not an access provider ISP (ASN-COGENT-039). ');
$ax += cidrblock($address,'67.159.56.0/23','Cogent. Not an access provider ISP (ASN-COGENT-040). ');
$ax += cidrblock($address,'67.159.58.0/24','Cogent. Not an access provider ISP (ASN-COGENT-041). ');
$ax += cidrblock($address,'69.1.227.0/24','Cogent. Not an access provider ISP (ASN-COGENT-042). ');
$ax += cidrblock($address,'69.1.228.0/24','Cogent. Not an access provider ISP (ASN-COGENT-043). ');
$ax += cidrblock($address,'74.63.64.0/21','Cogent. Not an access provider ISP (ASN-COGENT-044). ');
$ax += cidrblock($address,'74.63.72.0/23','Cogent. Not an access provider ISP (ASN-COGENT-045). ');
$ax += cidrblock($address,'74.63.75.0/24','Cogent. Not an access provider ISP (ASN-COGENT-046). ');
$ax += cidrblock($address,'74.63.79.0/24','Cogent. Not an access provider ISP (ASN-COGENT-047). ');
$ax += cidrblock($address,'74.63.84.0/22','Cogent. Not an access provider ISP (ASN-COGENT-048). ');
$ax += cidrblock($address,'74.63.88.0/22','Cogent. Not an access provider ISP (ASN-COGENT-049). ');
$ax += cidrblock($address,'74.63.92.0/23','Cogent. Not an access provider ISP (ASN-COGENT-050). ');
$ax += cidrblock($address,'74.63.97.0/24','Cogent. Not an access provider ISP (ASN-COGENT-051). ');
$ax += cidrblock($address,'74.63.99.0/24','Cogent. Not an access provider ISP (ASN-COGENT-052). ');
$ax += cidrblock($address,'74.63.101.0/24','Cogent. Not an access provider ISP (ASN-COGENT-053). ');
$ax += cidrblock($address,'74.63.105.0/24','Cogent. Not an access provider ISP (ASN-COGENT-054). ');
$ax += cidrblock($address,'74.63.109.0/24','Cogent. Not an access provider ISP (ASN-COGENT-055). ');
$ax += cidrblock($address,'74.63.111.0/24','Cogent. Not an access provider ISP (ASN-COGENT-056). ');
$ax += cidrblock($address,'74.63.112.0/24','Cogent. Not an access provider ISP (ASN-COGENT-057). ');
$ax += cidrblock($address,'74.63.116.0/23','Cogent. Not an access provider ISP (ASN-COGENT-058). ');
$ax += cidrblock($address,'74.63.118.0/24','Cogent. Not an access provider ISP (ASN-COGENT-059). ');
$ax += cidrblock($address,'74.63.122.0/23','Cogent. Not an access provider ISP (ASN-COGENT-060). ');
$ax += cidrblock($address,'74.221.210.0/23','Cogent. Not an access provider ISP (ASN-COGENT-061). ');
$ax += cidrblock($address,'74.221.212.0/22','Cogent. Not an access provider ISP (ASN-COGENT-062). ');
$ax += cidrblock($address,'74.221.217.0/24','Cogent. Not an access provider ISP (ASN-COGENT-063). ');
$ax += cidrblock($address,'74.221.219.0/24','Cogent. Not an access provider ISP (ASN-COGENT-064). ');
$ax += cidrblock($address,'74.221.220.0/24','Cogent. Not an access provider ISP (ASN-COGENT-065). ');
$ax += cidrblock($address,'74.221.222.0/23','Cogent. Not an access provider ISP (ASN-COGENT-066). ');
$ax += cidrblock($address,'76.73.1.0/24','Cogent. Not an access provider ISP (ASN-COGENT-067). ');
$ax += cidrblock($address,'76.73.2.0/23','Cogent. Not an access provider ISP (ASN-COGENT-068). ');
$ax += cidrblock($address,'76.73.4.0/22','Cogent. Not an access provider ISP (ASN-COGENT-069). ');
$ax += cidrblock($address,'76.73.8.0/22','Cogent. Not an access provider ISP (ASN-COGENT-070). ');
$ax += cidrblock($address,'76.73.12.0/24','Cogent. Not an access provider ISP (ASN-COGENT-071). ');
$ax += cidrblock($address,'76.73.19.0/24','Cogent. Not an access provider ISP (ASN-COGENT-072). ');
$ax += cidrblock($address,'76.73.20.0/23','Cogent. Not an access provider ISP (ASN-COGENT-073). ');
$ax += cidrblock($address,'76.73.22.0/24','Cogent. Not an access provider ISP (ASN-COGENT-074). ');
$ax += cidrblock($address,'76.73.25.0/24','Cogent. Not an access provider ISP (ASN-COGENT-075). ');
$ax += cidrblock($address,'76.73.26.0/23','Cogent. Not an access provider ISP (ASN-COGENT-076). ');
$ax += cidrblock($address,'76.73.28.0/24','Cogent. Not an access provider ISP (ASN-COGENT-077). ');
$ax += cidrblock($address,'76.73.30.0/23','Cogent. Not an access provider ISP (ASN-COGENT-078). ');
$ax += cidrblock($address,'76.73.35.0/24','Cogent. Not an access provider ISP (ASN-COGENT-079). ');
$ax += cidrblock($address,'76.73.36.0/22','Cogent. Not an access provider ISP (ASN-COGENT-080). ');
$ax += cidrblock($address,'76.73.40.0/21','Cogent. Not an access provider ISP (ASN-COGENT-081). ');
$ax += cidrblock($address,'76.73.48.0/23','Cogent. Not an access provider ISP (ASN-COGENT-082). ');
$ax += cidrblock($address,'76.73.50.0/24','Cogent. Not an access provider ISP (ASN-COGENT-083). ');
$ax += cidrblock($address,'76.73.52.0/24','Cogent. Not an access provider ISP (ASN-COGENT-084). ');
$ax += cidrblock($address,'76.73.54.0/23','Cogent. Not an access provider ISP (ASN-COGENT-085). ');
$ax += cidrblock($address,'76.73.57.0/24','Cogent. Not an access provider ISP (ASN-COGENT-086). ');
$ax += cidrblock($address,'76.73.58.0/24','Cogent. Not an access provider ISP (ASN-COGENT-087). ');
$ax += cidrblock($address,'76.73.62.0/24','Cogent. Not an access provider ISP (ASN-COGENT-088). ');
$ax += cidrblock($address,'76.73.64.0/24','Cogent. Not an access provider ISP (ASN-COGENT-089). ');
$ax += cidrblock($address,'76.73.66.0/23','Cogent. Not an access provider ISP (ASN-COGENT-090). ');
$ax += cidrblock($address,'76.73.69.0/24','Cogent. Not an access provider ISP (ASN-COGENT-091). ');
$ax += cidrblock($address,'76.73.71.0/24','Cogent. Not an access provider ISP (ASN-COGENT-092). ');
$ax += cidrblock($address,'76.73.72.0/24','Cogent. Not an access provider ISP (ASN-COGENT-093). ');
$ax += cidrblock($address,'76.73.74.0/23','Cogent. Not an access provider ISP (ASN-COGENT-094). ');
$ax += cidrblock($address,'76.73.76.0/23','Cogent. Not an access provider ISP (ASN-COGENT-095). ');
$ax += cidrblock($address,'76.73.78.0/24','Cogent. Not an access provider ISP (ASN-COGENT-096). ');
$ax += cidrblock($address,'76.73.80.0/24','Cogent. Not an access provider ISP (ASN-COGENT-097). ');
$ax += cidrblock($address,'76.73.82.0/23','Cogent. Not an access provider ISP (ASN-COGENT-098). ');
$ax += cidrblock($address,'76.73.86.0/23','Cogent. Not an access provider ISP (ASN-COGENT-099). ');
$ax += cidrblock($address,'76.73.88.0/22','Cogent. Not an access provider ISP (ASN-COGENT-100). ');
$ax += cidrblock($address,'76.73.94.0/24','Cogent. Not an access provider ISP (ASN-COGENT-101). ');
$ax += cidrblock($address,'76.73.101.0/24','Cogent. Not an access provider ISP (ASN-COGENT-102). ');
$ax += cidrblock($address,'76.73.102.0/23','Cogent. Not an access provider ISP (ASN-COGENT-103). ');
$ax += cidrblock($address,'76.73.104.0/24','Cogent. Not an access provider ISP (ASN-COGENT-104). ');
$ax += cidrblock($address,'76.73.106.0/23','Cogent. Not an access provider ISP (ASN-COGENT-105). ');
$ax += cidrblock($address,'76.73.108.0/23','Cogent. Not an access provider ISP (ASN-COGENT-106). ');
$ax += cidrblock($address,'76.73.114.0/23','Cogent. Not an access provider ISP (ASN-COGENT-107). ');
$ax += cidrblock($address,'76.73.116.0/23','Cogent. Not an access provider ISP (ASN-COGENT-108). ');
$ax += cidrblock($address,'76.73.118.0/24','Cogent. Not an access provider ISP (ASN-COGENT-109). ');
$ax += cidrblock($address,'76.73.122.0/23','Cogent. Not an access provider ISP (ASN-COGENT-110). ');
$ax += cidrblock($address,'91.220.173.0/24','Cogent. Not an access provider ISP (ASN-COGENT-111). ');
$ax += cidrblock($address,'104.37.56.0/23','Cogent. Not an access provider ISP (ASN-COGENT-112). ');
$ax += cidrblock($address,'104.254.212.0/22','Cogent. Not an access provider ISP (ASN-COGENT-113). ');
$ax += cidrblock($address,'162.244.8.0/21','Cogent. Not an access provider ISP (ASN-COGENT-114). ');
$ax += cidrblock($address,'170.75.160.0/20','Cogent. Not an access provider ISP (ASN-COGENT-115). ');
$ax += cidrblock($address,'172.81.176.0/21','Cogent. Not an access provider ISP (ASN-COGENT-116). ');
$ax += cidrblock($address,'179.51.192.0/20','Cogent. Not an access provider ISP (ASN-COGENT-117). ');
$ax += cidrblock($address,'192.240.98.0/23','Cogent. Not an access provider ISP (ASN-COGENT-118). ');
$ax += cidrblock($address,'192.240.104.0/21','Cogent. Not an access provider ISP (ASN-COGENT-119). ');
$ax += cidrblock($address,'192.240.112.0/22','Cogent. Not an access provider ISP (ASN-COGENT-120). ');
$ax += cidrblock($address,'192.240.118.0/23','Cogent. Not an access provider ISP (ASN-COGENT-121). ');
$ax += cidrblock($address,'192.240.120.0/23','Cogent. Not an access provider ISP (ASN-COGENT-122). ');
$ax += cidrblock($address,'192.240.123.0/24','Cogent. Not an access provider ISP (ASN-COGENT-123). ');
$ax += cidrblock($address,'192.240.124.0/22','Cogent. Not an access provider ISP (ASN-COGENT-124). ');
$ax += cidrblock($address,'198.16.66.0/23','Cogent. Not an access provider ISP (ASN-COGENT-125). ');
$ax += cidrblock($address,'198.16.68.0/22','Cogent. Not an access provider ISP (ASN-COGENT-126). ');
$ax += cidrblock($address,'198.16.72.0/21','Cogent. Not an access provider ISP (ASN-COGENT-127). ');
$ax += cidrblock($address,'198.16.80.0/21','Cogent. Not an access provider ISP (ASN-COGENT-128). ');
$ax += cidrblock($address,'198.16.88.0/22','Cogent. Not an access provider ISP (ASN-COGENT-129). ');
$ax += cidrblock($address,'198.16.92.0/23','Cogent. Not an access provider ISP (ASN-COGENT-130). ');
$ax += cidrblock($address,'198.16.94.0/24','Cogent. Not an access provider ISP (ASN-COGENT-131). ');
$ax += cidrblock($address,'198.16.127.0/24','Cogent. Not an access provider ISP (ASN-COGENT-132). ');
$ax += cidrblock($address,'198.255.3.0/24','Cogent. Not an access provider ISP (ASN-COGENT-133). ');
$ax += cidrblock($address,'198.255.4.0/22','Cogent. Not an access provider ISP (ASN-COGENT-134). ');
$ax += cidrblock($address,'198.255.8.0/21','Cogent. Not an access provider ISP (ASN-COGENT-135). ');
$ax += cidrblock($address,'198.255.16.0/22','Cogent. Not an access provider ISP (ASN-COGENT-136). ');
$ax += cidrblock($address,'198.255.24.0/23','Cogent. Not an access provider ISP (ASN-COGENT-137). ');
$ax += cidrblock($address,'198.255.44.0/22','Cogent. Not an access provider ISP (ASN-COGENT-138). ');
$ax += cidrblock($address,'198.255.123.0/24','Cogent. Not an access provider ISP (ASN-COGENT-139). ');
$ax += cidrblock($address,'198.255.127.0/24','Cogent. Not an access provider ISP (ASN-COGENT-140). ');
$ax += cidrblock($address,'204.45.0.0/23','Cogent. Not an access provider ISP (ASN-COGENT-141). ');
$ax += cidrblock($address,'204.45.2.0/24','Cogent. Not an access provider ISP (ASN-COGENT-142). ');
$ax += cidrblock($address,'204.45.11.0/24','Cogent. Not an access provider ISP (ASN-COGENT-143). ');
$ax += cidrblock($address,'204.45.12.0/24','Cogent. Not an access provider ISP (ASN-COGENT-144). ');
$ax += cidrblock($address,'204.45.16.0/24','Cogent. Not an access provider ISP (ASN-COGENT-145). ');
$ax += cidrblock($address,'204.45.18.0/24','Cogent. Not an access provider ISP (ASN-COGENT-146). ');
$ax += cidrblock($address,'204.45.21.0/24','Cogent. Not an access provider ISP (ASN-COGENT-147). ');
$ax += cidrblock($address,'204.45.22.0/24','Cogent. Not an access provider ISP (ASN-COGENT-148). ');
$ax += cidrblock($address,'204.45.28.0/24','Cogent. Not an access provider ISP (ASN-COGENT-149). ');
$ax += cidrblock($address,'204.45.33.0/24','Cogent. Not an access provider ISP (ASN-COGENT-150). ');
$ax += cidrblock($address,'204.45.39.0/24','Cogent. Not an access provider ISP (ASN-COGENT-151). ');
$ax += cidrblock($address,'204.45.41.0/24','Cogent. Not an access provider ISP (ASN-COGENT-152). ');
$ax += cidrblock($address,'204.45.42.0/24','Cogent. Not an access provider ISP (ASN-COGENT-153). ');
$ax += cidrblock($address,'204.45.46.0/24','Cogent. Not an access provider ISP (ASN-COGENT-154). ');
$ax += cidrblock($address,'204.45.48.0/23','Cogent. Not an access provider ISP (ASN-COGENT-155). ');
$ax += cidrblock($address,'204.45.52.0/24','Cogent. Not an access provider ISP (ASN-COGENT-156). ');
$ax += cidrblock($address,'204.45.55.0/24','Cogent. Not an access provider ISP (ASN-COGENT-157). ');
$ax += cidrblock($address,'204.45.56.0/22','Cogent. Not an access provider ISP (ASN-COGENT-158). ');
$ax += cidrblock($address,'204.45.60.0/23','Cogent. Not an access provider ISP (ASN-COGENT-159). ');
$ax += cidrblock($address,'204.45.63.0/24','Cogent. Not an access provider ISP (ASN-COGENT-160). ');
$ax += cidrblock($address,'204.45.103.0/24','Cogent. Not an access provider ISP (ASN-COGENT-161). ');
$ax += cidrblock($address,'204.45.105.0/24','Cogent. Not an access provider ISP (ASN-COGENT-162). ');
$ax += cidrblock($address,'204.45.139.0/24','Cogent. Not an access provider ISP (ASN-COGENT-163). ');
$ax += cidrblock($address,'204.45.207.0/24','Cogent. Not an access provider ISP (ASN-COGENT-164). ');
$ax += cidrblock($address,'204.45.208.0/24','Cogent. Not an access provider ISP (ASN-COGENT-165). ');
$ax += cidrblock($address,'204.45.211.0/24','Cogent. Not an access provider ISP (ASN-COGENT-166). ');
$ax += cidrblock($address,'204.45.213.0/24','Cogent. Not an access provider ISP (ASN-COGENT-167). ');
$ax += cidrblock($address,'204.45.216.0/24','Cogent. Not an access provider ISP (ASN-COGENT-168). ');
$ax += cidrblock($address,'204.45.220.0/24','Cogent. Not an access provider ISP (ASN-COGENT-169). ');
$ax += cidrblock($address,'204.45.227.0/24','Cogent. Not an access provider ISP (ASN-COGENT-170). ');
$ax += cidrblock($address,'204.45.238.0/24','Cogent. Not an access provider ISP (ASN-COGENT-171). ');
$ax += cidrblock($address,'204.45.244.0/24','Cogent. Not an access provider ISP (ASN-COGENT-172). ');
$ax += cidrblock($address,'204.45.246.0/24','Cogent. Not an access provider ISP (ASN-COGENT-173). ');
$ax += cidrblock($address,'204.45.248.0/24','Cogent. Not an access provider ISP (ASN-COGENT-174). ');
$ax += cidrblock($address,'204.45.253.0/24','Cogent. Not an access provider ISP (ASN-COGENT-175). ');
$ax += cidrblock($address,'204.45.254.0/24','Cogent. Not an access provider ISP (ASN-COGENT-176). ');
$ax += cidrblock($address,'208.53.133.0/24','Cogent. Not an access provider ISP (ASN-COGENT-177). ');
$ax += cidrblock($address,'208.53.149.0/24','Cogent. Not an access provider ISP (ASN-COGENT-178). ');
$ax += cidrblock($address,'208.53.153.0/24','Cogent. Not an access provider ISP (ASN-COGENT-179). ');
$ax += cidrblock($address,'208.53.154.0/24','Cogent. Not an access provider ISP (ASN-COGENT-180). ');
$ax += cidrblock($address,'208.53.156.0/22','Cogent. Not an access provider ISP (ASN-COGENT-181). ');
$ax += cidrblock($address,'208.53.164.0/24','Cogent. Not an access provider ISP (ASN-COGENT-182). ');
$ax += cidrblock($address,'208.53.166.0/24','Cogent. Not an access provider ISP (ASN-COGENT-183). ');
$ax += cidrblock($address,'208.53.168.0/24','Cogent. Not an access provider ISP (ASN-COGENT-184). ');
$ax += cidrblock($address,'208.53.174.0/24','Cogent. Not an access provider ISP (ASN-COGENT-185). ');
$ax += cidrblock($address,'208.53.177.0/24','Cogent. Not an access provider ISP (ASN-COGENT-186). ');
$ax += cidrblock($address,'208.53.178.0/23','Cogent. Not an access provider ISP (ASN-COGENT-187). ');
$ax += cidrblock($address,'208.53.183.0/24','Cogent. Not an access provider ISP (ASN-COGENT-188). ');
$ax += cidrblock($address,'208.53.190.0/24','Cogent. Not an access provider ISP (ASN-COGENT-189). ');
$ax += cidrblock($address,'209.73.140.0/24','Cogent. Not an access provider ISP (ASN-COGENT-190). ');
$ax += cidrblock($address,'216.128.69.0/24','Cogent. Not an access provider ISP (ASN-COGENT-191). ');


// Hetzner Online GmbH (updated 2016.05.21)
// AS24940, AS37153
$ax += cidrblock($address,'5.9.0.0/16','Hetzner Online GmbH; Access denied (ASN-HETZNER-00). ');
$ax += cidrblock($address,'41.72.128.0/19','Hetzner Online GmbH; Access denied (ASN-HETZNER-01). ');
$ax += cidrblock($address,'41.203.0.0/19','Hetzner Online GmbH; Access denied (ASN-HETZNER-02). ');
$ax += cidrblock($address,'41.204.192.0/19','Hetzner Online GmbH; Access denied (ASN-HETZNER-03). ');
$ax += cidrblock($address,'46.4.0.0/16','Hetzner Online GmbH; Access denied (ASN-HETZNER-04). ');
$ax += cidrblock($address,'78.46.0.0/15','Hetzner Online GmbH; Access denied (ASN-HETZNER-05). ');
$ax += cidrblock($address,'85.10.192.0/18','Hetzner Online GmbH; Access denied (ASN-HETZNER-06). ');
$ax += cidrblock($address,'88.198.0.0/16','Hetzner Online GmbH; Access denied (ASN-HETZNER-07). ');
$ax += cidrblock($address,'91.220.49.0/24','Hetzner Online GmbH; Access denied (ASN-HETZNER-08). ');
$ax += cidrblock($address,'91.233.8.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-09). ');
$ax += cidrblock($address,'129.232.128.0/17','Hetzner Online GmbH; Access denied (ASN-HETZNER-10). ');
$ax += cidrblock($address,'136.243.0.0/16','Hetzner Online GmbH; Access denied (ASN-HETZNER-11). ');
$ax += cidrblock($address,'138.201.0.0/16','Hetzner Online GmbH; Access denied (ASN-HETZNER-12). ');
$ax += cidrblock($address,'144.76.0.0/16','Hetzner Online GmbH; Access denied (ASN-HETZNER-13). ');
$ax += cidrblock($address,'148.251.0.0/16','Hetzner Online GmbH; Access denied (ASN-HETZNER-14). ');
$ax += cidrblock($address,'169.239.152.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-15). ');
$ax += cidrblock($address,'169.239.180.0/23','Hetzner Online GmbH; Access denied (ASN-HETZNER-16). ');
$ax += cidrblock($address,'169.239.204.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-17). ');
$ax += cidrblock($address,'169.239.224.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-18). ');
$ax += cidrblock($address,'176.9.0.0/16','Hetzner Online GmbH; Access denied (ASN-HETZNER-19). ');
$ax += cidrblock($address,'176.102.168.0/21','Hetzner Online GmbH; Access denied (ASN-HETZNER-20). ');
$ax += cidrblock($address,'178.63.0.0/16','Hetzner Online GmbH; Access denied (ASN-HETZNER-21). ');
$ax += cidrblock($address,'185.12.64.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-22). ');
$ax += cidrblock($address,'185.50.120.0/23','Hetzner Online GmbH; Access denied (ASN-HETZNER-23). ');
$ax += cidrblock($address,'185.107.52.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-24). ');
$ax += cidrblock($address,'185.126.28.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-25). ');
$ax += cidrblock($address,'185.141.200.0/24','Hetzner Online GmbH; Access denied (ASN-HETZNER-26). ');
$ax += cidrblock($address,'188.40.0.0/16','Hetzner Online GmbH; Access denied (ASN-HETZNER-27). ');
$ax += cidrblock($address,'192.96.96.0/24','Hetzner Online GmbH; Access denied (ASN-HETZNER-28). ');
$ax += cidrblock($address,'193.25.170.0/23','Hetzner Online GmbH; Access denied (ASN-HETZNER-29). ');
$ax += cidrblock($address,'193.110.6.0/23','Hetzner Online GmbH; Access denied (ASN-HETZNER-30). ');
$ax += cidrblock($address,'193.223.77.0/24','Hetzner Online GmbH; Access denied (ASN-HETZNER-31). ');
$ax += cidrblock($address,'194.42.180.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-32). ');
$ax += cidrblock($address,'194.42.184.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-33). ');
$ax += cidrblock($address,'194.145.226.0/24','Hetzner Online GmbH; Access denied (ASN-HETZNER-34). ');
$ax += cidrblock($address,'195.60.226.0/24','Hetzner Online GmbH; Access denied (ASN-HETZNER-35). ');
$ax += cidrblock($address,'195.248.224.0/24','Hetzner Online GmbH; Access denied (ASN-HETZNER-36). ');
$ax += cidrblock($address,'196.22.132.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-37). ');
$ax += cidrblock($address,'196.22.136.0/21','Hetzner Online GmbH; Access denied (ASN-HETZNER-38). ');
$ax += cidrblock($address,'196.28.5.0/24','Hetzner Online GmbH; Access denied (ASN-HETZNER-39). ');
$ax += cidrblock($address,'196.40.96.0/20','Hetzner Online GmbH; Access denied (ASN-HETZNER-40). ');
$ax += cidrblock($address,'197.189.192.0/18','Hetzner Online GmbH; Access denied (ASN-HETZNER-41). ');
$ax += cidrblock($address,'197.221.0.0/18','Hetzner Online GmbH; Access denied (ASN-HETZNER-42). ');
$ax += cidrblock($address,'197.242.64.0/19','Hetzner Online GmbH; Access denied (ASN-HETZNER-43). ');
$ax += cidrblock($address,'213.133.96.0/19','Hetzner Online GmbH; Access denied (ASN-HETZNER-44). ');
$ax += cidrblock($address,'213.169.144.0/22','Hetzner Online GmbH; Access denied (ASN-HETZNER-45). ');
$ax += cidrblock($address,'213.239.192.0/18','Hetzner Online GmbH; Access denied (ASN-HETZNER-46). ');


// Digital Ocean, Inc. (updated 2016.04.25)
// AS14061, AS46652, AS62567, AS65040, AS133165, AS200130, AS201229, AS202018, AS202109, AS393406, AS394362.
$ax += cidrblock($address,'5.101.96.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-00). ');
$ax += cidrblock($address,'5.101.104.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-01). ');
$ax += cidrblock($address,'5.101.109.0/24','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-02). ');
$ax += cidrblock($address,'5.101.110.0/23','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-03). ');
$ax += cidrblock($address,'37.139.0.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-04). ');
$ax += cidrblock($address,'45.55.0.0/16','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-05). ');
$ax += cidrblock($address,'46.101.0.0/16','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-06). ');
$ax += cidrblock($address,'69.55.48.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-07). ');
$ax += cidrblock($address,'80.240.128.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-08). ');
$ax += cidrblock($address,'82.196.0.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-09). ');
$ax += cidrblock($address,'95.85.0.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-10). ');
$ax += cidrblock($address,'103.253.144.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-11). ');
$ax += cidrblock($address,'104.131.0.0/16','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-12). ');
$ax += cidrblock($address,'104.236.0.0/16','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-13). ');
$ax += cidrblock($address,'107.170.0.0/16','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-14). ');
$ax += cidrblock($address,'128.199.32.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-15). ');
$ax += cidrblock($address,'128.199.64.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-16). ');
$ax += cidrblock($address,'128.199.128.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-17). ');
$ax += cidrblock($address,'138.68.0.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-18). ');
$ax += cidrblock($address,'138.68.32.0/24','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-19). ');
$ax += cidrblock($address,'138.68.192.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-20). ');
$ax += cidrblock($address,'139.59.128.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-21). ');
$ax += cidrblock($address,'139.59.160.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-22). ');
$ax += cidrblock($address,'139.59.192.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-23). ');
$ax += cidrblock($address,'139.59.204.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-24). ');
$ax += cidrblock($address,'139.59.224.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-25). ');
$ax += cidrblock($address,'141.0.168.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-26). ');
$ax += cidrblock($address,'146.185.128.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-27). ');
$ax += cidrblock($address,'159.203.0.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-28). ');
$ax += cidrblock($address,'159.203.128.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-29). ');
$ax += cidrblock($address,'159.203.144.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-30). ');
$ax += cidrblock($address,'159.203.152.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-31). ');
$ax += cidrblock($address,'159.203.160.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-32). ');
$ax += cidrblock($address,'159.203.192.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-33). ');
$ax += cidrblock($address,'162.243.0.0/16','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-34). ');
$ax += cidrblock($address,'163.47.8.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-35). ');
$ax += cidrblock($address,'178.62.0.0/16','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-36). ');
$ax += cidrblock($address,'185.14.184.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-37). ');
$ax += cidrblock($address,'185.88.180.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-38). ');
$ax += cidrblock($address,'188.166.0.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-39). ');
$ax += cidrblock($address,'188.166.128.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-40). ');
$ax += cidrblock($address,'188.166.192.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-41). ');
$ax += cidrblock($address,'188.166.200.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-42). ');
$ax += cidrblock($address,'188.166.208.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-43). ');
$ax += cidrblock($address,'188.166.224.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-44). ');
$ax += cidrblock($address,'188.226.128.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-45). ');
$ax += cidrblock($address,'192.34.56.0/21','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-46). ');
$ax += cidrblock($address,'192.81.208.0/20','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-47). ');
$ax += cidrblock($address,'192.241.128.0/17','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-48). ');
$ax += cidrblock($address,'198.199.64.0/18','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-49). ');
$ax += cidrblock($address,'198.211.96.0/19','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-50). ');
$ax += cidrblock($address,'208.68.36.0/22','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-51). ');
$ax += cidrblock($address,'218.208.39.0/24','Digital Ocean, Inc. Not an access provider ISP (ASN-DOGROUP-52). ');


// Root SA (updated 2016.03.13)
// AS5577
$ax += cidrblock($address,'31.131.7.0/24','Root SA (ASN-ROOTSA-00). ');
$ax += cidrblock($address,'83.243.8.0/21','Root SA (ASN-ROOTSA-01). ');
$ax += cidrblock($address,'91.193.74.0/24','Root SA (ASN-ROOTSA-02). ');
$ax += cidrblock($address,'93.186.79.0/24','Root SA (ASN-ROOTSA-03). ');
$ax += cidrblock($address,'94.242.192.0/18','Root SA (ASN-ROOTSA-04). ');
$ax += cidrblock($address,'146.185.239.0/24','Root SA (ASN-ROOTSA-05). ');
$ax += cidrblock($address,'179.63.80.0/20','Root SA (ASN-ROOTSA-06). ');
$ax += cidrblock($address,'185.103.172.0/24','Root SA (ASN-ROOTSA-07). ');
$ax += cidrblock($address,'185.103.174.0/24','Root SA (ASN-ROOTSA-08). ');
$ax += cidrblock($address,'185.121.24.0/23','Root SA (ASN-ROOTSA-09). ');
$ax += cidrblock($address,'194.68.32.0/24','Root SA (ASN-ROOTSA-10). ');
$ax += cidrblock($address,'195.24.72.0/21','Root SA (ASN-ROOTSA-11). ');
$ax += cidrblock($address,'195.26.4.0/23','Root SA (ASN-ROOTSA-12). ');
$ax += cidrblock($address,'212.117.160.0/19','Root SA (ASN-ROOTSA-13). ');
$ax += cidrblock($address,'217.73.56.0/24','Root SA (ASN-ROOTSA-14). ');


// XEEX network (updated 2016.04.25)
// AS27524
$ax += cidrblock($address,'69.26.160.0/19','XEEX (ASN-27524-0). ');
$ax += cidrblock($address,'113.212.64.0/19','XEEX (ASN-27524-1). ');
$ax += cidrblock($address,'162.213.128.0/22','XEEX (ASN-27524-2). ');
$ax += cidrblock($address,'216.151.128.0/19','XEEX (ASN-27524-3). ');
$ax += cidrblock($address,'216.152.240.0/20','XEEX (ASN-27524-4). ');


// ColoGuys (updated 2016.01.19 / checked 2016.04.25)
// AS25643
$ax += cidrblock($address,'64.209.56.0/21','ColoGuys (ASN-25643-00). ');
$ax += cidrblock($address,'64.209.68.0/22','ColoGuys (ASN-25643-01). ');
$ax += cidrblock($address,'64.214.184.0/21','ColoGuys (ASN-25643-02). ');
$ax += cidrblock($address,'66.207.160.0/20','ColoGuys (ASN-25643-03). ');
$ax += cidrblock($address,'67.43.48.0/20','ColoGuys (ASN-25643-04). ');
$ax += cidrblock($address,'103.6.219.0/24','ColoGuys (ASN-25643-05). ');
$ax += cidrblock($address,'173.242.48.0/20','ColoGuys (ASN-25643-06). ');
$ax += cidrblock($address,'199.115.176.0/21','ColoGuys (ASN-25643-07). ');
$ax += cidrblock($address,'207.126.64.0/19','ColoGuys (ASN-25643-08). ');
$ax += cidrblock($address,'209.130.152.0/22','ColoGuys (ASN-25643-09). ');
$ax += cidrblock($address,'209.135.0.0/19','ColoGuys (ASN-25643-10). ');


// Tzulo Inc
// AS11878 (updated 2016.06.09)
$ax += cidrblock($address,'23.234.64.0/18','Tzulo Inc (ASN-11878-00). ');
$ax += cidrblock($address,'23.255.0.0/17','Tzulo Inc (ASN-11878-01). ');
$ax += cidrblock($address,'43.239.250.0/24','Tzulo Inc (ASN-11878-02). ');
$ax += cidrblock($address,'68.235.32.0/19','Tzulo Inc (ASN-11878-03). ');
$ax += cidrblock($address,'107.152.32.0/20','Tzulo Inc (ASN-11878-04). ');
$ax += cidrblock($address,'154.16.97.0/24','Tzulo Inc (ASN-11878-05). ');
$ax += cidrblock($address,'154.16.98.0/23','Tzulo Inc (ASN-11878-06). ');
$ax += cidrblock($address,'154.16.100.0/22','Tzulo Inc (ASN-11878-07). ');
$ax += cidrblock($address,'154.16.105.0/24','Tzulo Inc (ASN-11878-08). ');
$ax += cidrblock($address,'154.16.106.0/24','Tzulo Inc (ASN-11878-09). ');
$ax += cidrblock($address,'154.16.248.0/24','Tzulo Inc (ASN-11878-10). ');
$ax += cidrblock($address,'161.213.205.0/24','Tzulo Inc (ASN-11878-11). ');
$ax += cidrblock($address,'161.213.207.0/24','Tzulo Inc (ASN-11878-12). ');
$ax += cidrblock($address,'161.213.209.0/24','Tzulo Inc (ASN-11878-13). ');
$ax += cidrblock($address,'162.208.8.0/22','Tzulo Inc (ASN-11878-14). ');
$ax += cidrblock($address,'162.212.152.0/21','Tzulo Inc (ASN-11878-15). ');
$ax += cidrblock($address,'173.231.192.0/18','Tzulo Inc (ASN-11878-16). ');
$ax += cidrblock($address,'173.249.192.0/18','Tzulo Inc (ASN-11878-17). ');
$ax += cidrblock($address,'173.253.0.0/17','Tzulo Inc (ASN-11878-18). ');
$ax += cidrblock($address,'181.214.128.0/19','Tzulo Inc (ASN-11878-19). ');
$ax += cidrblock($address,'181.214.206.0/23','Tzulo Inc (ASN-11878-20). ');
$ax += cidrblock($address,'181.214.244.0/22','Tzulo Inc (ASN-11878-21). ');
$ax += cidrblock($address,'181.214.248.0/23','Tzulo Inc (ASN-11878-22). ');
$ax += cidrblock($address,'181.215.176.0/20','Tzulo Inc (ASN-11878-23). ');
$ax += cidrblock($address,'181.215.199.0/24','Tzulo Inc (ASN-11878-24). ');
$ax += cidrblock($address,'181.215.200.0/21','Tzulo Inc (ASN-11878-25). ');
$ax += cidrblock($address,'181.215.208.0/22','Tzulo Inc (ASN-11878-26). ');
$ax += cidrblock($address,'181.215.212.0/23','Tzulo Inc (ASN-11878-27). ');
$ax += cidrblock($address,'181.215.215.0/24','Tzulo Inc (ASN-11878-28). ');
$ax += cidrblock($address,'181.215.216.0/21','Tzulo Inc (ASN-11878-29). ');
$ax += cidrblock($address,'181.215.224.0/21','Tzulo Inc (ASN-11878-30). ');
$ax += cidrblock($address,'181.215.232.0/23','Tzulo Inc (ASN-11878-31). ');
$ax += cidrblock($address,'181.215.234.0/24','Tzulo Inc (ASN-11878-32). ');
$ax += cidrblock($address,'181.215.244.0/22','Tzulo Inc (ASN-11878-33). ');
$ax += cidrblock($address,'191.96.27.0/24','Tzulo Inc (ASN-11878-34). ');
$ax += cidrblock($address,'191.96.38.0/24','Tzulo Inc (ASN-11878-35). ');
$ax += cidrblock($address,'191.96.48.0/24','Tzulo Inc (ASN-11878-36). ');
$ax += cidrblock($address,'191.96.68.0/24','Tzulo Inc (ASN-11878-37). ');
$ax += cidrblock($address,'191.96.93.0/24','Tzulo Inc (ASN-11878-38). ');
$ax += cidrblock($address,'191.96.188.0/24','Tzulo Inc (ASN-11878-39). ');
$ax += cidrblock($address,'191.101.162.0/23','Tzulo Inc (ASN-11878-40). ');
$ax += cidrblock($address,'191.101.164.0/22','Tzulo Inc (ASN-11878-41). ');
$ax += cidrblock($address,'191.101.202.0/23','Tzulo Inc (ASN-11878-42). ');
$ax += cidrblock($address,'191.101.212.0/22','Tzulo Inc (ASN-11878-43). ');
$ax += cidrblock($address,'192.196.224.0/20','Tzulo Inc (ASN-11878-44). ');
$ax += cidrblock($address,'192.243.96.0/20','Tzulo Inc (ASN-11878-45). ');
$ax += cidrblock($address,'198.44.128.0/19','Tzulo Inc (ASN-11878-46). ');
$ax += cidrblock($address,'198.54.128.0/21','Tzulo Inc (ASN-11878-47). ');
$ax += cidrblock($address,'199.175.48.0/21','Tzulo Inc (ASN-11878-48). ');
$ax += cidrblock($address,'206.226.64.0/18','Tzulo Inc (ASN-11878-49). ');
$ax += cidrblock($address,'208.77.16.0/21','Tzulo Inc (ASN-11878-50). ');


// Corpcolo (updated 2016.03.13)
// AS17139
$ax += cidrblock($address,'45.3.32.0/20','Corpcolo (ASN-17139-00). ');
$ax += cidrblock($address,'45.3.55.0/24','Corpcolo (ASN-17139-01). ');
$ax += cidrblock($address,'45.3.56.0/21','Corpcolo (ASN-17139-02). ');
$ax += cidrblock($address,'45.78.80.0/20','Corpcolo (ASN-17139-03). ');
$ax += cidrblock($address,'66.117.0.0/20','Corpcolo (ASN-17139-04). ');
$ax += cidrblock($address,'68.64.160.0/20','Corpcolo (ASN-17139-05). ');
$ax += cidrblock($address,'72.37.152.0/24','Corpcolo (ASN-17139-06). ');
$ax += cidrblock($address,'74.82.37.0/24','Corpcolo (ASN-17139-07). ');
$ax += cidrblock($address,'74.124.192.0/19','Corpcolo (ASN-17139-08). ');
$ax += cidrblock($address,'103.193.184.0/22','Corpcolo (ASN-17139-09). ');
$ax += cidrblock($address,'104.167.16.0/22','Corpcolo (ASN-17139-10). ');
$ax += cidrblock($address,'104.167.20.0/24','Corpcolo (ASN-17139-11). ');
$ax += cidrblock($address,'104.167.22.0/23','Corpcolo (ASN-17139-12). ');
$ax += cidrblock($address,'104.167.24.0/22','Corpcolo (ASN-17139-13). ');
$ax += cidrblock($address,'104.167.28.0/23','Corpcolo (ASN-17139-14). ');
$ax += cidrblock($address,'104.207.32.0/19','Corpcolo (ASN-17139-15). ');
$ax += cidrblock($address,'162.220.218.0/24','Corpcolo (ASN-17139-16). ');
$ax += cidrblock($address,'172.86.120.0/21','Corpcolo (ASN-17139-17). ');
$ax += cidrblock($address,'172.98.214.0/24','Corpcolo (ASN-17139-18). ');
$ax += cidrblock($address,'173.247.224.0/19','Corpcolo (ASN-17139-19). ');
$ax += cidrblock($address,'192.80.191.0/24','Corpcolo (ASN-17139-20). ');
$ax += cidrblock($address,'199.83.102.0/24','Corpcolo (ASN-17139-21). ');
$ax += cidrblock($address,'199.195.142.0/23','Corpcolo (ASN-17139-22). ');
$ax += cidrblock($address,'205.134.224.0/19','Corpcolo (ASN-17139-23). ');
$ax += cidrblock($address,'206.62.144.0/22','Corpcolo (ASN-17139-24). ');
$ax += cidrblock($address,'206.62.148.0/24','Corpcolo (ASN-17139-25). ');
$ax += cidrblock($address,'208.51.60.0/22','Corpcolo (ASN-17139-26). ');
$ax += cidrblock($address,'216.179.168.0/21','Corpcolo (ASN-17139-27). ');
$ax += cidrblock($address,'216.179.208.0/24','Corpcolo (ASN-17139-28). ');
$ax += cidrblock($address,'216.179.212.0/24','Corpcolo (ASN-17139-29). ');
$ax += cidrblock($address,'216.179.218.0/24','Corpcolo (ASN-17139-30). ');
$ax += cidrblock($address,'216.193.197.0/24','Corpcolo (ASN-17139-31). ');
$ax += cidrblock($address,'216.193.219.0/24','Corpcolo (ASN-17139-32). ');
$ax += cidrblock($address,'216.193.251.0/24','Corpcolo (ASN-17139-33). ');


// iWeb Technologies Inc. (updated 2016.01.20 / checked 2016.03.13)
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


// Reliable Hosting Services (updated 2016.06.09)
// AS13926, AS22781, AS29713, AS54203, AS62651, AS63128
$ax += cidrblock($address,'68.68.32.0/20','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-00). ');
$ax += cidrblock($address,'98.158.112.0/20','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-01). ');
$ax += cidrblock($address,'104.36.176.0/21','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-02). ');
$ax += cidrblock($address,'108.171.96.0/19','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-03). ');
$ax += cidrblock($address,'173.195.0.0/20','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-04). ');
$ax += cidrblock($address,'173.255.160.0/19','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-05). ');
$ax += cidrblock($address,'190.102.100.0/22','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-06). ');
$ax += cidrblock($address,'192.82.109.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-07). ');
$ax += cidrblock($address,'192.200.144.0/20','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-08). ');
$ax += cidrblock($address,'199.15.248.0/21','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-09). ');
$ax += cidrblock($address,'199.127.248.0/21','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-10). ');
$ax += cidrblock($address,'207.204.224.0/19','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-11). ');
$ax += cidrblock($address,'208.73.20.0/22','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-12). ');
$ax += cidrblock($address,'216.131.64.0/18','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-13). ');
$ax += cidrblock($address,'216.151.184.0/24','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-14). ');
$ax += cidrblock($address,'216.169.128.0/20','Reliable Hosting Services. Not an access provider ISP (ASN-RELIA-15). ');


// InfoRelay Online Systems, Inc. (updated 2016.01.27 / checked 2016.03.13)
// AS33597
$ax += cidrblock($address,'38.81.194.0/23','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-01). ');
$ax += cidrblock($address,'66.231.176.0/20','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-02). ');
$ax += cidrblock($address,'67.208.64.0/19','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-03). ');
$ax += cidrblock($address,'69.26.176.0/23','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-04). ');
$ax += cidrblock($address,'69.26.178.0/24','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-05). ');
$ax += cidrblock($address,'69.169.0.0/17','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-06). ');
$ax += cidrblock($address,'70.33.160.0/19','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-07). ');
$ax += cidrblock($address,'74.112.255.0/24','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-08). ');
$ax += cidrblock($address,'130.185.182.0/23','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-09). ');
$ax += cidrblock($address,'173.45.0.0/18','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-10). ');
$ax += cidrblock($address,'173.205.128.0/17','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-11). ');
$ax += cidrblock($address,'173.245.104.0/22','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-12). ');
$ax += cidrblock($address,'173.245.108.0/24','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-13). ');
$ax += cidrblock($address,'174.128.128.0/18','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-14). ');
$ax += cidrblock($address,'198.62.86.0/24','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-15). ');
$ax += cidrblock($address,'199.115.248.0/22','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-16). ');
$ax += cidrblock($address,'199.167.224.0/24','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-17). ');
$ax += cidrblock($address,'199.188.228.0/22','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-18). ');
$ax += cidrblock($address,'205.251.0.0/17','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-19). ');
$ax += cidrblock($address,'208.94.144.0/24','InfoRelay Online Systems. Not an access provider ISP (ASN-INRELAY-20). ');


// Westhost (updated 2016.03.13)
// AS29854
$ax += cidrblock($address,'27.126.249.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-00). ');
$ax += cidrblock($address,'50.115.112.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-01). ');
$ax += cidrblock($address,'67.212.224.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-02). ');
$ax += cidrblock($address,'68.169.32.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-03). ');
$ax += cidrblock($address,'69.36.160.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-04). ');
$ax += cidrblock($address,'104.245.11.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-05). ');
$ax += cidrblock($address,'107.181.188.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-06). ');
$ax += cidrblock($address,'107.182.224.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-07). ');
$ax += cidrblock($address,'172.98.91.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-08). ');
$ax += cidrblock($address,'173.244.192.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-09). ');
$ax += cidrblock($address,'173.255.128.0/22','Westhost, not an access provider ISP (ASN-WESTHOST-10). ');
$ax += cidrblock($address,'174.127.104.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-11). ');
$ax += cidrblock($address,'174.127.112.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-12). ');
$ax += cidrblock($address,'185.72.156.0/22','Westhost, not an access provider ISP (ASN-WESTHOST-13). ');
$ax += cidrblock($address,'192.245.255.0/24','Westhost, not an access provider ISP (ASN-WESTHOST-14). ');
$ax += cidrblock($address,'198.105.208.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-15). ');
$ax += cidrblock($address,'199.189.104.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-16). ');
$ax += cidrblock($address,'199.195.192.0/21','Westhost, not an access provider ISP (ASN-WESTHOST-17). ');
$ax += cidrblock($address,'206.130.96.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-18). ');
$ax += cidrblock($address,'206.190.128.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-19). ');
$ax += cidrblock($address,'208.131.128.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-20). ');
$ax += cidrblock($address,'209.95.32.0/19','Westhost, not an access provider ISP (ASN-WESTHOST-21). ');
$ax += cidrblock($address,'209.236.64.0/20','Westhost, not an access provider ISP (ASN-WESTHOST-22). ');


// Bezeq International (updated 2016.03.13)
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
$ax += cidrblock($address,'82.80.0.0/15','BEZEQ-INT (ASN-BEZEQ-11). ');
$ax += cidrblock($address,'84.108.0.0/14','BEZEQ-INT (ASN-BEZEQ-12). ');
$ax += cidrblock($address,'85.130.128.0/17','BEZEQ-INT (ASN-BEZEQ-13). ');
$ax += cidrblock($address,'92.122.128.0/20','BEZEQ-INT (ASN-BEZEQ-14). ');
$ax += cidrblock($address,'95.101.4.0/22','BEZEQ-INT (ASN-BEZEQ-15). ');
$ax += cidrblock($address,'104.70.127.0/24','BEZEQ-INT (ASN-BEZEQ-16). ');
$ax += cidrblock($address,'104.70.176.0/23','BEZEQ-INT (ASN-BEZEQ-17). ');
$ax += cidrblock($address,'104.70.186.0/23','BEZEQ-INT (ASN-BEZEQ-18). ');
$ax += cidrblock($address,'104.74.71.0/24','BEZEQ-INT (ASN-BEZEQ-19). ');
$ax += cidrblock($address,'104.77.202.0/24','BEZEQ-INT (ASN-BEZEQ-20). ');
$ax += cidrblock($address,'104.79.198.0/23','BEZEQ-INT (ASN-BEZEQ-21). ');
$ax += cidrblock($address,'104.79.200.0/22','BEZEQ-INT (ASN-BEZEQ-22). ');
$ax += cidrblock($address,'104.79.208.0/20','BEZEQ-INT (ASN-BEZEQ-23). ');
$ax += cidrblock($address,'104.79.224.0/20','BEZEQ-INT (ASN-BEZEQ-24). ');
$ax += cidrblock($address,'109.64.0.0/14','BEZEQ-INT (ASN-BEZEQ-25). ');
$ax += cidrblock($address,'184.27.128.0/23','BEZEQ-INT (ASN-BEZEQ-26). ');
$ax += cidrblock($address,'192.114.11.0/24','BEZEQ-INT (ASN-BEZEQ-27). ');
$ax += cidrblock($address,'192.114.40.0/21','BEZEQ-INT (ASN-BEZEQ-28). ');
$ax += cidrblock($address,'192.114.64.0/20','BEZEQ-INT (ASN-BEZEQ-29). ');
$ax += cidrblock($address,'192.114.80.0/24','BEZEQ-INT (ASN-BEZEQ-30). ');
$ax += cidrblock($address,'192.114.83.0/24','BEZEQ-INT (ASN-BEZEQ-31). ');
$ax += cidrblock($address,'192.114.144.0/22','BEZEQ-INT (ASN-BEZEQ-32). ');
$ax += cidrblock($address,'192.115.16.0/20','BEZEQ-INT (ASN-BEZEQ-33). ');
$ax += cidrblock($address,'192.115.56.0/21','BEZEQ-INT (ASN-BEZEQ-34). ');
$ax += cidrblock($address,'192.115.104.0/22','BEZEQ-INT (ASN-BEZEQ-35). ');
$ax += cidrblock($address,'192.115.128.0/21','BEZEQ-INT (ASN-BEZEQ-36). ');
$ax += cidrblock($address,'192.115.184.0/21','BEZEQ-INT (ASN-BEZEQ-37). ');
$ax += cidrblock($address,'192.117.96.0/19','BEZEQ-INT (ASN-BEZEQ-38). ');
$ax += cidrblock($address,'192.117.232.0/21','BEZEQ-INT (ASN-BEZEQ-39). ');
$ax += cidrblock($address,'206.82.140.0/24','BEZEQ-INT (ASN-BEZEQ-40). ');
$ax += cidrblock($address,'212.25.64.0/18','BEZEQ-INT (ASN-BEZEQ-41). ');
$ax += cidrblock($address,'212.179.0.0/16','BEZEQ-INT (ASN-BEZEQ-42). ');
$ax += cidrblock($address,'217.194.200.0/23','BEZEQ-INT (ASN-BEZEQ-43). ');


// WholeSale Internet, Inc
// AS32097 (updated 2016.05.21)
$ax += cidrblock($address,'63.141.241.0/24','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-00). ');
$ax += cidrblock($address,'69.30.192.0/18','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-01). ');
$ax += cidrblock($address,'69.197.128.0/18','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-02). ');
$ax += cidrblock($address,'162.251.120.0/22','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-03). ');
$ax += cidrblock($address,'173.208.128.0/17','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-04). ');
$ax += cidrblock($address,'192.187.113.0/24','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-05). ');
$ax += cidrblock($address,'198.204.241.0/24','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-06). ');
$ax += cidrblock($address,'204.10.160.0/22','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-07). ');
$ax += cidrblock($address,'204.12.192.0/18','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-08). ');
$ax += cidrblock($address,'208.67.0.0/21','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-09). ');
$ax += cidrblock($address,'208.110.64.0/19','WholeSale Internet, Inc. Not an access provider ISP (ASN-WHOLESALE-10). ');


// DataShack, LC
// AS33387 (updated 2016.05.21)
$ax += cidrblock($address,'63.141.224.0/19','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-00). ');
$ax += cidrblock($address,'74.91.16.0/20','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-01). ');
$ax += cidrblock($address,'103.25.63.0/24','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-02). ');
$ax += cidrblock($address,'107.150.32.0/19','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-03). ');
$ax += cidrblock($address,'142.54.160.0/19','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-04). ');
$ax += cidrblock($address,'153.89.0.0/16','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-05). ');
$ax += cidrblock($address,'179.0.32.0/19','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-06). ');
$ax += cidrblock($address,'179.0.64.0/18','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-07). ');
$ax += cidrblock($address,'190.113.32.0/19','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-08). ');
$ax += cidrblock($address,'192.151.144.0/20','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-09). ');
$ax += cidrblock($address,'192.187.96.0/19','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-10). ');
$ax += cidrblock($address,'198.204.224.0/19','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-11). ');
$ax += cidrblock($address,'199.168.96.0/21','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-12). ');
$ax += cidrblock($address,'201.218.160.0/19','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-13). ');
$ax += cidrblock($address,'208.67.0.0/23','DataShack, LC. Not an access provider ISP (ASN-DATASHACK-14). ');


// CoS International (updated 2016.01.20 / checked 2016.03.13)
// AS7914
$ax += cidrblock($address,'12.9.239.0/24','Known hostile network (ASN-CSI-0). ');
$ax += cidrblock($address,'192.216.201.0/24','Known hostile network (ASN-CSI-1). ');
$ax += cidrblock($address,'198.77.154.0/23','Known hostile network (ASN-CSI-2). ');
$ax += cidrblock($address,'198.95.10.0/24','Known hostile network (ASN-CSI-3). ');
$ax += cidrblock($address,'205.180.15.0/24','Known hostile network (ASN-CSI-4). ');
$ax += cidrblock($address,'208.29.5.0/24','Known hostile network (ASN-CSI-5). ');
$ax += cidrblock($address,'208.30.51.0/24','Known hostile network (ASN-CSI-6). ');
$ax += cidrblock($address,'208.33.13.0/24','Known hostile network (ASN-CSI-7). ');


// Avante Hosting (updated 2016.03.13)
// AS36137
$ax += cidrblock($address,'66.248.192.0/19','Avante Hosting, not an access provider (ASN-AVANTE-0). ');
$ax += cidrblock($address,'192.119.148.0/24','Avante Hosting, not an access provider (ASN-AVANTE-1). ');
$ax += cidrblock($address,'192.241.8.0/21','Avante Hosting, not an access provider (ASN-AVANTE-2). ');
$ax += cidrblock($address,'198.52.128.0/17','Avante Hosting, not an access provider (ASN-AVANTE-3). ');
$ax += cidrblock($address,'199.195.156.0/22','Avante Hosting, not an access provider (ASN-AVANTE-4). ');


// Tex-Link Communications, Inc. (updated 2016.01.21 / checked 2016.03.13)
// AS11457
$ax += cidrblock($address,'66.52.209.0/24','Tex-Link Communications, not an access provider (ASN-TEXLINK-0). ');
$ax += cidrblock($address,'66.52.224.0/22','Tex-Link Communications, not an access provider (ASN-TEXLINK-1). ');
$ax += cidrblock($address,'66.118.0.0/18','Tex-Link Communications, not an access provider (ASN-TEXLINK-2). ');
$ax += cidrblock($address,'66.118.224.0/19','Tex-Link Communications, not an access provider (ASN-TEXLINK-3). ');
$ax += cidrblock($address,'72.18.64.0/19','Tex-Link Communications, not an access provider (ASN-TEXLINK-4). ');
$ax += cidrblock($address,'208.99.0.0/18','Tex-Link Communications, not an access provider (ASN-TEXLINK-5). ');


// Ready Server, Dedicated Server Hosting (updated 2016.01.21 / checked 2016.03.13)
// AS63930
$ax += cidrblock($address,'45.125.192.0/22','Ready Server, not an access provider (ASN-RSDSH-0). ');
$ax += cidrblock($address,'103.47.208.0/22','Ready Server, not an access provider (ASN-RSDSH-1). ');
$ax += cidrblock($address,'103.195.151.0/24','Ready Server, not an access provider (ASN-RSDSH-2). ');
$ax += cidrblock($address,'192.241.8.0/24','Ready Server, not an access provider (ASN-RSDSH-4). ');


// 1&1 Internet SE (updated 2016.05.20)
// AS8560
$ax += cidrblock($address,'37.98.148.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-00). ');
$ax += cidrblock($address,'50.21.176.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-01). ');
$ax += cidrblock($address,'62.151.160.0/21','One and One hosting, not an access provider (ASN-ONEANDONE-02). ');
$ax += cidrblock($address,'62.151.176.0/21','One and One hosting, not an access provider (ASN-ONEANDONE-03). ');
$ax += cidrblock($address,'66.175.232.0/21','One and One hosting, not an access provider (ASN-ONEANDONE-04). ');
$ax += cidrblock($address,'70.35.192.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-05). ');
$ax += cidrblock($address,'74.208.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-06). ');
$ax += cidrblock($address,'77.68.0.0/17','One and One hosting, not an access provider (ASN-ONEANDONE-07). ');
$ax += cidrblock($address,'79.99.40.0/21','One and One hosting, not an access provider (ASN-ONEANDONE-08). ');
$ax += cidrblock($address,'82.165.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-09). ');
$ax += cidrblock($address,'82.223.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-10). ');
$ax += cidrblock($address,'87.106.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-11). ');
$ax += cidrblock($address,'88.208.192.0/18','One and One hosting, not an access provider (ASN-ONEANDONE-12). ');
$ax += cidrblock($address,'93.90.192.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-13). ');
$ax += cidrblock($address,'93.93.112.0/21','One and One hosting, not an access provider (ASN-ONEANDONE-14). ');
$ax += cidrblock($address,'94.143.136.0/21','One and One hosting, not an access provider (ASN-ONEANDONE-15). ');
$ax += cidrblock($address,'104.192.4.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-16). ');
$ax += cidrblock($address,'104.219.40.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-17). ');
$ax += cidrblock($address,'104.254.244.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-18). ');
$ax += cidrblock($address,'108.175.0.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-19). ');
$ax += cidrblock($address,'109.228.0.0/18','One and One hosting, not an access provider (ASN-ONEANDONE-20). ');
$ax += cidrblock($address,'162.222.200.0/21','One and One hosting, not an access provider (ASN-ONEANDONE-21). ');
$ax += cidrblock($address,'162.252.156.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-22). ');
$ax += cidrblock($address,'162.255.84.0/22','One and One hosting, not an access provider (ASN-ONEANDONE-23). ');
$ax += cidrblock($address,'192.195.77.0/24','One and One hosting, not an access provider (ASN-ONEANDONE-24). ');
$ax += cidrblock($address,'195.20.224.0/19','One and One hosting, not an access provider (ASN-ONEANDONE-25). ');
$ax += cidrblock($address,'198.71.48.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-26). ');
$ax += cidrblock($address,'198.251.64.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-27). ');
$ax += cidrblock($address,'212.227.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-28). ');
$ax += cidrblock($address,'213.165.64.0/19','One and One hosting, not an access provider (ASN-ONEANDONE-29). ');
$ax += cidrblock($address,'213.171.192.0/19','One and One hosting, not an access provider (ASN-ONEANDONE-30). ');
$ax += cidrblock($address,'216.250.112.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-31). ');
$ax += cidrblock($address,'217.72.192.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-32). ');
$ax += cidrblock($address,'217.76.128.0/19','One and One hosting, not an access provider (ASN-ONEANDONE-33). ');
$ax += cidrblock($address,'217.160.0.0/16','One and One hosting, not an access provider (ASN-ONEANDONE-34). ');
$ax += cidrblock($address,'217.174.240.0/20','One and One hosting, not an access provider (ASN-ONEANDONE-35). ');


// Swift Networks Limited (updated 2016.01.21 / checked 2016.03.13)
// AS36923
$ax += cidrblock($address,'41.58.0.0/16','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-0). ');
$ax += cidrblock($address,'41.189.0.0/19','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-1). ');
$ax += cidrblock($address,'41.221.160.0/20','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-2). ');
$ax += cidrblock($address,'41.222.64.0/21','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-3). ');
$ax += cidrblock($address,'129.18.0.0/16','Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-AS36923-4). ');


// BestHosting (checked 2016.03.13, no changes required)
// AS42655
$ax += cidrblock($address,'31.41.216.0/21','Network known to associate with malware, source: http://www.google.com/safebrowsing/diagnostic?site=AS:42655&hl=en (ASN-BESTHOSTING-0). '); //75b
$ax += cidrblock($address,'194.28.172.0/22','Network known to associate with malware, source: http://www.google.com/safebrowsing/diagnostic?site=AS:42655&hl=en (ASN-BESTHOSTING-1). '); //75b
$ax += cidrblock($address,'195.248.234.0/23','Network known to associate with malware, source: http://www.google.com/safebrowsing/diagnostic?site=AS:42655&hl=en (ASN-BESTHOSTING-2). '); //75b


// Internap (updated 2016.03.13)
// Refer to https://gist.github.com/Maikuolan/633f211dbe19b90ef944 for the ASN information for these listings.
$ax += cidrblock($address,'5.104.242.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-000). ');
$ax += cidrblock($address,'23.92.182.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-001). ');
$ax += cidrblock($address,'23.92.184.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-002). ');
$ax += cidrblock($address,'38.107.85.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-003). ');
$ax += cidrblock($address,'38.107.87.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-004). ');
$ax += cidrblock($address,'61.211.160.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-005). ');
$ax += cidrblock($address,'63.223.80.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-006). ');
$ax += cidrblock($address,'63.223.87.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-007). ');
$ax += cidrblock($address,'63.223.88.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-008). ');
$ax += cidrblock($address,'63.223.90.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-009). ');
$ax += cidrblock($address,'63.251.0.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-010). ');
$ax += cidrblock($address,'63.251.32.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-011). ');
$ax += cidrblock($address,'63.251.64.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-012). ');
$ax += cidrblock($address,'63.251.100.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-013). ');
$ax += cidrblock($address,'63.251.128.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-014). ');
$ax += cidrblock($address,'63.251.192.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-015). ');
$ax += cidrblock($address,'64.7.192.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-016). ');
$ax += cidrblock($address,'64.7.216.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-017). ');
$ax += cidrblock($address,'64.7.223.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-018). ');
$ax += cidrblock($address,'64.27.244.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-019). ');
$ax += cidrblock($address,'64.71.227.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-020). ');
$ax += cidrblock($address,'64.71.234.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-021). ');
$ax += cidrblock($address,'64.74.0.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-022). ');
$ax += cidrblock($address,'64.74.46.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-023). ');
$ax += cidrblock($address,'64.74.48.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-024). ');
$ax += cidrblock($address,'64.74.52.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-025). ');
$ax += cidrblock($address,'64.74.64.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-026). ');
$ax += cidrblock($address,'64.74.72.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-027). ');
$ax += cidrblock($address,'64.74.78.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-028). ');
$ax += cidrblock($address,'64.74.96.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-029). ');
$ax += cidrblock($address,'64.74.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-030). ');
$ax += cidrblock($address,'64.74.160.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-031). ');
$ax += cidrblock($address,'64.74.192.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-032). ');
$ax += cidrblock($address,'64.94.0.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-033). ');
$ax += cidrblock($address,'64.94.72.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-034). ');
$ax += cidrblock($address,'64.94.88.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-035). ');
$ax += cidrblock($address,'64.94.96.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-036). ');
$ax += cidrblock($address,'64.94.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-037). ');
$ax += cidrblock($address,'64.94.144.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-038). ');
$ax += cidrblock($address,'64.94.152.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-039). ');
$ax += cidrblock($address,'64.94.158.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-040). ');
$ax += cidrblock($address,'64.94.160.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-041). ');
$ax += cidrblock($address,'64.94.220.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-042). ');
$ax += cidrblock($address,'64.94.224.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-043). ');
$ax += cidrblock($address,'64.95.28.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-044). ');
$ax += cidrblock($address,'64.95.32.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-045). ');
$ax += cidrblock($address,'64.95.64.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-046). ');
$ax += cidrblock($address,'64.95.104.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-047). ');
$ax += cidrblock($address,'64.95.136.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-048). ');
$ax += cidrblock($address,'64.95.140.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-049). ');
$ax += cidrblock($address,'64.95.144.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-050). ');
$ax += cidrblock($address,'64.95.152.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-051). ');
$ax += cidrblock($address,'64.95.156.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-052). ');
$ax += cidrblock($address,'64.95.160.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-053). ');
$ax += cidrblock($address,'64.95.192.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-054). ');
$ax += cidrblock($address,'64.95.204.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-055). ');
$ax += cidrblock($address,'64.95.240.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-056). ');
$ax += cidrblock($address,'66.23.191.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-057). ');
$ax += cidrblock($address,'66.150.0.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-058). ');
$ax += cidrblock($address,'66.150.48.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-059). ');
$ax += cidrblock($address,'66.150.96.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-060). ');
$ax += cidrblock($address,'66.150.144.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-061). ');
$ax += cidrblock($address,'66.150.160.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-062). ');
$ax += cidrblock($address,'66.150.192.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-063). ');
$ax += cidrblock($address,'66.151.0.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-064). ');
$ax += cidrblock($address,'66.151.96.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-065). ');
$ax += cidrblock($address,'66.151.128.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-066). ');
$ax += cidrblock($address,'66.151.220.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-067). ');
$ax += cidrblock($address,'66.151.224.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-068). ');
$ax += cidrblock($address,'66.171.192.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-069). ');
$ax += cidrblock($address,'67.20.50.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-070). ');
$ax += cidrblock($address,'67.20.52.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-071). ');
$ax += cidrblock($address,'67.20.57.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-072). ');
$ax += cidrblock($address,'67.20.58.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-073). ');
$ax += cidrblock($address,'67.20.61.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-074). ');
$ax += cidrblock($address,'67.20.62.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-075). ');
$ax += cidrblock($address,'67.215.161.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-076). ');
$ax += cidrblock($address,'67.215.170.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-077). ');
$ax += cidrblock($address,'67.215.173.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-078). ');
$ax += cidrblock($address,'67.215.174.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-079). ');
$ax += cidrblock($address,'67.215.177.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-080). ');
$ax += cidrblock($address,'67.215.179.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-081). ');
$ax += cidrblock($address,'67.215.180.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-082). ');
$ax += cidrblock($address,'67.215.182.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-083). ');
$ax += cidrblock($address,'67.215.186.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-084). ');
$ax += cidrblock($address,'67.215.189.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-085). ');
$ax += cidrblock($address,'69.25.0.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-086). ');
$ax += cidrblock($address,'69.25.64.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-087). ');
$ax += cidrblock($address,'69.25.101.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-088). ');
$ax += cidrblock($address,'69.25.120.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-089). ');
$ax += cidrblock($address,'69.25.128.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-090). ');
$ax += cidrblock($address,'69.25.192.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-091). ');
$ax += cidrblock($address,'69.25.224.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-092). ');
$ax += cidrblock($address,'69.25.240.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-093). ');
$ax += cidrblock($address,'69.52.134.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-094). ');
$ax += cidrblock($address,'69.87.208.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-095). ');
$ax += cidrblock($address,'69.88.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-096). ');
$ax += cidrblock($address,'69.88.144.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-097). ');
$ax += cidrblock($address,'69.88.152.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-098). ');
$ax += cidrblock($address,'69.88.154.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-099). ');
$ax += cidrblock($address,'69.88.158.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-100). ');
$ax += cidrblock($address,'70.42.8.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-101). ');
$ax += cidrblock($address,'70.42.24.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-102). ');
$ax += cidrblock($address,'70.42.32.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-103). ');
$ax += cidrblock($address,'70.42.64.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-104). ');
$ax += cidrblock($address,'70.42.128.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-105). ');
$ax += cidrblock($address,'70.42.160.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-106). ');
$ax += cidrblock($address,'70.42.176.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-107). ');
$ax += cidrblock($address,'70.42.192.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-108). ');
$ax += cidrblock($address,'70.42.216.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-109). ');
$ax += cidrblock($address,'70.42.224.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-110). ');
$ax += cidrblock($address,'70.42.240.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-111). ');
$ax += cidrblock($address,'72.5.3.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-112). ');
$ax += cidrblock($address,'72.5.16.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-113). ');
$ax += cidrblock($address,'72.5.42.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-114). ');
$ax += cidrblock($address,'72.5.48.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-115). ');
$ax += cidrblock($address,'72.5.64.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-116). ');
$ax += cidrblock($address,'72.5.96.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-117). ');
$ax += cidrblock($address,'72.5.120.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-118). ');
$ax += cidrblock($address,'72.5.130.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-119). ');
$ax += cidrblock($address,'72.5.144.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-120). ');
$ax += cidrblock($address,'72.5.184.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-121). ');
$ax += cidrblock($address,'72.5.192.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-122). ');
$ax += cidrblock($address,'72.5.224.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-123). ');
$ax += cidrblock($address,'72.5.233.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-124). ');
$ax += cidrblock($address,'72.5.248.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-125). ');
$ax += cidrblock($address,'72.44.88.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-126). ');
$ax += cidrblock($address,'72.44.93.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-127). ');
$ax += cidrblock($address,'72.44.94.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-128). ');
$ax += cidrblock($address,'74.91.112.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-129). ');
$ax += cidrblock($address,'74.91.114.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-130). ');
$ax += cidrblock($address,'74.91.116.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-131). ');
$ax += cidrblock($address,'74.91.118.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-132). ');
$ax += cidrblock($address,'74.91.120.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-133). ');
$ax += cidrblock($address,'74.91.123.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-134). ');
$ax += cidrblock($address,'74.91.126.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-135). ');
$ax += cidrblock($address,'74.116.112.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-136). ');
$ax += cidrblock($address,'74.118.48.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-137). ');
$ax += cidrblock($address,'74.118.108.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-138). ');
$ax += cidrblock($address,'74.201.0.0/16','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-139). ');
$ax += cidrblock($address,'74.217.0.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-140). ');
$ax += cidrblock($address,'74.217.24.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-141). ');
$ax += cidrblock($address,'74.217.32.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-142). ');
$ax += cidrblock($address,'74.217.64.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-143). ');
$ax += cidrblock($address,'74.217.96.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-144). ');
$ax += cidrblock($address,'74.217.112.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-145). ');
$ax += cidrblock($address,'74.217.116.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-146). ');
$ax += cidrblock($address,'74.217.120.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-147). ');
$ax += cidrblock($address,'74.217.128.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-148). ');
$ax += cidrblock($address,'74.217.208.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-149). ');
$ax += cidrblock($address,'74.217.224.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-150). ');
$ax += cidrblock($address,'75.98.0.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-151). ');
$ax += cidrblock($address,'75.98.64.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-152). ');
$ax += cidrblock($address,'95.172.77.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-153). ');
$ax += cidrblock($address,'104.37.120.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-154). ');
$ax += cidrblock($address,'104.152.224.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-155). ');
$ax += cidrblock($address,'104.153.104.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-156). ');
$ax += cidrblock($address,'104.153.106.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-157). ');
$ax += cidrblock($address,'104.153.110.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-158). ');
$ax += cidrblock($address,'104.193.148.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-159). ');
$ax += cidrblock($address,'107.150.128.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-160). ');
$ax += cidrblock($address,'107.180.128.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-161). ');
$ax += cidrblock($address,'107.180.160.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-162). ');
$ax += cidrblock($address,'107.180.192.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-163). ');
$ax += cidrblock($address,'110.34.56.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-164). ');
$ax += cidrblock($address,'119.59.72.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-165). ');
$ax += cidrblock($address,'122.200.32.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-166). ');
$ax += cidrblock($address,'123.108.0.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-167). ');
$ax += cidrblock($address,'130.50.200.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-168). ');
$ax += cidrblock($address,'138.36.16.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-169). ');
$ax += cidrblock($address,'142.54.20.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-170). ');
$ax += cidrblock($address,'142.75.16.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-171). ');
$ax += cidrblock($address,'144.208.128.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-172). ');
$ax += cidrblock($address,'149.114.0.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-173). ');
$ax += cidrblock($address,'162.210.172.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-174). ');
$ax += cidrblock($address,'162.210.174.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-175). ');
$ax += cidrblock($address,'162.217.8.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-176). ');
$ax += cidrblock($address,'162.248.89.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-177). ');
$ax += cidrblock($address,'162.248.90.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-178). ');
$ax += cidrblock($address,'162.248.95.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-179). ');
$ax += cidrblock($address,'162.251.0.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-180). ');
$ax += cidrblock($address,'167.173.201.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-181). ');
$ax += cidrblock($address,'171.20.53.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-182). ');
$ax += cidrblock($address,'171.20.54.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-183). ');
$ax += cidrblock($address,'173.230.224.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-184). ');
$ax += cidrblock($address,'173.230.230.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-185). ');
$ax += cidrblock($address,'173.230.235.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-186). ');
$ax += cidrblock($address,'173.230.238.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-187). ');
$ax += cidrblock($address,'173.249.144.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-188). ');
$ax += cidrblock($address,'173.249.149.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-189). ');
$ax += cidrblock($address,'173.249.150.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-190). ');
$ax += cidrblock($address,'173.249.152.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-191). ');
$ax += cidrblock($address,'174.34.48.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-192). ');
$ax += cidrblock($address,'178.22.10.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-193). ');
$ax += cidrblock($address,'178.22.13.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-194). ');
$ax += cidrblock($address,'181.225.136.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-195). ');
$ax += cidrblock($address,'184.94.220.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-196). ');
$ax += cidrblock($address,'185.100.40.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-197). ');
$ax += cidrblock($address,'192.30.228.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-198). ');
$ax += cidrblock($address,'192.43.206.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-199). ');
$ax += cidrblock($address,'192.69.113.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-200). ');
$ax += cidrblock($address,'192.74.134.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-201). ');
$ax += cidrblock($address,'192.92.8.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-202). ');
$ax += cidrblock($address,'192.112.255.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-203). ');
$ax += cidrblock($address,'192.163.20.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-204). ');
$ax += cidrblock($address,'192.195.4.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-205). ');
$ax += cidrblock($address,'192.203.198.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-206). ');
$ax += cidrblock($address,'192.223.24.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-207). ');
$ax += cidrblock($address,'192.223.27.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-208). ');
$ax += cidrblock($address,'192.223.28.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-209). ');
$ax += cidrblock($address,'192.223.31.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-210). ');
$ax += cidrblock($address,'192.234.105.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-211). ');
$ax += cidrblock($address,'198.72.80.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-212). ');
$ax += cidrblock($address,'198.72.82.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-213). ');
$ax += cidrblock($address,'199.19.124.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-214). ');
$ax += cidrblock($address,'199.19.142.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-215). ');
$ax += cidrblock($address,'199.19.187.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-216). ');
$ax += cidrblock($address,'199.21.76.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-217). ');
$ax += cidrblock($address,'199.21.80.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-218). ');
$ax += cidrblock($address,'199.30.64.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-219). ');
$ax += cidrblock($address,'199.48.252.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-220). ');
$ax += cidrblock($address,'199.168.132.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-221). ');
$ax += cidrblock($address,'199.233.179.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-222). ');
$ax += cidrblock($address,'199.244.252.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-223). ');
$ax += cidrblock($address,'199.245.176.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-224). ');
$ax += cidrblock($address,'200.50.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-225). ');
$ax += cidrblock($address,'202.56.8.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-226). ');
$ax += cidrblock($address,'202.58.100.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-227). ');
$ax += cidrblock($address,'203.169.8.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-228). ');
$ax += cidrblock($address,'203.190.120.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-229). ');
$ax += cidrblock($address,'204.9.43.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-230). ');
$ax += cidrblock($address,'204.75.186.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-231). ');
$ax += cidrblock($address,'204.145.96.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-232). ');
$ax += cidrblock($address,'204.153.219.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-233). ');
$ax += cidrblock($address,'204.227.65.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-234). ');
$ax += cidrblock($address,'204.227.77.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-235). ');
$ax += cidrblock($address,'204.238.150.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-236). ');
$ax += cidrblock($address,'204.239.214.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-237). ');
$ax += cidrblock($address,'206.191.128.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-238). ');
$ax += cidrblock($address,'206.191.144.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-239). ');
$ax += cidrblock($address,'206.191.160.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-240). ');
$ax += cidrblock($address,'206.191.176.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-241). ');
$ax += cidrblock($address,'206.251.192.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-242). ');
$ax += cidrblock($address,'206.253.192.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-243). ');
$ax += cidrblock($address,'206.253.208.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-244). ');
$ax += cidrblock($address,'208.64.56.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-245). ');
$ax += cidrblock($address,'208.75.208.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-246). ');
$ax += cidrblock($address,'208.76.24.0/22','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-247). ');
$ax += cidrblock($address,'208.95.255.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-248). ');
$ax += cidrblock($address,'208.100.7.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-249). ');
$ax += cidrblock($address,'208.100.55.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-250). ');
$ax += cidrblock($address,'208.100.59.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-251). ');
$ax += cidrblock($address,'208.146.32.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-252). ');
$ax += cidrblock($address,'209.191.160.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-253). ');
$ax += cidrblock($address,'210.193.64.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-254). ');
$ax += cidrblock($address,'216.52.28.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-255). ');
$ax += cidrblock($address,'216.52.32.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-256). ');
$ax += cidrblock($address,'216.52.88.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-257). ');
$ax += cidrblock($address,'216.52.112.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-258). ');
$ax += cidrblock($address,'216.52.142.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-259). ');
$ax += cidrblock($address,'216.52.158.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-260). ');
$ax += cidrblock($address,'216.52.160.0/21','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-261). ');
$ax += cidrblock($address,'216.52.176.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-262). ');
$ax += cidrblock($address,'216.52.192.0/18','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-263). ');
$ax += cidrblock($address,'216.82.95.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-264). ');
$ax += cidrblock($address,'216.133.224.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-265). ');
$ax += cidrblock($address,'216.162.205.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-266). ');
$ax += cidrblock($address,'216.162.208.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-267). ');
$ax += cidrblock($address,'216.162.211.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-268). ');
$ax += cidrblock($address,'216.162.218.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-269). ');
$ax += cidrblock($address,'216.223.0.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-270). ');
$ax += cidrblock($address,'216.223.36.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-271). ');
$ax += cidrblock($address,'216.228.228.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-272). ');
$ax += cidrblock($address,'216.228.236.0/23','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-273). ');
$ax += cidrblock($address,'216.245.17.0/24','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-274). ');
$ax += cidrblock($address,'218.40.144.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-275). ');
$ax += cidrblock($address,'218.216.96.0/20','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-276). ');
$ax += cidrblock($address,'219.96.96.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-277). ');
$ax += cidrblock($address,'219.113.0.0/19','Internap Network Services Corporation, Cloud and CDN, not an access provider (ASN-INAP-278). ');


// WEBSUPPORT-SRO-SK-AS (updated 2016.01.21 / checked 2016.03.13)
// AS51013
$ax += cidrblock($address,'37.9.168.0/21','Nasty slovak proxy service, participated in DoS attack (ASN-WEBSUP-0). ');
$ax += cidrblock($address,'185.111.88.0/22','Nasty slovak proxy service, participated in DoS attack (ASN-WEBSUP-1). ');
$ax += cidrblock($address,'195.210.28.0/23','Nasty slovak proxy service, participated in DoS attack (ASN-WEBSUP-2). ');


// XIRRA GmbH (updated 2015.09.03 / checked 2016.03.30)
// AS51191
$ax += cidrblock($address,'91.232.96.0/23','XIRRA (ASN-XIRRA-1). ');
$ax += cidrblock($address,'130.185.104.0/21','XIRRA (ASN-XIRRA-2). ');
$ax += cidrblock($address,'185.24.68.0/22','XIRRA (ASN-XIRRA-3). ');
$ax += cidrblock($address,'185.108.216.0/22','XIRRA (ASN-XIRRA-4). ');
$ax += cidrblock($address,'195.138.240.0/21','XIRRA (ASN-XIRRA-5). ');


// WOWRACK Routing from Hyper to Wowrack
// Should not be contacting servers outside of routing purposes,
// but is participating in attacks nonetheless.
// AS23033 HE Rank: 1163 (updated 2016.03.15)
$ax += cidrblock($address,'50.115.160.0/20','Wowrack AS23033 (ASN-WOWRACK-00). ');
$ax += cidrblock($address,'74.121.184.0/21','Wowrack AS23033 (ASN-WOWRACK-01). ');
$ax += cidrblock($address,'76.191.81.0/24','Wowrack AS23033 (ASN-WOWRACK-02). ');
$ax += cidrblock($address,'76.191.82.0/23','Wowrack AS23033 (ASN-WOWRACK-03). ');
$ax += cidrblock($address,'173.0.48.0/20','Wowrack AS23033 (ASN-WOWRACK-04). ');
$ax += cidrblock($address,'192.34.108.0/22','Wowrack AS23033 (ASN-WOWRACK-05). ');
$ax += cidrblock($address,'192.251.193.0/24','Wowrack AS23033 (ASN-WOWRACK-06). ');
$ax += cidrblock($address,'198.167.136.0/21','Wowrack AS23033 (ASN-WOWRACK-07). ');
$ax += cidrblock($address,'198.175.124.0/22','Wowrack AS23033 (ASN-WOWRACK-08). ');
$ax += cidrblock($address,'199.119.224.0/22','Wowrack AS23033 (ASN-WOWRACK-09). ');
$ax += cidrblock($address,'199.180.128.0/21','Wowrack AS23033 (ASN-WOWRACK-10). ');
$ax += cidrblock($address,'207.244.144.0/20','Wowrack AS23033 (ASN-WOWRACK-11). ');
$ax += cidrblock($address,'208.89.208.0/21','Wowrack AS23033 (ASN-WOWRACK-12). ');
$ax += cidrblock($address,'208.115.96.0/19','Wowrack AS23033 (ASN-WOWRACK-13). ');
$ax += cidrblock($address,'209.40.200.0/24','Wowrack AS23033 (ASN-WOWRACK-14). ');
$ax += cidrblock($address,'209.90.224.0/20','Wowrack AS23033 (ASN-WOWRACK-15). ');
$ax += cidrblock($address,'216.176.176.0/20','Wowrack AS23033 (ASN-WOWRACK-16). ');
$ax += cidrblock($address,'216.244.64.0/19','Wowrack AS23033 (ASN-WOWRACK-17). ');


// HyperHosting (updated 2016.01.21 / checked 2016.04.03)
// AS197746
$ax += cidrblock($address,'31.22.112.0/23','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-1). ');
$ax += cidrblock($address,'31.22.115.0/24','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-2). ');
$ax += cidrblock($address,'31.22.118.0/23','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-3). ');
$ax += cidrblock($address,'62.1.216.0/24','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-4). ');
$ax += cidrblock($address,'185.23.88.0/23','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-5). ');
$ax += cidrblock($address,'194.219.79.0/24','HyperHosting, Cloud and CDN, not an access provider (ASN-HYPERHOST-6). ');


// SWIFT VENTURES Inc (updated 2016.01.22 / checked 2016.03.20)
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


// iDeal Hosting Tic. Ltd. Sti. (updated 2016.03.28)
// Turkish host provider caught hammering honeypots
// AS29262, AS60897
$ax += cidrblock($address,'185.85.189.0/24','iDeal Hosting (ASN-iDEAL-00). ');
$ax += cidrblock($address,'185.85.190.0/23','iDeal Hosting (ASN-iDEAL-01). ');
$ax += cidrblock($address,'185.85.237.0/24','iDeal Hosting (ASN-iDEAL-02). ');
$ax += cidrblock($address,'185.85.238.0/23','iDeal Hosting (ASN-iDEAL-03). ');
$ax += cidrblock($address,'185.86.5.0/24','iDeal Hosting (ASN-iDEAL-04). ');
$ax += cidrblock($address,'185.86.153.0/24','iDeal Hosting (ASN-iDEAL-05). ');
$ax += cidrblock($address,'185.86.154.0/24','iDeal Hosting (ASN-iDEAL-06). ');
$ax += cidrblock($address,'185.86.164.0/22','iDeal Hosting (ASN-iDEAL-07). ');
$ax += cidrblock($address,'185.87.26.0/23','iDeal Hosting (ASN-iDEAL-08). ');
$ax += cidrblock($address,'185.87.121.0/24','iDeal Hosting (ASN-iDEAL-09). ');
$ax += cidrblock($address,'185.87.122.0/23','iDeal Hosting (ASN-iDEAL-10). ');
$ax += cidrblock($address,'185.98.60.0/24','iDeal Hosting (ASN-iDEAL-11). ');
$ax += cidrblock($address,'185.119.80.0/23','iDeal Hosting (ASN-iDEAL-12). ');
$ax += cidrblock($address,'185.119.82.0/24','iDeal Hosting (ASN-iDEAL-13). ');
$ax += cidrblock($address,'213.238.178.0/23','iDeal Hosting (ASN-iDEAL-14). ');


// CyberVerse (Colocated Data Centers)
// AS11051 (updated 2016.01.22 / checked 2016.03.15)
$ax += cidrblock($address,'66.172.0.0/18','CyberVerse (ASN-CBRVRS-0). ');
$ax += cidrblock($address,'66.180.192.0/20','CyberVerse (ASN-CBRVRS-1). ');
$ax += cidrblock($address,'76.8.16.0/20','CyberVerse (ASN-CBRVRS-2). ');
$ax += cidrblock($address,'184.170.144.0/20','CyberVerse (ASN-CBRVRS-3). ');
$ax += cidrblock($address,'208.80.183.0/24','CyberVerse (ASN-CBRVRS-4). ');
$ax += cidrblock($address,'209.151.224.0/19','CyberVerse (ASN-CBRVRS-5). ');
$ax += cidrblock($address,'216.176.192.0/20','CyberVerse (ASN-CBRVRS-6). ');


// CoreSpace, Inc.
// AS54489 (updated 2016.04.03)
$ax += cidrblock($address,'44.110.0.0/24','CoreSpace (ASN-54489-00). ');
$ax += cidrblock($address,'63.249.128.0/17','CoreSpace (ASN-54489-01). ');
$ax += cidrblock($address,'64.182.0.0/16','CoreSpace (ASN-54489-02). ');
$ax += cidrblock($address,'66.34.0.0/16','CoreSpace (ASN-54489-03). ');
$ax += cidrblock($address,'66.221.0.0/16','CoreSpace (ASN-54489-04). ');
$ax += cidrblock($address,'69.13.0.0/16','CoreSpace (ASN-54489-05). ');
$ax += cidrblock($address,'198.73.50.0/24','CoreSpace (ASN-54489-06). ');
$ax += cidrblock($address,'198.232.139.0/24','CoreSpace (ASN-54489-07). ');
$ax += cidrblock($address,'209.164.64.0/18','CoreSpace (ASN-54489-08). ');
$ax += cidrblock($address,'216.19.223.0/24','CoreSpace (ASN-54489-09). ');
$ax += cidrblock($address,'216.97.0.0/17','CoreSpace (ASN-54489-10). ');
$ax += cidrblock($address,'216.221.160.0/19','CoreSpace (ASN-54489-11). ');


// Black Lotus Communications
// AS32421, AS26458 (updated 2016.04.03)
$ax += cidrblock($address,'38.73.64.0/20','Black Lotus Communications (ASN-BLACKLOTUS-00). ');
$ax += cidrblock($address,'38.73.104.0/21','Black Lotus Communications (ASN-BLACKLOTUS-01). ');
$ax += cidrblock($address,'45.58.15.0/24','Black Lotus Communications (ASN-BLACKLOTUS-02). ');
$ax += cidrblock($address,'64.94.82.0/24','Black Lotus Communications (ASN-BLACKLOTUS-03). ');
$ax += cidrblock($address,'65.77.130.0/24','Black Lotus Communications (ASN-BLACKLOTUS-04). ');
$ax += cidrblock($address,'98.158.16.0/20','Black Lotus Communications (ASN-BLACKLOTUS-05). ');
$ax += cidrblock($address,'162.222.104.0/22','Black Lotus Communications (ASN-BLACKLOTUS-06). ');
$ax += cidrblock($address,'162.252.52.0/22','Black Lotus Communications (ASN-BLACKLOTUS-07). ');
$ax += cidrblock($address,'162.254.240.0/22','Black Lotus Communications (ASN-BLACKLOTUS-08). ');
$ax += cidrblock($address,'185.55.52.0/22','Black Lotus Communications (ASN-BLACKLOTUS-09). ');
$ax += cidrblock($address,'192.31.184.0/22','Black Lotus Communications (ASN-BLACKLOTUS-10). ');
$ax += cidrblock($address,'192.184.8.0/21','Black Lotus Communications (ASN-BLACKLOTUS-11). ');
$ax += cidrblock($address,'199.30.88.0/21','Black Lotus Communications (ASN-BLACKLOTUS-12). ');
$ax += cidrblock($address,'199.59.160.0/21','Black Lotus Communications (ASN-BLACKLOTUS-13). ');
$ax += cidrblock($address,'199.250.60.0/22','Black Lotus Communications (ASN-BLACKLOTUS-14). ');
$ax += cidrblock($address,'208.64.120.0/21','Black Lotus Communications (ASN-BLACKLOTUS-15). ');
$ax += cidrblock($address,'216.21.4.0/24','Black Lotus Communications (ASN-BLACKLOTUS-16). ');
$ax += cidrblock($address,'216.21.6.0/24','Black Lotus Communications (ASN-BLACKLOTUS-17). ');


// Quadranet (updated 2016.06.09)
// AS8100, AS29761, AS62639
$ax += cidrblock($address,'23.92.52.0/22','Quadranet, not an access provider (ASN-QUADRA-000). ');
$ax += cidrblock($address,'23.152.0.0/24','Quadranet, not an access provider (ASN-QUADRA-001). ');
$ax += cidrblock($address,'23.226.128.0/20','Quadranet, not an access provider (ASN-QUADRA-002). ');
$ax += cidrblock($address,'23.249.240.0/20','Quadranet, not an access provider (ASN-QUADRA-003). ');
$ax += cidrblock($address,'43.229.18.0/23','Quadranet, not an access provider (ASN-QUADRA-004). ');
$ax += cidrblock($address,'43.251.8.0/22','Quadranet, not an access provider (ASN-QUADRA-005). ');
$ax += cidrblock($address,'45.41.140.0/22','Quadranet, not an access provider (ASN-QUADRA-006). ');
$ax += cidrblock($address,'45.56.144.0/22','Quadranet, not an access provider (ASN-QUADRA-007). ');
$ax += cidrblock($address,'45.61.112.0/20','Quadranet, not an access provider (ASN-QUADRA-008). ');
$ax += cidrblock($address,'45.62.96.0/20','Quadranet, not an access provider (ASN-QUADRA-009). ');
$ax += cidrblock($address,'45.118.124.0/22','Quadranet, not an access provider (ASN-QUADRA-010). ');
$ax += cidrblock($address,'45.120.4.0/22','Quadranet, not an access provider (ASN-QUADRA-011). ');
$ax += cidrblock($address,'59.153.62.0/24','Quadranet, not an access provider (ASN-QUADRA-012). ');
$ax += cidrblock($address,'63.142.240.0/22','Quadranet, not an access provider (ASN-QUADRA-013). ');
$ax += cidrblock($address,'63.142.248.0/23','Quadranet, not an access provider (ASN-QUADRA-014). ');
$ax += cidrblock($address,'64.57.132.0/24','Quadranet, not an access provider (ASN-QUADRA-015). ');
$ax += cidrblock($address,'64.110.129.0/24','Quadranet, not an access provider (ASN-QUADRA-016). ');
$ax += cidrblock($address,'64.110.130.0/24','Quadranet, not an access provider (ASN-QUADRA-017). ');
$ax += cidrblock($address,'66.55.76.0/24','Quadranet, not an access provider (ASN-QUADRA-018). ');
$ax += cidrblock($address,'66.63.160.0/19','Quadranet, not an access provider (ASN-QUADRA-019). ');
$ax += cidrblock($address,'66.85.26.0/23','Quadranet, not an access provider (ASN-QUADRA-020). ');
$ax += cidrblock($address,'66.154.96.0/19','Quadranet, not an access provider (ASN-QUADRA-021). ');
$ax += cidrblock($address,'66.212.16.0/20','Quadranet, not an access provider (ASN-QUADRA-022). ');
$ax += cidrblock($address,'67.215.224.0/19','Quadranet, not an access provider (ASN-QUADRA-023). ');
$ax += cidrblock($address,'69.12.64.0/19','Quadranet, not an access provider (ASN-QUADRA-024). ');
$ax += cidrblock($address,'69.174.96.0/21','Quadranet, not an access provider (ASN-QUADRA-025). ');
$ax += cidrblock($address,'72.11.128.0/19','Quadranet, not an access provider (ASN-QUADRA-026). ');
$ax += cidrblock($address,'96.44.128.0/18','Quadranet, not an access provider (ASN-QUADRA-027). ');
$ax += cidrblock($address,'96.47.224.0/20','Quadranet, not an access provider (ASN-QUADRA-028). ');
$ax += cidrblock($address,'98.143.144.0/20','Quadranet, not an access provider (ASN-QUADRA-029). ');
$ax += cidrblock($address,'103.21.208.0/22','Quadranet, not an access provider (ASN-QUADRA-030). ');
$ax += cidrblock($address,'103.58.176.0/22','Quadranet, not an access provider (ASN-QUADRA-031). ');
$ax += cidrblock($address,'103.60.64.0/22','Quadranet, not an access provider (ASN-QUADRA-032). ');
$ax += cidrblock($address,'103.235.4.0/24','Quadranet, not an access provider (ASN-QUADRA-033). ');
$ax += cidrblock($address,'103.236.221.0/24','Quadranet, not an access provider (ASN-QUADRA-034). ');
$ax += cidrblock($address,'103.236.222.0/23','Quadranet, not an access provider (ASN-QUADRA-035). ');
$ax += cidrblock($address,'103.238.80.0/22','Quadranet, not an access provider (ASN-QUADRA-036). ');
$ax += cidrblock($address,'104.37.0.0/24','Quadranet, not an access provider (ASN-QUADRA-037). ');
$ax += cidrblock($address,'104.37.4.0/24','Quadranet, not an access provider (ASN-QUADRA-038). ');
$ax += cidrblock($address,'104.37.59.0/24','Quadranet, not an access provider (ASN-QUADRA-039). ');
$ax += cidrblock($address,'104.129.0.0/18','Quadranet, not an access provider (ASN-QUADRA-040). ');
$ax += cidrblock($address,'104.143.33.0/24','Quadranet, not an access provider (ASN-QUADRA-041). ');
$ax += cidrblock($address,'104.143.88.0/22','Quadranet, not an access provider (ASN-QUADRA-042). ');
$ax += cidrblock($address,'104.192.28.0/22','Quadranet, not an access provider (ASN-QUADRA-043). ');
$ax += cidrblock($address,'104.194.76.0/22','Quadranet, not an access provider (ASN-QUADRA-044). ');
$ax += cidrblock($address,'104.194.192.0/22','Quadranet, not an access provider (ASN-QUADRA-045). ');
$ax += cidrblock($address,'104.200.160.0/20','Quadranet, not an access provider (ASN-QUADRA-046). ');
$ax += cidrblock($address,'104.223.0.0/17','Quadranet, not an access provider (ASN-QUADRA-047). ');
$ax += cidrblock($address,'104.224.128.0/21','Quadranet, not an access provider (ASN-QUADRA-048). ');
$ax += cidrblock($address,'104.224.152.0/21','Quadranet, not an access provider (ASN-QUADRA-049). ');
$ax += cidrblock($address,'104.224.160.0/21','Quadranet, not an access provider (ASN-QUADRA-050). ');
$ax += cidrblock($address,'104.238.33.0/24','Quadranet, not an access provider (ASN-QUADRA-051). ');
$ax += cidrblock($address,'104.238.46.0/23','Quadranet, not an access provider (ASN-QUADRA-052). ');
$ax += cidrblock($address,'104.243.246.0/24','Quadranet, not an access provider (ASN-QUADRA-053). ');
$ax += cidrblock($address,'104.244.7.0/24','Quadranet, not an access provider (ASN-QUADRA-054). ');
$ax += cidrblock($address,'104.245.240.0/21','Quadranet, not an access provider (ASN-QUADRA-055). ');
$ax += cidrblock($address,'104.250.163.0/24','Quadranet, not an access provider (ASN-QUADRA-056). ');
$ax += cidrblock($address,'104.250.174.0/24','Quadranet, not an access provider (ASN-QUADRA-057). ');
$ax += cidrblock($address,'104.250.178.0/24','Quadranet, not an access provider (ASN-QUADRA-058). ');
$ax += cidrblock($address,'104.251.180.0/22','Quadranet, not an access provider (ASN-QUADRA-059). ');
$ax += cidrblock($address,'104.251.186.0/23','Quadranet, not an access provider (ASN-QUADRA-060). ');
$ax += cidrblock($address,'104.251.208.0/23','Quadranet, not an access provider (ASN-QUADRA-061). ');
$ax += cidrblock($address,'104.254.61.0/24','Quadranet, not an access provider (ASN-QUADRA-062). ');
$ax += cidrblock($address,'104.255.220.0/22','Quadranet, not an access provider (ASN-QUADRA-063). ');
$ax += cidrblock($address,'104.255.225.0/24','Quadranet, not an access provider (ASN-QUADRA-064). ');
$ax += cidrblock($address,'107.150.0.0/20','Quadranet, not an access provider (ASN-QUADRA-065). ');
$ax += cidrblock($address,'107.150.16.0/22','Quadranet, not an access provider (ASN-QUADRA-066). ');
$ax += cidrblock($address,'107.150.20.0/23','Quadranet, not an access provider (ASN-QUADRA-067). ');
$ax += cidrblock($address,'107.150.25.0/24','Quadranet, not an access provider (ASN-QUADRA-068). ');
$ax += cidrblock($address,'107.150.26.0/24','Quadranet, not an access provider (ASN-QUADRA-069). ');
$ax += cidrblock($address,'107.150.30.0/23','Quadranet, not an access provider (ASN-QUADRA-070). ');
$ax += cidrblock($address,'107.161.80.0/20','Quadranet, not an access provider (ASN-QUADRA-071). ');
$ax += cidrblock($address,'107.167.32.0/19','Quadranet, not an access provider (ASN-QUADRA-072). ');
$ax += cidrblock($address,'107.178.140.0/22','Quadranet, not an access provider (ASN-QUADRA-073). ');
$ax += cidrblock($address,'107.181.77.0/24','Quadranet, not an access provider (ASN-QUADRA-074). ');
$ax += cidrblock($address,'138.128.192.0/20','Quadranet, not an access provider (ASN-QUADRA-075). ');
$ax += cidrblock($address,'138.128.220.0/22','Quadranet, not an access provider (ASN-QUADRA-076). ');
$ax += cidrblock($address,'146.71.32.0/20','Quadranet, not an access provider (ASN-QUADRA-077). ');
$ax += cidrblock($address,'146.148.160.0/21','Quadranet, not an access provider (ASN-QUADRA-078). ');
$ax += cidrblock($address,'154.16.108.0/22','Quadranet, not an access provider (ASN-QUADRA-079). ');
$ax += cidrblock($address,'154.16.160.0/22','Quadranet, not an access provider (ASN-QUADRA-080). ');
$ax += cidrblock($address,'154.16.166.0/24','Quadranet, not an access provider (ASN-QUADRA-081). ');
$ax += cidrblock($address,'155.94.128.0/17','Quadranet, not an access provider (ASN-QUADRA-082). ');
$ax += cidrblock($address,'155.254.38.0/24','Quadranet, not an access provider (ASN-QUADRA-083). ');
$ax += cidrblock($address,'160.202.168.0/22','Quadranet, not an access provider (ASN-QUADRA-084). ');
$ax += cidrblock($address,'162.211.65.0/24','Quadranet, not an access provider (ASN-QUADRA-085). ');
$ax += cidrblock($address,'162.211.67.0/24','Quadranet, not an access provider (ASN-QUADRA-086). ');
$ax += cidrblock($address,'162.218.208.0/22','Quadranet, not an access provider (ASN-QUADRA-087). ');
$ax += cidrblock($address,'162.220.8.0/21','Quadranet, not an access provider (ASN-QUADRA-088). ');
$ax += cidrblock($address,'162.220.244.0/24','Quadranet, not an access provider (ASN-QUADRA-089). ');
$ax += cidrblock($address,'162.245.184.0/21','Quadranet, not an access provider (ASN-QUADRA-090). ');
$ax += cidrblock($address,'162.253.178.0/23','Quadranet, not an access provider (ASN-QUADRA-091). ');
$ax += cidrblock($address,'167.160.36.0/24','Quadranet, not an access provider (ASN-QUADRA-092). ');
$ax += cidrblock($address,'167.160.160.0/19','Quadranet, not an access provider (ASN-QUADRA-093). ');
$ax += cidrblock($address,'172.97.70.0/24','Quadranet, not an access provider (ASN-QUADRA-094). ');
$ax += cidrblock($address,'172.110.24.0/24','Quadranet, not an access provider (ASN-QUADRA-095). ');
$ax += cidrblock($address,'173.44.32.0/19','Quadranet, not an access provider (ASN-QUADRA-096). ');
$ax += cidrblock($address,'173.205.80.0/20','Quadranet, not an access provider (ASN-QUADRA-097). ');
$ax += cidrblock($address,'173.254.192.0/18','Quadranet, not an access provider (ASN-QUADRA-098). ');
$ax += cidrblock($address,'183.182.10.0/24','Quadranet, not an access provider (ASN-QUADRA-99). ');
$ax += cidrblock($address,'185.73.128.0/22','Quadranet, not an access provider (ASN-QUADRA-100). ');
$ax += cidrblock($address,'185.121.152.0/24','Quadranet, not an access provider (ASN-QUADRA-101). ');
$ax += cidrblock($address,'192.52.166.0/23','Quadranet, not an access provider (ASN-QUADRA-102). ');
$ax += cidrblock($address,'192.119.140.0/22','Quadranet, not an access provider (ASN-QUADRA-103). ');
$ax += cidrblock($address,'192.161.48.0/20','Quadranet, not an access provider (ASN-QUADRA-104). ');
$ax += cidrblock($address,'192.161.160.0/19','Quadranet, not an access provider (ASN-QUADRA-105). ');
$ax += cidrblock($address,'192.169.6.0/23','Quadranet, not an access provider (ASN-QUADRA-106). ');
$ax += cidrblock($address,'192.189.2.0/24','Quadranet, not an access provider (ASN-QUADRA-107). ');
$ax += cidrblock($address,'192.225.224.0/22','Quadranet, not an access provider (ASN-QUADRA-108). ');
$ax += cidrblock($address,'192.225.228.0/23','Quadranet, not an access provider (ASN-QUADRA-109). ');
$ax += cidrblock($address,'193.17.68.0/24','Quadranet, not an access provider (ASN-QUADRA-110). ');
$ax += cidrblock($address,'193.30.161.0/24','Quadranet, not an access provider (ASN-QUADRA-111). ');
$ax += cidrblock($address,'193.200.30.0/24','Quadranet, not an access provider (ASN-QUADRA-112). ');
$ax += cidrblock($address,'195.137.220.0/23','Quadranet, not an access provider (ASN-QUADRA-113). ');
$ax += cidrblock($address,'198.55.96.0/19','Quadranet, not an access provider (ASN-QUADRA-114). ');
$ax += cidrblock($address,'198.96.88.0/21','Quadranet, not an access provider (ASN-QUADRA-115). ');
$ax += cidrblock($address,'198.175.228.0/24','Quadranet, not an access provider (ASN-QUADRA-116). ');
$ax += cidrblock($address,'198.180.167.0/24','Quadranet, not an access provider (ASN-QUADRA-117). ');
$ax += cidrblock($address,'199.89.0.0/23','Quadranet, not an access provider (ASN-QUADRA-118). ');
$ax += cidrblock($address,'199.180.254.0/23','Quadranet, not an access provider (ASN-QUADRA-119). ');
$ax += cidrblock($address,'199.202.223.0/24','Quadranet, not an access provider (ASN-QUADRA-120). ');
$ax += cidrblock($address,'199.249.182.0/24','Quadranet, not an access provider (ASN-QUADRA-121). ');
$ax += cidrblock($address,'202.131.55.0/24','Quadranet, not an access provider (ASN-QUADRA-122). ');
$ax += cidrblock($address,'203.7.164.0/24','Quadranet, not an access provider (ASN-QUADRA-123). ');
$ax += cidrblock($address,'204.44.64.0/18','Quadranet, not an access provider (ASN-QUADRA-124). ');
$ax += cidrblock($address,'204.152.192.0/19','Quadranet, not an access provider (ASN-QUADRA-125). ');
$ax += cidrblock($address,'206.126.96.0/24','Quadranet, not an access provider (ASN-QUADRA-126). ');
$ax += cidrblock($address,'207.246.200.0/24','Quadranet, not an access provider (ASN-QUADRA-127). ');
$ax += cidrblock($address,'216.45.48.0/20','Quadranet, not an access provider (ASN-QUADRA-128). ');
$ax += cidrblock($address,'216.144.224.0/20','Quadranet, not an access provider (ASN-QUADRA-129). ');
$ax += cidrblock($address,'218.246.130.0/24','Quadranet, not an access provider (ASN-QUADRA-130). ');


// Colocrossing (updated 2016.02.27)
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
$ax += cidrblock($address,'45.59.112.0/24','Colocrossing Network, not an access provider (ASN-36352-019). ');
$ax += cidrblock($address,'45.74.2.0/24','Colocrossing Network, not an access provider (ASN-36352-020). ');
$ax += cidrblock($address,'65.99.193.0/24','Colocrossing Network, not an access provider (ASN-36352-021). ');
$ax += cidrblock($address,'65.99.246.0/24','Colocrossing Network, not an access provider (ASN-36352-022). ');
$ax += cidrblock($address,'66.225.194.0/23','Colocrossing Network, not an access provider (ASN-36352-023). ');
$ax += cidrblock($address,'66.225.198.0/24','Colocrossing Network, not an access provider (ASN-36352-024). ');
$ax += cidrblock($address,'66.225.231.0/24','Colocrossing Network, not an access provider (ASN-36352-025). ');
$ax += cidrblock($address,'66.225.232.0/24','Colocrossing Network, not an access provider (ASN-36352-026). ');
$ax += cidrblock($address,'69.31.134.0/24','Colocrossing Network, not an access provider (ASN-36352-027). ');
$ax += cidrblock($address,'72.249.94.0/24','Colocrossing Network, not an access provider (ASN-36352-028). ');
$ax += cidrblock($address,'72.249.124.0/24','Colocrossing Network, not an access provider (ASN-36352-029). ');
$ax += cidrblock($address,'75.102.10.0/24','Colocrossing Network, not an access provider (ASN-36352-030). ');
$ax += cidrblock($address,'75.102.27.0/24','Colocrossing Network, not an access provider (ASN-36352-031). ');
$ax += cidrblock($address,'75.102.34.0/24','Colocrossing Network, not an access provider (ASN-36352-032). ');
$ax += cidrblock($address,'75.102.38.0/23','Colocrossing Network, not an access provider (ASN-36352-033). ');
$ax += cidrblock($address,'75.127.0.0/20','Colocrossing Network, not an access provider (ASN-36352-034). ');
$ax += cidrblock($address,'96.8.112.0/20','Colocrossing Network, not an access provider (ASN-36352-035). ');
$ax += cidrblock($address,'104.128.231.0/24','Colocrossing Network, not an access provider (ASN-36352-036). ');
$ax += cidrblock($address,'104.128.232.0/24','Colocrossing Network, not an access provider (ASN-36352-037). ');
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
$ax += cidrblock($address,'107.172.144.0/21','Colocrossing Network, not an access provider (ASN-36352-056). ');
$ax += cidrblock($address,'107.172.152.0/22','Colocrossing Network, not an access provider (ASN-36352-057). ');
$ax += cidrblock($address,'107.172.158.0/23','Colocrossing Network, not an access provider (ASN-36352-058). ');
$ax += cidrblock($address,'107.172.160.0/19','Colocrossing Network, not an access provider (ASN-36352-059). ');
$ax += cidrblock($address,'107.172.192.0/18','Colocrossing Network, not an access provider (ASN-36352-060). ');
$ax += cidrblock($address,'107.173.0.0/16','Colocrossing Network, not an access provider (ASN-36352-061). ');
$ax += cidrblock($address,'107.174.0.0/15','Colocrossing Network, not an access provider (ASN-36352-062). ');
$ax += cidrblock($address,'108.174.48.0/20','Colocrossing Network, not an access provider (ASN-36352-063). ');
$ax += cidrblock($address,'138.128.112.0/20','Colocrossing Network, not an access provider (ASN-36352-064). ');
$ax += cidrblock($address,'162.218.88.0/21','Colocrossing Network, not an access provider (ASN-36352-065). ');
$ax += cidrblock($address,'162.221.176.0/21','Colocrossing Network, not an access provider (ASN-36352-066). ');
$ax += cidrblock($address,'172.87.240.0/20','Colocrossing Network, not an access provider (ASN-36352-067). ');
$ax += cidrblock($address,'172.102.160.0/19','Colocrossing Network, not an access provider (ASN-36352-068). ');
$ax += cidrblock($address,'172.245.0.0/19','Colocrossing Network, not an access provider (ASN-36352-069). ');
$ax += cidrblock($address,'172.245.32.0/20','Colocrossing Network, not an access provider (ASN-36352-070). ');
$ax += cidrblock($address,'172.245.54.0/23','Colocrossing Network, not an access provider (ASN-36352-071). ');
$ax += cidrblock($address,'172.245.56.0/21','Colocrossing Network, not an access provider (ASN-36352-072). ');
$ax += cidrblock($address,'172.245.64.0/18','Colocrossing Network, not an access provider (ASN-36352-073). ');
$ax += cidrblock($address,'172.245.128.0/19','Colocrossing Network, not an access provider (ASN-36352-074). ');
$ax += cidrblock($address,'172.245.176.0/21','Colocrossing Network, not an access provider (ASN-36352-075). ');
$ax += cidrblock($address,'172.245.184.0/22','Colocrossing Network, not an access provider (ASN-36352-076). ');
$ax += cidrblock($address,'172.245.189.0/24','Colocrossing Network, not an access provider (ASN-36352-077). ');
$ax += cidrblock($address,'172.245.190.0/23','Colocrossing Network, not an access provider (ASN-36352-078). ');
$ax += cidrblock($address,'172.245.208.0/20','Colocrossing Network, not an access provider (ASN-36352-079). ');
$ax += cidrblock($address,'172.245.224.0/19','Colocrossing Network, not an access provider (ASN-36352-080). ');
$ax += cidrblock($address,'179.61.192.0/24','Colocrossing Network, not an access provider (ASN-36352-081). ');
$ax += cidrblock($address,'179.61.253.0/24','Colocrossing Network, not an access provider (ASN-36352-082). ');
$ax += cidrblock($address,'191.101.50.0/24','Colocrossing Network, not an access provider (ASN-36352-083). ');
$ax += cidrblock($address,'192.3.0.0/18','Colocrossing Network, not an access provider (ASN-36352-084). ');
$ax += cidrblock($address,'192.3.80.0/20','Colocrossing Network, not an access provider (ASN-36352-085). ');
$ax += cidrblock($address,'192.3.96.0/19','Colocrossing Network, not an access provider (ASN-36352-086). ');
$ax += cidrblock($address,'192.3.128.0/18','Colocrossing Network, not an access provider (ASN-36352-087). ');
$ax += cidrblock($address,'192.3.192.0/19','Colocrossing Network, not an access provider (ASN-36352-088). ');
$ax += cidrblock($address,'192.3.228.0/22','Colocrossing Network, not an access provider (ASN-36352-089). ');
$ax += cidrblock($address,'192.3.232.0/21','Colocrossing Network, not an access provider (ASN-36352-090). ');
$ax += cidrblock($address,'192.3.240.0/20','Colocrossing Network, not an access provider (ASN-36352-091). ');
$ax += cidrblock($address,'192.157.30.0/24','Colocrossing Network, not an access provider (ASN-36352-092). ');
$ax += cidrblock($address,'192.210.128.0/20','Colocrossing Network, not an access provider (ASN-36352-093). ');
$ax += cidrblock($address,'192.210.144.0/21','Colocrossing Network, not an access provider (ASN-36352-094). ');
$ax += cidrblock($address,'192.210.160.0/19','Colocrossing Network, not an access provider (ASN-36352-095). ');
$ax += cidrblock($address,'192.210.192.0/19','Colocrossing Network, not an access provider (ASN-36352-096). ');
$ax += cidrblock($address,'192.210.226.0/23','Colocrossing Network, not an access provider (ASN-36352-097). ');
$ax += cidrblock($address,'192.210.228.0/22','Colocrossing Network, not an access provider (ASN-36352-098). ');
$ax += cidrblock($address,'192.210.232.0/21','Colocrossing Network, not an access provider (ASN-36352-099). ');
$ax += cidrblock($address,'192.210.240.0/20','Colocrossing Network, not an access provider (ASN-36352-100). ');
$ax += cidrblock($address,'192.227.128.0/20','Colocrossing Network, not an access provider (ASN-36352-101). ');
$ax += cidrblock($address,'192.227.144.0/22','Colocrossing Network, not an access provider (ASN-36352-102). ');
$ax += cidrblock($address,'192.227.149.0/24','Colocrossing Network, not an access provider (ASN-36352-103). ');
$ax += cidrblock($address,'192.227.152.0/22','Colocrossing Network, not an access provider (ASN-36352-104). ');
$ax += cidrblock($address,'192.227.158.0/24','Colocrossing Network, not an access provider (ASN-36352-105). ');
$ax += cidrblock($address,'192.227.160.0/19','Colocrossing Network, not an access provider (ASN-36352-106). ');
$ax += cidrblock($address,'192.227.192.0/18','Colocrossing Network, not an access provider (ASN-36352-107). ');
$ax += cidrblock($address,'198.12.64.0/18','Colocrossing Network, not an access provider (ASN-36352-108). ');
$ax += cidrblock($address,'198.23.128.0/19','Colocrossing Network, not an access provider (ASN-36352-109). ');
$ax += cidrblock($address,'198.23.160.0/23','Colocrossing Network, not an access provider (ASN-36352-110). ');
$ax += cidrblock($address,'198.23.164.0/22','Colocrossing Network, not an access provider (ASN-36352-111). ');
$ax += cidrblock($address,'198.23.168.0/21','Colocrossing Network, not an access provider (ASN-36352-112). ');
$ax += cidrblock($address,'198.23.176.0/20','Colocrossing Network, not an access provider (ASN-36352-113). ');
$ax += cidrblock($address,'198.23.192.0/18','Colocrossing Network, not an access provider (ASN-36352-114). ');
$ax += cidrblock($address,'198.46.128.0/19','Colocrossing Network, not an access provider (ASN-36352-115). ');
$ax += cidrblock($address,'198.46.160.0/22','Colocrossing Network, not an access provider (ASN-36352-116). ');
$ax += cidrblock($address,'198.46.168.0/21','Colocrossing Network, not an access provider (ASN-36352-117). ');
$ax += cidrblock($address,'198.46.176.0/20','Colocrossing Network, not an access provider (ASN-36352-118). ');
$ax += cidrblock($address,'198.46.192.0/23','Colocrossing Network, not an access provider (ASN-36352-119). ');
$ax += cidrblock($address,'198.46.195.0/24','Colocrossing Network, not an access provider (ASN-36352-120). ');
$ax += cidrblock($address,'198.46.196.0/23','Colocrossing Network, not an access provider (ASN-36352-121). ');
$ax += cidrblock($address,'198.46.198.0/24','Colocrossing Network, not an access provider (ASN-36352-122). ');
$ax += cidrblock($address,'198.46.200.0/23','Colocrossing Network, not an access provider (ASN-36352-123). ');
$ax += cidrblock($address,'198.46.202.0/24','Colocrossing Network, not an access provider (ASN-36352-124). ');
$ax += cidrblock($address,'198.46.204.0/22','Colocrossing Network, not an access provider (ASN-36352-125). ');
$ax += cidrblock($address,'198.46.208.0/20','Colocrossing Network, not an access provider (ASN-36352-126). ');
$ax += cidrblock($address,'198.46.224.0/19','Colocrossing Network, not an access provider (ASN-36352-127). ');
$ax += cidrblock($address,'198.143.9.0/24','Colocrossing Network, not an access provider (ASN-36352-128). ');
$ax += cidrblock($address,'198.143.12.0/24','Colocrossing Network, not an access provider (ASN-36352-129). ');
$ax += cidrblock($address,'198.144.176.0/20','Colocrossing Network, not an access provider (ASN-36352-130). ');
$ax += cidrblock($address,'198.206.8.0/21','Colocrossing Network, not an access provider (ASN-36352-131). ');
$ax += cidrblock($address,'199.21.112.0/22','Colocrossing Network, not an access provider (ASN-36352-132). ');
$ax += cidrblock($address,'199.188.100.0/22','Colocrossing Network, not an access provider (ASN-36352-133). ');
$ax += cidrblock($address,'204.86.16.0/20','Colocrossing Network, not an access provider (ASN-36352-134). ');
$ax += cidrblock($address,'205.234.152.0/23','Colocrossing Network, not an access provider (ASN-36352-135). ');
$ax += cidrblock($address,'205.234.159.0/24','Colocrossing Network, not an access provider (ASN-36352-136). ');
$ax += cidrblock($address,'205.234.203.0/24','Colocrossing Network, not an access provider (ASN-36352-137). ');
$ax += cidrblock($address,'206.123.95.0/24','Colocrossing Network, not an access provider (ASN-36352-138). ');
$ax += cidrblock($address,'206.217.128.0/20','Colocrossing Network, not an access provider (ASN-36352-139). ');
$ax += cidrblock($address,'207.210.239.0/24','Colocrossing Network, not an access provider (ASN-36352-140). ');
$ax += cidrblock($address,'207.210.254.0/24','Colocrossing Network, not an access provider (ASN-36352-141). ');
$ax += cidrblock($address,'216.170.112.0/20','Colocrossing Network, not an access provider (ASN-36352-142). ');
$ax += cidrblock($address,'216.246.49.0/24','Colocrossing Network, not an access provider (ASN-36352-143). ');
$ax += cidrblock($address,'216.246.108.0/23','Colocrossing Network, not an access provider (ASN-36352-144). ');


// Serveryou Network (updated 2016.01.22 / checked 2016.03.20)
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


// Hostspace Networks
// AS26484 (updated 2016.06.09)
$ax += cidrblock($address,'23.226.54.0/24','Hostspace Networks, not an access provider (ASN-26484-00). ');
$ax += cidrblock($address,'23.226.57.0/24','Hostspace Networks, not an access provider (ASN-26484-01). ');
$ax += cidrblock($address,'23.234.0.0/19','Hostspace Networks, not an access provider (ASN-26484-02). ');
$ax += cidrblock($address,'23.234.32.0/21','Hostspace Networks, not an access provider (ASN-26484-03). ');
$ax += cidrblock($address,'23.234.48.0/21','Hostspace Networks, not an access provider (ASN-26484-04). ');
$ax += cidrblock($address,'23.234.60.0/22','Hostspace Networks, not an access provider (ASN-26484-05). ');
$ax += cidrblock($address,'23.235.165.0/24','Hostspace Networks, not an access provider (ASN-26484-06). ');
$ax += cidrblock($address,'23.235.170.0/24','Hostspace Networks, not an access provider (ASN-26484-07). ');
$ax += cidrblock($address,'23.248.198.0/24','Hostspace Networks, not an access provider (ASN-26484-08). ');
$ax += cidrblock($address,'23.248.201.0/24','Hostspace Networks, not an access provider (ASN-26484-09). ');
$ax += cidrblock($address,'23.248.202.0/24','Hostspace Networks, not an access provider (ASN-26484-10). ');
$ax += cidrblock($address,'23.248.205.0/24','Hostspace Networks, not an access provider (ASN-26484-11). ');
$ax += cidrblock($address,'23.248.206.0/24','Hostspace Networks, not an access provider (ASN-26484-12). ');
$ax += cidrblock($address,'23.248.227.0/24','Hostspace Networks, not an access provider (ASN-26484-13). ');
$ax += cidrblock($address,'23.248.242.0/24','Hostspace Networks, not an access provider (ASN-26484-14). ');
$ax += cidrblock($address,'23.252.160.0/20','Hostspace Networks, not an access provider (ASN-26484-15). ');
$ax += cidrblock($address,'43.228.232.0/22','Hostspace Networks, not an access provider (ASN-26484-16). ');
$ax += cidrblock($address,'43.230.112.0/22','Hostspace Networks, not an access provider (ASN-26484-17). ');
$ax += cidrblock($address,'43.230.140.0/22','Hostspace Networks, not an access provider (ASN-26484-18). ');
$ax += cidrblock($address,'43.230.144.0/22','Hostspace Networks, not an access provider (ASN-26484-19). ');
$ax += cidrblock($address,'45.61.240.0/20','Hostspace Networks, not an access provider (ASN-26484-20). ');
$ax += cidrblock($address,'66.102.253.0/24','Hostspace Networks, not an access provider (ASN-26484-21). ');
$ax += cidrblock($address,'98.159.100.0/23','Hostspace Networks, not an access provider (ASN-26484-22). ');
$ax += cidrblock($address,'103.41.184.0/24','Hostspace Networks, not an access provider (ASN-26484-23). ');
$ax += cidrblock($address,'103.47.240.0/22','Hostspace Networks, not an access provider (ASN-26484-24). ');
$ax += cidrblock($address,'103.49.156.0/22','Hostspace Networks, not an access provider (ASN-26484-25). ');
$ax += cidrblock($address,'103.49.208.0/21','Hostspace Networks, not an access provider (ASN-26484-26). ');
$ax += cidrblock($address,'103.53.7.0/24','Hostspace Networks, not an access provider (ASN-26484-27). ');
$ax += cidrblock($address,'162.211.180.0/22','Hostspace Networks, not an access provider (ASN-26484-28). ');
$ax += cidrblock($address,'162.212.180.0/22','Hostspace Networks, not an access provider (ASN-26484-29). ');
$ax += cidrblock($address,'162.251.92.0/22','Hostspace Networks, not an access provider (ASN-26484-30). ');
$ax += cidrblock($address,'192.126.112.0/21','Hostspace Networks, not an access provider (ASN-26484-31). ');
$ax += cidrblock($address,'192.126.120.0/22','Hostspace Networks, not an access provider (ASN-26484-32). ');
$ax += cidrblock($address,'192.126.126.0/23','Hostspace Networks, not an access provider (ASN-26484-33). ');
$ax += cidrblock($address,'192.151.230.0/23','Hostspace Networks, not an access provider (ASN-26484-34). ');
$ax += cidrblock($address,'198.44.248.0/22','Hostspace Networks, not an access provider (ASN-26484-35). ');
$ax += cidrblock($address,'198.177.127.0/24','Hostspace Networks, not an access provider (ASN-26484-36). ');
$ax += cidrblock($address,'207.254.182.0/24','Hostspace Networks, not an access provider (ASN-26484-37). ');


// Connexions4London Ltd
// AS25577 (updated 2016.06.02)
$ax += cidrblock($address,'5.133.184.0/21','Connexions4London Ltd; Cloud services (ASN-C4LND-00). ');
$ax += cidrblock($address,'5.152.176.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-01). ');
$ax += cidrblock($address,'31.3.208.0/20','Connexions4London Ltd; Cloud services (ASN-C4LND-02). ');
$ax += cidrblock($address,'37.58.24.0/21','Connexions4London Ltd; Cloud services (ASN-C4LND-03). ');
$ax += cidrblock($address,'62.69.143.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-04). ');
$ax += cidrblock($address,'81.27.64.0/19','Connexions4London Ltd; Cloud services (ASN-C4LND-05). ');
$ax += cidrblock($address,'82.197.64.0/19','Connexions4London Ltd; Cloud services (ASN-C4LND-06). ');
$ax += cidrblock($address,'84.45.0.0/17','Connexions4London Ltd; Cloud services (ASN-C4LND-07). ');
$ax += cidrblock($address,'85.159.88.0/21','Connexions4London Ltd; Cloud services (ASN-C4LND-08). ');
$ax += cidrblock($address,'87.247.138.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-09). ');
$ax += cidrblock($address,'91.195.112.0/23','Connexions4London Ltd; Cloud services (ASN-C4LND-10). ');
$ax += cidrblock($address,'91.206.118.0/23','Connexions4London Ltd; Cloud services (ASN-C4LND-11). ');
$ax += cidrblock($address,'91.212.108.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-12). ');
$ax += cidrblock($address,'91.213.200.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-13). ');
$ax += cidrblock($address,'91.217.212.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-14). ');
$ax += cidrblock($address,'91.247.73.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-15). ');
$ax += cidrblock($address,'109.104.96.0/19','Connexions4London Ltd; Cloud services (ASN-C4LND-16). ');
$ax += cidrblock($address,'179.48.128.0/19','Connexions4London Ltd; Cloud services (ASN-C4LND-17). ');
$ax += cidrblock($address,'179.63.0.0/20','Connexions4London Ltd; Cloud services (ASN-C4LND-18). ');
$ax += cidrblock($address,'179.63.32.0/20','Connexions4London Ltd; Cloud services (ASN-C4LND-19). ');
$ax += cidrblock($address,'185.5.88.0/22','Connexions4London Ltd; Cloud services (ASN-C4LND-20). ');
$ax += cidrblock($address,'185.23.56.0/22','Connexions4London Ltd; Cloud services (ASN-C4LND-21). ');
$ax += cidrblock($address,'185.55.252.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-22). ');
$ax += cidrblock($address,'185.67.140.0/22','Connexions4London Ltd; Cloud services (ASN-C4LND-23). ');
$ax += cidrblock($address,'185.115.120.0/22','Connexions4London Ltd; Cloud services (ASN-C4LND-24). ');
$ax += cidrblock($address,'192.160.10.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-25). ');
$ax += cidrblock($address,'193.27.42.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-26). ');
$ax += cidrblock($address,'193.35.157.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-27). ');
$ax += cidrblock($address,'193.46.61.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-28). ');
$ax += cidrblock($address,'193.104.108.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-29). ');
$ax += cidrblock($address,'193.105.51.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-30). ');
$ax += cidrblock($address,'193.105.61.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-31). ');
$ax += cidrblock($address,'193.105.172.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-32). ');
$ax += cidrblock($address,'193.109.220.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-33). ');
$ax += cidrblock($address,'193.218.160.0/20','Connexions4London Ltd; Cloud services (ASN-C4LND-34). ');
$ax += cidrblock($address,'194.9.28.0/23','Connexions4London Ltd; Cloud services (ASN-C4LND-35). ');
$ax += cidrblock($address,'194.50.54.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-36). ');
$ax += cidrblock($address,'195.189.12.0/22','Connexions4London Ltd; Cloud services (ASN-C4LND-37). ');
$ax += cidrblock($address,'195.226.201.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-38). ');
$ax += cidrblock($address,'195.230.19.0/24','Connexions4London Ltd; Cloud services (ASN-C4LND-39). ');


// SingleHop, Inc
// AS32475 (updated 2016.06.02)
$ax += cidrblock($address,'23.91.112.0/21','Singlehop Network (ASN-32475-00). ');
$ax += cidrblock($address,'37.60.224.0/20','Singlehop Network (ASN-32475-01). ');
$ax += cidrblock($address,'37.60.240.0/22','Singlehop Network (ASN-32475-02). ');
$ax += cidrblock($address,'37.60.244.0/23','Singlehop Network (ASN-32475-03). ');
$ax += cidrblock($address,'37.60.247.0/24','Singlehop Network (ASN-32475-04). ');
$ax += cidrblock($address,'37.60.248.0/22','Singlehop Network (ASN-32475-05). ');
$ax += cidrblock($address,'37.60.252.0/23','Singlehop Network (ASN-32475-06). ');
$ax += cidrblock($address,'37.60.255.0/24','Singlehop Network (ASN-32475-07). ');
$ax += cidrblock($address,'45.74.57.0/24','Singlehop Network (ASN-32475-08). ');
$ax += cidrblock($address,'65.60.0.0/18','Singlehop Network (ASN-32475-09). ');
$ax += cidrblock($address,'66.103.16.0/20','Singlehop Network (ASN-32475-10). ');
$ax += cidrblock($address,'67.212.160.0/19','Singlehop Network (ASN-32475-11). ');
$ax += cidrblock($address,'69.175.0.0/17','Singlehop Network (ASN-32475-12). ');
$ax += cidrblock($address,'77.104.135.0/24','Singlehop Network (ASN-32475-13). ');
$ax += cidrblock($address,'77.104.136.0/22','Singlehop Network (ASN-32475-14). ');
$ax += cidrblock($address,'77.104.141.0/24','Singlehop Network (ASN-32475-15). ');
$ax += cidrblock($address,'77.104.144.0/22','Singlehop Network (ASN-32475-16). ');
$ax += cidrblock($address,'77.104.148.0/24','Singlehop Network (ASN-32475-17). ');
$ax += cidrblock($address,'96.127.128.0/18','Singlehop Network (ASN-32475-18). ');
$ax += cidrblock($address,'99.198.96.0/19','Singlehop Network (ASN-32475-19). ');
$ax += cidrblock($address,'104.171.12.0/24','Singlehop Network (ASN-32475-20). ');
$ax += cidrblock($address,'104.200.153.0/24','Singlehop Network (ASN-32475-21). ');
$ax += cidrblock($address,'104.200.155.0/24','Singlehop Network (ASN-32475-22). ');
$ax += cidrblock($address,'104.219.72.0/22','Singlehop Network (ASN-32475-23). ');
$ax += cidrblock($address,'107.6.128.0/18','Singlehop Network (ASN-32475-24). ');
$ax += cidrblock($address,'108.163.192.0/18','Singlehop Network (ASN-32475-25). ');
$ax += cidrblock($address,'108.178.0.0/18','Singlehop Network (ASN-32475-26). ');
$ax += cidrblock($address,'109.73.224.0/20','Singlehop Network (ASN-32475-27). ');
$ax += cidrblock($address,'109.199.96.0/19','Singlehop Network (ASN-32475-28). ');
$ax += cidrblock($address,'147.75.129.0/24','Singlehop Network (ASN-32475-29). ');
$ax += cidrblock($address,'162.244.165.0/24','Singlehop Network (ASN-32475-30). ');
$ax += cidrblock($address,'162.244.166.0/24','Singlehop Network (ASN-32475-31). ');
$ax += cidrblock($address,'162.253.224.0/22','Singlehop Network (ASN-32475-32). ');
$ax += cidrblock($address,'172.94.44.0/23','Singlehop Network (ASN-32475-33). ');
$ax += cidrblock($address,'173.236.0.0/17','Singlehop Network (ASN-32475-34). ');
$ax += cidrblock($address,'181.215.237.0/24','Singlehop Network (ASN-32475-35). ');
$ax += cidrblock($address,'181.224.128.0/20','Singlehop Network (ASN-32475-36). ');
$ax += cidrblock($address,'181.224.144.0/22','Singlehop Network (ASN-32475-37). ');
$ax += cidrblock($address,'181.224.148.0/24','Singlehop Network (ASN-32475-38). ');
$ax += cidrblock($address,'181.224.152.0/22','Singlehop Network (ASN-32475-39). ');
$ax += cidrblock($address,'184.154.0.0/16','Singlehop Network (ASN-32475-40). ');
$ax += cidrblock($address,'185.21.133.0/24','Singlehop Network (ASN-32475-41). ');
$ax += cidrblock($address,'185.21.134.0/23','Singlehop Network (ASN-32475-42). ');
$ax += cidrblock($address,'185.56.84.0/22','Singlehop Network (ASN-32475-43). ');
$ax += cidrblock($address,'185.62.236.0/22','Singlehop Network (ASN-32475-44). ');
$ax += cidrblock($address,'185.126.96.0/23','Singlehop Network (ASN-32475-45). ');
$ax += cidrblock($address,'185.145.47.0/24','Singlehop Network (ASN-32475-46). ');
$ax += cidrblock($address,'192.92.97.0/24','Singlehop Network (ASN-32475-47). ');
$ax += cidrblock($address,'198.20.64.0/18','Singlehop Network (ASN-32475-48). ');
$ax += cidrblock($address,'198.91.80.0/20','Singlehop Network (ASN-32475-49). ');
$ax += cidrblock($address,'198.143.128.0/18','Singlehop Network (ASN-32475-50). ');
$ax += cidrblock($address,'199.26.192.0/24','Singlehop Network (ASN-32475-51). ');
$ax += cidrblock($address,'209.222.115.0/24','Singlehop Network (ASN-32475-52). ');
$ax += cidrblock($address,'216.104.32.0/20','Singlehop Network (ASN-32475-53). ');
$ax += cidrblock($address,'216.151.166.0/24','Singlehop Network (ASN-32475-54). ');


// eUKhost LTD (updated 2016.01.22 / checked 2016.03.13)
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


// Total Web Solutions Ltd (updated 2016.01.22 / checked 2016.03.13)
// AS8669
$ax += cidrblock($address,'195.206.160.0/23','Cloud services linked to captcha crackers (ASN-8669-00). ');
$ax += cidrblock($address,'195.206.162.0/24','Cloud services linked to captcha crackers (ASN-8669-01). ');
$ax += cidrblock($address,'195.206.168.0/23','Cloud services linked to captcha crackers (ASN-8669-02). ');


// Pulsant (Scotland) Ltd (updated 2016.05.22)
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
$ax += cidrblock($address,'185.143.76.0/24','Cloud services linked to captcha crackers (ASN-12703-33). ');
$ax += cidrblock($address,'188.68.164.0/22','Cloud services linked to captcha crackers (ASN-12703-34). ');
$ax += cidrblock($address,'193.29.223.0/24','Cloud services linked to captcha crackers (ASN-12703-35). ');
$ax += cidrblock($address,'193.187.55.0/24','Cloud services linked to captcha crackers (ASN-12703-36). ');
$ax += cidrblock($address,'193.219.115.0/24','Cloud services linked to captcha crackers (ASN-12703-37). ');
$ax += cidrblock($address,'194.150.194.0/24','Cloud services linked to captcha crackers (ASN-12703-38). ');
$ax += cidrblock($address,'195.47.244.0/24','Cloud services linked to captcha crackers (ASN-12703-39). ');
$ax += cidrblock($address,'195.68.228.0/23','Cloud services linked to captcha crackers (ASN-12703-40). ');
$ax += cidrblock($address,'195.242.154.0/23','Cloud services linked to captcha crackers (ASN-12703-41). ');
$ax += cidrblock($address,'195.242.236.0/24','Cloud services linked to captcha crackers (ASN-12703-42). ');
$ax += cidrblock($address,'195.242.238.0/23','Cloud services linked to captcha crackers (ASN-12703-43). ');
$ax += cidrblock($address,'195.248.70.0/24','Cloud services linked to captcha crackers (ASN-12703-44). ');
$ax += cidrblock($address,'203.62.208.0/23','Cloud services linked to captcha crackers (ASN-12703-45). ');
$ax += cidrblock($address,'212.20.224.0/19','Cloud services linked to captcha crackers (ASN-12703-46). ');
$ax += cidrblock($address,'217.30.112.0/20','Cloud services linked to captcha crackers (ASN-12703-47). ');


// Private Layer INC (updated 2016.03.13)
// AS51852
$ax += cidrblock($address,'31.7.56.0/21','Private Layer INC (ASN-51852-00). ');
$ax += cidrblock($address,'31.44.189.0/24','Private Layer INC (ASN-51852-01). ');
$ax += cidrblock($address,'46.19.136.0/21','Private Layer INC (ASN-51852-02). ');
$ax += cidrblock($address,'46.102.152.0/24','Private Layer INC (ASN-51852-03). ');
$ax += cidrblock($address,'81.17.16.0/20','Private Layer INC (ASN-51852-04). ');
$ax += cidrblock($address,'141.255.160.0/21','Private Layer INC (ASN-51852-05). ');
$ax += cidrblock($address,'172.111.182.0/24','Private Layer INC (ASN-51852-06). ');
$ax += cidrblock($address,'176.223.111.0/24','Private Layer INC (ASN-51852-07). ');
$ax += cidrblock($address,'179.43.128.0/18','Private Layer INC (ASN-51852-08). ');
$ax += cidrblock($address,'185.12.44.0/22','Private Layer INC (ASN-51852-09). ');
$ax += cidrblock($address,'190.211.252.0/22','Private Layer INC (ASN-51852-10). ');


// PSYCHZ.NET (updated 2016.02.27)
// AS40676, AS63993
$ax += cidrblock($address,'23.91.0.0/19','Not authorized to access this site (ASN-PSYCHZ-000). ');
$ax += cidrblock($address,'23.228.192.0/18','Not authorized to access this site (ASN-PSYCHZ-001). ');
$ax += cidrblock($address,'23.238.128.0/17','Not authorized to access this site (ASN-PSYCHZ-002). ');
$ax += cidrblock($address,'23.251.32.0/19','Not authorized to access this site (ASN-PSYCHZ-003). ');
$ax += cidrblock($address,'43.224.154.0/23','Not authorized to access this site (ASN-PSYCHZ-004). ');
$ax += cidrblock($address,'43.246.114.0/23','Not authorized to access this site (ASN-PSYCHZ-005). ');
$ax += cidrblock($address,'43.250.72.0/22','Not authorized to access this site (ASN-PSYCHZ-006). ');
$ax += cidrblock($address,'45.34.0.0/15','Not authorized to access this site (ASN-PSYCHZ-007). ');
$ax += cidrblock($address,'45.58.61.0/24','Not authorized to access this site (ASN-PSYCHZ-008). ');
$ax += cidrblock($address,'45.74.1.0/24','Not authorized to access this site (ASN-PSYCHZ-009). ');
$ax += cidrblock($address,'45.74.5.0/24','Not authorized to access this site (ASN-PSYCHZ-010). ');
$ax += cidrblock($address,'45.74.6.0/23','Not authorized to access this site (ASN-PSYCHZ-011). ');
$ax += cidrblock($address,'45.74.8.0/21','Not authorized to access this site (ASN-PSYCHZ-012). ');
$ax += cidrblock($address,'45.74.16.0/24','Not authorized to access this site (ASN-PSYCHZ-013). ');
$ax += cidrblock($address,'45.113.80.0/24','Not authorized to access this site (ASN-PSYCHZ-014). ');
$ax += cidrblock($address,'45.125.164.0/24','Not authorized to access this site (ASN-PSYCHZ-015). ');
$ax += cidrblock($address,'49.246.226.0/23','Not authorized to access this site (ASN-PSYCHZ-016). ');
$ax += cidrblock($address,'49.246.234.0/23','Not authorized to access this site (ASN-PSYCHZ-017). ');
$ax += cidrblock($address,'64.64.113.0/24','Not authorized to access this site (ASN-PSYCHZ-018). ');
$ax += cidrblock($address,'69.165.64.0/22','Not authorized to access this site (ASN-PSYCHZ-019). ');
$ax += cidrblock($address,'69.165.72.0/21','Not authorized to access this site (ASN-PSYCHZ-020). ');
$ax += cidrblock($address,'74.117.56.0/21','Not authorized to access this site (ASN-PSYCHZ-021). ');
$ax += cidrblock($address,'98.159.226.0/24','Not authorized to access this site (ASN-PSYCHZ-022). ');
$ax += cidrblock($address,'103.231.184.0/24','Not authorized to access this site (ASN-PSYCHZ-023). ');
$ax += cidrblock($address,'104.128.112.0/20','Not authorized to access this site (ASN-PSYCHZ-024). ');
$ax += cidrblock($address,'104.128.235.0/24','Not authorized to access this site (ASN-PSYCHZ-025). ');
$ax += cidrblock($address,'104.143.128.0/19','Not authorized to access this site (ASN-PSYCHZ-026). ');
$ax += cidrblock($address,'104.145.226.0/23','Not authorized to access this site (ASN-PSYCHZ-027). ');
$ax += cidrblock($address,'104.149.0.0/16','Not authorized to access this site (ASN-PSYCHZ-028). ');
$ax += cidrblock($address,'104.216.0.0/15','Not authorized to access this site (ASN-PSYCHZ-029). ');
$ax += cidrblock($address,'104.218.160.0/21','Not authorized to access this site (ASN-PSYCHZ-030). ');
$ax += cidrblock($address,'104.244.152.0/24','Not authorized to access this site (ASN-PSYCHZ-031). ');
$ax += cidrblock($address,'104.250.127.0/24','Not authorized to access this site (ASN-PSYCHZ-032). ');
$ax += cidrblock($address,'104.250.166.0/24','Not authorized to access this site (ASN-PSYCHZ-033). ');
$ax += cidrblock($address,'104.250.168.0/24','Not authorized to access this site (ASN-PSYCHZ-034). ');
$ax += cidrblock($address,'104.250.170.0/23','Not authorized to access this site (ASN-PSYCHZ-035). ');
$ax += cidrblock($address,'104.250.181.0/24','Not authorized to access this site (ASN-PSYCHZ-036). ');
$ax += cidrblock($address,'104.250.184.0/24','Not authorized to access this site (ASN-PSYCHZ-037). ');
$ax += cidrblock($address,'104.250.186.0/24','Not authorized to access this site (ASN-PSYCHZ-038). ');
$ax += cidrblock($address,'104.254.62.0/24','Not authorized to access this site (ASN-PSYCHZ-039). ');
$ax += cidrblock($address,'104.254.188.0/22','Not authorized to access this site (ASN-PSYCHZ-040). ');
$ax += cidrblock($address,'107.151.192.0/18','Not authorized to access this site (ASN-PSYCHZ-041). ');
$ax += cidrblock($address,'107.160.0.0/16','Not authorized to access this site (ASN-PSYCHZ-042). ');
$ax += cidrblock($address,'107.178.144.0/20','Not authorized to access this site (ASN-PSYCHZ-043). ');
$ax += cidrblock($address,'107.178.160.0/19','Not authorized to access this site (ASN-PSYCHZ-044). ');
$ax += cidrblock($address,'107.190.226.0/23','Not authorized to access this site (ASN-PSYCHZ-045). ');
$ax += cidrblock($address,'107.190.228.0/22','Not authorized to access this site (ASN-PSYCHZ-046). ');
$ax += cidrblock($address,'108.171.240.0/20','Not authorized to access this site (ASN-PSYCHZ-047). ');
$ax += cidrblock($address,'123.108.128.0/23','Not authorized to access this site (ASN-PSYCHZ-048). ');
$ax += cidrblock($address,'136.0.111.0/24','Not authorized to access this site (ASN-PSYCHZ-049). ');
$ax += cidrblock($address,'138.122.227.0/24','Not authorized to access this site (ASN-PSYCHZ-050). ');
$ax += cidrblock($address,'141.95.4.0/24','Not authorized to access this site (ASN-PSYCHZ-051). ');
$ax += cidrblock($address,'142.147.88.0/24','Not authorized to access this site (ASN-PSYCHZ-052). ');
$ax += cidrblock($address,'144.172.68.0/23','Not authorized to access this site (ASN-PSYCHZ-053). ');
$ax += cidrblock($address,'144.172.70.0/24','Not authorized to access this site (ASN-PSYCHZ-054). ');
$ax += cidrblock($address,'146.148.128.0/19','Not authorized to access this site (ASN-PSYCHZ-055). ');
$ax += cidrblock($address,'146.148.176.0/20','Not authorized to access this site (ASN-PSYCHZ-056). ');
$ax += cidrblock($address,'146.148.192.0/18','Not authorized to access this site (ASN-PSYCHZ-057). ');
$ax += cidrblock($address,'150.242.36.0/22','Not authorized to access this site (ASN-PSYCHZ-058). ');
$ax += cidrblock($address,'154.127.53.0/24','Not authorized to access this site (ASN-PSYCHZ-059). ');
$ax += cidrblock($address,'162.250.140.0/22','Not authorized to access this site (ASN-PSYCHZ-060). ');
$ax += cidrblock($address,'162.253.209.0/24','Not authorized to access this site (ASN-PSYCHZ-061). ');
$ax += cidrblock($address,'162.253.210.0/23','Not authorized to access this site (ASN-PSYCHZ-062). ');
$ax += cidrblock($address,'162.253.212.0/22','Not authorized to access this site (ASN-PSYCHZ-063). ');
$ax += cidrblock($address,'172.81.120.0/21','Not authorized to access this site (ASN-PSYCHZ-064). ');
$ax += cidrblock($address,'172.86.148.0/24','Not authorized to access this site (ASN-PSYCHZ-065). ');
$ax += cidrblock($address,'172.93.121.0/24','Not authorized to access this site (ASN-PSYCHZ-066). ');
$ax += cidrblock($address,'172.94.23.0/24','Not authorized to access this site (ASN-PSYCHZ-067). ');
$ax += cidrblock($address,'172.94.24.0/23','Not authorized to access this site (ASN-PSYCHZ-068). ');
$ax += cidrblock($address,'172.94.26.0/24','Not authorized to access this site (ASN-PSYCHZ-069). ');
$ax += cidrblock($address,'172.94.31.0/24','Not authorized to access this site (ASN-PSYCHZ-070). ');
$ax += cidrblock($address,'172.94.32.0/24','Not authorized to access this site (ASN-PSYCHZ-071). ');
$ax += cidrblock($address,'172.94.34.0/23','Not authorized to access this site (ASN-PSYCHZ-072). ');
$ax += cidrblock($address,'172.94.38.0/24','Not authorized to access this site (ASN-PSYCHZ-074). ');
$ax += cidrblock($address,'172.98.213.0/24','Not authorized to access this site (ASN-PSYCHZ-075). ');
$ax += cidrblock($address,'172.106.0.0/20','Not authorized to access this site (ASN-PSYCHZ-076). ');
$ax += cidrblock($address,'172.106.16.0/23','Not authorized to access this site (ASN-PSYCHZ-077). ');
$ax += cidrblock($address,'172.106.18.0/24','Not authorized to access this site (ASN-PSYCHZ-078). ');
$ax += cidrblock($address,'172.110.26.0/24','Not authorized to access this site (ASN-PSYCHZ-079). ');
$ax += cidrblock($address,'172.111.235.0/24','Not authorized to access this site (ASN-PSYCHZ-080). ');
$ax += cidrblock($address,'173.224.208.0/20','Not authorized to access this site (ASN-PSYCHZ-081). ');
$ax += cidrblock($address,'183.182.10.0/23','Not authorized to access this site (ASN-PSYCHZ-082). ');
$ax += cidrblock($address,'183.182.18.0/23','Not authorized to access this site (ASN-PSYCHZ-083). ');
$ax += cidrblock($address,'183.182.20.0/23','Not authorized to access this site (ASN-PSYCHZ-084). ');
$ax += cidrblock($address,'183.182.22.0/24','Not authorized to access this site (ASN-PSYCHZ-085). ');
$ax += cidrblock($address,'185.133.210.0/23','Not authorized to access this site (ASN-PSYCHZ-086). ');
$ax += cidrblock($address,'192.81.248.0/23','Not authorized to access this site (ASN-PSYCHZ-087). ');
$ax += cidrblock($address,'192.81.250.0/24','Not authorized to access this site (ASN-PSYCHZ-088). ');
$ax += cidrblock($address,'192.126.124.0/23','Not authorized to access this site (ASN-PSYCHZ-089). ');
$ax += cidrblock($address,'192.184.32.0/19','Not authorized to access this site (ASN-PSYCHZ-090). ');
$ax += cidrblock($address,'192.210.48.0/20','Not authorized to access this site (ASN-PSYCHZ-091). ');
$ax += cidrblock($address,'198.13.96.0/19','Not authorized to access this site (ASN-PSYCHZ-092). ');
$ax += cidrblock($address,'198.44.160.0/19','Not authorized to access this site (ASN-PSYCHZ-093). ');
$ax += cidrblock($address,'199.15.112.0/21','Not authorized to access this site (ASN-PSYCHZ-094). ');
$ax += cidrblock($address,'199.47.39.0/24','Not authorized to access this site (ASN-PSYCHZ-095). ');
$ax += cidrblock($address,'199.71.212.0/22','Not authorized to access this site (ASN-PSYCHZ-096). ');
$ax += cidrblock($address,'199.83.88.0/21','Not authorized to access this site (ASN-PSYCHZ-097). ');
$ax += cidrblock($address,'199.119.200.0/21','Not authorized to access this site (ASN-PSYCHZ-098). ');
$ax += cidrblock($address,'199.245.100.0/23','Not authorized to access this site (ASN-PSYCHZ-099). ');
$ax += cidrblock($address,'206.123.131.0/24','Not authorized to access this site (ASN-PSYCHZ-100). ');
$ax += cidrblock($address,'206.123.132.0/23','Not authorized to access this site (ASN-PSYCHZ-101). ');
$ax += cidrblock($address,'206.123.140.0/24','Not authorized to access this site (ASN-PSYCHZ-102). ');
$ax += cidrblock($address,'208.87.240.0/22','Not authorized to access this site (ASN-PSYCHZ-103). ');
$ax += cidrblock($address,'210.16.100.0/24','Not authorized to access this site (ASN-PSYCHZ-104). ');
$ax += cidrblock($address,'211.155.64.0/23','Not authorized to access this site (ASN-PSYCHZ-105). ');
$ax += cidrblock($address,'216.24.192.0/20','Not authorized to access this site (ASN-PSYCHZ-106). ');
$ax += cidrblock($address,'216.99.144.0/20','Not authorized to access this site (ASN-PSYCHZ-107). ');
$ax += cidrblock($address,'218.246.140.0/22','Not authorized to access this site (ASN-PSYCHZ-108). ');


// ALNET-AS PP SKS-Lugan (updated 2016.04.25)
// AS35804
$ax += cidrblock($address,'91.200.12.0/22','ALNET SKS-Lugan (ASN-ALNET-0). ');
$ax += cidrblock($address,'91.202.212.0/22','ALNET SKS-Lugan (ASN-ALNET-1). ');
$ax += cidrblock($address,'91.210.31.0/24','ALNET SKS-Lugan (ASN-ALNET-2). ');
$ax += cidrblock($address,'193.110.144.0/24','ALNET SKS-Lugan (ASN-ALNET-3). ');
$ax += cidrblock($address,'193.110.168.0/23','ALNET SKS-Lugan (ASN-ALNET-4). ');
$ax += cidrblock($address,'194.79.60.0/22','ALNET SKS-Lugan (ASN-ALNET-5). ');
$ax += cidrblock($address,'194.145.220.0/23','ALNET SKS-Lugan (ASN-ALNET-6). ');
$ax += cidrblock($address,'213.111.128.0/18','ALNET SKS-Lugan (ASN-ALNET-7). ');


// MTS-INDIA-IN (updated 2016.01.22 / checked 2016.03.13)
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


// Versaweb, LLC
// AS36114 (updated 2016.04.03)
$ax += cidrblock($address,'72.46.128.0/19','Versaweb, LLC (ASN-VERSAWEB-00). ');
$ax += cidrblock($address,'76.164.192.0/19','Versaweb, LLC (ASN-VERSAWEB-01). ');
$ax += cidrblock($address,'76.164.224.0/21','Versaweb, LLC (ASN-VERSAWEB-02). ');
$ax += cidrblock($address,'76.164.232.0/23','Versaweb, LLC (ASN-VERSAWEB-03). ');
$ax += cidrblock($address,'76.164.236.0/22','Versaweb, LLC (ASN-VERSAWEB-04). ');
$ax += cidrblock($address,'104.36.224.0/21','Versaweb, LLC (ASN-VERSAWEB-05). ');
$ax += cidrblock($address,'104.143.0.0/20','Versaweb, LLC (ASN-VERSAWEB-06). ');
$ax += cidrblock($address,'104.194.0.0/19','Versaweb, LLC (ASN-VERSAWEB-07). ');
$ax += cidrblock($address,'104.238.192.0/18','Versaweb, LLC (ASN-VERSAWEB-08). ');
$ax += cidrblock($address,'162.216.176.0/22','Versaweb, LLC (ASN-VERSAWEB-09). ');
$ax += cidrblock($address,'162.220.247.0/24','Versaweb, LLC (ASN-VERSAWEB-10). ');
$ax += cidrblock($address,'162.222.128.0/21','Versaweb, LLC (ASN-VERSAWEB-11). ');
$ax += cidrblock($address,'162.255.180.0/22','Versaweb, LLC (ASN-VERSAWEB-12). ');
$ax += cidrblock($address,'172.96.128.0/19','Versaweb, LLC (ASN-VERSAWEB-13). ');
$ax += cidrblock($address,'208.64.24.0/21','Versaweb, LLC (ASN-VERSAWEB-14). ');
$ax += cidrblock($address,'208.66.72.0/21','Versaweb, LLC (ASN-VERSAWEB-15). ');


// DataWagon LLC
// AS27176 (updated 2016.06.09)
$ax += cidrblock($address,'1.3.3.0/24','DataWagon LLC; Access denied (ASN-DATAWAGON-0). ');
$ax += cidrblock($address,'45.119.208.0/22','DataWagon LLC; Access denied (ASN-DATAWAGON-1). ');
$ax += cidrblock($address,'103.60.12.0/22','DataWagon LLC; Access denied (ASN-DATAWAGON-2). ');
$ax += cidrblock($address,'104.192.0.0/22','DataWagon LLC; Access denied (ASN-DATAWAGON-3). ');
$ax += cidrblock($address,'104.219.232.0/21','DataWagon LLC; Access denied (ASN-DATAWAGON-4). ');
$ax += cidrblock($address,'172.81.128.0/21','DataWagon LLC; Access denied (ASN-DATAWAGON-5). ');
$ax += cidrblock($address,'209.66.128.0/20','DataWagon LLC; Access denied (ASN-DATAWAGON-6). ');


// VolumeDrive
// AS46664 (updated 2016.06.09)
$ax += cidrblock($address,'74.118.192.0/22','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-00). ');
$ax += cidrblock($address,'104.37.44.0/22','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-01). ');
$ax += cidrblock($address,'104.193.8.0/22','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-02). ');
$ax += cidrblock($address,'104.245.96.0/21','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-03). ');
$ax += cidrblock($address,'104.255.64.0/21','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-04). ');
$ax += cidrblock($address,'107.182.16.0/20','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-05). ');
$ax += cidrblock($address,'142.0.32.0/21','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-06). ');
$ax += cidrblock($address,'142.0.40.0/22','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-07). ');
$ax += cidrblock($address,'142.0.44.0/23','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-08). ');
$ax += cidrblock($address,'142.0.46.0/24','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-09). ');
$ax += cidrblock($address,'162.213.24.0/21','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-10). ');
$ax += cidrblock($address,'162.248.72.0/21','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-11). ');
$ax += cidrblock($address,'173.242.112.0/20','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-12). ');
$ax += cidrblock($address,'192.69.88.0/21','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-13). ');
$ax += cidrblock($address,'199.19.104.0/21','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-14). ');
$ax += cidrblock($address,'199.115.228.0/22','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-15). ');
$ax += cidrblock($address,'199.168.136.0/21','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-16). ');
$ax += cidrblock($address,'199.180.112.0/21','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-17). ');
$ax += cidrblock($address,'199.254.168.0/24','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-18). ');
$ax += cidrblock($address,'204.124.180.0/22','VolumeDrive; Access denied (ASN-VOLUMEDRIVE-19). ');


// WorldStream
// AS49981 (updated 2016.05.21)
$ax += cidrblock($address,'86.105.18.0/24','Worldstream (ASN-49981-00). ');
$ax += cidrblock($address,'89.42.212.0/24','Worldstream (ASN-49981-01). ');
$ax += cidrblock($address,'91.193.75.0/24','Worldstream (ASN-49981-02). ');
$ax += cidrblock($address,'91.212.229.0/24','Worldstream (ASN-49981-03). ');
$ax += cidrblock($address,'91.226.31.0/24','Worldstream (ASN-49981-04). ');
$ax += cidrblock($address,'91.227.154.0/23','Worldstream (ASN-49981-05). ');
$ax += cidrblock($address,'91.229.23.0/24','Worldstream (ASN-49981-06). ');
$ax += cidrblock($address,'91.232.105.0/24','Worldstream (ASN-49981-07). ');
$ax += cidrblock($address,'93.119.123.0/24','Worldstream (ASN-49981-08). ');
$ax += cidrblock($address,'93.170.77.0/24','Worldstream (ASN-49981-09). ');
$ax += cidrblock($address,'93.190.136.0/21','Worldstream (ASN-49981-10). ');
$ax += cidrblock($address,'94.177.12.0/24','Worldstream (ASN-49981-11). ');
$ax += cidrblock($address,'95.156.251.0/24','Worldstream (ASN-49981-12). ');
$ax += cidrblock($address,'103.44.75.0/24','Worldstream (ASN-49981-13). ');
$ax += cidrblock($address,'109.236.80.0/20','Worldstream (ASN-49981-14). ');
$ax += cidrblock($address,'154.16.17.0/24','Worldstream (ASN-49981-15). ');
$ax += cidrblock($address,'176.61.129.0/24','Worldstream (ASN-49981-16). ');
$ax += cidrblock($address,'185.2.80.0/22','Worldstream (ASN-49981-17). ');
$ax += cidrblock($address,'185.28.38.0/24','Worldstream (ASN-49981-18). ');
$ax += cidrblock($address,'185.73.112.0/24','Worldstream (ASN-49981-19). ');
$ax += cidrblock($address,'185.81.98.0/24','Worldstream (ASN-49981-20). ');
$ax += cidrblock($address,'185.94.29.0/24','Worldstream (ASN-49981-21). ');
$ax += cidrblock($address,'185.105.192.0/22','Worldstream (ASN-49981-22). ');
$ax += cidrblock($address,'185.119.254.0/24','Worldstream (ASN-49981-23). ');
$ax += cidrblock($address,'191.101.243.0/24','Worldstream (ASN-49981-24). ');
$ax += cidrblock($address,'191.101.250.0/23','Worldstream (ASN-49981-25). ');
$ax += cidrblock($address,'192.71.151.0/24','Worldstream (ASN-49981-26). ');
$ax += cidrblock($address,'192.76.138.0/24','Worldstream (ASN-49981-27). ');
$ax += cidrblock($address,'193.30.245.0/24','Worldstream (ASN-49981-28). ');
$ax += cidrblock($address,'193.200.164.0/24','Worldstream (ASN-49981-29). ');
$ax += cidrblock($address,'195.128.184.0/23','Worldstream (ASN-49981-30). ');
$ax += cidrblock($address,'198.105.117.0/24','Worldstream (ASN-49981-31). ');
$ax += cidrblock($address,'217.23.0.0/20','Worldstream (ASN-49981-32). ');


// UOL (updated 2016.06.09)
// AS7162
$ax += cidrblock($address,'186.234.0.0/18','AS7162, attacked SbS (ASN-7162-00). ');
$ax += cidrblock($address,'186.234.64.0/20','AS7162, attacked SbS (ASN-7162-01). ');
$ax += cidrblock($address,'186.234.127.0/24','AS7162, attacked SbS (ASN-7162-02). ');
$ax += cidrblock($address,'186.234.128.0/18','AS7162, attacked SbS (ASN-7162-03). ');
$ax += cidrblock($address,'186.234.195.0/24','AS7162, attacked SbS (ASN-7162-04). ');
$ax += cidrblock($address,'186.234.196.0/24','AS7162, attacked SbS (ASN-7162-05). ');
$ax += cidrblock($address,'186.234.211.0/24','AS7162, attacked SbS (ASN-7162-06). ');
$ax += cidrblock($address,'187.17.64.0/18','AS7162, attacked SbS (ASN-7162-07). ');
$ax += cidrblock($address,'189.38.56.0/21','AS7162, attacked SbS (ASN-7162-08). ');
$ax += cidrblock($address,'200.98.0.0/16','AS7162, attacked SbS (ASN-7162-09). ');
$ax += cidrblock($address,'200.147.0.0/16','AS7162, attacked SbS (ASN-7162-10). ');
$ax += cidrblock($address,'200.187.192.0/18','AS7162, attacked SbS (ASN-7162-11). ');
$ax += cidrblock($address,'200.221.0.0/16','AS7162, attacked SbS (ASN-7162-12). ');
$ax += cidrblock($address,'201.85.123.0/24','AS7162, attacked SbS (ASN-7162-13). ');


// Choopa (Constant source of attacks, and assisted in DDoS of SbS)
// AS20473 (updated 2016.02.27)
$ax += cidrblock($address,'4.79.145.0/24','Choopa Networks (ASN-CHOOPA-000). ');
$ax += cidrblock($address,'8.2.0.0/24','Choopa Networks (ASN-CHOOPA-001). ');
$ax += cidrblock($address,'8.2.120.0/23','Choopa Networks (ASN-CHOOPA-002). ');
$ax += cidrblock($address,'8.2.122.0/24','Choopa Networks (ASN-CHOOPA-003). ');
$ax += cidrblock($address,'8.3.5.0/24','Choopa Networks (ASN-CHOOPA-004). ');
$ax += cidrblock($address,'8.3.6.0/23','Choopa Networks (ASN-CHOOPA-005). ');
$ax += cidrblock($address,'8.3.28.0/23','Choopa Networks (ASN-CHOOPA-006). ');
$ax += cidrblock($address,'8.6.2.0/23','Choopa Networks (ASN-CHOOPA-007). ');
$ax += cidrblock($address,'8.6.8.0/23','Choopa Networks (ASN-CHOOPA-008). ');
$ax += cidrblock($address,'8.6.15.0/24','Choopa Networks (ASN-CHOOPA-009). ');
$ax += cidrblock($address,'8.6.193.0/24','Choopa Networks (ASN-CHOOPA-010). ');
$ax += cidrblock($address,'8.7.233.0/24','Choopa Networks (ASN-CHOOPA-011). ');
$ax += cidrblock($address,'8.9.3.0/24','Choopa Networks (ASN-CHOOPA-012). ');
$ax += cidrblock($address,'8.9.4.0/23','Choopa Networks (ASN-CHOOPA-013). ');
$ax += cidrblock($address,'8.9.6.0/24','Choopa Networks (ASN-CHOOPA-014). ');
$ax += cidrblock($address,'8.9.8.0/23','Choopa Networks (ASN-CHOOPA-015). ');
$ax += cidrblock($address,'8.9.11.0/24','Choopa Networks (ASN-CHOOPA-016). ');
$ax += cidrblock($address,'8.9.15.0/24','Choopa Networks (ASN-CHOOPA-017). ');
$ax += cidrblock($address,'8.9.16.0/23','Choopa Networks (ASN-CHOOPA-018). ');
$ax += cidrblock($address,'8.9.30.0/23','Choopa Networks (ASN-CHOOPA-019). ');
$ax += cidrblock($address,'8.9.36.0/23','Choopa Networks (ASN-CHOOPA-020). ');
$ax += cidrblock($address,'8.12.16.0/21','Choopa Networks (ASN-CHOOPA-021). ');
$ax += cidrblock($address,'8.12.64.0/23','Choopa Networks (ASN-CHOOPA-022). ');
$ax += cidrblock($address,'8.12.68.0/22','Choopa Networks (ASN-CHOOPA-023). ');
$ax += cidrblock($address,'8.18.92.0/23','Choopa Networks (ASN-CHOOPA-024). ');
$ax += cidrblock($address,'43.224.32.0/22','Choopa Networks (ASN-CHOOPA-025). ');
$ax += cidrblock($address,'44.34.96.0/24','Choopa Networks (ASN-CHOOPA-026). ');
$ax += cidrblock($address,'45.32.0.0/17','Choopa Networks (ASN-CHOOPA-027). ');
$ax += cidrblock($address,'45.32.128.0/19','Choopa Networks (ASN-CHOOPA-028). ');
$ax += cidrblock($address,'45.32.160.0/20','Choopa Networks (ASN-CHOOPA-029). ');
$ax += cidrblock($address,'45.32.176.0/21','Choopa Networks (ASN-CHOOPA-030). ');
$ax += cidrblock($address,'45.32.192.0/18','Choopa Networks (ASN-CHOOPA-031). ');
$ax += cidrblock($address,'45.43.2.0/23','Choopa Networks (ASN-CHOOPA-032). ');
$ax += cidrblock($address,'45.43.10.0/23','Choopa Networks (ASN-CHOOPA-033). ');
$ax += cidrblock($address,'45.43.14.0/23','Choopa Networks (ASN-CHOOPA-034). ');
$ax += cidrblock($address,'45.43.18.0/23','Choopa Networks (ASN-CHOOPA-035). ');
$ax += cidrblock($address,'45.43.20.0/24','Choopa Networks (ASN-CHOOPA-036). ');
$ax += cidrblock($address,'45.56.148.0/23','Choopa Networks (ASN-CHOOPA-037). ');
$ax += cidrblock($address,'45.58.112.0/20','Choopa Networks (ASN-CHOOPA-038). ');
$ax += cidrblock($address,'45.59.17.0/24','Choopa Networks (ASN-CHOOPA-039). ');
$ax += cidrblock($address,'45.59.23.0/24','Choopa Networks (ASN-CHOOPA-040). ');
$ax += cidrblock($address,'45.63.0.0/17','Choopa Networks (ASN-CHOOPA-041). ');
$ax += cidrblock($address,'45.76.0.0/15','Choopa Networks (ASN-CHOOPA-042). ');
$ax += cidrblock($address,'45.117.156.0/22','Choopa Networks (ASN-CHOOPA-043). ');
$ax += cidrblock($address,'45.126.208.0/22','Choopa Networks (ASN-CHOOPA-044). ');
$ax += cidrblock($address,'62.67.42.0/24','Choopa Networks (ASN-CHOOPA-045). ');
$ax += cidrblock($address,'63.208.142.0/24','Choopa Networks (ASN-CHOOPA-046). ');
$ax += cidrblock($address,'63.209.32.0/22','Choopa Networks (ASN-CHOOPA-047). ');
$ax += cidrblock($address,'63.209.36.0/23','Choopa Networks (ASN-CHOOPA-048). ');
$ax += cidrblock($address,'63.210.145.0/24','Choopa Networks (ASN-CHOOPA-049). ');
$ax += cidrblock($address,'63.210.148.0/23','Choopa Networks (ASN-CHOOPA-050). ');
$ax += cidrblock($address,'63.211.105.0/24','Choopa Networks (ASN-CHOOPA-051). ');
$ax += cidrblock($address,'63.211.110.0/23','Choopa Networks (ASN-CHOOPA-052). ');
$ax += cidrblock($address,'63.211.221.0/24','Choopa Networks (ASN-CHOOPA-053). ');
$ax += cidrblock($address,'63.215.74.0/24','Choopa Networks (ASN-CHOOPA-054). ');
$ax += cidrblock($address,'64.110.131.0/24','Choopa Networks (ASN-CHOOPA-055). ');
$ax += cidrblock($address,'64.154.38.0/24','Choopa Networks (ASN-CHOOPA-056). ');
$ax += cidrblock($address,'64.156.14.0/24','Choopa Networks (ASN-CHOOPA-057). ');
$ax += cidrblock($address,'64.237.32.0/19','Choopa Networks (ASN-CHOOPA-058). ');
$ax += cidrblock($address,'66.11.112.0/24','Choopa Networks (ASN-CHOOPA-059). ');
$ax += cidrblock($address,'66.11.114.0/24','Choopa Networks (ASN-CHOOPA-060). ');
$ax += cidrblock($address,'66.11.116.0/24','Choopa Networks (ASN-CHOOPA-061). ');
$ax += cidrblock($address,'66.55.128.0/19','Choopa Networks (ASN-CHOOPA-062). ');
$ax += cidrblock($address,'68.232.160.0/19','Choopa Networks (ASN-CHOOPA-063). ');
$ax += cidrblock($address,'85.190.153.0/24','Choopa Networks (ASN-CHOOPA-064). ');
$ax += cidrblock($address,'85.203.21.0/24','Choopa Networks (ASN-CHOOPA-065). ');
$ax += cidrblock($address,'89.167.134.0/24','Choopa Networks (ASN-CHOOPA-066). ');
$ax += cidrblock($address,'103.43.72.0/22','Choopa Networks (ASN-CHOOPA-067). ');
$ax += cidrblock($address,'103.195.100.0/22','Choopa Networks (ASN-CHOOPA-068). ');
$ax += cidrblock($address,'103.241.212.0/24','Choopa Networks (ASN-CHOOPA-069). ');
$ax += cidrblock($address,'104.145.229.0/24','Choopa Networks (ASN-CHOOPA-070). ');
$ax += cidrblock($address,'104.156.224.0/19','Choopa Networks (ASN-CHOOPA-071). ');
$ax += cidrblock($address,'104.207.128.0/19','Choopa Networks (ASN-CHOOPA-072). ');
$ax += cidrblock($address,'104.238.128.0/21','Choopa Networks (ASN-CHOOPA-073). ');
$ax += cidrblock($address,'104.238.136.0/22','Choopa Networks (ASN-CHOOPA-074). ');
$ax += cidrblock($address,'104.238.140.0/23','Choopa Networks (ASN-CHOOPA-075). ');
$ax += cidrblock($address,'104.238.143.0/24','Choopa Networks (ASN-CHOOPA-076). ');
$ax += cidrblock($address,'104.238.144.0/20','Choopa Networks (ASN-CHOOPA-077). ');
$ax += cidrblock($address,'104.238.160.0/19','Choopa Networks (ASN-CHOOPA-078). ');
$ax += cidrblock($address,'104.243.32.0/20','Choopa Networks (ASN-CHOOPA-079). ');
$ax += cidrblock($address,'104.250.119.0/24','Choopa Networks (ASN-CHOOPA-080). ');
$ax += cidrblock($address,'104.250.120.0/24','Choopa Networks (ASN-CHOOPA-081). ');
$ax += cidrblock($address,'104.250.122.0/23','Choopa Networks (ASN-CHOOPA-082). ');
$ax += cidrblock($address,'104.250.164.0/24','Choopa Networks (ASN-CHOOPA-083). ');
$ax += cidrblock($address,'104.250.188.0/24','Choopa Networks (ASN-CHOOPA-084). ');
$ax += cidrblock($address,'104.251.85.0/24','Choopa Networks (ASN-CHOOPA-085). ');
$ax += cidrblock($address,'104.251.91.0/24','Choopa Networks (ASN-CHOOPA-086). ');
$ax += cidrblock($address,'104.255.224.0/24','Choopa Networks (ASN-CHOOPA-087). ');
$ax += cidrblock($address,'104.255.226.0/24','Choopa Networks (ASN-CHOOPA-088). ');
$ax += cidrblock($address,'104.255.228.0/24','Choopa Networks (ASN-CHOOPA-089). ');
$ax += cidrblock($address,'104.255.230.0/24','Choopa Networks (ASN-CHOOPA-090). ');
$ax += cidrblock($address,'107.181.69.0/24','Choopa Networks (ASN-CHOOPA-091). ');
$ax += cidrblock($address,'107.181.148.0/24','Choopa Networks (ASN-CHOOPA-092). ');
$ax += cidrblock($address,'107.191.32.0/19','Choopa Networks (ASN-CHOOPA-093). ');
$ax += cidrblock($address,'108.61.0.0/18','Choopa Networks (ASN-CHOOPA-094). ');
$ax += cidrblock($address,'108.61.64.0/19','Choopa Networks (ASN-CHOOPA-095). ');
$ax += cidrblock($address,'108.61.96.0/22','Choopa Networks (ASN-CHOOPA-096). ');
$ax += cidrblock($address,'108.61.100.0/23','Choopa Networks (ASN-CHOOPA-097). ');
$ax += cidrblock($address,'108.61.103.0/24','Choopa Networks (ASN-CHOOPA-098). ');
$ax += cidrblock($address,'108.61.104.0/21','Choopa Networks (ASN-CHOOPA-099). ');
$ax += cidrblock($address,'108.61.112.0/20','Choopa Networks (ASN-CHOOPA-100). ');
$ax += cidrblock($address,'108.61.128.0/19','Choopa Networks (ASN-CHOOPA-101). ');
$ax += cidrblock($address,'108.61.160.0/20','Choopa Networks (ASN-CHOOPA-102). ');
$ax += cidrblock($address,'108.61.176.0/21','Choopa Networks (ASN-CHOOPA-103). ');
$ax += cidrblock($address,'108.61.184.0/23','Choopa Networks (ASN-CHOOPA-104). ');
$ax += cidrblock($address,'108.61.188.0/22','Choopa Networks (ASN-CHOOPA-105). ');
$ax += cidrblock($address,'108.61.192.0/19','Choopa Networks (ASN-CHOOPA-106). ');
$ax += cidrblock($address,'108.61.224.0/20','Choopa Networks (ASN-CHOOPA-107). ');
$ax += cidrblock($address,'108.61.240.0/22','Choopa Networks (ASN-CHOOPA-108). ');
$ax += cidrblock($address,'108.61.245.0/24','Choopa Networks (ASN-CHOOPA-109). ');
$ax += cidrblock($address,'108.61.246.0/23','Choopa Networks (ASN-CHOOPA-110). ');
$ax += cidrblock($address,'108.61.249.0/24','Choopa Networks (ASN-CHOOPA-111). ');
$ax += cidrblock($address,'108.61.250.0/23','Choopa Networks (ASN-CHOOPA-112). ');
$ax += cidrblock($address,'108.61.252.0/22','Choopa Networks (ASN-CHOOPA-113). ');
$ax += cidrblock($address,'131.221.45.0/24','Choopa Networks (ASN-CHOOPA-114). ');
$ax += cidrblock($address,'162.220.219.0/24','Choopa Networks (ASN-CHOOPA-116). ');
$ax += cidrblock($address,'162.253.176.0/24','Choopa Networks (ASN-CHOOPA-117). ');
$ax += cidrblock($address,'172.86.144.0/24','Choopa Networks (ASN-CHOOPA-118). ');
$ax += cidrblock($address,'172.93.96.0/20','Choopa Networks (ASN-CHOOPA-119). ');
$ax += cidrblock($address,'172.94.37.0/24','Choopa Networks (ASN-CHOOPA-120). ');
$ax += cidrblock($address,'172.94.40.0/23','Choopa Networks (ASN-CHOOPA-121). ');
$ax += cidrblock($address,'172.98.210.0/24','Choopa Networks (ASN-CHOOPA-122). ');
$ax += cidrblock($address,'172.98.215.0/24','Choopa Networks (ASN-CHOOPA-123). ');
$ax += cidrblock($address,'172.111.151.0/24','Choopa Networks (ASN-CHOOPA-124). ');
$ax += cidrblock($address,'173.199.64.0/20','Choopa Networks (ASN-CHOOPA-125). ');
$ax += cidrblock($address,'173.199.81.0/24','Choopa Networks (ASN-CHOOPA-126). ');
$ax += cidrblock($address,'173.199.82.0/23','Choopa Networks (ASN-CHOOPA-127). ');
$ax += cidrblock($address,'173.199.84.0/22','Choopa Networks (ASN-CHOOPA-128). ');
$ax += cidrblock($address,'173.199.88.0/21','Choopa Networks (ASN-CHOOPA-129). ');
$ax += cidrblock($address,'173.199.96.0/19','Choopa Networks (ASN-CHOOPA-130). ');
$ax += cidrblock($address,'185.35.78.0/24','Choopa Networks (ASN-CHOOPA-131). ');
$ax += cidrblock($address,'185.92.220.0/22','Choopa Networks (ASN-CHOOPA-132). ');
$ax += cidrblock($address,'190.102.111.0/24','Choopa Networks (ASN-CHOOPA-133). ');
$ax += cidrblock($address,'191.101.28.0/24','Choopa Networks (ASN-CHOOPA-134). ');
$ax += cidrblock($address,'191.101.183.0/24','Choopa Networks (ASN-CHOOPA-135). ');
$ax += cidrblock($address,'192.154.213.0/24','Choopa Networks (ASN-CHOOPA-136). ');
$ax += cidrblock($address,'192.154.214.0/24','Choopa Networks (ASN-CHOOPA-137). ');
$ax += cidrblock($address,'192.209.62.0/24','Choopa Networks (ASN-CHOOPA-138). ');
$ax += cidrblock($address,'195.122.134.0/23','Choopa Networks (ASN-CHOOPA-139). ');
$ax += cidrblock($address,'198.17.215.0/24','Choopa Networks (ASN-CHOOPA-140). ');
$ax += cidrblock($address,'199.48.176.0/22','Choopa Networks (ASN-CHOOPA-141). ');
$ax += cidrblock($address,'199.48.183.0/24','Choopa Networks (ASN-CHOOPA-142). ');
$ax += cidrblock($address,'204.80.128.0/24','Choopa Networks (ASN-CHOOPA-143). ');
$ax += cidrblock($address,'205.234.250.0/24','Choopa Networks (ASN-CHOOPA-144). ');
$ax += cidrblock($address,'206.221.176.0/20','Choopa Networks (ASN-CHOOPA-145). ');
$ax += cidrblock($address,'208.167.224.0/19','Choopa Networks (ASN-CHOOPA-146). ');
$ax += cidrblock($address,'209.182.110.0/24','Choopa Networks (ASN-CHOOPA-147). ');
$ax += cidrblock($address,'209.222.0.0/20','Choopa Networks (ASN-CHOOPA-148). ');
$ax += cidrblock($address,'209.222.16.0/21','Choopa Networks (ASN-CHOOPA-149). ');
$ax += cidrblock($address,'209.222.24.0/22','Choopa Networks (ASN-CHOOPA-150). ');
$ax += cidrblock($address,'209.222.29.0/24','Choopa Networks (ASN-CHOOPA-151). ');
$ax += cidrblock($address,'209.222.30.0/24','Choopa Networks (ASN-CHOOPA-152). ');
$ax += cidrblock($address,'209.222.96.0/20','Choopa Networks (ASN-CHOOPA-153). ');
$ax += cidrblock($address,'209.246.142.0/23','Choopa Networks (ASN-CHOOPA-154). ');
$ax += cidrblock($address,'209.246.170.0/24','Choopa Networks (ASN-CHOOPA-155). ');
$ax += cidrblock($address,'209.247.83.0/24','Choopa Networks (ASN-CHOOPA-156). ');
$ax += cidrblock($address,'212.187.208.0/23','Choopa Networks (ASN-CHOOPA-157). ');
$ax += cidrblock($address,'212.187.246.0/23','Choopa Networks (ASN-CHOOPA-158). ');
$ax += cidrblock($address,'216.155.128.0/19','Choopa Networks (ASN-CHOOPA-159). ');
$ax += cidrblock($address,'217.163.10.0/23','Choopa Networks (ASN-CHOOPA-160). ');
$ax += cidrblock($address,'217.163.22.0/23','Choopa Networks (ASN-CHOOPA-161). ');
$ax += cidrblock($address,'217.163.24.0/21','Choopa Networks (ASN-CHOOPA-162). ');


// Krypt Technologies
// Refer spambotsecurity.com/forum/viewtopic.php?f=7&t=3273
// AS35908 (updated 2016.03.10)
$ax += cidrblock($address,'23.91.192.0/19','Krypt Technologies (ASN-KRYPT-00). ');
$ax += cidrblock($address,'23.251.0.0/19','Krypt Technologies (ASN-KRYPT-01). ');
$ax += cidrblock($address,'63.251.215.0/24','Krypt Technologies (ASN-KRYPT-02). ');
$ax += cidrblock($address,'66.186.32.0/19','Krypt Technologies (ASN-KRYPT-03). ');
$ax += cidrblock($address,'67.43.144.0/20','Krypt Technologies (ASN-KRYPT-04). ');
$ax += cidrblock($address,'67.198.128.0/17','Krypt Technologies (ASN-KRYPT-05). ');
$ax += cidrblock($address,'67.229.0.0/16','Krypt Technologies (ASN-KRYPT-06). ');
$ax += cidrblock($address,'74.222.128.0/18','Krypt Technologies (ASN-KRYPT-07). ');
$ax += cidrblock($address,'96.62.0.0/16','Krypt Technologies (ASN-KRYPT-08). ');
$ax += cidrblock($address,'98.126.0.0/16','Krypt Technologies (ASN-KRYPT-09). ');
$ax += cidrblock($address,'100.43.128.0/18','Krypt Technologies (ASN-KRYPT-10). ');
$ax += cidrblock($address,'103.233.81.0/24','Krypt Technologies (ASN-KRYPT-11). ');
$ax += cidrblock($address,'103.233.82.0/24','Krypt Technologies (ASN-KRYPT-12). ');
$ax += cidrblock($address,'104.200.192.0/19','Krypt Technologies (ASN-KRYPT-13). ');
$ax += cidrblock($address,'107.6.192.0/18','Krypt Technologies (ASN-KRYPT-14). ');
$ax += cidrblock($address,'110.34.128.0/17','Krypt Technologies (ASN-KRYPT-15). ');
$ax += cidrblock($address,'146.82.146.0/23','Krypt Technologies (ASN-KRYPT-16). ');
$ax += cidrblock($address,'173.214.0.0/17','Krypt Technologies (ASN-KRYPT-17). ');
$ax += cidrblock($address,'174.139.0.0/16','Krypt Technologies (ASN-KRYPT-18). ');
$ax += cidrblock($address,'184.75.176.0/20','Krypt Technologies (ASN-KRYPT-19). ');
$ax += cidrblock($address,'184.83.0.0/16','Krypt Technologies (ASN-KRYPT-20). ');
$ax += cidrblock($address,'184.164.192.0/19','Krypt Technologies (ASN-KRYPT-21). ');
$ax += cidrblock($address,'192.155.160.0/20','Krypt Technologies (ASN-KRYPT-22). ');
$ax += cidrblock($address,'192.174.96.0/19','Krypt Technologies (ASN-KRYPT-23). ');
$ax += cidrblock($address,'192.250.192.0/20','Krypt Technologies (ASN-KRYPT-24). ');
$ax += cidrblock($address,'192.250.240.0/20','Krypt Technologies (ASN-KRYPT-25). ');
$ax += cidrblock($address,'198.61.96.0/19','Krypt Technologies (ASN-KRYPT-26). ');
$ax += cidrblock($address,'209.11.240.0/20','Krypt Technologies (ASN-KRYPT-27). ');


// Netinternet Bilgisayar ve Telekomunikasyon San. ve Tic. Ltd. Sti.
// Refer spambotsecurity.com/forum/viewtopic.php?f=7&t=3553
// AS51559 (updated 2016.05.21)
$ax += cidrblock($address,'31.192.208.0/21','ASN not permitted here (ASN-51559-00). ');
$ax += cidrblock($address,'89.43.28.0/22','ASN not permitted here (ASN-51559-01). ');
$ax += cidrblock($address,'91.227.4.0/23','ASN not permitted here (ASN-51559-02). ');
$ax += cidrblock($address,'91.227.6.0/24','ASN not permitted here (ASN-51559-03). ');
$ax += cidrblock($address,'91.229.35.0/24','ASN not permitted here (ASN-51559-04). ');
$ax += cidrblock($address,'91.229.44.0/23','ASN not permitted here (ASN-51559-05). ');
$ax += cidrblock($address,'94.102.0.0/20','ASN not permitted here (ASN-51559-06). ');
$ax += cidrblock($address,'95.173.160.0/19','ASN not permitted here (ASN-51559-07). ');
$ax += cidrblock($address,'159.253.32.0/20','ASN not permitted here (ASN-51559-08). ');
$ax += cidrblock($address,'185.83.144.0/22','ASN not permitted here (ASN-51559-09). ');
$ax += cidrblock($address,'185.95.84.0/22','ASN not permitted here (ASN-51559-10). ');
$ax += cidrblock($address,'185.106.208.0/22','ASN not permitted here (ASN-51559-11). ');
$ax += cidrblock($address,'185.126.216.0/23','ASN not permitted here (ASN-51559-12). ');
$ax += cidrblock($address,'185.146.88.0/22','ASN not permitted here (ASN-51559-13). ');
$ax += cidrblock($address,'185.149.100.0/22','ASN not permitted here (ASN-51559-14). ');


// Contabo GmbH (Cloud provider)
// AS51167 (updated 2016.03.10)
$ax += cidrblock($address,'5.189.128.0/18','Contabo GmbH, cloud provider (ASN-CONTABO-00). ');
$ax += cidrblock($address,'37.139.52.0/24','Contabo GmbH, cloud provider (ASN-CONTABO-01). ');
$ax += cidrblock($address,'79.143.176.0/20','Contabo GmbH, cloud provider (ASN-CONTABO-02). ');
$ax += cidrblock($address,'80.241.208.0/20','Contabo GmbH, cloud provider (ASN-CONTABO-03). ');
$ax += cidrblock($address,'91.194.90.0/23','Contabo GmbH, cloud provider (ASN-CONTABO-04). ');
$ax += cidrblock($address,'91.198.138.0/24','Contabo GmbH, cloud provider (ASN-CONTABO-05). ');
$ax += cidrblock($address,'91.205.172.0/22','Contabo GmbH, cloud provider (ASN-CONTABO-06). ');
$ax += cidrblock($address,'95.212.0.0/17','Contabo GmbH, cloud provider (ASN-CONTABO-07). ');
$ax += cidrblock($address,'95.212.208.0/20','Contabo GmbH, cloud provider (ASN-CONTABO-08). ');
$ax += cidrblock($address,'95.212.224.0/19','Contabo GmbH, cloud provider (ASN-CONTABO-09). ');
$ax += cidrblock($address,'177.85.96.0/24','Contabo GmbH, cloud provider (ASN-CONTABO-10). ');
$ax += cidrblock($address,'177.85.101.0/24','Contabo GmbH, cloud provider (ASN-CONTABO-11). ');
$ax += cidrblock($address,'177.85.102.0/23','Contabo GmbH, cloud provider (ASN-CONTABO-12). ');
$ax += cidrblock($address,'178.238.224.0/20','Contabo GmbH, cloud provider (ASN-CONTABO-13). ');
$ax += cidrblock($address,'185.2.100.0/22','Contabo GmbH, cloud provider (ASN-CONTABO-14). ');
$ax += cidrblock($address,'185.36.64.0/22','Contabo GmbH, cloud provider (ASN-CONTABO-15). ');
$ax += cidrblock($address,'193.34.144.0/23','Contabo GmbH, cloud provider (ASN-CONTABO-16). ');
$ax += cidrblock($address,'193.37.152.0/24','Contabo GmbH, cloud provider (ASN-CONTABO-17). ');
$ax += cidrblock($address,'193.164.131.0/24','Contabo GmbH, cloud provider (ASN-CONTABO-18). ');
$ax += cidrblock($address,'193.164.132.0/23','Contabo GmbH, cloud provider (ASN-CONTABO-19). ');
$ax += cidrblock($address,'193.200.241.0/24','Contabo GmbH, cloud provider (ASN-CONTABO-20). ');
$ax += cidrblock($address,'213.136.64.0/19','Contabo GmbH, cloud provider (ASN-CONTABO-21). ');


// AltusHost B.V. (Cloud provider)
// AS51430 (updated 2016.03.10 / checked 2016.06.09)
$ax += cidrblock($address,'5.62.20.0/24','AltusHost B.V., cloud provider (ASN-ALTUS-00). ');
$ax += cidrblock($address,'31.3.152.0/21','AltusHost B.V., cloud provider (ASN-ALTUS-01). ');
$ax += cidrblock($address,'37.46.112.0/23','AltusHost B.V., cloud provider (ASN-ALTUS-02). ');
$ax += cidrblock($address,'37.46.115.0/24','AltusHost B.V., cloud provider (ASN-ALTUS-03). ');
$ax += cidrblock($address,'37.46.116.0/22','AltusHost B.V., cloud provider (ASN-ALTUS-04). ');
$ax += cidrblock($address,'37.46.120.0/21','AltusHost B.V., cloud provider (ASN-ALTUS-05). ');
$ax += cidrblock($address,'45.74.35.0/24','AltusHost B.V., cloud provider (ASN-ALTUS-06). ');
$ax += cidrblock($address,'45.74.37.0/24','AltusHost B.V., cloud provider (ASN-ALTUS-07). ');
$ax += cidrblock($address,'79.142.64.0/20','AltusHost B.V., cloud provider (ASN-ALTUS-08). ');
$ax += cidrblock($address,'91.214.44.0/22','AltusHost B.V., cloud provider (ASN-ALTUS-09). ');
$ax += cidrblock($address,'128.127.104.0/21','AltusHost B.V., cloud provider (ASN-ALTUS-10). ');
$ax += cidrblock($address,'172.94.30.0/24','AltusHost B.V., cloud provider (ASN-ALTUS-11). ');
$ax += cidrblock($address,'172.94.36.0/24','AltusHost B.V., cloud provider (ASN-ALTUS-12). ');
$ax += cidrblock($address,'172.94.50.0/23','AltusHost B.V., cloud provider (ASN-ALTUS-13). ');
$ax += cidrblock($address,'172.94.52.0/22','AltusHost B.V., cloud provider (ASN-ALTUS-14). ');
$ax += cidrblock($address,'172.94.56.0/23','AltusHost B.V., cloud provider (ASN-ALTUS-15). ');
$ax += cidrblock($address,'172.111.154.0/24','AltusHost B.V., cloud provider (ASN-ALTUS-16). ');
$ax += cidrblock($address,'185.2.28.0/22','AltusHost B.V., cloud provider (ASN-ALTUS-17). ');
$ax += cidrblock($address,'185.10.56.0/22','AltusHost B.V., cloud provider (ASN-ALTUS-18). ');
$ax += cidrblock($address,'194.152.52.0/24','AltusHost B.V., cloud provider (ASN-ALTUS-19). ');
$ax += cidrblock($address,'213.5.64.0/21','AltusHost B.V., cloud provider (ASN-ALTUS-20). ');


// Unit-IS Ltd.
// AS59564 (updated 2016.03.10)
$ax += cidrblock($address,'46.243.140.0/24','Unit-IS Banned, 10HiT-IC 3a6opoHeHo (ASN-59564-0). ');
$ax += cidrblock($address,'46.243.142.0/24','Unit-IS Banned, 10HiT-IC 3a6opoHeHo (ASN-59564-1). ');
$ax += cidrblock($address,'188.72.101.0/24','Unit-IS Banned, 10HiT-IC 3a6opoHeHo (ASN-59564-2). ');
$ax += cidrblock($address,'195.211.152.0/22','Unit-IS Banned, 10HiT-IC 3a6opoHeHo (ASN-59564-3). ');


// Siftlogic LLC (updated 77g / checked 2016.03.10)
$ax += cidrblock($address,'23.90.192.0/18','Siftlogic (NET-SIFT-0). ');
$ax += cidrblock($address,'192.119.48.0/20','Siftlogic (NET-SIFT-1). ');
$ax += cidrblock($address,'192.196.192.0/20','Siftlogic (NET-SIFT-2). ');


// INFOKOM Ltd
// AS48226 (updated 2016.03.10)
$ax += cidrblock($address,'81.161.32.0/20','ASN not permitted here (ASN-48226-00). ');
$ax += cidrblock($address,'91.241.68.0/23','ASN not permitted here (ASN-48226-01). ');


// RAM Host and Total Server Solutions L.L.C.
// AS46562, AS53841 (updated 2016.03.10)
$ax += cidrblock($address,'66.71.240.0/20','RAM Host, cloud provider (ASN-RAMHOST-00). ');
$ax += cidrblock($address,'67.210.254.0/24','RAM Host, cloud provider (ASN-RAMHOST-01). ');
$ax += cidrblock($address,'74.116.0.0/23','RAM Host, cloud provider (ASN-RAMHOST-02). ');
$ax += cidrblock($address,'74.119.144.0/22','RAM Host, cloud provider (ASN-RAMHOST-03). ');
$ax += cidrblock($address,'98.142.208.0/20','RAM Host, cloud provider (ASN-RAMHOST-04). ');
$ax += cidrblock($address,'104.153.72.0/22','RAM Host, cloud provider (ASN-RAMHOST-05). ');
$ax += cidrblock($address,'104.200.129.0/24','RAM Host, cloud provider (ASN-RAMHOST-06). ');
$ax += cidrblock($address,'104.200.130.0/23','RAM Host, cloud provider (ASN-RAMHOST-07). ');
$ax += cidrblock($address,'104.200.132.0/24','RAM Host, cloud provider (ASN-RAMHOST-08). ');
$ax += cidrblock($address,'104.200.134.0/23','RAM Host, cloud provider (ASN-RAMHOST-09). ');
$ax += cidrblock($address,'104.200.136.0/22','RAM Host, cloud provider (ASN-RAMHOST-10). ');
$ax += cidrblock($address,'104.200.141.0/24','RAM Host, cloud provider (ASN-RAMHOST-11). ');
$ax += cidrblock($address,'104.200.142.0/23','RAM Host, cloud provider (ASN-RAMHOST-12). ');
$ax += cidrblock($address,'104.200.144.0/21','RAM Host, cloud provider (ASN-RAMHOST-13). ');
$ax += cidrblock($address,'104.200.152.0/24','RAM Host, cloud provider (ASN-RAMHOST-14). ');
$ax += cidrblock($address,'104.200.154.0/24','RAM Host, cloud provider (ASN-RAMHOST-15). ');
$ax += cidrblock($address,'104.200.159.0/24','RAM Host, cloud provider (ASN-RAMHOST-16). ');
$ax += cidrblock($address,'107.152.96.0/20','RAM Host, cloud provider (ASN-RAMHOST-17). ');
$ax += cidrblock($address,'107.181.160.0/21','RAM Host, cloud provider (ASN-RAMHOST-18). ');
$ax += cidrblock($address,'107.181.168.0/23','RAM Host, cloud provider (ASN-RAMHOST-19). ');
$ax += cidrblock($address,'107.181.172.0/22','RAM Host, cloud provider (ASN-RAMHOST-20). ');
$ax += cidrblock($address,'107.181.176.0/21','RAM Host, cloud provider (ASN-RAMHOST-21). ');
$ax += cidrblock($address,'107.181.184.0/22','RAM Host, cloud provider (ASN-RAMHOST-22). ');
$ax += cidrblock($address,'107.181.190.0/23','RAM Host, cloud provider (ASN-RAMHOST-23). ');
$ax += cidrblock($address,'130.185.170.0/23','RAM Host, cloud provider (ASN-RAMHOST-24). ');
$ax += cidrblock($address,'162.211.66.0/24','RAM Host, cloud provider (ASN-RAMHOST-25). ');
$ax += cidrblock($address,'162.216.44.0/22','RAM Host, cloud provider (ASN-RAMHOST-26). ');
$ax += cidrblock($address,'162.253.177.0/24','RAM Host, cloud provider (ASN-RAMHOST-27). ');
$ax += cidrblock($address,'166.63.255.0/24','RAM Host, cloud provider (ASN-RAMHOST-28). ');
$ax += cidrblock($address,'172.98.64.0/22','RAM Host, cloud provider (ASN-RAMHOST-29). ');
$ax += cidrblock($address,'172.98.70.0/23','RAM Host, cloud provider (ASN-RAMHOST-30). ');
$ax += cidrblock($address,'172.98.72.0/21','RAM Host, cloud provider (ASN-RAMHOST-31). ');
$ax += cidrblock($address,'172.98.80.0/23','RAM Host, cloud provider (ASN-RAMHOST-32). ');
$ax += cidrblock($address,'172.98.84.0/22','RAM Host, cloud provider (ASN-RAMHOST-33). ');
$ax += cidrblock($address,'172.98.88.0/23','RAM Host, cloud provider (ASN-RAMHOST-34). ');
$ax += cidrblock($address,'172.98.90.0/24','RAM Host, cloud provider (ASN-RAMHOST-35). ');
$ax += cidrblock($address,'172.98.92.0/22','RAM Host, cloud provider (ASN-RAMHOST-36). ');
$ax += cidrblock($address,'181.114.240.0/20','RAM Host, cloud provider (ASN-RAMHOST-37). ');
$ax += cidrblock($address,'184.170.240.0/20','RAM Host, cloud provider (ASN-RAMHOST-38). ');
$ax += cidrblock($address,'185.67.24.0/22','RAM Host, cloud provider (ASN-RAMHOST-39). ');
$ax += cidrblock($address,'185.89.248.0/22','RAM Host, cloud provider (ASN-RAMHOST-40). ');
$ax += cidrblock($address,'192.40.56.0/22','RAM Host, cloud provider (ASN-RAMHOST-41). ');
$ax += cidrblock($address,'192.111.128.0/22','RAM Host, cloud provider (ASN-RAMHOST-42). ');
$ax += cidrblock($address,'192.111.133.0/24','RAM Host, cloud provider (ASN-RAMHOST-43). ');
$ax += cidrblock($address,'192.111.134.0/23','RAM Host, cloud provider (ASN-RAMHOST-44). ');
$ax += cidrblock($address,'192.111.136.0/21','RAM Host, cloud provider (ASN-RAMHOST-45). ');
$ax += cidrblock($address,'192.223.10.0/23','RAM Host, cloud provider (ASN-RAMHOST-46). ');
$ax += cidrblock($address,'192.252.208.0/21','RAM Host, cloud provider (ASN-RAMHOST-47). ');
$ax += cidrblock($address,'192.252.216.0/22','RAM Host, cloud provider (ASN-RAMHOST-48). ');
$ax += cidrblock($address,'192.252.220.0/24','RAM Host, cloud provider (ASN-RAMHOST-49). ');
$ax += cidrblock($address,'192.252.222.0/23','RAM Host, cloud provider (ASN-RAMHOST-50). ');
$ax += cidrblock($address,'198.8.80.0/20','RAM Host, cloud provider (ASN-RAMHOST-51). ');
$ax += cidrblock($address,'198.147.20.0/22','RAM Host, cloud provider (ASN-RAMHOST-52). ');
$ax += cidrblock($address,'199.36.220.0/22','RAM Host, cloud provider (ASN-RAMHOST-53). ');
$ax += cidrblock($address,'199.58.184.0/22','RAM Host, cloud provider (ASN-RAMHOST-54). ');
$ax += cidrblock($address,'199.116.112.0/21','RAM Host, cloud provider (ASN-RAMHOST-55). ');
$ax += cidrblock($address,'199.168.160.0/22','RAM Host, cloud provider (ASN-RAMHOST-56). ');
$ax += cidrblock($address,'199.168.164.0/23','RAM Host, cloud provider (ASN-RAMHOST-57). ');
$ax += cidrblock($address,'199.180.248.0/22','RAM Host, cloud provider (ASN-RAMHOST-58). ');
$ax += cidrblock($address,'199.180.252.0/23','RAM Host, cloud provider (ASN-RAMHOST-59). ');
$ax += cidrblock($address,'199.187.208.0/22','RAM Host, cloud provider (ASN-RAMHOST-60). ');
$ax += cidrblock($address,'199.229.248.0/23','RAM Host, cloud provider (ASN-RAMHOST-61). ');
$ax += cidrblock($address,'199.229.251.0/24','RAM Host, cloud provider (ASN-RAMHOST-62). ');
$ax += cidrblock($address,'199.229.252.0/24','RAM Host, cloud provider (ASN-RAMHOST-63). ');
$ax += cidrblock($address,'199.229.254.0/23','RAM Host, cloud provider (ASN-RAMHOST-64). ');
$ax += cidrblock($address,'206.40.160.0/20','RAM Host, cloud provider (ASN-RAMHOST-65). ');
$ax += cidrblock($address,'206.206.89.0/24','RAM Host, cloud provider (ASN-RAMHOST-66). ');
$ax += cidrblock($address,'206.220.172.0/22','RAM Host, cloud provider (ASN-RAMHOST-67). ');
$ax += cidrblock($address,'207.66.105.0/24','RAM Host, cloud provider (ASN-RAMHOST-68). ');
$ax += cidrblock($address,'207.66.117.0/24','RAM Host, cloud provider (ASN-RAMHOST-69). ');
$ax += cidrblock($address,'207.66.120.0/24','RAM Host, cloud provider (ASN-RAMHOST-70). ');
$ax += cidrblock($address,'207.188.179.0/24','RAM Host, cloud provider (ASN-RAMHOST-71). ');
$ax += cidrblock($address,'208.78.40.0/22','RAM Host, cloud provider (ASN-RAMHOST-72). ');
$ax += cidrblock($address,'208.84.152.0/22','RAM Host, cloud provider (ASN-RAMHOST-73). ');
$ax += cidrblock($address,'208.93.192.0/22','RAM Host, cloud provider (ASN-RAMHOST-74). ');
$ax += cidrblock($address,'209.113.128.0/22','RAM Host, cloud provider (ASN-RAMHOST-75). ');
$ax += cidrblock($address,'209.140.20.0/24','RAM Host, cloud provider (ASN-RAMHOST-76). ');
$ax += cidrblock($address,'216.41.48.0/22','RAM Host, cloud provider (ASN-RAMHOST-77). ');


// Micfo, LLC.
// AS53889 (updated 2016.05.26)
$ax += cidrblock($address,'8.29.120.0/21','Micfo; Cloud provider (ASN-MICFO-000). ');
$ax += cidrblock($address,'23.232.128.0/17','Micfo; Cloud provider (ASN-MICFO-001). ');
$ax += cidrblock($address,'23.247.128.0/17','Micfo; Cloud provider (ASN-MICFO-002). ');
$ax += cidrblock($address,'24.235.4.0/23','Micfo; Cloud provider (ASN-MICFO-003). ');
$ax += cidrblock($address,'45.41.7.0/24','Micfo; Cloud provider (ASN-MICFO-004). ');
$ax += cidrblock($address,'45.41.44.0/24','Micfo; Cloud provider (ASN-MICFO-005). ');
$ax += cidrblock($address,'45.41.48.0/24','Micfo; Cloud provider (ASN-MICFO-006). ');
$ax += cidrblock($address,'45.41.60.0/24','Micfo; Cloud provider (ASN-MICFO-007). ');
$ax += cidrblock($address,'45.42.191.0/24','Micfo; Cloud provider (ASN-MICFO-008). ');
$ax += cidrblock($address,'45.42.237.0/24','Micfo; Cloud provider (ASN-MICFO-09). ');
$ax += cidrblock($address,'45.59.131.0/24','Micfo; Cloud provider (ASN-MICFO-010). ');
$ax += cidrblock($address,'45.59.156.0/24','Micfo; Cloud provider (ASN-MICFO-011). ');
$ax += cidrblock($address,'45.59.186.0/24','Micfo; Cloud provider (ASN-MICFO-012). ');
$ax += cidrblock($address,'45.61.33.0/24','Micfo; Cloud provider (ASN-MICFO-013). ');
$ax += cidrblock($address,'45.61.37.0/24','Micfo; Cloud provider (ASN-MICFO-014). ');
$ax += cidrblock($address,'45.61.42.0/24','Micfo; Cloud provider (ASN-MICFO-015). ');
$ax += cidrblock($address,'45.61.46.0/24','Micfo; Cloud provider (ASN-MICFO-016). ');
$ax += cidrblock($address,'45.62.35.0/24','Micfo; Cloud provider (ASN-MICFO-017). ');
$ax += cidrblock($address,'45.62.47.0/24','Micfo; Cloud provider (ASN-MICFO-018). ');
$ax += cidrblock($address,'45.62.55.0/24','Micfo; Cloud provider (ASN-MICFO-019). ');
$ax += cidrblock($address,'45.62.61.0/24','Micfo; Cloud provider (ASN-MICFO-020). ');
$ax += cidrblock($address,'52.119.3.0/24','Micfo; Cloud provider (ASN-MICFO-021). ');
$ax += cidrblock($address,'64.85.24.0/22','Micfo; Cloud provider (ASN-MICFO-022). ');
$ax += cidrblock($address,'66.133.72.0/21','Micfo; Cloud provider (ASN-MICFO-023). ');
$ax += cidrblock($address,'66.171.32.0/21','Micfo; Cloud provider (ASN-MICFO-024). ');
$ax += cidrblock($address,'67.17.32.0/20','Micfo; Cloud provider (ASN-MICFO-025). ');
$ax += cidrblock($address,'69.161.192.0/21','Micfo; Cloud provider (ASN-MICFO-026). ');
$ax += cidrblock($address,'72.35.240.0/21','Micfo; Cloud provider (ASN-MICFO-027). ');
$ax += cidrblock($address,'104.37.2.0/24','Micfo; Cloud provider (ASN-MICFO-028). ');
$ax += cidrblock($address,'104.37.7.0/24','Micfo; Cloud provider (ASN-MICFO-029). ');
$ax += cidrblock($address,'104.128.138.0/24','Micfo; Cloud provider (ASN-MICFO-030). ');
$ax += cidrblock($address,'104.143.218.0/24','Micfo; Cloud provider (ASN-MICFO-031). ');
$ax += cidrblock($address,'104.156.208.0/24','Micfo; Cloud provider (ASN-MICFO-032). ');
$ax += cidrblock($address,'104.207.64.0/24','Micfo; Cloud provider (ASN-MICFO-033). ');
$ax += cidrblock($address,'104.222.132.0/24','Micfo; Cloud provider (ASN-MICFO-034). ');
$ax += cidrblock($address,'104.224.28.0/24','Micfo; Cloud provider (ASN-MICFO-035). ');
$ax += cidrblock($address,'104.237.88.0/24','Micfo; Cloud provider (ASN-MICFO-036). ');
$ax += cidrblock($address,'104.243.240.0/24','Micfo; Cloud provider (ASN-MICFO-037). ');
$ax += cidrblock($address,'104.243.242.0/23','Micfo; Cloud provider (ASN-MICFO-038). ');
$ax += cidrblock($address,'104.243.244.0/24','Micfo; Cloud provider (ASN-MICFO-039). ');
$ax += cidrblock($address,'104.243.247.0/24','Micfo; Cloud provider (ASN-MICFO-040). ');
$ax += cidrblock($address,'104.247.7.0/24','Micfo; Cloud provider (ASN-MICFO-041). ');
$ax += cidrblock($address,'104.247.21.0/24','Micfo; Cloud provider (ASN-MICFO-042). ');
$ax += cidrblock($address,'104.247.99.0/24','Micfo; Cloud provider (ASN-MICFO-043). ');
$ax += cidrblock($address,'104.247.121.0/24','Micfo; Cloud provider (ASN-MICFO-044). ');
$ax += cidrblock($address,'104.249.139.0/24','Micfo; Cloud provider (ASN-MICFO-045). ');
$ax += cidrblock($address,'104.250.165.0/24','Micfo; Cloud provider (ASN-MICFO-046). ');
$ax += cidrblock($address,'104.250.167.0/24','Micfo; Cloud provider (ASN-MICFO-047). ');
$ax += cidrblock($address,'104.250.169.0/24','Micfo; Cloud provider (ASN-MICFO-048). ');
$ax += cidrblock($address,'104.250.173.0/24','Micfo; Cloud provider (ASN-MICFO-049). ');
$ax += cidrblock($address,'104.250.176.0/24','Micfo; Cloud provider (ASN-MICFO-050). ');
$ax += cidrblock($address,'104.250.187.0/24','Micfo; Cloud provider (ASN-MICFO-051). ');
$ax += cidrblock($address,'104.250.191.0/24','Micfo; Cloud provider (ASN-MICFO-052). ');
$ax += cidrblock($address,'104.250.226.0/24','Micfo; Cloud provider (ASN-MICFO-053). ');
$ax += cidrblock($address,'104.250.231.0/24','Micfo; Cloud provider (ASN-MICFO-054). ');
$ax += cidrblock($address,'104.250.246.0/24','Micfo; Cloud provider (ASN-MICFO-055). ');
$ax += cidrblock($address,'107.153.0.0/16','Micfo; Cloud provider (ASN-MICFO-056). ');
$ax += cidrblock($address,'107.168.0.0/15','Micfo; Cloud provider (ASN-MICFO-057). ');
$ax += cidrblock($address,'135.84.208.0/21','Micfo; Cloud provider (ASN-MICFO-058). ');
$ax += cidrblock($address,'144.208.116.0/22','Micfo; Cloud provider (ASN-MICFO-059). ');
$ax += cidrblock($address,'144.208.120.0/22','Micfo; Cloud provider (ASN-MICFO-060). ');
$ax += cidrblock($address,'146.88.192.0/22','Micfo; Cloud provider (ASN-MICFO-061). ');
$ax += cidrblock($address,'148.59.232.0/22','Micfo; Cloud provider (ASN-MICFO-062). ');
$ax += cidrblock($address,'155.254.111.0/24','Micfo; Cloud provider (ASN-MICFO-063). ');
$ax += cidrblock($address,'155.254.203.0/24','Micfo; Cloud provider (ASN-MICFO-064). ');
$ax += cidrblock($address,'165.84.224.0/21','Micfo; Cloud provider (ASN-MICFO-065). ');
$ax += cidrblock($address,'172.94.42.0/24','Micfo; Cloud provider (ASN-MICFO-066). ');
$ax += cidrblock($address,'172.94.65.0/24','Micfo; Cloud provider (ASN-MICFO-067). ');
$ax += cidrblock($address,'172.110.149.0/24','Micfo; Cloud provider (ASN-MICFO-068). ');
$ax += cidrblock($address,'172.110.150.0/24','Micfo; Cloud provider (ASN-MICFO-069). ');
$ax += cidrblock($address,'172.111.133.0/24','Micfo; Cloud provider (ASN-MICFO-070). ');
$ax += cidrblock($address,'172.111.169.0/24','Micfo; Cloud provider (ASN-MICFO-071). ');
$ax += cidrblock($address,'173.44.31.0/24','Micfo; Cloud provider (ASN-MICFO-072). ');
$ax += cidrblock($address,'192.64.24.0/22','Micfo; Cloud provider (ASN-MICFO-073). ');
$ax += cidrblock($address,'192.69.248.0/21','Micfo; Cloud provider (ASN-MICFO-074). ');
$ax += cidrblock($address,'192.77.240.0/20','Micfo; Cloud provider (ASN-MICFO-075). ');
$ax += cidrblock($address,'192.144.133.0/24','Micfo; Cloud provider (ASN-MICFO-076). ');
$ax += cidrblock($address,'192.144.134.0/24','Micfo; Cloud provider (ASN-MICFO-077). ');
$ax += cidrblock($address,'192.171.24.0/21','Micfo; Cloud provider (ASN-MICFO-078). ');
$ax += cidrblock($address,'192.171.224.0/19','Micfo; Cloud provider (ASN-MICFO-079). ');
$ax += cidrblock($address,'192.200.16.0/20','Micfo; Cloud provider (ASN-MICFO-080). ');
$ax += cidrblock($address,'192.230.32.0/19','Micfo; Cloud provider (ASN-MICFO-081). ');
$ax += cidrblock($address,'192.240.192.0/18','Micfo; Cloud provider (ASN-MICFO-082). ');
$ax += cidrblock($address,'192.255.64.0/18','Micfo; Cloud provider (ASN-MICFO-083). ');
$ax += cidrblock($address,'198.22.224.0/24','Micfo; Cloud provider (ASN-MICFO-084). ');
$ax += cidrblock($address,'198.52.32.0/21','Micfo; Cloud provider (ASN-MICFO-085). ');
$ax += cidrblock($address,'199.189.248.0/21','Micfo; Cloud provider (ASN-MICFO-086). ');
$ax += cidrblock($address,'199.223.116.0/22','Micfo; Cloud provider (ASN-MICFO-087). ');
$ax += cidrblock($address,'199.241.120.0/21','Micfo; Cloud provider (ASN-MICFO-088). ');
$ax += cidrblock($address,'204.62.120.0/21','Micfo; Cloud provider (ASN-MICFO-089). ');
$ax += cidrblock($address,'205.234.120.0/21','Micfo; Cloud provider (ASN-MICFO-090). ');
$ax += cidrblock($address,'206.144.64.0/22','Micfo; Cloud provider (ASN-MICFO-091). ');
$ax += cidrblock($address,'206.144.68.0/23','Micfo; Cloud provider (ASN-MICFO-092). ');
$ax += cidrblock($address,'206.144.71.0/24','Micfo; Cloud provider (ASN-MICFO-093). ');
$ax += cidrblock($address,'206.144.72.0/21','Micfo; Cloud provider (ASN-MICFO-094). ');
$ax += cidrblock($address,'206.144.80.0/20','Micfo; Cloud provider (ASN-MICFO-095). ');
$ax += cidrblock($address,'206.144.161.0/24','Micfo; Cloud provider (ASN-MICFO-096). ');
$ax += cidrblock($address,'206.144.162.0/23','Micfo; Cloud provider (ASN-MICFO-097). ');
$ax += cidrblock($address,'206.144.164.0/22','Micfo; Cloud provider (ASN-MICFO-098). ');
$ax += cidrblock($address,'206.144.168.0/21','Micfo; Cloud provider (ASN-MICFO-99). ');
$ax += cidrblock($address,'206.144.176.0/20','Micfo; Cloud provider (ASN-MICFO-100). ');
$ax += cidrblock($address,'206.144.192.0/24','Micfo; Cloud provider (ASN-MICFO-101). ');
$ax += cidrblock($address,'206.144.208.0/24','Micfo; Cloud provider (ASN-MICFO-102). ');
$ax += cidrblock($address,'206.225.132.0/22','Micfo; Cloud provider (ASN-MICFO-103). ');
$ax += cidrblock($address,'207.89.16.0/21','Micfo; Cloud provider (ASN-MICFO-104). ');
$ax += cidrblock($address,'208.87.164.0/23','Micfo; Cloud provider (ASN-MICFO-105). ');
$ax += cidrblock($address,'209.161.110.0/24','Micfo; Cloud provider (ASN-MICFO-106). ');
$ax += cidrblock($address,'209.251.249.0/24','Micfo; Cloud provider (ASN-MICFO-107). ');
$ax += cidrblock($address,'213.159.14.0/23','Micfo; Cloud provider (ASN-MICFO-108). ');
$ax += cidrblock($address,'216.99.219.0/24','Micfo; Cloud provider (ASN-MICFO-109). ');
$ax += cidrblock($address,'216.162.40.0/21','Micfo; Cloud provider (ASN-MICFO-110). ');


// MULTACOM CORPORATION
// AS35916 (updated 2016.04.03)
$ax += cidrblock($address,'23.234.192.0/18','MULTACOM CORPORATION (ASN-MULTACOM-00). ');
$ax += cidrblock($address,'23.236.72.0/24','MULTACOM CORPORATION (ASN-MULTACOM-01). ');
$ax += cidrblock($address,'23.236.78.0/23','MULTACOM CORPORATION (ASN-MULTACOM-02). ');
$ax += cidrblock($address,'38.98.34.0/23','MULTACOM CORPORATION (ASN-MULTACOM-03). ');
$ax += cidrblock($address,'38.106.52.0/24','MULTACOM CORPORATION (ASN-MULTACOM-04). ');
$ax += cidrblock($address,'45.199.0.0/16','MULTACOM CORPORATION (ASN-MULTACOM-05). ');
$ax += cidrblock($address,'64.27.0.0/19','MULTACOM CORPORATION (ASN-MULTACOM-06). ');
$ax += cidrblock($address,'64.69.32.0/20','MULTACOM CORPORATION (ASN-MULTACOM-07). ');
$ax += cidrblock($address,'66.152.160.0/19','MULTACOM CORPORATION (ASN-MULTACOM-08). ');
$ax += cidrblock($address,'72.44.64.0/20','MULTACOM CORPORATION (ASN-MULTACOM-09). ');
$ax += cidrblock($address,'96.43.80.0/20','MULTACOM CORPORATION (ASN-MULTACOM-10). ');
$ax += cidrblock($address,'96.45.160.0/20','MULTACOM CORPORATION (ASN-MULTACOM-11). ');
$ax += cidrblock($address,'100.42.64.0/20','MULTACOM CORPORATION (ASN-MULTACOM-12). ');
$ax += cidrblock($address,'103.249.2.0/24','MULTACOM CORPORATION (ASN-MULTACOM-13). ');
$ax += cidrblock($address,'103.251.46.0/24','MULTACOM CORPORATION (ASN-MULTACOM-14). ');
$ax += cidrblock($address,'104.194.224.0/19','MULTACOM CORPORATION (ASN-MULTACOM-15). ');
$ax += cidrblock($address,'107.150.192.0/19','MULTACOM CORPORATION (ASN-MULTACOM-16). ');
$ax += cidrblock($address,'108.166.192.0/19','MULTACOM CORPORATION (ASN-MULTACOM-17). ');
$ax += cidrblock($address,'130.222.0.0/16','MULTACOM CORPORATION (ASN-MULTACOM-18). ');
$ax += cidrblock($address,'154.81.0.0/16','MULTACOM CORPORATION (ASN-MULTACOM-19). ');
$ax += cidrblock($address,'154.82.0.0/15','MULTACOM CORPORATION (ASN-MULTACOM-20). ');
$ax += cidrblock($address,'154.84.0.0/14','MULTACOM CORPORATION (ASN-MULTACOM-21). ');
$ax += cidrblock($address,'154.88.0.0/16','MULTACOM CORPORATION (ASN-MULTACOM-22). ');
$ax += cidrblock($address,'154.90.0.0/16','MULTACOM CORPORATION (ASN-MULTACOM-23). ');
$ax += cidrblock($address,'154.92.0.0/14','MULTACOM CORPORATION (ASN-MULTACOM-24). ');
$ax += cidrblock($address,'156.232.0.0/13','MULTACOM CORPORATION (ASN-MULTACOM-25). ');
$ax += cidrblock($address,'162.219.224.0/22','MULTACOM CORPORATION (ASN-MULTACOM-26). ');
$ax += cidrblock($address,'170.178.192.0/19','MULTACOM CORPORATION (ASN-MULTACOM-27). ');
$ax += cidrblock($address,'173.82.0.0/16','MULTACOM CORPORATION (ASN-MULTACOM-28). ');
$ax += cidrblock($address,'178.236.228.0/22','MULTACOM CORPORATION (ASN-MULTACOM-29). ');
$ax += cidrblock($address,'198.52.96.0/19','MULTACOM CORPORATION (ASN-MULTACOM-30). ');
$ax += cidrblock($address,'198.74.96.0/19','MULTACOM CORPORATION (ASN-MULTACOM-31). ');
$ax += cidrblock($address,'198.148.96.0/19','MULTACOM CORPORATION (ASN-MULTACOM-32). ');
$ax += cidrblock($address,'198.177.122.0/23','MULTACOM CORPORATION (ASN-MULTACOM-33). ');
$ax += cidrblock($address,'198.211.0.0/18','MULTACOM CORPORATION (ASN-MULTACOM-34). ');
$ax += cidrblock($address,'204.13.152.0/22','MULTACOM CORPORATION (ASN-MULTACOM-35). ');
$ax += cidrblock($address,'204.15.72.0/21','MULTACOM CORPORATION (ASN-MULTACOM-36). ');
$ax += cidrblock($address,'206.125.40.0/21','MULTACOM CORPORATION (ASN-MULTACOM-37). ');
$ax += cidrblock($address,'208.64.224.0/21','MULTACOM CORPORATION (ASN-MULTACOM-38). ');
$ax += cidrblock($address,'208.70.72.0/21','MULTACOM CORPORATION (ASN-MULTACOM-39). ');
$ax += cidrblock($address,'208.162.36.0/22','MULTACOM CORPORATION (ASN-MULTACOM-40). ');
$ax += cidrblock($address,'208.162.40.0/24','MULTACOM CORPORATION (ASN-MULTACOM-41). ');
$ax += cidrblock($address,'216.24.240.0/20','MULTACOM CORPORATION (ASN-MULTACOM-42). ');
$ax += cidrblock($address,'216.127.160.0/19','MULTACOM CORPORATION (ASN-MULTACOM-43). ');
$ax += cidrblock($address,'216.240.128.0/19','MULTACOM CORPORATION (ASN-MULTACOM-44). ');


// Rose Hosting
// AS6428 (updated 2016.04.03)
$ax += cidrblock($address,'64.39.224.0/20','Rose Hosting (ASN-ROSE-00). ');
$ax += cidrblock($address,'199.102.166.0/24','Rose Hosting (ASN-ROSE-01). ');
$ax += cidrblock($address,'205.159.194.0/24','Rose Hosting (ASN-ROSE-02). ');
$ax += cidrblock($address,'205.242.92.0/23','Rose Hosting (ASN-ROSE-03). ');
$ax += cidrblock($address,'205.242.176.0/20','Rose Hosting (ASN-ROSE-04). ');
$ax += cidrblock($address,'206.196.96.0/19','Rose Hosting (ASN-ROSE-05). ');
$ax += cidrblock($address,'206.197.251.0/24','Rose Hosting (ASN-ROSE-06). ');
$ax += cidrblock($address,'206.225.0.0/19','Rose Hosting (ASN-ROSE-07). ');
$ax += cidrblock($address,'207.244.192.0/18','Rose Hosting (ASN-ROSE-08). ');
$ax += cidrblock($address,'208.16.24.0/21','Rose Hosting (ASN-ROSE-09). ');
$ax += cidrblock($address,'208.19.224.0/20','Rose Hosting (ASN-ROSE-10). ');
$ax += cidrblock($address,'209.16.202.0/23','Rose Hosting (ASN-ROSE-11). ');
$ax += cidrblock($address,'209.126.0.0/18','Rose Hosting (ASN-ROSE-12). ');
$ax += cidrblock($address,'209.126.64.0/19','Rose Hosting (ASN-ROSE-13). ');
$ax += cidrblock($address,'209.135.128.0/19','Rose Hosting (ASN-ROSE-14). ');
$ax += cidrblock($address,'209.144.40.0/22','Rose Hosting (ASN-ROSE-15). ');
$ax += cidrblock($address,'209.145.32.0/19','Rose Hosting (ASN-ROSE-16). ');
$ax += cidrblock($address,'209.223.72.0/22','Rose Hosting (ASN-ROSE-17). ');
$ax += cidrblock($address,'209.223.90.0/23','Rose Hosting (ASN-ROSE-18). ');
$ax += cidrblock($address,'209.223.92.0/23','Rose Hosting (ASN-ROSE-19). ');
$ax += cidrblock($address,'216.87.32.0/19','Rose Hosting (ASN-ROSE-20). ');
$ax += cidrblock($address,'216.88.184.0/21','Rose Hosting (ASN-ROSE-21). ');
$ax += cidrblock($address,'216.89.144.0/22','Rose Hosting (ASN-ROSE-22). ');
$ax += cidrblock($address,'216.89.168.0/21','Rose Hosting (ASN-ROSE-23). ');
$ax += cidrblock($address,'216.114.64.0/20','Rose Hosting (ASN-ROSE-24). ');


// Latisys-Irvine, LLC
// AS5693 (updated 2016.04.03)
$ax += cidrblock($address,'63.251.206.0/24','Latisys-Irvine (ASN-LIRV-00). ');
$ax += cidrblock($address,'74.118.120.0/22','Latisys-Irvine (ASN-LIRV-01). ');
$ax += cidrblock($address,'153.43.254.0/23','Latisys-Irvine (ASN-LIRV-02). ');
$ax += cidrblock($address,'173.0.160.0/20','Latisys-Irvine (ASN-LIRV-03). ');
$ax += cidrblock($address,'192.100.29.0/24','Latisys-Irvine (ASN-LIRV-04). ');
$ax += cidrblock($address,'192.198.180.0/24','Latisys-Irvine (ASN-LIRV-05). ');
$ax += cidrblock($address,'192.243.39.0/24','Latisys-Irvine (ASN-LIRV-06). ');
$ax += cidrblock($address,'205.159.67.0/24','Latisys-Irvine (ASN-LIRV-07). ');
$ax += cidrblock($address,'206.82.192.0/19','Latisys-Irvine (ASN-LIRV-08). ');
$ax += cidrblock($address,'206.220.208.0/22','Latisys-Irvine (ASN-LIRV-09). ');
$ax += cidrblock($address,'207.38.0.0/17','Latisys-Irvine (ASN-LIRV-10). ');
$ax += cidrblock($address,'209.80.0.0/18','Latisys-Irvine (ASN-LIRV-11). ');
$ax += cidrblock($address,'216.23.160.0/19','Latisys-Irvine (ASN-LIRV-12). ');
$ax += cidrblock($address,'216.55.64.0/20','Latisys-Irvine (ASN-LIRV-13). ');
$ax += cidrblock($address,'216.158.96.0/20','Latisys-Irvine (ASN-LIRV-14). ');
$ax += cidrblock($address,'216.211.226.0/23','Latisys-Irvine (ASN-LIRV-15). ');
$ax += cidrblock($address,'216.211.237.0/24','Latisys-Irvine (ASN-LIRV-16). ');
$ax += cidrblock($address,'216.211.238.0/24','Latisys-Irvine (ASN-LIRV-17). ');


// PCCW Global
// AS3491 (updated 2016.04.14)
$ax += cidrblock($address,'23.32.176.0/20','PCCW Global (ASN-PCCW-00). ');
$ax += cidrblock($address,'23.33.44.0/22','PCCW Global (ASN-PCCW-01). ');
$ax += cidrblock($address,'23.33.80.0/20','PCCW Global (ASN-PCCW-02). ');
$ax += cidrblock($address,'23.46.16.0/23','PCCW Global (ASN-PCCW-03). ');
$ax += cidrblock($address,'23.60.78.0/23','PCCW Global (ASN-PCCW-04). ');
$ax += cidrblock($address,'23.60.112.0/20','PCCW Global (ASN-PCCW-05). ');
$ax += cidrblock($address,'23.60.128.0/20','PCCW Global (ASN-PCCW-06). ');
$ax += cidrblock($address,'23.60.144.0/22','PCCW Global (ASN-PCCW-07). ');
$ax += cidrblock($address,'41.79.244.0/22','PCCW Global (ASN-PCCW-08). ');
$ax += cidrblock($address,'41.79.248.0/23','PCCW Global (ASN-PCCW-09). ');
$ax += cidrblock($address,'41.221.208.0/20','PCCW Global (ASN-PCCW-10). ');
$ax += cidrblock($address,'63.216.0.0/13','PCCW Global (ASN-PCCW-11). ');
$ax += cidrblock($address,'65.72.64.0/20','PCCW Global (ASN-PCCW-12). ');
$ax += cidrblock($address,'69.1.66.0/24','PCCW Global (ASN-PCCW-13). ');
$ax += cidrblock($address,'69.1.80.0/24','PCCW Global (ASN-PCCW-14). ');
$ax += cidrblock($address,'69.1.86.0/23','PCCW Global (ASN-PCCW-15). ');
$ax += cidrblock($address,'69.1.88.0/24','PCCW Global (ASN-PCCW-16). ');
$ax += cidrblock($address,'103.17.116.0/22','PCCW Global (ASN-PCCW-17). ');
$ax += cidrblock($address,'103.20.192.0/22','PCCW Global (ASN-PCCW-18). ');
$ax += cidrblock($address,'103.24.92.0/22','PCCW Global (ASN-PCCW-19). ');
$ax += cidrblock($address,'103.27.176.0/22','PCCW Global (ASN-PCCW-20). ');
$ax += cidrblock($address,'103.30.4.0/22','PCCW Global (ASN-PCCW-21). ');
$ax += cidrblock($address,'103.36.52.0/22','PCCW Global (ASN-PCCW-22). ');
$ax += cidrblock($address,'103.41.16.0/22','PCCW Global (ASN-PCCW-23). ');
$ax += cidrblock($address,'103.56.136.0/22','PCCW Global (ASN-PCCW-24). ');
$ax += cidrblock($address,'103.226.152.0/22','PCCW Global (ASN-PCCW-25). ');
$ax += cidrblock($address,'103.230.108.0/22','PCCW Global (ASN-PCCW-26). ');
$ax += cidrblock($address,'103.234.96.0/22','PCCW Global (ASN-PCCW-27). ');
$ax += cidrblock($address,'103.244.148.0/22','PCCW Global (ASN-PCCW-28). ');
$ax += cidrblock($address,'104.95.20.0/22','PCCW Global (ASN-PCCW-29). ');
$ax += cidrblock($address,'104.95.24.0/21','PCCW Global (ASN-PCCW-30). ');
$ax += cidrblock($address,'104.95.32.0/19','PCCW Global (ASN-PCCW-31). ');
$ax += cidrblock($address,'104.95.64.0/19','PCCW Global (ASN-PCCW-32). ');
$ax += cidrblock($address,'104.99.60.0/22','PCCW Global (ASN-PCCW-33). ');
$ax += cidrblock($address,'104.99.96.0/19','PCCW Global (ASN-PCCW-34). ');
$ax += cidrblock($address,'104.99.128.0/23','PCCW Global (ASN-PCCW-35). ');
$ax += cidrblock($address,'112.78.49.0/24','PCCW Global (ASN-PCCW-36). ');
$ax += cidrblock($address,'112.121.42.0/24','PCCW Global (ASN-PCCW-37). ');
$ax += cidrblock($address,'116.66.216.0/21','PCCW Global (ASN-PCCW-38). ');
$ax += cidrblock($address,'121.50.191.0/24','PCCW Global (ASN-PCCW-39). ');
$ax += cidrblock($address,'122.10.203.0/24','PCCW Global (ASN-PCCW-40). ');
$ax += cidrblock($address,'123.108.119.0/24','PCCW Global (ASN-PCCW-41). ');
$ax += cidrblock($address,'146.222.18.0/24','PCCW Global (ASN-PCCW-42). ');
$ax += cidrblock($address,'146.222.35.0/24','PCCW Global (ASN-PCCW-43). ');
$ax += cidrblock($address,'146.222.187.0/24','PCCW Global (ASN-PCCW-44). ');
$ax += cidrblock($address,'146.222.194.0/24','PCCW Global (ASN-PCCW-45). ');
$ax += cidrblock($address,'149.134.175.0/24','PCCW Global (ASN-PCCW-46). ');
$ax += cidrblock($address,'169.239.144.0/22','PCCW Global (ASN-PCCW-47). ');
$ax += cidrblock($address,'185.10.106.0/24','PCCW Global (ASN-PCCW-48). ');
$ax += cidrblock($address,'192.221.77.0/24','PCCW Global (ASN-PCCW-49). ');
$ax += cidrblock($address,'196.216.156.0/24','PCCW Global (ASN-PCCW-50). ');
$ax += cidrblock($address,'198.69.128.0/20','PCCW Global (ASN-PCCW-51). ');
$ax += cidrblock($address,'199.0.216.0/21','PCCW Global (ASN-PCCW-52). ');
$ax += cidrblock($address,'202.183.39.0/24','PCCW Global (ASN-PCCW-53). ');
$ax += cidrblock($address,'203.5.148.0/24','PCCW Global (ASN-PCCW-54). ');
$ax += cidrblock($address,'203.30.26.0/23','PCCW Global (ASN-PCCW-55). ');
$ax += cidrblock($address,'204.180.160.0/19','PCCW Global (ASN-PCCW-56). ');
$ax += cidrblock($address,'205.161.96.0/20','PCCW Global (ASN-PCCW-57). ');
$ax += cidrblock($address,'205.177.0.0/16','PCCW Global (ASN-PCCW-58). ');
$ax += cidrblock($address,'205.252.0.0/16','PCCW Global (ASN-PCCW-59). ');
$ax += cidrblock($address,'206.161.0.0/16','PCCW Global (ASN-PCCW-60). ');
$ax += cidrblock($address,'207.176.0.0/17','PCCW Global (ASN-PCCW-61). ');
$ax += cidrblock($address,'207.226.0.0/16','PCCW Global (ASN-PCCW-62). ');
$ax += cidrblock($address,'209.8.0.0/15','PCCW Global (ASN-PCCW-63). ');
$ax += cidrblock($address,'209.170.64.0/23','PCCW Global (ASN-PCCW-64). ');
$ax += cidrblock($address,'213.248.118.0/23','PCCW Global (ASN-PCCW-65). ');
$ax += cidrblock($address,'213.248.120.0/23','PCCW Global (ASN-PCCW-66). ');
$ax += cidrblock($address,'217.113.64.0/19','PCCW Global (ASN-PCCW-67). ');
$ax += cidrblock($address,'217.156.160.0/21','PCCW Global (ASN-PCCW-68). ');


// Drake Holdings LLC
// AS62540 (updated 2016.04.25 / checked 2016.05.22)
$ax += cidrblock($address,'192.92.196.0/24','Drake Holdings; Access denied (ASN-62540-0). ');
$ax += cidrblock($address,'204.79.180.0/24','Drake Holdings; Access denied (ASN-62540-1). ');


// Sia Nano IT
// AS43513 (updated 2016.04.25)
$ax += cidrblock($address,'31.170.16.0/21','Sia Nano IT; Access denied (ASN-SIANANO-00). ');
$ax += cidrblock($address,'46.19.144.0/21','Sia Nano IT; Access denied (ASN-SIANANO-01). ');
$ax += cidrblock($address,'80.250.48.0/20','Sia Nano IT; Access denied (ASN-SIANANO-02). ');
$ax += cidrblock($address,'85.31.96.0/21','Sia Nano IT; Access denied (ASN-SIANANO-03). ');
$ax += cidrblock($address,'85.254.5.0/24','Sia Nano IT; Access denied (ASN-SIANANO-04). ');
$ax += cidrblock($address,'85.254.16.0/22','Sia Nano IT; Access denied (ASN-SIANANO-05). ');
$ax += cidrblock($address,'85.254.24.0/22','Sia Nano IT; Access denied (ASN-SIANANO-06). ');
$ax += cidrblock($address,'85.254.32.0/21','Sia Nano IT; Access denied (ASN-SIANANO-07). ');
$ax += cidrblock($address,'85.254.142.0/23','Sia Nano IT; Access denied (ASN-SIANANO-08). ');
$ax += cidrblock($address,'85.254.145.0/24','Sia Nano IT; Access denied (ASN-SIANANO-09). ');
$ax += cidrblock($address,'86.63.160.0/19','Sia Nano IT; Access denied (ASN-SIANANO-10). ');
$ax += cidrblock($address,'87.246.128.0/20','Sia Nano IT; Access denied (ASN-SIANANO-11). ');
$ax += cidrblock($address,'89.248.80.0/20','Sia Nano IT; Access denied (ASN-SIANANO-12). ');
$ax += cidrblock($address,'91.203.68.0/22','Sia Nano IT; Access denied (ASN-SIANANO-13). ');
$ax += cidrblock($address,'141.136.0.0/21','Sia Nano IT; Access denied (ASN-SIANANO-14). ');
$ax += cidrblock($address,'159.148.102.0/24','Sia Nano IT; Access denied (ASN-SIANANO-15). ');
$ax += cidrblock($address,'159.148.198.0/23','Sia Nano IT; Access denied (ASN-SIANANO-16). ');
$ax += cidrblock($address,'159.148.200.0/24','Sia Nano IT; Access denied (ASN-SIANANO-17). ');
$ax += cidrblock($address,'178.249.32.0/21','Sia Nano IT; Access denied (ASN-SIANANO-18). ');
$ax += cidrblock($address,'185.71.128.0/22','Sia Nano IT; Access denied (ASN-SIANANO-19). ');
$ax += cidrblock($address,'185.72.84.0/22','Sia Nano IT; Access denied (ASN-SIANANO-20). ');
$ax += cidrblock($address,'185.80.236.0/22','Sia Nano IT; Access denied (ASN-SIANANO-21). ');
$ax += cidrblock($address,'188.92.72.0/21','Sia Nano IT; Access denied (ASN-SIANANO-22). ');
$ax += cidrblock($address,'193.46.236.0/24','Sia Nano IT; Access denied (ASN-SIANANO-23). ');


// Sharktech
// AS46844 (updated 2016.05.20)
$ax += cidrblock($address,'45.58.128.0/19','Sharktech; Access denied (ASN-SHARKTECH-00). ');
$ax += cidrblock($address,'45.58.160.0/20','Sharktech; Access denied (ASN-SHARKTECH-01). ');
$ax += cidrblock($address,'45.58.176.0/21','Sharktech; Access denied (ASN-SHARKTECH-02). ');
$ax += cidrblock($address,'45.58.184.0/23','Sharktech; Access denied (ASN-SHARKTECH-03). ');
$ax += cidrblock($address,'45.58.186.0/24','Sharktech; Access denied (ASN-SHARKTECH-04). ');
$ax += cidrblock($address,'45.58.188.0/22','Sharktech; Access denied (ASN-SHARKTECH-05). ');
$ax += cidrblock($address,'64.32.0.0/19','Sharktech; Access denied (ASN-SHARKTECH-06). ');
$ax += cidrblock($address,'67.21.64.0/19','Sharktech; Access denied (ASN-SHARKTECH-07). ');
$ax += cidrblock($address,'70.39.64.0/18','Sharktech; Access denied (ASN-SHARKTECH-08). ');
$ax += cidrblock($address,'91.236.182.0/24','Sharktech; Access denied (ASN-SHARKTECH-09). ');
$ax += cidrblock($address,'103.9.116.0/22','Sharktech; Access denied (ASN-SHARKTECH-10). ');
$ax += cidrblock($address,'104.37.244.0/22','Sharktech; Access denied (ASN-SHARKTECH-11). ');
$ax += cidrblock($address,'104.160.160.0/19','Sharktech; Access denied (ASN-SHARKTECH-12). ');
$ax += cidrblock($address,'104.201.64.0/18','Sharktech; Access denied (ASN-SHARKTECH-13). ');
$ax += cidrblock($address,'107.167.0.0/20','Sharktech; Access denied (ASN-SHARKTECH-14). ');
$ax += cidrblock($address,'107.167.16.0/21','Sharktech; Access denied (ASN-SHARKTECH-15). ');
$ax += cidrblock($address,'107.167.24.0/22','Sharktech; Access denied (ASN-SHARKTECH-16). ');
$ax += cidrblock($address,'107.167.28.0/24','Sharktech; Access denied (ASN-SHARKTECH-17). ');
$ax += cidrblock($address,'107.167.30.0/24','Sharktech; Access denied (ASN-SHARKTECH-18). ');
$ax += cidrblock($address,'170.178.160.0/19','Sharktech; Access denied (ASN-SHARKTECH-19). ');
$ax += cidrblock($address,'174.128.224.0/19','Sharktech; Access denied (ASN-SHARKTECH-20). ');
$ax += cidrblock($address,'193.235.66.0/24','Sharktech; Access denied (ASN-SHARKTECH-21). ');
$ax += cidrblock($address,'198.148.80.0/20','Sharktech; Access denied (ASN-SHARKTECH-22). ');
$ax += cidrblock($address,'199.115.96.0/21','Sharktech; Access denied (ASN-SHARKTECH-23). ');
$ax += cidrblock($address,'202.59.250.0/23','Sharktech; Access denied (ASN-SHARKTECH-24). ');
$ax += cidrblock($address,'204.16.169.0/24','Sharktech; Access denied (ASN-SHARKTECH-25). ');
$ax += cidrblock($address,'204.188.192.0/18','Sharktech; Access denied (ASN-SHARKTECH-26). ');
$ax += cidrblock($address,'208.98.0.0/18','Sharktech; Access denied (ASN-SHARKTECH-27). ');
$ax += cidrblock($address,'216.18.229.0/24','Sharktech; Access denied (ASN-SHARKTECH-28). ');


// Sun Network (Hong Kong) Limited
// AS38197 (updated 2016.05.20)
$ax += cidrblock($address,'10.0.40.0/22','Sun Network; Access denied (ASN-SUNNETWORK-000). ');
$ax += cidrblock($address,'10.0.45.0/24','Sun Network; Access denied (ASN-SUNNETWORK-001). ');
$ax += cidrblock($address,'10.0.46.0/23','Sun Network; Access denied (ASN-SUNNETWORK-002). ');
$ax += cidrblock($address,'10.7.51.0/24','Sun Network; Access denied (ASN-SUNNETWORK-003). ');
$ax += cidrblock($address,'10.9.70.0/24','Sun Network; Access denied (ASN-SUNNETWORK-004). ');
$ax += cidrblock($address,'10.27.56.0/24','Sun Network; Access denied (ASN-SUNNETWORK-005). ');
$ax += cidrblock($address,'10.33.88.0/24','Sun Network; Access denied (ASN-SUNNETWORK-006). ');
$ax += cidrblock($address,'10.140.66.0/24','Sun Network; Access denied (ASN-SUNNETWORK-007). ');
$ax += cidrblock($address,'14.192.4.0/22','Sun Network; Access denied (ASN-SUNNETWORK-008). ');
$ax += cidrblock($address,'23.224.224.0/24','Sun Network; Access denied (ASN-SUNNETWORK-09). ');
$ax += cidrblock($address,'23.226.48.0/22','Sun Network; Access denied (ASN-SUNNETWORK-010). ');
$ax += cidrblock($address,'23.226.52.0/23','Sun Network; Access denied (ASN-SUNNETWORK-011). ');
$ax += cidrblock($address,'23.226.55.0/24','Sun Network; Access denied (ASN-SUNNETWORK-012). ');
$ax += cidrblock($address,'23.226.56.0/24','Sun Network; Access denied (ASN-SUNNETWORK-013). ');
$ax += cidrblock($address,'23.226.58.0/23','Sun Network; Access denied (ASN-SUNNETWORK-014). ');
$ax += cidrblock($address,'23.226.60.0/22','Sun Network; Access denied (ASN-SUNNETWORK-015). ');
$ax += cidrblock($address,'23.226.176.0/20','Sun Network; Access denied (ASN-SUNNETWORK-016). ');
$ax += cidrblock($address,'23.234.44.0/22','Sun Network; Access denied (ASN-SUNNETWORK-017). ');
$ax += cidrblock($address,'23.235.128.0/19','Sun Network; Access denied (ASN-SUNNETWORK-018). ');
$ax += cidrblock($address,'23.235.172.0/22','Sun Network; Access denied (ASN-SUNNETWORK-019). ');
$ax += cidrblock($address,'23.235.176.0/21','Sun Network; Access denied (ASN-SUNNETWORK-020). ');
$ax += cidrblock($address,'23.235.184.0/22','Sun Network; Access denied (ASN-SUNNETWORK-021). ');
$ax += cidrblock($address,'27.0.192.0/22','Sun Network; Access denied (ASN-SUNNETWORK-022). ');
$ax += cidrblock($address,'43.224.140.0/22','Sun Network; Access denied (ASN-SUNNETWORK-023). ');
$ax += cidrblock($address,'43.224.224.0/22','Sun Network; Access denied (ASN-SUNNETWORK-024). ');
$ax += cidrblock($address,'43.225.28.0/22','Sun Network; Access denied (ASN-SUNNETWORK-025). ');
$ax += cidrblock($address,'43.225.124.0/22','Sun Network; Access denied (ASN-SUNNETWORK-026). ');
$ax += cidrblock($address,'43.226.16.0/21','Sun Network; Access denied (ASN-SUNNETWORK-027). ');
$ax += cidrblock($address,'43.229.112.0/22','Sun Network; Access denied (ASN-SUNNETWORK-028). ');
$ax += cidrblock($address,'43.229.120.0/22','Sun Network; Access denied (ASN-SUNNETWORK-029). ');
$ax += cidrblock($address,'43.229.212.0/22','Sun Network; Access denied (ASN-SUNNETWORK-030). ');
$ax += cidrblock($address,'43.230.168.0/22','Sun Network; Access denied (ASN-SUNNETWORK-031). ');
$ax += cidrblock($address,'43.240.36.0/22','Sun Network; Access denied (ASN-SUNNETWORK-032). ');
$ax += cidrblock($address,'43.240.48.0/22','Sun Network; Access denied (ASN-SUNNETWORK-033). ');
$ax += cidrblock($address,'43.240.236.0/22','Sun Network; Access denied (ASN-SUNNETWORK-034). ');
$ax += cidrblock($address,'43.241.45.0/24','Sun Network; Access denied (ASN-SUNNETWORK-035). ');
$ax += cidrblock($address,'43.241.46.0/23','Sun Network; Access denied (ASN-SUNNETWORK-036). ');
$ax += cidrblock($address,'43.241.157.0/24','Sun Network; Access denied (ASN-SUNNETWORK-037). ');
$ax += cidrblock($address,'43.241.159.0/24','Sun Network; Access denied (ASN-SUNNETWORK-038). ');
$ax += cidrblock($address,'43.242.200.0/22','Sun Network; Access denied (ASN-SUNNETWORK-039). ');
$ax += cidrblock($address,'43.243.28.0/22','Sun Network; Access denied (ASN-SUNNETWORK-040). ');
$ax += cidrblock($address,'43.243.32.0/22','Sun Network; Access denied (ASN-SUNNETWORK-041). ');
$ax += cidrblock($address,'43.243.72.0/22','Sun Network; Access denied (ASN-SUNNETWORK-042). ');
$ax += cidrblock($address,'43.243.92.0/22','Sun Network; Access denied (ASN-SUNNETWORK-043). ');
$ax += cidrblock($address,'43.243.100.0/22','Sun Network; Access denied (ASN-SUNNETWORK-044). ');
$ax += cidrblock($address,'43.243.108.0/22','Sun Network; Access denied (ASN-SUNNETWORK-045). ');
$ax += cidrblock($address,'43.243.188.0/22','Sun Network; Access denied (ASN-SUNNETWORK-046). ');
$ax += cidrblock($address,'43.243.220.0/22','Sun Network; Access denied (ASN-SUNNETWORK-047). ');
$ax += cidrblock($address,'43.246.212.0/22','Sun Network; Access denied (ASN-SUNNETWORK-048). ');
$ax += cidrblock($address,'43.248.8.0/22','Sun Network; Access denied (ASN-SUNNETWORK-049). ');
$ax += cidrblock($address,'43.248.172.0/22','Sun Network; Access denied (ASN-SUNNETWORK-050). ');
$ax += cidrblock($address,'43.249.24.0/22','Sun Network; Access denied (ASN-SUNNETWORK-051). ');
$ax += cidrblock($address,'43.249.172.0/22','Sun Network; Access denied (ASN-SUNNETWORK-052). ');
$ax += cidrblock($address,'43.249.204.0/22','Sun Network; Access denied (ASN-SUNNETWORK-053). ');
$ax += cidrblock($address,'43.251.104.0/22','Sun Network; Access denied (ASN-SUNNETWORK-054). ');
$ax += cidrblock($address,'43.251.224.0/21','Sun Network; Access denied (ASN-SUNNETWORK-055). ');
$ax += cidrblock($address,'45.64.52.0/22','Sun Network; Access denied (ASN-SUNNETWORK-056). ');
$ax += cidrblock($address,'45.64.108.0/22','Sun Network; Access denied (ASN-SUNNETWORK-057). ');
$ax += cidrblock($address,'45.113.0.0/22','Sun Network; Access denied (ASN-SUNNETWORK-058). ');
$ax += cidrblock($address,'45.113.108.0/22','Sun Network; Access denied (ASN-SUNNETWORK-059). ');
$ax += cidrblock($address,'45.113.160.0/22','Sun Network; Access denied (ASN-SUNNETWORK-060). ');
$ax += cidrblock($address,'45.114.104.0/22','Sun Network; Access denied (ASN-SUNNETWORK-061). ');
$ax += cidrblock($address,'45.114.168.0/22','Sun Network; Access denied (ASN-SUNNETWORK-062). ');
$ax += cidrblock($address,'45.114.205.0/24','Sun Network; Access denied (ASN-SUNNETWORK-063). ');
$ax += cidrblock($address,'45.114.206.0/23','Sun Network; Access denied (ASN-SUNNETWORK-064). ');
$ax += cidrblock($address,'45.115.40.0/22','Sun Network; Access denied (ASN-SUNNETWORK-065). ');
$ax += cidrblock($address,'45.115.124.0/22','Sun Network; Access denied (ASN-SUNNETWORK-066). ');
$ax += cidrblock($address,'45.116.212.0/22','Sun Network; Access denied (ASN-SUNNETWORK-067). ');
$ax += cidrblock($address,'45.117.40.0/22','Sun Network; Access denied (ASN-SUNNETWORK-068). ');
$ax += cidrblock($address,'45.117.192.0/22','Sun Network; Access denied (ASN-SUNNETWORK-069). ');
$ax += cidrblock($address,'45.120.80.0/22','Sun Network; Access denied (ASN-SUNNETWORK-070). ');
$ax += cidrblock($address,'45.120.184.0/22','Sun Network; Access denied (ASN-SUNNETWORK-071). ');
$ax += cidrblock($address,'45.125.28.0/22','Sun Network; Access denied (ASN-SUNNETWORK-072). ');
$ax += cidrblock($address,'45.125.104.0/22','Sun Network; Access denied (ASN-SUNNETWORK-073). ');
$ax += cidrblock($address,'45.127.36.0/22','Sun Network; Access denied (ASN-SUNNETWORK-074). ');
$ax += cidrblock($address,'45.127.124.0/23','Sun Network; Access denied (ASN-SUNNETWORK-075). ');
$ax += cidrblock($address,'45.127.126.0/24','Sun Network; Access denied (ASN-SUNNETWORK-076). ');
$ax += cidrblock($address,'45.127.176.0/22','Sun Network; Access denied (ASN-SUNNETWORK-077). ');
$ax += cidrblock($address,'103.1.40.0/22','Sun Network; Access denied (ASN-SUNNETWORK-078). ');
$ax += cidrblock($address,'103.9.252.0/22','Sun Network; Access denied (ASN-SUNNETWORK-079). ');
$ax += cidrblock($address,'103.12.68.0/22','Sun Network; Access denied (ASN-SUNNETWORK-080). ');
$ax += cidrblock($address,'103.12.92.0/22','Sun Network; Access denied (ASN-SUNNETWORK-081). ');
$ax += cidrblock($address,'103.12.148.0/22','Sun Network; Access denied (ASN-SUNNETWORK-082). ');
$ax += cidrblock($address,'103.14.100.0/22','Sun Network; Access denied (ASN-SUNNETWORK-083). ');
$ax += cidrblock($address,'103.14.112.0/22','Sun Network; Access denied (ASN-SUNNETWORK-084). ');
$ax += cidrblock($address,'103.19.188.0/22','Sun Network; Access denied (ASN-SUNNETWORK-085). ');
$ax += cidrblock($address,'103.24.204.0/22','Sun Network; Access denied (ASN-SUNNETWORK-086). ');
$ax += cidrblock($address,'103.26.124.0/22','Sun Network; Access denied (ASN-SUNNETWORK-087). ');
$ax += cidrblock($address,'103.35.200.0/22','Sun Network; Access denied (ASN-SUNNETWORK-088). ');
$ax += cidrblock($address,'103.36.20.0/22','Sun Network; Access denied (ASN-SUNNETWORK-089). ');
$ax += cidrblock($address,'103.37.0.0/22','Sun Network; Access denied (ASN-SUNNETWORK-090). ');
$ax += cidrblock($address,'103.37.40.0/22','Sun Network; Access denied (ASN-SUNNETWORK-091). ');
$ax += cidrblock($address,'103.37.85.0/24','Sun Network; Access denied (ASN-SUNNETWORK-092). ');
$ax += cidrblock($address,'103.37.87.0/24','Sun Network; Access denied (ASN-SUNNETWORK-093). ');
$ax += cidrblock($address,'103.38.80.0/22','Sun Network; Access denied (ASN-SUNNETWORK-094). ');
$ax += cidrblock($address,'103.39.16.0/22','Sun Network; Access denied (ASN-SUNNETWORK-095). ');
$ax += cidrblock($address,'103.39.76.0/22','Sun Network; Access denied (ASN-SUNNETWORK-096). ');
$ax += cidrblock($address,'103.40.8.0/22','Sun Network; Access denied (ASN-SUNNETWORK-097). ');
$ax += cidrblock($address,'103.40.112.0/22','Sun Network; Access denied (ASN-SUNNETWORK-098). ');
$ax += cidrblock($address,'103.41.4.0/22','Sun Network; Access denied (ASN-SUNNETWORK-99). ');
$ax += cidrblock($address,'103.41.64.0/22','Sun Network; Access denied (ASN-SUNNETWORK-100). ');
$ax += cidrblock($address,'103.42.176.0/22','Sun Network; Access denied (ASN-SUNNETWORK-101). ');
$ax += cidrblock($address,'103.43.8.0/21','Sun Network; Access denied (ASN-SUNNETWORK-102). ');
$ax += cidrblock($address,'103.43.164.0/22','Sun Network; Access denied (ASN-SUNNETWORK-103). ');
$ax += cidrblock($address,'103.43.232.0/22','Sun Network; Access denied (ASN-SUNNETWORK-104). ');
$ax += cidrblock($address,'103.44.20.0/22','Sun Network; Access denied (ASN-SUNNETWORK-105). ');
$ax += cidrblock($address,'103.44.88.0/22','Sun Network; Access denied (ASN-SUNNETWORK-106). ');
$ax += cidrblock($address,'103.45.64.0/21','Sun Network; Access denied (ASN-SUNNETWORK-107). ');
$ax += cidrblock($address,'103.48.20.0/22','Sun Network; Access denied (ASN-SUNNETWORK-108). ');
$ax += cidrblock($address,'103.48.132.0/22','Sun Network; Access denied (ASN-SUNNETWORK-109). ');
$ax += cidrblock($address,'103.48.144.0/22','Sun Network; Access denied (ASN-SUNNETWORK-110). ');
$ax += cidrblock($address,'103.49.8.0/22','Sun Network; Access denied (ASN-SUNNETWORK-111). ');
$ax += cidrblock($address,'103.49.248.0/22','Sun Network; Access denied (ASN-SUNNETWORK-112). ');
$ax += cidrblock($address,'103.52.152.0/22','Sun Network; Access denied (ASN-SUNNETWORK-113). ');
$ax += cidrblock($address,'103.53.4.0/23','Sun Network; Access denied (ASN-SUNNETWORK-114). ');
$ax += cidrblock($address,'103.53.6.0/24','Sun Network; Access denied (ASN-SUNNETWORK-115). ');
$ax += cidrblock($address,'103.54.60.0/22','Sun Network; Access denied (ASN-SUNNETWORK-116). ');
$ax += cidrblock($address,'103.54.124.0/22','Sun Network; Access denied (ASN-SUNNETWORK-117). ');
$ax += cidrblock($address,'103.54.176.0/22','Sun Network; Access denied (ASN-SUNNETWORK-118). ');
$ax += cidrblock($address,'103.55.28.0/22','Sun Network; Access denied (ASN-SUNNETWORK-119). ');
$ax += cidrblock($address,'103.55.128.0/22','Sun Network; Access denied (ASN-SUNNETWORK-120). ');
$ax += cidrblock($address,'103.57.24.0/22','Sun Network; Access denied (ASN-SUNNETWORK-121). ');
$ax += cidrblock($address,'103.57.228.0/22','Sun Network; Access denied (ASN-SUNNETWORK-122). ');
$ax += cidrblock($address,'103.60.148.0/22','Sun Network; Access denied (ASN-SUNNETWORK-123). ');
$ax += cidrblock($address,'103.61.0.0/22','Sun Network; Access denied (ASN-SUNNETWORK-124). ');
$ax += cidrblock($address,'103.193.144.0/22','Sun Network; Access denied (ASN-SUNNETWORK-125). ');
$ax += cidrblock($address,'103.193.150.0/24','Sun Network; Access denied (ASN-SUNNETWORK-126). ');
$ax += cidrblock($address,'103.193.240.0/22','Sun Network; Access denied (ASN-SUNNETWORK-127). ');
$ax += cidrblock($address,'103.195.192.0/22','Sun Network; Access denied (ASN-SUNNETWORK-128). ');
$ax += cidrblock($address,'103.196.60.0/22','Sun Network; Access denied (ASN-SUNNETWORK-129). ');
$ax += cidrblock($address,'103.196.120.0/22','Sun Network; Access denied (ASN-SUNNETWORK-130). ');
$ax += cidrblock($address,'103.200.32.0/22','Sun Network; Access denied (ASN-SUNNETWORK-131). ');
$ax += cidrblock($address,'103.200.124.0/22','Sun Network; Access denied (ASN-SUNNETWORK-132). ');
$ax += cidrblock($address,'103.203.52.0/22','Sun Network; Access denied (ASN-SUNNETWORK-133). ');
$ax += cidrblock($address,'103.203.148.0/22','Sun Network; Access denied (ASN-SUNNETWORK-134). ');
$ax += cidrblock($address,'103.204.76.0/22','Sun Network; Access denied (ASN-SUNNETWORK-135). ');
$ax += cidrblock($address,'103.205.4.0/22','Sun Network; Access denied (ASN-SUNNETWORK-136). ');
$ax += cidrblock($address,'103.205.240.0/22','Sun Network; Access denied (ASN-SUNNETWORK-137). ');
$ax += cidrblock($address,'103.206.36.0/22','Sun Network; Access denied (ASN-SUNNETWORK-138). ');
$ax += cidrblock($address,'103.206.108.0/22','Sun Network; Access denied (ASN-SUNNETWORK-139). ');
$ax += cidrblock($address,'103.208.32.0/22','Sun Network; Access denied (ASN-SUNNETWORK-140). ');
$ax += cidrblock($address,'103.211.68.0/22','Sun Network; Access denied (ASN-SUNNETWORK-141). ');
$ax += cidrblock($address,'103.211.124.0/22','Sun Network; Access denied (ASN-SUNNETWORK-142). ');
$ax += cidrblock($address,'103.212.104.0/22','Sun Network; Access denied (ASN-SUNNETWORK-143). ');
$ax += cidrblock($address,'103.214.164.0/22','Sun Network; Access denied (ASN-SUNNETWORK-144). ');
$ax += cidrblock($address,'103.214.224.0/22','Sun Network; Access denied (ASN-SUNNETWORK-145). ');
$ax += cidrblock($address,'103.215.4.0/22','Sun Network; Access denied (ASN-SUNNETWORK-146). ');
$ax += cidrblock($address,'103.215.76.0/22','Sun Network; Access denied (ASN-SUNNETWORK-147). ');
$ax += cidrblock($address,'103.215.212.0/22','Sun Network; Access denied (ASN-SUNNETWORK-148). ');
$ax += cidrblock($address,'103.224.16.0/22','Sun Network; Access denied (ASN-SUNNETWORK-149). ');
$ax += cidrblock($address,'103.229.180.0/22','Sun Network; Access denied (ASN-SUNNETWORK-150). ');
$ax += cidrblock($address,'103.230.228.0/22','Sun Network; Access denied (ASN-SUNNETWORK-151). ');
$ax += cidrblock($address,'103.230.240.0/22','Sun Network; Access denied (ASN-SUNNETWORK-152). ');
$ax += cidrblock($address,'103.231.28.0/22','Sun Network; Access denied (ASN-SUNNETWORK-153). ');
$ax += cidrblock($address,'103.231.104.0/22','Sun Network; Access denied (ASN-SUNNETWORK-154). ');
$ax += cidrblock($address,'103.231.164.0/22','Sun Network; Access denied (ASN-SUNNETWORK-155). ');
$ax += cidrblock($address,'103.231.185.0/24','Sun Network; Access denied (ASN-SUNNETWORK-156). ');
$ax += cidrblock($address,'103.231.186.0/23','Sun Network; Access denied (ASN-SUNNETWORK-157). ');
$ax += cidrblock($address,'103.233.184.0/22','Sun Network; Access denied (ASN-SUNNETWORK-158). ');
$ax += cidrblock($address,'103.233.248.0/22','Sun Network; Access denied (ASN-SUNNETWORK-159). ');
$ax += cidrblock($address,'103.241.72.0/22','Sun Network; Access denied (ASN-SUNNETWORK-160). ');
$ax += cidrblock($address,'103.248.36.0/22','Sun Network; Access denied (ASN-SUNNETWORK-161). ');
$ax += cidrblock($address,'103.253.140.0/22','Sun Network; Access denied (ASN-SUNNETWORK-162). ');
$ax += cidrblock($address,'103.254.108.0/22','Sun Network; Access denied (ASN-SUNNETWORK-163). ');
$ax += cidrblock($address,'107.151.64.0/18','Sun Network; Access denied (ASN-SUNNETWORK-164). ');
$ax += cidrblock($address,'112.213.96.0/19','Sun Network; Access denied (ASN-SUNNETWORK-165). ');
$ax += cidrblock($address,'115.42.60.0/22','Sun Network; Access denied (ASN-SUNNETWORK-166). ');
$ax += cidrblock($address,'116.193.164.0/22','Sun Network; Access denied (ASN-SUNNETWORK-167). ');
$ax += cidrblock($address,'116.213.40.0/22','Sun Network; Access denied (ASN-SUNNETWORK-168). ');
$ax += cidrblock($address,'117.18.0.0/20','Sun Network; Access denied (ASN-SUNNETWORK-169). ');
$ax += cidrblock($address,'121.54.160.0/22','Sun Network; Access denied (ASN-SUNNETWORK-170). ');
$ax += cidrblock($address,'121.54.168.0/21','Sun Network; Access denied (ASN-SUNNETWORK-171). ');
$ax += cidrblock($address,'121.127.224.0/19','Sun Network; Access denied (ASN-SUNNETWORK-172). ');
$ax += cidrblock($address,'122.9.64.0/18','Sun Network; Access denied (ASN-SUNNETWORK-173). ');
$ax += cidrblock($address,'122.9.128.0/17','Sun Network; Access denied (ASN-SUNNETWORK-174). ');
$ax += cidrblock($address,'122.10.0.0/18','Sun Network; Access denied (ASN-SUNNETWORK-175). ');
$ax += cidrblock($address,'122.10.68.0/22','Sun Network; Access denied (ASN-SUNNETWORK-176). ');
$ax += cidrblock($address,'122.10.72.0/21','Sun Network; Access denied (ASN-SUNNETWORK-177). ');
$ax += cidrblock($address,'123.60.0.0/17','Sun Network; Access denied (ASN-SUNNETWORK-178). ');
$ax += cidrblock($address,'123.60.128.0/20','Sun Network; Access denied (ASN-SUNNETWORK-179). ');
$ax += cidrblock($address,'123.60.144.0/22','Sun Network; Access denied (ASN-SUNNETWORK-180). ');
$ax += cidrblock($address,'123.60.148.0/24','Sun Network; Access denied (ASN-SUNNETWORK-181). ');
$ax += cidrblock($address,'123.60.150.0/23','Sun Network; Access denied (ASN-SUNNETWORK-182). ');
$ax += cidrblock($address,'123.60.152.0/21','Sun Network; Access denied (ASN-SUNNETWORK-183). ');
$ax += cidrblock($address,'123.60.160.0/19','Sun Network; Access denied (ASN-SUNNETWORK-184). ');
$ax += cidrblock($address,'123.60.192.0/18','Sun Network; Access denied (ASN-SUNNETWORK-185). ');
$ax += cidrblock($address,'123.255.88.0/21','Sun Network; Access denied (ASN-SUNNETWORK-186). ');
$ax += cidrblock($address,'139.5.208.0/22','Sun Network; Access denied (ASN-SUNNETWORK-187). ');
$ax += cidrblock($address,'144.48.124.0/22','Sun Network; Access denied (ASN-SUNNETWORK-188). ');
$ax += cidrblock($address,'144.48.172.0/22','Sun Network; Access denied (ASN-SUNNETWORK-189). ');
$ax += cidrblock($address,'144.48.192.0/22','Sun Network; Access denied (ASN-SUNNETWORK-190). ');
$ax += cidrblock($address,'144.48.236.0/22','Sun Network; Access denied (ASN-SUNNETWORK-191). ');
$ax += cidrblock($address,'157.119.92.0/22','Sun Network; Access denied (ASN-SUNNETWORK-192). ');
$ax += cidrblock($address,'160.202.44.0/22','Sun Network; Access denied (ASN-SUNNETWORK-193). ');
$ax += cidrblock($address,'160.238.84.0/22','Sun Network; Access denied (ASN-SUNNETWORK-194). ');
$ax += cidrblock($address,'162.209.240.0/20','Sun Network; Access denied (ASN-SUNNETWORK-195). ');
$ax += cidrblock($address,'172.16.0.0/24','Sun Network; Access denied (ASN-SUNNETWORK-196). ');
$ax += cidrblock($address,'172.16.8.0/24','Sun Network; Access denied (ASN-SUNNETWORK-197). ');
$ax += cidrblock($address,'172.16.10.0/23','Sun Network; Access denied (ASN-SUNNETWORK-198). ');
$ax += cidrblock($address,'172.16.12.0/23','Sun Network; Access denied (ASN-SUNNETWORK-199). ');
$ax += cidrblock($address,'172.16.14.0/24','Sun Network; Access denied (ASN-SUNNETWORK-200). ');
$ax += cidrblock($address,'172.16.21.0/24','Sun Network; Access denied (ASN-SUNNETWORK-201). ');
$ax += cidrblock($address,'172.16.22.0/23','Sun Network; Access denied (ASN-SUNNETWORK-202). ');
$ax += cidrblock($address,'172.16.24.0/23','Sun Network; Access denied (ASN-SUNNETWORK-203). ');
$ax += cidrblock($address,'172.16.26.0/24','Sun Network; Access denied (ASN-SUNNETWORK-204). ');
$ax += cidrblock($address,'172.16.31.0/24','Sun Network; Access denied (ASN-SUNNETWORK-205). ');
$ax += cidrblock($address,'172.16.32.0/22','Sun Network; Access denied (ASN-SUNNETWORK-206). ');
$ax += cidrblock($address,'172.16.36.0/23','Sun Network; Access denied (ASN-SUNNETWORK-207). ');
$ax += cidrblock($address,'172.16.38.0/24','Sun Network; Access denied (ASN-SUNNETWORK-208). ');
$ax += cidrblock($address,'172.16.51.0/24','Sun Network; Access denied (ASN-SUNNETWORK-209). ');
$ax += cidrblock($address,'172.16.52.0/22','Sun Network; Access denied (ASN-SUNNETWORK-210). ');
$ax += cidrblock($address,'172.16.56.0/23','Sun Network; Access denied (ASN-SUNNETWORK-211). ');
$ax += cidrblock($address,'172.16.58.0/24','Sun Network; Access denied (ASN-SUNNETWORK-212). ');
$ax += cidrblock($address,'172.16.121.0/24','Sun Network; Access denied (ASN-SUNNETWORK-213). ');
$ax += cidrblock($address,'172.16.122.0/23','Sun Network; Access denied (ASN-SUNNETWORK-214). ');
$ax += cidrblock($address,'172.16.124.0/23','Sun Network; Access denied (ASN-SUNNETWORK-215). ');
$ax += cidrblock($address,'172.16.126.0/24','Sun Network; Access denied (ASN-SUNNETWORK-216). ');
$ax += cidrblock($address,'172.16.131.0/24','Sun Network; Access denied (ASN-SUNNETWORK-217). ');
$ax += cidrblock($address,'172.16.132.0/22','Sun Network; Access denied (ASN-SUNNETWORK-218). ');
$ax += cidrblock($address,'172.16.136.0/23','Sun Network; Access denied (ASN-SUNNETWORK-219). ');
$ax += cidrblock($address,'172.16.138.0/24','Sun Network; Access denied (ASN-SUNNETWORK-220). ');
$ax += cidrblock($address,'172.16.151.0/24','Sun Network; Access denied (ASN-SUNNETWORK-221). ');
$ax += cidrblock($address,'172.16.152.0/22','Sun Network; Access denied (ASN-SUNNETWORK-222). ');
$ax += cidrblock($address,'172.16.156.0/23','Sun Network; Access denied (ASN-SUNNETWORK-223). ');
$ax += cidrblock($address,'172.16.158.0/24','Sun Network; Access denied (ASN-SUNNETWORK-224). ');
$ax += cidrblock($address,'172.16.250.0/24','Sun Network; Access denied (ASN-SUNNETWORK-225). ');
$ax += cidrblock($address,'172.17.0.0/21','Sun Network; Access denied (ASN-SUNNETWORK-226). ');
$ax += cidrblock($address,'172.17.8.0/23','Sun Network; Access denied (ASN-SUNNETWORK-227). ');
$ax += cidrblock($address,'172.17.44.0/24','Sun Network; Access denied (ASN-SUNNETWORK-228). ');
$ax += cidrblock($address,'172.17.46.0/24','Sun Network; Access denied (ASN-SUNNETWORK-229). ');
$ax += cidrblock($address,'172.17.60.0/24','Sun Network; Access denied (ASN-SUNNETWORK-230). ');
$ax += cidrblock($address,'172.17.200.0/23','Sun Network; Access denied (ASN-SUNNETWORK-231). ');
$ax += cidrblock($address,'172.17.251.0/24','Sun Network; Access denied (ASN-SUNNETWORK-232). ');
$ax += cidrblock($address,'172.18.8.0/24','Sun Network; Access denied (ASN-SUNNETWORK-233). ');
$ax += cidrblock($address,'172.18.14.0/23','Sun Network; Access denied (ASN-SUNNETWORK-234). ');
$ax += cidrblock($address,'172.18.18.0/24','Sun Network; Access denied (ASN-SUNNETWORK-235). ');
$ax += cidrblock($address,'172.20.0.0/24','Sun Network; Access denied (ASN-SUNNETWORK-236). ');
$ax += cidrblock($address,'172.20.20.0/24','Sun Network; Access denied (ASN-SUNNETWORK-237). ');
$ax += cidrblock($address,'172.20.109.0/24','Sun Network; Access denied (ASN-SUNNETWORK-238). ');
$ax += cidrblock($address,'172.20.119.0/24','Sun Network; Access denied (ASN-SUNNETWORK-239). ');
$ax += cidrblock($address,'172.20.129.0/24','Sun Network; Access denied (ASN-SUNNETWORK-240). ');
$ax += cidrblock($address,'172.20.159.0/24','Sun Network; Access denied (ASN-SUNNETWORK-241). ');
$ax += cidrblock($address,'172.20.160.0/22','Sun Network; Access denied (ASN-SUNNETWORK-242). ');
$ax += cidrblock($address,'172.20.230.0/24','Sun Network; Access denied (ASN-SUNNETWORK-243). ');
$ax += cidrblock($address,'172.25.208.0/24','Sun Network; Access denied (ASN-SUNNETWORK-244). ');
$ax += cidrblock($address,'172.25.240.0/24','Sun Network; Access denied (ASN-SUNNETWORK-245). ');
$ax += cidrblock($address,'172.25.242.0/24','Sun Network; Access denied (ASN-SUNNETWORK-246). ');
$ax += cidrblock($address,'172.25.246.0/24','Sun Network; Access denied (ASN-SUNNETWORK-247). ');
$ax += cidrblock($address,'172.25.248.0/24','Sun Network; Access denied (ASN-SUNNETWORK-248). ');
$ax += cidrblock($address,'172.29.200.0/24','Sun Network; Access denied (ASN-SUNNETWORK-249). ');
$ax += cidrblock($address,'172.30.0.0/22','Sun Network; Access denied (ASN-SUNNETWORK-250). ');
$ax += cidrblock($address,'172.31.66.0/24','Sun Network; Access denied (ASN-SUNNETWORK-251). ');
$ax += cidrblock($address,'172.31.100.0/24','Sun Network; Access denied (ASN-SUNNETWORK-252). ');
$ax += cidrblock($address,'172.31.120.0/24','Sun Network; Access denied (ASN-SUNNETWORK-253). ');
$ax += cidrblock($address,'172.247.134.0/23','Sun Network; Access denied (ASN-SUNNETWORK-254). ');
$ax += cidrblock($address,'172.247.136.0/22','Sun Network; Access denied (ASN-SUNNETWORK-255). ');
$ax += cidrblock($address,'172.247.140.0/23','Sun Network; Access denied (ASN-SUNNETWORK-256). ');
$ax += cidrblock($address,'172.247.150.0/23','Sun Network; Access denied (ASN-SUNNETWORK-257). ');
$ax += cidrblock($address,'172.247.152.0/21','Sun Network; Access denied (ASN-SUNNETWORK-258). ');
$ax += cidrblock($address,'172.247.160.0/22','Sun Network; Access denied (ASN-SUNNETWORK-259). ');
$ax += cidrblock($address,'172.247.164.0/23','Sun Network; Access denied (ASN-SUNNETWORK-260). ');
$ax += cidrblock($address,'175.176.180.0/22','Sun Network; Access denied (ASN-SUNNETWORK-261). ');
$ax += cidrblock($address,'182.161.60.0/22','Sun Network; Access denied (ASN-SUNNETWORK-262). ');
$ax += cidrblock($address,'192.61.80.0/23','Sun Network; Access denied (ASN-SUNNETWORK-263). ');
$ax += cidrblock($address,'192.151.226.0/23','Sun Network; Access denied (ASN-SUNNETWORK-264). ');
$ax += cidrblock($address,'192.151.228.0/23','Sun Network; Access denied (ASN-SUNNETWORK-265). ');
$ax += cidrblock($address,'192.151.232.0/22','Sun Network; Access denied (ASN-SUNNETWORK-266). ');
$ax += cidrblock($address,'192.151.236.0/24','Sun Network; Access denied (ASN-SUNNETWORK-267). ');
$ax += cidrblock($address,'192.151.238.0/23','Sun Network; Access denied (ASN-SUNNETWORK-268). ');
$ax += cidrblock($address,'192.151.248.0/21','Sun Network; Access denied (ASN-SUNNETWORK-269). ');
$ax += cidrblock($address,'192.161.88.0/24','Sun Network; Access denied (ASN-SUNNETWORK-270). ');
$ax += cidrblock($address,'192.168.64.0/19','Sun Network; Access denied (ASN-SUNNETWORK-271). ');
$ax += cidrblock($address,'192.249.84.0/22','Sun Network; Access denied (ASN-SUNNETWORK-272). ');
$ax += cidrblock($address,'198.44.240.0/21','Sun Network; Access denied (ASN-SUNNETWORK-273). ');
$ax += cidrblock($address,'202.40.160.0/23','Sun Network; Access denied (ASN-SUNNETWORK-274). ');
$ax += cidrblock($address,'202.89.0.0/22','Sun Network; Access denied (ASN-SUNNETWORK-275). ');
$ax += cidrblock($address,'202.146.216.0/21','Sun Network; Access denied (ASN-SUNNETWORK-276). ');
$ax += cidrblock($address,'202.165.120.0/22','Sun Network; Access denied (ASN-SUNNETWORK-277). ');
$ax += cidrblock($address,'203.76.240.0/22','Sun Network; Access denied (ASN-SUNNETWORK-278). ');
$ax += cidrblock($address,'203.189.236.0/22','Sun Network; Access denied (ASN-SUNNETWORK-279). ');
$ax += cidrblock($address,'210.56.48.0/20','Sun Network; Access denied (ASN-SUNNETWORK-280). ');
$ax += cidrblock($address,'223.26.48.0/20','Sun Network; Access denied (ASN-SUNNETWORK-281). ');
$ax += cidrblock($address,'223.130.8.0/22','Sun Network; Access denied (ASN-SUNNETWORK-282). ');


// HT
// AS26658 (updated 2016.05.20)
$ax += cidrblock($address,'14.192.20.0/22','HT; Access denied (ASN-HT-00). ');
$ax += cidrblock($address,'27.0.156.0/22','HT; Access denied (ASN-HT-01). ');
$ax += cidrblock($address,'43.239.160.0/22','HT; Access denied (ASN-HT-02). ');
$ax += cidrblock($address,'43.246.116.0/22','HT; Access denied (ASN-HT-03). ');
$ax += cidrblock($address,'45.33.240.0/20','HT; Access denied (ASN-HT-04). ');
$ax += cidrblock($address,'45.41.80.0/20','HT; Access denied (ASN-HT-05). ');
$ax += cidrblock($address,'45.42.80.0/20','HT; Access denied (ASN-HT-06). ');
$ax += cidrblock($address,'45.43.224.0/20','HT; Access denied (ASN-HT-07). ');
$ax += cidrblock($address,'45.120.204.0/22','HT; Access denied (ASN-HT-08). ');
$ax += cidrblock($address,'45.125.108.0/22','HT; Access denied (ASN-HT-09). ');
$ax += cidrblock($address,'45.126.228.0/22','HT; Access denied (ASN-HT-10). ');
$ax += cidrblock($address,'45.127.160.0/22','HT; Access denied (ASN-HT-11). ');
$ax += cidrblock($address,'59.152.48.0/22','HT; Access denied (ASN-HT-12). ');
$ax += cidrblock($address,'59.153.48.0/22','HT; Access denied (ASN-HT-13). ');
$ax += cidrblock($address,'59.153.144.0/22','HT; Access denied (ASN-HT-14). ');
$ax += cidrblock($address,'59.153.160.0/22','HT; Access denied (ASN-HT-15). ');
$ax += cidrblock($address,'103.4.20.0/22','HT; Access denied (ASN-HT-16). ');
$ax += cidrblock($address,'103.4.24.0/22','HT; Access denied (ASN-HT-17). ');
$ax += cidrblock($address,'103.10.172.0/22','HT; Access denied (ASN-HT-18). ');
$ax += cidrblock($address,'103.21.8.0/22','HT; Access denied (ASN-HT-19). ');
$ax += cidrblock($address,'103.35.76.0/22','HT; Access denied (ASN-HT-20). ');
$ax += cidrblock($address,'103.35.184.0/22','HT; Access denied (ASN-HT-21). ');
$ax += cidrblock($address,'103.61.20.0/22','HT; Access denied (ASN-HT-22). ');
$ax += cidrblock($address,'103.193.244.0/22','HT; Access denied (ASN-HT-23). ');
$ax += cidrblock($address,'103.195.116.0/22','HT; Access denied (ASN-HT-24). ');
$ax += cidrblock($address,'103.196.100.0/22','HT; Access denied (ASN-HT-25). ');
$ax += cidrblock($address,'103.197.168.0/22','HT; Access denied (ASN-HT-26). ');
$ax += cidrblock($address,'103.197.192.0/22','HT; Access denied (ASN-HT-27). ');
$ax += cidrblock($address,'103.197.216.0/22','HT; Access denied (ASN-HT-28). ');
$ax += cidrblock($address,'103.198.44.0/22','HT; Access denied (ASN-HT-29). ');
$ax += cidrblock($address,'103.198.188.0/22','HT; Access denied (ASN-HT-30). ');
$ax += cidrblock($address,'103.198.204.0/22','HT; Access denied (ASN-HT-31). ');
$ax += cidrblock($address,'103.199.244.0/22','HT; Access denied (ASN-HT-32). ');
$ax += cidrblock($address,'103.201.68.0/22','HT; Access denied (ASN-HT-33). ');
$ax += cidrblock($address,'103.202.48.0/22','HT; Access denied (ASN-HT-34). ');
$ax += cidrblock($address,'103.204.108.0/22','HT; Access denied (ASN-HT-35). ');
$ax += cidrblock($address,'103.204.252.0/22','HT; Access denied (ASN-HT-36). ');
$ax += cidrblock($address,'103.205.0.0/22','HT; Access denied (ASN-HT-37). ');
$ax += cidrblock($address,'103.205.164.0/22','HT; Access denied (ASN-HT-38). ');
$ax += cidrblock($address,'103.206.124.0/22','HT; Access denied (ASN-HT-39). ');
$ax += cidrblock($address,'103.207.24.0/22','HT; Access denied (ASN-HT-40). ');
$ax += cidrblock($address,'103.207.116.0/22','HT; Access denied (ASN-HT-41). ');
$ax += cidrblock($address,'103.208.8.0/22','HT; Access denied (ASN-HT-42). ');
$ax += cidrblock($address,'103.212.72.0/22','HT; Access denied (ASN-HT-43). ');
$ax += cidrblock($address,'104.232.64.0/20','HT; Access denied (ASN-HT-44). ');
$ax += cidrblock($address,'104.232.96.0/20','HT; Access denied (ASN-HT-45). ');
$ax += cidrblock($address,'104.243.128.0/20','HT; Access denied (ASN-HT-46). ');
$ax += cidrblock($address,'111.92.184.0/22','HT; Access denied (ASN-HT-47). ');
$ax += cidrblock($address,'121.46.80.0/22','HT; Access denied (ASN-HT-48). ');
$ax += cidrblock($address,'139.5.180.0/22','HT; Access denied (ASN-HT-49). ');
$ax += cidrblock($address,'172.87.192.0/19','HT; Access denied (ASN-HT-50). ');
$ax += cidrblock($address,'175.158.100.0/22','HT; Access denied (ASN-HT-51). ');
$ax += cidrblock($address,'198.180.198.0/24','HT; Access denied (ASN-HT-52). ');
$ax += cidrblock($address,'202.9.60.0/22','HT; Access denied (ASN-HT-53). ');
$ax += cidrblock($address,'202.14.4.0/22','HT; Access denied (ASN-HT-54). ');
$ax += cidrblock($address,'202.88.36.0/22','HT; Access denied (ASN-HT-55). ');
$ax += cidrblock($address,'202.160.152.0/22','HT; Access denied (ASN-HT-56). ');
$ax += cidrblock($address,'203.76.232.0/21','HT; Access denied (ASN-HT-57). ');
$ax += cidrblock($address,'203.82.28.0/22','HT; Access denied (ASN-HT-58). ');
$ax += cidrblock($address,'203.176.124.0/22','HT; Access denied (ASN-HT-59). ');
$ax += cidrblock($address,'210.16.96.0/22','HT; Access denied (ASN-HT-60). ');
$ax += cidrblock($address,'216.12.160.0/20','HT; Access denied (ASN-HT-61). ');
$ax += cidrblock($address,'220.158.224.0/22','HT; Access denied (ASN-HT-62). ');
$ax += cidrblock($address,'220.158.244.0/22','HT; Access denied (ASN-HT-63). ');
$ax += cidrblock($address,'220.158.252.0/22','HT; Access denied (ASN-HT-64). ');


// VpsQuan L.L.C
// AS62468 (updated 2016.05.20)
$ax += cidrblock($address,'43.224.148.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-00). ');
$ax += cidrblock($address,'43.225.56.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-01). ');
$ax += cidrblock($address,'43.225.140.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-02). ');
$ax += cidrblock($address,'43.249.8.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-03). ');
$ax += cidrblock($address,'43.250.172.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-04). ');
$ax += cidrblock($address,'43.251.116.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-05). ');
$ax += cidrblock($address,'43.255.104.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-06). ');
$ax += cidrblock($address,'45.114.12.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-07). ');
$ax += cidrblock($address,'45.119.92.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-08). ');
$ax += cidrblock($address,'45.119.124.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-09). ');
$ax += cidrblock($address,'45.120.220.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-10). ');
$ax += cidrblock($address,'45.121.212.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-11). ');
$ax += cidrblock($address,'69.165.64.0/20','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-12). ');
$ax += cidrblock($address,'103.40.100.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-13). ');
$ax += cidrblock($address,'103.42.28.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-14). ');
$ax += cidrblock($address,'103.42.180.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-15). ');
$ax += cidrblock($address,'103.43.172.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-16). ');
$ax += cidrblock($address,'103.53.216.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-17). ');
$ax += cidrblock($address,'103.62.52.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-18). ');
$ax += cidrblock($address,'103.225.84.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-19). ');
$ax += cidrblock($address,'103.228.128.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-20). ');
$ax += cidrblock($address,'103.229.28.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-21). ');
$ax += cidrblock($address,'103.230.120.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-22). ');
$ax += cidrblock($address,'103.239.72.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-23). ');
$ax += cidrblock($address,'103.240.156.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-24). ');
$ax += cidrblock($address,'103.252.16.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-25). ');
$ax += cidrblock($address,'103.254.72.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-26). ');
$ax += cidrblock($address,'103.255.60.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-27). ');
$ax += cidrblock($address,'198.44.160.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-28). ');
$ax += cidrblock($address,'198.44.164.0/23','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-29). ');
$ax += cidrblock($address,'198.44.166.0/24','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-30). ');
$ax += cidrblock($address,'198.44.168.0/22','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-31). ');
$ax += cidrblock($address,'198.44.172.0/24','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-32). ');
$ax += cidrblock($address,'198.44.176.0/23','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-33). ');
$ax += cidrblock($address,'198.44.179.0/24','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-34). ');
$ax += cidrblock($address,'198.44.185.0/24','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-35). ');
$ax += cidrblock($address,'198.44.188.0/23','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-36). ');
$ax += cidrblock($address,'198.44.190.0/24','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-37). ');
$ax += cidrblock($address,'203.167.20.0/24','VpsQuan L.L.C; Access denied (ASN-VPSQUAN-38). ');


// Trellian Pty. Limited
// AS133618 (updated 2016.05.20)
$ax += cidrblock($address,'103.224.182.0/23','Trellian; Access denied (ASN-TRELLIAN-0). ');
$ax += cidrblock($address,'103.224.212.0/23','Trellian; Access denied (ASN-TRELLIAN-1). ');


// INTERIA.PL Sp z.o.o
// AS133618 (updated 2016.05.20)
$ax += cidrblock($address,'185.69.192.0/22','INTERIA.PL; Access denied (ASN-INTERIA-0). ');
$ax += cidrblock($address,'217.74.64.0/20','INTERIA.PL; Access denied (ASN-INTERIA-1). ');


// ShangHai AnchNet Tec
// AS58879 (updated 2016.05.20)
$ax += cidrblock($address,'43.231.184.0/23','ShangHai AnchNet; Access denied (ASN-ANCHNET-00). ');
$ax += cidrblock($address,'43.231.186.0/24','ShangHai AnchNet; Access denied (ASN-ANCHNET-01). ');
$ax += cidrblock($address,'43.249.80.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-02). ');
$ax += cidrblock($address,'45.119.52.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-03). ');
$ax += cidrblock($address,'45.125.34.0/24','ShangHai AnchNet; Access denied (ASN-ANCHNET-04). ');
$ax += cidrblock($address,'45.127.127.0/24','ShangHai AnchNet; Access denied (ASN-ANCHNET-05). ');
$ax += cidrblock($address,'45.248.84.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-06). ');
$ax += cidrblock($address,'103.20.250.0/23','ShangHai AnchNet; Access denied (ASN-ANCHNET-07). ');
$ax += cidrblock($address,'103.36.136.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-08). ');
$ax += cidrblock($address,'103.36.168.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-09). ');
$ax += cidrblock($address,'103.36.172.0/23','ShangHai AnchNet; Access denied (ASN-ANCHNET-10). ');
$ax += cidrblock($address,'103.40.160.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-11). ');
$ax += cidrblock($address,'103.50.252.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-12). ');
$ax += cidrblock($address,'103.59.100.0/23','ShangHai AnchNet; Access denied (ASN-ANCHNET-13). ');
$ax += cidrblock($address,'103.205.8.0/23','ShangHai AnchNet; Access denied (ASN-ANCHNET-14). ');
$ax += cidrblock($address,'103.213.244.0/23','ShangHai AnchNet; Access denied (ASN-ANCHNET-15). ');
$ax += cidrblock($address,'103.214.140.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-16). ');
$ax += cidrblock($address,'103.214.168.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-17). ');
$ax += cidrblock($address,'103.214.192.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-18). ');
$ax += cidrblock($address,'103.236.220.0/24','ShangHai AnchNet; Access denied (ASN-ANCHNET-19). ');
$ax += cidrblock($address,'103.249.104.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-20). ');
$ax += cidrblock($address,'118.184.0.0/21','ShangHai AnchNet; Access denied (ASN-ANCHNET-21). ');
$ax += cidrblock($address,'118.184.11.0/24','ShangHai AnchNet; Access denied (ASN-ANCHNET-22). ');
$ax += cidrblock($address,'118.184.12.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-23). ');
$ax += cidrblock($address,'118.184.16.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-24). ');
$ax += cidrblock($address,'118.184.20.0/23','ShangHai AnchNet; Access denied (ASN-ANCHNET-25). ');
$ax += cidrblock($address,'118.184.23.0/24','ShangHai AnchNet; Access denied (ASN-ANCHNET-26). ');
$ax += cidrblock($address,'118.184.24.0/21','ShangHai AnchNet; Access denied (ASN-ANCHNET-27). ');
$ax += cidrblock($address,'118.184.32.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-28). ');
$ax += cidrblock($address,'118.193.128.0/17','ShangHai AnchNet; Access denied (ASN-ANCHNET-29). ');
$ax += cidrblock($address,'144.48.4.0/23','ShangHai AnchNet; Access denied (ASN-ANCHNET-30). ');
$ax += cidrblock($address,'144.48.140.0/22','ShangHai AnchNet; Access denied (ASN-ANCHNET-31). ');
$ax += cidrblock($address,'198.177.121.0/24','ShangHai AnchNet; Access denied (ASN-ANCHNET-32). ');
$ax += cidrblock($address,'198.177.124.0/24','ShangHai AnchNet; Access denied (ASN-ANCHNET-33). ');
$ax += cidrblock($address,'198.177.126.0/24','ShangHai AnchNet; Access denied (ASN-ANCHNET-34). ');
$ax += cidrblock($address,'202.58.104.0/23','ShangHai AnchNet; Access denied (ASN-ANCHNET-35). ');


// Computer Network Information Center
// AS7497 (updated 2016.05.20)
$ax += cidrblock($address,'36.254.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-00). ');
$ax += cidrblock($address,'42.197.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-01). ');
$ax += cidrblock($address,'42.198.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-02). ');
$ax += cidrblock($address,'42.199.0.0/18','Computer Network Information Center; Access denied (ASN-CST-NET-03). ');
$ax += cidrblock($address,'43.224.184.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-04). ');
$ax += cidrblock($address,'43.250.16.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-05). ');
$ax += cidrblock($address,'43.250.100.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-06). ');
$ax += cidrblock($address,'43.250.108.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-07). ');
$ax += cidrblock($address,'49.210.0.0/15','Computer Network Information Center; Access denied (ASN-CST-NET-08). ');
$ax += cidrblock($address,'49.220.0.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-09). ');
$ax += cidrblock($address,'49.222.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-10). ');
$ax += cidrblock($address,'60.245.128.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-11). ');
$ax += cidrblock($address,'101.126.128.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-12). ');
$ax += cidrblock($address,'101.130.0.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-13). ');
$ax += cidrblock($address,'101.252.0.0/15','Computer Network Information Center; Access denied (ASN-CST-NET-14). ');
$ax += cidrblock($address,'103.2.208.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-15). ');
$ax += cidrblock($address,'103.41.148.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-16). ');
$ax += cidrblock($address,'103.41.152.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-17). ');
$ax += cidrblock($address,'103.41.220.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-18). ');
$ax += cidrblock($address,'103.41.224.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-19). ');
$ax += cidrblock($address,'103.43.208.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-20). ');
$ax += cidrblock($address,'103.252.28.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-21). ');
$ax += cidrblock($address,'113.130.96.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-22). ');
$ax += cidrblock($address,'113.130.112.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-23). ');
$ax += cidrblock($address,'114.66.80.0/23','Computer Network Information Center; Access denied (ASN-CST-NET-24). ');
$ax += cidrblock($address,'114.113.204.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-25). ');
$ax += cidrblock($address,'115.172.0.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-26). ');
$ax += cidrblock($address,'115.172.96.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-27). ');
$ax += cidrblock($address,'115.175.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-28). ');
$ax += cidrblock($address,'115.190.0.0/15','Computer Network Information Center; Access denied (ASN-CST-NET-29). ');
$ax += cidrblock($address,'116.90.184.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-30). ');
$ax += cidrblock($address,'116.213.96.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-31). ');
$ax += cidrblock($address,'116.215.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-32). ');
$ax += cidrblock($address,'117.78.64.0/18','Computer Network Information Center; Access denied (ASN-CST-NET-33). ');
$ax += cidrblock($address,'117.78.128.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-34). ');
$ax += cidrblock($address,'117.103.16.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-35). ');
$ax += cidrblock($address,'118.196.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-36). ');
$ax += cidrblock($address,'118.197.0.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-37). ');
$ax += cidrblock($address,'119.78.0.0/15','Computer Network Information Center; Access denied (ASN-CST-NET-38). ');
$ax += cidrblock($address,'119.232.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-39). ');
$ax += cidrblock($address,'119.233.0.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-40). ');
$ax += cidrblock($address,'121.58.144.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-41). ');
$ax += cidrblock($address,'121.68.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-42). ');
$ax += cidrblock($address,'124.15.0.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-43). ');
$ax += cidrblock($address,'124.16.0.0/15','Computer Network Information Center; Access denied (ASN-CST-NET-44). ');
$ax += cidrblock($address,'124.204.0.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-45). ');
$ax += cidrblock($address,'150.242.4.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-46). ');
$ax += cidrblock($address,'159.226.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-47). ');
$ax += cidrblock($address,'175.189.0.0/16','Computer Network Information Center; Access denied (ASN-CST-NET-48). ');
$ax += cidrblock($address,'175.191.128.0/18','Computer Network Information Center; Access denied (ASN-CST-NET-49). ');
$ax += cidrblock($address,'180.88.0.0/18','Computer Network Information Center; Access denied (ASN-CST-NET-50). ');
$ax += cidrblock($address,'180.90.0.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-51). ');
$ax += cidrblock($address,'180.91.160.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-52). ');
$ax += cidrblock($address,'202.38.128.0/23','Computer Network Information Center; Access denied (ASN-CST-NET-53). ');
$ax += cidrblock($address,'202.90.224.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-54). ');
$ax += cidrblock($address,'202.122.32.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-55). ');
$ax += cidrblock($address,'202.127.0.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-56). ');
$ax += cidrblock($address,'202.127.16.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-57). ');
$ax += cidrblock($address,'202.127.144.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-58). ');
$ax += cidrblock($address,'202.127.160.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-59). ');
$ax += cidrblock($address,'202.127.200.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-60). ');
$ax += cidrblock($address,'202.152.176.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-61). ');
$ax += cidrblock($address,'202.152.184.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-62). ');
$ax += cidrblock($address,'203.83.56.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-63). ');
$ax += cidrblock($address,'210.72.0.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-64). ');
$ax += cidrblock($address,'210.72.128.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-65). ');
$ax += cidrblock($address,'210.73.0.0/18','Computer Network Information Center; Access denied (ASN-CST-NET-66). ');
$ax += cidrblock($address,'210.74.192.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-67). ');
$ax += cidrblock($address,'210.75.160.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-68). ');
$ax += cidrblock($address,'210.75.224.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-69). ');
$ax += cidrblock($address,'210.76.192.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-70). ');
$ax += cidrblock($address,'210.77.0.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-71). ');
$ax += cidrblock($address,'210.77.64.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-72). ');
$ax += cidrblock($address,'211.147.192.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-73). ');
$ax += cidrblock($address,'211.156.64.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-74). ');
$ax += cidrblock($address,'211.156.160.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-75). ');
$ax += cidrblock($address,'211.157.24.0/22','Computer Network Information Center; Access denied (ASN-CST-NET-76). ');
$ax += cidrblock($address,'211.161.120.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-77). ');
$ax += cidrblock($address,'211.161.144.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-78). ');
$ax += cidrblock($address,'211.161.160.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-79). ');
$ax += cidrblock($address,'211.162.48.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-80). ');
$ax += cidrblock($address,'211.162.234.0/23','Computer Network Information Center; Access denied (ASN-CST-NET-81). ');
$ax += cidrblock($address,'211.167.160.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-82). ');
$ax += cidrblock($address,'218.244.64.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-83). ');
$ax += cidrblock($address,'219.235.128.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-84). ');
$ax += cidrblock($address,'220.113.64.0/18','Computer Network Information Center; Access denied (ASN-CST-NET-85). ');
$ax += cidrblock($address,'220.115.0.0/21','Computer Network Information Center; Access denied (ASN-CST-NET-86). ');
$ax += cidrblock($address,'220.115.144.0/20','Computer Network Information Center; Access denied (ASN-CST-NET-87). ');
$ax += cidrblock($address,'220.115.160.0/19','Computer Network Information Center; Access denied (ASN-CST-NET-88). ');
$ax += cidrblock($address,'223.192.0.0/15','Computer Network Information Center; Access denied (ASN-CST-NET-89). ');
$ax += cidrblock($address,'223.208.128.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-90). ');
$ax += cidrblock($address,'223.209.128.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-91). ');
$ax += cidrblock($address,'223.211.0.0/17','Computer Network Information Center; Access denied (ASN-CST-NET-92). ');


// Take 2 Hosting, Inc
// AS20248 (updated 2016.05.20)
$ax += cidrblock($address,'23.231.128.0/17','Take 2 Hosting, Inc; Access denied (ASN-TAKE2HOSTING-0). ');
$ax += cidrblock($address,'38.99.70.0/24','Take 2 Hosting, Inc; Access denied (ASN-TAKE2HOSTING-1). ');
$ax += cidrblock($address,'50.115.128.0/20','Take 2 Hosting, Inc; Access denied (ASN-TAKE2HOSTING-2). ');
$ax += cidrblock($address,'74.82.160.0/19','Take 2 Hosting, Inc; Access denied (ASN-TAKE2HOSTING-3). ');
$ax += cidrblock($address,'107.163.0.0/16','Take 2 Hosting, Inc; Access denied (ASN-TAKE2HOSTING-4). ');
$ax += cidrblock($address,'173.252.192.0/18','Take 2 Hosting, Inc; Access denied (ASN-TAKE2HOSTING-5). ');
$ax += cidrblock($address,'192.186.0.0/18','Take 2 Hosting, Inc; Access denied (ASN-TAKE2HOSTING-6). ');
$ax += cidrblock($address,'198.144.240.0/20','Take 2 Hosting, Inc; Access denied (ASN-TAKE2HOSTING-7). ');
$ax += cidrblock($address,'204.74.208.0/20','Take 2 Hosting, Inc; Access denied (ASN-TAKE2HOSTING-8). ');


// Global Frag Networks
// AS46573 (updated 2016.05.20)
$ax += cidrblock($address,'23.228.64.0/18','Global Frag Networks; Access denied (ASN-FRAGNET-000). ');
$ax += cidrblock($address,'23.247.0.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-001). ');
$ax += cidrblock($address,'23.247.9.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-002). ');
$ax += cidrblock($address,'23.247.10.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-003). ');
$ax += cidrblock($address,'23.247.12.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-004). ');
$ax += cidrblock($address,'23.247.14.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-005). ');
$ax += cidrblock($address,'23.247.16.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-006). ');
$ax += cidrblock($address,'23.247.20.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-007). ');
$ax += cidrblock($address,'23.247.32.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-008). ');
$ax += cidrblock($address,'23.247.55.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-09). ');
$ax += cidrblock($address,'23.247.62.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-010). ');
$ax += cidrblock($address,'23.247.64.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-011). ');
$ax += cidrblock($address,'23.247.73.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-012). ');
$ax += cidrblock($address,'23.247.77.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-013). ');
$ax += cidrblock($address,'23.247.79.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-014). ');
$ax += cidrblock($address,'23.247.80.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-015). ');
$ax += cidrblock($address,'23.247.89.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-016). ');
$ax += cidrblock($address,'23.247.90.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-017). ');
$ax += cidrblock($address,'23.247.92.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-018). ');
$ax += cidrblock($address,'23.247.95.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-019). ');
$ax += cidrblock($address,'23.247.96.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-020). ');
$ax += cidrblock($address,'23.247.99.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-021). ');
$ax += cidrblock($address,'23.247.100.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-022). ');
$ax += cidrblock($address,'23.247.104.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-023). ');
$ax += cidrblock($address,'23.247.107.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-024). ');
$ax += cidrblock($address,'23.247.108.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-025). ');
$ax += cidrblock($address,'23.247.115.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-026). ');
$ax += cidrblock($address,'23.247.116.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-027). ');
$ax += cidrblock($address,'23.247.120.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-028). ');
$ax += cidrblock($address,'23.247.124.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-029). ');
$ax += cidrblock($address,'23.247.126.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-030). ');
$ax += cidrblock($address,'104.148.1.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-031). ');
$ax += cidrblock($address,'104.148.2.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-032). ');
$ax += cidrblock($address,'104.148.4.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-033). ');
$ax += cidrblock($address,'104.148.9.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-034). ');
$ax += cidrblock($address,'104.148.10.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-035). ');
$ax += cidrblock($address,'104.148.12.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-036). ');
$ax += cidrblock($address,'104.148.16.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-037). ');
$ax += cidrblock($address,'104.148.24.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-038). ');
$ax += cidrblock($address,'104.148.26.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-039). ');
$ax += cidrblock($address,'104.148.28.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-040). ');
$ax += cidrblock($address,'104.148.30.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-041). ');
$ax += cidrblock($address,'104.148.32.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-042). ');
$ax += cidrblock($address,'104.148.42.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-043). ');
$ax += cidrblock($address,'104.148.44.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-044). ');
$ax += cidrblock($address,'104.148.47.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-045). ');
$ax += cidrblock($address,'104.148.48.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-046). ');
$ax += cidrblock($address,'104.148.57.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-047). ');
$ax += cidrblock($address,'104.148.58.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-048). ');
$ax += cidrblock($address,'104.148.60.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-049). ');
$ax += cidrblock($address,'104.148.64.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-050). ');
$ax += cidrblock($address,'104.148.68.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-051). ');
$ax += cidrblock($address,'104.148.71.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-052). ');
$ax += cidrblock($address,'104.148.74.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-053). ');
$ax += cidrblock($address,'104.148.76.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-054). ');
$ax += cidrblock($address,'104.148.80.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-055). ');
$ax += cidrblock($address,'104.148.84.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-056). ');
$ax += cidrblock($address,'104.148.88.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-057). ');
$ax += cidrblock($address,'104.148.92.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-058). ');
$ax += cidrblock($address,'104.148.94.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-059). ');
$ax += cidrblock($address,'104.148.96.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-060). ');
$ax += cidrblock($address,'104.148.99.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-061). ');
$ax += cidrblock($address,'104.148.100.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-062). ');
$ax += cidrblock($address,'104.148.104.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-063). ');
$ax += cidrblock($address,'104.148.108.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-064). ');
$ax += cidrblock($address,'104.148.112.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-065). ');
$ax += cidrblock($address,'104.148.116.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-066). ');
$ax += cidrblock($address,'104.148.119.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-067). ');
$ax += cidrblock($address,'104.148.120.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-068). ');
$ax += cidrblock($address,'104.148.122.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-069). ');
$ax += cidrblock($address,'104.148.124.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-070). ');
$ax += cidrblock($address,'104.223.128.0/20','Global Frag Networks; Access denied (ASN-FRAGNET-071). ');
$ax += cidrblock($address,'104.223.144.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-072). ');
$ax += cidrblock($address,'104.223.149.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-073). ');
$ax += cidrblock($address,'104.223.150.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-074). ');
$ax += cidrblock($address,'104.223.152.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-075). ');
$ax += cidrblock($address,'104.223.160.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-076). ');
$ax += cidrblock($address,'104.223.165.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-077). ');
$ax += cidrblock($address,'104.223.168.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-078). ');
$ax += cidrblock($address,'104.223.173.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-079). ');
$ax += cidrblock($address,'104.223.174.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-080). ');
$ax += cidrblock($address,'104.223.176.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-081). ');
$ax += cidrblock($address,'104.223.181.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-082). ');
$ax += cidrblock($address,'104.223.182.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-083). ');
$ax += cidrblock($address,'104.223.184.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-084). ');
$ax += cidrblock($address,'104.223.192.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-085). ');
$ax += cidrblock($address,'104.223.196.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-086). ');
$ax += cidrblock($address,'104.223.200.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-087). ');
$ax += cidrblock($address,'104.223.208.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-088). ');
$ax += cidrblock($address,'104.223.220.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-089). ');
$ax += cidrblock($address,'104.223.222.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-090). ');
$ax += cidrblock($address,'104.223.224.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-091). ');
$ax += cidrblock($address,'104.223.226.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-092). ');
$ax += cidrblock($address,'104.223.228.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-093). ');
$ax += cidrblock($address,'104.223.230.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-094). ');
$ax += cidrblock($address,'104.223.233.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-095). ');
$ax += cidrblock($address,'104.223.234.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-096). ');
$ax += cidrblock($address,'104.223.236.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-097). ');
$ax += cidrblock($address,'104.223.238.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-098). ');
$ax += cidrblock($address,'104.223.240.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-99). ');
$ax += cidrblock($address,'104.223.242.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-100). ');
$ax += cidrblock($address,'104.223.244.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-101). ');
$ax += cidrblock($address,'104.223.248.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-102). ');
$ax += cidrblock($address,'104.223.250.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-103). ');
$ax += cidrblock($address,'104.223.252.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-104). ');
$ax += cidrblock($address,'107.179.2.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-105). ');
$ax += cidrblock($address,'107.179.4.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-106). ');
$ax += cidrblock($address,'107.179.8.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-107). ');
$ax += cidrblock($address,'107.179.10.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-108). ');
$ax += cidrblock($address,'107.179.12.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-109). ');
$ax += cidrblock($address,'107.179.16.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-110). ');
$ax += cidrblock($address,'107.179.20.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-111). ');
$ax += cidrblock($address,'107.179.23.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-112). ');
$ax += cidrblock($address,'107.179.24.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-113). ');
$ax += cidrblock($address,'107.179.32.0/20','Global Frag Networks; Access denied (ASN-FRAGNET-114). ');
$ax += cidrblock($address,'107.179.48.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-115). ');
$ax += cidrblock($address,'107.179.60.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-116). ');
$ax += cidrblock($address,'107.179.64.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-117). ');
$ax += cidrblock($address,'107.179.68.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-118). ');
$ax += cidrblock($address,'107.179.70.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-119). ');
$ax += cidrblock($address,'107.179.72.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-120). ');
$ax += cidrblock($address,'107.179.76.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-121). ');
$ax += cidrblock($address,'107.179.78.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-122). ');
$ax += cidrblock($address,'107.179.80.0/20','Global Frag Networks; Access denied (ASN-FRAGNET-123). ');
$ax += cidrblock($address,'107.179.96.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-124). ');
$ax += cidrblock($address,'107.179.98.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-125). ');
$ax += cidrblock($address,'107.179.100.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-126). ');
$ax += cidrblock($address,'107.179.104.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-127). ');
$ax += cidrblock($address,'107.179.106.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-128). ');
$ax += cidrblock($address,'107.179.108.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-129). ');
$ax += cidrblock($address,'107.179.110.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-130). ');
$ax += cidrblock($address,'107.179.112.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-131). ');
$ax += cidrblock($address,'107.179.116.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-132). ');
$ax += cidrblock($address,'107.179.118.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-133). ');
$ax += cidrblock($address,'107.179.121.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-134). ');
$ax += cidrblock($address,'107.179.122.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-135). ');
$ax += cidrblock($address,'107.179.124.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-136). ');
$ax += cidrblock($address,'107.179.126.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-137). ');
$ax += cidrblock($address,'154.16.197.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-138). ');
$ax += cidrblock($address,'157.52.128.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-139). ');
$ax += cidrblock($address,'157.52.133.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-140). ');
$ax += cidrblock($address,'157.52.135.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-141). ');
$ax += cidrblock($address,'157.52.137.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-142). ');
$ax += cidrblock($address,'157.52.141.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-143). ');
$ax += cidrblock($address,'157.52.142.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-144). ');
$ax += cidrblock($address,'157.52.144.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-145). ');
$ax += cidrblock($address,'157.52.148.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-146). ');
$ax += cidrblock($address,'157.52.151.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-147). ');
$ax += cidrblock($address,'157.52.152.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-148). ');
$ax += cidrblock($address,'157.52.160.0/20','Global Frag Networks; Access denied (ASN-FRAGNET-149). ');
$ax += cidrblock($address,'157.52.176.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-150). ');
$ax += cidrblock($address,'157.52.185.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-151). ');
$ax += cidrblock($address,'157.52.188.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-152). ');
$ax += cidrblock($address,'157.52.192.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-153). ');
$ax += cidrblock($address,'157.52.196.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-154). ');
$ax += cidrblock($address,'157.52.198.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-155). ');
$ax += cidrblock($address,'157.52.200.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-156). ');
$ax += cidrblock($address,'157.52.208.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-157). ');
$ax += cidrblock($address,'157.52.216.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-158). ');
$ax += cidrblock($address,'157.52.219.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-159). ');
$ax += cidrblock($address,'157.52.221.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-160). ');
$ax += cidrblock($address,'157.52.223.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-161). ');
$ax += cidrblock($address,'157.52.224.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-162). ');
$ax += cidrblock($address,'157.52.230.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-163). ');
$ax += cidrblock($address,'157.52.232.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-164). ');
$ax += cidrblock($address,'157.52.235.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-165). ');
$ax += cidrblock($address,'157.52.236.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-166). ');
$ax += cidrblock($address,'157.52.239.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-167). ');
$ax += cidrblock($address,'157.52.240.0/22','Global Frag Networks; Access denied (ASN-FRAGNET-168). ');
$ax += cidrblock($address,'157.52.244.0/23','Global Frag Networks; Access denied (ASN-FRAGNET-169). ');
$ax += cidrblock($address,'157.52.246.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-170). ');
$ax += cidrblock($address,'157.52.248.0/21','Global Frag Networks; Access denied (ASN-FRAGNET-171). ');
$ax += cidrblock($address,'192.135.255.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-172). ');
$ax += cidrblock($address,'192.200.192.0/19','Global Frag Networks; Access denied (ASN-FRAGNET-173). ');
$ax += cidrblock($address,'199.10.64.0/24','Global Frag Networks; Access denied (ASN-FRAGNET-174). ');


// Royal Network Technology and Rainbow Network Ltd
// AS133731, AS134121 (updated 2016.05.20)
$ax += cidrblock($address,'1.32.216.0/24','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-00). ');
$ax += cidrblock($address,'14.1.96.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-01). ');
$ax += cidrblock($address,'43.224.248.0/23','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-02). ');
$ax += cidrblock($address,'43.225.47.0/24','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-03). ');
$ax += cidrblock($address,'43.240.12.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-04). ');
$ax += cidrblock($address,'43.242.130.0/24','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-05). ');
$ax += cidrblock($address,'43.243.171.0/24','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-06). ');
$ax += cidrblock($address,'43.251.16.0/23','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-07). ');
$ax += cidrblock($address,'43.252.228.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-08). ');
$ax += cidrblock($address,'43.254.216.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-09). ');
$ax += cidrblock($address,'45.64.74.0/23','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-10). ');
$ax += cidrblock($address,'45.64.112.0/23','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-11). ');
$ax += cidrblock($address,'45.114.8.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-12). ');
$ax += cidrblock($address,'45.116.76.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-13). ');
$ax += cidrblock($address,'45.120.158.0/24','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-14). ');
$ax += cidrblock($address,'45.124.24.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-15). ');
$ax += cidrblock($address,'45.125.12.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-16). ');
$ax += cidrblock($address,'45.125.16.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-17). ');
$ax += cidrblock($address,'45.125.32.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-18). ');
$ax += cidrblock($address,'45.127.96.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-19). ');
$ax += cidrblock($address,'103.12.76.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-20). ');
$ax += cidrblock($address,'103.21.136.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-21). ');
$ax += cidrblock($address,'103.24.0.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-22). ');
$ax += cidrblock($address,'103.30.40.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-23). ');
$ax += cidrblock($address,'103.39.108.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-24). ');
$ax += cidrblock($address,'103.49.92.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-25). ');
$ax += cidrblock($address,'103.51.144.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-26). ');
$ax += cidrblock($address,'103.55.24.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-27). ');
$ax += cidrblock($address,'103.56.112.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-28). ');
$ax += cidrblock($address,'103.59.102.0/23','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-29). ');
$ax += cidrblock($address,'103.193.148.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-30). ');
$ax += cidrblock($address,'103.195.148.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-31). ');
$ax += cidrblock($address,'103.197.24.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-32). ');
$ax += cidrblock($address,'103.200.28.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-33). ');
$ax += cidrblock($address,'103.212.32.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-34). ');
$ax += cidrblock($address,'103.213.248.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-35). ');
$ax += cidrblock($address,'103.214.172.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-36). ');
$ax += cidrblock($address,'103.224.80.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-37). ');
$ax += cidrblock($address,'103.226.124.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-38). ');
$ax += cidrblock($address,'103.229.116.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-39). ');
$ax += cidrblock($address,'103.229.124.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-40). ');
$ax += cidrblock($address,'103.231.12.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-41). ');
$ax += cidrblock($address,'103.238.224.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-42). ');
$ax += cidrblock($address,'103.240.180.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-43). ');
$ax += cidrblock($address,'103.240.200.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-44). ');
$ax += cidrblock($address,'103.241.48.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-45). ');
$ax += cidrblock($address,'103.242.0.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-46). ');
$ax += cidrblock($address,'103.242.132.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-47). ');
$ax += cidrblock($address,'103.243.24.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-48). ');
$ax += cidrblock($address,'103.243.128.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-49). ');
$ax += cidrblock($address,'103.244.88.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-50). ');
$ax += cidrblock($address,'103.246.244.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-51). ');
$ax += cidrblock($address,'122.10.80.0/20','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-52). ');
$ax += cidrblock($address,'122.10.112.0/21','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-53). ');
$ax += cidrblock($address,'123.108.108.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-54). ');
$ax += cidrblock($address,'123.254.104.0/21','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-55). ');
$ax += cidrblock($address,'146.196.80.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-56). ');
$ax += cidrblock($address,'150.129.80.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-57). ');
$ax += cidrblock($address,'182.237.0.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-58). ');
$ax += cidrblock($address,'202.181.24.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-59). ');
$ax += cidrblock($address,'203.189.232.0/22','Royal Network Technology and Rainbow Network Ltd; Access denied (ASN-ROYALRAINBOW-60). ');


// CommuniLink Internet
// AS38277 (updated 2016.05.20)
$ax += cidrblock($address,'43.252.40.0/22','CommuniLink Internet; Access denied (ASN-COMMUNILINK-0). ');
$ax += cidrblock($address,'43.252.164.0/22','CommuniLink Internet; Access denied (ASN-COMMUNILINK-1). ');
$ax += cidrblock($address,'45.121.20.0/22','CommuniLink Internet; Access denied (ASN-COMMUNILINK-2). ');
$ax += cidrblock($address,'58.82.192.0/18','CommuniLink Internet; Access denied (ASN-COMMUNILINK-3). ');
$ax += cidrblock($address,'103.28.44.0/22','CommuniLink Internet; Access denied (ASN-COMMUNILINK-4). ');
$ax += cidrblock($address,'103.228.28.0/22','CommuniLink Internet; Access denied (ASN-COMMUNILINK-5). ');
$ax += cidrblock($address,'103.251.236.0/22','CommuniLink Internet; Access denied (ASN-COMMUNILINK-6). ');
$ax += cidrblock($address,'203.124.8.0/21','CommuniLink Internet; Access denied (ASN-COMMUNILINK-7). ');


// Çizgi Telekomünikasyon
// AS34619 (updated 2016.05.20)
$ax += cidrblock($address,'37.148.208.0/21','Cizgi Telekomunikasyon; Access denied (ASN-CIZGI-0). ');
$ax += cidrblock($address,'80.253.244.0/23','Cizgi Telekomunikasyon; Access denied (ASN-CIZGI-1). ');
$ax += cidrblock($address,'85.159.64.0/21','Cizgi Telekomunikasyon; Access denied (ASN-CIZGI-2). ');
$ax += cidrblock($address,'89.19.0.0/19','Cizgi Telekomunikasyon; Access denied (ASN-CIZGI-3). ');
$ax += cidrblock($address,'94.73.128.0/18','Cizgi Telekomunikasyon; Access denied (ASN-CIZGI-4). ');
$ax += cidrblock($address,'185.22.184.0/22','Cizgi Telekomunikasyon; Access denied (ASN-CIZGI-5). ');
$ax += cidrblock($address,'185.135.40.0/24','Cizgi Telekomunikasyon; Access denied (ASN-CIZGI-6). ');
$ax += cidrblock($address,'185.135.44.0/24','Cizgi Telekomunikasyon; Access denied (ASN-CIZGI-7). ');


// Unified Layer
// AS46606 (updated 2016.05.21)
$ax += cidrblock($address,'50.87.0.0/16','Unified Layer (ASN-UNIHM-00). ');
$ax += cidrblock($address,'66.147.240.0/20','Unified Layer (ASN-UNIHM-01). ');
$ax += cidrblock($address,'67.20.64.0/18','Unified Layer (ASN-UNIHM-02). ');
$ax += cidrblock($address,'67.222.32.0/19','Unified Layer (ASN-UNIHM-03). ');
$ax += cidrblock($address,'69.27.164.0/23','Unified Layer (ASN-UNIHM-04). ');
$ax += cidrblock($address,'69.89.16.0/20','Unified Layer (ASN-UNIHM-05). ');
$ax += cidrblock($address,'69.195.64.0/18','Unified Layer (ASN-UNIHM-06). ');
$ax += cidrblock($address,'70.40.192.0/19','Unified Layer (ASN-UNIHM-07). ');
$ax += cidrblock($address,'74.220.192.0/19','Unified Layer (ASN-UNIHM-08). ');
$ax += cidrblock($address,'142.4.0.0/19','Unified Layer (ASN-UNIHM-09). ');
$ax += cidrblock($address,'162.144.0.0/16','Unified Layer (ASN-UNIHM-10). ');
$ax += cidrblock($address,'162.214.0.0/15','Unified Layer (ASN-UNIHM-11). ');
$ax += cidrblock($address,'162.240.0.0/15','Unified Layer (ASN-UNIHM-12). ');
$ax += cidrblock($address,'173.254.0.0/17','Unified Layer (ASN-UNIHM-13). ');
$ax += cidrblock($address,'192.163.192.0/18','Unified Layer (ASN-UNIHM-14). ');
$ax += cidrblock($address,'192.185.224.0/19','Unified Layer (ASN-UNIHM-15). ');
$ax += cidrblock($address,'192.232.192.0/18','Unified Layer (ASN-UNIHM-16). ');
$ax += cidrblock($address,'192.254.128.0/17','Unified Layer (ASN-UNIHM-17). ');
$ax += cidrblock($address,'198.1.64.0/18','Unified Layer (ASN-UNIHM-18). ');
$ax += cidrblock($address,'198.20.224.0/19','Unified Layer (ASN-UNIHM-19). ');
$ax += cidrblock($address,'198.57.128.0/17','Unified Layer (ASN-UNIHM-20). ');
$ax += cidrblock($address,'198.154.192.0/18','Unified Layer (ASN-UNIHM-21). ');


// World4You Internet Services
// AS38955 (updated 2016.05.21)
$ax += cidrblock($address,'81.19.144.0/20','World4You Internet Services; Access denied (ASN-WORLD4YOU-0). ');
$ax += cidrblock($address,'178.23.80.0/21','World4You Internet Services; Access denied (ASN-WORLD4YOU-1). ');
$ax += cidrblock($address,'185.16.190.0/24','World4You Internet Services; Access denied (ASN-WORLD4YOU-2). ');


// Confluence Networks Inc
// AS40034 (updated 2016.05.21)
$ax += cidrblock($address,'5.100.152.0/22','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-00). ');
$ax += cidrblock($address,'5.100.158.0/23','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-01). ');
$ax += cidrblock($address,'50.58.197.0/24','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-02). ');
$ax += cidrblock($address,'104.254.96.0/22','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-03). ');
$ax += cidrblock($address,'141.8.224.0/21','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-04). ');
$ax += cidrblock($address,'162.210.68.0/22','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-05). ');
$ax += cidrblock($address,'162.215.252.0/22','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-06). ');
$ax += cidrblock($address,'162.222.224.0/22','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-07). ');
$ax += cidrblock($address,'162.251.80.0/21','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-08). ');
$ax += cidrblock($address,'199.79.60.0/22','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-09). ');
$ax += cidrblock($address,'199.191.50.0/23','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-10). ');
$ax += cidrblock($address,'204.11.56.0/22','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-11). ');
$ax += cidrblock($address,'207.174.212.0/22','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-12). ');
$ax += cidrblock($address,'208.73.208.0/22','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-13). ');
$ax += cidrblock($address,'208.91.196.0/22','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-14). ');
$ax += cidrblock($address,'209.99.17.0/24','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-15). ');
$ax += cidrblock($address,'209.99.45.0/24','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-16). ');
$ax += cidrblock($address,'209.99.64.0/23','Confluence Networks Inc; Access denied (ASN-CONFLUENCE-17). ');


// Agava Ltd
// AS43146 (updated 2016.05.21)
$ax += cidrblock($address,'80.78.240.0/23','Agava Ltd; Access denied (ASN-AGAVA-0). ');
$ax += cidrblock($address,'80.78.244.0/22','Agava Ltd; Access denied (ASN-AGAVA-1). ');
$ax += cidrblock($address,'80.78.248.0/21','Agava Ltd; Access denied (ASN-AGAVA-2). ');
$ax += cidrblock($address,'89.108.64.0/18','Agava Ltd; Access denied (ASN-AGAVA-3). ');
$ax += cidrblock($address,'185.46.8.0/22','Agava Ltd; Access denied (ASN-AGAVA-4). ');


// IQHost Ltd
// AS50465 (updated 2016.05.21)
$ax += cidrblock($address,'193.106.172.0/22','IQHost Ltd; Access denied (ASN-IQHOST-0). ');


// Avesta Networks LLC
// AS54444 (updated 2016.05.21)
$ax += cidrblock($address,'142.0.68.0/22','Avesta Networks LLC; Access denied (ASN-AVESTA-0). ');
$ax += cidrblock($address,'142.0.72.0/24','Avesta Networks LLC; Access denied (ASN-AVESTA-1). ');
$ax += cidrblock($address,'142.0.79.0/24','Avesta Networks LLC; Access denied (ASN-AVESTA-2). ');
$ax += cidrblock($address,'199.127.99.0/24','Avesta Networks LLC; Access denied (ASN-AVESTA-3). ');
$ax += cidrblock($address,'199.127.103.0/24','Avesta Networks LLC; Access denied (ASN-AVESTA-4). ');


// Hosting Operator eServer.ru Ltd
// AS42244 (updated 2016.05.21)
$ax += cidrblock($address,'5.45.80.0/22','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-00). ');
$ax += cidrblock($address,'37.143.12.0/22','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-01). ');
$ax += cidrblock($address,'46.254.16.0/22','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-02). ');
$ax += cidrblock($address,'46.254.23.0/24','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-03). ');
$ax += cidrblock($address,'80.77.168.0/23','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-04). ');
$ax += cidrblock($address,'91.189.80.0/23','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-05). ');
$ax += cidrblock($address,'91.189.82.0/24','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-06). ');
$ax += cidrblock($address,'91.189.84.0/22','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-07). ');
$ax += cidrblock($address,'91.218.230.0/23','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-08). ');
$ax += cidrblock($address,'95.183.8.0/22','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-09). ');
$ax += cidrblock($address,'178.218.208.0/20','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-10). ');
$ax += cidrblock($address,'185.22.234.0/23','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-11). ');
$ax += cidrblock($address,'185.115.140.0/24','Hosting Operator eServer.ru Ltd; Access denied (ASN-eSERVER-12). ');


// Webzilla B.V
// AS35415 (updated 2016.05.21)
$ax += cidrblock($address,'46.30.40.0/21','Webzilla B.V; Access denied (ASN-WEBZILLA-00). ');
$ax += cidrblock($address,'78.140.128.0/18','Webzilla B.V; Access denied (ASN-WEBZILLA-01). ');
$ax += cidrblock($address,'88.85.64.0/19','Webzilla B.V; Access denied (ASN-WEBZILLA-02). ');
$ax += cidrblock($address,'91.205.156.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-03). ');
$ax += cidrblock($address,'91.226.124.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-04). ');
$ax += cidrblock($address,'91.226.127.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-05). ');
$ax += cidrblock($address,'93.170.134.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-06). ');
$ax += cidrblock($address,'94.103.80.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-07). ');
$ax += cidrblock($address,'94.103.82.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-08). ');
$ax += cidrblock($address,'95.142.32.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-09). ');
$ax += cidrblock($address,'95.215.8.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-10). ');
$ax += cidrblock($address,'109.234.32.0/21','Webzilla B.V; Access denied (ASN-WEBZILLA-11). ');
$ax += cidrblock($address,'146.120.224.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-12). ');
$ax += cidrblock($address,'178.208.73.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-13). ');
$ax += cidrblock($address,'178.208.74.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-14). ');
$ax += cidrblock($address,'178.208.76.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-15). ');
$ax += cidrblock($address,'178.208.80.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-16). ');
$ax += cidrblock($address,'178.208.84.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-17). ');
$ax += cidrblock($address,'178.208.88.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-18). ');
$ax += cidrblock($address,'178.208.93.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-19). ');
$ax += cidrblock($address,'181.215.3.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-20). ');
$ax += cidrblock($address,'185.49.144.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-21). ');
$ax += cidrblock($address,'185.106.240.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-22). ');
$ax += cidrblock($address,'185.117.132.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-23). ');
$ax += cidrblock($address,'185.117.134.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-24). ');
$ax += cidrblock($address,'188.42.160.0/21','Webzilla B.V; Access denied (ASN-WEBZILLA-25). ');
$ax += cidrblock($address,'188.42.224.0/21','Webzilla B.V; Access denied (ASN-WEBZILLA-26). ');
$ax += cidrblock($address,'188.42.232.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-27). ');
$ax += cidrblock($address,'188.42.236.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-28). ');
$ax += cidrblock($address,'188.42.239.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-29). ');
$ax += cidrblock($address,'188.164.248.0/21','Webzilla B.V; Access denied (ASN-WEBZILLA-30). ');
$ax += cidrblock($address,'193.105.200.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-31). ');
$ax += cidrblock($address,'193.169.41.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-32). ');
$ax += cidrblock($address,'193.194.116.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-33). ');
$ax += cidrblock($address,'194.187.96.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-34). ');
$ax += cidrblock($address,'195.178.4.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-35). ');
$ax += cidrblock($address,'195.225.55.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-36). ');
$ax += cidrblock($address,'195.234.98.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-37). ');
$ax += cidrblock($address,'198.175.15.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-38). ');
$ax += cidrblock($address,'206.54.160.0/21','Webzilla B.V; Access denied (ASN-WEBZILLA-39). ');
$ax += cidrblock($address,'206.54.168.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-40). ');
$ax += cidrblock($address,'206.54.173.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-41). ');
$ax += cidrblock($address,'206.54.175.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-42). ');
$ax += cidrblock($address,'206.54.176.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-43). ');
$ax += cidrblock($address,'206.54.178.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-44). ');
$ax += cidrblock($address,'206.54.181.0/24','Webzilla B.V; Access denied (ASN-WEBZILLA-45). ');
$ax += cidrblock($address,'206.54.182.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-46). ');
$ax += cidrblock($address,'208.69.112.0/22','Webzilla B.V; Access denied (ASN-WEBZILLA-47). ');
$ax += cidrblock($address,'208.69.116.0/23','Webzilla B.V; Access denied (ASN-WEBZILLA-48). ');


// Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi
// AS42807 (updated 2016.05.21)
$ax += cidrblock($address,'31.207.80.0/21','Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-0). ');
$ax += cidrblock($address,'37.230.104.0/21','Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-1). ');
$ax += cidrblock($address,'94.199.200.0/21','Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-2). ');
$ax += cidrblock($address,'109.232.216.0/21','Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-3). ');
$ax += cidrblock($address,'185.15.40.0/22','Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-4). ');
$ax += cidrblock($address,'213.159.28.0/22','Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-5). ');


// CJSC Registrar R01
// AS41126 (updated 2016.05.21)
$ax += cidrblock($address,'89.111.176.0/20','CJSC Registrar R01; Access denied (ASN-41126-0). ');


// Init7
// AS13030 (updated 2016.05.21)
$ax += cidrblock($address,'37.17.232.0/21','Init7; Access denied (ASN-INIT7-00). ');
$ax += cidrblock($address,'64.35.8.0/22','Init7; Access denied (ASN-INIT7-01). ');
$ax += cidrblock($address,'77.109.128.0/18','Init7; Access denied (ASN-INIT7-02). ');
$ax += cidrblock($address,'82.197.160.0/19','Init7; Access denied (ASN-INIT7-03). ');
$ax += cidrblock($address,'85.195.208.0/20','Init7; Access denied (ASN-INIT7-04). ');
$ax += cidrblock($address,'85.195.224.0/19','Init7; Access denied (ASN-INIT7-05). ');
$ax += cidrblock($address,'87.239.208.0/21','Init7; Access denied (ASN-INIT7-06). ');
$ax += cidrblock($address,'91.198.8.0/24','Init7; Access denied (ASN-INIT7-07). ');
$ax += cidrblock($address,'91.198.154.0/24','Init7; Access denied (ASN-INIT7-08). ');
$ax += cidrblock($address,'91.209.98.0/24','Init7; Access denied (ASN-INIT7-09). ');
$ax += cidrblock($address,'91.238.144.0/24','Init7; Access denied (ASN-INIT7-10). ');
$ax += cidrblock($address,'178.250.128.0/21','Init7; Access denied (ASN-INIT7-11). ');
$ax += cidrblock($address,'185.35.28.0/22','Init7; Access denied (ASN-INIT7-12). ');
$ax += cidrblock($address,'185.78.120.0/24','Init7; Access denied (ASN-INIT7-13). ');
$ax += cidrblock($address,'185.78.122.0/24','Init7; Access denied (ASN-INIT7-14). ');
$ax += cidrblock($address,'185.85.248.0/22','Init7; Access denied (ASN-INIT7-15). ');
$ax += cidrblock($address,'193.47.153.0/24','Init7; Access denied (ASN-INIT7-16). ');
$ax += cidrblock($address,'193.222.255.0/24','Init7; Access denied (ASN-INIT7-17). ');
$ax += cidrblock($address,'193.223.80.0/20','Init7; Access denied (ASN-INIT7-18). ');
$ax += cidrblock($address,'195.8.117.0/24','Init7; Access denied (ASN-INIT7-19). ');
$ax += cidrblock($address,'195.8.210.0/23','Init7; Access denied (ASN-INIT7-20). ');
$ax += cidrblock($address,'195.191.240.0/23','Init7; Access denied (ASN-INIT7-21). ');
$ax += cidrblock($address,'195.211.32.0/22','Init7; Access denied (ASN-INIT7-22). ');
$ax += cidrblock($address,'212.51.128.0/19','Init7; Access denied (ASN-INIT7-23). ');
$ax += cidrblock($address,'213.144.128.0/19','Init7; Access denied (ASN-INIT7-24). ');
$ax += cidrblock($address,'216.185.39.0/24','Init7; Access denied (ASN-INIT7-25). ');


// K SERVERS LTD
// AS14576 (updated 2016.05.21)
$ax += cidrblock($address,'31.148.219.0/24','K SERVERS LTD; Access denied (ASN-KSERVERS-0). ');
$ax += cidrblock($address,'31.148.220.0/24','K SERVERS LTD; Access denied (ASN-KSERVERS-1). ');
$ax += cidrblock($address,'93.170.13.0/24','K SERVERS LTD; Access denied (ASN-KSERVERS-2). ');
$ax += cidrblock($address,'104.193.252.0/22','K SERVERS LTD; Access denied (ASN-KSERVERS-3). ');
$ax += cidrblock($address,'162.244.32.0/22','K SERVERS LTD; Access denied (ASN-KSERVERS-4). ');
$ax += cidrblock($address,'185.104.8.0/22','K SERVERS LTD; Access denied (ASN-KSERVERS-5). ');
$ax += cidrblock($address,'185.130.104.0/22','K SERVERS LTD; Access denied (ASN-KSERVERS-6). ');
$ax += cidrblock($address,'193.0.201.0/24','K SERVERS LTD; Access denied (ASN-KSERVERS-7). ');
$ax += cidrblock($address,'204.155.28.0/22','K SERVERS LTD; Access denied (ASN-KSERVERS-8). ');


// RamNode LLC
// AS3842 (updated 2016.05.24)
$ax += cidrblock($address,'23.226.224.0/20','RamNode LLC; Not an access provider (ASN-RAMNODE-00). ');
$ax += cidrblock($address,'107.161.16.0/20','RamNode LLC; Not an access provider (ASN-RAMNODE-01). ');
$ax += cidrblock($address,'107.191.96.0/20','RamNode LLC; Not an access provider (ASN-RAMNODE-02). ');
$ax += cidrblock($address,'107.191.114.0/23','RamNode LLC; Not an access provider (ASN-RAMNODE-03). ');
$ax += cidrblock($address,'107.191.116.0/22','RamNode LLC; Not an access provider (ASN-RAMNODE-04). ');
$ax += cidrblock($address,'107.191.120.0/21','RamNode LLC; Not an access provider (ASN-RAMNODE-05). ');
$ax += cidrblock($address,'167.88.112.0/21','RamNode LLC; Not an access provider (ASN-RAMNODE-06). ');
$ax += cidrblock($address,'167.88.120.0/22','RamNode LLC; Not an access provider (ASN-RAMNODE-07). ');
$ax += cidrblock($address,'167.88.124.0/23','RamNode LLC; Not an access provider (ASN-RAMNODE-08). ');
$ax += cidrblock($address,'168.235.64.0/19','RamNode LLC; Not an access provider (ASN-RAMNODE-09). ');
$ax += cidrblock($address,'192.30.32.0/22','RamNode LLC; Not an access provider (ASN-RAMNODE-10). ');
$ax += cidrblock($address,'192.73.232.0/21','RamNode LLC; Not an access provider (ASN-RAMNODE-11). ');
$ax += cidrblock($address,'192.184.80.0/20','RamNode LLC; Not an access provider (ASN-RAMNODE-12). ');
$ax += cidrblock($address,'192.249.56.0/21','RamNode LLC; Not an access provider (ASN-RAMNODE-13). ');
$ax += cidrblock($address,'199.241.28.0/22','RamNode LLC; Not an access provider (ASN-RAMNODE-14). ');


// RouteLabel V.O.F.
// AS3842 (updated 2016.05.24)
$ax += cidrblock($address,'81.4.100.0/22','RouteLabel V.O.F.; Access denied (ASN-ROUTELABEL-0). ');
$ax += cidrblock($address,'81.4.104.0/21','RouteLabel V.O.F.; Access denied (ASN-ROUTELABEL-1). ');
$ax += cidrblock($address,'81.4.120.0/21','RouteLabel V.O.F.; Access denied (ASN-ROUTELABEL-2). ');
$ax += cidrblock($address,'176.56.224.0/20','RouteLabel V.O.F.; Access denied (ASN-ROUTELABEL-3). ');
$ax += cidrblock($address,'185.34.216.0/23','RouteLabel V.O.F.; Access denied (ASN-ROUTELABEL-4). ');
$ax += cidrblock($address,'185.52.0.0/22','RouteLabel V.O.F.; Access denied (ASN-ROUTELABEL-5). ');
$ax += cidrblock($address,'185.122.192.0/22','RouteLabel V.O.F.; Access denied (ASN-ROUTELABEL-6). ');
$ax += cidrblock($address,'185.142.76.0/22','RouteLabel V.O.F.; Access denied (ASN-ROUTELABEL-7). ');


// MnogoByte LLC
// AS42632 (updated 2016.05.24)
$ax += cidrblock($address,'46.161.31.0/24','MnogoByte LLC; Access denied (ASN-MNOGO-00). ');
$ax += cidrblock($address,'77.220.160.0/19','MnogoByte LLC; Access denied (ASN-MNOGO-01). ');
$ax += cidrblock($address,'83.222.96.0/20','MnogoByte LLC; Access denied (ASN-MNOGO-02). ');
$ax += cidrblock($address,'83.222.112.0/21','MnogoByte LLC; Access denied (ASN-MNOGO-03). ');
$ax += cidrblock($address,'91.215.138.0/24','MnogoByte LLC; Access denied (ASN-MNOGO-04). ');
$ax += cidrblock($address,'146.185.254.0/23','MnogoByte LLC; Access denied (ASN-MNOGO-05). ');
$ax += cidrblock($address,'146.255.192.0/22','MnogoByte LLC; Access denied (ASN-MNOGO-06). ');
$ax += cidrblock($address,'146.255.196.0/23','MnogoByte LLC; Access denied (ASN-MNOGO-07). ');
$ax += cidrblock($address,'146.255.200.0/23','MnogoByte LLC; Access denied (ASN-MNOGO-08). ');
$ax += cidrblock($address,'146.255.216.0/21','MnogoByte LLC; Access denied (ASN-MNOGO-09). ');
$ax += cidrblock($address,'176.58.32.0/21','MnogoByte LLC; Access denied (ASN-MNOGO-10). ');
$ax += cidrblock($address,'176.58.40.0/24','MnogoByte LLC; Access denied (ASN-MNOGO-11). ');
$ax += cidrblock($address,'178.170.189.0/24','MnogoByte LLC; Access denied (ASN-MNOGO-12). ');
$ax += cidrblock($address,'185.91.175.0/24','MnogoByte LLC; Access denied (ASN-MNOGO-13). ');
$ax += cidrblock($address,'185.102.139.0/24','MnogoByte LLC; Access denied (ASN-MNOGO-14). ');
$ax += cidrblock($address,'193.26.217.0/24','MnogoByte LLC; Access denied (ASN-MNOGO-15). ');
$ax += cidrblock($address,'194.1.236.0/22','MnogoByte LLC; Access denied (ASN-MNOGO-16). ');
$ax += cidrblock($address,'212.76.128.0/20','MnogoByte LLC; Access denied (ASN-MNOGO-17). ');
$ax += cidrblock($address,'212.76.144.0/22','MnogoByte LLC; Access denied (ASN-MNOGO-18). ');
$ax += cidrblock($address,'212.76.152.0/21','MnogoByte LLC; Access denied (ASN-MNOGO-19). ');


// Biznes-Host.pl
// AS198414 (updated 2016.05.24)
$ax += cidrblock($address,'91.189.32.0/21','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-00). ');
$ax += cidrblock($address,'91.196.48.0/22','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-01). ');
$ax += cidrblock($address,'91.228.196.0/22','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-02). ');
$ax += cidrblock($address,'91.234.146.0/24','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-03). ');
$ax += cidrblock($address,'91.237.52.0/24','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-04). ');
$ax += cidrblock($address,'91.239.66.0/23','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-05). ');
$ax += cidrblock($address,'155.133.24.0/22','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-06). ');
$ax += cidrblock($address,'155.133.40.0/21','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-07). ');
$ax += cidrblock($address,'185.5.96.0/22','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-08). ');
$ax += cidrblock($address,'185.25.148.0/22','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-09). ');
$ax += cidrblock($address,'185.49.12.0/22','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-10). ');
$ax += cidrblock($address,'193.17.184.0/24','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-11). ');
$ax += cidrblock($address,'195.64.158.0/23','Biznes-Host.pl; Access denied (ASN-BIZNESHOST-12). ');


// Yes Networks Unlimited Ltd
// AS24700 (updated 2016.05.24)
$ax += cidrblock($address,'46.174.190.0/23','Yes Networks Unlimited Ltd; Access denied (ASN-YESNETWORKS-0). ');


// Staminus Communications
// AS25761 (updated 2016.05.24)
$ax += cidrblock($address,'69.197.0.0/18','Staminus Communications; Access denied (ASN-STAMINUS-00). ');
$ax += cidrblock($address,'72.8.128.0/18','Staminus Communications; Access denied (ASN-STAMINUS-01). ');
$ax += cidrblock($address,'72.20.0.0/18','Staminus Communications; Access denied (ASN-STAMINUS-02). ');
$ax += cidrblock($address,'131.100.228.0/24','Staminus Communications; Access denied (ASN-STAMINUS-03). ');
$ax += cidrblock($address,'131.100.230.0/23','Staminus Communications; Access denied (ASN-STAMINUS-04). ');
$ax += cidrblock($address,'162.220.32.0/22','Staminus Communications; Access denied (ASN-STAMINUS-05). ');
$ax += cidrblock($address,'177.93.104.0/21','Staminus Communications; Access denied (ASN-STAMINUS-06). ');
$ax += cidrblock($address,'187.108.192.0/20','Staminus Communications; Access denied (ASN-STAMINUS-07). ');
$ax += cidrblock($address,'199.192.72.0/21','Staminus Communications; Access denied (ASN-STAMINUS-08). ');
$ax += cidrblock($address,'199.241.193.0/24','Staminus Communications; Access denied (ASN-STAMINUS-09). ');
$ax += cidrblock($address,'199.241.194.0/23','Staminus Communications; Access denied (ASN-STAMINUS-10). ');
$ax += cidrblock($address,'199.241.196.0/24','Staminus Communications; Access denied (ASN-STAMINUS-11). ');
$ax += cidrblock($address,'199.241.198.0/23','Staminus Communications; Access denied (ASN-STAMINUS-12). ');
$ax += cidrblock($address,'201.150.116.0/22','Staminus Communications; Access denied (ASN-STAMINUS-13). ');


// Enzu Inc
// AS18978 (updated 2016.05.24)
$ax += cidrblock($address,'23.88.0.0/15','Enzu Inc; Access denied (ASN-ENZU-00). ');
$ax += cidrblock($address,'23.244.0.0/15','Enzu Inc; Access denied (ASN-ENZU-01). ');
$ax += cidrblock($address,'38.126.44.0/23','Enzu Inc; Access denied (ASN-ENZU-02). ');
$ax += cidrblock($address,'45.33.144.0/20','Enzu Inc; Access denied (ASN-ENZU-03). ');
$ax += cidrblock($address,'45.59.20.0/24','Enzu Inc; Access denied (ASN-ENZU-04). ');
$ax += cidrblock($address,'45.59.27.0/24','Enzu Inc; Access denied (ASN-ENZU-05). ');
$ax += cidrblock($address,'45.74.0.0/24','Enzu Inc; Access denied (ASN-ENZU-06). ');
$ax += cidrblock($address,'104.151.0.0/16','Enzu Inc; Access denied (ASN-ENZU-07). ');
$ax += cidrblock($address,'104.202.0.0/15','Enzu Inc; Access denied (ASN-ENZU-08). ');
$ax += cidrblock($address,'104.250.162.0/24','Enzu Inc; Access denied (ASN-ENZU-09). ');
$ax += cidrblock($address,'104.250.189.0/24','Enzu Inc; Access denied (ASN-ENZU-10). ');
$ax += cidrblock($address,'104.250.190.0/24','Enzu Inc; Access denied (ASN-ENZU-11). ');
$ax += cidrblock($address,'107.183.0.0/16','Enzu Inc; Access denied (ASN-ENZU-12). ');
$ax += cidrblock($address,'108.60.198.0/24','Enzu Inc; Access denied (ASN-ENZU-13). ');
$ax += cidrblock($address,'172.94.16.0/24','Enzu Inc; Access denied (ASN-ENZU-14). ');
$ax += cidrblock($address,'172.94.22.0/24','Enzu Inc; Access denied (ASN-ENZU-15). ');
$ax += cidrblock($address,'172.102.205.0/24','Enzu Inc; Access denied (ASN-ENZU-16). ');
$ax += cidrblock($address,'172.102.215.0/24','Enzu Inc; Access denied (ASN-ENZU-17). ');
$ax += cidrblock($address,'172.111.156.0/24','Enzu Inc; Access denied (ASN-ENZU-18). ');
$ax += cidrblock($address,'172.111.163.0/24','Enzu Inc; Access denied (ASN-ENZU-19). ');
$ax += cidrblock($address,'172.246.0.0/16','Enzu Inc; Access denied (ASN-ENZU-20). ');
$ax += cidrblock($address,'184.105.219.0/24','Enzu Inc; Access denied (ASN-ENZU-21). ');
$ax += cidrblock($address,'192.80.128.0/19','Enzu Inc; Access denied (ASN-ENZU-22). ');
$ax += cidrblock($address,'192.80.160.0/20','Enzu Inc; Access denied (ASN-ENZU-23). ');
$ax += cidrblock($address,'192.80.176.0/21','Enzu Inc; Access denied (ASN-ENZU-24). ');
$ax += cidrblock($address,'192.80.184.0/22','Enzu Inc; Access denied (ASN-ENZU-25). ');
$ax += cidrblock($address,'192.80.188.0/23','Enzu Inc; Access denied (ASN-ENZU-26). ');
$ax += cidrblock($address,'192.80.190.0/24','Enzu Inc; Access denied (ASN-ENZU-27). ');
$ax += cidrblock($address,'192.157.192.0/18','Enzu Inc; Access denied (ASN-ENZU-28). ');
$ax += cidrblock($address,'198.56.128.0/17','Enzu Inc; Access denied (ASN-ENZU-29). ');
$ax += cidrblock($address,'198.71.80.0/20','Enzu Inc; Access denied (ASN-ENZU-30). ');
$ax += cidrblock($address,'198.98.96.0/19','Enzu Inc; Access denied (ASN-ENZU-31). ');
$ax += cidrblock($address,'199.48.68.0/22','Enzu Inc; Access denied (ASN-ENZU-32). ');
$ax += cidrblock($address,'199.188.72.0/22','Enzu Inc; Access denied (ASN-ENZU-33). ');
$ax += cidrblock($address,'199.193.248.0/21','Enzu Inc; Access denied (ASN-ENZU-34). ');
$ax += cidrblock($address,'199.229.232.0/22','Enzu Inc; Access denied (ASN-ENZU-35). ');
$ax += cidrblock($address,'199.231.208.0/21','Enzu Inc; Access denied (ASN-ENZU-36). ');
$ax += cidrblock($address,'206.123.130.0/24','Enzu Inc; Access denied (ASN-ENZU-37). ');
$ax += cidrblock($address,'206.123.134.0/23','Enzu Inc; Access denied (ASN-ENZU-38). ');
$ax += cidrblock($address,'206.123.137.0/24','Enzu Inc; Access denied (ASN-ENZU-39). ');
$ax += cidrblock($address,'206.123.139.0/24','Enzu Inc; Access denied (ASN-ENZU-40). ');
$ax += cidrblock($address,'206.123.148.0/23','Enzu Inc; Access denied (ASN-ENZU-41). ');
$ax += cidrblock($address,'207.189.160.0/21','Enzu Inc; Access denied (ASN-ENZU-42). ');
$ax += cidrblock($address,'216.158.192.0/24','Enzu Inc; Access denied (ASN-ENZU-43). ');
$ax += cidrblock($address,'216.158.194.0/24','Enzu Inc; Access denied (ASN-ENZU-44). ');
$ax += cidrblock($address,'216.158.196.0/23','Enzu Inc; Access denied (ASN-ENZU-45). ');
$ax += cidrblock($address,'216.158.199.0/24','Enzu Inc; Access denied (ASN-ENZU-46). ');
$ax += cidrblock($address,'216.158.200.0/22','Enzu Inc; Access denied (ASN-ENZU-47). ');
$ax += cidrblock($address,'216.158.204.0/23','Enzu Inc; Access denied (ASN-ENZU-48). ');
$ax += cidrblock($address,'216.158.207.0/24','Enzu Inc; Access denied (ASN-ENZU-49). ');
$ax += cidrblock($address,'216.158.208.0/23','Enzu Inc; Access denied (ASN-ENZU-50). ');
$ax += cidrblock($address,'216.158.211.0/24','Enzu Inc; Access denied (ASN-ENZU-51). ');
$ax += cidrblock($address,'216.158.212.0/22','Enzu Inc; Access denied (ASN-ENZU-52). ');
$ax += cidrblock($address,'216.158.216.0/24','Enzu Inc; Access denied (ASN-ENZU-53). ');
$ax += cidrblock($address,'216.158.218.0/23','Enzu Inc; Access denied (ASN-ENZU-54). ');
$ax += cidrblock($address,'216.158.220.0/23','Enzu Inc; Access denied (ASN-ENZU-55). ');
$ax += cidrblock($address,'216.158.222.0/24','Enzu Inc; Access denied (ASN-ENZU-56). ');


// EGIHosting
// AS18779 (updated 2016.05.24)
$ax += cidrblock($address,'23.27.0.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-00). ');
$ax += cidrblock($address,'23.27.4.0/23','EGIHosting; Access denied (ASN-EGIHOSTING-01). ');
$ax += cidrblock($address,'23.27.7.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-02). ');
$ax += cidrblock($address,'23.27.8.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-03). ');
$ax += cidrblock($address,'23.27.12.0/23','EGIHosting; Access denied (ASN-EGIHOSTING-04). ');
$ax += cidrblock($address,'23.27.16.0/23','EGIHosting; Access denied (ASN-EGIHOSTING-05). ');
$ax += cidrblock($address,'23.27.20.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-06). ');
$ax += cidrblock($address,'23.27.24.0/21','EGIHosting; Access denied (ASN-EGIHOSTING-07). ');
$ax += cidrblock($address,'23.27.32.0/19','EGIHosting; Access denied (ASN-EGIHOSTING-08). ');
$ax += cidrblock($address,'23.27.64.0/18','EGIHosting; Access denied (ASN-EGIHOSTING-09). ');
$ax += cidrblock($address,'23.27.128.0/18','EGIHosting; Access denied (ASN-EGIHOSTING-10). ');
$ax += cidrblock($address,'23.27.192.0/20','EGIHosting; Access denied (ASN-EGIHOSTING-11). ');
$ax += cidrblock($address,'23.27.208.0/21','EGIHosting; Access denied (ASN-EGIHOSTING-12). ');
$ax += cidrblock($address,'23.27.216.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-13). ');
$ax += cidrblock($address,'23.27.228.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-14). ');
$ax += cidrblock($address,'23.27.232.0/21','EGIHosting; Access denied (ASN-EGIHOSTING-15). ');
$ax += cidrblock($address,'23.27.240.0/20','EGIHosting; Access denied (ASN-EGIHOSTING-16). ');
$ax += cidrblock($address,'23.230.0.0/16','EGIHosting; Access denied (ASN-EGIHOSTING-17). ');
$ax += cidrblock($address,'31.187.66.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-18). ');
$ax += cidrblock($address,'38.72.200.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-19). ');
$ax += cidrblock($address,'45.38.0.0/15','EGIHosting; Access denied (ASN-EGIHOSTING-20). ');
$ax += cidrblock($address,'45.59.18.0/23','EGIHosting; Access denied (ASN-EGIHOSTING-21). ');
$ax += cidrblock($address,'45.59.28.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-22). ');
$ax += cidrblock($address,'45.59.30.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-23). ');
$ax += cidrblock($address,'50.117.0.0/18','EGIHosting; Access denied (ASN-EGIHOSTING-24). ');
$ax += cidrblock($address,'50.117.64.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-25). ');
$ax += cidrblock($address,'50.117.69.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-26). ');
$ax += cidrblock($address,'50.117.70.0/23','EGIHosting; Access denied (ASN-EGIHOSTING-27). ');
$ax += cidrblock($address,'50.117.72.0/21','EGIHosting; Access denied (ASN-EGIHOSTING-28). ');
$ax += cidrblock($address,'50.117.80.0/20','EGIHosting; Access denied (ASN-EGIHOSTING-29). ');
$ax += cidrblock($address,'50.117.96.0/19','EGIHosting; Access denied (ASN-EGIHOSTING-30). ');
$ax += cidrblock($address,'50.118.128.0/19','EGIHosting; Access denied (ASN-EGIHOSTING-31). ');
$ax += cidrblock($address,'50.118.160.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-32). ');
$ax += cidrblock($address,'50.118.162.0/23','EGIHosting; Access denied (ASN-EGIHOSTING-33). ');
$ax += cidrblock($address,'50.118.164.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-34). ');
$ax += cidrblock($address,'50.118.168.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-35). ');
$ax += cidrblock($address,'50.118.172.0/23','EGIHosting; Access denied (ASN-EGIHOSTING-36). ');
$ax += cidrblock($address,'50.118.176.0/20','EGIHosting; Access denied (ASN-EGIHOSTING-37). ');
$ax += cidrblock($address,'50.118.192.0/18','EGIHosting; Access denied (ASN-EGIHOSTING-38). ');
$ax += cidrblock($address,'63.141.222.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-39). ');
$ax += cidrblock($address,'65.49.93.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-40). ');
$ax += cidrblock($address,'66.160.191.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-41). ');
$ax += cidrblock($address,'67.220.233.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-42). ');
$ax += cidrblock($address,'68.68.96.0/20','EGIHosting; Access denied (ASN-EGIHOSTING-43). ');
$ax += cidrblock($address,'69.46.64.0/19','EGIHosting; Access denied (ASN-EGIHOSTING-44). ');
$ax += cidrblock($address,'69.176.80.0/20','EGIHosting; Access denied (ASN-EGIHOSTING-45). ');
$ax += cidrblock($address,'72.13.80.0/20','EGIHosting; Access denied (ASN-EGIHOSTING-46). ');
$ax += cidrblock($address,'72.52.76.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-47). ');
$ax += cidrblock($address,'74.82.43.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-48). ');
$ax += cidrblock($address,'74.114.88.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-49). ');
$ax += cidrblock($address,'74.115.0.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-50). ');
$ax += cidrblock($address,'77.237.228.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-51). ');
$ax += cidrblock($address,'96.43.96.0/20','EGIHosting; Access denied (ASN-EGIHOSTING-52). ');
$ax += cidrblock($address,'103.232.215.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-53). ');
$ax += cidrblock($address,'104.160.230.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-54). ');
$ax += cidrblock($address,'104.160.235.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-55). ');
$ax += cidrblock($address,'104.160.243.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-56). ');
$ax += cidrblock($address,'104.160.250.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-57). ');
$ax += cidrblock($address,'104.164.0.0/15','EGIHosting; Access denied (ASN-EGIHOSTING-58). ');
$ax += cidrblock($address,'104.252.0.0/15','EGIHosting; Access denied (ASN-EGIHOSTING-59). ');
$ax += cidrblock($address,'107.164.0.0/15','EGIHosting; Access denied (ASN-EGIHOSTING-60). ');
$ax += cidrblock($address,'107.186.0.0/15','EGIHosting; Access denied (ASN-EGIHOSTING-61). ');
$ax += cidrblock($address,'108.171.32.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-62). ');
$ax += cidrblock($address,'108.171.42.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-63). ');
$ax += cidrblock($address,'108.171.52.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-64). ');
$ax += cidrblock($address,'108.171.62.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-65). ');
$ax += cidrblock($address,'136.0.0.0/16','EGIHosting; Access denied (ASN-EGIHOSTING-66). ');
$ax += cidrblock($address,'142.111.0.0/16','EGIHosting; Access denied (ASN-EGIHOSTING-67). ');
$ax += cidrblock($address,'142.252.0.0/16','EGIHosting; Access denied (ASN-EGIHOSTING-68). ');
$ax += cidrblock($address,'166.88.0.0/16','EGIHosting; Access denied (ASN-EGIHOSTING-69). ');
$ax += cidrblock($address,'172.85.97.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-70). ');
$ax += cidrblock($address,'172.98.188.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-71). ');
$ax += cidrblock($address,'172.98.191.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-72). ');
$ax += cidrblock($address,'172.120.0.0/15','EGIHosting; Access denied (ASN-EGIHOSTING-73). ');
$ax += cidrblock($address,'172.252.0.0/16','EGIHosting; Access denied (ASN-EGIHOSTING-74). ');
$ax += cidrblock($address,'173.245.64.0/19','EGIHosting; Access denied (ASN-EGIHOSTING-75). ');
$ax += cidrblock($address,'178.18.16.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-76). ');
$ax += cidrblock($address,'178.18.26.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-77). ');
$ax += cidrblock($address,'192.92.114.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-78). ');
$ax += cidrblock($address,'192.177.0.0/16','EGIHosting; Access denied (ASN-EGIHOSTING-79). ');
$ax += cidrblock($address,'194.110.214.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-80). ');
$ax += cidrblock($address,'199.4.215.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-81). ');
$ax += cidrblock($address,'202.69.240.0/20','EGIHosting; Access denied (ASN-EGIHOSTING-82). ');
$ax += cidrblock($address,'202.83.4.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-83). ');
$ax += cidrblock($address,'202.83.8.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-84). ');
$ax += cidrblock($address,'205.159.189.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-85). ');
$ax += cidrblock($address,'205.164.0.0/18','EGIHosting; Access denied (ASN-EGIHOSTING-86). ');
$ax += cidrblock($address,'208.80.4.0/22','EGIHosting; Access denied (ASN-EGIHOSTING-87). ');
$ax += cidrblock($address,'209.73.128.0/19','EGIHosting; Access denied (ASN-EGIHOSTING-88). ');
$ax += cidrblock($address,'216.83.32.0/19','EGIHosting; Access denied (ASN-EGIHOSTING-89). ');
$ax += cidrblock($address,'216.158.193.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-90). ');
$ax += cidrblock($address,'216.158.223.0/24','EGIHosting; Access denied (ASN-EGIHOSTING-91). ');
$ax += cidrblock($address,'216.172.128.0/19','EGIHosting; Access denied (ASN-EGIHOSTING-92). ');
$ax += cidrblock($address,'216.224.112.0/20','EGIHosting; Access denied (ASN-EGIHOSTING-93). ');


// Hosting Solutions International, Inc
// AS30083 (updated 2016.05.24)
$ax += cidrblock($address,'50.30.32.0/20','Hosting Solutions International, Inc; Access denied (ASN-HSI-0). ');
$ax += cidrblock($address,'69.64.32.0/19','Hosting Solutions International, Inc; Access denied (ASN-HSI-1). ');
$ax += cidrblock($address,'173.224.112.0/20','Hosting Solutions International, Inc; Access denied (ASN-HSI-2). ');
$ax += cidrblock($address,'199.189.84.0/22','Hosting Solutions International, Inc; Access denied (ASN-HSI-3). ');
$ax += cidrblock($address,'199.217.112.0/21','Hosting Solutions International, Inc; Access denied (ASN-HSI-4). ');
$ax += cidrblock($address,'209.126.96.0/19','Hosting Solutions International, Inc; Access denied (ASN-HSI-5). ');
$ax += cidrblock($address,'209.239.112.0/20','Hosting Solutions International, Inc; Access denied (ASN-HSI-6). ');


// ONLINE S.A.S.
// AS12876 (updated 2016.05.24)
$ax += cidrblock($address,'62.4.0.0/19','ONLINE S.A.S.; Access denied (ASN-ONLINESAS-0). ');
$ax += cidrblock($address,'62.210.0.0/16','ONLINE S.A.S.; Access denied (ASN-ONLINESAS-1). ');
$ax += cidrblock($address,'163.172.0.0/16','ONLINE S.A.S.; Access denied (ASN-ONLINESAS-2). ');
$ax += cidrblock($address,'195.154.0.0/16','ONLINE S.A.S.; Access denied (ASN-ONLINESAS-3). ');
$ax += cidrblock($address,'212.47.224.0/19','ONLINE S.A.S.; Access denied (ASN-ONLINESAS-4). ');
$ax += cidrblock($address,'212.83.128.0/18','ONLINE S.A.S.; Access denied (ASN-ONLINESAS-5). ');
$ax += cidrblock($address,'212.129.0.0/18','ONLINE S.A.S.; Access denied (ASN-ONLINESAS-6). ');


// HZ Hosting Ltd (formerly: Fortunix Networks L.P.)
// AS59711 (updated 2016.05.24)
$ax += cidrblock($address,'5.149.248.0/23','HZ Hosting Ltd; Access denied (ASN-HZHOSTING-0). ');
$ax += cidrblock($address,'5.149.254.0/23','HZ Hosting Ltd; Access denied (ASN-HZHOSTING-1). ');
$ax += cidrblock($address,'185.80.52.0/22','HZ Hosting Ltd; Access denied (ASN-HZHOSTING-2). ');
$ax += cidrblock($address,'185.81.114.0/23','HZ Hosting Ltd; Access denied (ASN-HZHOSTING-3). ');
$ax += cidrblock($address,'200.7.96.0/23','HZ Hosting Ltd; Access denied (ASN-HZHOSTING-4). ');


// FranTech Solutions
// AS53667 (updated 2016.05.26)
$ax += cidrblock($address,'104.244.72.0/21','FranTech Solutions; Not an access provider (ASN-FRANTECH-00). ');
$ax += cidrblock($address,'107.189.0.0/21','FranTech Solutions; Not an access provider (ASN-FRANTECH-01). ');
$ax += cidrblock($address,'107.189.8.0/24','FranTech Solutions; Not an access provider (ASN-FRANTECH-02). ');
$ax += cidrblock($address,'162.244.92.0/22','FranTech Solutions; Not an access provider (ASN-FRANTECH-03). ');
$ax += cidrblock($address,'162.245.0.0/21','FranTech Solutions; Not an access provider (ASN-FRANTECH-04). ');
$ax += cidrblock($address,'167.88.164.0/22','FranTech Solutions; Not an access provider (ASN-FRANTECH-05). ');
$ax += cidrblock($address,'198.98.48.0/20','FranTech Solutions; Not an access provider (ASN-FRANTECH-06). ');
$ax += cidrblock($address,'199.19.224.0/22','FranTech Solutions; Not an access provider (ASN-FRANTECH-07). ');
$ax += cidrblock($address,'199.195.248.0/21','FranTech Solutions; Not an access provider (ASN-FRANTECH-08). ');
$ax += cidrblock($address,'205.185.112.0/20','FranTech Solutions; Not an access provider (ASN-FRANTECH-09). ');
$ax += cidrblock($address,'209.141.32.0/19','FranTech Solutions; Not an access provider (ASN-FRANTECH-10). ');


// Contina
// AS63008 (updated 2016.05.26)
$ax += cidrblock($address,'23.232.133.0/24','Contina; Access denied (ASN-CONTINA-000). ');
$ax += cidrblock($address,'23.232.139.0/24','Contina; Access denied (ASN-CONTINA-001). ');
$ax += cidrblock($address,'23.232.149.0/24','Contina; Access denied (ASN-CONTINA-002). ');
$ax += cidrblock($address,'23.232.160.0/24','Contina; Access denied (ASN-CONTINA-003). ');
$ax += cidrblock($address,'23.232.165.0/24','Contina; Access denied (ASN-CONTINA-004). ');
$ax += cidrblock($address,'23.232.175.0/24','Contina; Access denied (ASN-CONTINA-005). ');
$ax += cidrblock($address,'23.232.193.0/24','Contina; Access denied (ASN-CONTINA-006). ');
$ax += cidrblock($address,'23.232.254.0/24','Contina; Access denied (ASN-CONTINA-007). ');
$ax += cidrblock($address,'23.247.135.0/24','Contina; Access denied (ASN-CONTINA-008). ');
$ax += cidrblock($address,'23.247.136.0/24','Contina; Access denied (ASN-CONTINA-09). ');
$ax += cidrblock($address,'23.247.142.0/24','Contina; Access denied (ASN-CONTINA-010). ');
$ax += cidrblock($address,'23.247.183.0/24','Contina; Access denied (ASN-CONTINA-011). ');
$ax += cidrblock($address,'23.247.184.0/23','Contina; Access denied (ASN-CONTINA-012). ');
$ax += cidrblock($address,'23.247.201.0/24','Contina; Access denied (ASN-CONTINA-013). ');
$ax += cidrblock($address,'23.247.202.0/23','Contina; Access denied (ASN-CONTINA-014). ');
$ax += cidrblock($address,'23.247.211.0/24','Contina; Access denied (ASN-CONTINA-015). ');
$ax += cidrblock($address,'23.247.212.0/23','Contina; Access denied (ASN-CONTINA-016). ');
$ax += cidrblock($address,'23.247.222.0/23','Contina; Access denied (ASN-CONTINA-017). ');
$ax += cidrblock($address,'23.247.224.0/24','Contina; Access denied (ASN-CONTINA-018). ');
$ax += cidrblock($address,'23.247.237.0/24','Contina; Access denied (ASN-CONTINA-019). ');
$ax += cidrblock($address,'23.247.238.0/23','Contina; Access denied (ASN-CONTINA-020). ');
$ax += cidrblock($address,'45.41.198.0/24','Contina; Access denied (ASN-CONTINA-021). ');
$ax += cidrblock($address,'45.41.211.0/24','Contina; Access denied (ASN-CONTINA-022). ');
$ax += cidrblock($address,'45.42.197.0/24','Contina; Access denied (ASN-CONTINA-023). ');
$ax += cidrblock($address,'45.42.222.0/24','Contina; Access denied (ASN-CONTINA-024). ');
$ax += cidrblock($address,'45.45.128.0/17','Contina; Access denied (ASN-CONTINA-025). ');
$ax += cidrblock($address,'45.61.35.0/24','Contina; Access denied (ASN-CONTINA-026). ');
$ax += cidrblock($address,'45.62.42.0/24','Contina; Access denied (ASN-CONTINA-027). ');
$ax += cidrblock($address,'64.85.26.0/23','Contina; Access denied (ASN-CONTINA-028). ');
$ax += cidrblock($address,'66.171.32.0/23','Contina; Access denied (ASN-CONTINA-029). ');
$ax += cidrblock($address,'69.161.197.0/24','Contina; Access denied (ASN-CONTINA-030). ');
$ax += cidrblock($address,'104.143.30.0/24','Contina; Access denied (ASN-CONTINA-031). ');
$ax += cidrblock($address,'104.166.98.0/24','Contina; Access denied (ASN-CONTINA-032). ');
$ax += cidrblock($address,'104.166.117.0/24','Contina; Access denied (ASN-CONTINA-033). ');
$ax += cidrblock($address,'104.167.192.0/18','Contina; Access denied (ASN-CONTINA-034). ');
$ax += cidrblock($address,'104.207.73.0/24','Contina; Access denied (ASN-CONTINA-035). ');
$ax += cidrblock($address,'104.207.80.0/24','Contina; Access denied (ASN-CONTINA-036). ');
$ax += cidrblock($address,'104.207.93.0/24','Contina; Access denied (ASN-CONTINA-037). ');
$ax += cidrblock($address,'104.222.206.0/24','Contina; Access denied (ASN-CONTINA-038). ');
$ax += cidrblock($address,'104.237.84.0/24','Contina; Access denied (ASN-CONTINA-039). ');
$ax += cidrblock($address,'104.237.86.0/24','Contina; Access denied (ASN-CONTINA-040). ');
$ax += cidrblock($address,'104.237.95.0/24','Contina; Access denied (ASN-CONTINA-041). ');
$ax += cidrblock($address,'104.249.128.0/18','Contina; Access denied (ASN-CONTINA-042). ');
$ax += cidrblock($address,'107.153.6.0/23','Contina; Access denied (ASN-CONTINA-043). ');
$ax += cidrblock($address,'107.153.13.0/24','Contina; Access denied (ASN-CONTINA-044). ');
$ax += cidrblock($address,'107.153.28.0/24','Contina; Access denied (ASN-CONTINA-045). ');
$ax += cidrblock($address,'107.153.110.0/24','Contina; Access denied (ASN-CONTINA-046). ');
$ax += cidrblock($address,'107.153.126.0/24','Contina; Access denied (ASN-CONTINA-047). ');
$ax += cidrblock($address,'107.153.249.0/24','Contina; Access denied (ASN-CONTINA-048). ');
$ax += cidrblock($address,'107.153.251.0/24','Contina; Access denied (ASN-CONTINA-049). ');
$ax += cidrblock($address,'107.153.255.0/24','Contina; Access denied (ASN-CONTINA-050). ');
$ax += cidrblock($address,'107.168.1.0/24','Contina; Access denied (ASN-CONTINA-051). ');
$ax += cidrblock($address,'107.168.3.0/24','Contina; Access denied (ASN-CONTINA-052). ');
$ax += cidrblock($address,'107.168.4.0/24','Contina; Access denied (ASN-CONTINA-053). ');
$ax += cidrblock($address,'107.168.41.0/24','Contina; Access denied (ASN-CONTINA-054). ');
$ax += cidrblock($address,'107.168.50.0/24','Contina; Access denied (ASN-CONTINA-055). ');
$ax += cidrblock($address,'107.168.55.0/24','Contina; Access denied (ASN-CONTINA-056). ');
$ax += cidrblock($address,'107.168.56.0/24','Contina; Access denied (ASN-CONTINA-057). ');
$ax += cidrblock($address,'107.168.58.0/24','Contina; Access denied (ASN-CONTINA-058). ');
$ax += cidrblock($address,'107.168.71.0/24','Contina; Access denied (ASN-CONTINA-059). ');
$ax += cidrblock($address,'107.168.72.0/24','Contina; Access denied (ASN-CONTINA-060). ');
$ax += cidrblock($address,'107.168.127.0/24','Contina; Access denied (ASN-CONTINA-061). ');
$ax += cidrblock($address,'107.169.246.0/24','Contina; Access denied (ASN-CONTINA-062). ');
$ax += cidrblock($address,'107.169.253.0/24','Contina; Access denied (ASN-CONTINA-063). ');
$ax += cidrblock($address,'107.181.64.0/20','Contina; Access denied (ASN-CONTINA-064). ');
$ax += cidrblock($address,'107.182.115.0/24','Contina; Access denied (ASN-CONTINA-065). ');
$ax += cidrblock($address,'135.84.214.0/24','Contina; Access denied (ASN-CONTINA-066). ');
$ax += cidrblock($address,'155.254.117.0/24','Contina; Access denied (ASN-CONTINA-067). ');
$ax += cidrblock($address,'155.254.192.0/18','Contina; Access denied (ASN-CONTINA-068). ');
$ax += cidrblock($address,'165.84.224.0/23','Contina; Access denied (ASN-CONTINA-069). ');
$ax += cidrblock($address,'167.88.100.0/24','Contina; Access denied (ASN-CONTINA-070). ');
$ax += cidrblock($address,'167.160.96.0/19','Contina; Access denied (ASN-CONTINA-071). ');
$ax += cidrblock($address,'172.82.0.0/17','Contina; Access denied (ASN-CONTINA-072). ');
$ax += cidrblock($address,'172.97.88.0/24','Contina; Access denied (ASN-CONTINA-073). ');
$ax += cidrblock($address,'172.97.92.0/24','Contina; Access denied (ASN-CONTINA-074). ');
$ax += cidrblock($address,'172.97.94.0/24','Contina; Access denied (ASN-CONTINA-075). ');
$ax += cidrblock($address,'172.98.3.0/24','Contina; Access denied (ASN-CONTINA-076). ');
$ax += cidrblock($address,'172.98.35.0/24','Contina; Access denied (ASN-CONTINA-077). ');
$ax += cidrblock($address,'172.102.134.0/24','Contina; Access denied (ASN-CONTINA-078). ');
$ax += cidrblock($address,'172.110.170.0/23','Contina; Access denied (ASN-CONTINA-079). ');
$ax += cidrblock($address,'192.64.24.0/24','Contina; Access denied (ASN-CONTINA-080). ');
$ax += cidrblock($address,'192.64.26.0/24','Contina; Access denied (ASN-CONTINA-081). ');
$ax += cidrblock($address,'192.69.251.0/24','Contina; Access denied (ASN-CONTINA-082). ');
$ax += cidrblock($address,'192.77.248.0/24','Contina; Access denied (ASN-CONTINA-083). ');
$ax += cidrblock($address,'192.144.156.0/23','Contina; Access denied (ASN-CONTINA-084). ');
$ax += cidrblock($address,'192.144.188.0/23','Contina; Access denied (ASN-CONTINA-085). ');
$ax += cidrblock($address,'192.144.220.0/23','Contina; Access denied (ASN-CONTINA-086). ');
$ax += cidrblock($address,'192.171.30.0/23','Contina; Access denied (ASN-CONTINA-087). ');
$ax += cidrblock($address,'192.171.227.0/24','Contina; Access denied (ASN-CONTINA-088). ');
$ax += cidrblock($address,'192.200.26.0/24','Contina; Access denied (ASN-CONTINA-089). ');
$ax += cidrblock($address,'192.200.29.0/24','Contina; Access denied (ASN-CONTINA-090). ');
$ax += cidrblock($address,'192.200.31.0/24','Contina; Access denied (ASN-CONTINA-091). ');
$ax += cidrblock($address,'192.230.39.0/24','Contina; Access denied (ASN-CONTINA-092). ');
$ax += cidrblock($address,'192.230.61.0/24','Contina; Access denied (ASN-CONTINA-093). ');
$ax += cidrblock($address,'192.240.192.0/24','Contina; Access denied (ASN-CONTINA-094). ');
$ax += cidrblock($address,'192.240.212.0/24','Contina; Access denied (ASN-CONTINA-095). ');
$ax += cidrblock($address,'192.240.245.0/24','Contina; Access denied (ASN-CONTINA-096). ');
$ax += cidrblock($address,'192.255.70.0/24','Contina; Access denied (ASN-CONTINA-097). ');
$ax += cidrblock($address,'192.255.74.0/24','Contina; Access denied (ASN-CONTINA-098). ');
$ax += cidrblock($address,'192.255.93.0/24','Contina; Access denied (ASN-CONTINA-99). ');
$ax += cidrblock($address,'192.255.108.0/24','Contina; Access denied (ASN-CONTINA-100). ');
$ax += cidrblock($address,'204.62.122.0/24','Contina; Access denied (ASN-CONTINA-101). ');
$ax += cidrblock($address,'205.234.120.0/23','Contina; Access denied (ASN-CONTINA-102). ');
$ax += cidrblock($address,'205.234.126.0/23','Contina; Access denied (ASN-CONTINA-103). ');
$ax += cidrblock($address,'206.225.135.0/24','Contina; Access denied (ASN-CONTINA-104). ');
$ax += cidrblock($address,'207.89.22.0/23','Contina; Access denied (ASN-CONTINA-105). ');
$ax += cidrblock($address,'216.162.43.0/24','Contina; Access denied (ASN-CONTINA-106). ');


// Continuum Data Centers, LLC
// AS53264 (updated 2016.05.26)
$ax += cidrblock($address,'64.79.96.0/20','Continuum Data Centers; Access denied (ASN-CONTINUUM-00). ');
$ax += cidrblock($address,'64.187.232.0/21','Continuum Data Centers; Access denied (ASN-CONTINUUM-01). ');
$ax += cidrblock($address,'74.117.236.0/22','Continuum Data Centers; Access denied (ASN-CONTINUUM-02). ');
$ax += cidrblock($address,'74.119.216.0/22','Continuum Data Centers; Access denied (ASN-CONTINUUM-03). ');
$ax += cidrblock($address,'74.121.180.0/22','Continuum Data Centers; Access denied (ASN-CONTINUUM-04). ');
$ax += cidrblock($address,'74.122.192.0/21','Continuum Data Centers; Access denied (ASN-CONTINUUM-05). ');
$ax += cidrblock($address,'162.244.132.0/22','Continuum Data Centers; Access denied (ASN-CONTINUUM-06). ');
$ax += cidrblock($address,'173.243.112.0/20','Continuum Data Centers; Access denied (ASN-CONTINUUM-07). ');
$ax += cidrblock($address,'192.208.176.0/20','Continuum Data Centers; Access denied (ASN-CONTINUUM-08). ');
$ax += cidrblock($address,'198.50.24.0/21','Continuum Data Centers; Access denied (ASN-CONTINUUM-09). ');
$ax += cidrblock($address,'199.16.8.0/21','Continuum Data Centers; Access denied (ASN-CONTINUUM-10). ');
$ax += cidrblock($address,'199.96.80.0/21','Continuum Data Centers; Access denied (ASN-CONTINUUM-11). ');
$ax += cidrblock($address,'199.192.200.0/21','Continuum Data Centers; Access denied (ASN-CONTINUUM-12). ');
$ax += cidrblock($address,'210.16.102.0/24','Continuum Data Centers; Access denied (ASN-CONTINUUM-13). ');
$ax += cidrblock($address,'216.107.144.0/20','Continuum Data Centers; Access denied (ASN-CONTINUUM-14). ');
$ax += cidrblock($address,'216.231.128.0/20','Continuum Data Centers; Access denied (ASN-CONTINUUM-15). ');


// ESDS Software Solution
// AS45815 (updated 2016.05.26)
$ax += cidrblock($address,'103.212.120.0/23','ESDS Software Solution; Access denied (ASN-ESDS-0). ');
$ax += cidrblock($address,'103.249.99.0/24','ESDS Software Solution; Access denied (ASN-ESDS-1). ');
$ax += cidrblock($address,'115.124.96.0/21','ESDS Software Solution; Access denied (ASN-ESDS-2). ');
$ax += cidrblock($address,'115.124.104.0/24','ESDS Software Solution; Access denied (ASN-ESDS-3). ');
$ax += cidrblock($address,'115.124.106.0/23','ESDS Software Solution; Access denied (ASN-ESDS-4). ');
$ax += cidrblock($address,'115.124.108.0/23','ESDS Software Solution; Access denied (ASN-ESDS-5). ');
$ax += cidrblock($address,'115.124.112.0/24','ESDS Software Solution; Access denied (ASN-ESDS-6). ');
$ax += cidrblock($address,'115.124.114.0/23','ESDS Software Solution; Access denied (ASN-ESDS-7). ');
$ax += cidrblock($address,'115.124.120.0/21','ESDS Software Solution; Access denied (ASN-ESDS-8). ');


// QuickPacket, LLC
// AS46261 (updated 2016.05.26)
$ax += cidrblock($address,'23.251.224.0/19','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-00). ');
$ax += cidrblock($address,'45.43.192.0/19','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-01). ');
$ax += cidrblock($address,'45.59.21.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-02). ');
$ax += cidrblock($address,'45.59.25.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-03). ');
$ax += cidrblock($address,'59.152.124.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-04). ');
$ax += cidrblock($address,'63.221.88.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-05). ');
$ax += cidrblock($address,'67.220.224.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-06). ');
$ax += cidrblock($address,'67.220.240.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-07). ');
$ax += cidrblock($address,'67.220.244.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-08). ');
$ax += cidrblock($address,'103.203.40.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-09). ');
$ax += cidrblock($address,'104.160.224.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-10). ');
$ax += cidrblock($address,'104.160.228.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-11). ');
$ax += cidrblock($address,'104.160.231.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-12). ');
$ax += cidrblock($address,'104.160.232.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-13). ');
$ax += cidrblock($address,'104.160.234.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-14). ');
$ax += cidrblock($address,'104.160.236.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-15). ');
$ax += cidrblock($address,'104.160.238.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-16). ');
$ax += cidrblock($address,'104.160.240.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-17). ');
$ax += cidrblock($address,'104.160.242.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-18). ');
$ax += cidrblock($address,'104.160.244.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-19). ');
$ax += cidrblock($address,'104.160.246.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-20). ');
$ax += cidrblock($address,'104.160.249.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-21). ');
$ax += cidrblock($address,'104.160.251.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-22). ');
$ax += cidrblock($address,'104.160.252.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-23). ');
$ax += cidrblock($address,'104.166.64.0/19','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-24). ');
$ax += cidrblock($address,'104.247.192.0/19','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-25). ');
$ax += cidrblock($address,'104.251.81.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-26). ');
$ax += cidrblock($address,'107.161.112.0/20','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-27). ');
$ax += cidrblock($address,'107.181.130.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-28). ');
$ax += cidrblock($address,'114.31.211.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-29). ');
$ax += cidrblock($address,'155.254.60.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-30). ');
$ax += cidrblock($address,'160.202.64.0/18','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-31). ');
$ax += cidrblock($address,'162.210.36.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-32). ');
$ax += cidrblock($address,'162.213.215.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-33). ');
$ax += cidrblock($address,'162.217.172.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-34). ');
$ax += cidrblock($address,'162.223.28.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-35). ');
$ax += cidrblock($address,'162.248.208.0/21','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-36). ');
$ax += cidrblock($address,'170.75.144.0/20','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-37). ');
$ax += cidrblock($address,'172.82.128.0/18','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-38). ');
$ax += cidrblock($address,'172.85.96.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-39). ');
$ax += cidrblock($address,'172.85.98.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-40). ');
$ax += cidrblock($address,'172.85.100.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-41). ');
$ax += cidrblock($address,'172.85.104.0/21','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-42). ');
$ax += cidrblock($address,'172.98.162.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-43). ');
$ax += cidrblock($address,'172.98.164.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-44). ');
$ax += cidrblock($address,'172.98.171.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-45). ');
$ax += cidrblock($address,'172.98.172.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-46). ');
$ax += cidrblock($address,'172.98.181.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-47). ');
$ax += cidrblock($address,'172.98.184.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-48). ');
$ax += cidrblock($address,'172.102.192.0/20','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-49). ');
$ax += cidrblock($address,'172.102.208.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-50). ');
$ax += cidrblock($address,'172.102.217.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-51). ');
$ax += cidrblock($address,'172.102.220.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-52). ');
$ax += cidrblock($address,'173.246.160.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-53). ');
$ax += cidrblock($address,'173.246.163.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-54). ');
$ax += cidrblock($address,'173.246.164.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-55). ');
$ax += cidrblock($address,'173.246.168.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-56). ');
$ax += cidrblock($address,'173.246.171.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-57). ');
$ax += cidrblock($address,'173.246.172.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-58). ');
$ax += cidrblock($address,'173.246.176.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-59). ');
$ax += cidrblock($address,'173.246.183.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-60). ');
$ax += cidrblock($address,'173.246.184.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-61). ');
$ax += cidrblock($address,'173.246.188.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-62). ');
$ax += cidrblock($address,'173.246.190.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-63). ');
$ax += cidrblock($address,'192.225.96.0/22','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-64). ');
$ax += cidrblock($address,'192.225.102.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-65). ');
$ax += cidrblock($address,'192.225.105.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-66). ');
$ax += cidrblock($address,'192.225.106.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-67). ');
$ax += cidrblock($address,'192.225.110.0/23','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-68). ');
$ax += cidrblock($address,'199.101.96.0/21','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-69). ');
$ax += cidrblock($address,'199.233.232.0/21','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-70). ');
$ax += cidrblock($address,'216.158.195.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-71). ');
$ax += cidrblock($address,'216.158.206.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-72). ');
$ax += cidrblock($address,'216.158.217.0/24','QuickPacket, LLC; Access denied (ASN-QUICKPACKET-73). ');


// ScaleUp Technologies GmbH & Co. KG
// AS29014 (updated 2016.05.27)
$ax += cidrblock($address,'81.28.224.0/21','ScaleUp Technologies; Access denied (ASN-SCALEUP-0). ');
$ax += cidrblock($address,'81.28.232.0/22','ScaleUp Technologies; Access denied (ASN-SCALEUP-1). ');
$ax += cidrblock($address,'81.28.237.0/24','ScaleUp Technologies; Access denied (ASN-SCALEUP-2). ');
$ax += cidrblock($address,'85.158.0.0/21','ScaleUp Technologies; Access denied (ASN-SCALEUP-3). ');
$ax += cidrblock($address,'93.92.128.0/21','ScaleUp Technologies; Access denied (ASN-SCALEUP-4). ');
$ax += cidrblock($address,'185.8.8.0/22','ScaleUp Technologies; Access denied (ASN-SCALEUP-5). ');
$ax += cidrblock($address,'193.41.116.0/23','ScaleUp Technologies; Access denied (ASN-SCALEUP-6). ');
$ax += cidrblock($address,'193.53.23.0/24','ScaleUp Technologies; Access denied (ASN-SCALEUP-7). ');
$ax += cidrblock($address,'195.177.232.0/23','ScaleUp Technologies; Access denied (ASN-SCALEUP-8). ');


// HIVELOCITY VENTURES CORP
// AS29802 (updated 2016.05.27)
$ax += cidrblock($address,'5.62.152.0/21','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-00). ');
$ax += cidrblock($address,'23.111.128.0/21','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-01). ');
$ax += cidrblock($address,'23.111.144.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-02). ');
$ax += cidrblock($address,'37.9.44.0/22','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-03). ');
$ax += cidrblock($address,'38.112.194.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-04). ');
$ax += cidrblock($address,'64.140.144.0/22','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-05). ');
$ax += cidrblock($address,'66.96.80.0/20','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-06). ');
$ax += cidrblock($address,'66.232.96.0/19','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-07). ');
$ax += cidrblock($address,'68.233.224.0/19','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-08). ');
$ax += cidrblock($address,'69.46.0.0/19','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-09). ');
$ax += cidrblock($address,'74.50.96.0/19','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-10). ');
$ax += cidrblock($address,'79.110.28.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-11). ');
$ax += cidrblock($address,'79.110.31.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-12). ');
$ax += cidrblock($address,'79.133.106.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-13). ');
$ax += cidrblock($address,'91.204.14.0/23','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-14). ');
$ax += cidrblock($address,'91.209.57.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-15). ');
$ax += cidrblock($address,'95.181.218.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-16). ');
$ax += cidrblock($address,'96.31.64.0/19','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-17). ');
$ax += cidrblock($address,'104.156.48.0/20','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-18). ');
$ax += cidrblock($address,'104.238.58.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-19). ');
$ax += cidrblock($address,'162.216.4.0/22','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-20). ');
$ax += cidrblock($address,'162.220.56.0/21','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-21). ');
$ax += cidrblock($address,'162.252.80.0/21','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-22). ');
$ax += cidrblock($address,'162.254.144.0/21','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-23). ');
$ax += cidrblock($address,'172.86.147.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-24). ');
$ax += cidrblock($address,'179.61.12.0/23','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-25). ');
$ax += cidrblock($address,'179.61.14.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-26). ');
$ax += cidrblock($address,'185.13.32.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-27). ');
$ax += cidrblock($address,'185.14.194.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-28). ');
$ax += cidrblock($address,'185.89.100.0/23','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-29). ');
$ax += cidrblock($address,'185.101.69.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-30). ');
$ax += cidrblock($address,'185.101.70.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-31). ');
$ax += cidrblock($address,'190.115.96.0/20','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-32). ');
$ax += cidrblock($address,'192.124.119.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-33). ');
$ax += cidrblock($address,'193.9.28.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-34). ');
$ax += cidrblock($address,'198.178.120.0/21','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-35). ');
$ax += cidrblock($address,'199.47.151.0/24','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-36). ');
$ax += cidrblock($address,'199.59.144.0/22','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-37). ');
$ax += cidrblock($address,'199.119.100.0/22','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-38). ');
$ax += cidrblock($address,'199.167.144.0/21','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-39). ');
$ax += cidrblock($address,'199.193.112.0/21','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-40). ');
$ax += cidrblock($address,'203.132.24.0/22','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-41). ');
$ax += cidrblock($address,'206.51.224.0/20','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-42). ');
$ax += cidrblock($address,'209.133.192.0/19','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-43). ');
$ax += cidrblock($address,'216.109.224.0/20','HIVELOCITY VENTURES CORP; Access denied (ASN-HIVELOCITY-44). ');


// XT GLOBAL NETWORKS LTD
// AS48095 (updated 2016.05.27)
$ax += cidrblock($address,'31.14.0.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-000). ');
$ax += cidrblock($address,'31.14.24.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-001). ');
$ax += cidrblock($address,'31.14.68.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-002). ');
$ax += cidrblock($address,'31.14.72.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-003). ');
$ax += cidrblock($address,'31.14.103.0/24','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-004). ');
$ax += cidrblock($address,'31.14.168.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-005). ');
$ax += cidrblock($address,'31.14.208.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-006). ');
$ax += cidrblock($address,'31.14.240.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-007). ');
$ax += cidrblock($address,'31.14.248.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-008). ');
$ax += cidrblock($address,'31.14.255.0/24','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-009). ');
$ax += cidrblock($address,'37.153.140.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-010). ');
$ax += cidrblock($address,'37.153.144.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-011). ');
$ax += cidrblock($address,'37.153.152.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-012). ');
$ax += cidrblock($address,'37.153.160.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-013). ');
$ax += cidrblock($address,'37.153.168.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-014). ');
$ax += cidrblock($address,'37.156.72.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-015). ');
$ax += cidrblock($address,'37.156.104.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-016). ');
$ax += cidrblock($address,'37.156.184.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-017). ');
$ax += cidrblock($address,'37.156.216.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-018). ');
$ax += cidrblock($address,'37.156.228.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-019). ');
$ax += cidrblock($address,'37.156.252.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-020). ');
$ax += cidrblock($address,'46.102.96.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-021). ');
$ax += cidrblock($address,'46.102.160.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-022). ');
$ax += cidrblock($address,'77.81.92.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-023). ');
$ax += cidrblock($address,'77.81.124.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-024). ');
$ax += cidrblock($address,'77.81.160.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-025). ');
$ax += cidrblock($address,'77.81.167.0/24','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-026). ');
$ax += cidrblock($address,'77.81.168.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-027). ');
$ax += cidrblock($address,'84.247.4.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-028). ');
$ax += cidrblock($address,'84.247.40.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-029). ');
$ax += cidrblock($address,'85.204.64.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-030). ');
$ax += cidrblock($address,'85.204.112.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-031). ');
$ax += cidrblock($address,'85.204.148.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-032). ');
$ax += cidrblock($address,'85.204.152.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-033). ');
$ax += cidrblock($address,'85.204.160.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-034). ');
$ax += cidrblock($address,'85.204.168.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-035). ');
$ax += cidrblock($address,'86.104.20.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-036). ');
$ax += cidrblock($address,'86.104.68.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-037). ');
$ax += cidrblock($address,'86.104.76.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-038). ');
$ax += cidrblock($address,'86.104.112.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-039). ');
$ax += cidrblock($address,'86.104.120.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-040). ');
$ax += cidrblock($address,'86.104.168.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-041). ');
$ax += cidrblock($address,'86.104.248.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-042). ');
$ax += cidrblock($address,'86.105.20.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-043). ');
$ax += cidrblock($address,'86.105.188.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-044). ');
$ax += cidrblock($address,'86.105.200.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-045). ');
$ax += cidrblock($address,'86.105.248.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-046). ');
$ax += cidrblock($address,'86.106.0.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-047). ');
$ax += cidrblock($address,'86.106.16.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-048). ');
$ax += cidrblock($address,'86.106.64.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-049). ');
$ax += cidrblock($address,'89.32.64.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-050). ');
$ax += cidrblock($address,'89.32.80.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-051). ');
$ax += cidrblock($address,'89.32.112.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-052). ');
$ax += cidrblock($address,'89.32.120.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-053). ');
$ax += cidrblock($address,'89.32.132.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-054). ');
$ax += cidrblock($address,'89.32.176.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-055). ');
$ax += cidrblock($address,'89.32.192.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-056). ');
$ax += cidrblock($address,'89.32.208.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-057). ');
$ax += cidrblock($address,'89.32.248.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-058). ');
$ax += cidrblock($address,'89.33.40.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-059). ');
$ax += cidrblock($address,'89.33.68.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-060). ');
$ax += cidrblock($address,'89.34.164.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-061). ');
$ax += cidrblock($address,'89.35.28.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-062). ');
$ax += cidrblock($address,'89.35.96.0/20','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-063). ');
$ax += cidrblock($address,'89.35.136.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-064). ');
$ax += cidrblock($address,'89.35.196.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-065). ');
$ax += cidrblock($address,'89.36.0.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-066). ');
$ax += cidrblock($address,'89.36.32.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-067). ');
$ax += cidrblock($address,'89.36.40.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-068). ');
$ax += cidrblock($address,'89.36.64.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-069). ');
$ax += cidrblock($address,'89.36.168.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-070). ');
$ax += cidrblock($address,'89.36.236.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-071). ');
$ax += cidrblock($address,'89.37.64.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-072). ');
$ax += cidrblock($address,'89.37.72.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-073). ');
$ax += cidrblock($address,'89.37.84.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-074). ');
$ax += cidrblock($address,'89.37.88.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-075). ');
$ax += cidrblock($address,'89.37.228.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-076). ');
$ax += cidrblock($address,'89.37.236.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-077). ');
$ax += cidrblock($address,'89.38.16.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-078). ');
$ax += cidrblock($address,'89.38.28.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-079). ');
$ax += cidrblock($address,'89.38.96.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-080). ');
$ax += cidrblock($address,'89.38.160.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-081). ');
$ax += cidrblock($address,'89.38.176.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-082). ');
$ax += cidrblock($address,'89.38.216.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-083). ');
$ax += cidrblock($address,'89.39.24.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-084). ');
$ax += cidrblock($address,'89.39.104.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-085). ');
$ax += cidrblock($address,'89.39.136.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-086). ');
$ax += cidrblock($address,'89.39.160.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-087). ');
$ax += cidrblock($address,'89.39.180.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-088). ');
$ax += cidrblock($address,'89.39.208.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-089). ');
$ax += cidrblock($address,'89.39.216.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-090). ');
$ax += cidrblock($address,'89.40.0.0/20','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-091). ');
$ax += cidrblock($address,'89.41.44.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-092). ');
$ax += cidrblock($address,'89.41.52.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-093). ');
$ax += cidrblock($address,'89.42.120.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-094). ');
$ax += cidrblock($address,'89.42.164.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-095). ');
$ax += cidrblock($address,'89.42.208.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-096). ');
$ax += cidrblock($address,'89.42.236.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-097). ');
$ax += cidrblock($address,'89.43.56.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-098). ');
$ax += cidrblock($address,'89.43.112.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-99). ');
$ax += cidrblock($address,'89.43.184.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-100). ');
$ax += cidrblock($address,'89.44.16.0/20','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-101). ');
$ax += cidrblock($address,'89.44.32.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-102). ');
$ax += cidrblock($address,'89.44.40.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-103). ');
$ax += cidrblock($address,'89.44.48.0/20','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-104). ');
$ax += cidrblock($address,'89.44.72.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-105). ');
$ax += cidrblock($address,'89.44.92.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-106). ');
$ax += cidrblock($address,'89.44.96.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-107). ');
$ax += cidrblock($address,'89.44.156.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-108). ');
$ax += cidrblock($address,'89.44.216.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-109). ');
$ax += cidrblock($address,'89.45.120.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-110). ');
$ax += cidrblock($address,'89.46.32.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-111). ');
$ax += cidrblock($address,'89.46.88.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-112). ');
$ax += cidrblock($address,'89.46.144.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-113). ');
$ax += cidrblock($address,'89.46.252.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-114). ');
$ax += cidrblock($address,'89.47.16.0/20','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-115). ');
$ax += cidrblock($address,'89.47.44.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-116). ');
$ax += cidrblock($address,'89.47.160.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-117). ');
$ax += cidrblock($address,'89.47.236.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-118). ');
$ax += cidrblock($address,'92.114.4.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-119). ');
$ax += cidrblock($address,'92.114.36.0/24','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-120). ');
$ax += cidrblock($address,'92.114.53.0/24','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-121). ');
$ax += cidrblock($address,'92.114.56.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-122). ');
$ax += cidrblock($address,'92.114.83.0/24','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-123). ');
$ax += cidrblock($address,'92.114.100.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-124). ');
$ax += cidrblock($address,'93.113.120.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-125). ');
$ax += cidrblock($address,'93.113.216.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-126). ');
$ax += cidrblock($address,'93.114.196.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-127). ');
$ax += cidrblock($address,'93.114.236.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-128). ');
$ax += cidrblock($address,'93.115.128.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-129). ');
$ax += cidrblock($address,'93.115.192.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-130). ');
$ax += cidrblock($address,'93.117.80.0/20','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-131). ');
$ax += cidrblock($address,'93.118.64.0/20','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-132). ');
$ax += cidrblock($address,'93.119.16.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-133). ');
$ax += cidrblock($address,'94.176.44.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-134). ');
$ax += cidrblock($address,'94.176.107.0/24','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-135). ');
$ax += cidrblock($address,'94.176.172.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-136). ');
$ax += cidrblock($address,'94.176.232.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-137). ');
$ax += cidrblock($address,'94.177.24.0/23','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-138). ');
$ax += cidrblock($address,'94.177.68.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-139). ');
$ax += cidrblock($address,'94.177.104.0/23','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-140). ');
$ax += cidrblock($address,'176.223.68.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-141). ');
$ax += cidrblock($address,'176.223.104.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-142). ');
$ax += cidrblock($address,'176.223.128.0/20','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-143). ');
$ax += cidrblock($address,'176.223.172.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-144). ');
$ax += cidrblock($address,'176.223.176.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-145). ');
$ax += cidrblock($address,'185.77.248.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-146). ');
$ax += cidrblock($address,'188.208.0.0/20','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-147). ');
$ax += cidrblock($address,'188.208.40.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-148). ');
$ax += cidrblock($address,'188.208.216.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-149). ');
$ax += cidrblock($address,'188.210.208.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-150). ');
$ax += cidrblock($address,'188.211.160.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-151). ');
$ax += cidrblock($address,'188.212.20.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-152). ');
$ax += cidrblock($address,'188.212.32.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-153). ');
$ax += cidrblock($address,'188.213.136.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-154). ');
$ax += cidrblock($address,'188.214.8.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-155). ');
$ax += cidrblock($address,'188.214.48.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-156). ');
$ax += cidrblock($address,'188.215.20.0/22','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-157). ');
$ax += cidrblock($address,'188.215.224.0/21','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-158). ');
$ax += cidrblock($address,'188.240.128.0/20','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-159). ');
$ax += cidrblock($address,'188.247.228.0/23','XT GLOBAL NETWORKS LTD; Access denied (ASN-XTGLOBAL-160). ');


// Datacenter IP, LLC
// AS13739 (updated 2016.05.27)
$ax += cidrblock($address,'104.143.72.0/21','Datacenter IP, LLC; Access denied (ASN-DATACENTER-00). ');
$ax += cidrblock($address,'162.219.40.0/22','Datacenter IP, LLC; Access denied (ASN-DATACENTER-01). ');
$ax += cidrblock($address,'162.252.180.0/22','Datacenter IP, LLC; Access denied (ASN-DATACENTER-02). ');
$ax += cidrblock($address,'192.74.128.0/22','Datacenter IP, LLC; Access denied (ASN-DATACENTER-03). ');
$ax += cidrblock($address,'192.74.132.0/23','Datacenter IP, LLC; Access denied (ASN-DATACENTER-04). ');
$ax += cidrblock($address,'192.126.128.0/17','Datacenter IP, LLC; Access denied (ASN-DATACENTER-05). ');
$ax += cidrblock($address,'192.184.0.0/22','Datacenter IP, LLC; Access denied (ASN-DATACENTER-06). ');
$ax += cidrblock($address,'198.60.200.0/21','Datacenter IP, LLC; Access denied (ASN-DATACENTER-07). ');
$ax += cidrblock($address,'198.144.108.0/22','Datacenter IP, LLC; Access denied (ASN-DATACENTER-08). ');
$ax += cidrblock($address,'199.36.104.0/21','Datacenter IP, LLC; Access denied (ASN-DATACENTER-09). ');
$ax += cidrblock($address,'199.104.64.0/23','Datacenter IP, LLC; Access denied (ASN-DATACENTER-10). ');
$ax += cidrblock($address,'208.110.128.0/19','Datacenter IP, LLC; Access denied (ASN-DATACENTER-11). ');
$ax += cidrblock($address,'216.162.192.0/19','Datacenter IP, LLC; Access denied (ASN-DATACENTER-12). ');


// MBA DATACENTERS S.L.
// AS43578 (updated 2016.05.27)
$ax += cidrblock($address,'5.226.172.0/24','MBA DATACENTERS S.L.; Access denied (ASN-MBA-00). ');
$ax += cidrblock($address,'77.246.176.0/24','MBA DATACENTERS S.L.; Access denied (ASN-MBA-01). ');
$ax += cidrblock($address,'77.246.179.0/24','MBA DATACENTERS S.L.; Access denied (ASN-MBA-02). ');
$ax += cidrblock($address,'77.246.181.0/24','MBA DATACENTERS S.L.; Access denied (ASN-MBA-03). ');
$ax += cidrblock($address,'77.246.182.0/23','MBA DATACENTERS S.L.; Access denied (ASN-MBA-04). ');
$ax += cidrblock($address,'77.246.188.0/24','MBA DATACENTERS S.L.; Access denied (ASN-MBA-05). ');
$ax += cidrblock($address,'77.246.190.0/23','MBA DATACENTERS S.L.; Access denied (ASN-MBA-06). ');
$ax += cidrblock($address,'154.16.158.0/24','MBA DATACENTERS S.L.; Access denied (ASN-MBA-07). ');
$ax += cidrblock($address,'181.214.90.0/23','MBA DATACENTERS S.L.; Access denied (ASN-MBA-08). ');
$ax += cidrblock($address,'191.96.102.0/24','MBA DATACENTERS S.L.; Access denied (ASN-MBA-09). ');
$ax += cidrblock($address,'217.113.247.0/24','MBA DATACENTERS S.L.; Access denied (ASN-MBA-10). ');
$ax += cidrblock($address,'217.113.248.0/24','MBA DATACENTERS S.L.; Access denied (ASN-MBA-11). ');


// CachedNet LLC
// AS46805 (updated 2016.05.27)
$ax += cidrblock($address,'23.92.112.0/20','CachedNet LLC; Access denied (ASN-CACHEDNET-00). ');
$ax += cidrblock($address,'104.160.0.0/19','CachedNet LLC; Access denied (ASN-CACHEDNET-01). ');
$ax += cidrblock($address,'107.150.64.0/20','CachedNet LLC; Access denied (ASN-CACHEDNET-02). ');
$ax += cidrblock($address,'107.150.80.0/21','CachedNet LLC; Access denied (ASN-CACHEDNET-03). ');
$ax += cidrblock($address,'107.150.88.0/22','CachedNet LLC; Access denied (ASN-CACHEDNET-04). ');
$ax += cidrblock($address,'107.150.92.0/23','CachedNet LLC; Access denied (ASN-CACHEDNET-05). ');
$ax += cidrblock($address,'107.150.94.0/24','CachedNet LLC; Access denied (ASN-CACHEDNET-06). ');
$ax += cidrblock($address,'162.212.168.0/21','CachedNet LLC; Access denied (ASN-CACHEDNET-07). ');
$ax += cidrblock($address,'192.40.88.0/22','CachedNet LLC; Access denied (ASN-CACHEDNET-08). ');
$ax += cidrblock($address,'192.40.92.0/23','CachedNet LLC; Access denied (ASN-CACHEDNET-09). ');
$ax += cidrblock($address,'192.40.95.0/24','CachedNet LLC; Access denied (ASN-CACHEDNET-10). ');


// Hawk Host Inc
// AS20068 (updated 2016.05.27)
$ax += cidrblock($address,'198.252.106.0/23','Hawk Host Inc; Access denied (ASN-HAWKHOST-0). ');
$ax += cidrblock($address,'198.252.108.0/24','Hawk Host Inc; Access denied (ASN-HAWKHOST-1). ');


// CariNet, Inc
// AS10439 (updated 2016.05.27)
$ax += cidrblock($address,'66.240.192.0/18','CariNet, Inc; Access denied (ASN-CARINET-0). ');
$ax += cidrblock($address,'71.6.128.0/17','CariNet, Inc; Access denied (ASN-CARINET-1). ');
$ax += cidrblock($address,'135.84.216.0/24','CariNet, Inc; Access denied (ASN-CARINET-2). ');
$ax += cidrblock($address,'206.123.141.0/24','CariNet, Inc; Access denied (ASN-CARINET-3). ');
$ax += cidrblock($address,'206.123.142.0/24','CariNet, Inc; Access denied (ASN-CARINET-4). ');
$ax += cidrblock($address,'209.126.128.0/17','CariNet, Inc; Access denied (ASN-CARINET-5). ');
$ax += cidrblock($address,'216.75.0.0/18','CariNet, Inc; Access denied (ASN-CARINET-6). ');
$ax += cidrblock($address,'216.98.128.0/19','CariNet, Inc; Access denied (ASN-CARINET-7). ');


// Proxy Pipe, Inc
// AS27458 (updated 2016.05.27)
$ax += cidrblock($address,'31.187.72.0/22','Proxy Pipe, Inc; Access denied (ASN-PROXYPIPE-0). ');
$ax += cidrblock($address,'31.220.12.0/23','Proxy Pipe, Inc; Access denied (ASN-PROXYPIPE-1). ');
$ax += cidrblock($address,'31.220.14.0/24','Proxy Pipe, Inc; Access denied (ASN-PROXYPIPE-2). ');
$ax += cidrblock($address,'192.150.57.0/24','Proxy Pipe, Inc; Access denied (ASN-PROXYPIPE-3). ');
$ax += cidrblock($address,'202.165.124.0/23','Proxy Pipe, Inc; Access denied (ASN-PROXYPIPE-4). ');


// UK-2 Limited
// AS13213 (updated 2016.05.30)
$ax += cidrblock($address,'31.24.224.0/21','UK-2 Limited; Access denied (ASN-UK2LIMITED-00). ');
$ax += cidrblock($address,'37.123.112.0/21','UK-2 Limited; Access denied (ASN-UK2LIMITED-01). ');
$ax += cidrblock($address,'37.130.225.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-02). ');
$ax += cidrblock($address,'37.130.226.0/23','UK-2 Limited; Access denied (ASN-UK2LIMITED-03). ');
$ax += cidrblock($address,'37.130.228.0/22','UK-2 Limited; Access denied (ASN-UK2LIMITED-04). ');
$ax += cidrblock($address,'46.23.64.0/20','UK-2 Limited; Access denied (ASN-UK2LIMITED-05). ');
$ax += cidrblock($address,'46.28.48.0/21','UK-2 Limited; Access denied (ASN-UK2LIMITED-06). ');
$ax += cidrblock($address,'46.102.148.0/22','UK-2 Limited; Access denied (ASN-UK2LIMITED-07). ');
$ax += cidrblock($address,'69.168.225.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-08). ');
$ax += cidrblock($address,'77.92.64.0/19','UK-2 Limited; Access denied (ASN-UK2LIMITED-09). ');
$ax += cidrblock($address,'82.163.72.0/21','UK-2 Limited; Access denied (ASN-UK2LIMITED-10). ');
$ax += cidrblock($address,'83.170.64.0/18','UK-2 Limited; Access denied (ASN-UK2LIMITED-11). ');
$ax += cidrblock($address,'84.247.32.0/22','UK-2 Limited; Access denied (ASN-UK2LIMITED-12). ');
$ax += cidrblock($address,'85.203.22.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-13). ');
$ax += cidrblock($address,'88.202.224.0/21','UK-2 Limited; Access denied (ASN-UK2LIMITED-14). ');
$ax += cidrblock($address,'89.39.150.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-15). ');
$ax += cidrblock($address,'89.43.68.0/23','UK-2 Limited; Access denied (ASN-UK2LIMITED-16). ');
$ax += cidrblock($address,'91.109.240.0/21','UK-2 Limited; Access denied (ASN-UK2LIMITED-17). ');
$ax += cidrblock($address,'104.200.156.0/23','UK-2 Limited; Access denied (ASN-UK2LIMITED-18). ');
$ax += cidrblock($address,'104.200.158.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-19). ');
$ax += cidrblock($address,'104.245.10.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-20). ');
$ax += cidrblock($address,'104.250.177.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-21). ');
$ax += cidrblock($address,'104.250.180.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-22). ');
$ax += cidrblock($address,'104.250.182.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-23). ');
$ax += cidrblock($address,'109.123.64.0/18','UK-2 Limited; Access denied (ASN-UK2LIMITED-24). ');
$ax += cidrblock($address,'142.147.91.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-25). ');
$ax += cidrblock($address,'142.147.92.0/23','UK-2 Limited; Access denied (ASN-UK2LIMITED-26). ');
$ax += cidrblock($address,'142.147.94.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-27). ');
$ax += cidrblock($address,'172.98.68.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-28). ');
$ax += cidrblock($address,'172.98.83.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-29). ');
$ax += cidrblock($address,'176.67.160.0/20','UK-2 Limited; Access denied (ASN-UK2LIMITED-30). ');
$ax += cidrblock($address,'185.2.136.0/22','UK-2 Limited; Access denied (ASN-UK2LIMITED-31). ');
$ax += cidrblock($address,'185.7.227.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-32). ');
$ax += cidrblock($address,'185.9.50.0/23','UK-2 Limited; Access denied (ASN-UK2LIMITED-33). ');
$ax += cidrblock($address,'185.35.148.0/22','UK-2 Limited; Access denied (ASN-UK2LIMITED-34). ');
$ax += cidrblock($address,'185.38.184.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-35). ');
$ax += cidrblock($address,'185.80.220.0/22','UK-2 Limited; Access denied (ASN-UK2LIMITED-36). ');
$ax += cidrblock($address,'185.102.220.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-37). ');
$ax += cidrblock($address,'185.125.64.0/22','UK-2 Limited; Access denied (ASN-UK2LIMITED-38). ');
$ax += cidrblock($address,'185.152.0.0/23','UK-2 Limited; Access denied (ASN-UK2LIMITED-39). ');
$ax += cidrblock($address,'188.72.97.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-40). ');
$ax += cidrblock($address,'188.72.105.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-41). ');
$ax += cidrblock($address,'188.212.120.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-42). ');
$ax += cidrblock($address,'190.105.192.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-43). ');
$ax += cidrblock($address,'190.121.210.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-44). ');
$ax += cidrblock($address,'191.101.17.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-45). ');
$ax += cidrblock($address,'193.150.8.0/22','UK-2 Limited; Access denied (ASN-UK2LIMITED-46). ');
$ax += cidrblock($address,'194.70.234.0/24','UK-2 Limited; Access denied (ASN-UK2LIMITED-47). ');


// Reasonnet IP Networks B.V.
// AS25525 (updated 2016.05.30)
$ax += cidrblock($address,'62.84.244.0/22','Reasonnet IP Networks; Access denied (ASN-REASONNET-00). ');
$ax += cidrblock($address,'79.99.24.0/21','Reasonnet IP Networks; Access denied (ASN-REASONNET-01). ');
$ax += cidrblock($address,'83.98.128.0/18','Reasonnet IP Networks; Access denied (ASN-REASONNET-02). ');
$ax += cidrblock($address,'83.98.192.0/19','Reasonnet IP Networks; Access denied (ASN-REASONNET-03). ');
$ax += cidrblock($address,'85.92.128.0/19','Reasonnet IP Networks; Access denied (ASN-REASONNET-04). ');
$ax += cidrblock($address,'87.237.99.0/24','Reasonnet IP Networks; Access denied (ASN-REASONNET-05). ');
$ax += cidrblock($address,'87.237.103.0/24','Reasonnet IP Networks; Access denied (ASN-REASONNET-06). ');
$ax += cidrblock($address,'89.18.160.0/19','Reasonnet IP Networks; Access denied (ASN-REASONNET-07). ');
$ax += cidrblock($address,'89.30.128.0/17','Reasonnet IP Networks; Access denied (ASN-REASONNET-08). ');
$ax += cidrblock($address,'91.199.137.0/24','Reasonnet IP Networks; Access denied (ASN-REASONNET-09). ');
$ax += cidrblock($address,'91.216.104.0/24','Reasonnet IP Networks; Access denied (ASN-REASONNET-10). ');
$ax += cidrblock($address,'93.175.176.0/20','Reasonnet IP Networks; Access denied (ASN-REASONNET-11). ');
$ax += cidrblock($address,'128.140.220.0/22','Reasonnet IP Networks; Access denied (ASN-REASONNET-12). ');
$ax += cidrblock($address,'173.239.62.0/23','Reasonnet IP Networks; Access denied (ASN-REASONNET-13). ');
$ax += cidrblock($address,'178.248.174.0/23','Reasonnet IP Networks; Access denied (ASN-REASONNET-14). ');
$ax += cidrblock($address,'193.33.214.0/23','Reasonnet IP Networks; Access denied (ASN-REASONNET-15). ');
$ax += cidrblock($address,'193.84.176.0/24','Reasonnet IP Networks; Access denied (ASN-REASONNET-16). ');
$ax += cidrblock($address,'193.189.141.0/24','Reasonnet IP Networks; Access denied (ASN-REASONNET-17). ');
$ax += cidrblock($address,'194.145.119.0/24','Reasonnet IP Networks; Access denied (ASN-REASONNET-18). ');
$ax += cidrblock($address,'194.146.127.0/24','Reasonnet IP Networks; Access denied (ASN-REASONNET-19). ');
$ax += cidrblock($address,'195.234.173.0/24','Reasonnet IP Networks; Access denied (ASN-REASONNET-20). ');
$ax += cidrblock($address,'213.189.0.0/19','Reasonnet IP Networks; Access denied (ASN-REASONNET-21). ');
$ax += cidrblock($address,'213.247.32.0/19','Reasonnet IP Networks; Access denied (ASN-REASONNET-22). ');


// IT7 Networks Inc
// AS25820 (updated 2016.05.30)
$ax += cidrblock($address,'23.83.224.0/19','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-00). ');
$ax += cidrblock($address,'23.105.192.0/19','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-01). ');
$ax += cidrblock($address,'23.252.98.0/23','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-02). ');
$ax += cidrblock($address,'23.252.101.0/24','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-03). ');
$ax += cidrblock($address,'23.252.102.0/23','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-04). ');
$ax += cidrblock($address,'45.62.112.0/20','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-05). ');
$ax += cidrblock($address,'45.78.0.0/18','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-06). ');
$ax += cidrblock($address,'74.121.148.0/22','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-07). ');
$ax += cidrblock($address,'104.128.80.0/20','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-08). ');
$ax += cidrblock($address,'104.160.32.0/22','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-09). ');
$ax += cidrblock($address,'104.160.40.0/21','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-10). ');
$ax += cidrblock($address,'104.194.64.0/21','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-11). ');
$ax += cidrblock($address,'104.194.72.0/22','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-12). ');
$ax += cidrblock($address,'104.194.80.0/20','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-13). ');
$ax += cidrblock($address,'104.224.136.0/22','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-14). ');
$ax += cidrblock($address,'104.224.144.0/22','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-15). ');
$ax += cidrblock($address,'104.224.168.0/21','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-16). ');
$ax += cidrblock($address,'104.224.176.0/20','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-17). ');
$ax += cidrblock($address,'107.182.176.0/20','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-18). ');
$ax += cidrblock($address,'138.128.208.0/21','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-19). ');
$ax += cidrblock($address,'138.128.216.0/22','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-20). ');
$ax += cidrblock($address,'144.168.56.0/21','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-21). ');
$ax += cidrblock($address,'162.211.224.0/22','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-22). ');
$ax += cidrblock($address,'192.243.112.0/20','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-23). ');
$ax += cidrblock($address,'198.35.44.0/22','IT7 Networks Inc; Access denied (ASN-IT7NETWORKS-24). ');


// OPTICAL TECHNOLOGIES S.A.C.
// AS27843 (updated 2016.05.30)
$ax += cidrblock($address,'143.0.248.0/22','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-00). ');
$ax += cidrblock($address,'143.208.132.0/22','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-01). ');
$ax += cidrblock($address,'161.132.96.0/19','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-02). ');
$ax += cidrblock($address,'161.132.192.0/19','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-03). ');
$ax += cidrblock($address,'167.249.8.0/22','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-04). ');
$ax += cidrblock($address,'168.121.44.0/22','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-05). ');
$ax += cidrblock($address,'168.121.48.0/22','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-06). ');
$ax += cidrblock($address,'168.121.220.0/22','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-07). ');
$ax += cidrblock($address,'168.121.236.0/22','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-08). ');
$ax += cidrblock($address,'168.181.8.0/22','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-09). ');
$ax += cidrblock($address,'168.205.132.0/22','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-10). ');
$ax += cidrblock($address,'181.177.224.0/19','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-11). ');
$ax += cidrblock($address,'190.12.64.0/19','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-12). ');
$ax += cidrblock($address,'190.102.128.0/19','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-13). ');
$ax += cidrblock($address,'191.98.128.0/18','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-14). ');
$ax += cidrblock($address,'200.10.130.0/24','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-15). ');
$ax += cidrblock($address,'200.16.0.0/22','OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-OPTICAL-16). ');


// Hosting Services Inc
// AS29302 (updated 2016.05.30)
$ax += cidrblock($address,'5.63.144.0/21','Hosting Services Inc; Access denied (ASN-HOSTINGSERVICES-0). ');
$ax += cidrblock($address,'146.185.16.0/20','Hosting Services Inc; Access denied (ASN-HOSTINGSERVICES-1). ');


// Awareness Software Limited
// AS34931 (updated 2016.05.30)
$ax += cidrblock($address,'85.159.248.0/21','Awareness Software Limited; Access denied (ASN-AWARENESS-0). ');
$ax += cidrblock($address,'89.28.168.0/21','Awareness Software Limited; Access denied (ASN-AWARENESS-1). ');
$ax += cidrblock($address,'149.255.56.0/21','Awareness Software Limited; Access denied (ASN-AWARENESS-2). ');
$ax += cidrblock($address,'194.9.32.0/23','Awareness Software Limited; Access denied (ASN-AWARENESS-3). ');


// Incero LLC
// AS54540 (updated 2016.05.30)
$ax += cidrblock($address,'23.29.112.0/20','Incero LLC; Access denied (ASN-INCERO-00). ');
$ax += cidrblock($address,'23.92.65.0/24','Incero LLC; Access denied (ASN-INCERO-01). ');
$ax += cidrblock($address,'23.92.66.0/23','Incero LLC; Access denied (ASN-INCERO-02). ');
$ax += cidrblock($address,'23.92.68.0/22','Incero LLC; Access denied (ASN-INCERO-03). ');
$ax += cidrblock($address,'23.92.72.0/22','Incero LLC; Access denied (ASN-INCERO-04). ');
$ax += cidrblock($address,'23.92.76.0/23','Incero LLC; Access denied (ASN-INCERO-05). ');
$ax += cidrblock($address,'23.92.79.0/24','Incero LLC; Access denied (ASN-INCERO-06). ');
$ax += cidrblock($address,'23.227.160.0/21','Incero LLC; Access denied (ASN-INCERO-07). ');
$ax += cidrblock($address,'23.227.168.0/22','Incero LLC; Access denied (ASN-INCERO-08). ');
$ax += cidrblock($address,'23.227.172.0/23','Incero LLC; Access denied (ASN-INCERO-09). ');
$ax += cidrblock($address,'23.227.175.0/24','Incero LLC; Access denied (ASN-INCERO-10). ');
$ax += cidrblock($address,'23.227.176.0/20','Incero LLC; Access denied (ASN-INCERO-11). ');
$ax += cidrblock($address,'45.59.121.0/24','Incero LLC; Access denied (ASN-INCERO-12). ');
$ax += cidrblock($address,'63.142.250.0/23','Incero LLC; Access denied (ASN-INCERO-13). ');
$ax += cidrblock($address,'63.142.252.0/22','Incero LLC; Access denied (ASN-INCERO-14). ');
$ax += cidrblock($address,'64.140.150.0/23','Incero LLC; Access denied (ASN-INCERO-15). ');
$ax += cidrblock($address,'64.140.152.0/22','Incero LLC; Access denied (ASN-INCERO-16). ');
$ax += cidrblock($address,'64.140.157.0/24','Incero LLC; Access denied (ASN-INCERO-17). ');
$ax += cidrblock($address,'64.140.158.0/23','Incero LLC; Access denied (ASN-INCERO-18). ');
$ax += cidrblock($address,'66.11.119.0/24','Incero LLC; Access denied (ASN-INCERO-19). ');
$ax += cidrblock($address,'66.11.122.0/24','Incero LLC; Access denied (ASN-INCERO-20). ');
$ax += cidrblock($address,'104.193.224.0/22','Incero LLC; Access denied (ASN-INCERO-21). ');
$ax += cidrblock($address,'104.237.0.0/21','Incero LLC; Access denied (ASN-INCERO-22). ');
$ax += cidrblock($address,'104.251.212.0/22','Incero LLC; Access denied (ASN-INCERO-23). ');
$ax += cidrblock($address,'104.251.216.0/22','Incero LLC; Access denied (ASN-INCERO-24). ');
$ax += cidrblock($address,'104.251.222.0/23','Incero LLC; Access denied (ASN-INCERO-25). ');
$ax += cidrblock($address,'104.255.229.0/24','Incero LLC; Access denied (ASN-INCERO-26). ');
$ax += cidrblock($address,'104.255.231.0/24','Incero LLC; Access denied (ASN-INCERO-27). ');
$ax += cidrblock($address,'107.155.64.0/23','Incero LLC; Access denied (ASN-INCERO-28). ');
$ax += cidrblock($address,'107.155.66.0/24','Incero LLC; Access denied (ASN-INCERO-29). ');
$ax += cidrblock($address,'107.155.68.0/22','Incero LLC; Access denied (ASN-INCERO-30). ');
$ax += cidrblock($address,'107.155.72.0/21','Incero LLC; Access denied (ASN-INCERO-31). ');
$ax += cidrblock($address,'107.155.80.0/20','Incero LLC; Access denied (ASN-INCERO-32). ');
$ax += cidrblock($address,'107.155.96.0/20','Incero LLC; Access denied (ASN-INCERO-33). ');
$ax += cidrblock($address,'107.155.112.0/21','Incero LLC; Access denied (ASN-INCERO-34). ');
$ax += cidrblock($address,'107.155.120.0/24','Incero LLC; Access denied (ASN-INCERO-35). ');
$ax += cidrblock($address,'107.155.122.0/23','Incero LLC; Access denied (ASN-INCERO-36). ');
$ax += cidrblock($address,'107.155.124.0/22','Incero LLC; Access denied (ASN-INCERO-37). ');
$ax += cidrblock($address,'144.168.32.0/22','Incero LLC; Access denied (ASN-INCERO-38). ');
$ax += cidrblock($address,'144.168.37.0/24','Incero LLC; Access denied (ASN-INCERO-39). ');
$ax += cidrblock($address,'144.168.38.0/23','Incero LLC; Access denied (ASN-INCERO-40). ');
$ax += cidrblock($address,'144.168.40.0/24','Incero LLC; Access denied (ASN-INCERO-41). ');
$ax += cidrblock($address,'144.168.43.0/24','Incero LLC; Access denied (ASN-INCERO-42). ');
$ax += cidrblock($address,'144.168.44.0/22','Incero LLC; Access denied (ASN-INCERO-43). ');
$ax += cidrblock($address,'154.16.81.0/24','Incero LLC; Access denied (ASN-INCERO-44). ');
$ax += cidrblock($address,'154.16.83.0/24','Incero LLC; Access denied (ASN-INCERO-45). ');
$ax += cidrblock($address,'162.212.56.0/22','Incero LLC; Access denied (ASN-INCERO-46). ');
$ax += cidrblock($address,'162.213.192.0/21','Incero LLC; Access denied (ASN-INCERO-47). ');
$ax += cidrblock($address,'162.250.144.0/23','Incero LLC; Access denied (ASN-INCERO-48). ');
$ax += cidrblock($address,'162.250.232.0/22','Incero LLC; Access denied (ASN-INCERO-49). ');
$ax += cidrblock($address,'172.110.4.0/22','Incero LLC; Access denied (ASN-INCERO-50). ');
$ax += cidrblock($address,'172.110.8.0/24','Incero LLC; Access denied (ASN-INCERO-51). ');
$ax += cidrblock($address,'172.110.11.0/24','Incero LLC; Access denied (ASN-INCERO-52). ');
$ax += cidrblock($address,'172.110.13.0/24','Incero LLC; Access denied (ASN-INCERO-53). ');
$ax += cidrblock($address,'172.110.15.0/24','Incero LLC; Access denied (ASN-INCERO-54). ');
$ax += cidrblock($address,'172.110.17.0/24','Incero LLC; Access denied (ASN-INCERO-55). ');
$ax += cidrblock($address,'172.110.18.0/23','Incero LLC; Access denied (ASN-INCERO-56). ');
$ax += cidrblock($address,'172.110.20.0/22','Incero LLC; Access denied (ASN-INCERO-57). ');
$ax += cidrblock($address,'172.110.25.0/24','Incero LLC; Access denied (ASN-INCERO-58). ');
$ax += cidrblock($address,'172.110.27.0/24','Incero LLC; Access denied (ASN-INCERO-59). ');
$ax += cidrblock($address,'172.110.28.0/22','Incero LLC; Access denied (ASN-INCERO-60). ');
$ax += cidrblock($address,'192.211.48.0/20','Incero LLC; Access denied (ASN-INCERO-61). ');
$ax += cidrblock($address,'194.71.169.0/24','Incero LLC; Access denied (ASN-INCERO-62). ');
$ax += cidrblock($address,'199.181.238.0/23','Incero LLC; Access denied (ASN-INCERO-63). ');


// Linode, LLC
// AS63949 (updated 2016.05.30)
$ax += cidrblock($address,'23.92.16.0/21','Linode, LLC; Access denied (ASN-LINODE-00). ');
$ax += cidrblock($address,'23.92.24.0/22','Linode, LLC; Access denied (ASN-LINODE-01). ');
$ax += cidrblock($address,'23.239.0.0/20','Linode, LLC; Access denied (ASN-LINODE-02). ');
$ax += cidrblock($address,'23.239.20.0/22','Linode, LLC; Access denied (ASN-LINODE-03). ');
$ax += cidrblock($address,'45.33.32.0/19','Linode, LLC; Access denied (ASN-LINODE-04). ');
$ax += cidrblock($address,'45.33.64.0/19','Linode, LLC; Access denied (ASN-LINODE-05). ');
$ax += cidrblock($address,'45.33.104.0/21','Linode, LLC; Access denied (ASN-LINODE-06). ');
$ax += cidrblock($address,'45.56.80.0/20','Linode, LLC; Access denied (ASN-LINODE-07). ');
$ax += cidrblock($address,'45.56.96.0/20','Linode, LLC; Access denied (ASN-LINODE-08). ');
$ax += cidrblock($address,'45.79.64.0/18','Linode, LLC; Access denied (ASN-LINODE-09). ');
$ax += cidrblock($address,'45.79.128.0/18','Linode, LLC; Access denied (ASN-LINODE-10). ');
$ax += cidrblock($address,'45.79.224.0/19','Linode, LLC; Access denied (ASN-LINODE-11). ');
$ax += cidrblock($address,'45.118.132.0/22','Linode, LLC; Access denied (ASN-LINODE-12). ');
$ax += cidrblock($address,'50.116.0.0/20','Linode, LLC; Access denied (ASN-LINODE-13). ');
$ax += cidrblock($address,'50.116.48.0/20','Linode, LLC; Access denied (ASN-LINODE-14). ');
$ax += cidrblock($address,'64.62.190.0/24','Linode, LLC; Access denied (ASN-LINODE-15). ');
$ax += cidrblock($address,'64.62.228.0/24','Linode, LLC; Access denied (ASN-LINODE-16). ');
$ax += cidrblock($address,'64.62.231.0/24','Linode, LLC; Access denied (ASN-LINODE-17). ');
$ax += cidrblock($address,'64.71.152.0/24','Linode, LLC; Access denied (ASN-LINODE-18). ');
$ax += cidrblock($address,'65.19.178.0/24','Linode, LLC; Access denied (ASN-LINODE-19). ');
$ax += cidrblock($address,'65.49.60.0/24','Linode, LLC; Access denied (ASN-LINODE-20). ');
$ax += cidrblock($address,'66.29.91.0/24','Linode, LLC; Access denied (ASN-LINODE-21). ');
$ax += cidrblock($address,'66.160.141.0/24','Linode, LLC; Access denied (ASN-LINODE-22). ');
$ax += cidrblock($address,'66.175.208.0/20','Linode, LLC; Access denied (ASN-LINODE-23). ');
$ax += cidrblock($address,'66.220.1.0/24','Linode, LLC; Access denied (ASN-LINODE-24). ');
$ax += cidrblock($address,'66.228.32.0/20','Linode, LLC; Access denied (ASN-LINODE-25). ');
$ax += cidrblock($address,'66.246.75.0/24','Linode, LLC; Access denied (ASN-LINODE-26). ');
$ax += cidrblock($address,'66.246.76.0/24','Linode, LLC; Access denied (ASN-LINODE-27). ');
$ax += cidrblock($address,'66.246.138.0/24','Linode, LLC; Access denied (ASN-LINODE-28). ');
$ax += cidrblock($address,'69.164.208.0/20','Linode, LLC; Access denied (ASN-LINODE-29). ');
$ax += cidrblock($address,'70.47.152.0/21','Linode, LLC; Access denied (ASN-LINODE-30). ');
$ax += cidrblock($address,'74.82.2.0/23','Linode, LLC; Access denied (ASN-LINODE-31). ');
$ax += cidrblock($address,'74.82.5.0/24','Linode, LLC; Access denied (ASN-LINODE-32). ');
$ax += cidrblock($address,'74.207.240.0/20','Linode, LLC; Access denied (ASN-LINODE-33). ');
$ax += cidrblock($address,'85.90.244.0/22','Linode, LLC; Access denied (ASN-LINODE-34). ');
$ax += cidrblock($address,'96.126.96.0/20','Linode, LLC; Access denied (ASN-LINODE-35). ');
$ax += cidrblock($address,'97.107.128.0/20','Linode, LLC; Access denied (ASN-LINODE-36). ');
$ax += cidrblock($address,'103.3.60.0/22','Linode, LLC; Access denied (ASN-LINODE-37). ');
$ax += cidrblock($address,'104.200.24.0/21','Linode, LLC; Access denied (ASN-LINODE-38). ');
$ax += cidrblock($address,'104.237.144.0/20','Linode, LLC; Access denied (ASN-LINODE-39). ');
$ax += cidrblock($address,'139.162.0.0/18','Linode, LLC; Access denied (ASN-LINODE-40). ');
$ax += cidrblock($address,'139.162.128.0/18','Linode, LLC; Access denied (ASN-LINODE-41). ');
$ax += cidrblock($address,'162.216.16.0/22','Linode, LLC; Access denied (ASN-LINODE-42). ');
$ax += cidrblock($address,'173.230.144.0/20','Linode, LLC; Access denied (ASN-LINODE-43). ');
$ax += cidrblock($address,'173.255.208.0/20','Linode, LLC; Access denied (ASN-LINODE-44). ');
$ax += cidrblock($address,'173.255.224.0/19','Linode, LLC; Access denied (ASN-LINODE-45). ');
$ax += cidrblock($address,'192.81.128.0/21','Linode, LLC; Access denied (ASN-LINODE-46). ');
$ax += cidrblock($address,'192.155.80.0/21','Linode, LLC; Access denied (ASN-LINODE-47). ');
$ax += cidrblock($address,'192.155.88.0/22','Linode, LLC; Access denied (ASN-LINODE-48). ');
$ax += cidrblock($address,'198.74.48.0/22','Linode, LLC; Access denied (ASN-LINODE-49). ');
$ax += cidrblock($address,'198.74.56.0/21','Linode, LLC; Access denied (ASN-LINODE-50). ');
$ax += cidrblock($address,'207.192.68.0/22','Linode, LLC; Access denied (ASN-LINODE-51). ');
$ax += cidrblock($address,'207.192.72.0/22','Linode, LLC; Access denied (ASN-LINODE-52). ');
$ax += cidrblock($address,'209.123.162.0/24','Linode, LLC; Access denied (ASN-LINODE-53). ');
$ax += cidrblock($address,'209.123.234.0/24','Linode, LLC; Access denied (ASN-LINODE-54). ');


// Cyber Wurx LLC
// AS22653 (updated 2016.06.09)
$ax += cidrblock($address,'66.154.0.0/18','Cyber Wurx LLC; Access denied (ASN-CYBERWURX-0). ');
$ax += cidrblock($address,'66.154.64.0/19','Cyber Wurx LLC; Access denied (ASN-CYBERWURX-1). ');
$ax += cidrblock($address,'69.5.112.0/23','Cyber Wurx LLC; Access denied (ASN-CYBERWURX-2). ');
$ax += cidrblock($address,'69.61.0.0/17','Cyber Wurx LLC; Access denied (ASN-CYBERWURX-3). ');
$ax += cidrblock($address,'103.196.26.0/23','Cyber Wurx LLC; Access denied (ASN-CYBERWURX-4). ');
$ax += cidrblock($address,'103.197.90.0/23','Cyber Wurx LLC; Access denied (ASN-CYBERWURX-5). ');
$ax += cidrblock($address,'206.130.88.0/24','Cyber Wurx LLC; Access denied (ASN-CYBERWURX-6). ');
$ax += cidrblock($address,'209.124.64.0/19','Cyber Wurx LLC; Access denied (ASN-CYBERWURX-7). ');
$ax += cidrblock($address,'216.137.144.0/20','Cyber Wurx LLC; Access denied (ASN-CYBERWURX-8). ');
$ax += cidrblock($address,'220.158.192.0/22','Cyber Wurx LLC; Access denied (ASN-CYBERWURX-9). ');


// Host Sailor Ltd.
// AS60117 (updated 2016.06.09)
$ax += cidrblock($address,'131.72.136.0/22','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-00). ');
$ax += cidrblock($address,'138.99.216.0/22','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-01). ');
$ax += cidrblock($address,'158.46.128.0/19','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-02). ');
$ax += cidrblock($address,'161.123.192.0/18','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-03). ');
$ax += cidrblock($address,'178.171.48.0/24','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-04). ');
$ax += cidrblock($address,'178.171.57.0/24','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-05). ');
$ax += cidrblock($address,'178.171.58.0/23','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-06). ');
$ax += cidrblock($address,'178.171.60.0/22','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-07). ');
$ax += cidrblock($address,'185.45.192.0/23','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-08). ');
$ax += cidrblock($address,'185.82.200.0/22','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-09). ');
$ax += cidrblock($address,'185.91.148.0/22','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-10). ');
$ax += cidrblock($address,'185.106.120.0/22','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-11). ');
$ax += cidrblock($address,'185.117.72.0/22','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-12). ');
$ax += cidrblock($address,'185.121.154.0/24','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-13). ');
$ax += cidrblock($address,'185.141.24.0/22','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-14). ');
$ax += cidrblock($address,'185.146.32.0/22','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-15). ');
$ax += cidrblock($address,'212.68.172.0/22','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-16). ');
$ax += cidrblock($address,'212.68.176.0/20','Host Sailor Ltd; Access denied (ASN-HOSTSAILOR-17). ');


// Digital Energy Technologies Chile SpA
// AS61440 (updated 2016.06.09)
$ax += cidrblock($address,'104.243.241.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-000). ');
$ax += cidrblock($address,'138.99.120.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-001). ');
$ax += cidrblock($address,'154.16.19.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-002). ');
$ax += cidrblock($address,'154.16.104.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-003). ');
$ax += cidrblock($address,'154.16.120.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-004). ');
$ax += cidrblock($address,'154.16.133.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-005). ');
$ax += cidrblock($address,'154.16.134.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-006). ');
$ax += cidrblock($address,'154.16.136.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-007). ');
$ax += cidrblock($address,'154.16.140.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-008). ');
$ax += cidrblock($address,'154.16.144.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-009). ');
$ax += cidrblock($address,'154.16.152.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-010). ');
$ax += cidrblock($address,'154.16.160.0/19','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-011). ');
$ax += cidrblock($address,'154.16.192.0/18','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-012). ');
$ax += cidrblock($address,'154.127.48.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-013). ');
$ax += cidrblock($address,'154.127.52.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-014). ');
$ax += cidrblock($address,'172.94.56.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-017). ');
$ax += cidrblock($address,'172.94.117.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-018). ');
$ax += cidrblock($address,'172.111.131.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-019). ');
$ax += cidrblock($address,'172.111.132.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-020). ');
$ax += cidrblock($address,'179.61.195.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-021). ');
$ax += cidrblock($address,'179.61.197.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-022). ');
$ax += cidrblock($address,'179.61.199.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-023). ');
$ax += cidrblock($address,'179.61.205.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-024). ');
$ax += cidrblock($address,'179.61.207.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-025). ');
$ax += cidrblock($address,'179.61.209.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-026). ');
$ax += cidrblock($address,'179.61.211.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-027). ');
$ax += cidrblock($address,'179.61.212.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-028). ');
$ax += cidrblock($address,'179.61.220.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-029). ');
$ax += cidrblock($address,'179.61.222.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-030). ');
$ax += cidrblock($address,'179.61.232.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-031). ');
$ax += cidrblock($address,'179.61.236.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-032). ');
$ax += cidrblock($address,'179.61.238.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-033). ');
$ax += cidrblock($address,'179.61.241.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-034). ');
$ax += cidrblock($address,'179.61.243.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-035). ');
$ax += cidrblock($address,'179.61.244.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-036). ');
$ax += cidrblock($address,'179.61.249.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-037). ');
$ax += cidrblock($address,'179.61.254.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-038). ');
$ax += cidrblock($address,'181.41.192.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-039). ');
$ax += cidrblock($address,'181.41.194.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-040). ');
$ax += cidrblock($address,'181.41.196.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-041). ');
$ax += cidrblock($address,'181.41.200.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-042). ');
$ax += cidrblock($address,'181.41.208.0/20','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-043). ');
$ax += cidrblock($address,'181.214.0.0/19','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-044). ');
$ax += cidrblock($address,'181.214.32.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-045). ');
$ax += cidrblock($address,'181.214.34.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-046). ');
$ax += cidrblock($address,'181.214.36.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-047). ');
$ax += cidrblock($address,'181.214.38.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-048). ');
$ax += cidrblock($address,'181.214.40.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-049). ');
$ax += cidrblock($address,'181.214.48.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-050). ');
$ax += cidrblock($address,'181.214.51.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-051). ');
$ax += cidrblock($address,'181.214.58.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-052). ');
$ax += cidrblock($address,'181.214.60.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-053). ');
$ax += cidrblock($address,'181.214.64.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-054). ');
$ax += cidrblock($address,'181.214.68.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-055). ');
$ax += cidrblock($address,'181.214.245.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-056). ');
$ax += cidrblock($address,'181.214.248.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-057). ');
$ax += cidrblock($address,'181.215.0.0/18','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-058). ');
$ax += cidrblock($address,'181.215.88.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-059). ');
$ax += cidrblock($address,'181.215.96.0/19','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-060). ');
$ax += cidrblock($address,'181.215.128.0/19','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-061). ');
$ax += cidrblock($address,'181.215.160.0/20','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-062). ');
$ax += cidrblock($address,'181.215.192.0/20','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-063). ');
$ax += cidrblock($address,'181.215.240.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-064). ');
$ax += cidrblock($address,'181.215.252.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-065). ');
$ax += cidrblock($address,'191.96.0.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-066). ');
$ax += cidrblock($address,'191.96.8.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-067). ');
$ax += cidrblock($address,'191.96.13.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-068). ');
$ax += cidrblock($address,'191.96.15.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-069). ');
$ax += cidrblock($address,'191.96.16.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-070). ');
$ax += cidrblock($address,'191.96.20.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-071). ');
$ax += cidrblock($address,'191.96.22.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-072). ');
$ax += cidrblock($address,'191.96.24.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-073). ');
$ax += cidrblock($address,'191.96.26.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-074). ');
$ax += cidrblock($address,'191.96.28.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-075). ');
$ax += cidrblock($address,'191.96.32.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-076). ');
$ax += cidrblock($address,'191.96.62.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-077). ');
$ax += cidrblock($address,'191.96.64.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-078). ');
$ax += cidrblock($address,'191.96.68.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-079). ');
$ax += cidrblock($address,'191.96.92.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-080). ');
$ax += cidrblock($address,'191.96.98.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-081). ');
$ax += cidrblock($address,'191.96.112.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-082). ');
$ax += cidrblock($address,'191.96.122.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-083). ');
$ax += cidrblock($address,'191.96.128.0/18','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-084). ');
$ax += cidrblock($address,'191.96.192.0/20','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-085). ');
$ax += cidrblock($address,'191.96.208.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-086). ');
$ax += cidrblock($address,'191.96.215.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-087). ');
$ax += cidrblock($address,'191.96.216.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-088). ');
$ax += cidrblock($address,'191.96.224.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-089). ');
$ax += cidrblock($address,'191.96.228.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-090). ');
$ax += cidrblock($address,'191.96.230.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-091). ');
$ax += cidrblock($address,'191.96.232.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-092). ');
$ax += cidrblock($address,'191.96.244.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-093). ');
$ax += cidrblock($address,'191.96.248.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-094). ');
$ax += cidrblock($address,'191.101.0.0/20','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-095). ');
$ax += cidrblock($address,'191.101.18.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-096). ');
$ax += cidrblock($address,'191.101.32.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-097). ');
$ax += cidrblock($address,'191.101.48.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-098). ');
$ax += cidrblock($address,'191.101.56.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-99). ');
$ax += cidrblock($address,'191.101.62.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-100). ');
$ax += cidrblock($address,'191.101.136.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-101). ');
$ax += cidrblock($address,'191.101.144.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-102). ');
$ax += cidrblock($address,'191.101.152.0/21','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-103). ');
$ax += cidrblock($address,'191.101.160.0/20','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-104). ');
$ax += cidrblock($address,'191.101.190.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-105). ');
$ax += cidrblock($address,'191.101.208.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-106). ');
$ax += cidrblock($address,'191.101.224.0/20','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-107). ');
$ax += cidrblock($address,'191.101.241.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-108). ');
$ax += cidrblock($address,'191.101.244.0/24','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-109). ');
$ax += cidrblock($address,'191.101.246.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-110). ');
$ax += cidrblock($address,'191.101.248.0/23','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-111). ');
$ax += cidrblock($address,'191.101.252.0/22','Digital Energy Technologies Chile SpA; Access denied (ASN-DETECH-112). ');


// Host Europe GmbH
// AS20738 (updated 2016.06.09)
$ax += cidrblock($address,'37.122.208.0/21','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-00). ');
$ax += cidrblock($address,'46.32.224.0/19','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-01). ');
$ax += cidrblock($address,'79.170.40.0/21','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-02). ');
$ax += cidrblock($address,'80.90.192.0/20','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-03). ');
$ax += cidrblock($address,'81.21.64.0/20','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-04). ');
$ax += cidrblock($address,'91.109.0.0/20','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-05). ');
$ax += cidrblock($address,'92.60.112.0/20','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-06). ');
$ax += cidrblock($address,'94.136.32.0/19','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-07). ');
$ax += cidrblock($address,'95.131.64.0/21','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-08). ');
$ax += cidrblock($address,'109.104.64.0/19','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-09). ');
$ax += cidrblock($address,'176.32.224.0/21','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-10). ');
$ax += cidrblock($address,'212.48.64.0/19','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-11). ');
$ax += cidrblock($address,'212.67.192.0/19','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-12). ');
$ax += cidrblock($address,'217.8.240.0/20','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-13). ');
$ax += cidrblock($address,'217.199.160.0/19','Host Europe GmbH; Access denied (ASN-HOSTEUROPE-14). ');


// *More, and smaller bad networks to avoid...
$ax += cidrblock($address,'70.39.128.0/17','packetexchange is a cloud service, not an access provider. '); //75a
$ax += cidrblock($address,'91.236.74.0/23','ELAN-AS Spamslingers (ELAN-AS). '); //75a
$ax += cidrblock($address,'173.0.0.0/20','ProXPN, anonymous proxy/vpn network (ProXPN). '); // Updated 75a; Checked: 2016.05.26 (Good)
$ax += cidrblock($address,'202.46.32.0/19','ShenZhen Sunrise Technology Co, bot like activity. '); //74a fixed 74c
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
