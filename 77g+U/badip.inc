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

$zbbversion .= ' / BADIP-2016-07+U.3'; // Version number goes here. (product code)-(Year)-(Month)(issue letter)(+U = Unofficial fork, non-mainlined release).(Build number)

// *php 5 fix
global $whyblockout, $ax;

// **START SIGNATURES**

// *IPs and IP Ranges

$ax += cidrblock($address, '194.71.222.0/23', 'ERRSY-NET: Proxy services for scrapers and SEOs (IP-105). '); // Checked: 2016.04.17 (Not sure if valid; New ASN, "BinaryGrid Industries AB"; "ERRSY-NET" no longer listed); AS24668
$ax += cidrblock($address, '203.160.0.0/23', 'Vietnam Junk Mailer/Forum Spammer (Spoofed as 203.160.1.49 localhost!) (IP-069). '); // Updated: 2016.04.17
$ax += iprange($address, '193.200.150.0', '193.200.150.255', 'Anonymizing proxy network, hacker\'s paradise (IP-057). '); // Checked: 2016.04.13 (Good); www.anonymouse.org
$ax += lmatch($address, '78.158.11.226', 'Project Honey Pot rule-breaker, vulnerability scanner (IP-107). '); // Checked: 2016.04.17 (Good); AS43700


// ahbr company limited (updated 2016.04.17)
// AS30938
$ax += cidrblock($address, '5.39.248.0/21', 'Telewings/AHBR, data center and source of spam (ASN-30938-AHBR-00). ');
$ax += cidrblock($address, '5.144.176.0/21', 'Telewings/AHBR, data center and source of spam (ASN-30938-AHBR-01). ');
$ax += cidrblock($address, '5.178.96.0/21', 'Telewings/AHBR, data center and source of spam (ASN-30938-AHBR-02). ');
$ax += cidrblock($address, '5.178.104.0/24', 'Telewings/AHBR, data center and source of spam (ASN-30938-AHBR-03). ');
$ax += cidrblock($address, '5.178.108.0/22', 'Telewings/AHBR, data center and source of spam (ASN-30938-AHBR-04). ');
$ax += cidrblock($address, '31.192.240.0/21', 'Telewings/AHBR, data center and source of spam (ASN-30938-AHBR-05). ');
$ax += cidrblock($address, '185.5.36.0/22', 'Telewings/AHBR, data center and source of spam (ASN-30938-AHBR-06). ');


// Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (updated 2016.04.17)
// AS31815
$ax += cidrblock($address, '64.13.192.0/18', 'Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-31815-MEDIATEMPLE-00). ');
$ax += cidrblock($address, '64.207.128.0/18', 'Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-31815-MEDIATEMPLE-01). ');
$ax += cidrblock($address, '70.32.64.0/18', 'Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-31815-MEDIATEMPLE-02). ');
$ax += cidrblock($address, '72.10.32.0/19', 'Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-31815-MEDIATEMPLE-03). ');
$ax += cidrblock($address, '72.47.192.0/18', 'Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-31815-MEDIATEMPLE-04). ');
$ax += cidrblock($address, '205.186.128.0/18', 'Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-31815-MEDIATEMPLE-05). ');
$ax += cidrblock($address, '216.70.64.0/18', 'Media Temple, Inc. Illegal nameserver response on reverse lookup. Caught scraping (ASN-31815-MEDIATEMPLE-06). ');


// ViaEuropa i Lund AB (updated 2016.04.17)
// AS47155
$ax += cidrblock($address, '93.182.128.0/18', 'Heavy abuse Swedish VPN (ASN-47155-VIAEU-0). ');
$ax += cidrblock($address, '185.123.228.0/22', 'Heavy abuse Swedish VPN (ASN-47155-VIAEU-1). ');


// Quasi Networks LTD (formerly, Ecatel Network) (updated 2016.07.09)
// AS29073
$ax += cidrblock($address, '5.8.61.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-00). ');
$ax += cidrblock($address, '46.243.146.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-01). ');
$ax += cidrblock($address, '46.243.148.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-02). ');
$ax += cidrblock($address, '80.82.64.0/22', 'Quasi Networks LTD (ASN-29073-QUASI-03). ');
$ax += cidrblock($address, '80.82.68.0/23', 'Quasi Networks LTD (ASN-29073-QUASI-04). ');
$ax += cidrblock($address, '80.82.70.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-05). ');
$ax += cidrblock($address, '80.82.76.0/22', 'Quasi Networks LTD (ASN-29073-QUASI-06). ');
$ax += cidrblock($address, '89.248.160.0/21', 'Quasi Networks LTD (ASN-29073-QUASI-07). ');
$ax += cidrblock($address, '89.248.168.0/22', 'Quasi Networks LTD (ASN-29073-QUASI-08). ');
$ax += cidrblock($address, '89.248.172.0/23', 'Quasi Networks LTD (ASN-29073-QUASI-09). ');
$ax += cidrblock($address, '89.248.174.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-10). ');
$ax += cidrblock($address, '93.174.88.0/21', 'Quasi Networks LTD (ASN-29073-QUASI-11). ');
$ax += cidrblock($address, '94.102.48.0/20', 'Quasi Networks LTD (ASN-29073-QUASI-12). ');
$ax += cidrblock($address, '172.94.9.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-13). ');
$ax += cidrblock($address, '185.56.82.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-14). ');
$ax += cidrblock($address, '188.72.103.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-15). ');
$ax += cidrblock($address, '188.72.106.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-16). ');
$ax += cidrblock($address, '188.72.117.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-17). ');
$ax += cidrblock($address, '191.96.249.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-18). ');
$ax += cidrblock($address, '213.184.105.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-19). ');
$ax += cidrblock($address, '213.184.113.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-20). ');
$ax += cidrblock($address, '213.184.115.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-21). ');
$ax += cidrblock($address, '213.184.117.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-22). ');
$ax += cidrblock($address, '213.184.124.0/24', 'Quasi Networks LTD (ASN-29073-QUASI-23). ');


// Leaseweb Network (updated 2016.03.15)
// AS16265, AS28753, AS30633, AS60781
$ax += cidrblock($address, '5.44.144.0/22', 'Leaseweb Network (AS-LEASEWEB-000). ');
$ax += cidrblock($address, '5.61.32.0/20', 'Leaseweb Network (AS-LEASEWEB-001). ');
$ax += cidrblock($address, '5.79.64.0/18', 'Leaseweb Network (AS-LEASEWEB-002). ');
$ax += cidrblock($address, '31.31.32.0/21', 'Leaseweb Network (AS-LEASEWEB-003). ');
$ax += cidrblock($address, '31.186.168.0/22', 'Leaseweb Network (AS-LEASEWEB-004). ');
$ax += cidrblock($address, '31.186.172.0/23', 'Leaseweb Network (AS-LEASEWEB-005). ');
$ax += cidrblock($address, '37.1.144.0/22', 'Leaseweb Network (AS-LEASEWEB-006). ');
$ax += cidrblock($address, '37.1.192.0/21', 'Leaseweb Network (AS-LEASEWEB-007). ');
$ax += cidrblock($address, '37.1.216.0/21', 'Leaseweb Network (AS-LEASEWEB-008). ');
$ax += cidrblock($address, '37.48.64.0/18', 'Leaseweb Network (AS-LEASEWEB-009). ');
$ax += cidrblock($address, '37.58.48.0/20', 'Leaseweb Network (AS-LEASEWEB-010). ');
$ax += cidrblock($address, '37.75.152.0/21', 'Leaseweb Network (AS-LEASEWEB-011). ');
$ax += cidrblock($address, '41.191.215.0/24', 'Leaseweb Network (AS-LEASEWEB-012). ');
$ax += cidrblock($address, '46.17.0.0/21', 'Leaseweb Network (AS-LEASEWEB-013). ');
$ax += cidrblock($address, '46.17.14.0/23', 'Leaseweb Network (AS-LEASEWEB-014). ');
$ax += cidrblock($address, '46.102.240.0/21', 'Leaseweb Network (AS-LEASEWEB-015). ');
$ax += cidrblock($address, '46.165.192.0/18', 'Leaseweb Network (AS-LEASEWEB-016). ');
$ax += cidrblock($address, '46.182.120.0/21', 'Leaseweb Network (AS-LEASEWEB-017). ');
$ax += cidrblock($address, '46.182.176.0/21', 'Leaseweb Network (AS-LEASEWEB-018). ');
$ax += cidrblock($address, '46.243.0.0/21', 'Leaseweb Network (AS-LEASEWEB-019). ');
$ax += cidrblock($address, '62.84.240.0/22', 'Leaseweb Network (AS-LEASEWEB-020). ');
$ax += cidrblock($address, '62.212.64.0/19', 'Leaseweb Network (AS-LEASEWEB-021). ');
$ax += cidrblock($address, '77.81.240.0/21', 'Leaseweb Network (AS-LEASEWEB-022). ');
$ax += cidrblock($address, '77.221.144.0/22', 'Leaseweb Network (AS-LEASEWEB-023). ');
$ax += cidrblock($address, '77.223.144.0/23', 'Leaseweb Network (AS-LEASEWEB-024). ');
$ax += cidrblock($address, '77.235.32.0/19', 'Leaseweb Network (AS-LEASEWEB-025). ');
$ax += cidrblock($address, '78.30.43.0/24', 'Leaseweb Network (AS-LEASEWEB-026). ');
$ax += cidrblock($address, '78.159.96.0/19', 'Leaseweb Network (AS-LEASEWEB-027). ');
$ax += cidrblock($address, '79.137.128.0/24', 'Leaseweb Network (AS-LEASEWEB-028). ');
$ax += cidrblock($address, '79.172.198.0/24', 'Leaseweb Network (AS-LEASEWEB-029). ');
$ax += cidrblock($address, '80.65.32.0/20', 'Leaseweb Network (AS-LEASEWEB-030). ');
$ax += cidrblock($address, '80.253.248.0/22', 'Leaseweb Network (AS-LEASEWEB-031). ');
$ax += cidrblock($address, '81.161.99.0/24', 'Leaseweb Network (AS-LEASEWEB-032). ');
$ax += cidrblock($address, '82.150.152.0/24', 'Leaseweb Network (AS-LEASEWEB-033). ');
$ax += cidrblock($address, '82.192.64.0/19', 'Leaseweb Network (AS-LEASEWEB-034). ');
$ax += cidrblock($address, '83.149.64.0/18', 'Leaseweb Network (AS-LEASEWEB-035). ');
$ax += cidrblock($address, '83.223.32.0/20', 'Leaseweb Network (AS-LEASEWEB-036). ');
$ax += cidrblock($address, '84.16.224.0/19', 'Leaseweb Network (AS-LEASEWEB-037). ');
$ax += cidrblock($address, '84.247.62.0/24', 'Leaseweb Network (AS-LEASEWEB-038). ');
$ax += cidrblock($address, '85.17.0.0/16', 'Leaseweb Network (AS-LEASEWEB-039). ');
$ax += cidrblock($address, '85.234.224.0/20', 'Leaseweb Network (AS-LEASEWEB-040). ');
$ax += cidrblock($address, '87.236.96.0/21', 'Leaseweb Network (AS-LEASEWEB-041). ');
$ax += cidrblock($address, '89.34.27.0/24', 'Leaseweb Network (AS-LEASEWEB-042). ');
$ax += cidrblock($address, '89.36.36.0/24', 'Leaseweb Network (AS-LEASEWEB-043). ');
$ax += cidrblock($address, '89.38.38.0/24', 'Leaseweb Network (AS-LEASEWEB-044). ');
$ax += cidrblock($address, '89.46.46.0/24', 'Leaseweb Network (AS-LEASEWEB-045). ');
$ax += cidrblock($address, '89.144.17.0/24', 'Leaseweb Network (AS-LEASEWEB-046). ');
$ax += cidrblock($address, '89.144.18.0/24', 'Leaseweb Network (AS-LEASEWEB-047). ');
$ax += cidrblock($address, '89.149.192.0/18', 'Leaseweb Network (AS-LEASEWEB-048). ');
$ax += cidrblock($address, '89.255.254.0/23', 'Leaseweb Network (AS-LEASEWEB-049). ');
$ax += cidrblock($address, '91.109.16.0/20', 'Leaseweb Network (AS-LEASEWEB-050). ');
$ax += cidrblock($address, '91.184.46.0/23', 'Leaseweb Network (AS-LEASEWEB-051). ');
$ax += cidrblock($address, '91.184.48.0/20', 'Leaseweb Network (AS-LEASEWEB-052). ');
$ax += cidrblock($address, '91.195.118.0/23', 'Leaseweb Network (AS-LEASEWEB-053). ');
$ax += cidrblock($address, '92.114.86.0/23', 'Leaseweb Network (AS-LEASEWEB-054). ');
$ax += cidrblock($address, '93.176.128.0/23', 'Leaseweb Network (AS-LEASEWEB-055). ');
$ax += cidrblock($address, '93.190.220.0/22', 'Leaseweb Network (AS-LEASEWEB-056). ');
$ax += cidrblock($address, '94.75.192.0/18', 'Leaseweb Network (AS-LEASEWEB-057). ');
$ax += cidrblock($address, '94.177.98.0/23', 'Leaseweb Network (AS-LEASEWEB-058). ');
$ax += cidrblock($address, '94.177.146.0/24', 'Leaseweb Network (AS-LEASEWEB-059). ');
$ax += cidrblock($address, '95.168.160.0/19', 'Leaseweb Network (AS-LEASEWEB-060). ');
$ax += cidrblock($address, '95.211.0.0/16', 'Leaseweb Network (AS-LEASEWEB-061). ');
$ax += cidrblock($address, '103.41.176.0/23', 'Leaseweb Network (AS-LEASEWEB-062). ');
$ax += cidrblock($address, '108.59.0.0/20', 'Leaseweb Network (AS-LEASEWEB-063). ');
$ax += cidrblock($address, '109.69.56.0/22', 'Leaseweb Network (AS-LEASEWEB-064). ');
$ax += cidrblock($address, '109.70.0.0/21', 'Leaseweb Network (AS-LEASEWEB-065). ');
$ax += cidrblock($address, '109.70.9.0/24', 'Leaseweb Network (AS-LEASEWEB-066). ');
$ax += cidrblock($address, '109.70.10.0/23', 'Leaseweb Network (AS-LEASEWEB-067). ');
$ax += cidrblock($address, '109.70.12.0/22', 'Leaseweb Network (AS-LEASEWEB-068). ');
$ax += cidrblock($address, '109.120.175.0/24', 'Leaseweb Network (AS-LEASEWEB-069). ');
$ax += cidrblock($address, '109.120.176.0/24', 'Leaseweb Network (AS-LEASEWEB-070). ');
$ax += cidrblock($address, '109.120.180.0/22', 'Leaseweb Network (AS-LEASEWEB-071). ');
$ax += cidrblock($address, '128.140.216.0/22', 'Leaseweb Network (AS-LEASEWEB-072). ');
$ax += cidrblock($address, '145.255.128.0/21', 'Leaseweb Network (AS-LEASEWEB-073). ');
$ax += cidrblock($address, '154.16.156.0/23', 'Leaseweb Network (AS-LEASEWEB-074). ');
$ax += cidrblock($address, '159.255.192.0/22', 'Leaseweb Network (AS-LEASEWEB-075). ');
$ax += cidrblock($address, '162.210.192.0/21', 'Leaseweb Network (AS-LEASEWEB-076). ');
$ax += cidrblock($address, '162.219.212.0/22', 'Leaseweb Network (AS-LEASEWEB-077). ');
$ax += cidrblock($address, '178.18.20.0/22', 'Leaseweb Network (AS-LEASEWEB-078). ');
$ax += cidrblock($address, '178.18.24.0/23', 'Leaseweb Network (AS-LEASEWEB-079). ');
$ax += cidrblock($address, '178.18.30.0/23', 'Leaseweb Network (AS-LEASEWEB-080). ');
$ax += cidrblock($address, '178.162.128.0/17', 'Leaseweb Network (AS-LEASEWEB-081). ');
$ax += cidrblock($address, '178.250.16.0/24', 'Leaseweb Network (AS-LEASEWEB-082). ');
$ax += cidrblock($address, '178.250.18.0/24', 'Leaseweb Network (AS-LEASEWEB-083). ');
$ax += cidrblock($address, '181.214.35.0/24', 'Leaseweb Network (AS-LEASEWEB-084). ');
$ax += cidrblock($address, '181.214.50.0/24', 'Leaseweb Network (AS-LEASEWEB-085). ');
$ax += cidrblock($address, '185.16.84.0/24', 'Leaseweb Network (AS-LEASEWEB-086). ');
$ax += cidrblock($address, '185.17.32.0/22', 'Leaseweb Network (AS-LEASEWEB-087). ');
$ax += cidrblock($address, '185.17.120.0/22', 'Leaseweb Network (AS-LEASEWEB-088). ');
$ax += cidrblock($address, '185.17.144.0/22', 'Leaseweb Network (AS-LEASEWEB-089). ');
$ax += cidrblock($address, '185.17.184.0/22', 'Leaseweb Network (AS-LEASEWEB-090). ');
$ax += cidrblock($address, '185.22.4.0/22', 'Leaseweb Network (AS-LEASEWEB-091). ');
$ax += cidrblock($address, '185.24.172.0/23', 'Leaseweb Network (AS-LEASEWEB-092). ');
$ax += cidrblock($address, '185.24.174.0/24', 'Leaseweb Network (AS-LEASEWEB-093). ');
$ax += cidrblock($address, '185.24.240.0/24', 'Leaseweb Network (AS-LEASEWEB-094). ');
$ax += cidrblock($address, '185.27.140.0/22', 'Leaseweb Network (AS-LEASEWEB-095). ');
$ax += cidrblock($address, '185.28.68.0/22', 'Leaseweb Network (AS-LEASEWEB-096). ');
$ax += cidrblock($address, '185.30.232.0/22', 'Leaseweb Network (AS-LEASEWEB-097). ');
$ax += cidrblock($address, '185.32.14.0/23', 'Leaseweb Network (AS-LEASEWEB-098). ');
$ax += cidrblock($address, '185.34.68.0/22', 'Leaseweb Network (AS-LEASEWEB-099). ');
$ax += cidrblock($address, '185.38.185.0/24', 'Leaseweb Network (AS-LEASEWEB-100). ');
$ax += cidrblock($address, '185.38.187.0/24', 'Leaseweb Network (AS-LEASEWEB-101). ');
$ax += cidrblock($address, '185.44.22.0/23', 'Leaseweb Network (AS-LEASEWEB-102). ');
$ax += cidrblock($address, '185.46.180.0/23', 'Leaseweb Network (AS-LEASEWEB-103). ');
$ax += cidrblock($address, '185.46.232.0/24', 'Leaseweb Network (AS-LEASEWEB-104). ');
$ax += cidrblock($address, '185.49.68.0/22', 'Leaseweb Network (AS-LEASEWEB-105). ');
$ax += cidrblock($address, '185.51.192.0/22', 'Leaseweb Network (AS-LEASEWEB-106). ');
$ax += cidrblock($address, '185.63.56.0/24', 'Leaseweb Network (AS-LEASEWEB-107). ');
$ax += cidrblock($address, '185.63.152.0/22', 'Leaseweb Network (AS-LEASEWEB-108). ');
$ax += cidrblock($address, '185.71.60.0/22', 'Leaseweb Network (AS-LEASEWEB-109). ');
$ax += cidrblock($address, '185.71.224.0/22', 'Leaseweb Network (AS-LEASEWEB-110). ');
$ax += cidrblock($address, '185.72.178.0/23', 'Leaseweb Network (AS-LEASEWEB-111). ');
$ax += cidrblock($address, '185.73.32.0/23', 'Leaseweb Network (AS-LEASEWEB-112). ');
$ax += cidrblock($address, '185.79.40.0/22', 'Leaseweb Network (AS-LEASEWEB-113). ');
$ax += cidrblock($address, '185.83.96.0/22', 'Leaseweb Network (AS-LEASEWEB-114). ');
$ax += cidrblock($address, '185.85.160.0/22', 'Leaseweb Network (AS-LEASEWEB-115). ');
$ax += cidrblock($address, '185.85.240.0/22', 'Leaseweb Network (AS-LEASEWEB-116). ');
$ax += cidrblock($address, '185.89.4.0/22', 'Leaseweb Network (AS-LEASEWEB-117). ');
$ax += cidrblock($address, '185.95.164.0/22', 'Leaseweb Network (AS-LEASEWEB-118). ');
$ax += cidrblock($address, '185.96.140.0/24', 'Leaseweb Network (AS-LEASEWEB-119). ');
$ax += cidrblock($address, '185.99.96.0/22', 'Leaseweb Network (AS-LEASEWEB-120). ');
$ax += cidrblock($address, '185.101.107.0/24', 'Leaseweb Network (AS-LEASEWEB-121). ');
$ax += cidrblock($address, '185.102.27.0/24', 'Leaseweb Network (AS-LEASEWEB-122). ');
$ax += cidrblock($address, '185.108.84.0/23', 'Leaseweb Network (AS-LEASEWEB-123). ');
$ax += cidrblock($address, '185.113.88.0/22', 'Leaseweb Network (AS-LEASEWEB-124). ');
$ax += cidrblock($address, '185.114.60.0/22', 'Leaseweb Network (AS-LEASEWEB-125). ');
$ax += cidrblock($address, '185.114.140.0/22', 'Leaseweb Network (AS-LEASEWEB-126). ');
$ax += cidrblock($address, '185.117.228.0/22', 'Leaseweb Network (AS-LEASEWEB-127). ');
$ax += cidrblock($address, '185.122.164.0/22', 'Leaseweb Network (AS-LEASEWEB-128). ');
$ax += cidrblock($address, '185.122.168.0/22', 'Leaseweb Network (AS-LEASEWEB-129). ');
$ax += cidrblock($address, '185.124.200.0/22', 'Leaseweb Network (AS-LEASEWEB-130). ');
$ax += cidrblock($address, '185.126.64.0/22', 'Leaseweb Network (AS-LEASEWEB-131). ');
$ax += cidrblock($address, '185.131.24.0/22', 'Leaseweb Network (AS-LEASEWEB-132). ');
$ax += cidrblock($address, '185.142.100.0/22', 'Leaseweb Network (AS-LEASEWEB-133). ');
$ax += cidrblock($address, '188.72.192.0/18', 'Leaseweb Network (AS-LEASEWEB-134). ');
$ax += cidrblock($address, '188.208.38.0/23', 'Leaseweb Network (AS-LEASEWEB-135). ');
$ax += cidrblock($address, '188.211.239.0/24', 'Leaseweb Network (AS-LEASEWEB-136). ');
$ax += cidrblock($address, '188.215.35.0/24', 'Leaseweb Network (AS-LEASEWEB-137). ');
$ax += cidrblock($address, '188.241.65.0/24', 'Leaseweb Network (AS-LEASEWEB-138). ');
$ax += cidrblock($address, '190.105.193.0/24', 'Leaseweb Network (AS-LEASEWEB-139). ');
$ax += cidrblock($address, '190.105.195.0/24', 'Leaseweb Network (AS-LEASEWEB-140). ');
$ax += cidrblock($address, '191.96.112.0/24', 'Leaseweb Network (AS-LEASEWEB-141). ');
$ax += cidrblock($address, '191.96.115.0/24', 'Leaseweb Network (AS-LEASEWEB-142). ');
$ax += cidrblock($address, '191.101.16.0/24', 'Leaseweb Network (AS-LEASEWEB-143). ');
$ax += cidrblock($address, '192.36.61.0/24', 'Leaseweb Network (AS-LEASEWEB-144). ');
$ax += cidrblock($address, '192.96.200.0/21', 'Leaseweb Network (AS-LEASEWEB-145). ');
$ax += cidrblock($address, '193.27.72.0/23', 'Leaseweb Network (AS-LEASEWEB-146). ');
$ax += cidrblock($address, '193.43.92.0/24', 'Leaseweb Network (AS-LEASEWEB-147). ');
$ax += cidrblock($address, '193.104.219.0/24', 'Leaseweb Network (AS-LEASEWEB-148). ');
$ax += cidrblock($address, '193.239.4.0/22', 'Leaseweb Network (AS-LEASEWEB-149). ');
$ax += cidrblock($address, '193.242.108.0/24', 'Leaseweb Network (AS-LEASEWEB-150). ');
$ax += cidrblock($address, '194.0.197.0/24', 'Leaseweb Network (AS-LEASEWEB-151). ');
$ax += cidrblock($address, '194.60.71.0/24', 'Leaseweb Network (AS-LEASEWEB-152). ');
$ax += cidrblock($address, '195.14.2.0/24', 'Leaseweb Network (AS-LEASEWEB-153). ');
$ax += cidrblock($address, '195.14.21.0/24', 'Leaseweb Network (AS-LEASEWEB-154). ');
$ax += cidrblock($address, '195.140.240.0/22', 'Leaseweb Network (AS-LEASEWEB-155). ');
$ax += cidrblock($address, '195.190.146.0/24', 'Leaseweb Network (AS-LEASEWEB-156). ');
$ax += cidrblock($address, '195.200.82.0/23', 'Leaseweb Network (AS-LEASEWEB-157). ');
$ax += cidrblock($address, '195.242.98.0/23', 'Leaseweb Network (AS-LEASEWEB-158). ');
$ax += cidrblock($address, '198.7.56.0/21', 'Leaseweb Network (AS-LEASEWEB-159). ');
$ax += cidrblock($address, '199.58.84.0/22', 'Leaseweb Network (AS-LEASEWEB-160). ');
$ax += cidrblock($address, '199.115.112.0/21', 'Leaseweb Network (AS-LEASEWEB-161). ');
$ax += cidrblock($address, '207.244.64.0/18', 'Leaseweb Network (AS-LEASEWEB-162). ');
$ax += cidrblock($address, '208.64.45.0/24', 'Leaseweb Network (AS-LEASEWEB-163). ');
$ax += cidrblock($address, '209.192.128.0/17', 'Leaseweb Network (AS-LEASEWEB-164). ');
$ax += cidrblock($address, '212.7.192.0/21', 'Leaseweb Network (AS-LEASEWEB-165). ');
$ax += cidrblock($address, '212.7.200.0/24', 'Leaseweb Network (AS-LEASEWEB-166). ');
$ax += cidrblock($address, '212.7.202.0/24', 'Leaseweb Network (AS-LEASEWEB-167). ');
$ax += cidrblock($address, '212.7.204.0/22', 'Leaseweb Network (AS-LEASEWEB-168). ');
$ax += cidrblock($address, '212.7.208.0/21', 'Leaseweb Network (AS-LEASEWEB-169). ');
$ax += cidrblock($address, '212.19.235.0/24', 'Leaseweb Network (AS-LEASEWEB-170). ');
$ax += cidrblock($address, '212.19.236.0/24', 'Leaseweb Network (AS-LEASEWEB-171). ');
$ax += cidrblock($address, '212.95.32.0/19', 'Leaseweb Network (AS-LEASEWEB-172). ');
$ax += cidrblock($address, '213.142.132.0/22', 'Leaseweb Network (AS-LEASEWEB-173). ');
$ax += cidrblock($address, '213.142.136.0/21', 'Leaseweb Network (AS-LEASEWEB-174). ');
$ax += cidrblock($address, '213.142.144.0/22', 'Leaseweb Network (AS-LEASEWEB-175). ');
$ax += cidrblock($address, '217.20.112.0/20', 'Leaseweb Network (AS-LEASEWEB-176). ');
$ax += cidrblock($address, '217.73.56.0/21', 'Leaseweb Network (AS-LEASEWEB-177). ');


// HOSTING-AS Tehnologii Budushego LLC (updated 2016.01.18 / checked 2016.07.09)
// AS41665
$ax += cidrblock($address, '78.109.16.0/20', 'AS41665 (ASN-41665-HATB-0). ');
$ax += cidrblock($address, '194.54.88.0/22', 'AS41665 (ASN-41665-HATB-1). ');
$ax += cidrblock($address, '213.155.0.0/19', 'AS41665 (ASN-41665-HATB-2). ');


// MYLOC (updated 2016.04.23)
// AS24961
$ax += cidrblock($address, '5.104.104.0/21', 'Myloc AS24961 (ASN-24961-MYLOC-00). ');
$ax += cidrblock($address, '5.199.128.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-01). ');
$ax += cidrblock($address, '31.22.104.0/22', 'Myloc AS24961 (ASN-24961-MYLOC-02). ');
$ax += cidrblock($address, '31.184.224.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-03). ');
$ax += cidrblock($address, '37.157.248.0/21', 'Myloc AS24961 (ASN-24961-MYLOC-04). ');
$ax += cidrblock($address, '46.20.32.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-05). ');
$ax += cidrblock($address, '46.228.192.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-06). ');
$ax += cidrblock($address, '62.141.32.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-07). ');
$ax += cidrblock($address, '77.81.109.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-08). ');
$ax += cidrblock($address, '77.81.110.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-09). ');
$ax += cidrblock($address, '78.31.64.0/21', 'Myloc AS24961 (ASN-24961-MYLOC-10). ');
$ax += cidrblock($address, '80.82.208.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-11). ');
$ax += cidrblock($address, '80.86.170.0/23', 'Myloc AS24961 (ASN-24961-MYLOC-12). ');
$ax += cidrblock($address, '80.86.186.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-13). ');
$ax += cidrblock($address, '81.30.144.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-14). ');
$ax += cidrblock($address, '83.136.80.0/21', 'Myloc AS24961 (ASN-24961-MYLOC-15). ');
$ax += cidrblock($address, '85.14.240.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-16). ');
$ax += cidrblock($address, '85.114.128.0/19', 'Myloc AS24961 (ASN-24961-MYLOC-17). ');
$ax += cidrblock($address, '89.163.128.0/19', 'Myloc AS24961 (ASN-24961-MYLOC-18). ');
$ax += cidrblock($address, '89.163.208.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-19). ');
$ax += cidrblock($address, '89.163.224.0/19', 'Myloc AS24961 (ASN-24961-MYLOC-20). ');
$ax += cidrblock($address, '91.194.84.0/23', 'Myloc AS24961 (ASN-24961-MYLOC-21). ');
$ax += cidrblock($address, '91.212.85.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-22). ');
$ax += cidrblock($address, '91.242.212.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-23). ');
$ax += cidrblock($address, '93.186.192.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-24). ');
$ax += cidrblock($address, '141.8.244.0/22', 'Myloc AS24961 (ASN-24961-MYLOC-25). ');
$ax += cidrblock($address, '141.8.248.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-26). ');
$ax += cidrblock($address, '146.0.32.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-27). ');
$ax += cidrblock($address, '185.15.244.0/22', 'Myloc AS24961 (ASN-24961-MYLOC-28). ');
$ax += cidrblock($address, '185.97.5.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-29). ');
$ax += cidrblock($address, '185.114.108.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-30). ');
$ax += cidrblock($address, '185.144.236.0/22', 'Myloc AS24961 (ASN-24961-MYLOC-31). ');
$ax += cidrblock($address, '188.214.93.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-32). ');
$ax += cidrblock($address, '191.96.66.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-33). ');
$ax += cidrblock($address, '193.22.251.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-34). ');
$ax += cidrblock($address, '193.41.200.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-35). ');
$ax += cidrblock($address, '193.47.99.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-36). ');
$ax += cidrblock($address, '193.111.136.0/21', 'Myloc AS24961 (ASN-24961-MYLOC-37). ');
$ax += cidrblock($address, '193.111.198.0/23', 'Myloc AS24961 (ASN-24961-MYLOC-38). ');
$ax += cidrblock($address, '199.201.240.0/24', 'Myloc AS24961 (ASN-24961-MYLOC-39). ');
$ax += cidrblock($address, '213.202.208.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-40). ');
$ax += cidrblock($address, '217.79.176.0/20', 'Myloc AS24961 (ASN-24961-MYLOC-41). ');


// INFOBOX (updated 2016.01.18 / checked 2016.05.15)
// AS30968
$ax += cidrblock($address, '77.221.128.0/19', 'INFOBOX AS30968 (ASN-30968-INFOBOX-0). ');
$ax += cidrblock($address, '92.243.64.0/19', 'INFOBOX AS30968 (ASN-30968-INFOBOX-1). ');
$ax += cidrblock($address, '109.120.128.0/18', 'INFOBOX AS30968 (ASN-30968-INFOBOX-2). ');


// SEDO (updated 2016.01.18 / checked 2016.05.15)
// AS47846
$ax += cidrblock($address, '82.98.86.0/24', 'SEDO AS47846 (ASN-47846-SEDO-0). ');
$ax += cidrblock($address, '82.98.99.0/24', 'SEDO AS47846 (ASN-47846-SEDO-1). ');
$ax += cidrblock($address, '91.195.240.0/23', 'SEDO AS47846 (ASN-47846-SEDO-2). ');
$ax += cidrblock($address, '213.83.58.0/24', 'SEDO AS47846 (ASN-47846-SEDO-3). ');


// Elos Host (updated 2016.05.15)
// AS61718
$ax += cidrblock($address, '131.72.52.0/22', 'Elos Host (ASN-61718-ELOSHOST-0). ');
$ax += cidrblock($address, '131.255.140.0/22', 'Elos Host (ASN-61718-ELOSHOST-1). ');
$ax += cidrblock($address, '138.117.196.0/22', 'Elos Host (ASN-61718-ELOSHOST-2). ');


// iweb/privatedns Domain Spammers
// Snooping on your site, sniping your domain.
$ax += rmatch($hoster, 'privatedns.com', 'RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += rmatch($hoster, 'iweb.ca', 'RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += rmatch($hoster, 'iweb.com', 'RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += lmatch($hoster, 'iweb', 'RFC ignorant/Suspected domain name snipers/spammers. '); //70b
$ax += lmatch($hoster, 'www.iweb', 'RFC ignorant/Suspected domain name snipers/spammers. '); //70b


// Spamahost network.
// self explanatory!
$ax += inmatch($hoster, 'spamahost', 'Spamahost known range (SPAMAHOST-00). '); // updated 70c / checked 2016.04.27
$ax += cidrblock($address, '54.72.0.0/16', 'Spamahost known range (SPAMAHOST-01). '); // updated 2016.04.27


// HOSTKEY B.V. (updated 2016.01.18 / checked 2016.04.27)
// AS57043
$ax += cidrblock($address, '5.39.216.0/21', 'HostKey Network (ASN-57043-HOSTKEY-0). ');
$ax += cidrblock($address, '31.192.109.0/24', 'HostKey Network (ASN-57043-HOSTKEY-1). ');
$ax += cidrblock($address, '31.192.110.0/24', 'HostKey Network (ASN-57043-HOSTKEY-2). ');
$ax += cidrblock($address, '46.17.96.0/21', 'HostKey Network (ASN-57043-HOSTKEY-3). ');
$ax += cidrblock($address, '46.249.38.0/24', 'HostKey Network (ASN-57043-HOSTKEY-4). ');
$ax += cidrblock($address, '146.0.72.0/21', 'HostKey Network (ASN-57043-HOSTKEY-5). ');
$ax += cidrblock($address, '185.70.184.0/22', 'HostKey Network (ASN-57043-HOSTKEY-6). ');
$ax += cidrblock($address, '185.130.224.0/22', 'HostKey Network (ASN-57043-HOSTKEY-7). ');
$ax += cidrblock($address, '193.109.68.0/23', 'HostKey Network (ASN-57043-HOSTKEY-8). ');
$ax += cidrblock($address, '195.162.68.0/23', 'HostKey Network (ASN-57043-HOSTKEY-9). ');
$ax += rmatch($hoster, 'hostkey.ru', 'Hostkey (known spammers). '); //70c


// Mir Telematiki Ltd (updated 2016.04.27)
// AS49335
$ax += cidrblock($address, '31.192.104.0/22', 'Mir Telematiki (ASN-49335-MIRTEL-00). ');
$ax += cidrblock($address, '31.192.108.0/24', 'Mir Telematiki (ASN-49335-MIRTEL-01). ');
$ax += cidrblock($address, '31.192.111.0/24', 'Mir Telematiki (ASN-49335-MIRTEL-02). ');
$ax += cidrblock($address, '62.76.255.0/24', 'Mir Telematiki (ASN-49335-MIRTEL-03). ');
$ax += cidrblock($address, '80.90.244.0/24', 'Mir Telematiki (ASN-49335-MIRTEL-04). ');
$ax += cidrblock($address, '86.105.227.0/24', 'Mir Telematiki (ASN-49335-MIRTEL-05). ');
$ax += cidrblock($address, '86.106.102.0/24', 'Mir Telematiki (ASN-49335-MIRTEL-06). ');
$ax += cidrblock($address, '91.210.104.0/22', 'Mir Telematiki (ASN-49335-MIRTEL-07). ');
$ax += cidrblock($address, '91.218.112.0/22', 'Mir Telematiki (ASN-49335-MIRTEL-08). ');
$ax += cidrblock($address, '91.218.244.0/22', 'Mir Telematiki (ASN-49335-MIRTEL-09). ');
$ax += cidrblock($address, '91.237.249.0/24', 'Mir Telematiki (ASN-49335-MIRTEL-10). ');
$ax += cidrblock($address, '94.177.123.0/24', 'Mir Telematiki (ASN-49335-MIRTEL-11). ');
$ax += cidrblock($address, '111.90.159.0/24', 'Mir Telematiki (ASN-49335-MIRTEL-12). ');
$ax += cidrblock($address, '141.105.64.0/21', 'Mir Telematiki (ASN-49335-MIRTEL-13). ');
$ax += cidrblock($address, '158.255.0.0/21', 'Mir Telematiki (ASN-49335-MIRTEL-14). ');
$ax += cidrblock($address, '185.42.100.0/24', 'Mir Telematiki (ASN-49335-MIRTEL-15). ');
$ax += cidrblock($address, '185.42.102.0/23', 'Mir Telematiki (ASN-49335-MIRTEL-16). ');
$ax += cidrblock($address, '185.70.104.0/22', 'Mir Telematiki (ASN-49335-MIRTEL-17). ');
$ax += cidrblock($address, '185.130.212.0/22', 'Mir Telematiki (ASN-49335-MIRTEL-18). ');
$ax += cidrblock($address, '185.133.228.0/22', 'Mir Telematiki (ASN-49335-MIRTEL-19). ');
$ax += cidrblock($address, '193.124.20.0/23', 'Mir Telematiki (ASN-49335-MIRTEL-20). ');


// Nobis Technology Group, LLC
// AS15003 (updated 2016.03.28)
$ax += cidrblock($address, '23.19.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-000). ');
$ax += cidrblock($address, '23.80.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-001). ');
$ax += cidrblock($address, '23.81.0.0/17', 'Nobis Technology Group (ASN-15003-NOBIS-002). ');
$ax += cidrblock($address, '23.81.128.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-003). ');
$ax += cidrblock($address, '23.81.192.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-004). ');
$ax += cidrblock($address, '23.81.216.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-005). ');
$ax += cidrblock($address, '23.81.224.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-006). ');
$ax += cidrblock($address, '23.82.0.0/17', 'Nobis Technology Group (ASN-15003-NOBIS-007). ');
$ax += cidrblock($address, '23.82.128.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-008). ');
$ax += cidrblock($address, '23.82.160.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-009). ');
$ax += cidrblock($address, '23.82.176.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-010). ');
$ax += cidrblock($address, '23.82.192.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-011). ');
$ax += cidrblock($address, '23.83.0.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-012). ');
$ax += cidrblock($address, '23.83.64.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-013). ');
$ax += cidrblock($address, '23.83.96.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-014). ');
$ax += cidrblock($address, '23.83.128.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-015). ');
$ax += cidrblock($address, '23.83.192.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-016). ');
$ax += cidrblock($address, '23.104.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-017). ');
$ax += cidrblock($address, '23.105.0.0/17', 'Nobis Technology Group (ASN-15003-NOBIS-018). ');
$ax += cidrblock($address, '23.105.128.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-019). ');
$ax += cidrblock($address, '23.106.0.0/17', 'Nobis Technology Group (ASN-15003-NOBIS-020). ');
$ax += cidrblock($address, '23.106.160.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-021). ');
$ax += cidrblock($address, '23.106.192.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-022). ');
$ax += cidrblock($address, '23.107.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-023). ');
$ax += cidrblock($address, '23.108.0.0/15', 'Nobis Technology Group (ASN-15003-NOBIS-024). ');
$ax += cidrblock($address, '23.110.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-025). ');
$ax += cidrblock($address, '23.111.16.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-026). ');
$ax += cidrblock($address, '23.111.248.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-027). ');
$ax += cidrblock($address, '23.111.253.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-028). ');
$ax += cidrblock($address, '23.111.254.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-029). ');
$ax += cidrblock($address, '23.224.0.0/15', 'Nobis Technology Group (ASN-15003-NOBIS-030). ');
$ax += cidrblock($address, '23.235.160.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-031). ');
$ax += cidrblock($address, '23.248.192.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-032). ');
$ax += cidrblock($address, '64.120.1.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-033). ');
$ax += cidrblock($address, '64.120.2.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-034). ');
$ax += cidrblock($address, '64.120.4.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-035). ');
$ax += cidrblock($address, '64.120.8.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-036). ');
$ax += cidrblock($address, '64.120.16.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-037). ');
$ax += cidrblock($address, '64.120.32.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-038). ');
$ax += cidrblock($address, '64.120.64.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-039). ');
$ax += cidrblock($address, '64.120.66.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-040). ');
$ax += cidrblock($address, '64.120.68.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-041). ');
$ax += cidrblock($address, '64.120.71.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-042). ');
$ax += cidrblock($address, '64.120.72.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-043). ');
$ax += cidrblock($address, '64.120.80.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-044). ');
$ax += cidrblock($address, '64.120.96.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-045). ');
$ax += cidrblock($address, '64.120.105.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-046). ');
$ax += cidrblock($address, '64.120.106.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-047). ');
$ax += cidrblock($address, '64.120.109.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-048). ');
$ax += cidrblock($address, '64.120.112.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-049). ');
$ax += cidrblock($address, '64.120.122.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-050). ');
$ax += cidrblock($address, '64.120.124.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-051). ');
$ax += cidrblock($address, '67.201.0.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-052). ');
$ax += cidrblock($address, '67.201.48.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-053). ');
$ax += cidrblock($address, '69.31.107.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-054). ');
$ax += cidrblock($address, '69.147.224.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-055). ');
$ax += cidrblock($address, '69.147.227.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-056). ');
$ax += cidrblock($address, '69.147.228.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-057). ');
$ax += cidrblock($address, '69.147.232.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-058). ');
$ax += cidrblock($address, '69.147.240.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-059). ');
$ax += cidrblock($address, '69.147.244.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-060). ');
$ax += cidrblock($address, '69.147.246.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-061). ');
$ax += cidrblock($address, '69.147.248.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-062). ');
$ax += cidrblock($address, '69.174.60.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-063). ');
$ax += cidrblock($address, '70.32.32.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-064). ');
$ax += cidrblock($address, '72.37.204.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-065). ');
$ax += cidrblock($address, '72.37.221.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-066). ');
$ax += cidrblock($address, '72.37.222.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-067). ');
$ax += cidrblock($address, '72.37.224.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-068). ');
$ax += cidrblock($address, '72.37.237.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-069). ');
$ax += cidrblock($address, '72.37.242.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-070). ');
$ax += cidrblock($address, '72.37.246.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-071). ');
$ax += cidrblock($address, '74.113.144.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-072). ');
$ax += cidrblock($address, '104.238.32.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-073). ');
$ax += cidrblock($address, '104.238.45.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-074). ');
$ax += cidrblock($address, '108.62.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-075). ');
$ax += cidrblock($address, '108.171.33.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-076). ');
$ax += cidrblock($address, '108.171.34.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-077). ');
$ax += cidrblock($address, '108.171.36.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-078). ');
$ax += cidrblock($address, '108.171.38.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-079). ');
$ax += cidrblock($address, '108.171.43.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-080). ');
$ax += cidrblock($address, '108.171.44.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-081). ');
$ax += cidrblock($address, '108.171.53.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-082). ');
$ax += cidrblock($address, '108.171.54.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-083). ');
$ax += cidrblock($address, '108.171.56.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-084). ');
$ax += cidrblock($address, '108.171.59.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-085). ');
$ax += cidrblock($address, '108.171.60.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-086). ');
$ax += cidrblock($address, '108.171.63.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-087). ');
$ax += cidrblock($address, '108.177.128.0/17', 'Nobis Technology Group (ASN-15003-NOBIS-088). ');
$ax += cidrblock($address, '108.187.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-089). ');
$ax += cidrblock($address, '142.91.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-090). ');
$ax += cidrblock($address, '142.234.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-091). ');
$ax += cidrblock($address, '147.255.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-092). ');
$ax += cidrblock($address, '162.209.128.0/17', 'Nobis Technology Group (ASN-15003-NOBIS-093). ');
$ax += cidrblock($address, '162.222.68.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-094). ');
$ax += cidrblock($address, '162.246.185.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-095). ');
$ax += cidrblock($address, '162.246.186.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-096). ');
$ax += cidrblock($address, '167.160.116.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-097). ');
$ax += cidrblock($address, '172.240.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-098). ');
$ax += cidrblock($address, '172.241.0.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-099). ');
$ax += cidrblock($address, '172.241.32.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-100). ');
$ax += cidrblock($address, '172.241.56.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-101). ');
$ax += cidrblock($address, '172.241.72.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-102). ');
$ax += cidrblock($address, '172.241.80.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-103). ');
$ax += cidrblock($address, '172.241.88.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-104). ');
$ax += cidrblock($address, '172.241.96.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-105). ');
$ax += cidrblock($address, '172.241.128.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-106). ');
$ax += cidrblock($address, '172.241.192.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-107). ');
$ax += cidrblock($address, '172.241.224.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-108). ');
$ax += cidrblock($address, '172.241.240.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-109). ');
$ax += cidrblock($address, '172.247.0.0/16', 'Nobis Technology Group (ASN-15003-NOBIS-110). ');
$ax += cidrblock($address, '172.255.0.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-111). ');
$ax += cidrblock($address, '172.255.32.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-112). ');
$ax += cidrblock($address, '172.255.64.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-113). ');
$ax += cidrblock($address, '172.255.128.0/17', 'Nobis Technology Group (ASN-15003-NOBIS-114). ');
$ax += cidrblock($address, '173.208.0.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-115). ');
$ax += cidrblock($address, '173.208.32.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-116). ');
$ax += cidrblock($address, '173.208.48.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-117). ');
$ax += cidrblock($address, '173.208.56.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-118). ');
$ax += cidrblock($address, '173.208.62.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-119). ');
$ax += cidrblock($address, '173.208.64.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-120). ');
$ax += cidrblock($address, '173.208.96.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-121). ');
$ax += cidrblock($address, '173.208.104.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-122). ');
$ax += cidrblock($address, '173.208.106.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-123). ');
$ax += cidrblock($address, '173.208.108.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-124). ');
$ax += cidrblock($address, '173.208.112.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-125). ');
$ax += cidrblock($address, '173.208.114.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-126). ');
$ax += cidrblock($address, '173.208.118.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-127). ');
$ax += cidrblock($address, '173.208.120.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-128). ');
$ax += cidrblock($address, '173.234.0.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-129). ');
$ax += cidrblock($address, '173.234.16.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-130). ');
$ax += cidrblock($address, '173.234.32.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-131). ');
$ax += cidrblock($address, '173.234.64.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-132). ');
$ax += cidrblock($address, '173.234.80.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-133). ');
$ax += cidrblock($address, '173.234.88.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-134). ');
$ax += cidrblock($address, '173.234.90.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-135). ');
$ax += cidrblock($address, '173.234.92.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-136). ');
$ax += cidrblock($address, '173.234.96.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-137). ');
$ax += cidrblock($address, '173.234.105.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-138). ');
$ax += cidrblock($address, '173.234.109.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-139). ');
$ax += cidrblock($address, '173.234.110.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-140). ');
$ax += cidrblock($address, '173.234.112.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-141). ');
$ax += cidrblock($address, '173.234.128.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-142). ');
$ax += cidrblock($address, '173.234.160.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-143). ');
$ax += cidrblock($address, '173.234.176.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-144). ');
$ax += cidrblock($address, '173.234.184.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-145). ');
$ax += cidrblock($address, '173.234.188.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-146). ');
$ax += cidrblock($address, '173.234.190.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-147). ');
$ax += cidrblock($address, '173.234.192.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-148). ');
$ax += cidrblock($address, '174.34.128.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-149). ');
$ax += cidrblock($address, '174.34.160.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-150). ');
$ax += cidrblock($address, '174.34.176.0/21', 'Nobis Technology Group (ASN-15003-NOBIS-151). ');
$ax += cidrblock($address, '174.34.184.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-152). ');
$ax += cidrblock($address, '174.34.188.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-153). ');
$ax += cidrblock($address, '174.34.190.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-154). ');
$ax += cidrblock($address, '181.214.53.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-155). ');
$ax += cidrblock($address, '191.96.100.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-156). ');
$ax += cidrblock($address, '191.96.107.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-157). ');
$ax += cidrblock($address, '191.101.178.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-158). ');
$ax += cidrblock($address, '192.151.236.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-159). ');
$ax += cidrblock($address, '192.161.80.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-160). ');
$ax += cidrblock($address, '192.163.160.0/19', 'Nobis Technology Group (ASN-15003-NOBIS-161). ');
$ax += cidrblock($address, '192.229.64.0/18', 'Nobis Technology Group (ASN-15003-NOBIS-162). ');
$ax += cidrblock($address, '192.238.128.0/17', 'Nobis Technology Group (ASN-15003-NOBIS-163). ');
$ax += cidrblock($address, '192.253.243.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-164). ');
$ax += cidrblock($address, '192.253.245.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-165). ');
$ax += cidrblock($address, '192.253.246.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-166). ');
$ax += cidrblock($address, '196.45.112.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-167). ');
$ax += cidrblock($address, '198.48.96.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-168). ');
$ax += cidrblock($address, '198.48.112.0/22', 'Nobis Technology Group (ASN-15003-NOBIS-169). ');
$ax += cidrblock($address, '206.123.128.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-170). ');
$ax += cidrblock($address, '206.123.143.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-171). ');
$ax += cidrblock($address, '206.123.144.0/23', 'Nobis Technology Group (ASN-15003-NOBIS-172). ');
$ax += cidrblock($address, '216.6.224.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-173). ');
$ax += cidrblock($address, '216.152.224.0/20', 'Nobis Technology Group (ASN-15003-NOBIS-174). ');
$ax += cidrblock($address, '216.193.237.0/24', 'Nobis Technology Group (ASN-15003-NOBIS-175). ');
$ax += inmatch($hoster, 'nobis', 'Nobis Technology Group. (ASN-15003-NOBIS-TECH-175). ');
$ax += inmatch($hoster, 'ubiquity', 'Nobis Technology Group. (ASN-15003-NOBIS-TECH-176). ');


// Rackspace (updated 2016.04.27)
// AS10532, AS15395, AS19994, AS22720, AS27357, AS33070, AS44716, AS45187, AS47715, AS58683
$ax += cidrblock($address, '5.79.0.0/18', 'Rackspace (AS-RKSP-000). ');
$ax += cidrblock($address, '5.152.187.0/24', 'Rackspace (AS-RKSP-001). ');
$ax += cidrblock($address, '23.253.0.0/16', 'Rackspace (AS-RKSP-002). ');
$ax += cidrblock($address, '27.126.144.0/21', 'Rackspace (AS-RKSP-003). ');
$ax += cidrblock($address, '31.222.128.0/18', 'Rackspace (AS-RKSP-004). ');
$ax += cidrblock($address, '37.188.96.0/19', 'Rackspace (AS-RKSP-005). ');
$ax += cidrblock($address, '46.38.160.0/19', 'Rackspace (AS-RKSP-006). ');
$ax += cidrblock($address, '50.28.192.0/19', 'Rackspace (AS-RKSP-007). ');
$ax += cidrblock($address, '50.28.224.0/21', 'Rackspace (AS-RKSP-008). ');
$ax += cidrblock($address, '50.28.232.0/22', 'Rackspace (AS-RKSP-009). ');
$ax += cidrblock($address, '50.56.0.0/15', 'Rackspace (AS-RKSP-010). ');
$ax += cidrblock($address, '64.39.0.0/19', 'Rackspace (AS-RKSP-011). ');
$ax += cidrblock($address, '64.49.192.0/18', 'Rackspace (AS-RKSP-012). ');
$ax += cidrblock($address, '65.61.128.0/18', 'Rackspace (AS-RKSP-013). ');
$ax += cidrblock($address, '66.216.64.0/18', 'Rackspace (AS-RKSP-014). ');
$ax += cidrblock($address, '67.23.0.0/19', 'Rackspace (AS-RKSP-015). ');
$ax += cidrblock($address, '67.23.32.0/20', 'Rackspace (AS-RKSP-016). ');
$ax += cidrblock($address, '67.192.0.0/16', 'Rackspace (AS-RKSP-017). ');
$ax += cidrblock($address, '67.207.128.0/19', 'Rackspace (AS-RKSP-018). ');
$ax += cidrblock($address, '69.20.0.0/17', 'Rackspace (AS-RKSP-019). ');
$ax += cidrblock($address, '72.3.128.0/17', 'Rackspace (AS-RKSP-020). ');
$ax += cidrblock($address, '72.4.112.0/20', 'Rackspace (AS-RKSP-021). ');
$ax += cidrblock($address, '72.32.0.0/16', 'Rackspace (AS-RKSP-022). ');
$ax += cidrblock($address, '74.91.80.0/20', 'Rackspace (AS-RKSP-023). ');
$ax += cidrblock($address, '74.205.0.0/17', 'Rackspace (AS-RKSP-024). ');
$ax += cidrblock($address, '78.136.0.0/18', 'Rackspace (AS-RKSP-025). ');
$ax += cidrblock($address, '83.138.128.0/18', 'Rackspace (AS-RKSP-026). ');
$ax += cidrblock($address, '87.225.128.0/17', 'Rackspace (AS-RKSP-027). ');
$ax += cidrblock($address, '89.234.0.0/18', 'Rackspace (AS-RKSP-028). ');
$ax += cidrblock($address, '91.227.208.0/24', 'Rackspace (AS-RKSP-029). ');
$ax += cidrblock($address, '92.52.64.0/18', 'Rackspace (AS-RKSP-030). ');
$ax += cidrblock($address, '94.236.0.0/17', 'Rackspace (AS-RKSP-031). ');
$ax += cidrblock($address, '95.138.128.0/18', 'Rackspace (AS-RKSP-032). ');
$ax += cidrblock($address, '98.129.0.0/16', 'Rackspace (AS-RKSP-033). ');
$ax += cidrblock($address, '103.28.40.0/22', 'Rackspace (AS-RKSP-034). ');
$ax += cidrblock($address, '104.130.0.0/16', 'Rackspace (AS-RKSP-035). ');
$ax += cidrblock($address, '104.239.128.0/17', 'Rackspace (AS-RKSP-036). ');
$ax += cidrblock($address, '108.166.0.0/17', 'Rackspace (AS-RKSP-037). ');
$ax += cidrblock($address, '108.171.160.0/19', 'Rackspace (AS-RKSP-038). ');
$ax += cidrblock($address, '117.74.104.0/21', 'Rackspace (AS-RKSP-039). ');
$ax += cidrblock($address, '119.9.0.0/17', 'Rackspace (AS-RKSP-040). ');
$ax += cidrblock($address, '119.9.128.0/18', 'Rackspace (AS-RKSP-041). ');
$ax += cidrblock($address, '120.136.32.0/20', 'Rackspace (AS-RKSP-042). ');
$ax += cidrblock($address, '134.8.0.0/23', 'Rackspace (AS-RKSP-043). ');
$ax += cidrblock($address, '134.8.2.0/24', 'Rackspace (AS-RKSP-044). ');
$ax += cidrblock($address, '134.213.0.0/16', 'Rackspace (AS-RKSP-045). ');
$ax += cidrblock($address, '142.0.184.0/22', 'Rackspace (AS-RKSP-046). ');
$ax += cidrblock($address, '142.54.40.0/24', 'Rackspace (AS-RKSP-047). ');
$ax += cidrblock($address, '146.20.0.0/16', 'Rackspace (AS-RKSP-048). ');
$ax += cidrblock($address, '146.88.18.0/24', 'Rackspace (AS-RKSP-049). ');
$ax += cidrblock($address, '146.88.28.0/24', 'Rackspace (AS-RKSP-050). ');
$ax += cidrblock($address, '146.177.0.0/16', 'Rackspace (AS-RKSP-051). ');
$ax += cidrblock($address, '148.62.0.0/16', 'Rackspace (AS-RKSP-052). ');
$ax += cidrblock($address, '156.43.59.0/24', 'Rackspace (AS-RKSP-053). ');
$ax += cidrblock($address, '159.127.178.0/23', 'Rackspace (AS-RKSP-054). ');
$ax += cidrblock($address, '161.47.0.0/18', 'Rackspace (AS-RKSP-055). ');
if ($address !== '162.13.83.46') {
    /** Bypass for "googlealert.com", "gigaalert.com", "copyscape.com". **/
    $ax += cidrblock($address, '162.13.0.0/16', 'Rackspace (AS-RKSP-056). ');
}
$ax += cidrblock($address, '162.209.0.0/17', 'Rackspace (AS-RKSP-057). ');
$ax += cidrblock($address, '162.220.0.0/24', 'Rackspace (AS-RKSP-058). ');
$ax += cidrblock($address, '162.242.128.0/17', 'Rackspace (AS-RKSP-059). ');
$ax += cidrblock($address, '162.247.112.0/21', 'Rackspace (AS-RKSP-060). ');
$ax += cidrblock($address, '164.177.128.0/19', 'Rackspace (AS-RKSP-061). ');
$ax += cidrblock($address, '166.78.0.0/16', 'Rackspace (AS-RKSP-062). ');
$ax += cidrblock($address, '168.235.224.0/20', 'Rackspace (AS-RKSP-063). ');
$ax += cidrblock($address, '172.99.64.0/18', 'Rackspace (AS-RKSP-064). ');
$ax += cidrblock($address, '173.45.224.0/19', 'Rackspace (AS-RKSP-065). ');
$ax += cidrblock($address, '173.203.0.0/16', 'Rackspace (AS-RKSP-066). ');
$ax += cidrblock($address, '174.143.0.0/16', 'Rackspace (AS-RKSP-067). ');
$ax += cidrblock($address, '177.152.202.0/24', 'Rackspace (AS-RKSP-068). ');
$ax += cidrblock($address, '180.150.128.0/19', 'Rackspace (AS-RKSP-069). ');
$ax += cidrblock($address, '184.106.0.0/16', 'Rackspace (AS-RKSP-070). ');
$ax += cidrblock($address, '185.28.196.0/24', 'Rackspace (AS-RKSP-071). ');
$ax += cidrblock($address, '185.36.144.0/22', 'Rackspace (AS-RKSP-072). ');
$ax += cidrblock($address, '185.37.202.0/24', 'Rackspace (AS-RKSP-073). ');
$ax += cidrblock($address, '185.51.76.0/22', 'Rackspace (AS-RKSP-074). ');
$ax += cidrblock($address, '185.64.72.0/24', 'Rackspace (AS-RKSP-075). ');
$ax += cidrblock($address, '185.75.60.0/22', 'Rackspace (AS-RKSP-076). ');
$ax += cidrblock($address, '185.118.172.0/22', 'Rackspace (AS-RKSP-077). ');
$ax += cidrblock($address, '192.40.168.0/21', 'Rackspace (AS-RKSP-078). ');
$ax += cidrblock($address, '192.233.7.0/24', 'Rackspace (AS-RKSP-079). ');
$ax += cidrblock($address, '192.237.128.0/17', 'Rackspace (AS-RKSP-080). ');
$ax += cidrblock($address, '193.142.244.0/24', 'Rackspace (AS-RKSP-081). ');
$ax += cidrblock($address, '195.190.31.0/24', 'Rackspace (AS-RKSP-082). ');
$ax += cidrblock($address, '198.61.128.0/17', 'Rackspace (AS-RKSP-083). ');
$ax += cidrblock($address, '198.101.128.0/17', 'Rackspace (AS-RKSP-084). ');
$ax += cidrblock($address, '198.210.16.0/21', 'Rackspace (AS-RKSP-085). ');
$ax += cidrblock($address, '198.254.64.0/20', 'Rackspace (AS-RKSP-086). ');
$ax += cidrblock($address, '199.166.36.0/23', 'Rackspace (AS-RKSP-087). ');
$ax += cidrblock($address, '201.131.3.0/24', 'Rackspace (AS-RKSP-088). ');
$ax += cidrblock($address, '203.55.21.0/24', 'Rackspace (AS-RKSP-089). ');
$ax += cidrblock($address, '203.55.138.0/24', 'Rackspace (AS-RKSP-090). ');
$ax += cidrblock($address, '203.60.0.0/17', 'Rackspace (AS-RKSP-091). ');
$ax += cidrblock($address, '204.63.38.0/23', 'Rackspace (AS-RKSP-092). ');
$ax += cidrblock($address, '204.75.142.0/24', 'Rackspace (AS-RKSP-093). ');
$ax += cidrblock($address, '204.232.128.0/17', 'Rackspace (AS-RKSP-094). ');
$ax += cidrblock($address, '205.166.177.0/24', 'Rackspace (AS-RKSP-095). ');
$ax += cidrblock($address, '207.97.192.0/18', 'Rackspace (AS-RKSP-096). ');
$ax += cidrblock($address, '208.78.96.0/21', 'Rackspace (AS-RKSP-097). ');
$ax += cidrblock($address, '209.0.201.0/24', 'Rackspace (AS-RKSP-098). ');
$ax += cidrblock($address, '209.20.64.0/19', 'Rackspace (AS-RKSP-099). ');
$ax += cidrblock($address, '209.61.128.0/18', 'Rackspace (AS-RKSP-100). ');
$ax += cidrblock($address, '209.114.32.0/19', 'Rackspace (AS-RKSP-101). ');
$ax += cidrblock($address, '209.133.224.0/19', 'Rackspace (AS-RKSP-102). ');
$ax += cidrblock($address, '209.163.232.0/21', 'Rackspace (AS-RKSP-103). ');
$ax += cidrblock($address, '209.163.248.0/22', 'Rackspace (AS-RKSP-104). ');
$ax += cidrblock($address, '212.21.64.0/19', 'Rackspace (AS-RKSP-105). ');
$ax += cidrblock($address, '212.42.224.0/19', 'Rackspace (AS-RKSP-106). ');
$ax += cidrblock($address, '212.64.128.0/19', 'Rackspace (AS-RKSP-107). ');
$ax += cidrblock($address, '212.100.224.0/19', 'Rackspace (AS-RKSP-108). ');
$ax += cidrblock($address, '216.18.148.0/22', 'Rackspace (AS-RKSP-109). ');
$ax += cidrblock($address, '216.110.32.0/20', 'Rackspace (AS-RKSP-110). ');
$ax += cidrblock($address, '216.239.98.0/24', 'Rackspace (AS-RKSP-111). ');
$ax += cidrblock($address, '216.239.100.0/24', 'Rackspace (AS-RKSP-112). ');


// Pakistan Telecom AS45595
// Spam without end, huge blacklistings! (updated 2016.04.27)
$ax += cidrblock($address, '39.32.0.0/11', 'Pakistan Telecom AS45595 (ASN-45595-PkT-00). ');
$ax += cidrblock($address, '59.103.0.0/19', 'Pakistan Telecom AS45595 (ASN-45595-PkT-01). ');
$ax += cidrblock($address, '59.103.48.0/20', 'Pakistan Telecom AS45595 (ASN-45595-PkT-02). ');
$ax += cidrblock($address, '59.103.75.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-03). ');
$ax += cidrblock($address, '59.103.76.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-04). ');
$ax += cidrblock($address, '59.103.128.0/23', 'Pakistan Telecom AS45595 (ASN-45595-PkT-05). ');
$ax += cidrblock($address, '59.103.132.0/22', 'Pakistan Telecom AS45595 (ASN-45595-PkT-06). ');
$ax += cidrblock($address, '59.103.144.0/21', 'Pakistan Telecom AS45595 (ASN-45595-PkT-07). ');
$ax += cidrblock($address, '59.103.155.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-08). ');
$ax += cidrblock($address, '59.103.156.0/22', 'Pakistan Telecom AS45595 (ASN-45595-PkT-09). ');
$ax += cidrblock($address, '59.103.164.0/22', 'Pakistan Telecom AS45595 (ASN-45595-PkT-10). ');
$ax += cidrblock($address, '59.103.168.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-11). ');
$ax += cidrblock($address, '59.103.192.0/19', 'Pakistan Telecom AS45595 (ASN-45595-PkT-12). ');
$ax += cidrblock($address, '59.103.224.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-13). ');
$ax += cidrblock($address, '104.99.130.0/23', 'Pakistan Telecom AS45595 (ASN-45595-PkT-14). ');
$ax += cidrblock($address, '104.99.132.0/22', 'Pakistan Telecom AS45595 (ASN-45595-PkT-15). ');
$ax += cidrblock($address, '116.71.96.0/20', 'Pakistan Telecom AS45595 (ASN-45595-PkT-16). ');
$ax += cidrblock($address, '116.71.192.0/18', 'Pakistan Telecom AS45595 (ASN-45595-PkT-17). ');
$ax += cidrblock($address, '119.152.0.0/13', 'Pakistan Telecom AS45595 (ASN-45595-PkT-18). ');
$ax += cidrblock($address, '182.176.0.0/12', 'Pakistan Telecom AS45595 (ASN-45595-PkT-19). ');
$ax += cidrblock($address, '203.99.160.0/19', 'Pakistan Telecom AS45595 (ASN-45595-PkT-20). ');
$ax += cidrblock($address, '203.128.252.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-21). ');
$ax += cidrblock($address, '203.128.254.0/23', 'Pakistan Telecom AS45595 (ASN-45595-PkT-22). ');
$ax += cidrblock($address, '203.135.11.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-23). ');
$ax += cidrblock($address, '203.135.13.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-24). ');
$ax += cidrblock($address, '203.135.16.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-25). ');
$ax += cidrblock($address, '203.135.20.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-26). ');
$ax += cidrblock($address, '203.135.24.0/23', 'Pakistan Telecom AS45595 (ASN-45595-PkT-27). ');
$ax += cidrblock($address, '203.135.26.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-28). ');
$ax += cidrblock($address, '203.135.30.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-29). ');
$ax += cidrblock($address, '203.135.33.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-30). ');
$ax += cidrblock($address, '203.135.34.0/23', 'Pakistan Telecom AS45595 (ASN-45595-PkT-31). ');
$ax += cidrblock($address, '203.135.36.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-32). ');
$ax += cidrblock($address, '203.135.38.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-33). ');
$ax += cidrblock($address, '203.135.41.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-34). ');
$ax += cidrblock($address, '203.135.43.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-35). ');
$ax += cidrblock($address, '203.135.48.0/23', 'Pakistan Telecom AS45595 (ASN-45595-PkT-36). ');
$ax += cidrblock($address, '203.135.50.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-37). ');
$ax += cidrblock($address, '203.135.54.0/23', 'Pakistan Telecom AS45595 (ASN-45595-PkT-38). ');
$ax += cidrblock($address, '203.135.58.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-39). ');
$ax += cidrblock($address, '203.135.61.0/24', 'Pakistan Telecom AS45595 (ASN-45595-PkT-40). ');


// Kintiskton LLC, Mark Manager copyright check bot (abusive history) (updated 2016.04.13)
$ax += cidrblock($address, '63.110.187.0/24', 'Kintiskton LLC (AS-KINT-01). ');


// Limestone networks, Hosts of hackforums.net (updated 2016.01.19 / checked 2016.07.09)
// AS46475
$ax += cidrblock($address, '63.143.32.0/19', 'Limestone Networks AS46475 (ASN-46475-LSN-00). ');
$ax += cidrblock($address, '64.31.0.0/18', 'Limestone Networks AS46475 (ASN-46475-LSN-01). ');
$ax += cidrblock($address, '69.162.64.0/18', 'Limestone Networks AS46475 (ASN-46475-LSN-02). ');
$ax += cidrblock($address, '74.63.192.0/18', 'Limestone Networks AS46475 (ASN-46475-LSN-03). ');
$ax += cidrblock($address, '103.3.166.0/24', 'Limestone Networks AS46475 (ASN-46475-LSN-04). ');
$ax += cidrblock($address, '103.60.218.0/24', 'Limestone Networks AS46475 (ASN-46475-LSN-05). ');
$ax += cidrblock($address, '135.84.217.0/24', 'Limestone Networks AS46475 (ASN-46475-LSN-06). ');
$ax += cidrblock($address, '162.253.40.0/22', 'Limestone Networks AS46475 (ASN-46475-LSN-07). ');
$ax += cidrblock($address, '192.169.80.0/20', 'Limestone Networks AS46475 (ASN-46475-LSN-08). ');
$ax += cidrblock($address, '208.115.192.0/18', 'Limestone Networks AS46475 (ASN-46475-LSN-09). ');
$ax += cidrblock($address, '216.144.240.0/20', 'Limestone Networks AS46475 (ASN-46475-LSN-10). ');
$ax += cidrblock($address, '216.245.192.0/19', 'Limestone Networks AS46475 (ASN-46475-LSN-11). ');


// Redstation Network (updated 2016.05.21)
// AS35662
$ax += cidrblock($address, '5.152.192.0/19', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-00). ');
$ax += cidrblock($address, '31.3.224.0/19', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-01). ');
$ax += cidrblock($address, '37.157.240.0/21', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-02). ');
$ax += cidrblock($address, '37.220.0.0/19', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-03). ');
$ax += cidrblock($address, '77.245.64.0/20', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-04). ');
$ax += cidrblock($address, '79.143.80.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-05). ');
$ax += cidrblock($address, '80.84.48.0/20', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-06). ');
$ax += cidrblock($address, '80.243.176.0/20', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-07). ');
$ax += cidrblock($address, '81.94.192.0/20', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-08). ');
$ax += cidrblock($address, '82.102.8.0/24', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-09). ');
$ax += cidrblock($address, '87.236.209.0/24', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-10). ');
$ax += cidrblock($address, '87.236.214.0/24', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-11). ');
$ax += cidrblock($address, '88.150.128.0/21', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-12). ');
$ax += cidrblock($address, '88.150.136.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-13). ');
$ax += cidrblock($address, '88.150.148.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-14). ');
$ax += cidrblock($address, '88.150.152.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-15). ');
$ax += cidrblock($address, '88.150.172.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-16). ');
$ax += cidrblock($address, '88.150.176.0/20', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-17). ');
$ax += cidrblock($address, '88.150.192.0/19', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-18). ');
$ax += cidrblock($address, '88.150.224.0/20', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-19). ');
$ax += cidrblock($address, '88.150.242.0/23', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-20). ');
$ax += cidrblock($address, '88.150.244.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-21). ');
$ax += cidrblock($address, '88.150.248.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-22). ');
$ax += cidrblock($address, '91.225.0.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-23). ');
$ax += cidrblock($address, '91.228.206.0/24', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-24). ');
$ax += cidrblock($address, '91.238.100.0/24', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-25). ');
$ax += cidrblock($address, '109.73.64.0/20', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-26). ');
$ax += cidrblock($address, '109.200.0.0/19', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-27). ');
$ax += cidrblock($address, '149.3.128.0/20', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-28). ');
$ax += cidrblock($address, '176.56.192.0/19', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-29). ');
$ax += cidrblock($address, '176.227.192.0/19', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-30). ');
$ax += cidrblock($address, '185.5.0.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-31). ');
$ax += cidrblock($address, '185.20.96.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-32). ');
$ax += cidrblock($address, '185.36.76.0/22', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-33). ');
$ax += cidrblock($address, '188.72.99.0/24', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-34). ');
$ax += cidrblock($address, '188.212.122.0/23', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-35). ');
$ax += cidrblock($address, '188.227.160.0/19', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-36). ');
$ax += cidrblock($address, '190.121.209.0/24', 'Redstation Limited, not an access provider ISP (ASN-35662-REDSTATION-37). ');


// AnchorFree Ltd network (updated 2016.01.19 / checked 2016.07.09)
// AS26642
$ax += cidrblock($address, '46.16.34.0/23', 'AnchorFree Ltd network (ASN-26642-ANCHORFREE-00). ');
$ax += cidrblock($address, '74.115.3.0/24', 'AnchorFree Ltd network (ASN-26642-ANCHORFREE-01). ');
$ax += cidrblock($address, '74.115.5.0/24', 'AnchorFree Ltd network (ASN-26642-ANCHORFREE-02). ');
$ax += cidrblock($address, '85.237.197.0/24', 'AnchorFree Ltd network (ASN-26642-ANCHORFREE-03). ');
$ax += cidrblock($address, '85.237.222.0/24', 'AnchorFree Ltd network (ASN-26642-ANCHORFREE-04). ');


// CH-NET S.R.L. (updated 2016.03.04 / checked 2016.05.15)
// Romainian network trying to hack user accounts.
// AS41011
$ax += cidrblock($address, '89.41.172.0/23', 'Romainian network trying to hack user accounts (ASN-41011-00). ');
$ax += cidrblock($address, '93.113.36.0/23', 'Romainian network trying to hack user accounts (ASN-41011-01). ');
$ax += cidrblock($address, '93.115.240.0/23', 'Romainian network trying to hack user accounts (ASN-41011-02). ');
$ax += cidrblock($address, '93.188.205.0/24', 'Romainian network trying to hack user accounts (ASN-41011-03). ');
$ax += cidrblock($address, '185.123.220.0/22', 'Romainian network trying to hack user accounts (ASN-41011-04). ');
$ax += cidrblock($address, '185.125.192.0/22', 'Romainian network trying to hack user accounts (ASN-41011-05). ');
$ax += cidrblock($address, '188.208.32.0/23', 'Romainian network trying to hack user accounts (ASN-41011-06). ');
$ax += cidrblock($address, '188.213.232.0/24', 'Romainian network trying to hack user accounts (ASN-41011-07). ');
$ax += cidrblock($address, '188.214.159.0/24', 'Romainian network trying to hack user accounts (ASN-41011-08). ');
$ax += cidrblock($address, '188.214.192.0/24', 'Romainian network trying to hack user accounts (ASN-41011-09). ');


// Swiftway / Botmaster Labs (updated 2016.04.23)
// AS35017
$ax += cidrblock($address, '5.56.133.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-00). ');
$ax += cidrblock($address, '23.227.192.0/20', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-01). ');
$ax += cidrblock($address, '31.187.78.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-02). ');
$ax += cidrblock($address, '37.1.208.0/21', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-03). ');
$ax += cidrblock($address, '37.72.168.0/21', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-04). ');
$ax += cidrblock($address, '38.69.204.0/22', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-05). ');
$ax += cidrblock($address, '45.74.17.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-06). ');
$ax += cidrblock($address, '45.74.18.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-07). ');
$ax += cidrblock($address, '45.74.20.0/22', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-08). ');
$ax += cidrblock($address, '45.74.24.0/21', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-09). ');
$ax += cidrblock($address, '45.74.32.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-10). ');
$ax += cidrblock($address, '45.74.34.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-11). ');
$ax += cidrblock($address, '45.74.40.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-12). ');
$ax += cidrblock($address, '45.74.47.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-13). ');
$ax += cidrblock($address, '45.74.48.0/21', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-14). ');
$ax += cidrblock($address, '45.74.56.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-15). ');
$ax += cidrblock($address, '46.21.144.0/20', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-16). ');
$ax += cidrblock($address, '46.243.150.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-17). ');
$ax += cidrblock($address, '69.1.69.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-18). ');
$ax += cidrblock($address, '89.233.104.0/21', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-19). ');
$ax += cidrblock($address, '91.199.45.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-20). ');
$ax += cidrblock($address, '91.239.64.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-21). ');
$ax += cidrblock($address, '94.100.16.0/20', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-22). ');
$ax += cidrblock($address, '104.143.32.0/20', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-23). ');
$ax += cidrblock($address, '104.243.251.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-24). ');
$ax += cidrblock($address, '104.250.160.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-25). ');
$ax += cidrblock($address, '114.31.208.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-26). ');
$ax += cidrblock($address, '114.31.210.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-27). ');
$ax += cidrblock($address, '114.141.112.0/21', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-28). ');
$ax += cidrblock($address, '149.154.158.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-29). ');
$ax += cidrblock($address, '149.255.32.0/21', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-30). ');
$ax += cidrblock($address, '151.236.16.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-31). ');
$ax += cidrblock($address, '151.236.22.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-32). ');
$ax += cidrblock($address, '158.255.213.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-33). ');
$ax += cidrblock($address, '162.252.172.0/22', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-34). ');
$ax += cidrblock($address, '172.94.10.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-35). ');
$ax += cidrblock($address, '172.94.19.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-36). ');
$ax += cidrblock($address, '172.94.21.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-37). ');
$ax += cidrblock($address, '172.94.28.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-38). ');
$ax += cidrblock($address, '172.94.64.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-39). ');
$ax += cidrblock($address, '172.94.67.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-40). ');
$ax += cidrblock($address, '172.94.68.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-41). ');
$ax += cidrblock($address, '172.94.70.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-42). ');
$ax += cidrblock($address, '172.94.72.0/21', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-43). ');
$ax += cidrblock($address, '172.94.80.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-44). ');
$ax += cidrblock($address, '172.94.92.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-45). ');
$ax += cidrblock($address, '172.94.113.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-46). ');
$ax += cidrblock($address, '172.94.114.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-47). ');
$ax += cidrblock($address, '172.111.136.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-48). ');
$ax += cidrblock($address, '172.111.152.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-49). ');
$ax += cidrblock($address, '191.101.20.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-50). ');
$ax += cidrblock($address, '191.101.31.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-51). ');
$ax += cidrblock($address, '193.221.125.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-52). ');
$ax += cidrblock($address, '194.126.172.0/22', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-53). ');
$ax += cidrblock($address, '195.242.152.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-54). ');
$ax += cidrblock($address, '198.176.48.0/20', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-55). ');
$ax += cidrblock($address, '206.123.146.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-56). ');
$ax += cidrblock($address, '206.123.150.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-57). ');
$ax += cidrblock($address, '206.123.152.0/21', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-58). ');
$ax += cidrblock($address, '209.222.76.0/24', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-59). ');
$ax += cidrblock($address, '209.251.26.0/23', 'Swiftway / Botmaster Labs AS35017 (ASN-35017-SWIFTWAY-60). ');


// SoftLayer Technologies; Hostile & Spam Tolerant Networks
// AS21844, AS36351 (updated 2016.05.21)
$ax += cidrblock($address, '5.10.64.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-000). ');
$ax += cidrblock($address, '5.62.21.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-001). ');
$ax += cidrblock($address, '5.153.0.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-002). ');
$ax += cidrblock($address, '12.96.160.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-003). ');
$ax += cidrblock($address, '23.91.120.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-004). ');
$ax += cidrblock($address, '23.239.24.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-005). ');
$ax += cidrblock($address, '23.246.192.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-006). ');
$ax += cidrblock($address, '23.252.100.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-007). ');
$ax += cidrblock($address, '27.100.36.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-008). ');
$ax += cidrblock($address, '31.24.225.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-09). ');
$ax += cidrblock($address, '37.18.176.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-010). ');
$ax += cidrblock($address, '37.58.64.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-011). ');
$ax += cidrblock($address, '37.60.246.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-012). ');
$ax += cidrblock($address, '37.60.254.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-013). ');
$ax += cidrblock($address, '37.130.224.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-014). ');
$ax += cidrblock($address, '43.226.228.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-015). ');
$ax += cidrblock($address, '43.226.230.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-016). ');
$ax += cidrblock($address, '43.228.157.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-017). ');
$ax += cidrblock($address, '43.228.159.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-018). ');
$ax += cidrblock($address, '43.245.117.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-019). ');
$ax += cidrblock($address, '43.245.168.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-020). ');
$ax += cidrblock($address, '43.250.48.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-021). ');
$ax += cidrblock($address, '43.255.188.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-022). ');
$ax += cidrblock($address, '45.33.0.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-023). ');
$ax += cidrblock($address, '45.33.112.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-024). ');
$ax += cidrblock($address, '45.41.133.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-025). ');
$ax += cidrblock($address, '45.41.135.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-026). ');
$ax += cidrblock($address, '45.56.64.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-027). ');
$ax += cidrblock($address, '45.56.120.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-028). ');
$ax += cidrblock($address, '45.56.131.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-029). ');
$ax += cidrblock($address, '45.56.146.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-030). ');
$ax += cidrblock($address, '45.56.151.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-031). ');
$ax += cidrblock($address, '45.56.152.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-032). ');
$ax += cidrblock($address, '45.74.39.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-033). ');
$ax += cidrblock($address, '45.74.41.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-034). ');
$ax += cidrblock($address, '45.74.42.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-035). ');
$ax += cidrblock($address, '45.74.44.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-036). ');
$ax += cidrblock($address, '45.74.59.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-037). ');
$ax += cidrblock($address, '45.74.60.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-038). ');
$ax += cidrblock($address, '45.79.0.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-039). ');
$ax += cidrblock($address, '45.115.25.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-040). ');
$ax += cidrblock($address, '45.116.12.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-041). ');
$ax += cidrblock($address, '45.117.100.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-042). ');
$ax += cidrblock($address, '45.120.156.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-043). ');
$ax += cidrblock($address, '45.120.159.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-044). ');
$ax += cidrblock($address, '45.124.64.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-045). ');
$ax += cidrblock($address, '45.125.0.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-046). ');
$ax += cidrblock($address, '45.127.92.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-047). ');
$ax += cidrblock($address, '46.16.184.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-048). ');
$ax += cidrblock($address, '50.22.0.0/15', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-049). ');
$ax += cidrblock($address, '50.97.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-050). ');
$ax += cidrblock($address, '50.116.16.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-051). ');
$ax += cidrblock($address, '52.128.24.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-052). ');
$ax += cidrblock($address, '52.128.28.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-053). ');
$ax += cidrblock($address, '63.141.128.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-054). ');
$ax += cidrblock($address, '64.5.32.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-055). ');
$ax += cidrblock($address, '64.64.121.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-056). ');
$ax += cidrblock($address, '64.246.0.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-057). ');
$ax += cidrblock($address, '65.181.111.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-058). ');
$ax += cidrblock($address, '66.98.128.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-059). ');
$ax += cidrblock($address, '66.228.48.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-060). ');
$ax += cidrblock($address, '66.228.112.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-061). ');
$ax += cidrblock($address, '66.241.112.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-062). ');
$ax += cidrblock($address, '67.15.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-063). ');
$ax += cidrblock($address, '67.18.0.0/15', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-064). ');
$ax += cidrblock($address, '67.213.208.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-065). ');
$ax += cidrblock($address, '67.213.216.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-066). ');
$ax += cidrblock($address, '67.213.218.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-067). ');
$ax += cidrblock($address, '67.213.220.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-068). ');
$ax += cidrblock($address, '67.228.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-069). ');
$ax += cidrblock($address, '69.4.224.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-070). ');
$ax += cidrblock($address, '69.41.224.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-071). ');
$ax += cidrblock($address, '69.56.128.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-072). ');
$ax += cidrblock($address, '69.57.128.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-073). ');
$ax += cidrblock($address, '69.93.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-074). ');
$ax += cidrblock($address, '69.164.192.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-075). ');
$ax += cidrblock($address, '69.168.235.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-076). ');
$ax += cidrblock($address, '69.168.236.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-077). ');
$ax += cidrblock($address, '69.168.238.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-078). ');
$ax += cidrblock($address, '70.84.0.0/14', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-079). ');
$ax += cidrblock($address, '72.14.176.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-080). ');
$ax += cidrblock($address, '74.52.0.0/14', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-081). ');
$ax += cidrblock($address, '74.86.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-082). ');
$ax += cidrblock($address, '74.116.84.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-083). ');
$ax += cidrblock($address, '74.121.54.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-084). ');
$ax += cidrblock($address, '75.125.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-085). ');
$ax += cidrblock($address, '75.126.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-086). ');
$ax += cidrblock($address, '77.104.128.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-087). ');
$ax += cidrblock($address, '77.104.132.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-088). ');
$ax += cidrblock($address, '77.104.134.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-089). ');
$ax += cidrblock($address, '77.104.140.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-090). ');
$ax += cidrblock($address, '77.104.142.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-091). ');
$ax += cidrblock($address, '81.95.144.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-092). ');
$ax += cidrblock($address, '85.203.20.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-093). ');
$ax += cidrblock($address, '85.203.23.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-094). ');
$ax += cidrblock($address, '85.203.44.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-095). ');
$ax += cidrblock($address, '85.203.47.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-096). ');
$ax += cidrblock($address, '86.105.160.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-097). ');
$ax += cidrblock($address, '86.106.120.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-098). ');
$ax += cidrblock($address, '89.37.28.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-99). ');
$ax += cidrblock($address, '89.38.52.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-100). ');
$ax += cidrblock($address, '89.43.51.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-101). ');
$ax += cidrblock($address, '93.114.92.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-102). ');
$ax += cidrblock($address, '93.115.48.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-103). ');
$ax += cidrblock($address, '96.47.32.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-104). ');
$ax += cidrblock($address, '96.47.40.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-105). ');
$ax += cidrblock($address, '96.126.112.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-106). ');
$ax += cidrblock($address, '100.42.50.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-107). ');
$ax += cidrblock($address, '100.42.52.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-108). ');
$ax += cidrblock($address, '100.42.56.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-109). ');
$ax += cidrblock($address, '103.4.192.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-110). ');
$ax += cidrblock($address, '103.19.0.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-111). ');
$ax += cidrblock($address, '103.26.204.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-112). ');
$ax += cidrblock($address, '103.27.76.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-113). ');
$ax += cidrblock($address, '103.41.172.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-114). ');
$ax += cidrblock($address, '103.44.72.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-115). ');
$ax += cidrblock($address, '103.46.141.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-116). ');
$ax += cidrblock($address, '103.46.143.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-117). ');
$ax += cidrblock($address, '103.53.196.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-118). ');
$ax += cidrblock($address, '103.56.52.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-119). ');
$ax += cidrblock($address, '103.56.216.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-120). ');
$ax += cidrblock($address, '103.57.165.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-121). ');
$ax += cidrblock($address, '103.57.166.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-122). ');
$ax += cidrblock($address, '103.192.176.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-123). ');
$ax += cidrblock($address, '103.192.178.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-124). ');
$ax += cidrblock($address, '103.192.224.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-125). ');
$ax += cidrblock($address, '103.193.4.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-126). ');
$ax += cidrblock($address, '103.193.128.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-127). ');
$ax += cidrblock($address, '103.194.40.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-128). ');
$ax += cidrblock($address, '103.194.43.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-129). ');
$ax += cidrblock($address, '103.195.150.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-130). ');
$ax += cidrblock($address, '103.197.160.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-131). ');
$ax += cidrblock($address, '103.197.252.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-132). ');
$ax += cidrblock($address, '103.198.76.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-133). ');
$ax += cidrblock($address, '103.200.96.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-134). ');
$ax += cidrblock($address, '103.200.112.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-135). ');
$ax += cidrblock($address, '103.201.128.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-136). ');
$ax += cidrblock($address, '103.201.130.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-137). ');
$ax += cidrblock($address, '103.203.56.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-138). ');
$ax += cidrblock($address, '103.203.90.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-139). ');
$ax += cidrblock($address, '103.204.13.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-140). ');
$ax += cidrblock($address, '103.204.172.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-141). ');
$ax += cidrblock($address, '103.207.68.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-142). ');
$ax += cidrblock($address, '103.208.220.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-143). ');
$ax += cidrblock($address, '103.226.228.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-144). ');
$ax += cidrblock($address, '103.227.156.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-145). ');
$ax += cidrblock($address, '103.227.208.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-146). ');
$ax += cidrblock($address, '103.243.19.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-147). ');
$ax += cidrblock($address, '103.243.72.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-148). ');
$ax += cidrblock($address, '103.243.144.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-149). ');
$ax += cidrblock($address, '103.243.204.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-150). ');
$ax += cidrblock($address, '104.37.3.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-151). ');
$ax += cidrblock($address, '104.37.5.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-152). ');
$ax += cidrblock($address, '104.152.64.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-153). ');
$ax += cidrblock($address, '104.167.30.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-154). ');
$ax += cidrblock($address, '104.167.217.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-155). ');
$ax += cidrblock($address, '104.171.0.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-156). ');
$ax += cidrblock($address, '104.171.4.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-157). ');
$ax += cidrblock($address, '104.171.9.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-158). ');
$ax += cidrblock($address, '104.171.10.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-159). ');
$ax += cidrblock($address, '104.171.13.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-160). ');
$ax += cidrblock($address, '104.171.14.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-161). ');
$ax += cidrblock($address, '104.193.183.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-162). ');
$ax += cidrblock($address, '104.193.184.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-163). ');
$ax += cidrblock($address, '104.194.203.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-164). ');
$ax += cidrblock($address, '104.194.216.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-165). ');
$ax += cidrblock($address, '104.195.64.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-166). ');
$ax += cidrblock($address, '104.195.80.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-167). ');
$ax += cidrblock($address, '104.195.84.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-168). ');
$ax += cidrblock($address, '104.200.16.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-169). ');
$ax += cidrblock($address, '104.207.69.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-170). ');
$ax += cidrblock($address, '104.207.76.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-171). ');
$ax += cidrblock($address, '104.207.83.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-172). ');
$ax += cidrblock($address, '104.207.84.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-173). ');
$ax += cidrblock($address, '104.222.131.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-174). ');
$ax += cidrblock($address, '104.222.140.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-175). ');
$ax += cidrblock($address, '104.222.145.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-176). ');
$ax += cidrblock($address, '104.222.149.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-177). ');
$ax += cidrblock($address, '104.237.91.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-178). ');
$ax += cidrblock($address, '104.237.93.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-179). ');
$ax += cidrblock($address, '104.237.128.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-180). ');
$ax += cidrblock($address, '104.238.51.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-181). ');
$ax += cidrblock($address, '104.238.57.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-182). ');
$ax += cidrblock($address, '104.238.59.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-183). ');
$ax += cidrblock($address, '104.243.245.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-184). ');
$ax += cidrblock($address, '104.243.249.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-185). ');
$ax += cidrblock($address, '104.243.253.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-186). ');
$ax += cidrblock($address, '104.245.12.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-187). ');
$ax += cidrblock($address, '104.249.128.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-188). ');
$ax += cidrblock($address, '104.250.172.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-189). ');
$ax += cidrblock($address, '104.250.179.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-190). ');
$ax += cidrblock($address, '104.250.183.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-191). ');
$ax += cidrblock($address, '104.251.239.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-192). ');
$ax += cidrblock($address, '107.153.20.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-193). ');
$ax += cidrblock($address, '107.168.32.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-194). ');
$ax += cidrblock($address, '107.168.48.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-195). ');
$ax += cidrblock($address, '107.168.70.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-196). ');
$ax += cidrblock($address, '107.168.80.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-197). ');
$ax += cidrblock($address, '108.167.162.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-198). ');
$ax += cidrblock($address, '108.168.128.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-199). ');
$ax += cidrblock($address, '108.174.144.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-200). ');
$ax += cidrblock($address, '108.174.154.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-201). ');
$ax += cidrblock($address, '108.174.156.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-202). ');
$ax += cidrblock($address, '108.175.147.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-203). ');
$ax += cidrblock($address, '108.175.148.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-204). ');
$ax += cidrblock($address, '108.175.150.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-205). ');
$ax += cidrblock($address, '108.175.152.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-206). ');
$ax += cidrblock($address, '108.175.157.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-207). ');
$ax += cidrblock($address, '108.175.158.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-208). ');
$ax += cidrblock($address, '108.229.0.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-209). ');
$ax += cidrblock($address, '109.73.228.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-210). ');
$ax += cidrblock($address, '109.73.234.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-211). ');
$ax += cidrblock($address, '109.199.117.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-212). ');
$ax += cidrblock($address, '109.199.119.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-213). ');
$ax += cidrblock($address, '109.199.122.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-214). ');
$ax += cidrblock($address, '109.199.126.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-215). ');
$ax += cidrblock($address, '115.124.32.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-216). ');
$ax += cidrblock($address, '116.213.44.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-217). ');
$ax += cidrblock($address, '119.18.48.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-218). ');
$ax += cidrblock($address, '119.18.53.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-219). ');
$ax += cidrblock($address, '119.18.56.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-220). ');
$ax += cidrblock($address, '119.81.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-221). ');
$ax += cidrblock($address, '122.10.103.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-222). ');
$ax += cidrblock($address, '122.128.96.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-223). ');
$ax += cidrblock($address, '124.108.23.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-224). ');
$ax += cidrblock($address, '129.33.138.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-225). ');
$ax += cidrblock($address, '129.33.243.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-226). ');
$ax += cidrblock($address, '129.35.158.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-227). ');
$ax += cidrblock($address, '129.35.176.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-228). ');
$ax += cidrblock($address, '129.35.180.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-229). ');
$ax += cidrblock($address, '129.35.182.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-230). ');
$ax += cidrblock($address, '129.35.190.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-231). ');
$ax += cidrblock($address, '129.35.236.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-232). ');
$ax += cidrblock($address, '129.35.238.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-233). ');
$ax += cidrblock($address, '129.41.128.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-234). ');
$ax += cidrblock($address, '129.41.181.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-235). ');
$ax += cidrblock($address, '129.41.184.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-236). ');
$ax += cidrblock($address, '129.41.222.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-237). ');
$ax += cidrblock($address, '129.41.224.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-238). ');
$ax += cidrblock($address, '129.42.18.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-239). ');
$ax += cidrblock($address, '129.42.20.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-240). ');
$ax += cidrblock($address, '134.168.0.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-241). ');
$ax += cidrblock($address, '138.204.168.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-242). ');
$ax += cidrblock($address, '142.147.95.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-243). ');
$ax += cidrblock($address, '146.88.128.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-244). ');
$ax += cidrblock($address, '146.88.135.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-245). ');
$ax += cidrblock($address, '147.75.130.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-246). ');
$ax += cidrblock($address, '147.75.132.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-247). ');
$ax += cidrblock($address, '149.75.192.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-248). ');
$ax += cidrblock($address, '153.92.41.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-249). ');
$ax += cidrblock($address, '153.92.43.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-250). ');
$ax += cidrblock($address, '153.92.44.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-251). ');
$ax += cidrblock($address, '153.92.46.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-252). ');
$ax += cidrblock($address, '154.16.96.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-253). ');
$ax += cidrblock($address, '155.254.246.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-254). ');
$ax += cidrblock($address, '158.85.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-255). ');
$ax += cidrblock($address, '159.8.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-256). ');
$ax += cidrblock($address, '159.100.176.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-257). ');
$ax += cidrblock($address, '159.100.184.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-258). ');
$ax += cidrblock($address, '159.100.188.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-259). ');
$ax += cidrblock($address, '159.100.190.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-260). ');
$ax += cidrblock($address, '159.122.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-261). ');
$ax += cidrblock($address, '159.253.128.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-262). ');
$ax += cidrblock($address, '161.202.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-263). ');
$ax += cidrblock($address, '162.210.48.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-264). ');
$ax += cidrblock($address, '162.246.184.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-265). ');
$ax += cidrblock($address, '162.253.144.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-266). ');
$ax += cidrblock($address, '162.254.160.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-267). ');
$ax += cidrblock($address, '165.212.98.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-268). ');
$ax += cidrblock($address, '165.212.240.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-269). ');
$ax += cidrblock($address, '167.160.113.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-270). ');
$ax += cidrblock($address, '168.1.0.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-271). ');
$ax += cidrblock($address, '168.1.128.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-272). ');
$ax += cidrblock($address, '168.227.36.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-273). ');
$ax += cidrblock($address, '169.38.64.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-274). ');
$ax += cidrblock($address, '169.44.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-275). ');
$ax += cidrblock($address, '169.45.0.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-276). ');
$ax += cidrblock($address, '169.45.64.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-277). ');
$ax += cidrblock($address, '169.45.128.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-278). ');
$ax += cidrblock($address, '169.46.0.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-279). ');
$ax += cidrblock($address, '169.50.0.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-280). ');
$ax += cidrblock($address, '169.50.128.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-281). ');
$ax += cidrblock($address, '169.53.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-282). ');
$ax += cidrblock($address, '169.54.0.0/15', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-283). ');
$ax += cidrblock($address, '169.56.128.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-284). ');
$ax += cidrblock($address, '169.57.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-285). ');
$ax += cidrblock($address, '170.224.168.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-286). ');
$ax += cidrblock($address, '170.224.170.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-287). ');
$ax += cidrblock($address, '170.224.208.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-288). ');
$ax += cidrblock($address, '172.81.110.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-289). ');
$ax += cidrblock($address, '172.94.3.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-290). ');
$ax += cidrblock($address, '172.94.4.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-291). ');
$ax += cidrblock($address, '172.94.6.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-292). ');
$ax += cidrblock($address, '172.94.27.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-293). ');
$ax += cidrblock($address, '172.94.29.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-294). ');
$ax += cidrblock($address, '172.94.39.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-295). ');
$ax += cidrblock($address, '172.94.46.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-296). ');
$ax += cidrblock($address, '172.94.48.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-297). ');
$ax += cidrblock($address, '172.94.82.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-298). ');
$ax += cidrblock($address, '172.94.84.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-299). ');
$ax += cidrblock($address, '172.94.86.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-300). ');
$ax += cidrblock($address, '172.94.88.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-301). ');
$ax += cidrblock($address, '172.94.94.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-302). ');
$ax += cidrblock($address, '172.94.100.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-303). ');
$ax += cidrblock($address, '172.94.103.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-304). ');
$ax += cidrblock($address, '172.94.104.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-305). ');
$ax += cidrblock($address, '172.94.111.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-306). ');
$ax += cidrblock($address, '172.94.116.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-307). ');
$ax += cidrblock($address, '172.94.118.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-308). ');
$ax += cidrblock($address, '172.94.120.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-309). ');
$ax += cidrblock($address, '172.111.135.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-310). ');
$ax += cidrblock($address, '172.111.137.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-311). ');
$ax += cidrblock($address, '172.111.139.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-312). ');
$ax += cidrblock($address, '172.111.142.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-313). ');
$ax += cidrblock($address, '172.111.145.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-314). ');
$ax += cidrblock($address, '172.111.147.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-315). ');
$ax += cidrblock($address, '172.111.153.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-316). ');
$ax += cidrblock($address, '172.111.155.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-317). ');
$ax += cidrblock($address, '172.111.161.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-318). ');
$ax += cidrblock($address, '172.111.162.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-319). ');
$ax += cidrblock($address, '172.111.164.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-320). ');
$ax += cidrblock($address, '172.111.167.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-321). ');
$ax += cidrblock($address, '172.111.168.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-322). ');
$ax += cidrblock($address, '172.111.172.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-323). ');
$ax += cidrblock($address, '172.111.176.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-324). ');
$ax += cidrblock($address, '172.111.178.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-325). ');
$ax += cidrblock($address, '172.111.180.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-326). ');
$ax += cidrblock($address, '172.111.186.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-327). ');
$ax += cidrblock($address, '172.111.189.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-328). ');
$ax += cidrblock($address, '172.111.192.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-329). ');
$ax += cidrblock($address, '172.111.236.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-330). ');
$ax += cidrblock($address, '172.111.240.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-331). ');
$ax += cidrblock($address, '173.192.0.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-332). ');
$ax += cidrblock($address, '173.192.128.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-333). ');
$ax += cidrblock($address, '173.192.192.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-334). ');
$ax += cidrblock($address, '173.192.224.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-335). ');
$ax += cidrblock($address, '173.192.240.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-336). ');
$ax += cidrblock($address, '173.192.244.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-337). ');
$ax += cidrblock($address, '173.192.248.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-338). ');
$ax += cidrblock($address, '173.193.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-339). ');
$ax += cidrblock($address, '173.239.207.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-340). ');
$ax += cidrblock($address, '173.244.192.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-341). ');
$ax += cidrblock($address, '173.244.194.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-342). ');
$ax += cidrblock($address, '173.244.196.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-343). ');
$ax += cidrblock($address, '173.244.199.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-344). ');
$ax += cidrblock($address, '173.244.203.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-345). ');
$ax += cidrblock($address, '173.244.204.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-346). ');
$ax += cidrblock($address, '173.244.210.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-347). ');
$ax += cidrblock($address, '173.244.212.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-348). ');
$ax += cidrblock($address, '173.244.216.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-349). ');
$ax += cidrblock($address, '173.244.218.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-350). ');
$ax += cidrblock($address, '173.244.220.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-351). ');
$ax += cidrblock($address, '173.255.132.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-352). ');
$ax += cidrblock($address, '173.255.136.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-353). ');
$ax += cidrblock($address, '173.255.192.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-354). ');
$ax += cidrblock($address, '174.36.0.0/15', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-355). ');
$ax += cidrblock($address, '174.120.0.0/14', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-356). ');
$ax += cidrblock($address, '174.127.64.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-357). ');
$ax += cidrblock($address, '174.127.68.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-358). ');
$ax += cidrblock($address, '174.127.71.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-359). ');
$ax += cidrblock($address, '174.127.72.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-360). ');
$ax += cidrblock($address, '174.127.76.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-361). ');
$ax += cidrblock($address, '174.127.78.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-362). ');
$ax += cidrblock($address, '174.127.80.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-363). ');
$ax += cidrblock($address, '174.127.85.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-364). ');
$ax += cidrblock($address, '174.127.86.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-365). ');
$ax += cidrblock($address, '174.127.88.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-366). ');
$ax += cidrblock($address, '174.127.90.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-367). ');
$ax += cidrblock($address, '174.127.92.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-368). ');
$ax += cidrblock($address, '174.127.96.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-369). ');
$ax += cidrblock($address, '174.132.0.0/15', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-370). ');
$ax += cidrblock($address, '175.158.105.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-371). ');
$ax += cidrblock($address, '175.158.107.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-372). ');
$ax += cidrblock($address, '176.126.68.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-373). ');
$ax += cidrblock($address, '176.126.72.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-374). ');
$ax += cidrblock($address, '177.136.8.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-375). ');
$ax += cidrblock($address, '179.61.246.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-376). ');
$ax += cidrblock($address, '179.61.250.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-377). ');
$ax += cidrblock($address, '180.235.137.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-378). ');
$ax += cidrblock($address, '180.235.138.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-379). ');
$ax += cidrblock($address, '181.41.128.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-380). ');
$ax += cidrblock($address, '181.41.193.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-381). ');
$ax += cidrblock($address, '181.224.149.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-382). ');
$ax += cidrblock($address, '181.224.150.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-383). ');
$ax += cidrblock($address, '181.224.156.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-384). ');
$ax += cidrblock($address, '184.172.0.0/15', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-385). ');
$ax += cidrblock($address, '185.10.228.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-386). ');
$ax += cidrblock($address, '185.13.56.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-387). ');
$ax += cidrblock($address, '185.21.132.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-388). ');
$ax += cidrblock($address, '185.51.164.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-389). ');
$ax += cidrblock($address, '185.62.236.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-390). ');
$ax += cidrblock($address, '185.74.47.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-391). ');
$ax += cidrblock($address, '185.99.135.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-392). ');
$ax += cidrblock($address, '185.106.204.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-393). ');
$ax += cidrblock($address, '185.115.241.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-394). ');
$ax += cidrblock($address, '185.123.96.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-395). ');
$ax += cidrblock($address, '185.147.58.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-396). ');
$ax += cidrblock($address, '188.72.100.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-397). ');
$ax += cidrblock($address, '188.214.40.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-398). ');
$ax += cidrblock($address, '188.240.32.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-399). ');
$ax += cidrblock($address, '190.105.194.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-400). ');
$ax += cidrblock($address, '191.96.49.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-401). ');
$ax += cidrblock($address, '191.96.64.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-402). ');
$ax += cidrblock($address, '191.96.103.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-403). ');
$ax += cidrblock($address, '191.96.105.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-404). ');
$ax += cidrblock($address, '191.101.56.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-405). ');
$ax += cidrblock($address, '191.101.63.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-406). ');
$ax += cidrblock($address, '191.101.135.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-407). ');
$ax += cidrblock($address, '191.101.179.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-408). ');
$ax += cidrblock($address, '192.40.176.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-409). ');
$ax += cidrblock($address, '192.77.241.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-410). ');
$ax += cidrblock($address, '192.81.139.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-411). ');
$ax += cidrblock($address, '192.86.39.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-412). ');
$ax += cidrblock($address, '192.155.192.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-413). ');
$ax += cidrblock($address, '192.156.219.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-414). ');
$ax += cidrblock($address, '192.169.48.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-415). ');
$ax += cidrblock($address, '192.200.160.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-416). ');
$ax += cidrblock($address, '192.230.46.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-417). ');
$ax += cidrblock($address, '192.240.209.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-418). ');
$ax += cidrblock($address, '192.240.215.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-419). ');
$ax += cidrblock($address, '192.253.242.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-420). ');
$ax += cidrblock($address, '192.253.248.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-421). ');
$ax += cidrblock($address, '192.253.252.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-422). ');
$ax += cidrblock($address, '192.255.0.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-423). ');
$ax += cidrblock($address, '196.45.123.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-424). ');
$ax += cidrblock($address, '198.11.192.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-425). ');
$ax += cidrblock($address, '198.23.64.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-426). ');
$ax += cidrblock($address, '198.58.80.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-427). ');
$ax += cidrblock($address, '198.58.82.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-428). ');
$ax += cidrblock($address, '198.58.84.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-429). ');
$ax += cidrblock($address, '198.58.86.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-430). ');
$ax += cidrblock($address, '198.58.88.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-431). ');
$ax += cidrblock($address, '198.58.96.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-432). ');
$ax += cidrblock($address, '198.105.221.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-433). ');
$ax += cidrblock($address, '198.105.222.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-434). ');
$ax += cidrblock($address, '198.144.16.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-435). ');
$ax += cidrblock($address, '198.144.24.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-436). ');
$ax += cidrblock($address, '198.144.28.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-437). ');
$ax += cidrblock($address, '198.144.30.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-438). ');
$ax += cidrblock($address, '198.252.64.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-439). ');
$ax += cidrblock($address, '198.252.96.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-440). ');
$ax += cidrblock($address, '198.252.100.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-441). ');
$ax += cidrblock($address, '198.252.104.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-442). ');
$ax += cidrblock($address, '199.166.34.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-443). ');
$ax += cidrblock($address, '199.167.226.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-444). ');
$ax += cidrblock($address, '199.185.180.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-445). ');
$ax += cidrblock($address, '199.187.172.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-446). ');
$ax += cidrblock($address, '199.195.192.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-447). ');
$ax += cidrblock($address, '199.244.72.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-448). ');
$ax += cidrblock($address, '199.255.32.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-449). ');
$ax += cidrblock($address, '202.5.220.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-450). ');
$ax += cidrblock($address, '202.5.223.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-451). ');
$ax += cidrblock($address, '202.81.5.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-452). ');
$ax += cidrblock($address, '202.170.196.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-453). ');
$ax += cidrblock($address, '203.27.26.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-454). ');
$ax += cidrblock($address, '203.57.74.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-455). ');
$ax += cidrblock($address, '203.76.244.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-456). ');
$ax += cidrblock($address, '203.76.246.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-457). ');
$ax += cidrblock($address, '205.201.138.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-458). ');
$ax += cidrblock($address, '206.190.155.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-459). ');
$ax += cidrblock($address, '206.190.156.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-460). ');
$ax += cidrblock($address, '206.217.192.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-461). ');
$ax += cidrblock($address, '206.217.200.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-462). ');
$ax += cidrblock($address, '206.217.208.0/20', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-463). ');
$ax += cidrblock($address, '206.253.232.0/21', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-464). ');
$ax += cidrblock($address, '206.253.248.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-465). ');
$ax += cidrblock($address, '207.44.128.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-466). ');
$ax += cidrblock($address, '207.189.184.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-467). ');
$ax += cidrblock($address, '207.218.192.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-468). ');
$ax += cidrblock($address, '208.43.0.0/16', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-469). ');
$ax += cidrblock($address, '208.73.4.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-470). ');
$ax += cidrblock($address, '208.73.7.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-471). ');
$ax += cidrblock($address, '208.75.56.0/22', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-472). ');
$ax += cidrblock($address, '208.101.0.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-473). ');
$ax += cidrblock($address, '209.62.0.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-474). ');
$ax += cidrblock($address, '209.85.0.0/17', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-475). ');
$ax += cidrblock($address, '209.95.57.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-476). ');
$ax += cidrblock($address, '209.95.58.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-477). ');
$ax += cidrblock($address, '209.95.60.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-478). ');
$ax += cidrblock($address, '209.95.62.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-479). ');
$ax += cidrblock($address, '210.16.120.0/23', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-480). ');
$ax += cidrblock($address, '213.52.131.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-481). ');
$ax += cidrblock($address, '216.12.192.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-482). ');
$ax += cidrblock($address, '216.40.192.0/18', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-483). ');
$ax += cidrblock($address, '216.127.64.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-484). ');
$ax += cidrblock($address, '216.185.96.0/19', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-485). ');
$ax += cidrblock($address, '216.234.250.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-486). ');
$ax += cidrblock($address, '216.239.104.0/24', 'SoftLayer Technologies; Access denied (AS-SOFTLAYER-487). ');


// Bypasses for (AS-SLTP)

if (inmatch($whyblockout, '(AS-SLTP-', '') && $ax > 0) {
    $zbamz = 0;
    $zbamz += inmatch($lcuseragent, 'showyoubot', 'ShowyouBot bypass. '); //72b
    $zbamz += inmatch($lcuseragent, 'disqus', 'Disqus bypass. '); //74a
    $zbamz += inmatch($useragent, 'Feedspot http://www.feedspot.com', 'Feedspot bypass. '); //74c
    $zbamz += inmatch($useragent, 'Superfeedr bot/2.0', 'Superfeedr bypass. '); //74c
    $zbamz += inmatch($useragent, 'Feedbot', 'Feedbot bypass. '); //74c
    if ($zbamz > 0) {
        $ax -= 1;
    }
}


// JPMorgan Chase & Co
// AS7743 (updated 2016.05.31)
$ax += cidrblock($address, '159.53.0.0/16', 'JPMorgan Chase & Co; Access denied (ASN-7743-JPMORGAN-0). ');
$ax += cidrblock($address, '199.253.243.0/24', 'JPMorgan Chase & Co; Access denied (ASN-7743-JPMORGAN-1). ');
$ax += cidrblock($address, '199.253.244.0/23', 'JPMorgan Chase & Co; Access denied (ASN-7743-JPMORGAN-2). ');
$ax += cidrblock($address, '209.211.208.0/22', 'JPMorgan Chase & Co; Access denied (ASN-7743-JPMORGAN-3). ');


// Akamai Technologies (updated 2016.06.02)
// AS12222, AS16625, AS18680, AS18717, AS20940, AS21342, AS21399, AS23454,
// AS23903, AS24319, AS31108, AS31110, AS32787, AS33905, AS34164, AS35204,
// AS35993, AS35994, AS39836, AS43639, AS48163, AS49846, AS393234.
$ax += cidrblock($address, '2.16.0.0/13', 'Akamai Technologies; Access denied (AS-AKAMAI-000). ');
$ax += cidrblock($address, '12.171.92.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-001). ');
$ax += cidrblock($address, '23.0.0.0/12', 'Akamai Technologies; Access denied (AS-AKAMAI-002). ');
$ax += cidrblock($address, '23.32.0.0/11', 'Akamai Technologies; Access denied (AS-AKAMAI-003). ');
$ax += cidrblock($address, '23.64.0.0/14', 'Akamai Technologies; Access denied (AS-AKAMAI-004). ');
$ax += cidrblock($address, '23.72.0.0/13', 'Akamai Technologies; Access denied (AS-AKAMAI-005). ');
$ax += cidrblock($address, '23.192.0.0/11', 'Akamai Technologies; Access denied (AS-AKAMAI-006). ');
$ax += cidrblock($address, '24.143.207.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-007). ');
$ax += cidrblock($address, '41.193.163.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-008). ');
$ax += cidrblock($address, '43.254.120.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-009). ');
$ax += cidrblock($address, '59.151.128.0/18', 'Akamai Technologies; Access denied (AS-AKAMAI-010). ');
$ax += cidrblock($address, '60.254.128.0/18', 'Akamai Technologies; Access denied (AS-AKAMAI-011). ');
$ax += cidrblock($address, '62.172.140.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-012). ');
$ax += cidrblock($address, '62.209.41.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-013). ');
$ax += cidrblock($address, '63.144.176.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-014). ');
$ax += cidrblock($address, '63.146.70.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-015). ');
$ax += cidrblock($address, '63.151.137.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-016). ');
$ax += cidrblock($address, '63.208.195.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-017). ');
$ax += cidrblock($address, '63.217.8.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-018). ');
$ax += cidrblock($address, '63.217.232.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-019). ');
$ax += cidrblock($address, '63.227.135.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-020). ');
$ax += cidrblock($address, '63.233.60.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-021). ');
$ax += cidrblock($address, '63.233.224.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-022). ');
$ax += cidrblock($address, '63.239.232.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-023). ');
$ax += cidrblock($address, '63.251.46.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-024). ');
$ax += cidrblock($address, '63.251.64.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-025). ');
$ax += cidrblock($address, '64.86.133.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-026). ');
$ax += cidrblock($address, '64.94.46.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-027). ');
$ax += cidrblock($address, '64.145.72.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-028). ');
$ax += cidrblock($address, '64.145.87.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-029). ');
$ax += cidrblock($address, '65.116.164.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-030). ');
$ax += cidrblock($address, '65.122.93.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-031). ');
$ax += cidrblock($address, '66.150.54.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-032). ');
$ax += cidrblock($address, '66.150.108.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-033). ');
$ax += cidrblock($address, '66.171.227.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-034). ');
$ax += cidrblock($address, '66.171.234.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-035). ');
$ax += cidrblock($address, '66.198.8.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-036). ');
$ax += cidrblock($address, '67.131.232.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-037). ');
$ax += cidrblock($address, '67.220.142.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-038). ');
$ax += cidrblock($address, '69.25.247.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-039). ');
$ax += cidrblock($address, '69.31.20.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-040). ');
$ax += cidrblock($address, '69.31.57.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-041). ');
$ax += cidrblock($address, '69.31.106.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-042). ');
$ax += cidrblock($address, '69.192.0.0/16', 'Akamai Technologies; Access denied (AS-AKAMAI-043). ');
$ax += cidrblock($address, '72.52.0.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-044). ');
$ax += cidrblock($address, '72.52.2.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-045). ');
$ax += cidrblock($address, '72.52.4.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-046). ');
$ax += cidrblock($address, '72.52.8.0/21', 'Akamai Technologies; Access denied (AS-AKAMAI-047). ');
$ax += cidrblock($address, '72.52.16.0/20', 'Akamai Technologies; Access denied (AS-AKAMAI-048). ');
$ax += cidrblock($address, '72.52.32.0/21', 'Akamai Technologies; Access denied (AS-AKAMAI-049). ');
$ax += cidrblock($address, '72.52.40.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-050). ');
$ax += cidrblock($address, '72.52.44.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-051). ');
$ax += cidrblock($address, '72.52.46.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-052). ');
$ax += cidrblock($address, '72.52.48.0/21', 'Akamai Technologies; Access denied (AS-AKAMAI-053). ');
$ax += cidrblock($address, '72.52.56.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-054). ');
$ax += cidrblock($address, '72.52.60.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-055). ');
$ax += cidrblock($address, '72.246.0.0/15', 'Akamai Technologies; Access denied (AS-AKAMAI-056). ');
$ax += cidrblock($address, '74.201.74.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-057). ');
$ax += cidrblock($address, '75.98.76.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-058). ');
$ax += cidrblock($address, '80.65.251.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-059). ');
$ax += cidrblock($address, '80.67.64.0/19', 'Akamai Technologies; Access denied (AS-AKAMAI-060). ');
$ax += cidrblock($address, '81.93.191.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-061). ');
$ax += cidrblock($address, '81.174.71.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-062). ');
$ax += cidrblock($address, '82.112.106.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-063). ');
$ax += cidrblock($address, '83.217.226.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-064). ');
$ax += cidrblock($address, '83.217.247.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-065). ');
$ax += cidrblock($address, '84.53.128.0/18', 'Akamai Technologies; Access denied (AS-AKAMAI-066). ');
$ax += cidrblock($address, '88.221.0.0/16', 'Akamai Technologies; Access denied (AS-AKAMAI-067). ');
$ax += cidrblock($address, '92.122.0.0/15', 'Akamai Technologies; Access denied (AS-AKAMAI-068). ');
$ax += cidrblock($address, '93.191.168.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-069). ');
$ax += cidrblock($address, '93.191.172.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-070). ');
$ax += cidrblock($address, '93.191.175.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-071). ');
$ax += cidrblock($address, '95.100.0.0/15', 'Akamai Technologies; Access denied (AS-AKAMAI-072). ');
$ax += cidrblock($address, '96.6.0.0/15', 'Akamai Technologies; Access denied (AS-AKAMAI-073). ');
$ax += cidrblock($address, '96.16.0.0/15', 'Akamai Technologies; Access denied (AS-AKAMAI-074). ');
$ax += cidrblock($address, '103.238.148.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-075). ');
$ax += cidrblock($address, '104.64.0.0/10', 'Akamai Technologies; Access denied (AS-AKAMAI-076). ');
$ax += cidrblock($address, '107.191.134.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-077). ');
$ax += cidrblock($address, '111.108.66.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-078). ');
$ax += cidrblock($address, '114.141.72.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-079). ');
$ax += cidrblock($address, '118.214.0.0/16', 'Akamai Technologies; Access denied (AS-AKAMAI-080). ');
$ax += cidrblock($address, '118.215.0.0/17', 'Akamai Technologies; Access denied (AS-AKAMAI-081). ');
$ax += cidrblock($address, '118.215.128.0/18', 'Akamai Technologies; Access denied (AS-AKAMAI-082). ');
$ax += cidrblock($address, '122.56.36.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-083). ');
$ax += cidrblock($address, '122.252.32.0/19', 'Akamai Technologies; Access denied (AS-AKAMAI-084). ');
$ax += cidrblock($address, '122.252.128.0/20', 'Akamai Technologies; Access denied (AS-AKAMAI-085). ');
$ax += cidrblock($address, '124.155.192.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-086). ');
$ax += cidrblock($address, '125.56.128.0/17', 'Akamai Technologies; Access denied (AS-AKAMAI-087). ');
$ax += cidrblock($address, '125.252.192.0/18', 'Akamai Technologies; Access denied (AS-AKAMAI-088). ');
$ax += cidrblock($address, '128.177.166.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-089). ');
$ax += cidrblock($address, '128.177.188.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-090). ');
$ax += cidrblock($address, '128.241.89.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-091). ');
$ax += cidrblock($address, '128.241.91.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-092). ');
$ax += cidrblock($address, '128.241.221.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-093). ');
$ax += cidrblock($address, '141.93.12.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-094). ');
$ax += cidrblock($address, '145.15.41.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-095). ');
$ax += cidrblock($address, '157.203.50.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-096). ');
$ax += cidrblock($address, '157.238.74.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-097). ');
$ax += cidrblock($address, '165.254.32.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-098). ');
$ax += cidrblock($address, '165.254.40.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-99). ');
$ax += cidrblock($address, '165.254.52.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-100). ');
$ax += cidrblock($address, '165.254.94.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-101). ');
$ax += cidrblock($address, '165.254.99.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-102). ');
$ax += cidrblock($address, '165.254.127.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-103). ');
$ax += cidrblock($address, '165.254.133.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-104). ');
$ax += cidrblock($address, '165.254.156.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-105). ');
$ax += cidrblock($address, '165.254.204.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-106). ');
$ax += cidrblock($address, '168.143.240.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-107). ');
$ax += cidrblock($address, '168.143.242.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-108). ');
$ax += cidrblock($address, '168.143.252.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-109). ');
$ax += cidrblock($address, '172.224.0.0/12', 'Akamai Technologies; Access denied (AS-AKAMAI-110). ');
$ax += cidrblock($address, '173.205.6.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-111). ');
$ax += cidrblock($address, '173.205.78.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-112). ');
$ax += cidrblock($address, '173.222.0.0/15', 'Akamai Technologies; Access denied (AS-AKAMAI-113). ');
$ax += cidrblock($address, '182.51.200.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-114). ');
$ax += cidrblock($address, '184.24.0.0/13', 'Akamai Technologies; Access denied (AS-AKAMAI-115). ');
$ax += cidrblock($address, '184.50.0.0/15', 'Akamai Technologies; Access denied (AS-AKAMAI-116). ');
$ax += cidrblock($address, '184.84.0.0/14', 'Akamai Technologies; Access denied (AS-AKAMAI-117). ');
$ax += cidrblock($address, '190.2.175.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-118). ');
$ax += cidrblock($address, '192.204.3.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-119). ');
$ax += cidrblock($address, '192.204.4.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-120). ');
$ax += cidrblock($address, '193.19.90.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-121). ');
$ax += cidrblock($address, '193.21.248.0/21', 'Akamai Technologies; Access denied (AS-AKAMAI-122). ');
$ax += cidrblock($address, '193.47.187.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-123). ');
$ax += cidrblock($address, '193.108.88.0/21', 'Akamai Technologies; Access denied (AS-AKAMAI-124). ');
$ax += cidrblock($address, '193.108.152.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-125). ');
$ax += cidrblock($address, '193.200.156.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-126). ');
$ax += cidrblock($address, '194.34.8.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-127). ');
$ax += cidrblock($address, '194.34.10.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-128). ');
$ax += cidrblock($address, '194.50.35.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-129). ');
$ax += cidrblock($address, '194.75.128.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-130). ');
$ax += cidrblock($address, '194.88.65.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-131). ');
$ax += cidrblock($address, '195.171.195.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-132). ');
$ax += cidrblock($address, '195.171.220.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-133). ');
$ax += cidrblock($address, '195.245.124.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-134). ');
$ax += cidrblock($address, '196.14.124.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-135). ');
$ax += cidrblock($address, '196.26.74.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-136). ');
$ax += cidrblock($address, '196.35.224.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-137). ');
$ax += cidrblock($address, '197.97.46.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-138). ');
$ax += cidrblock($address, '198.87.51.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-139). ');
$ax += cidrblock($address, '198.144.112.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-140). ');
$ax += cidrblock($address, '200.14.44.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-141). ');
$ax += cidrblock($address, '200.25.52.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-142). ');
$ax += cidrblock($address, '200.136.36.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-143). ');
$ax += cidrblock($address, '201.220.10.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-144). ');
$ax += cidrblock($address, '203.69.138.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-145). ');
$ax += cidrblock($address, '203.69.141.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-146). ');
$ax += cidrblock($address, '203.198.20.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-147). ');
$ax += cidrblock($address, '204.0.54.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-148). ');
$ax += cidrblock($address, '204.2.187.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-149). ');
$ax += cidrblock($address, '204.2.199.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-150). ');
$ax += cidrblock($address, '204.2.215.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-151). ');
$ax += cidrblock($address, '204.8.48.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-152). ');
$ax += cidrblock($address, '204.10.28.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-153). ');
$ax += cidrblock($address, '204.93.38.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-154). ');
$ax += cidrblock($address, '204.93.40.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-155). ');
$ax += cidrblock($address, '204.95.24.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-156). ');
$ax += cidrblock($address, '205.173.39.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-157). ');
$ax += cidrblock($address, '206.161.222.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-158). ');
$ax += cidrblock($address, '206.207.84.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-159). ');
$ax += cidrblock($address, '206.239.100.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-160). ');
$ax += cidrblock($address, '207.109.111.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-161). ');
$ax += cidrblock($address, '207.203.28.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-162). ');
$ax += cidrblock($address, '207.203.30.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-163). ');
$ax += cidrblock($address, '208.50.241.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-164). ');
$ax += cidrblock($address, '208.185.54.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-165). ');
$ax += cidrblock($address, '209.65.14.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-166). ');
$ax += cidrblock($address, '209.107.209.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-167). ');
$ax += cidrblock($address, '209.112.14.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-168). ');
$ax += cidrblock($address, '209.200.128.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-169). ');
$ax += cidrblock($address, '209.200.131.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-170). ');
$ax += cidrblock($address, '209.200.132.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-171). ');
$ax += cidrblock($address, '209.200.134.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-172). ');
$ax += cidrblock($address, '209.200.136.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-173). ');
$ax += cidrblock($address, '209.200.140.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-174). ');
$ax += cidrblock($address, '209.200.142.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-175). ');
$ax += cidrblock($address, '209.200.144.0/21', 'Akamai Technologies; Access denied (AS-AKAMAI-176). ');
$ax += cidrblock($address, '209.200.152.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-177). ');
$ax += cidrblock($address, '209.200.156.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-178). ');
$ax += cidrblock($address, '209.200.158.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-179). ');
$ax += cidrblock($address, '209.200.160.0/20', 'Akamai Technologies; Access denied (AS-AKAMAI-180). ');
$ax += cidrblock($address, '209.200.176.0/21', 'Akamai Technologies; Access denied (AS-AKAMAI-181). ');
$ax += cidrblock($address, '209.200.184.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-182). ');
$ax += cidrblock($address, '209.200.186.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-183). ');
$ax += cidrblock($address, '209.200.188.0/22', 'Akamai Technologies; Access denied (AS-AKAMAI-184). ');
$ax += cidrblock($address, '209.211.201.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-185). ');
$ax += cidrblock($address, '209.234.252.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-186). ');
$ax += cidrblock($address, '210.54.146.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-187). ');
$ax += cidrblock($address, '210.55.181.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-188). ');
$ax += cidrblock($address, '210.61.248.0/23', 'Akamai Technologies; Access denied (AS-AKAMAI-189). ');
$ax += cidrblock($address, '212.239.17.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-190). ');
$ax += cidrblock($address, '213.198.96.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-191). ');
$ax += cidrblock($address, '216.12.45.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-192). ');
$ax += cidrblock($address, '216.151.176.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-193). ');
$ax += cidrblock($address, '216.151.187.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-194). ');
$ax += cidrblock($address, '216.151.190.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-195). ');
$ax += cidrblock($address, '216.206.30.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-196). ');
$ax += cidrblock($address, '216.206.36.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-197). ');
$ax += cidrblock($address, '216.238.147.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-198). ');
$ax += cidrblock($address, '219.76.11.0/24', 'Akamai Technologies; Access denied (AS-AKAMAI-199). ');


// Portlane Networks AB (updated 2016.01.20 / checked 2016.03.12)
// Huge set of anonymous VPN and Proxy spamming services!
// AS42708
$ax += cidrblock($address, '5.198.248.0/21', 'Portlane Networks AB (ASN-42708-PORTLANE-000). ');
$ax += cidrblock($address, '5.249.160.0/21', 'Portlane Networks AB (ASN-42708-PORTLANE-001). ');
$ax += cidrblock($address, '5.254.128.0/19', 'Portlane Networks AB (ASN-42708-PORTLANE-002). ');
$ax += cidrblock($address, '31.187.64.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-003). ');
$ax += cidrblock($address, '31.187.76.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-004). ');
$ax += cidrblock($address, '31.220.4.0/22', 'Portlane Networks AB (ASN-42708-PORTLANE-005). ');
$ax += cidrblock($address, '31.220.15.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-006). ');
$ax += cidrblock($address, '31.220.30.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-007). ');
$ax += cidrblock($address, '31.220.42.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-008). ');
$ax += cidrblock($address, '31.220.44.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-009). ');
$ax += cidrblock($address, '46.246.0.0/17', 'Portlane Networks AB (ASN-42708-PORTLANE-010). ');
$ax += cidrblock($address, '80.67.0.0/20', 'Portlane Networks AB (ASN-42708-PORTLANE-011). ');
$ax += cidrblock($address, '80.243.125.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-012). ');
$ax += cidrblock($address, '91.213.246.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-013). ');
$ax += cidrblock($address, '91.217.189.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-014). ');
$ax += cidrblock($address, '91.236.116.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-015). ');
$ax += cidrblock($address, '109.230.199.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-016). ');
$ax += cidrblock($address, '141.138.208.0/21', 'Portlane Networks AB (ASN-42708-PORTLANE-017). ');
$ax += cidrblock($address, '153.92.126.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-018). ');
$ax += cidrblock($address, '172.94.0.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-019). ');
$ax += cidrblock($address, '176.126.65.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-020). ');
$ax += cidrblock($address, '176.126.84.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-021). ');
$ax += cidrblock($address, '178.73.192.0/18', 'Portlane Networks AB (ASN-42708-PORTLANE-022). ');
$ax += cidrblock($address, '185.5.44.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-023). ');
$ax += cidrblock($address, '185.9.3.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-024). ');
$ax += cidrblock($address, '185.13.40.0/22', 'Portlane Networks AB (ASN-42708-PORTLANE-025). ');
$ax += cidrblock($address, '185.16.87.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-026). ');
$ax += cidrblock($address, '185.66.144.0/22', 'Portlane Networks AB (ASN-42708-PORTLANE-027). ');
$ax += cidrblock($address, '185.97.214.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-028). ');
$ax += cidrblock($address, '185.120.6.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-029). ');
$ax += cidrblock($address, '188.126.64.0/19', 'Portlane Networks AB (ASN-42708-PORTLANE-030). ');
$ax += cidrblock($address, '192.36.119.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-031). ');
$ax += cidrblock($address, '192.36.121.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-032). ');
$ax += cidrblock($address, '192.36.154.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-033). ');
$ax += cidrblock($address, '192.36.166.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-034). ');
$ax += cidrblock($address, '192.36.198.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-035). ');
$ax += cidrblock($address, '192.36.207.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-036). ');
$ax += cidrblock($address, '192.36.217.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-037). ');
$ax += cidrblock($address, '192.36.226.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-038). ');
$ax += cidrblock($address, '192.36.241.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-039). ');
$ax += cidrblock($address, '192.36.248.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-040). ');
$ax += cidrblock($address, '192.71.8.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-041). ');
$ax += cidrblock($address, '192.71.10.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-042). ');
$ax += cidrblock($address, '192.71.12.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-043). ');
$ax += cidrblock($address, '192.71.23.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-044). ');
$ax += cidrblock($address, '192.71.30.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-045). ');
$ax += cidrblock($address, '192.71.36.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-046). ');
$ax += cidrblock($address, '192.71.38.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-047). ');
$ax += cidrblock($address, '192.71.42.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-048). ');
$ax += cidrblock($address, '192.71.44.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-049). ');
$ax += cidrblock($address, '192.71.46.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-050). ');
$ax += cidrblock($address, '192.71.48.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-051). ');
$ax += cidrblock($address, '192.71.50.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-052). ');
$ax += cidrblock($address, '192.71.52.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-053). ');
$ax += cidrblock($address, '192.71.57.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-054). ');
$ax += cidrblock($address, '192.71.59.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-055). ');
$ax += cidrblock($address, '192.71.61.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-056). ');
$ax += cidrblock($address, '192.71.74.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-057). ');
$ax += cidrblock($address, '192.71.81.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-058). ');
$ax += cidrblock($address, '192.71.103.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-059). ');
$ax += cidrblock($address, '192.71.126.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-060). ');
$ax += cidrblock($address, '192.71.142.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-061). ');
$ax += cidrblock($address, '192.71.144.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-062). ');
$ax += cidrblock($address, '192.121.122.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-063). ');
$ax += cidrblock($address, '192.121.124.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-064). ');
$ax += cidrblock($address, '192.121.126.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-065). ');
$ax += cidrblock($address, '192.121.134.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-066). ');
$ax += cidrblock($address, '192.121.136.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-067). ');
$ax += cidrblock($address, '192.121.146.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-068). ');
$ax += cidrblock($address, '192.121.148.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-069). ');
$ax += cidrblock($address, '192.121.152.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-070). ');
$ax += cidrblock($address, '192.121.155.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-071). ');
$ax += cidrblock($address, '192.121.185.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-072). ');
$ax += cidrblock($address, '192.121.186.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-073). ');
$ax += cidrblock($address, '192.121.225.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-074). ');
$ax += cidrblock($address, '192.121.251.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-075). ');
$ax += cidrblock($address, '192.165.17.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-076). ');
$ax += cidrblock($address, '192.165.48.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-077). ');
$ax += cidrblock($address, '192.165.121.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-078). ');
$ax += cidrblock($address, '192.165.123.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-079). ');
$ax += cidrblock($address, '192.165.205.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-080). ');
$ax += cidrblock($address, '192.176.27.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-081). ');
$ax += cidrblock($address, '192.176.28.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-082). ');
$ax += cidrblock($address, '193.25.127.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-083). ');
$ax += cidrblock($address, '193.105.134.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-084). ');
$ax += cidrblock($address, '193.180.123.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-085). ');
$ax += cidrblock($address, '193.181.16.0/22', 'Portlane Networks AB (ASN-42708-PORTLANE-086). ');
$ax += cidrblock($address, '193.181.234.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-087). ');
$ax += cidrblock($address, '193.182.19.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-088). ');
$ax += cidrblock($address, '193.183.82.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-089). ');
$ax += cidrblock($address, '193.183.84.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-090). ');
$ax += cidrblock($address, '193.183.86.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-091). ');
$ax += cidrblock($address, '193.183.88.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-092). ');
$ax += cidrblock($address, '193.183.108.0/22', 'Portlane Networks AB (ASN-42708-PORTLANE-093). ');
$ax += cidrblock($address, '193.183.120.0/22', 'Portlane Networks AB (ASN-42708-PORTLANE-094). ');
$ax += cidrblock($address, '193.234.255.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-095). ');
$ax += cidrblock($address, '193.235.73.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-096). ');
$ax += cidrblock($address, '193.235.200.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-097). ');
$ax += cidrblock($address, '194.14.28.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-098). ');
$ax += cidrblock($address, '194.14.45.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-099). ');
$ax += cidrblock($address, '194.14.85.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-100). ');
$ax += cidrblock($address, '194.14.87.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-101). ');
$ax += cidrblock($address, '194.14.206.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-102). ');
$ax += cidrblock($address, '194.14.222.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-103). ');
$ax += cidrblock($address, '194.68.96.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-104). ');
$ax += cidrblock($address, '194.68.112.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-105). ');
$ax += cidrblock($address, '194.103.9.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-106). ');
$ax += cidrblock($address, '194.103.11.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-107). ');
$ax += cidrblock($address, '194.103.33.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-108). ');
$ax += cidrblock($address, '194.103.207.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-109). ');
$ax += cidrblock($address, '194.103.211.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-110). ');
$ax += cidrblock($address, '194.103.212.0/23', 'Portlane Networks AB (ASN-42708-PORTLANE-111). ');
$ax += cidrblock($address, '194.132.11.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-112). ');
$ax += cidrblock($address, '194.132.31.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-113). ');
$ax += cidrblock($address, '194.132.112.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-114). ');
$ax += cidrblock($address, '194.132.115.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-115). ');
$ax += cidrblock($address, '194.132.200.0/22', 'Portlane Networks AB (ASN-42708-PORTLANE-116). ');
$ax += cidrblock($address, '198.105.121.0/24', 'Portlane Networks AB (ASN-42708-PORTLANE-117). ');


// Inter Connects Inc (updated 2016.05.21)
// AS57858, AS57972, AS60485
$ax += cidrblock($address, '5.34.240.0/21', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-00). ');
$ax += cidrblock($address, '5.153.232.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-01). ');
$ax += cidrblock($address, '5.153.234.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-02). ');
$ax += cidrblock($address, '5.153.238.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-03). ');
$ax += cidrblock($address, '5.157.0.0/22', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-04). ');
$ax += cidrblock($address, '5.157.11.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-05). ');
$ax += cidrblock($address, '5.157.14.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-06). ');
$ax += cidrblock($address, '5.157.16.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-07). ');
$ax += cidrblock($address, '5.157.36.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-08). ');
$ax += cidrblock($address, '5.157.38.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-09). ');
$ax += cidrblock($address, '5.157.40.0/22', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-10). ');
$ax += cidrblock($address, '5.157.44.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-11). ');
$ax += cidrblock($address, '5.157.48.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-12). ');
$ax += cidrblock($address, '5.157.50.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-13). ');
$ax += cidrblock($address, '5.157.53.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-14). ');
$ax += cidrblock($address, '5.157.54.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-15). ');
$ax += cidrblock($address, '37.72.184.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-16). ');
$ax += cidrblock($address, '37.72.188.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-17). ');
$ax += cidrblock($address, '37.72.190.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-18). ');
$ax += cidrblock($address, '37.203.209.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-19). ');
$ax += cidrblock($address, '37.203.212.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-20). ');
$ax += cidrblock($address, '37.203.214.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-21). ');
$ax += cidrblock($address, '46.29.248.0/21', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-22). ');
$ax += cidrblock($address, '91.108.176.0/22', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-23). ');
$ax += cidrblock($address, '91.108.180.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-24). ');
$ax += cidrblock($address, '91.108.183.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-25). ');
$ax += cidrblock($address, '130.185.152.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-26). ');
$ax += cidrblock($address, '130.185.155.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-27). ');
$ax += cidrblock($address, '130.185.156.0/22', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-28). ');
$ax += cidrblock($address, '151.237.176.0/22', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-29). ');
$ax += cidrblock($address, '151.237.180.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-30). ');
$ax += cidrblock($address, '151.237.184.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-31). ');
$ax += cidrblock($address, '151.237.186.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-32). ');
$ax += cidrblock($address, '151.237.188.0/22', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-33). ');
$ax += cidrblock($address, '165.231.2.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-34). ');
$ax += cidrblock($address, '165.231.20.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-35). ');
$ax += cidrblock($address, '165.231.80.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-36). ');
$ax += cidrblock($address, '165.231.83.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-37). ');
$ax += cidrblock($address, '165.231.84.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-38). ');
$ax += cidrblock($address, '165.231.87.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-39). ');
$ax += cidrblock($address, '165.231.90.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-40). ');
$ax += cidrblock($address, '165.231.92.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-41). ');
$ax += cidrblock($address, '165.231.95.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-42). ');
$ax += cidrblock($address, '176.61.136.0/21', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-43). ');
$ax += cidrblock($address, '178.216.48.0/22', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-44). ');
$ax += cidrblock($address, '178.216.52.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-45). ');
$ax += cidrblock($address, '178.216.54.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-46). ');
$ax += cidrblock($address, '185.3.132.0/22', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-47). ');
$ax += cidrblock($address, '196.196.2.0/23', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-48). ');
$ax += cidrblock($address, '196.196.16.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-49). ');
$ax += cidrblock($address, '196.196.34.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-50). ');
$ax += cidrblock($address, '196.196.37.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-51). ');
$ax += cidrblock($address, '196.196.39.0/24', 'Inter Connects Inc, not an access provider ISP (AS-INTERCONNECTS-52). ');


// Hurricane Electric, not an access provider ISP.
// Too many infected and hostile servers. Good folks otherwise (Free DYN-DNS service SBS enjoys)
// AS6939 (updated 2016.06.09)
$ax += cidrblock($address, '5.152.177.0/24', 'Hurricane Electric (ASN-6939-HE-00). ');
$ax += cidrblock($address, '5.152.180.0/22', 'Hurricane Electric (ASN-6939-HE-02). ');
$ax += cidrblock($address, '27.50.32.0/21', 'Hurricane Electric (ASN-6939-HE-03). ');
$ax += cidrblock($address, '37.16.72.0/21', 'Hurricane Electric (ASN-6939-HE-04). ');
$ax += cidrblock($address, '45.33.128.0/20', 'Hurricane Electric (ASN-6939-HE-05). ');
$ax += cidrblock($address, '45.40.96.0/19', 'Hurricane Electric (ASN-6939-HE-06). ');
$ax += cidrblock($address, '64.62.128.0/17', 'Hurricane Electric (ASN-6939-HE-07). ');
$ax += cidrblock($address, '64.71.128.0/18', 'Hurricane Electric (ASN-6939-HE-08). ');
$ax += cidrblock($address, '64.187.96.0/19', 'Hurricane Electric (ASN-6939-HE-09). ');
$ax += cidrblock($address, '65.19.128.0/18', 'Hurricane Electric (ASN-6939-HE-10). ');
$ax += cidrblock($address, '65.49.0.0/17', 'Hurricane Electric (ASN-6939-HE-11). ');
if (cidrblock($address, '65.49.67.0/24', '') && $ax === 1 && inmatch($whyblockout, '(ASN-6939-HE-11)', '')) {
    $ax = 0;
    $whyblockout .= 'Access provider block bypass (BYP-ASN-6939-HE-11). ';
}
$ax += cidrblock($address, '66.160.128.0/18', 'Hurricane Electric (ASN-6939-HE-12). ');
$ax += cidrblock($address, '66.160.192.0/20', 'Hurricane Electric (ASN-6939-HE-13). ');
$ax += cidrblock($address, '66.178.176.0/20', 'Hurricane Electric (ASN-6939-HE-14). ');
$ax += cidrblock($address, '66.220.0.0/19', 'Hurricane Electric (ASN-6939-HE-15). ');
$ax += cidrblock($address, '70.35.16.0/21', 'Hurricane Electric (ASN-6939-HE-16). ');
$ax += cidrblock($address, '72.52.64.0/18', 'Hurricane Electric (ASN-6939-HE-17). ');
$ax += cidrblock($address, '74.82.0.0/18', 'Hurricane Electric (ASN-6939-HE-18). ');
$ax += cidrblock($address, '74.113.68.0/22', 'Hurricane Electric (ASN-6939-HE-19). ');
$ax += cidrblock($address, '74.121.104.0/22', 'Hurricane Electric (ASN-6939-HE-20). ');
$ax += cidrblock($address, '98.158.224.0/20', 'Hurricane Electric (ASN-6939-HE-21). ');
$ax += cidrblock($address, '103.193.186.0/23', 'Hurricane Electric (ASN-6939-HE-22). ');
$ax += cidrblock($address, '103.249.0.0/24', 'Hurricane Electric (ASN-6939-HE-23). ');
$ax += cidrblock($address, '104.36.120.0/22', 'Hurricane Electric (ASN-6939-HE-24). ');
$ax += cidrblock($address, '104.129.240.0/20', 'Hurricane Electric (ASN-6939-HE-25). ');
$ax += cidrblock($address, '104.193.248.0/22', 'Hurricane Electric (ASN-6939-HE-26). ');
$ax += cidrblock($address, '104.218.36.0/22', 'Hurricane Electric (ASN-6939-HE-27). ');
$ax += cidrblock($address, '104.255.240.0/21', 'Hurricane Electric (ASN-6939-HE-28). ');
$ax += cidrblock($address, '107.178.32.0/20', 'Hurricane Electric (ASN-6939-HE-29). ');
$ax += cidrblock($address, '124.252.252.0/23', 'Hurricane Electric (ASN-6939-HE-30). ');
$ax += cidrblock($address, '148.51.0.0/16', 'Hurricane Electric (ASN-6939-HE-31). ');
$ax += cidrblock($address, '157.52.32.0/20', 'Hurricane Electric (ASN-6939-HE-32). ');
$ax += cidrblock($address, '162.219.48.0/23', 'Hurricane Electric (ASN-6939-HE-33). ');
$ax += cidrblock($address, '162.219.50.0/24', 'Hurricane Electric (ASN-6939-HE-34). ');
$ax += cidrblock($address, '162.247.12.0/22', 'Hurricane Electric (ASN-6939-HE-35). ');
$ax += cidrblock($address, '162.247.75.0/24', 'Hurricane Electric (ASN-6939-HE-36). ');
$ax += cidrblock($address, '162.249.152.0/22', 'Hurricane Electric (ASN-6939-HE-37). ');
$ax += cidrblock($address, '172.96.112.0/24', 'Hurricane Electric (ASN-6939-HE-38). ');
$ax += cidrblock($address, '184.75.240.0/21', 'Hurricane Electric (ASN-6939-HE-39). ');
$ax += cidrblock($address, '184.104.0.0/15', 'Hurricane Electric (ASN-6939-HE-40). ');
$ax += cidrblock($address, '185.101.97.0/24', 'Hurricane Electric (ASN-6939-HE-41). ');
$ax += cidrblock($address, '185.114.36.0/24', 'Hurricane Electric (ASN-6939-HE-42). ');
$ax += cidrblock($address, '191.101.245.0/24', 'Hurricane Electric (ASN-6939-HE-43). ');
$ax += cidrblock($address, '192.52.69.0/24', 'Hurricane Electric (ASN-6939-HE-44). ');
$ax += cidrblock($address, '192.52.250.0/23', 'Hurricane Electric (ASN-6939-HE-45). ');
$ax += cidrblock($address, '192.81.196.0/22', 'Hurricane Electric (ASN-6939-HE-46). ');
$ax += cidrblock($address, '192.88.99.0/24', 'Hurricane Electric (ASN-6939-HE-47). ');
$ax += cidrblock($address, '192.132.94.0/24', 'Hurricane Electric (ASN-6939-HE-49). ');
$ax += cidrblock($address, '192.136.112.0/24', 'Hurricane Electric (ASN-6939-HE-50). ');
$ax += cidrblock($address, '192.156.200.0/24', 'Hurricane Electric (ASN-6939-HE-51). ');
$ax += cidrblock($address, '192.190.255.0/24', 'Hurricane Electric (ASN-6939-HE-52). ');
$ax += cidrblock($address, '193.142.62.0/24', 'Hurricane Electric (ASN-6939-HE-53). ');
$ax += cidrblock($address, '198.36.120.0/21', 'Hurricane Electric (ASN-6939-HE-54). ');
$ax += cidrblock($address, '198.102.73.0/24', 'Hurricane Electric (ASN-6939-HE-55). ');
$ax += cidrblock($address, '199.4.150.0/24', 'Hurricane Electric (ASN-6939-HE-56). ');
$ax += cidrblock($address, '199.16.200.0/21', 'Hurricane Electric (ASN-6939-HE-57). ');
$ax += cidrblock($address, '199.34.120.0/21', 'Hurricane Electric (ASN-6939-HE-58). ');
$ax += cidrblock($address, '199.74.248.0/24', 'Hurricane Electric (ASN-6939-HE-59). ');
$ax += cidrblock($address, '199.88.158.0/24', 'Hurricane Electric (ASN-6939-HE-60). ');
$ax += cidrblock($address, '199.233.90.0/24', 'Hurricane Electric (ASN-6939-HE-61). ');
$ax += cidrblock($address, '199.233.198.0/23', 'Hurricane Electric (ASN-6939-HE-62). ');
$ax += cidrblock($address, '199.245.105.0/24', 'Hurricane Electric (ASN-6939-HE-63). ');
$ax += cidrblock($address, '203.12.6.0/24', 'Hurricane Electric (ASN-6939-HE-64). ');
$ax += cidrblock($address, '203.99.142.0/24', 'Hurricane Electric (ASN-6939-HE-65). ');
$ax += cidrblock($address, '204.10.104.0/21', 'Hurricane Electric (ASN-6939-HE-66). ');
$ax += cidrblock($address, '204.14.104.0/21', 'Hurricane Electric (ASN-6939-HE-67). ');
$ax += cidrblock($address, '204.187.91.0/24', 'Hurricane Electric (ASN-6939-HE-68). ');
$ax += cidrblock($address, '204.238.49.0/24', 'Hurricane Electric (ASN-6939-HE-69). ');
$ax += cidrblock($address, '205.159.239.0/24', 'Hurricane Electric (ASN-6939-HE-70). ');
$ax += cidrblock($address, '205.166.121.0/24', 'Hurricane Electric (ASN-6939-HE-71). ');
$ax += cidrblock($address, '206.108.49.0/24', 'Hurricane Electric (ASN-6939-HE-72). ');
$ax += cidrblock($address, '206.108.51.0/24', 'Hurricane Electric (ASN-6939-HE-73). ');
$ax += cidrblock($address, '206.108.55.0/24', 'Hurricane Electric (ASN-6939-HE-74). ');
$ax += cidrblock($address, '206.144.144.0/20', 'Hurricane Electric (ASN-6939-HE-75). ');
$ax += cidrblock($address, '207.171.210.0/23', 'Hurricane Electric (ASN-6939-HE-76). ');
$ax += cidrblock($address, '207.171.226.0/24', 'Hurricane Electric (ASN-6939-HE-77). ');
$ax += cidrblock($address, '208.75.96.0/21', 'Hurricane Electric (ASN-6939-HE-78). ');
$ax += cidrblock($address, '209.51.160.0/19', 'Hurricane Electric (ASN-6939-HE-79). ');
$ax += cidrblock($address, '209.150.160.0/19', 'Hurricane Electric (ASN-6939-HE-80). ');
$ax += cidrblock($address, '216.66.0.0/18', 'Hurricane Electric (ASN-6939-HE-81). ');
$ax += cidrblock($address, '216.66.64.0/19', 'Hurricane Electric (ASN-6939-HE-82). ');
$ax += cidrblock($address, '216.105.164.0/22', 'Hurricane Electric (ASN-6939-HE-83). ');
$ax += cidrblock($address, '216.126.60.0/22', 'Hurricane Electric (ASN-6939-HE-84). ');
$ax += cidrblock($address, '216.152.64.0/20', 'Hurricane Electric (ASN-6939-HE-85). ');
$ax += cidrblock($address, '216.163.108.0/24', 'Hurricane Electric (ASN-6939-HE-86). ');
$ax += cidrblock($address, '216.171.192.0/23', 'Hurricane Electric (ASN-6939-HE-87). ');
$ax += cidrblock($address, '216.171.196.0/24', 'Hurricane Electric (ASN-6939-HE-88). ');
$ax += cidrblock($address, '216.171.201.0/24', 'Hurricane Electric (ASN-6939-HE-89). ');
$ax += cidrblock($address, '216.171.202.0/23', 'Hurricane Electric (ASN-6939-HE-90). ');
$ax += cidrblock($address, '216.171.204.0/23', 'Hurricane Electric (ASN-6939-HE-91). ');
$ax += cidrblock($address, '216.171.206.0/24', 'Hurricane Electric (ASN-6939-HE-92). ');
$ax += cidrblock($address, '216.171.208.0/24', 'Hurricane Electric (ASN-6939-HE-93). ');
$ax += cidrblock($address, '216.171.218.0/24', 'Hurricane Electric (ASN-6939-HE-94). ');
$ax += cidrblock($address, '216.171.220.0/23', 'Hurricane Electric (ASN-6939-HE-95). ');
$ax += cidrblock($address, '216.218.128.0/17', 'Hurricane Electric (ASN-6939-HE-96). ');
$ax += cidrblock($address, '216.224.64.0/19', 'Hurricane Electric (ASN-6939-HE-97). ');
$ax += cidrblock($address, '216.229.96.0/20', 'Hurricane Electric (ASN-6939-HE-98). ');


// Bypasses for Hurricane Electric (updated 2016.06.09)
if (inmatch($whyblockout, '(ASN-6939-HE-)', '') && $ax > 0) {
    $zbamz = 0;
    $zbamz += rmatch($lcuseragent, '.getpebble.com', 'Nice enough to ask bypass. '); //74e
    $zbamz += inmatch($useragent, 'Feedspot http://www.feedspot.com', ' Feedspot bypass. ' ); //74c
    $zbamz += inmatch($useragent, 'Feedly', ' Feedly bypass. ' ); //74c
    if ($zbamz > 0) {
        $ax -= 1;
    }
}


// Eonix Corporation, not an access provider ISP. (updated 2016.04.30)
// Many improper ASN records. Known attack vector.
// AS30693, AS49532, AS62904
$ax += cidrblock($address, '23.90.0.0/18', 'Eonix Corporation (AS-EONIX-00). ');
$ax += cidrblock($address, '23.231.0.0/17', 'Eonix Corporation (AS-EONIX-01). ');
$ax += cidrblock($address, '50.2.0.0/15', 'Eonix Corporation (AS-EONIX-02). ');
$ax += cidrblock($address, '75.75.224.0/19', 'Eonix Corporation (AS-EONIX-03). ');
$ax += cidrblock($address, '104.140.0.0/16', 'Eonix Corporation (AS-EONIX-04). ');
$ax += cidrblock($address, '104.193.40.0/22', 'Eonix Corporation (AS-EONIX-05). ');
$ax += cidrblock($address, '104.206.0.0/16', 'Eonix Corporation (AS-EONIX-06). ');
$ax += cidrblock($address, '104.218.232.0/21', 'Eonix Corporation (AS-EONIX-07). ');
$ax += cidrblock($address, '107.158.0.0/16', 'Eonix Corporation (AS-EONIX-08). ');
$ax += cidrblock($address, '170.130.0.0/16', 'Eonix Corporation (AS-EONIX-09). ');
$ax += cidrblock($address, '172.94.93.0/24', 'Eonix Corporation (AS-EONIX-10). ');
$ax += cidrblock($address, '173.44.128.0/17', 'Eonix Corporation (AS-EONIX-11). ');
$ax += cidrblock($address, '173.213.64.0/18', 'Eonix Corporation (AS-EONIX-12). ');
$ax += cidrblock($address, '173.232.0.0/16', 'Eonix Corporation (AS-EONIX-13). ');
$ax += cidrblock($address, '185.137.136.0/22', 'Eonix Corporation (AS-EONIX-14). ');
$ax += cidrblock($address, '192.157.60.0/22', 'Eonix Corporation (AS-EONIX-15). ');
$ax += cidrblock($address, '192.230.144.0/20', 'Eonix Corporation (AS-EONIX-16). ');
$ax += cidrblock($address, '199.66.112.0/22', 'Eonix Corporation (AS-EONIX-17). ');
$ax += cidrblock($address, '199.127.72.0/21', 'Eonix Corporation (AS-EONIX-18). ');
$ax += cidrblock($address, '206.214.64.0/19', 'Eonix Corporation (AS-EONIX-19). ');
$ax += cidrblock($address, '208.89.216.0/21', 'Eonix Corporation (AS-EONIX-20). ');


// Pegasus Web Technology / Fortress ITX, Not an access provider. (updated 2016.04.27)
// AS25653, AS54600
$ax += cidrblock($address, '50.60.0.0/15', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-00). ');
$ax += cidrblock($address, '63.140.0.0/21', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-01). ');
$ax += cidrblock($address, '65.98.0.0/17', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-02). ');
$ax += cidrblock($address, '65.181.64.0/18', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-03). ');
$ax += cidrblock($address, '66.187.96.0/20', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-04). ');
$ax += cidrblock($address, '67.227.23.0/24', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-05). ');
$ax += cidrblock($address, '69.57.160.0/19', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-06). ');
$ax += cidrblock($address, '69.72.128.0/17', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-07). ');
$ax += cidrblock($address, '69.194.160.0/23', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-08). ');
$ax += cidrblock($address, '69.194.162.0/24', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-09). ');
$ax += cidrblock($address, '69.194.169.0/24', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-10). ');
$ax += cidrblock($address, '69.194.170.0/23', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-11). ');
$ax += cidrblock($address, '69.194.192.0/21', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-12). ');
$ax += cidrblock($address, '69.194.200.0/23', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-13). ');
$ax += cidrblock($address, '69.194.202.0/24', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-14). ');
$ax += cidrblock($address, '69.194.204.0/23', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-15). ');
$ax += cidrblock($address, '104.192.80.0/21', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-16). ');
$ax += cidrblock($address, '104.233.128.0/18', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-17). ');
$ax += cidrblock($address, '107.148.0.0/15', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-18). ');
$ax += cidrblock($address, '108.186.0.0/16', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-19). ');
$ax += cidrblock($address, '137.175.0.0/17', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-20). ');
$ax += cidrblock($address, '142.0.128.0/20', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-21). ');
$ax += cidrblock($address, '142.4.96.0/19', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-22). ');
$ax += cidrblock($address, '174.140.196.0/23', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-23). ');
$ax += cidrblock($address, '192.74.224.0/19', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-24). ');
$ax += cidrblock($address, '198.2.192.0/18', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-25). ');
$ax += cidrblock($address, '198.47.96.0/24', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-26). ');
$ax += cidrblock($address, '198.200.32.0/19', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-27). ');
$ax += cidrblock($address, '199.180.100.0/22', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-28). ');
$ax += cidrblock($address, '199.188.104.0/21', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-29). ');
$ax += cidrblock($address, '208.116.0.0/18', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-30). ');
$ax += cidrblock($address, '209.140.128.0/18', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-31). ');
$ax += cidrblock($address, '216.67.224.0/19', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-32). ');
$ax += cidrblock($address, '216.74.96.0/19', 'Pegasus Web Technologies / Fortress ITX, Not an access provider (AS-PWEBFITX-33). ');


// Steadfast DNS (updated 2016.03.13)
// AS32748, AS46440
$ax += cidrblock($address, '23.29.128.0/19', 'Steadfast DNS (AS-SFDNS-00). ');
$ax += cidrblock($address, '45.114.132.0/22', 'Steadfast DNS (AS-SFDNS-01). ');
$ax += cidrblock($address, '49.156.0.0/22', 'Steadfast DNS (AS-SFDNS-02). ');
$ax += cidrblock($address, '50.31.0.0/17', 'Steadfast DNS (AS-SFDNS-03). ');
$ax += cidrblock($address, '66.85.89.0/24', 'Steadfast DNS (AS-SFDNS-04). ');
$ax += cidrblock($address, '67.202.64.0/18', 'Steadfast DNS (AS-SFDNS-05). ');
$ax += cidrblock($address, '69.162.128.0/18', 'Steadfast DNS (AS-SFDNS-06). ');
$ax += cidrblock($address, '74.120.120.0/22', 'Steadfast DNS (AS-SFDNS-07). ');
$ax += cidrblock($address, '103.30.196.0/22', 'Steadfast DNS (AS-SFDNS-08). ');
$ax += cidrblock($address, '103.54.84.0/22', 'Steadfast DNS (AS-SFDNS-09). ');
$ax += cidrblock($address, '104.171.128.0/21', 'Steadfast DNS (AS-SFDNS-10). ');
$ax += cidrblock($address, '107.191.176.0/22', 'Steadfast DNS (AS-SFDNS-11). ');
$ax += cidrblock($address, '162.208.54.0/23', 'Steadfast DNS (AS-SFDNS-12). ');
$ax += cidrblock($address, '162.210.96.0/21', 'Steadfast DNS (AS-SFDNS-13). ');
$ax += cidrblock($address, '162.249.125.0/24', 'Steadfast DNS (AS-SFDNS-14). ');
$ax += cidrblock($address, '162.249.126.0/23', 'Steadfast DNS (AS-SFDNS-15). ');
$ax += cidrblock($address, '167.89.0.0/20', 'Steadfast DNS (AS-SFDNS-16). ');
$ax += cidrblock($address, '198.23.48.0/20', 'Steadfast DNS (AS-SFDNS-17). ');
$ax += cidrblock($address, '204.238.229.0/24', 'Steadfast DNS (AS-SFDNS-18). ');
$ax += cidrblock($address, '208.66.168.0/21', 'Steadfast DNS (AS-SFDNS-19). ');
$ax += cidrblock($address, '208.100.0.0/18', 'Steadfast DNS (AS-SFDNS-20). ');
$ax += cidrblock($address, '208.117.0.0/18', 'Steadfast DNS (AS-SFDNS-21). ');
$ax += cidrblock($address, '216.86.144.0/20', 'Steadfast DNS (AS-SFDNS-22). ');


// CyberBunker (updated 2016.04.27)
// Not an access provider, and willingly participates in hosting web attacks.
// AS51088
$ax += cidrblock($address, '5.44.72.0/21', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-00). ');
$ax += cidrblock($address, '31.134.200.0/21', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-01). ');
$ax += cidrblock($address, '37.148.184.0/24', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-02). ');
$ax += cidrblock($address, '46.244.0.0/19', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-03). ');
$ax += cidrblock($address, '46.244.96.0/19', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-04). ');
$ax += cidrblock($address, '91.209.12.0/24', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-05). ');
$ax += cidrblock($address, '91.213.13.0/24', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-06). ');
$ax += cidrblock($address, '91.233.224.0/23', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-07). ');
$ax += cidrblock($address, '92.240.144.0/21', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-08). ');
$ax += cidrblock($address, '93.93.120.0/21', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-09). ');
$ax += cidrblock($address, '93.188.68.0/22', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-10). ');
$ax += cidrblock($address, '157.97.0.0/18', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-11). ');
$ax += cidrblock($address, '157.97.64.0/19', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-12). ');
$ax += cidrblock($address, '157.97.96.0/23', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-13). ');
$ax += cidrblock($address, '157.97.100.0/22', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-14). ');
$ax += cidrblock($address, '157.97.104.0/21', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-15). ');
$ax += cidrblock($address, '157.97.112.0/20', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-16). ');
$ax += cidrblock($address, '157.97.128.0/17', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-17). ');
$ax += cidrblock($address, '178.249.152.0/21', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-18). ');
$ax += cidrblock($address, '185.30.204.0/22', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-19). ');
$ax += cidrblock($address, '185.34.220.0/22', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-20). ');
$ax += cidrblock($address, '185.37.4.0/23', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-21). ');
$ax += cidrblock($address, '185.37.6.0/24', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-22). ');
$ax += cidrblock($address, '185.44.244.0/22', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-23). ');
$ax += cidrblock($address, '185.51.48.0/22', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-24). ');
$ax += cidrblock($address, '185.51.52.0/23', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-25). ');
$ax += cidrblock($address, '185.63.244.0/22', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-26). ');
$ax += cidrblock($address, '185.82.88.0/22', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-27). ');
$ax += cidrblock($address, '185.103.56.0/22', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-28). ');
$ax += cidrblock($address, '192.166.96.0/22', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-29). ');
$ax += cidrblock($address, '193.108.238.0/24', 'CyberBunker ASN (ASN-51088-CYBERBUNKER-30). ');


// PIN-AS (updated 2016.03.13)
// Small local access provider for Leningrad, HUGE spam-slinger.
// AS44050
$ax += cidrblock($address, '5.8.8.0/21', 'ASN pinspb.ru (ASN-44050-PINAS-00). ');
$ax += cidrblock($address, '5.8.16.0/21', 'ASN pinspb.ru (ASN-44050-PINAS-01). ');
$ax += cidrblock($address, '5.8.48.0/21', 'ASN pinspb.ru (ASN-44050-PINAS-02). ');
$ax += cidrblock($address, '5.8.56.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-03). ');
$ax += cidrblock($address, '5.8.65.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-05). ');
$ax += cidrblock($address, '5.8.67.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-06). ');
$ax += cidrblock($address, '5.8.72.0/21', 'ASN pinspb.ru (ASN-44050-PINAS-07). ');
$ax += cidrblock($address, '5.8.88.0/21', 'ASN pinspb.ru (ASN-44050-PINAS-08). ');
$ax += cidrblock($address, '5.101.0.0/20', 'ASN pinspb.ru (ASN-44050-PINAS-09). ');
$ax += cidrblock($address, '5.101.48.0/20', 'ASN pinspb.ru (ASN-44050-PINAS-10). ');
$ax += cidrblock($address, '5.101.64.0/19', 'ASN pinspb.ru (ASN-44050-PINAS-11). ');
$ax += cidrblock($address, '5.188.0.0/17', 'ASN pinspb.ru (ASN-44050-PINAS-12). ');
$ax += cidrblock($address, '5.188.128.0/18', 'ASN pinspb.ru (ASN-44050-PINAS-13). ');
$ax += cidrblock($address, '5.188.192.0/19', 'ASN pinspb.ru (ASN-44050-PINAS-14). ');
$ax += cidrblock($address, '5.189.248.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-15). ');
$ax += cidrblock($address, '31.44.184.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-16). ');
$ax += cidrblock($address, '31.184.192.0/19', 'ASN pinspb.ru (ASN-44050-PINAS-17). ');
$ax += cidrblock($address, '31.184.228.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-18). ');
$ax += cidrblock($address, '31.184.232.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-19). ');
$ax += cidrblock($address, '31.184.235.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-20). ');
$ax += cidrblock($address, '31.184.237.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-21). ');
$ax += cidrblock($address, '31.184.238.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-22). ');
$ax += cidrblock($address, '31.184.240.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-23). ');
$ax += cidrblock($address, '31.184.242.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-24). ');
$ax += cidrblock($address, '37.9.50.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-25). ');
$ax += cidrblock($address, '37.9.53.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-26). ');
$ax += cidrblock($address, '37.9.55.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-27). ');
$ax += cidrblock($address, '37.139.50.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-28). ');
$ax += cidrblock($address, '37.139.53.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-29). ');
$ax += cidrblock($address, '37.139.54.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-30). ');
$ax += cidrblock($address, '37.139.56.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-31). ');
$ax += cidrblock($address, '46.161.4.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-32). ');
$ax += cidrblock($address, '46.161.8.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-33). ');
$ax += cidrblock($address, '46.161.16.0/21', 'ASN pinspb.ru (ASN-44050-PINAS-34). ');
$ax += cidrblock($address, '46.161.24.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-35). ');
$ax += cidrblock($address, '46.161.28.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-36). ');
$ax += cidrblock($address, '46.161.30.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-37). ');
$ax += cidrblock($address, '46.161.32.0/21', 'ASN pinspb.ru (ASN-44050-PINAS-38). ');
$ax += cidrblock($address, '46.161.41.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-39). ');
$ax += cidrblock($address, '46.161.44.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-40). ');
$ax += cidrblock($address, '46.161.48.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-41). ');
$ax += cidrblock($address, '82.118.235.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-42). ');
$ax += cidrblock($address, '91.220.131.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-43). ');
$ax += cidrblock($address, '91.243.80.0/20', 'ASN pinspb.ru (ASN-44050-PINAS-44). ');
$ax += cidrblock($address, '95.215.0.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-45). ');
$ax += cidrblock($address, '130.185.238.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-46). ');
$ax += cidrblock($address, '130.185.249.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-47). ');
$ax += cidrblock($address, '130.185.255.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-48). ');
$ax += cidrblock($address, '146.185.216.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-49). ');
$ax += cidrblock($address, '146.185.220.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-50). ');
$ax += cidrblock($address, '146.185.224.0/21', 'ASN pinspb.ru (ASN-44050-PINAS-51). ');
$ax += cidrblock($address, '146.185.234.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-52). ');
$ax += cidrblock($address, '146.185.237.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-53). ');
$ax += cidrblock($address, '146.185.240.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-54). ');
$ax += cidrblock($address, '146.185.243.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-55). ');
$ax += cidrblock($address, '146.185.244.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-56). ');
$ax += cidrblock($address, '146.185.249.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-57). ');
$ax += cidrblock($address, '146.185.250.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-58). ');
$ax += cidrblock($address, '146.185.252.0/24', 'ASN pinspb.ru (ASN-44050-PINAS-59). ');
$ax += cidrblock($address, '188.143.128.0/17', 'ASN pinspb.ru (ASN-44050-PINAS-60). ');
$ax += cidrblock($address, '193.93.192.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-61). ');
$ax += cidrblock($address, '193.107.216.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-62). ');
$ax += cidrblock($address, '195.2.240.0/23', 'ASN pinspb.ru (ASN-44050-PINAS-63). ');
$ax += cidrblock($address, '195.211.124.0/22', 'ASN pinspb.ru (ASN-44050-PINAS-64). ');


// OVH Networks (updated 2016.04.18)
// Not an access provider, allows rampant abuse, hosts badware/bad services.
// AS16276
$ax += cidrblock($address, '5.39.0.0/17', 'OVH Networks (ASN-16276-OVH-00). ');
$ax += cidrblock($address, '5.135.0.0/16', 'OVH Networks (ASN-16276-OVH-01). ');
$ax += cidrblock($address, '5.196.0.0/16', 'OVH Networks (ASN-16276-OVH-02). ');
$ax += cidrblock($address, '8.7.244.0/24', 'OVH Networks (ASN-16276-OVH-03). ');
$ax += cidrblock($address, '8.18.128.0/24', 'OVH Networks (ASN-16276-OVH-04). ');
$ax += cidrblock($address, '8.18.136.0/21', 'OVH Networks (ASN-16276-OVH-05). ');
$ax += cidrblock($address, '8.18.172.0/24', 'OVH Networks (ASN-16276-OVH-06). ');
$ax += cidrblock($address, '8.20.110.0/24', 'OVH Networks (ASN-16276-OVH-07). ');
$ax += cidrblock($address, '8.21.41.0/24', 'OVH Networks (ASN-16276-OVH-08). ');
$ax += cidrblock($address, '8.24.8.0/21', 'OVH Networks (ASN-16276-OVH-09). ');
$ax += cidrblock($address, '8.26.94.0/24', 'OVH Networks (ASN-16276-OVH-10). ');
$ax += cidrblock($address, '8.29.224.0/24', 'OVH Networks (ASN-16276-OVH-11). ');
$ax += cidrblock($address, '8.30.208.0/21', 'OVH Networks (ASN-16276-OVH-12). ');
$ax += cidrblock($address, '8.33.96.0/21', 'OVH Networks (ASN-16276-OVH-13). ');
$ax += cidrblock($address, '8.33.128.0/21', 'OVH Networks (ASN-16276-OVH-14). ');
$ax += cidrblock($address, '8.33.136.0/23', 'OVH Networks (ASN-16276-OVH-15). ');
$ax += cidrblock($address, '37.59.0.0/16', 'OVH Networks (ASN-16276-OVH-16). ');
$ax += cidrblock($address, '37.60.48.0/20', 'OVH Networks (ASN-16276-OVH-17). ');
$ax += cidrblock($address, '37.187.0.0/16', 'OVH Networks (ASN-16276-OVH-18). ');
$ax += cidrblock($address, '46.105.0.0/16', 'OVH Networks (ASN-16276-OVH-19). ');
$ax += cidrblock($address, '51.254.0.0/15', 'OVH Networks (ASN-16276-OVH-20). ');
$ax += cidrblock($address, '62.245.0.0/19', 'OVH Networks (ASN-16276-OVH-21). ');
$ax += cidrblock($address, '87.98.128.0/17', 'OVH Networks (ASN-16276-OVH-22). ');
$ax += cidrblock($address, '91.90.88.0/21', 'OVH Networks (ASN-16276-OVH-23). ');
$ax += cidrblock($address, '91.121.0.0/16', 'OVH Networks (ASN-16276-OVH-24). ');
$ax += cidrblock($address, '91.134.0.0/16', 'OVH Networks (ASN-16276-OVH-25). ');
$ax += cidrblock($address, '92.222.0.0/16', 'OVH Networks (ASN-16276-OVH-26). ');
$ax += cidrblock($address, '94.23.0.0/16', 'OVH Networks (ASN-16276-OVH-27). ');
$ax += cidrblock($address, '103.5.12.0/22', 'OVH Networks (ASN-16276-OVH-28). ');
$ax += cidrblock($address, '142.4.192.0/19', 'OVH Networks (ASN-16276-OVH-29). ');
$ax += cidrblock($address, '149.56.0.0/16', 'OVH Networks (ASN-16276-OVH-30). ');
$ax += cidrblock($address, '149.202.0.0/16', 'OVH Networks (ASN-16276-OVH-31). ');
$ax += cidrblock($address, '151.80.0.0/16', 'OVH Networks (ASN-16276-OVH-32). ');
$ax += cidrblock($address, '158.69.0.0/16', 'OVH Networks (ASN-16276-OVH-33). ');
$ax += cidrblock($address, '164.132.0.0/16', 'OVH Networks (ASN-16276-OVH-34). ');
$ax += cidrblock($address, '167.114.0.0/16', 'OVH Networks (ASN-16276-OVH-35). ');
$ax += cidrblock($address, '176.31.0.0/16', 'OVH Networks (ASN-16276-OVH-36). ');
$ax += cidrblock($address, '178.32.0.0/15', 'OVH Networks (ASN-16276-OVH-37). ');
$ax += cidrblock($address, '185.12.32.0/23', 'OVH Networks (ASN-16276-OVH-38). ');
$ax += cidrblock($address, '188.165.0.0/16', 'OVH Networks (ASN-16276-OVH-39). ');
$ax += cidrblock($address, '192.95.0.0/18', 'OVH Networks (ASN-16276-OVH-40). ');
$ax += cidrblock($address, '192.99.0.0/16', 'OVH Networks (ASN-16276-OVH-41). ');
$ax += cidrblock($address, '193.104.19.0/24', 'OVH Networks (ASN-16276-OVH-42). ');
$ax += cidrblock($address, '193.109.63.0/24', 'OVH Networks (ASN-16276-OVH-43). ');
$ax += cidrblock($address, '195.110.30.0/23', 'OVH Networks (ASN-16276-OVH-44). ');
$ax += cidrblock($address, '195.246.232.0/23', 'OVH Networks (ASN-16276-OVH-45). ');
$ax += cidrblock($address, '198.27.64.0/18', 'OVH Networks (ASN-16276-OVH-46). ');
$ax += cidrblock($address, '198.50.128.0/17', 'OVH Networks (ASN-16276-OVH-47). ');
$ax += cidrblock($address, '198.100.144.0/20', 'OVH Networks (ASN-16276-OVH-48). ');
$ax += cidrblock($address, '198.245.48.0/20', 'OVH Networks (ASN-16276-OVH-49). ');
$ax += cidrblock($address, '213.186.32.0/19', 'OVH Networks (ASN-16276-OVH-50). ');
$ax += cidrblock($address, '213.251.128.0/18', 'OVH Networks (ASN-16276-OVH-51). ');


// TEST: Reprieve for possible human clusters on OVH DSL (started: APR-04-14)

if ($ax === 1 && inmatch($whyblockout, '(ASN-16276-OVH-', '') && rmatch($hoster, '.dsl.ovh.fr', '')) {
    $ax = 0;
    $whyblockout = '';
}


// IOMart and *RapidSwitch (Crimeware Friendly ISP; hpHosts Blog warned us about this one).
// Hosting Death by Captcha .com and .eu CAPTCHA cracking services.
// AS20860, AS21130 (updated 2016.04.25)
$ax += cidrblock($address, '5.62.4.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-000). ');
$ax += cidrblock($address, '5.62.8.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-001). ');
$ax += cidrblock($address, '5.62.22.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-002). ');
$ax += cidrblock($address, '5.62.24.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-003). ');
$ax += cidrblock($address, '5.77.32.0/19', 'IOMart, Privax, RapidSwitch (AS-IOMART-004). ');
$ax += cidrblock($address, '5.133.176.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-005). ');
$ax += cidrblock($address, '31.24.39.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-006). ');
$ax += cidrblock($address, '31.187.70.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-007). ');
$ax += cidrblock($address, '31.216.48.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-008). ');
$ax += cidrblock($address, '37.235.124.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-009). ');
$ax += cidrblock($address, '37.247.116.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-010). ');
$ax += cidrblock($address, '46.20.236.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-011). ');
$ax += cidrblock($address, '46.102.106.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-012). ');
$ax += cidrblock($address, '62.128.192.0/19', 'IOMart, Privax, RapidSwitch (AS-IOMART-013). ');
$ax += cidrblock($address, '62.233.64.0/18', 'IOMart, Privax, RapidSwitch (AS-IOMART-014). ');
$ax += cidrblock($address, '64.64.123.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-015). ');
$ax += cidrblock($address, '78.129.128.0/17', 'IOMart, Privax, RapidSwitch (AS-IOMART-016). ');
$ax += cidrblock($address, '79.171.32.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-017). ');
$ax += cidrblock($address, '80.75.64.0/20', 'IOMart, Privax, RapidSwitch (AS-IOMART-018). ');
$ax += cidrblock($address, '80.84.49.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-019). ');
$ax += cidrblock($address, '81.94.192.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-020). ');
$ax += cidrblock($address, '82.102.8.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-021). ');
$ax += cidrblock($address, '82.145.32.0/19', 'IOMart, Privax, RapidSwitch (AS-IOMART-022). ');
$ax += cidrblock($address, '83.142.224.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-023). ');
$ax += cidrblock($address, '84.22.160.0/19', 'IOMart, Privax, RapidSwitch (AS-IOMART-024). ');
$ax += cidrblock($address, '85.232.32.0/19', 'IOMart, Privax, RapidSwitch (AS-IOMART-025). ');
$ax += cidrblock($address, '86.105.235.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-026). ');
$ax += cidrblock($address, '86.107.22.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-027). ');
$ax += cidrblock($address, '86.107.42.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-028). ');
$ax += cidrblock($address, '87.117.192.0/18', 'IOMart, Privax, RapidSwitch (AS-IOMART-029). ');
$ax += cidrblock($address, '88.150.137.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-030). ');
$ax += cidrblock($address, '88.150.140.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-031). ');
$ax += cidrblock($address, '88.150.144.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-032). ');
$ax += cidrblock($address, '88.150.154.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-033). ');
$ax += cidrblock($address, '88.150.156.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-034). ');
$ax += cidrblock($address, '88.150.160.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-035). ');
$ax += cidrblock($address, '88.150.168.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-036). ');
$ax += cidrblock($address, '88.150.206.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-037). ');
$ax += cidrblock($address, '88.150.230.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-038). ');
$ax += cidrblock($address, '88.150.240.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-039). ');
$ax += cidrblock($address, '88.150.252.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-040). ');
$ax += cidrblock($address, '89.34.2.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-041). ');
$ax += cidrblock($address, '89.39.71.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-042). ');
$ax += cidrblock($address, '89.39.81.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-043). ');
$ax += cidrblock($address, '89.39.213.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-044). ');
$ax += cidrblock($address, '89.40.203.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-045). ');
$ax += cidrblock($address, '89.42.12.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-046). ');
$ax += cidrblock($address, '89.207.168.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-047). ');
$ax += cidrblock($address, '91.199.151.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-048). ');
$ax += cidrblock($address, '91.207.220.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-049). ');
$ax += cidrblock($address, '91.212.93.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-050). ');
$ax += cidrblock($address, '91.215.180.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-051). ');
$ax += cidrblock($address, '91.245.218.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-052). ');
$ax += cidrblock($address, '93.113.56.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-053). ');
$ax += cidrblock($address, '93.113.159.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-054). ');
$ax += cidrblock($address, '93.117.65.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-055). ');
$ax += cidrblock($address, '93.117.174.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-056). ');
$ax += cidrblock($address, '93.174.10.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-057). ');
$ax += cidrblock($address, '95.129.104.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-058). ');
$ax += cidrblock($address, '95.154.192.0/18', 'IOMart, Privax, RapidSwitch (AS-IOMART-059). ');
$ax += cidrblock($address, '104.237.241.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-060). ');
$ax += cidrblock($address, '109.75.160.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-061). ');
$ax += cidrblock($address, '109.169.0.0/18', 'IOMart, Privax, RapidSwitch (AS-IOMART-062). ');
$ax += cidrblock($address, '109.169.64.0/19', 'IOMart, Privax, RapidSwitch (AS-IOMART-063). ');
$ax += cidrblock($address, '109.200.30.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-064). ');
$ax += cidrblock($address, '109.203.103.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-065). ');
$ax += cidrblock($address, '109.203.110.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-066). ');
$ax += cidrblock($address, '109.203.117.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-067). ');
$ax += cidrblock($address, '109.203.127.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-068). ');
$ax += cidrblock($address, '130.185.144.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-069). ');
$ax += cidrblock($address, '149.255.96.0/20', 'IOMart, Privax, RapidSwitch (AS-IOMART-070). ');
$ax += cidrblock($address, '159.255.208.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-071). ');
$ax += cidrblock($address, '172.93.122.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-072). ');
$ax += cidrblock($address, '172.111.165.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-073). ');
$ax += cidrblock($address, '172.111.166.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-074). ');
$ax += cidrblock($address, '182.54.237.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-075). ');
$ax += cidrblock($address, '185.17.148.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-076). ');
$ax += cidrblock($address, '185.19.16.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-077). ');
$ax += cidrblock($address, '185.20.48.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-078). ');
$ax += cidrblock($address, '185.25.243.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-079). ');
$ax += cidrblock($address, '185.26.148.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-080). ');
$ax += cidrblock($address, '185.32.109.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-081). ');
$ax += cidrblock($address, '185.32.110.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-082). ');
$ax += cidrblock($address, '185.35.77.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-083). ');
$ax += cidrblock($address, '185.35.79.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-084). ');
$ax += cidrblock($address, '185.37.178.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-085). ');
$ax += cidrblock($address, '185.57.188.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-086). ');
$ax += cidrblock($address, '185.91.76.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-087). ');
$ax += cidrblock($address, '185.116.212.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-088). ');
$ax += cidrblock($address, '185.131.8.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-089). ');
$ax += cidrblock($address, '185.141.192.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-090). ');
$ax += cidrblock($address, '185.145.156.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-091). ');
$ax += cidrblock($address, '188.208.111.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-092). ');
$ax += cidrblock($address, '188.210.255.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-093). ');
$ax += cidrblock($address, '188.214.198.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-094). ');
$ax += cidrblock($address, '188.215.32.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-095). ');
$ax += cidrblock($address, '188.227.169.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-096). ');
$ax += cidrblock($address, '188.227.170.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-097). ');
$ax += cidrblock($address, '188.227.174.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-098). ');
$ax += cidrblock($address, '188.227.186.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-099). ');
$ax += cidrblock($address, '192.121.166.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-100). ');
$ax += cidrblock($address, '192.253.244.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-101). ');
$ax += cidrblock($address, '193.200.98.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-102). ');
$ax += cidrblock($address, '193.201.200.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-103). ');
$ax += cidrblock($address, '194.1.150.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-104). ');
$ax += cidrblock($address, '194.6.235.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-105). ');
$ax += cidrblock($address, '195.24.230.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-106). ');
$ax += cidrblock($address, '195.62.10.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-107). ');
$ax += cidrblock($address, '195.177.192.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-108). ');
$ax += cidrblock($address, '198.52.160.0/23', 'IOMart, Privax, RapidSwitch (AS-IOMART-109). ');
$ax += cidrblock($address, '206.187.52.0/22', 'IOMart, Privax, RapidSwitch (AS-IOMART-110). ');
$ax += cidrblock($address, '212.38.160.0/19', 'IOMart, Privax, RapidSwitch (AS-IOMART-111). ');
$ax += cidrblock($address, '212.84.160.0/19', 'IOMart, Privax, RapidSwitch (AS-IOMART-112). ');
$ax += cidrblock($address, '217.19.1.0/24', 'IOMart, Privax, RapidSwitch (AS-IOMART-113). ');
$ax += cidrblock($address, '217.26.232.0/21', 'IOMart, Privax, RapidSwitch (AS-IOMART-114). ');
$ax += cidrblock($address, '217.77.176.0/20', 'IOMart, Privax, RapidSwitch (AS-IOMART-115). ');
$ax += cidrblock($address, '217.147.80.0/20', 'IOMart, Privax, RapidSwitch (AS-IOMART-116). ');
$ax += cidrblock($address, '217.194.208.0/20', 'IOMart, Privax, RapidSwitch (AS-IOMART-117). ');


// Bytemark Anonymous Proxies (updated 2016.01.20 / checked 2016.03.12)
// AS35425
$ax += cidrblock($address, '5.28.56.0/21', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-00). ');
$ax += cidrblock($address, '5.153.224.0/21', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-01). ');
$ax += cidrblock($address, '46.43.0.0/18', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-02). ');
$ax += cidrblock($address, '80.68.80.0/20', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-03). ');
$ax += cidrblock($address, '89.16.160.0/19', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-04). ');
$ax += cidrblock($address, '91.223.58.0/24', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-05). ');
$ax += cidrblock($address, '185.15.240.0/22', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-06). ');
$ax += cidrblock($address, '185.90.192.0/22', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-07). ');
$ax += cidrblock($address, '185.98.188.0/24', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-08). ');
$ax += cidrblock($address, '185.128.208.0/23', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-09). ');
$ax += cidrblock($address, '185.128.220.0/23', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-10). ');
$ax += cidrblock($address, '193.227.244.0/23', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-11). ');
$ax += cidrblock($address, '212.110.160.0/19', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-12). ');
$ax += cidrblock($address, '213.138.96.0/19', 'Bytemark Anonymous Proxies (ASN-35425-BYTEMARK-13). ');


// Plus Server, not an access provider (updated 2016.06.09)
// AS8972, AS25074
$ax += cidrblock($address, '5.1.120.0/21', 'Plus Server, not an access provider (AS-PLSSRV-00). ');
$ax += cidrblock($address, '46.22.32.0/20', 'Plus Server, not an access provider (AS-PLSSRV-01). ');
$ax += cidrblock($address, '46.229.46.0/23', 'Plus Server, not an access provider (AS-PLSSRV-02). ');
$ax += cidrblock($address, '46.231.88.0/21', 'Plus Server, not an access provider (AS-PLSSRV-03). ');
$ax += cidrblock($address, '62.67.211.0/24', 'Plus Server, not an access provider (AS-PLSSRV-04). ');
$ax += cidrblock($address, '62.67.212.0/23', 'Plus Server, not an access provider (AS-PLSSRV-05). ');
$ax += cidrblock($address, '62.67.215.0/24', 'Plus Server, not an access provider (AS-PLSSRV-06). ');
$ax += cidrblock($address, '62.67.233.0/24', 'Plus Server, not an access provider (AS-PLSSRV-07). ');
$ax += cidrblock($address, '62.75.128.0/17', 'Plus Server, not an access provider (AS-PLSSRV-08). ');
$ax += cidrblock($address, '62.138.0.0/19', 'Plus Server, not an access provider (AS-PLSSRV-09). ');
$ax += cidrblock($address, '62.138.192.0/20', 'Plus Server, not an access provider (AS-PLSSRV-10). ');
$ax += cidrblock($address, '77.236.96.0/21', 'Plus Server, not an access provider (AS-PLSSRV-11). ');
$ax += cidrblock($address, '78.138.64.0/18', 'Plus Server, not an access provider (AS-PLSSRV-12). ');
$ax += cidrblock($address, '80.86.80.0/20', 'Plus Server, not an access provider (AS-PLSSRV-13). ');
$ax += cidrblock($address, '80.242.128.0/19', 'Plus Server, not an access provider (AS-PLSSRV-14). ');
$ax += cidrblock($address, '83.142.128.0/21', 'Plus Server, not an access provider (AS-PLSSRV-15). ');
$ax += cidrblock($address, '83.220.128.0/19', 'Plus Server, not an access provider (AS-PLSSRV-16). ');
$ax += cidrblock($address, '84.246.125.0/24', 'Plus Server, not an access provider (AS-PLSSRV-17). ');
$ax += cidrblock($address, '84.246.126.0/24', 'Plus Server, not an access provider (AS-PLSSRV-18). ');
$ax += cidrblock($address, '85.25.0.0/16', 'Plus Server, not an access provider (AS-PLSSRV-19). ');
$ax += cidrblock($address, '85.93.65.0/24', 'Plus Server, not an access provider (AS-PLSSRV-20). ');
$ax += cidrblock($address, '85.93.66.0/23', 'Plus Server, not an access provider (AS-PLSSRV-21). ');
$ax += cidrblock($address, '85.93.80.0/24', 'Plus Server, not an access provider (AS-PLSSRV-22). ');
$ax += cidrblock($address, '85.93.83.0/24', 'Plus Server, not an access provider (AS-PLSSRV-23). ');
$ax += cidrblock($address, '85.93.88.0/21', 'Plus Server, not an access provider (AS-PLSSRV-24). ');
$ax += cidrblock($address, '87.119.192.0/19', 'Plus Server, not an access provider (AS-PLSSRV-25). ');
$ax += cidrblock($address, '89.19.224.0/19', 'Plus Server, not an access provider (AS-PLSSRV-26). ');
$ax += cidrblock($address, '91.194.132.0/23', 'Plus Server, not an access provider (AS-PLSSRV-27). ');
$ax += cidrblock($address, '95.174.80.0/21', 'Plus Server, not an access provider (AS-PLSSRV-28). ');
$ax += cidrblock($address, '109.234.248.0/21', 'Plus Server, not an access provider (AS-PLSSRV-29). ');
$ax += cidrblock($address, '185.5.24.0/23', 'Plus Server, not an access provider (AS-PLSSRV-30). ');
$ax += cidrblock($address, '185.5.27.0/24', 'Plus Server, not an access provider (AS-PLSSRV-31). ');
$ax += cidrblock($address, '188.138.0.0/17', 'Plus Server, not an access provider (AS-PLSSRV-32). ');
$ax += cidrblock($address, '194.30.185.0/24', 'Plus Server, not an access provider (AS-PLSSRV-33). ');
$ax += cidrblock($address, '194.150.228.0/23', 'Plus Server, not an access provider (AS-PLSSRV-34). ');
$ax += cidrblock($address, '195.66.102.0/24', 'Plus Server, not an access provider (AS-PLSSRV-35). ');
$ax += cidrblock($address, '195.122.141.0/24', 'Plus Server, not an access provider (AS-PLSSRV-36). ');
$ax += cidrblock($address, '195.137.212.0/23', 'Plus Server, not an access provider (AS-PLSSRV-37). ');
$ax += cidrblock($address, '195.149.74.0/24', 'Plus Server, not an access provider (AS-PLSSRV-38). ');
$ax += cidrblock($address, '212.40.160.0/24', 'Plus Server, not an access provider (AS-PLSSRV-39). ');
$ax += cidrblock($address, '212.40.163.0/24', 'Plus Server, not an access provider (AS-PLSSRV-40). ');
$ax += cidrblock($address, '212.40.164.0/24', 'Plus Server, not an access provider (AS-PLSSRV-41). ');
$ax += cidrblock($address, '212.40.166.0/23', 'Plus Server, not an access provider (AS-PLSSRV-42). ');
$ax += cidrblock($address, '212.40.168.0/24', 'Plus Server, not an access provider (AS-PLSSRV-43). ');
$ax += cidrblock($address, '212.40.171.0/24', 'Plus Server, not an access provider (AS-PLSSRV-44). ');
$ax += cidrblock($address, '212.40.172.0/23', 'Plus Server, not an access provider (AS-PLSSRV-45). ');
$ax += cidrblock($address, '212.40.174.0/24', 'Plus Server, not an access provider (AS-PLSSRV-46). ');
$ax += cidrblock($address, '212.40.176.0/21', 'Plus Server, not an access provider (AS-PLSSRV-47). ');
$ax += cidrblock($address, '212.40.185.0/24', 'Plus Server, not an access provider (AS-PLSSRV-48). ');
$ax += cidrblock($address, '212.40.186.0/24', 'Plus Server, not an access provider (AS-PLSSRV-49). ');
$ax += cidrblock($address, '212.40.189.0/24', 'Plus Server, not an access provider (AS-PLSSRV-50). ');
$ax += cidrblock($address, '212.48.74.0/24', 'Plus Server, not an access provider (AS-PLSSRV-51). ');
$ax += cidrblock($address, '212.48.90.0/24', 'Plus Server, not an access provider (AS-PLSSRV-52). ');
$ax += cidrblock($address, '212.48.93.0/24', 'Plus Server, not an access provider (AS-PLSSRV-53). ');
$ax += cidrblock($address, '212.162.12.0/22', 'Plus Server, not an access provider (AS-PLSSRV-54). ');
$ax += cidrblock($address, '212.162.52.0/23', 'Plus Server, not an access provider (AS-PLSSRV-55). ');
$ax += cidrblock($address, '212.162.56.0/23', 'Plus Server, not an access provider (AS-PLSSRV-56). ');
$ax += cidrblock($address, '213.131.224.0/19', 'Plus Server, not an access provider (AS-PLSSRV-57). ');
$ax += cidrblock($address, '213.174.32.0/19', 'Plus Server, not an access provider (AS-PLSSRV-58). ');
$ax += cidrblock($address, '213.203.192.0/18', 'Plus Server, not an access provider (AS-PLSSRV-59). ');
$ax += cidrblock($address, '217.118.16.0/20', 'Plus Server, not an access provider (AS-PLSSRV-60). ');
$ax += cidrblock($address, '217.119.49.0/24', 'Plus Server, not an access provider (AS-PLSSRV-61). ');
$ax += cidrblock($address, '217.119.50.0/23', 'Plus Server, not an access provider (AS-PLSSRV-62). ');
$ax += cidrblock($address, '217.119.52.0/22', 'Plus Server, not an access provider (AS-PLSSRV-63). ');
$ax += cidrblock($address, '217.119.56.0/22', 'Plus Server, not an access provider (AS-PLSSRV-64). ');
$ax += cidrblock($address, '217.119.63.0/24', 'Plus Server, not an access provider (AS-PLSSRV-65). ');
$ax += cidrblock($address, '217.172.160.0/19', 'Plus Server, not an access provider (AS-PLSSRV-66). ');


// Trend Micro (updated 2016.01.20 / checked 2016.03.12)
// AS16880, AS36421
$ax += cidrblock($address, '8.30.172.0/24', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-00). ');
$ax += cidrblock($address, '66.180.80.0/20', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-01). ');
$ax += cidrblock($address, '150.70.0.0/20', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-02). ');
$ax += cidrblock($address, '150.70.31.0/24', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-03). ');
$ax += cidrblock($address, '150.70.48.0/20', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-04). ');
$ax += cidrblock($address, '150.70.64.0/18', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-05). ');
$ax += cidrblock($address, '150.70.144.0/20', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-06). ');
$ax += cidrblock($address, '150.70.160.0/19', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-07). ');
$ax += cidrblock($address, '150.70.192.0/21', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-08). ');
$ax += cidrblock($address, '150.70.224.0/19', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-09). ');
$ax += cidrblock($address, '202.3.185.0/24', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-10). ');
$ax += cidrblock($address, '206.165.76.0/24', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-11). ');
$ax += cidrblock($address, '216.99.128.0/20', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-12). ');
$ax += cidrblock($address, '216.104.0.0/19', 'Trend Micro. Follows their users around, and attempts to get into restricted/private parts of websites. Privacy risk & replay attack (AS-TRENDM-13). ');


/**
 * AS174 ("Cogent Communications"): "Big Hosting Plus", "DME Hosting LLC", "EGIHosting", "FDCservers.net",
 * "High Point Host", "Lunanode Hosting Inc.", "Pleasant Hosting", "Power Up Hosting, Inc.",
 * "Rica Costa Hosting RCH, S.A.", "Sovremennie Techologii Biznesa", "FORTUNIX NETWORKS L.P." (this list of names may
 * change as time passes, and may need continual adjustments in the future). Updated: 2016.02.05
 *
 * The community has seen and experienced a significant amount of unwanted traffic from their ASN in the past (hack
 * attempts, spamming, scraping, various forms of general malicious activity, etc), and IPs sending out this type of
 * traffic, usually, should definitely be blocked, but unfortunately, their ASN is very widely-encompassing and
 * interlaces significantly with with a number of benign, innocent ISPs, human endpoint connections (A/DSL connections,
 * etc), as well as with backbone architecture and various IPs and CIDRs that we definitely shouldn't be blocking. As a
 * compromise for this situation, I'm including a section in this signature file for their CIDRs, but, rather than
 * simply including the entire ASN, I'm making a point of only including those CIDRs that I can confirm don't belong
 * the human endpoint connections and those CIDRs that appear to be cloud services (ie, if they announce in a way that
 * makes them appear to be a hosting service, server leaser, colocation service, etc).
 *
 * Wikipedia page about Cogent Communications: en.wikipedia.org/wiki/Cogent_Communications
 * Refer bgpmon.net/large-scale-bgp-hijack-out-of-india/
 * Refer forums.spybot.info/showthread.php?23632-SPAM-frauds-fakes-and-other-MALWARE-deliveries/page37
 * Refer research.dyn.com/2013/11/mitm-internet-hijacking/
 * Refer spambotsecurity.com/forum/viewtopic.php?f=14&t=3014
 * Refer spambotsecurity.com/forum/viewtopic.php?f=7&t=1966
 */

$ax += cidrblock($address, '23.27.15.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-000). ');
$ax += cidrblock($address, '50.7.1.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-001). ');
$ax += cidrblock($address, '50.7.2.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-002). ');
$ax += cidrblock($address, '50.7.36.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-003). ');
$ax += cidrblock($address, '50.7.40.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-004). ');
$ax += cidrblock($address, '50.7.50.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-005). ');
$ax += cidrblock($address, '50.7.60.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-006). ');
$ax += cidrblock($address, '50.7.64.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-007). ');
$ax += cidrblock($address, '50.7.80.0/20', 'Cogent. Not an access provider ISP (ASN-174-COGENT-008). ');
$ax += cidrblock($address, '50.7.113.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-009). ');
$ax += cidrblock($address, '50.7.114.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-010). ');
$ax += cidrblock($address, '50.7.120.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-011). ');
$ax += cidrblock($address, '50.7.128.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-012). ');
$ax += cidrblock($address, '50.7.136.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-013). ');
$ax += cidrblock($address, '50.7.144.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-014). ');
$ax += cidrblock($address, '50.7.152.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-015). ');
$ax += cidrblock($address, '50.7.160.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-016). ');
$ax += cidrblock($address, '50.7.168.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-017). ');
$ax += cidrblock($address, '50.7.180.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-018). ');
$ax += cidrblock($address, '50.7.184.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-019). ');
$ax += cidrblock($address, '66.90.82.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-020). ');
$ax += cidrblock($address, '66.90.84.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-021). ');
$ax += cidrblock($address, '66.90.91.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-022). ');
$ax += cidrblock($address, '66.90.96.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-023). ');
$ax += cidrblock($address, '66.90.98.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-024). ');
$ax += cidrblock($address, '66.90.108.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-025). ');
$ax += cidrblock($address, '66.90.119.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-026). ');
$ax += cidrblock($address, '66.90.120.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-027). ');
$ax += cidrblock($address, '66.90.122.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-028). ');
$ax += cidrblock($address, '66.90.125.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-029). ');
$ax += cidrblock($address, '67.159.0.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-030). ');
$ax += cidrblock($address, '67.159.10.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-031). ');
$ax += cidrblock($address, '67.159.13.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-032). ');
$ax += cidrblock($address, '67.159.16.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-033). ');
$ax += cidrblock($address, '67.159.19.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-034). ');
$ax += cidrblock($address, '67.159.39.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-035). ');
$ax += cidrblock($address, '67.159.40.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-036). ');
$ax += cidrblock($address, '67.159.48.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-037). ');
$ax += cidrblock($address, '67.159.52.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-038). ');
$ax += cidrblock($address, '67.159.55.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-039). ');
$ax += cidrblock($address, '67.159.56.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-040). ');
$ax += cidrblock($address, '67.159.58.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-041). ');
$ax += cidrblock($address, '69.1.227.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-042). ');
$ax += cidrblock($address, '69.1.228.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-043). ');
$ax += cidrblock($address, '74.63.64.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-044). ');
$ax += cidrblock($address, '74.63.72.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-045). ');
$ax += cidrblock($address, '74.63.75.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-046). ');
$ax += cidrblock($address, '74.63.79.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-047). ');
$ax += cidrblock($address, '74.63.84.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-048). ');
$ax += cidrblock($address, '74.63.88.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-049). ');
$ax += cidrblock($address, '74.63.92.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-050). ');
$ax += cidrblock($address, '74.63.97.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-051). ');
$ax += cidrblock($address, '74.63.99.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-052). ');
$ax += cidrblock($address, '74.63.101.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-053). ');
$ax += cidrblock($address, '74.63.105.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-054). ');
$ax += cidrblock($address, '74.63.109.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-055). ');
$ax += cidrblock($address, '74.63.111.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-056). ');
$ax += cidrblock($address, '74.63.112.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-057). ');
$ax += cidrblock($address, '74.63.116.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-058). ');
$ax += cidrblock($address, '74.63.118.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-059). ');
$ax += cidrblock($address, '74.63.122.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-060). ');
$ax += cidrblock($address, '74.221.210.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-061). ');
$ax += cidrblock($address, '74.221.212.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-062). ');
$ax += cidrblock($address, '74.221.217.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-063). ');
$ax += cidrblock($address, '74.221.219.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-064). ');
$ax += cidrblock($address, '74.221.220.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-065). ');
$ax += cidrblock($address, '74.221.222.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-066). ');
$ax += cidrblock($address, '76.73.1.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-067). ');
$ax += cidrblock($address, '76.73.2.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-068). ');
$ax += cidrblock($address, '76.73.4.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-069). ');
$ax += cidrblock($address, '76.73.8.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-070). ');
$ax += cidrblock($address, '76.73.12.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-071). ');
$ax += cidrblock($address, '76.73.19.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-072). ');
$ax += cidrblock($address, '76.73.20.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-073). ');
$ax += cidrblock($address, '76.73.22.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-074). ');
$ax += cidrblock($address, '76.73.25.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-075). ');
$ax += cidrblock($address, '76.73.26.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-076). ');
$ax += cidrblock($address, '76.73.28.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-077). ');
$ax += cidrblock($address, '76.73.30.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-078). ');
$ax += cidrblock($address, '76.73.35.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-079). ');
$ax += cidrblock($address, '76.73.36.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-080). ');
$ax += cidrblock($address, '76.73.40.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-081). ');
$ax += cidrblock($address, '76.73.48.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-082). ');
$ax += cidrblock($address, '76.73.50.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-083). ');
$ax += cidrblock($address, '76.73.52.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-084). ');
$ax += cidrblock($address, '76.73.54.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-085). ');
$ax += cidrblock($address, '76.73.57.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-086). ');
$ax += cidrblock($address, '76.73.58.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-087). ');
$ax += cidrblock($address, '76.73.62.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-088). ');
$ax += cidrblock($address, '76.73.64.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-089). ');
$ax += cidrblock($address, '76.73.66.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-090). ');
$ax += cidrblock($address, '76.73.69.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-091). ');
$ax += cidrblock($address, '76.73.71.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-092). ');
$ax += cidrblock($address, '76.73.72.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-093). ');
$ax += cidrblock($address, '76.73.74.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-094). ');
$ax += cidrblock($address, '76.73.76.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-095). ');
$ax += cidrblock($address, '76.73.78.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-096). ');
$ax += cidrblock($address, '76.73.80.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-097). ');
$ax += cidrblock($address, '76.73.82.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-098). ');
$ax += cidrblock($address, '76.73.86.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-099). ');
$ax += cidrblock($address, '76.73.88.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-100). ');
$ax += cidrblock($address, '76.73.94.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-101). ');
$ax += cidrblock($address, '76.73.101.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-102). ');
$ax += cidrblock($address, '76.73.102.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-103). ');
$ax += cidrblock($address, '76.73.104.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-104). ');
$ax += cidrblock($address, '76.73.106.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-105). ');
$ax += cidrblock($address, '76.73.108.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-106). ');
$ax += cidrblock($address, '76.73.114.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-107). ');
$ax += cidrblock($address, '76.73.116.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-108). ');
$ax += cidrblock($address, '76.73.118.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-109). ');
$ax += cidrblock($address, '76.73.122.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-110). ');
$ax += cidrblock($address, '91.220.173.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-111). ');
$ax += cidrblock($address, '104.37.56.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-112). ');
$ax += cidrblock($address, '104.254.212.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-113). ');
$ax += cidrblock($address, '162.244.8.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-114). ');
$ax += cidrblock($address, '170.75.160.0/20', 'Cogent. Not an access provider ISP (ASN-174-COGENT-115). ');
$ax += cidrblock($address, '172.81.176.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-116). ');
$ax += cidrblock($address, '179.51.192.0/20', 'Cogent. Not an access provider ISP (ASN-174-COGENT-117). ');
$ax += cidrblock($address, '192.240.98.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-118). ');
$ax += cidrblock($address, '192.240.104.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-119). ');
$ax += cidrblock($address, '192.240.112.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-120). ');
$ax += cidrblock($address, '192.240.118.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-121). ');
$ax += cidrblock($address, '192.240.120.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-122). ');
$ax += cidrblock($address, '192.240.123.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-123). ');
$ax += cidrblock($address, '192.240.124.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-124). ');
$ax += cidrblock($address, '198.16.66.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-125). ');
$ax += cidrblock($address, '198.16.68.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-126). ');
$ax += cidrblock($address, '198.16.72.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-127). ');
$ax += cidrblock($address, '198.16.80.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-128). ');
$ax += cidrblock($address, '198.16.88.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-129). ');
$ax += cidrblock($address, '198.16.92.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-130). ');
$ax += cidrblock($address, '198.16.94.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-131). ');
$ax += cidrblock($address, '198.16.127.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-132). ');
$ax += cidrblock($address, '198.255.3.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-133). ');
$ax += cidrblock($address, '198.255.4.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-134). ');
$ax += cidrblock($address, '198.255.8.0/21', 'Cogent. Not an access provider ISP (ASN-174-COGENT-135). ');
$ax += cidrblock($address, '198.255.16.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-136). ');
$ax += cidrblock($address, '198.255.24.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-137). ');
$ax += cidrblock($address, '198.255.44.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-138). ');
$ax += cidrblock($address, '198.255.123.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-139). ');
$ax += cidrblock($address, '198.255.127.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-140). ');
$ax += cidrblock($address, '204.45.0.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-141). ');
$ax += cidrblock($address, '204.45.2.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-142). ');
$ax += cidrblock($address, '204.45.11.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-143). ');
$ax += cidrblock($address, '204.45.12.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-144). ');
$ax += cidrblock($address, '204.45.16.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-145). ');
$ax += cidrblock($address, '204.45.18.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-146). ');
$ax += cidrblock($address, '204.45.21.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-147). ');
$ax += cidrblock($address, '204.45.22.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-148). ');
$ax += cidrblock($address, '204.45.28.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-149). ');
$ax += cidrblock($address, '204.45.33.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-150). ');
$ax += cidrblock($address, '204.45.39.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-151). ');
$ax += cidrblock($address, '204.45.41.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-152). ');
$ax += cidrblock($address, '204.45.42.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-153). ');
$ax += cidrblock($address, '204.45.46.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-154). ');
$ax += cidrblock($address, '204.45.48.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-155). ');
$ax += cidrblock($address, '204.45.52.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-156). ');
$ax += cidrblock($address, '204.45.55.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-157). ');
$ax += cidrblock($address, '204.45.56.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-158). ');
$ax += cidrblock($address, '204.45.60.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-159). ');
$ax += cidrblock($address, '204.45.63.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-160). ');
$ax += cidrblock($address, '204.45.103.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-161). ');
$ax += cidrblock($address, '204.45.105.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-162). ');
$ax += cidrblock($address, '204.45.139.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-163). ');
$ax += cidrblock($address, '204.45.207.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-164). ');
$ax += cidrblock($address, '204.45.208.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-165). ');
$ax += cidrblock($address, '204.45.211.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-166). ');
$ax += cidrblock($address, '204.45.213.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-167). ');
$ax += cidrblock($address, '204.45.216.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-168). ');
$ax += cidrblock($address, '204.45.220.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-169). ');
$ax += cidrblock($address, '204.45.227.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-170). ');
$ax += cidrblock($address, '204.45.238.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-171). ');
$ax += cidrblock($address, '204.45.244.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-172). ');
$ax += cidrblock($address, '204.45.246.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-173). ');
$ax += cidrblock($address, '204.45.248.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-174). ');
$ax += cidrblock($address, '204.45.253.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-175). ');
$ax += cidrblock($address, '204.45.254.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-176). ');
$ax += cidrblock($address, '208.53.133.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-177). ');
$ax += cidrblock($address, '208.53.149.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-178). ');
$ax += cidrblock($address, '208.53.153.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-179). ');
$ax += cidrblock($address, '208.53.154.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-180). ');
$ax += cidrblock($address, '208.53.156.0/22', 'Cogent. Not an access provider ISP (ASN-174-COGENT-181). ');
$ax += cidrblock($address, '208.53.164.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-182). ');
$ax += cidrblock($address, '208.53.166.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-183). ');
$ax += cidrblock($address, '208.53.168.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-184). ');
$ax += cidrblock($address, '208.53.174.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-185). ');
$ax += cidrblock($address, '208.53.177.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-186). ');
$ax += cidrblock($address, '208.53.178.0/23', 'Cogent. Not an access provider ISP (ASN-174-COGENT-187). ');
$ax += cidrblock($address, '208.53.183.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-188). ');
$ax += cidrblock($address, '208.53.190.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-189). ');
$ax += cidrblock($address, '209.73.140.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-190). ');
$ax += cidrblock($address, '216.128.69.0/24', 'Cogent. Not an access provider ISP (ASN-174-COGENT-191). ');


// Hetzner Online GmbH (updated 2016.05.21)
// AS24940, AS37153
$ax += cidrblock($address, '5.9.0.0/16', 'Hetzner Online GmbH; Access denied (AS-HETZNER-00). ');
$ax += cidrblock($address, '41.72.128.0/19', 'Hetzner Online GmbH; Access denied (AS-HETZNER-01). ');
$ax += cidrblock($address, '41.203.0.0/19', 'Hetzner Online GmbH; Access denied (AS-HETZNER-02). ');
$ax += cidrblock($address, '41.204.192.0/19', 'Hetzner Online GmbH; Access denied (AS-HETZNER-03). ');
$ax += cidrblock($address, '46.4.0.0/16', 'Hetzner Online GmbH; Access denied (AS-HETZNER-04). ');
$ax += cidrblock($address, '78.46.0.0/15', 'Hetzner Online GmbH; Access denied (AS-HETZNER-05). ');
$ax += cidrblock($address, '85.10.192.0/18', 'Hetzner Online GmbH; Access denied (AS-HETZNER-06). ');
$ax += cidrblock($address, '88.198.0.0/16', 'Hetzner Online GmbH; Access denied (AS-HETZNER-07). ');
$ax += cidrblock($address, '91.220.49.0/24', 'Hetzner Online GmbH; Access denied (AS-HETZNER-08). ');
$ax += cidrblock($address, '91.233.8.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-09). ');
$ax += cidrblock($address, '129.232.128.0/17', 'Hetzner Online GmbH; Access denied (AS-HETZNER-10). ');
$ax += cidrblock($address, '136.243.0.0/16', 'Hetzner Online GmbH; Access denied (AS-HETZNER-11). ');
$ax += cidrblock($address, '138.201.0.0/16', 'Hetzner Online GmbH; Access denied (AS-HETZNER-12). ');
$ax += cidrblock($address, '144.76.0.0/16', 'Hetzner Online GmbH; Access denied (AS-HETZNER-13). ');
$ax += cidrblock($address, '148.251.0.0/16', 'Hetzner Online GmbH; Access denied (AS-HETZNER-14). ');
$ax += cidrblock($address, '169.239.152.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-15). ');
$ax += cidrblock($address, '169.239.180.0/23', 'Hetzner Online GmbH; Access denied (AS-HETZNER-16). ');
$ax += cidrblock($address, '169.239.204.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-17). ');
$ax += cidrblock($address, '169.239.224.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-18). ');
$ax += cidrblock($address, '176.9.0.0/16', 'Hetzner Online GmbH; Access denied (AS-HETZNER-19). ');
$ax += cidrblock($address, '176.102.168.0/21', 'Hetzner Online GmbH; Access denied (AS-HETZNER-20). ');
$ax += cidrblock($address, '178.63.0.0/16', 'Hetzner Online GmbH; Access denied (AS-HETZNER-21). ');
$ax += cidrblock($address, '185.12.64.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-22). ');
$ax += cidrblock($address, '185.50.120.0/23', 'Hetzner Online GmbH; Access denied (AS-HETZNER-23). ');
$ax += cidrblock($address, '185.107.52.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-24). ');
$ax += cidrblock($address, '185.126.28.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-25). ');
$ax += cidrblock($address, '185.141.200.0/24', 'Hetzner Online GmbH; Access denied (AS-HETZNER-26). ');
$ax += cidrblock($address, '188.40.0.0/16', 'Hetzner Online GmbH; Access denied (AS-HETZNER-27). ');
$ax += cidrblock($address, '192.96.96.0/24', 'Hetzner Online GmbH; Access denied (AS-HETZNER-28). ');
$ax += cidrblock($address, '193.25.170.0/23', 'Hetzner Online GmbH; Access denied (AS-HETZNER-29). ');
$ax += cidrblock($address, '193.110.6.0/23', 'Hetzner Online GmbH; Access denied (AS-HETZNER-30). ');
$ax += cidrblock($address, '193.223.77.0/24', 'Hetzner Online GmbH; Access denied (AS-HETZNER-31). ');
$ax += cidrblock($address, '194.42.180.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-32). ');
$ax += cidrblock($address, '194.42.184.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-33). ');
$ax += cidrblock($address, '194.145.226.0/24', 'Hetzner Online GmbH; Access denied (AS-HETZNER-34). ');
$ax += cidrblock($address, '195.60.226.0/24', 'Hetzner Online GmbH; Access denied (AS-HETZNER-35). ');
$ax += cidrblock($address, '195.248.224.0/24', 'Hetzner Online GmbH; Access denied (AS-HETZNER-36). ');
$ax += cidrblock($address, '196.22.132.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-37). ');
$ax += cidrblock($address, '196.22.136.0/21', 'Hetzner Online GmbH; Access denied (AS-HETZNER-38). ');
$ax += cidrblock($address, '196.28.5.0/24', 'Hetzner Online GmbH; Access denied (AS-HETZNER-39). ');
$ax += cidrblock($address, '196.40.96.0/20', 'Hetzner Online GmbH; Access denied (AS-HETZNER-40). ');
$ax += cidrblock($address, '197.189.192.0/18', 'Hetzner Online GmbH; Access denied (AS-HETZNER-41). ');
$ax += cidrblock($address, '197.221.0.0/18', 'Hetzner Online GmbH; Access denied (AS-HETZNER-42). ');
$ax += cidrblock($address, '197.242.64.0/19', 'Hetzner Online GmbH; Access denied (AS-HETZNER-43). ');
$ax += cidrblock($address, '213.133.96.0/19', 'Hetzner Online GmbH; Access denied (AS-HETZNER-44). ');
$ax += cidrblock($address, '213.169.144.0/22', 'Hetzner Online GmbH; Access denied (AS-HETZNER-45). ');
$ax += cidrblock($address, '213.239.192.0/18', 'Hetzner Online GmbH; Access denied (AS-HETZNER-46). ');


// Digital Ocean, Inc. (updated 2016.04.25)
// AS14061, AS46652, AS62567, AS65040, AS133165, AS200130, AS201229, AS202018, AS202109, AS393406, AS394362.
$ax += cidrblock($address, '5.101.96.0/21', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-00). ');
$ax += cidrblock($address, '5.101.104.0/22', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-01). ');
$ax += cidrblock($address, '5.101.109.0/24', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-02). ');
$ax += cidrblock($address, '5.101.110.0/23', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-03). ');
$ax += cidrblock($address, '37.139.0.0/19', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-04). ');
$ax += cidrblock($address, '45.55.0.0/16', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-05). ');
$ax += cidrblock($address, '46.101.0.0/16', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-06). ');
$ax += cidrblock($address, '69.55.48.0/20', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-07). ');
$ax += cidrblock($address, '80.240.128.0/20', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-08). ');
$ax += cidrblock($address, '82.196.0.0/20', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-09). ');
$ax += cidrblock($address, '95.85.0.0/18', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-10). ');
$ax += cidrblock($address, '103.253.144.0/22', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-11). ');
$ax += cidrblock($address, '104.131.0.0/16', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-12). ');
$ax += cidrblock($address, '104.236.0.0/16', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-13). ');
$ax += cidrblock($address, '107.170.0.0/16', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-14). ');
$ax += cidrblock($address, '128.199.32.0/19', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-15). ');
$ax += cidrblock($address, '128.199.64.0/18', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-16). ');
$ax += cidrblock($address, '128.199.128.0/17', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-17). ');
$ax += cidrblock($address, '138.68.0.0/20', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-18). ');
$ax += cidrblock($address, '138.68.32.0/24', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-19). ');
$ax += cidrblock($address, '138.68.192.0/22', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-20). ');
$ax += cidrblock($address, '139.59.128.0/20', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-21). ');
$ax += cidrblock($address, '139.59.160.0/19', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-22). ');
$ax += cidrblock($address, '139.59.192.0/21', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-23). ');
$ax += cidrblock($address, '139.59.204.0/22', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-24). ');
$ax += cidrblock($address, '139.59.224.0/19', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-25). ');
$ax += cidrblock($address, '141.0.168.0/21', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-26). ');
$ax += cidrblock($address, '146.185.128.0/18', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-27). ');
$ax += cidrblock($address, '159.203.0.0/17', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-28). ');
$ax += cidrblock($address, '159.203.128.0/20', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-29). ');
$ax += cidrblock($address, '159.203.144.0/21', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-30). ');
$ax += cidrblock($address, '159.203.152.0/22', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-31). ');
$ax += cidrblock($address, '159.203.160.0/20', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-32). ');
$ax += cidrblock($address, '159.203.192.0/18', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-33). ');
$ax += cidrblock($address, '162.243.0.0/16', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-34). ');
$ax += cidrblock($address, '163.47.8.0/22', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-35). ');
$ax += cidrblock($address, '178.62.0.0/16', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-36). ');
$ax += cidrblock($address, '185.14.184.0/22', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-37). ');
$ax += cidrblock($address, '185.88.180.0/22', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-38). ');
$ax += cidrblock($address, '188.166.0.0/17', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-39). ');
$ax += cidrblock($address, '188.166.128.0/18', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-40). ');
$ax += cidrblock($address, '188.166.192.0/22', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-41). ');
$ax += cidrblock($address, '188.166.200.0/21', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-42). ');
$ax += cidrblock($address, '188.166.208.0/20', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-43). ');
$ax += cidrblock($address, '188.166.224.0/19', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-44). ');
$ax += cidrblock($address, '188.226.128.0/17', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-45). ');
$ax += cidrblock($address, '192.34.56.0/21', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-46). ');
$ax += cidrblock($address, '192.81.208.0/20', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-47). ');
$ax += cidrblock($address, '192.241.128.0/17', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-48). ');
$ax += cidrblock($address, '198.199.64.0/18', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-49). ');
$ax += cidrblock($address, '198.211.96.0/19', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-50). ');
$ax += cidrblock($address, '208.68.36.0/22', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-51). ');
$ax += cidrblock($address, '218.208.39.0/24', 'Digital Ocean, Inc. Not an access provider ISP (AS-DOGROUP-52). ');


// Root SA (updated 2016.03.13)
// AS5577
$ax += cidrblock($address, '31.131.7.0/24', 'Root SA (ASN-5577-ROOTSA-00). ');
$ax += cidrblock($address, '83.243.8.0/21', 'Root SA (ASN-5577-ROOTSA-01). ');
$ax += cidrblock($address, '91.193.74.0/24', 'Root SA (ASN-5577-ROOTSA-02). ');
$ax += cidrblock($address, '93.186.79.0/24', 'Root SA (ASN-5577-ROOTSA-03). ');
$ax += cidrblock($address, '94.242.192.0/18', 'Root SA (ASN-5577-ROOTSA-04). ');
$ax += cidrblock($address, '146.185.239.0/24', 'Root SA (ASN-5577-ROOTSA-05). ');
$ax += cidrblock($address, '179.63.80.0/20', 'Root SA (ASN-5577-ROOTSA-06). ');
$ax += cidrblock($address, '185.103.172.0/24', 'Root SA (ASN-5577-ROOTSA-07). ');
$ax += cidrblock($address, '185.103.174.0/24', 'Root SA (ASN-5577-ROOTSA-08). ');
$ax += cidrblock($address, '185.121.24.0/23', 'Root SA (ASN-5577-ROOTSA-09). ');
$ax += cidrblock($address, '194.68.32.0/24', 'Root SA (ASN-5577-ROOTSA-10). ');
$ax += cidrblock($address, '195.24.72.0/21', 'Root SA (ASN-5577-ROOTSA-11). ');
$ax += cidrblock($address, '195.26.4.0/23', 'Root SA (ASN-5577-ROOTSA-12). ');
$ax += cidrblock($address, '212.117.160.0/19', 'Root SA (ASN-5577-ROOTSA-13). ');
$ax += cidrblock($address, '217.73.56.0/24', 'Root SA (ASN-5577-ROOTSA-14). ');


// XEEX network (updated 2016.04.25)
// AS27524
$ax += cidrblock($address, '69.26.160.0/19', 'XEEX (ASN-27524-XEEX-0). ');
$ax += cidrblock($address, '113.212.64.0/19', 'XEEX (ASN-27524-XEEX-1). ');
$ax += cidrblock($address, '162.213.128.0/22', 'XEEX (ASN-27524-XEEX-2). ');
$ax += cidrblock($address, '216.151.128.0/19', 'XEEX (ASN-27524-XEEX-3). ');
$ax += cidrblock($address, '216.152.240.0/20', 'XEEX (ASN-27524-XEEX-4). ');


// ColoGuys (updated 2016.01.19 / checked 2016.04.25)
// AS25643
$ax += cidrblock($address, '64.209.56.0/21', 'ColoGuys (ASN-25643-COLOGUYS-00). ');
$ax += cidrblock($address, '64.209.68.0/22', 'ColoGuys (ASN-25643-COLOGUYS-01). ');
$ax += cidrblock($address, '64.214.184.0/21', 'ColoGuys (ASN-25643-COLOGUYS-02). ');
$ax += cidrblock($address, '66.207.160.0/20', 'ColoGuys (ASN-25643-COLOGUYS-03). ');
$ax += cidrblock($address, '67.43.48.0/20', 'ColoGuys (ASN-25643-COLOGUYS-04). ');
$ax += cidrblock($address, '103.6.219.0/24', 'ColoGuys (ASN-25643-COLOGUYS-05). ');
$ax += cidrblock($address, '173.242.48.0/20', 'ColoGuys (ASN-25643-COLOGUYS-06). ');
$ax += cidrblock($address, '199.115.176.0/21', 'ColoGuys (ASN-25643-COLOGUYS-07). ');
$ax += cidrblock($address, '207.126.64.0/19', 'ColoGuys (ASN-25643-COLOGUYS-08). ');
$ax += cidrblock($address, '209.130.152.0/22', 'ColoGuys (ASN-25643-COLOGUYS-09). ');
$ax += cidrblock($address, '209.135.0.0/19', 'ColoGuys (ASN-25643-COLOGUYS-10). ');


// Tzulo Inc
// AS11878 (updated 2016.06.09)
$ax += cidrblock($address, '23.234.64.0/18', 'Tzulo Inc (ASN-11878-TZULO-00). ');
$ax += cidrblock($address, '23.255.0.0/17', 'Tzulo Inc (ASN-11878-TZULO-01). ');
$ax += cidrblock($address, '43.239.250.0/24', 'Tzulo Inc (ASN-11878-TZULO-02). ');
$ax += cidrblock($address, '68.235.32.0/19', 'Tzulo Inc (ASN-11878-TZULO-03). ');
$ax += cidrblock($address, '107.152.32.0/20', 'Tzulo Inc (ASN-11878-TZULO-04). ');
$ax += cidrblock($address, '154.16.97.0/24', 'Tzulo Inc (ASN-11878-TZULO-05). ');
$ax += cidrblock($address, '154.16.98.0/23', 'Tzulo Inc (ASN-11878-TZULO-06). ');
$ax += cidrblock($address, '154.16.100.0/22', 'Tzulo Inc (ASN-11878-TZULO-07). ');
$ax += cidrblock($address, '154.16.105.0/24', 'Tzulo Inc (ASN-11878-TZULO-08). ');
$ax += cidrblock($address, '154.16.106.0/24', 'Tzulo Inc (ASN-11878-TZULO-09). ');
$ax += cidrblock($address, '154.16.248.0/24', 'Tzulo Inc (ASN-11878-TZULO-10). ');
$ax += cidrblock($address, '161.213.205.0/24', 'Tzulo Inc (ASN-11878-TZULO-11). ');
$ax += cidrblock($address, '161.213.207.0/24', 'Tzulo Inc (ASN-11878-TZULO-12). ');
$ax += cidrblock($address, '161.213.209.0/24', 'Tzulo Inc (ASN-11878-TZULO-13). ');
$ax += cidrblock($address, '162.208.8.0/22', 'Tzulo Inc (ASN-11878-TZULO-14). ');
$ax += cidrblock($address, '162.212.152.0/21', 'Tzulo Inc (ASN-11878-TZULO-15). ');
$ax += cidrblock($address, '173.231.192.0/18', 'Tzulo Inc (ASN-11878-TZULO-16). ');
$ax += cidrblock($address, '173.249.192.0/18', 'Tzulo Inc (ASN-11878-TZULO-17). ');
$ax += cidrblock($address, '173.253.0.0/17', 'Tzulo Inc (ASN-11878-TZULO-18). ');
$ax += cidrblock($address, '181.214.128.0/19', 'Tzulo Inc (ASN-11878-TZULO-19). ');
$ax += cidrblock($address, '181.214.206.0/23', 'Tzulo Inc (ASN-11878-TZULO-20). ');
$ax += cidrblock($address, '181.214.244.0/22', 'Tzulo Inc (ASN-11878-TZULO-21). ');
$ax += cidrblock($address, '181.214.248.0/23', 'Tzulo Inc (ASN-11878-TZULO-22). ');
$ax += cidrblock($address, '181.215.176.0/20', 'Tzulo Inc (ASN-11878-TZULO-23). ');
$ax += cidrblock($address, '181.215.199.0/24', 'Tzulo Inc (ASN-11878-TZULO-24). ');
$ax += cidrblock($address, '181.215.200.0/21', 'Tzulo Inc (ASN-11878-TZULO-25). ');
$ax += cidrblock($address, '181.215.208.0/22', 'Tzulo Inc (ASN-11878-TZULO-26). ');
$ax += cidrblock($address, '181.215.212.0/23', 'Tzulo Inc (ASN-11878-TZULO-27). ');
$ax += cidrblock($address, '181.215.215.0/24', 'Tzulo Inc (ASN-11878-TZULO-28). ');
$ax += cidrblock($address, '181.215.216.0/21', 'Tzulo Inc (ASN-11878-TZULO-29). ');
$ax += cidrblock($address, '181.215.224.0/21', 'Tzulo Inc (ASN-11878-TZULO-30). ');
$ax += cidrblock($address, '181.215.232.0/23', 'Tzulo Inc (ASN-11878-TZULO-31). ');
$ax += cidrblock($address, '181.215.234.0/24', 'Tzulo Inc (ASN-11878-TZULO-32). ');
$ax += cidrblock($address, '181.215.244.0/22', 'Tzulo Inc (ASN-11878-TZULO-33). ');
$ax += cidrblock($address, '191.96.27.0/24', 'Tzulo Inc (ASN-11878-TZULO-34). ');
$ax += cidrblock($address, '191.96.38.0/24', 'Tzulo Inc (ASN-11878-TZULO-35). ');
$ax += cidrblock($address, '191.96.48.0/24', 'Tzulo Inc (ASN-11878-TZULO-36). ');
$ax += cidrblock($address, '191.96.68.0/24', 'Tzulo Inc (ASN-11878-TZULO-37). ');
$ax += cidrblock($address, '191.96.93.0/24', 'Tzulo Inc (ASN-11878-TZULO-38). ');
$ax += cidrblock($address, '191.96.188.0/24', 'Tzulo Inc (ASN-11878-TZULO-39). ');
$ax += cidrblock($address, '191.101.162.0/23', 'Tzulo Inc (ASN-11878-TZULO-40). ');
$ax += cidrblock($address, '191.101.164.0/22', 'Tzulo Inc (ASN-11878-TZULO-41). ');
$ax += cidrblock($address, '191.101.202.0/23', 'Tzulo Inc (ASN-11878-TZULO-42). ');
$ax += cidrblock($address, '191.101.212.0/22', 'Tzulo Inc (ASN-11878-TZULO-43). ');
$ax += cidrblock($address, '192.196.224.0/20', 'Tzulo Inc (ASN-11878-TZULO-44). ');
$ax += cidrblock($address, '192.243.96.0/20', 'Tzulo Inc (ASN-11878-TZULO-45). ');
$ax += cidrblock($address, '198.44.128.0/19', 'Tzulo Inc (ASN-11878-TZULO-46). ');
$ax += cidrblock($address, '198.54.128.0/21', 'Tzulo Inc (ASN-11878-TZULO-47). ');
$ax += cidrblock($address, '199.175.48.0/21', 'Tzulo Inc (ASN-11878-TZULO-48). ');
$ax += cidrblock($address, '206.226.64.0/18', 'Tzulo Inc (ASN-11878-TZULO-49). ');
$ax += cidrblock($address, '208.77.16.0/21', 'Tzulo Inc (ASN-11878-TZULO-50). ');


// Corpcolo (updated 2016.03.13)
// AS17139
$ax += cidrblock($address, '45.3.32.0/20', 'Corpcolo (ASN-17139-CORPCOLO-00). ');
$ax += cidrblock($address, '45.3.55.0/24', 'Corpcolo (ASN-17139-CORPCOLO-01). ');
$ax += cidrblock($address, '45.3.56.0/21', 'Corpcolo (ASN-17139-CORPCOLO-02). ');
$ax += cidrblock($address, '45.78.80.0/20', 'Corpcolo (ASN-17139-CORPCOLO-03). ');
$ax += cidrblock($address, '66.117.0.0/20', 'Corpcolo (ASN-17139-CORPCOLO-04). ');
$ax += cidrblock($address, '68.64.160.0/20', 'Corpcolo (ASN-17139-CORPCOLO-05). ');
$ax += cidrblock($address, '72.37.152.0/24', 'Corpcolo (ASN-17139-CORPCOLO-06). ');
$ax += cidrblock($address, '74.82.37.0/24', 'Corpcolo (ASN-17139-CORPCOLO-07). ');
$ax += cidrblock($address, '74.124.192.0/19', 'Corpcolo (ASN-17139-CORPCOLO-08). ');
$ax += cidrblock($address, '103.193.184.0/22', 'Corpcolo (ASN-17139-CORPCOLO-09). ');
$ax += cidrblock($address, '104.167.16.0/22', 'Corpcolo (ASN-17139-CORPCOLO-10). ');
$ax += cidrblock($address, '104.167.20.0/24', 'Corpcolo (ASN-17139-CORPCOLO-11). ');
$ax += cidrblock($address, '104.167.22.0/23', 'Corpcolo (ASN-17139-CORPCOLO-12). ');
$ax += cidrblock($address, '104.167.24.0/22', 'Corpcolo (ASN-17139-CORPCOLO-13). ');
$ax += cidrblock($address, '104.167.28.0/23', 'Corpcolo (ASN-17139-CORPCOLO-14). ');
$ax += cidrblock($address, '104.207.32.0/19', 'Corpcolo (ASN-17139-CORPCOLO-15). ');
$ax += cidrblock($address, '162.220.218.0/24', 'Corpcolo (ASN-17139-CORPCOLO-16). ');
$ax += cidrblock($address, '172.86.120.0/21', 'Corpcolo (ASN-17139-CORPCOLO-17). ');
$ax += cidrblock($address, '172.98.214.0/24', 'Corpcolo (ASN-17139-CORPCOLO-18). ');
$ax += cidrblock($address, '173.247.224.0/19', 'Corpcolo (ASN-17139-CORPCOLO-19). ');
$ax += cidrblock($address, '192.80.191.0/24', 'Corpcolo (ASN-17139-CORPCOLO-20). ');
$ax += cidrblock($address, '199.83.102.0/24', 'Corpcolo (ASN-17139-CORPCOLO-21). ');
$ax += cidrblock($address, '199.195.142.0/23', 'Corpcolo (ASN-17139-CORPCOLO-22). ');
$ax += cidrblock($address, '205.134.224.0/19', 'Corpcolo (ASN-17139-CORPCOLO-23). ');
$ax += cidrblock($address, '206.62.144.0/22', 'Corpcolo (ASN-17139-CORPCOLO-24). ');
$ax += cidrblock($address, '206.62.148.0/24', 'Corpcolo (ASN-17139-CORPCOLO-25). ');
$ax += cidrblock($address, '208.51.60.0/22', 'Corpcolo (ASN-17139-CORPCOLO-26). ');
$ax += cidrblock($address, '216.179.168.0/21', 'Corpcolo (ASN-17139-CORPCOLO-27). ');
$ax += cidrblock($address, '216.179.208.0/24', 'Corpcolo (ASN-17139-CORPCOLO-28). ');
$ax += cidrblock($address, '216.179.212.0/24', 'Corpcolo (ASN-17139-CORPCOLO-29). ');
$ax += cidrblock($address, '216.179.218.0/24', 'Corpcolo (ASN-17139-CORPCOLO-30). ');
$ax += cidrblock($address, '216.193.197.0/24', 'Corpcolo (ASN-17139-CORPCOLO-31). ');
$ax += cidrblock($address, '216.193.219.0/24', 'Corpcolo (ASN-17139-CORPCOLO-32). ');
$ax += cidrblock($address, '216.193.251.0/24', 'Corpcolo (ASN-17139-CORPCOLO-33). ');


// iWeb Technologies Inc. (updated 2016.01.20 / checked 2016.03.13)
// AS32613
$ax += cidrblock($address, '38.108.70.0/24', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-00). ');
$ax += cidrblock($address, '64.15.128.0/19', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-01). ');
$ax += cidrblock($address, '67.205.64.0/18', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-02). ');
$ax += cidrblock($address, '70.38.0.0/17', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-03). ');
$ax += cidrblock($address, '72.55.128.0/18', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-04). ');
$ax += cidrblock($address, '107.161.64.0/20', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-05). ');
$ax += cidrblock($address, '108.163.128.0/18', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-06). ');
$ax += cidrblock($address, '173.244.55.0/24', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-07). ');
$ax += cidrblock($address, '174.141.228.0/22', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-08). ');
$ax += cidrblock($address, '174.141.232.0/23', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-09). ');
$ax += cidrblock($address, '174.142.0.0/16', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-10). ');
$ax += cidrblock($address, '184.107.0.0/16', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-11). ');
$ax += cidrblock($address, '189.91.32.0/23', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-12). ');
$ax += cidrblock($address, '192.175.96.0/19', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-13). ');
$ax += cidrblock($address, '192.219.254.0/24', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-14). ');
$ax += cidrblock($address, '198.50.96.0/19', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-15). ');
$ax += cidrblock($address, '198.72.96.0/19', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-16). ');
$ax += cidrblock($address, '203.167.7.0/24', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-17). ');
$ax += cidrblock($address, '204.19.249.0/24', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-18). ');
$ax += cidrblock($address, '204.19.251.0/24', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-19). ');
$ax += cidrblock($address, '204.19.253.0/24', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-20). ');
$ax += cidrblock($address, '204.19.254.0/24', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-21). ');
$ax += cidrblock($address, '205.236.34.0/24', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-22). ');
$ax += cidrblock($address, '206.123.20.0/23', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-23). ');
$ax += cidrblock($address, '209.172.32.0/19', 'iWeb Technologies Inc. Not an access provider ISP (ASN-32613-iWEB-24). ');


// Reliable Hosting Services (updated 2016.06.09)
// AS13926, AS22781, AS29713, AS54203, AS62651, AS63128
$ax += cidrblock($address, '68.68.32.0/20', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-00). ');
$ax += cidrblock($address, '98.158.112.0/20', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-01). ');
$ax += cidrblock($address, '104.36.176.0/21', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-02). ');
$ax += cidrblock($address, '108.171.96.0/19', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-03). ');
$ax += cidrblock($address, '173.195.0.0/20', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-04). ');
$ax += cidrblock($address, '173.255.160.0/19', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-05). ');
$ax += cidrblock($address, '190.102.100.0/22', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-06). ');
$ax += cidrblock($address, '192.82.109.0/24', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-07). ');
$ax += cidrblock($address, '192.200.144.0/20', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-08). ');
$ax += cidrblock($address, '199.15.248.0/21', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-09). ');
$ax += cidrblock($address, '199.127.248.0/21', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-10). ');
$ax += cidrblock($address, '207.204.224.0/19', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-11). ');
$ax += cidrblock($address, '208.73.20.0/22', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-12). ');
$ax += cidrblock($address, '216.131.64.0/18', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-13). ');
$ax += cidrblock($address, '216.151.184.0/24', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-14). ');
$ax += cidrblock($address, '216.169.128.0/20', 'Reliable Hosting Services. Not an access provider ISP (AS-RELIA-15). ');


// InfoRelay Online Systems, Inc. (updated 2016.01.27 / checked 2016.03.13)
// AS33597
$ax += cidrblock($address, '38.81.194.0/23', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-01). ');
$ax += cidrblock($address, '66.231.176.0/20', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-02). ');
$ax += cidrblock($address, '67.208.64.0/19', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-03). ');
$ax += cidrblock($address, '69.26.176.0/23', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-04). ');
$ax += cidrblock($address, '69.26.178.0/24', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-05). ');
$ax += cidrblock($address, '69.169.0.0/17', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-06). ');
$ax += cidrblock($address, '70.33.160.0/19', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-07). ');
$ax += cidrblock($address, '74.112.255.0/24', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-08). ');
$ax += cidrblock($address, '130.185.182.0/23', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-09). ');
$ax += cidrblock($address, '173.45.0.0/18', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-10). ');
$ax += cidrblock($address, '173.205.128.0/17', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-11). ');
$ax += cidrblock($address, '173.245.104.0/22', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-12). ');
$ax += cidrblock($address, '173.245.108.0/24', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-13). ');
$ax += cidrblock($address, '174.128.128.0/18', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-14). ');
$ax += cidrblock($address, '198.62.86.0/24', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-15). ');
$ax += cidrblock($address, '199.115.248.0/22', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-16). ');
$ax += cidrblock($address, '199.167.224.0/24', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-17). ');
$ax += cidrblock($address, '199.188.228.0/22', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-18). ');
$ax += cidrblock($address, '205.251.0.0/17', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-19). ');
$ax += cidrblock($address, '208.94.144.0/24', 'InfoRelay Online Systems. Not an access provider ISP (ASN-33597-INFORELAY-20). ');


// Westhost (updated 2016.03.13)
// AS29854
$ax += cidrblock($address, '27.126.249.0/24', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-00). ');
$ax += cidrblock($address, '50.115.112.0/20', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-01). ');
$ax += cidrblock($address, '67.212.224.0/20', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-02). ');
$ax += cidrblock($address, '68.169.32.0/20', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-03). ');
$ax += cidrblock($address, '69.36.160.0/19', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-04). ');
$ax += cidrblock($address, '104.245.11.0/24', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-05). ');
$ax += cidrblock($address, '107.181.188.0/24', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-06). ');
$ax += cidrblock($address, '107.182.224.0/20', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-07). ');
$ax += cidrblock($address, '172.98.91.0/24', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-08). ');
$ax += cidrblock($address, '173.244.192.0/19', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-09). ');
$ax += cidrblock($address, '173.255.128.0/22', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-10). ');
$ax += cidrblock($address, '174.127.104.0/21', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-11). ');
$ax += cidrblock($address, '174.127.112.0/21', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-12). ');
$ax += cidrblock($address, '185.72.156.0/22', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-13). ');
$ax += cidrblock($address, '192.245.255.0/24', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-14). ');
$ax += cidrblock($address, '198.105.208.0/20', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-15). ');
$ax += cidrblock($address, '199.189.104.0/21', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-16). ');
$ax += cidrblock($address, '199.195.192.0/21', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-17). ');
$ax += cidrblock($address, '206.130.96.0/19', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-18). ');
$ax += cidrblock($address, '206.190.128.0/19', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-19). ');
$ax += cidrblock($address, '208.131.128.0/19', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-20). ');
$ax += cidrblock($address, '209.95.32.0/19', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-21). ');
$ax += cidrblock($address, '209.236.64.0/20', 'Westhost, not an access provider ISP (ASN-29854-WESTHOST-22). ');


// Bezeq International (updated 2016.07.28)
// AS8551
$ax += cidrblock($address, '23.34.224.0/20', 'BEZEQ-INT (ASN-8551-BEZEQ-00). ');
$ax += cidrblock($address, '31.168.0.0/17', 'BEZEQ-INT (ASN-8551-BEZEQ-01). ');
$ax += cidrblock($address, '31.168.128.0/18', 'BEZEQ-INT (ASN-8551-BEZEQ-02). ');
$ax += cidrblock($address, '31.168.192.0/19', 'BEZEQ-INT (ASN-8551-BEZEQ-03). ');
$ax += cidrblock($address, '31.168.224.0/20', 'BEZEQ-INT (ASN-8551-BEZEQ-04). ');
$ax += cidrblock($address, '31.168.240.0/21', 'BEZEQ-INT (ASN-8551-BEZEQ-05). ');
$ax += cidrblock($address, '31.168.248.0/22', 'BEZEQ-INT (ASN-8551-BEZEQ-06). ');
$ax += cidrblock($address, '31.168.252.0/23', 'BEZEQ-INT (ASN-8551-BEZEQ-07). ');
$ax += cidrblock($address, '31.168.254.0/24', 'BEZEQ-INT (ASN-8551-BEZEQ-08). ');
$ax += cidrblock($address, '62.219.0.0/16', 'BEZEQ-INT (ASN-8551-BEZEQ-09). ');
$ax += cidrblock($address, '72.246.151.0/24', 'BEZEQ-INT (ASN-8551-BEZEQ-10). ');
$ax += cidrblock($address, '79.176.0.0/13', 'BEZEQ-INT (ASN-8551-BEZEQ-11). ');
$ax += cidrblock($address, '81.218.0.0/16', 'BEZEQ-INT (ASN-8551-BEZEQ-12). ');
$ax += cidrblock($address, '82.80.0.0/15', 'BEZEQ-INT (ASN-8551-BEZEQ-13). ');
$ax += cidrblock($address, '84.108.0.0/14', 'BEZEQ-INT (ASN-8551-BEZEQ-14). ');
$ax += cidrblock($address, '85.130.128.0/17', 'BEZEQ-INT (ASN-8551-BEZEQ-15). ');
$ax += cidrblock($address, '92.122.128.0/20', 'BEZEQ-INT (ASN-8551-BEZEQ-16). ');
$ax += cidrblock($address, '95.101.4.0/22', 'BEZEQ-INT (ASN-8551-BEZEQ-17). ');
$ax += cidrblock($address, '104.70.127.0/24', 'BEZEQ-INT (ASN-8551-BEZEQ-18). ');
$ax += cidrblock($address, '104.70.176.0/23', 'BEZEQ-INT (ASN-8551-BEZEQ-19). ');
$ax += cidrblock($address, '104.70.186.0/23', 'BEZEQ-INT (ASN-8551-BEZEQ-20). ');
$ax += cidrblock($address, '104.74.71.0/24', 'BEZEQ-INT (ASN-8551-BEZEQ-21). ');
$ax += cidrblock($address, '104.77.202.0/24', 'BEZEQ-INT (ASN-8551-BEZEQ-22). ');
$ax += cidrblock($address, '104.79.198.0/23', 'BEZEQ-INT (ASN-8551-BEZEQ-23). ');
$ax += cidrblock($address, '104.79.200.0/22', 'BEZEQ-INT (ASN-8551-BEZEQ-24). ');
$ax += cidrblock($address, '104.79.208.0/20', 'BEZEQ-INT (ASN-8551-BEZEQ-25). ');
$ax += cidrblock($address, '104.79.224.0/20', 'BEZEQ-INT (ASN-8551-BEZEQ-26). ');
$ax += cidrblock($address, '109.64.0.0/14', 'BEZEQ-INT (ASN-8551-BEZEQ-27). ');
$ax += cidrblock($address, '184.27.128.0/23', 'BEZEQ-INT (ASN-8551-BEZEQ-28). ');
$ax += cidrblock($address, '192.114.11.0/24', 'BEZEQ-INT (ASN-8551-BEZEQ-29). ');
$ax += cidrblock($address, '192.114.40.0/21', 'BEZEQ-INT (ASN-8551-BEZEQ-30). ');
$ax += cidrblock($address, '192.114.64.0/20', 'BEZEQ-INT (ASN-8551-BEZEQ-31). ');
$ax += cidrblock($address, '192.114.80.0/24', 'BEZEQ-INT (ASN-8551-BEZEQ-32). ');
$ax += cidrblock($address, '192.114.83.0/24', 'BEZEQ-INT (ASN-8551-BEZEQ-33). ');
$ax += cidrblock($address, '192.114.144.0/22', 'BEZEQ-INT (ASN-8551-BEZEQ-34). ');
$ax += cidrblock($address, '192.115.16.0/20', 'BEZEQ-INT (ASN-8551-BEZEQ-35). ');
$ax += cidrblock($address, '192.115.56.0/21', 'BEZEQ-INT (ASN-8551-BEZEQ-36). ');
$ax += cidrblock($address, '192.115.104.0/22', 'BEZEQ-INT (ASN-8551-BEZEQ-37). ');
$ax += cidrblock($address, '192.115.128.0/21', 'BEZEQ-INT (ASN-8551-BEZEQ-38). ');
$ax += cidrblock($address, '192.115.184.0/21', 'BEZEQ-INT (ASN-8551-BEZEQ-39). ');
$ax += cidrblock($address, '192.117.96.0/19', 'BEZEQ-INT (ASN-8551-BEZEQ-40). ');
$ax += cidrblock($address, '192.117.232.0/21', 'BEZEQ-INT (ASN-8551-BEZEQ-41). ');
$ax += cidrblock($address, '206.82.140.0/24', 'BEZEQ-INT (ASN-8551-BEZEQ-42). ');
$ax += cidrblock($address, '212.25.64.0/18', 'BEZEQ-INT (ASN-8551-BEZEQ-43). ');
$ax += cidrblock($address, '212.179.0.0/16', 'BEZEQ-INT (ASN-8551-BEZEQ-44). ');
$ax += cidrblock($address, '217.194.200.0/23', 'BEZEQ-INT (ASN-8551-BEZEQ-45). ');


// WholeSale Internet, Inc
// AS32097 (updated 2016.05.21)
$ax += cidrblock($address, '63.141.241.0/24', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-00). ');
$ax += cidrblock($address, '69.30.192.0/18', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-01). ');
$ax += cidrblock($address, '69.197.128.0/18', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-02). ');
$ax += cidrblock($address, '162.251.120.0/22', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-03). ');
$ax += cidrblock($address, '173.208.128.0/17', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-04). ');
$ax += cidrblock($address, '192.187.113.0/24', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-05). ');
$ax += cidrblock($address, '198.204.241.0/24', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-06). ');
$ax += cidrblock($address, '204.10.160.0/22', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-07). ');
$ax += cidrblock($address, '204.12.192.0/18', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-08). ');
$ax += cidrblock($address, '208.67.0.0/21', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-09). ');
$ax += cidrblock($address, '208.110.64.0/19', 'WholeSale Internet, Inc. Not an access provider ISP (ASN-32097-WHOLESALE-10). ');


// DataShack, LC
// AS33387 (updated 2016.05.21)
$ax += cidrblock($address, '63.141.224.0/19', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-00). ');
$ax += cidrblock($address, '74.91.16.0/20', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-01). ');
$ax += cidrblock($address, '103.25.63.0/24', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-02). ');
$ax += cidrblock($address, '107.150.32.0/19', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-03). ');
$ax += cidrblock($address, '142.54.160.0/19', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-04). ');
$ax += cidrblock($address, '153.89.0.0/16', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-05). ');
$ax += cidrblock($address, '179.0.32.0/19', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-06). ');
$ax += cidrblock($address, '179.0.64.0/18', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-07). ');
$ax += cidrblock($address, '190.113.32.0/19', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-08). ');
$ax += cidrblock($address, '192.151.144.0/20', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-09). ');
$ax += cidrblock($address, '192.187.96.0/19', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-10). ');
$ax += cidrblock($address, '198.204.224.0/19', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-11). ');
$ax += cidrblock($address, '199.168.96.0/21', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-12). ');
$ax += cidrblock($address, '201.218.160.0/19', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-13). ');
$ax += cidrblock($address, '208.67.0.0/23', 'DataShack, LC. Not an access provider ISP (ASN-33387-DATASHACK-14). ');


// CoS International (updated 2016.01.20 / checked 2016.03.13)
// AS7914
$ax += cidrblock($address, '12.9.239.0/24', 'Known hostile network (ASN-7914-CSI-0). ');
$ax += cidrblock($address, '192.216.201.0/24', 'Known hostile network (ASN-7914-CSI-1). ');
$ax += cidrblock($address, '198.77.154.0/23', 'Known hostile network (ASN-7914-CSI-2). ');
$ax += cidrblock($address, '198.95.10.0/24', 'Known hostile network (ASN-7914-CSI-3). ');
$ax += cidrblock($address, '205.180.15.0/24', 'Known hostile network (ASN-7914-CSI-4). ');
$ax += cidrblock($address, '208.29.5.0/24', 'Known hostile network (ASN-7914-CSI-5). ');
$ax += cidrblock($address, '208.30.51.0/24', 'Known hostile network (ASN-7914-CSI-6). ');
$ax += cidrblock($address, '208.33.13.0/24', 'Known hostile network (ASN-7914-CSI-7). ');


// Avante Hosting (updated 2016.03.13)
// AS36137
$ax += cidrblock($address, '66.248.192.0/19', 'Avante Hosting, not an access provider (ASN-36137-AVANTE-0). ');
$ax += cidrblock($address, '192.119.148.0/24', 'Avante Hosting, not an access provider (ASN-36137-AVANTE-1). ');
$ax += cidrblock($address, '192.241.8.0/21', 'Avante Hosting, not an access provider (ASN-36137-AVANTE-2). ');
$ax += cidrblock($address, '198.52.128.0/17', 'Avante Hosting, not an access provider (ASN-36137-AVANTE-3). ');
$ax += cidrblock($address, '199.195.156.0/22', 'Avante Hosting, not an access provider (ASN-36137-AVANTE-4). ');


// Tex-Link Communications, Inc. (updated 2016.01.21 / checked 2016.03.13)
// AS11457
$ax += cidrblock($address, '66.52.209.0/24', 'Tex-Link Communications, not an access provider (ASN-11457-TEXLINK-0). ');
$ax += cidrblock($address, '66.52.224.0/22', 'Tex-Link Communications, not an access provider (ASN-11457-TEXLINK-1). ');
$ax += cidrblock($address, '66.118.0.0/18', 'Tex-Link Communications, not an access provider (ASN-11457-TEXLINK-2). ');
$ax += cidrblock($address, '66.118.224.0/19', 'Tex-Link Communications, not an access provider (ASN-11457-TEXLINK-3). ');
$ax += cidrblock($address, '72.18.64.0/19', 'Tex-Link Communications, not an access provider (ASN-11457-TEXLINK-4). ');
$ax += cidrblock($address, '208.99.0.0/18', 'Tex-Link Communications, not an access provider (ASN-11457-TEXLINK-5). ');


// Ready Server, Dedicated Server Hosting (updated 2016.01.21 / checked 2016.03.13)
// AS63930
$ax += cidrblock($address, '45.125.192.0/22', 'Ready Server, not an access provider (ASN-63930-RSRVR-0). ');
$ax += cidrblock($address, '103.47.208.0/22', 'Ready Server, not an access provider (ASN-63930-RSRVR-1). ');
$ax += cidrblock($address, '103.195.151.0/24', 'Ready Server, not an access provider (ASN-63930-RSRVR-2). ');
$ax += cidrblock($address, '192.241.8.0/24', 'Ready Server, not an access provider (ASN-63930-RSRVR-4). ');


// 1&1 Internet SE (updated 2016.05.20)
// AS8560
$ax += cidrblock($address, '37.98.148.0/22', 'One and One hosting, not an access provider (ASN-8560-1AND1-00). ');
$ax += cidrblock($address, '50.21.176.0/20', 'One and One hosting, not an access provider (ASN-8560-1AND1-01). ');
$ax += cidrblock($address, '62.151.160.0/21', 'One and One hosting, not an access provider (ASN-8560-1AND1-02). ');
$ax += cidrblock($address, '62.151.176.0/21', 'One and One hosting, not an access provider (ASN-8560-1AND1-03). ');
$ax += cidrblock($address, '66.175.232.0/21', 'One and One hosting, not an access provider (ASN-8560-1AND1-04). ');
$ax += cidrblock($address, '70.35.192.0/20', 'One and One hosting, not an access provider (ASN-8560-1AND1-05). ');
$ax += cidrblock($address, '74.208.0.0/16', 'One and One hosting, not an access provider (ASN-8560-1AND1-06). ');
$ax += cidrblock($address, '77.68.0.0/17', 'One and One hosting, not an access provider (ASN-8560-1AND1-07). ');
$ax += cidrblock($address, '79.99.40.0/21', 'One and One hosting, not an access provider (ASN-8560-1AND1-08). ');
$ax += cidrblock($address, '82.165.0.0/16', 'One and One hosting, not an access provider (ASN-8560-1AND1-09). ');
$ax += cidrblock($address, '82.223.0.0/16', 'One and One hosting, not an access provider (ASN-8560-1AND1-10). ');
$ax += cidrblock($address, '87.106.0.0/16', 'One and One hosting, not an access provider (ASN-8560-1AND1-11). ');
$ax += cidrblock($address, '88.208.192.0/18', 'One and One hosting, not an access provider (ASN-8560-1AND1-12). ');
$ax += cidrblock($address, '93.90.192.0/20', 'One and One hosting, not an access provider (ASN-8560-1AND1-13). ');
$ax += cidrblock($address, '93.93.112.0/21', 'One and One hosting, not an access provider (ASN-8560-1AND1-14). ');
$ax += cidrblock($address, '94.143.136.0/21', 'One and One hosting, not an access provider (ASN-8560-1AND1-15). ');
$ax += cidrblock($address, '104.192.4.0/22', 'One and One hosting, not an access provider (ASN-8560-1AND1-16). ');
$ax += cidrblock($address, '104.219.40.0/22', 'One and One hosting, not an access provider (ASN-8560-1AND1-17). ');
$ax += cidrblock($address, '104.254.244.0/22', 'One and One hosting, not an access provider (ASN-8560-1AND1-18). ');
$ax += cidrblock($address, '108.175.0.0/20', 'One and One hosting, not an access provider (ASN-8560-1AND1-19). ');
$ax += cidrblock($address, '109.228.0.0/18', 'One and One hosting, not an access provider (ASN-8560-1AND1-20). ');
$ax += cidrblock($address, '162.222.200.0/21', 'One and One hosting, not an access provider (ASN-8560-1AND1-21). ');
$ax += cidrblock($address, '162.252.156.0/22', 'One and One hosting, not an access provider (ASN-8560-1AND1-22). ');
$ax += cidrblock($address, '162.255.84.0/22', 'One and One hosting, not an access provider (ASN-8560-1AND1-23). ');
$ax += cidrblock($address, '192.195.77.0/24', 'One and One hosting, not an access provider (ASN-8560-1AND1-24). ');
$ax += cidrblock($address, '195.20.224.0/19', 'One and One hosting, not an access provider (ASN-8560-1AND1-25). ');
$ax += cidrblock($address, '198.71.48.0/20', 'One and One hosting, not an access provider (ASN-8560-1AND1-26). ');
$ax += cidrblock($address, '198.251.64.0/20', 'One and One hosting, not an access provider (ASN-8560-1AND1-27). ');
$ax += cidrblock($address, '212.227.0.0/16', 'One and One hosting, not an access provider (ASN-8560-1AND1-28). ');
$ax += cidrblock($address, '213.165.64.0/19', 'One and One hosting, not an access provider (ASN-8560-1AND1-29). ');
$ax += cidrblock($address, '213.171.192.0/19', 'One and One hosting, not an access provider (ASN-8560-1AND1-30). ');
$ax += cidrblock($address, '216.250.112.0/20', 'One and One hosting, not an access provider (ASN-8560-1AND1-31). ');
$ax += cidrblock($address, '217.72.192.0/20', 'One and One hosting, not an access provider (ASN-8560-1AND1-32). ');
$ax += cidrblock($address, '217.76.128.0/19', 'One and One hosting, not an access provider (ASN-8560-1AND1-33). ');
$ax += cidrblock($address, '217.160.0.0/16', 'One and One hosting, not an access provider (ASN-8560-1AND1-34). ');
$ax += cidrblock($address, '217.174.240.0/20', 'One and One hosting, not an access provider (ASN-8560-1AND1-35). ');


// Swift Networks Limited (updated 2016.01.21 / checked 2016.03.13)
// AS36923
$ax += cidrblock($address, '41.58.0.0/16', 'Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-36923-SWIFT-0). ');
$ax += cidrblock($address, '41.189.0.0/19', 'Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-36923-SWIFT-1). ');
$ax += cidrblock($address, '41.221.160.0/20', 'Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-36923-SWIFT-2). ');
$ax += cidrblock($address, '41.222.64.0/21', 'Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-36923-SWIFT-3). ');
$ax += cidrblock($address, '129.18.0.0/16', 'Swift Networks Limited is blocked by the system administrator, Nigeria, nuf said (ASN-36923-SWIFT-4). ');


// BestHosting (checked 2016.07.16)
// AS42655
$ax += cidrblock($address, '31.41.216.0/21', 'Network known to associate with malware (ASN-42655-BESTHOSTING-0). ');
$ax += cidrblock($address, '194.28.172.0/22', 'Network known to associate with malware (ASN-42655-BESTHOSTING-1). ');
$ax += cidrblock($address, '195.248.234.0/23', 'Network known to associate with malware (ASN-42655-BESTHOSTING-2). ');


// Internap (updated 2016.03.30)
// Various ASNs
$ax += cidrblock($address, '5.104.242.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-000). ');
$ax += cidrblock($address, '23.92.180.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-001). ');
$ax += cidrblock($address, '23.92.184.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-002). ');
$ax += cidrblock($address, '31.186.224.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-003). ');
$ax += cidrblock($address, '38.107.85.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-004). ');
$ax += cidrblock($address, '38.107.87.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-005). ');
$ax += cidrblock($address, '43.246.192.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-006). ');
$ax += cidrblock($address, '45.120.192.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-007). ');
$ax += cidrblock($address, '45.125.240.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-008). ');
$ax += cidrblock($address, '59.153.140.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-009). ');
$ax += cidrblock($address, '61.211.160.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-010). ');
$ax += cidrblock($address, '63.223.80.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-011). ');
$ax += cidrblock($address, '63.223.87.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-012). ');
$ax += cidrblock($address, '63.223.88.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-013). ');
$ax += cidrblock($address, '63.223.90.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-014). ');
$ax += cidrblock($address, '63.251.0.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-015). ');
$ax += cidrblock($address, '63.251.64.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-016). ');
$ax += cidrblock($address, '63.251.100.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-017). ');
$ax += cidrblock($address, '63.251.110.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-018). ');
$ax += cidrblock($address, '63.251.112.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-019). ');
$ax += cidrblock($address, '63.251.128.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-020). ');
$ax += cidrblock($address, '63.251.192.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-021). ');
$ax += cidrblock($address, '63.251.244.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-022). ');
$ax += cidrblock($address, '63.251.248.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-023). ');
$ax += cidrblock($address, '64.7.192.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-024). ');
$ax += cidrblock($address, '64.7.208.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-025). ');
$ax += cidrblock($address, '64.7.216.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-026). ');
$ax += cidrblock($address, '64.7.220.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-027). ');
$ax += cidrblock($address, '64.7.223.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-028). ');
$ax += cidrblock($address, '64.27.244.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-029). ');
$ax += cidrblock($address, '64.71.227.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-030). ');
$ax += cidrblock($address, '64.71.234.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-031). ');
$ax += cidrblock($address, '64.74.0.0/16', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-032). ');
$ax += cidrblock($address, '64.94.0.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-033). ');
$ax += cidrblock($address, '64.94.72.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-034). ');
$ax += cidrblock($address, '64.94.88.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-035). ');
$ax += cidrblock($address, '64.94.96.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-036). ');
$ax += cidrblock($address, '64.94.128.0/17', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-037). ');
$ax += cidrblock($address, '64.95.0.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-038). ');
$ax += cidrblock($address, '64.95.64.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-039). ');
$ax += cidrblock($address, '64.95.104.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-040). ');
$ax += cidrblock($address, '64.95.112.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-041). ');
$ax += cidrblock($address, '64.95.128.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-042). ');
$ax += cidrblock($address, '64.95.136.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-043). ');
$ax += cidrblock($address, '64.95.140.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-044). ');
$ax += cidrblock($address, '64.95.144.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-045). ');
$ax += cidrblock($address, '64.95.160.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-046). ');
$ax += cidrblock($address, '64.95.192.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-047). ');
$ax += cidrblock($address, '65.59.202.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-048). ');
$ax += cidrblock($address, '66.23.191.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-049). ');
$ax += cidrblock($address, '66.79.128.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-050). ');
$ax += cidrblock($address, '66.79.156.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-051). ');
$ax += cidrblock($address, '66.150.0.0/16', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-052). ');
$ax += cidrblock($address, '66.151.0.0/17', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-053). ');
$ax += cidrblock($address, '66.151.128.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-054). ');
$ax += cidrblock($address, '66.151.192.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-055). ');
$ax += cidrblock($address, '66.151.208.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-056). ');
$ax += cidrblock($address, '66.151.220.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-057). ');
$ax += cidrblock($address, '66.151.224.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-058). ');
$ax += cidrblock($address, '66.171.192.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-059). ');
$ax += cidrblock($address, '67.20.50.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-060). ');
$ax += cidrblock($address, '67.20.52.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-061). ');
$ax += cidrblock($address, '67.20.57.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-062). ');
$ax += cidrblock($address, '67.20.58.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-063). ');
$ax += cidrblock($address, '67.20.61.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-064). ');
$ax += cidrblock($address, '67.20.62.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-065). ');
$ax += cidrblock($address, '67.215.161.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-066). ');
$ax += cidrblock($address, '67.215.170.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-067). ');
$ax += cidrblock($address, '67.215.173.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-068). ');
$ax += cidrblock($address, '67.215.174.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-069). ');
$ax += cidrblock($address, '67.215.177.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-070). ');
$ax += cidrblock($address, '67.215.179.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-071). ');
$ax += cidrblock($address, '67.215.180.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-072). ');
$ax += cidrblock($address, '67.215.182.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-073). ');
$ax += cidrblock($address, '67.215.186.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-074). ');
$ax += cidrblock($address, '67.215.189.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-075). ');
$ax += cidrblock($address, '69.25.0.0/17', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-076). ');
$ax += cidrblock($address, '69.25.128.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-077). ');
$ax += cidrblock($address, '69.25.192.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-078). ');
$ax += cidrblock($address, '69.25.224.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-079). ');
$ax += cidrblock($address, '69.25.232.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-080). ');
$ax += cidrblock($address, '69.25.240.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-081). ');
$ax += cidrblock($address, '69.52.134.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-082). ');
$ax += cidrblock($address, '69.87.208.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-083). ');
$ax += cidrblock($address, '69.88.128.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-084). ');
$ax += cidrblock($address, '69.88.144.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-085). ');
$ax += cidrblock($address, '69.88.152.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-086). ');
$ax += cidrblock($address, '69.88.154.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-087). ');
$ax += cidrblock($address, '69.88.158.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-088). ');
$ax += cidrblock($address, '70.42.0.0/16', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-089). ');
$ax += cidrblock($address, '72.5.0.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-090). ');
$ax += cidrblock($address, '72.5.42.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-091). ');
$ax += cidrblock($address, '72.5.48.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-092). ');
$ax += cidrblock($address, '72.5.64.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-093). ');
$ax += cidrblock($address, '72.5.128.0/17', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-094). ');
$ax += cidrblock($address, '72.44.88.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-095). ');
$ax += cidrblock($address, '72.44.93.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-096). ');
$ax += cidrblock($address, '72.44.94.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-097). ');
$ax += cidrblock($address, '74.91.112.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-098). ');
$ax += cidrblock($address, '74.91.114.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-99). ');
$ax += cidrblock($address, '74.91.116.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-100). ');
$ax += cidrblock($address, '74.91.118.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-101). ');
$ax += cidrblock($address, '74.91.120.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-102). ');
$ax += cidrblock($address, '74.91.123.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-103). ');
$ax += cidrblock($address, '74.91.126.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-104). ');
$ax += cidrblock($address, '74.116.112.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-105). ');
$ax += cidrblock($address, '74.118.48.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-106). ');
$ax += cidrblock($address, '74.118.108.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-107). ');
$ax += cidrblock($address, '74.201.0.0/16', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-108). ');
$ax += cidrblock($address, '74.217.0.0/16', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-109). ');
$ax += cidrblock($address, '75.98.0.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-110). ');
$ax += cidrblock($address, '75.98.64.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-111). ');
$ax += cidrblock($address, '77.242.192.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-112). ');
$ax += cidrblock($address, '95.172.64.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-113). ');
$ax += cidrblock($address, '95.172.66.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-114). ');
$ax += cidrblock($address, '95.172.68.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-115). ');
$ax += cidrblock($address, '95.172.72.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-116). ');
$ax += cidrblock($address, '95.172.75.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-117). ');
$ax += cidrblock($address, '95.172.76.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-118). ');
$ax += cidrblock($address, '95.172.80.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-119). ');
$ax += cidrblock($address, '103.6.44.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-120). ');
$ax += cidrblock($address, '103.28.24.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-121). ');
$ax += cidrblock($address, '103.58.68.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-122). ');
$ax += cidrblock($address, '103.192.151.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-123). ');
$ax += cidrblock($address, '104.37.120.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-124). ');
$ax += cidrblock($address, '104.152.224.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-125). ');
$ax += cidrblock($address, '104.153.104.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-126). ');
$ax += cidrblock($address, '104.153.106.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-127). ');
$ax += cidrblock($address, '104.153.110.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-128). ');
$ax += cidrblock($address, '104.193.148.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-129). ');
$ax += cidrblock($address, '107.150.128.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-130). ');
$ax += cidrblock($address, '107.180.128.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-131). ');
$ax += cidrblock($address, '107.180.160.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-132). ');
$ax += cidrblock($address, '107.180.192.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-133). ');
$ax += cidrblock($address, '109.233.40.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-134). ');
$ax += cidrblock($address, '110.34.56.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-135). ');
$ax += cidrblock($address, '111.221.56.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-136). ');
$ax += cidrblock($address, '117.20.40.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-137). ');
$ax += cidrblock($address, '119.59.72.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-138). ');
$ax += cidrblock($address, '122.200.32.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-139). ');
$ax += cidrblock($address, '122.255.76.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-140). ');
$ax += cidrblock($address, '123.108.0.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-141). ');
$ax += cidrblock($address, '129.230.17.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-142). ');
$ax += cidrblock($address, '130.50.200.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-143). ');
$ax += cidrblock($address, '138.36.16.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-144). ');
$ax += cidrblock($address, '142.54.20.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-145). ');
$ax += cidrblock($address, '142.75.16.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-146). ');
$ax += cidrblock($address, '144.208.128.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-147). ');
$ax += cidrblock($address, '149.114.0.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-148). ');
$ax += cidrblock($address, '162.210.172.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-149). ');
$ax += cidrblock($address, '162.210.174.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-150). ');
$ax += cidrblock($address, '162.217.8.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-151). ');
$ax += cidrblock($address, '162.248.89.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-152). ');
$ax += cidrblock($address, '162.248.90.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-153). ');
$ax += cidrblock($address, '162.248.95.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-154). ');
$ax += cidrblock($address, '162.251.0.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-155). ');
$ax += cidrblock($address, '167.173.201.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-156). ');
$ax += cidrblock($address, '171.20.53.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-157). ');
$ax += cidrblock($address, '171.20.54.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-158). ');
$ax += cidrblock($address, '173.230.224.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-159). ');
$ax += cidrblock($address, '173.230.230.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-160). ');
$ax += cidrblock($address, '173.230.235.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-161). ');
$ax += cidrblock($address, '173.230.238.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-162). ');
$ax += cidrblock($address, '173.249.144.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-163). ');
$ax += cidrblock($address, '173.249.149.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-164). ');
$ax += cidrblock($address, '173.249.150.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-165). ');
$ax += cidrblock($address, '173.249.152.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-166). ');
$ax += cidrblock($address, '174.34.48.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-167). ');
$ax += cidrblock($address, '178.22.8.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-168). ');
$ax += cidrblock($address, '178.22.10.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-169). ');
$ax += cidrblock($address, '178.22.13.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-170). ');
$ax += cidrblock($address, '178.22.14.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-171). ');
$ax += cidrblock($address, '181.225.136.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-172). ');
$ax += cidrblock($address, '184.94.220.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-173). ');
$ax += cidrblock($address, '185.100.40.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-174). ');
$ax += cidrblock($address, '185.107.96.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-175). ');
$ax += cidrblock($address, '192.30.228.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-176). ');
$ax += cidrblock($address, '192.43.206.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-177). ');
$ax += cidrblock($address, '192.69.113.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-178). ');
$ax += cidrblock($address, '192.74.134.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-179). ');
$ax += cidrblock($address, '192.92.8.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-180). ');
$ax += cidrblock($address, '192.104.42.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-181). ');
$ax += cidrblock($address, '192.112.255.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-182). ');
$ax += cidrblock($address, '192.163.20.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-183). ');
$ax += cidrblock($address, '192.195.4.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-184). ');
$ax += cidrblock($address, '192.203.198.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-185). ');
$ax += cidrblock($address, '192.223.24.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-186). ');
$ax += cidrblock($address, '192.223.27.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-187). ');
$ax += cidrblock($address, '192.223.28.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-188). ');
$ax += cidrblock($address, '192.223.31.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-189). ');
$ax += cidrblock($address, '192.234.105.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-190). ');
$ax += cidrblock($address, '193.130.199.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-191). ');
$ax += cidrblock($address, '198.72.80.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-192). ');
$ax += cidrblock($address, '198.72.82.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-193). ');
$ax += cidrblock($address, '199.16.146.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-194). ');
$ax += cidrblock($address, '199.19.124.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-195). ');
$ax += cidrblock($address, '199.19.142.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-196). ');
$ax += cidrblock($address, '199.19.187.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-197). ');
$ax += cidrblock($address, '199.21.76.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-198). ');
$ax += cidrblock($address, '199.21.80.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-199). ');
$ax += cidrblock($address, '199.30.64.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-200). ');
$ax += cidrblock($address, '199.48.252.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-201). ');
$ax += cidrblock($address, '199.168.132.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-202). ');
$ax += cidrblock($address, '199.233.179.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-203). ');
$ax += cidrblock($address, '199.244.252.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-204). ');
$ax += cidrblock($address, '199.245.176.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-205). ');
$ax += cidrblock($address, '200.50.128.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-206). ');
$ax += cidrblock($address, '202.56.8.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-207). ');
$ax += cidrblock($address, '202.58.8.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-208). ');
$ax += cidrblock($address, '202.58.100.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-209). ');
$ax += cidrblock($address, '202.58.136.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-210). ');
$ax += cidrblock($address, '203.95.24.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-211). ');
$ax += cidrblock($address, '203.169.8.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-212). ');
$ax += cidrblock($address, '203.190.120.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-213). ');
$ax += cidrblock($address, '204.9.43.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-214). ');
$ax += cidrblock($address, '204.145.96.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-215). ');
$ax += cidrblock($address, '204.153.219.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-216). ');
$ax += cidrblock($address, '204.227.65.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-217). ');
$ax += cidrblock($address, '204.227.77.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-218). ');
$ax += cidrblock($address, '204.238.150.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-219). ');
$ax += cidrblock($address, '204.239.214.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-220). ');
$ax += cidrblock($address, '206.191.128.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-221). ');
$ax += cidrblock($address, '206.191.144.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-222). ');
$ax += cidrblock($address, '206.191.160.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-223). ');
$ax += cidrblock($address, '206.191.176.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-224). ');
$ax += cidrblock($address, '206.251.192.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-225). ');
$ax += cidrblock($address, '206.253.192.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-226). ');
$ax += cidrblock($address, '208.64.56.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-227). ');
$ax += cidrblock($address, '208.64.100.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-228). ');
$ax += cidrblock($address, '208.64.102.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-229). ');
$ax += cidrblock($address, '208.75.208.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-230). ');
$ax += cidrblock($address, '208.76.24.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-231). ');
$ax += cidrblock($address, '208.95.255.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-232). ');
$ax += cidrblock($address, '208.146.32.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-233). ');
$ax += cidrblock($address, '209.191.128.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-234). ');
$ax += cidrblock($address, '209.247.32.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-235). ');
$ax += cidrblock($address, '210.193.64.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-236). ');
$ax += cidrblock($address, '212.118.224.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-237). ');
$ax += cidrblock($address, '216.52.0.0/21', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-238). ');
$ax += cidrblock($address, '216.52.28.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-239). ');
$ax += cidrblock($address, '216.52.32.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-240). ');
$ax += cidrblock($address, '216.52.64.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-241). ');
$ax += cidrblock($address, '216.52.128.0/17', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-242). ');
$ax += cidrblock($address, '216.82.95.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-243). ');
$ax += cidrblock($address, '216.133.224.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-244). ');
$ax += cidrblock($address, '216.223.0.0/18', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-245). ');
$ax += cidrblock($address, '216.228.228.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-246). ');
$ax += cidrblock($address, '216.228.236.0/23', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-247). ');
$ax += cidrblock($address, '216.245.17.0/24', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-248). ');
$ax += cidrblock($address, '218.40.144.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-249). ');
$ax += cidrblock($address, '218.216.96.0/20', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-250). ');
$ax += cidrblock($address, '219.96.96.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-251). ');
$ax += cidrblock($address, '219.113.0.0/19', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-252). ');
$ax += cidrblock($address, '220.158.248.0/22', 'Internap Network Services Corporation, Cloud and CDN, not an access provider (AS-INTERNAP-253). ');


// WEBSUPPORT-SRO-SK-AS (updated 2016.01.21 / checked 2016.03.13)
// AS51013
$ax += cidrblock($address, '37.9.168.0/21', 'Nasty slovak proxy service, participated in DoS attack (ASN-51013-WEBSUP-0). ');
$ax += cidrblock($address, '185.111.88.0/22', 'Nasty slovak proxy service, participated in DoS attack (ASN-51013-WEBSUP-1). ');
$ax += cidrblock($address, '195.210.28.0/23', 'Nasty slovak proxy service, participated in DoS attack (ASN-51013-WEBSUP-2). ');


// XIRRA GmbH (updated 2015.09.03 / checked 2016.03.30)
// AS51191
$ax += cidrblock($address, '91.232.96.0/23', 'XIRRA (ASN-51191-XIRRA-1). ');
$ax += cidrblock($address, '130.185.104.0/21', 'XIRRA (ASN-51191-XIRRA-2). ');
$ax += cidrblock($address, '185.24.68.0/22', 'XIRRA (ASN-51191-XIRRA-3). ');
$ax += cidrblock($address, '185.108.216.0/22', 'XIRRA (ASN-51191-XIRRA-4). ');
$ax += cidrblock($address, '195.138.240.0/21', 'XIRRA (ASN-51191-XIRRA-5). ');


// WOWRACK Routing from Hyper to Wowrack.
// Should not be contacting servers outside of routing purposes, but is
// participating in attacks nonetheless.
// AS23033 (updated 2016.07.06).
$ax += cidrblock($address, '43.224.132.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-00). ');
$ax += cidrblock($address, '43.230.200.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-01). ');
$ax += cidrblock($address, '43.249.188.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-02). ');
$ax += cidrblock($address, '50.115.160.0/20', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-03). ');
$ax += cidrblock($address, '64.57.128.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-04). ');
$ax += cidrblock($address, '64.140.148.0/23', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-05). ');
$ax += cidrblock($address, '74.121.184.0/21', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-06). ');
$ax += cidrblock($address, '76.191.81.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-07). ');
$ax += cidrblock($address, '76.191.82.0/23', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-08). ');
$ax += cidrblock($address, '103.225.60.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-09). ');
$ax += cidrblock($address, '103.229.64.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-10). ');
$ax += cidrblock($address, '103.233.26.0/23', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-11). ');
$ax += cidrblock($address, '103.236.108.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-12). ');
$ax += cidrblock($address, '103.240.212.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-13). ');
$ax += cidrblock($address, '103.241.168.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-14). ');
$ax += cidrblock($address, '103.242.116.0/23', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-15). ');
$ax += cidrblock($address, '103.242.118.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-16). ');
$ax += cidrblock($address, '104.200.65.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-17). ');
$ax += cidrblock($address, '104.232.217.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-18). ');
$ax += cidrblock($address, '150.129.0.0/23', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-19). ');
$ax += cidrblock($address, '150.129.2.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-20). ');
$ax += cidrblock($address, '162.210.248.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-21). ');
$ax += cidrblock($address, '162.251.68.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-22). ');
$ax += cidrblock($address, '173.0.48.0/20', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-23). ');
$ax += cidrblock($address, '192.34.108.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-24). ');
$ax += cidrblock($address, '192.124.18.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-25). ');
$ax += cidrblock($address, '192.169.68.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-26). ');
$ax += cidrblock($address, '192.206.8.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-27). ');
$ax += cidrblock($address, '192.251.193.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-28). ');
$ax += cidrblock($address, '198.167.136.0/21', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-29). ');
$ax += cidrblock($address, '198.175.124.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-30). ');
$ax += cidrblock($address, '199.119.224.0/22', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-31). ');
$ax += cidrblock($address, '199.180.128.0/21', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-32). ');
$ax += cidrblock($address, '207.244.144.0/20', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-33). ');
$ax += cidrblock($address, '208.89.208.0/21', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-34). ');
$ax += cidrblock($address, '208.115.96.0/19', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-35). ');
$ax += cidrblock($address, '209.40.200.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-36). ');
$ax += cidrblock($address, '209.90.224.0/20', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-37). ');
$ax += cidrblock($address, '210.16.101.0/24', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-38). ');
$ax += cidrblock($address, '216.176.176.0/20', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-39). ');
$ax += cidrblock($address, '216.244.64.0/19', 'WowRack Routing; Access Denied (ASN-23033-WOWRACK-40). ');


// HyperHosting (updated 2016.01.21 / checked 2016.04.03)
// AS197746
$ax += cidrblock($address, '31.22.112.0/23', 'HyperHosting, Cloud and CDN, not an access provider (ASN-197746-HYPERHOST-1). ');
$ax += cidrblock($address, '31.22.115.0/24', 'HyperHosting, Cloud and CDN, not an access provider (ASN-197746-HYPERHOST-2). ');
$ax += cidrblock($address, '31.22.118.0/23', 'HyperHosting, Cloud and CDN, not an access provider (ASN-197746-HYPERHOST-3). ');
$ax += cidrblock($address, '62.1.216.0/24', 'HyperHosting, Cloud and CDN, not an access provider (ASN-197746-HYPERHOST-4). ');
$ax += cidrblock($address, '185.23.88.0/23', 'HyperHosting, Cloud and CDN, not an access provider (ASN-197746-HYPERHOST-5). ');
$ax += cidrblock($address, '194.219.79.0/24', 'HyperHosting, Cloud and CDN, not an access provider (ASN-197746-HYPERHOST-6). ');


// SWIFT VENTURES Inc (updated 2016.01.22 / checked 2016.03.20)
// AS25700
$ax += cidrblock($address, '74.117.174.0/24', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-00). ');
$ax += cidrblock($address, '204.8.32.0/24', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-01). ');
$ax += cidrblock($address, '204.8.34.0/24', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-02). ');
$ax += cidrblock($address, '204.13.164.0/22', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-03). ');
$ax += cidrblock($address, '204.14.122.0/23', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-04). ');
$ax += cidrblock($address, '204.15.224.0/21', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-05). ');
$ax += cidrblock($address, '208.99.192.0/21', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-06). ');
$ax += cidrblock($address, '208.99.200.0/24', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-07). ');
$ax += cidrblock($address, '208.99.202.0/23', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-08). ');
$ax += cidrblock($address, '208.99.204.0/22', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-09). ');
$ax += cidrblock($address, '208.99.208.0/22', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-10). ');
$ax += cidrblock($address, '208.99.214.0/23', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-11). ');
$ax += cidrblock($address, '208.99.216.0/21', 'Swift Ventures spam/scrape network (ASN-25700-SWIFT-12). ');


// iDeal Hosting Tic. Ltd. Sti. (updated 2016.03.28)
// Turkish host provider caught hammering honeypots
// AS29262, AS60897
$ax += cidrblock($address, '185.85.189.0/24', 'iDeal Hosting (AS-iDEAL-00). ');
$ax += cidrblock($address, '185.85.190.0/23', 'iDeal Hosting (AS-iDEAL-01). ');
$ax += cidrblock($address, '185.85.237.0/24', 'iDeal Hosting (AS-iDEAL-02). ');
$ax += cidrblock($address, '185.85.238.0/23', 'iDeal Hosting (AS-iDEAL-03). ');
$ax += cidrblock($address, '185.86.5.0/24', 'iDeal Hosting (AS-iDEAL-04). ');
$ax += cidrblock($address, '185.86.153.0/24', 'iDeal Hosting (AS-iDEAL-05). ');
$ax += cidrblock($address, '185.86.154.0/24', 'iDeal Hosting (AS-iDEAL-06). ');
$ax += cidrblock($address, '185.86.164.0/22', 'iDeal Hosting (AS-iDEAL-07). ');
$ax += cidrblock($address, '185.87.26.0/23', 'iDeal Hosting (AS-iDEAL-08). ');
$ax += cidrblock($address, '185.87.121.0/24', 'iDeal Hosting (AS-iDEAL-09). ');
$ax += cidrblock($address, '185.87.122.0/23', 'iDeal Hosting (AS-iDEAL-10). ');
$ax += cidrblock($address, '185.98.60.0/24', 'iDeal Hosting (AS-iDEAL-11). ');
$ax += cidrblock($address, '185.119.80.0/23', 'iDeal Hosting (AS-iDEAL-12). ');
$ax += cidrblock($address, '185.119.82.0/24', 'iDeal Hosting (AS-iDEAL-13). ');
$ax += cidrblock($address, '213.238.178.0/23', 'iDeal Hosting (AS-iDEAL-14). ');


// CyberVerse (Colocated Data Centers)
// AS11051 (updated 2016.01.22 / checked 2016.03.15)
$ax += cidrblock($address, '66.172.0.0/18', 'CyberVerse (ASN-11051-CYBERVERSE-0). ');
$ax += cidrblock($address, '66.180.192.0/20', 'CyberVerse (ASN-11051-CYBERVERSE-1). ');
$ax += cidrblock($address, '76.8.16.0/20', 'CyberVerse (ASN-11051-CYBERVERSE-2). ');
$ax += cidrblock($address, '184.170.144.0/20', 'CyberVerse (ASN-11051-CYBERVERSE-3). ');
$ax += cidrblock($address, '208.80.183.0/24', 'CyberVerse (ASN-11051-CYBERVERSE-4). ');
$ax += cidrblock($address, '209.151.224.0/19', 'CyberVerse (ASN-11051-CYBERVERSE-5). ');
$ax += cidrblock($address, '216.176.192.0/20', 'CyberVerse (ASN-11051-CYBERVERSE-6). ');


// CoreSpace, Inc.
// AS54489 (updated 2016.04.03)
$ax += cidrblock($address, '44.110.0.0/24', 'CoreSpace (ASN-54489-CORESPACE-00). ');
$ax += cidrblock($address, '63.249.128.0/17', 'CoreSpace (ASN-54489-CORESPACE-01). ');
$ax += cidrblock($address, '64.182.0.0/16', 'CoreSpace (ASN-54489-CORESPACE-02). ');
$ax += cidrblock($address, '66.34.0.0/16', 'CoreSpace (ASN-54489-CORESPACE-03). ');
$ax += cidrblock($address, '66.221.0.0/16', 'CoreSpace (ASN-54489-CORESPACE-04). ');
$ax += cidrblock($address, '69.13.0.0/16', 'CoreSpace (ASN-54489-CORESPACE-05). ');
$ax += cidrblock($address, '198.73.50.0/24', 'CoreSpace (ASN-54489-CORESPACE-06). ');
$ax += cidrblock($address, '198.232.139.0/24', 'CoreSpace (ASN-54489-CORESPACE-07). ');
$ax += cidrblock($address, '209.164.64.0/18', 'CoreSpace (ASN-54489-CORESPACE-08). ');
$ax += cidrblock($address, '216.19.223.0/24', 'CoreSpace (ASN-54489-CORESPACE-09). ');
$ax += cidrblock($address, '216.97.0.0/17', 'CoreSpace (ASN-54489-CORESPACE-10). ');
$ax += cidrblock($address, '216.221.160.0/19', 'CoreSpace (ASN-54489-CORESPACE-11). ');


// Black Lotus Communications
// AS32421, AS26458 (updated 2016.04.03)
$ax += cidrblock($address, '38.73.64.0/20', 'Black Lotus Communications (AS-BLACKLOTUS-00). ');
$ax += cidrblock($address, '38.73.104.0/21', 'Black Lotus Communications (AS-BLACKLOTUS-01). ');
$ax += cidrblock($address, '45.58.15.0/24', 'Black Lotus Communications (AS-BLACKLOTUS-02). ');
$ax += cidrblock($address, '64.94.82.0/24', 'Black Lotus Communications (AS-BLACKLOTUS-03). ');
$ax += cidrblock($address, '65.77.130.0/24', 'Black Lotus Communications (AS-BLACKLOTUS-04). ');
$ax += cidrblock($address, '98.158.16.0/20', 'Black Lotus Communications (AS-BLACKLOTUS-05). ');
$ax += cidrblock($address, '162.222.104.0/22', 'Black Lotus Communications (AS-BLACKLOTUS-06). ');
$ax += cidrblock($address, '162.252.52.0/22', 'Black Lotus Communications (AS-BLACKLOTUS-07). ');
$ax += cidrblock($address, '162.254.240.0/22', 'Black Lotus Communications (AS-BLACKLOTUS-08). ');
$ax += cidrblock($address, '185.55.52.0/22', 'Black Lotus Communications (AS-BLACKLOTUS-09). ');
$ax += cidrblock($address, '192.31.184.0/22', 'Black Lotus Communications (AS-BLACKLOTUS-10). ');
$ax += cidrblock($address, '192.184.8.0/21', 'Black Lotus Communications (AS-BLACKLOTUS-11). ');
$ax += cidrblock($address, '199.30.88.0/21', 'Black Lotus Communications (AS-BLACKLOTUS-12). ');
$ax += cidrblock($address, '199.59.160.0/21', 'Black Lotus Communications (AS-BLACKLOTUS-13). ');
$ax += cidrblock($address, '199.250.60.0/22', 'Black Lotus Communications (AS-BLACKLOTUS-14). ');
$ax += cidrblock($address, '208.64.120.0/21', 'Black Lotus Communications (AS-BLACKLOTUS-15). ');
$ax += cidrblock($address, '216.21.4.0/24', 'Black Lotus Communications (AS-BLACKLOTUS-16). ');
$ax += cidrblock($address, '216.21.6.0/24', 'Black Lotus Communications (AS-BLACKLOTUS-17). ');


// Quadranet (updated 2016.06.09)
// AS8100, AS29761, AS62639
$ax += cidrblock($address, '23.92.52.0/22', 'Quadranet, not an access provider (AS-QUADRA-000). ');
$ax += cidrblock($address, '23.152.0.0/24', 'Quadranet, not an access provider (AS-QUADRA-001). ');
$ax += cidrblock($address, '23.226.128.0/20', 'Quadranet, not an access provider (AS-QUADRA-002). ');
$ax += cidrblock($address, '23.249.240.0/20', 'Quadranet, not an access provider (AS-QUADRA-003). ');
$ax += cidrblock($address, '43.229.18.0/23', 'Quadranet, not an access provider (AS-QUADRA-004). ');
$ax += cidrblock($address, '43.251.8.0/22', 'Quadranet, not an access provider (AS-QUADRA-005). ');
$ax += cidrblock($address, '45.41.140.0/22', 'Quadranet, not an access provider (AS-QUADRA-006). ');
$ax += cidrblock($address, '45.56.144.0/22', 'Quadranet, not an access provider (AS-QUADRA-007). ');
$ax += cidrblock($address, '45.61.112.0/20', 'Quadranet, not an access provider (AS-QUADRA-008). ');
$ax += cidrblock($address, '45.62.96.0/20', 'Quadranet, not an access provider (AS-QUADRA-009). ');
$ax += cidrblock($address, '45.118.124.0/22', 'Quadranet, not an access provider (AS-QUADRA-010). ');
$ax += cidrblock($address, '45.120.4.0/22', 'Quadranet, not an access provider (AS-QUADRA-011). ');
$ax += cidrblock($address, '59.153.62.0/24', 'Quadranet, not an access provider (AS-QUADRA-012). ');
$ax += cidrblock($address, '63.142.240.0/22', 'Quadranet, not an access provider (AS-QUADRA-013). ');
$ax += cidrblock($address, '63.142.248.0/23', 'Quadranet, not an access provider (AS-QUADRA-014). ');
$ax += cidrblock($address, '64.57.132.0/24', 'Quadranet, not an access provider (AS-QUADRA-015). ');
$ax += cidrblock($address, '64.110.129.0/24', 'Quadranet, not an access provider (AS-QUADRA-016). ');
$ax += cidrblock($address, '64.110.130.0/24', 'Quadranet, not an access provider (AS-QUADRA-017). ');
$ax += cidrblock($address, '66.55.76.0/24', 'Quadranet, not an access provider (AS-QUADRA-018). ');
$ax += cidrblock($address, '66.63.160.0/19', 'Quadranet, not an access provider (AS-QUADRA-019). ');
$ax += cidrblock($address, '66.85.26.0/23', 'Quadranet, not an access provider (AS-QUADRA-020). ');
$ax += cidrblock($address, '66.154.96.0/19', 'Quadranet, not an access provider (AS-QUADRA-021). ');
$ax += cidrblock($address, '66.212.16.0/20', 'Quadranet, not an access provider (AS-QUADRA-022). ');
$ax += cidrblock($address, '67.215.224.0/19', 'Quadranet, not an access provider (AS-QUADRA-023). ');
$ax += cidrblock($address, '69.12.64.0/19', 'Quadranet, not an access provider (AS-QUADRA-024). ');
$ax += cidrblock($address, '69.174.96.0/21', 'Quadranet, not an access provider (AS-QUADRA-025). ');
$ax += cidrblock($address, '72.11.128.0/19', 'Quadranet, not an access provider (AS-QUADRA-026). ');
$ax += cidrblock($address, '96.44.128.0/18', 'Quadranet, not an access provider (AS-QUADRA-027). ');
$ax += cidrblock($address, '96.47.224.0/20', 'Quadranet, not an access provider (AS-QUADRA-028). ');
$ax += cidrblock($address, '98.143.144.0/20', 'Quadranet, not an access provider (AS-QUADRA-029). ');
$ax += cidrblock($address, '103.21.208.0/22', 'Quadranet, not an access provider (AS-QUADRA-030). ');
$ax += cidrblock($address, '103.58.176.0/22', 'Quadranet, not an access provider (AS-QUADRA-031). ');
$ax += cidrblock($address, '103.60.64.0/22', 'Quadranet, not an access provider (AS-QUADRA-032). ');
$ax += cidrblock($address, '103.235.4.0/24', 'Quadranet, not an access provider (AS-QUADRA-033). ');
$ax += cidrblock($address, '103.236.221.0/24', 'Quadranet, not an access provider (AS-QUADRA-034). ');
$ax += cidrblock($address, '103.236.222.0/23', 'Quadranet, not an access provider (AS-QUADRA-035). ');
$ax += cidrblock($address, '103.238.80.0/22', 'Quadranet, not an access provider (AS-QUADRA-036). ');
$ax += cidrblock($address, '104.37.0.0/24', 'Quadranet, not an access provider (AS-QUADRA-037). ');
$ax += cidrblock($address, '104.37.4.0/24', 'Quadranet, not an access provider (AS-QUADRA-038). ');
$ax += cidrblock($address, '104.37.59.0/24', 'Quadranet, not an access provider (AS-QUADRA-039). ');
$ax += cidrblock($address, '104.129.0.0/18', 'Quadranet, not an access provider (AS-QUADRA-040). ');
$ax += cidrblock($address, '104.143.33.0/24', 'Quadranet, not an access provider (AS-QUADRA-041). ');
$ax += cidrblock($address, '104.143.88.0/22', 'Quadranet, not an access provider (AS-QUADRA-042). ');
$ax += cidrblock($address, '104.192.28.0/22', 'Quadranet, not an access provider (AS-QUADRA-043). ');
$ax += cidrblock($address, '104.194.76.0/22', 'Quadranet, not an access provider (AS-QUADRA-044). ');
$ax += cidrblock($address, '104.194.192.0/22', 'Quadranet, not an access provider (AS-QUADRA-045). ');
$ax += cidrblock($address, '104.200.160.0/20', 'Quadranet, not an access provider (AS-QUADRA-046). ');
$ax += cidrblock($address, '104.223.0.0/17', 'Quadranet, not an access provider (AS-QUADRA-047). ');
$ax += cidrblock($address, '104.224.128.0/21', 'Quadranet, not an access provider (AS-QUADRA-048). ');
$ax += cidrblock($address, '104.224.152.0/21', 'Quadranet, not an access provider (AS-QUADRA-049). ');
$ax += cidrblock($address, '104.224.160.0/21', 'Quadranet, not an access provider (AS-QUADRA-050). ');
$ax += cidrblock($address, '104.238.33.0/24', 'Quadranet, not an access provider (AS-QUADRA-051). ');
$ax += cidrblock($address, '104.238.46.0/23', 'Quadranet, not an access provider (AS-QUADRA-052). ');
$ax += cidrblock($address, '104.243.246.0/24', 'Quadranet, not an access provider (AS-QUADRA-053). ');
$ax += cidrblock($address, '104.244.7.0/24', 'Quadranet, not an access provider (AS-QUADRA-054). ');
$ax += cidrblock($address, '104.245.240.0/21', 'Quadranet, not an access provider (AS-QUADRA-055). ');
$ax += cidrblock($address, '104.250.163.0/24', 'Quadranet, not an access provider (AS-QUADRA-056). ');
$ax += cidrblock($address, '104.250.174.0/24', 'Quadranet, not an access provider (AS-QUADRA-057). ');
$ax += cidrblock($address, '104.250.178.0/24', 'Quadranet, not an access provider (AS-QUADRA-058). ');
$ax += cidrblock($address, '104.251.180.0/22', 'Quadranet, not an access provider (AS-QUADRA-059). ');
$ax += cidrblock($address, '104.251.186.0/23', 'Quadranet, not an access provider (AS-QUADRA-060). ');
$ax += cidrblock($address, '104.251.208.0/23', 'Quadranet, not an access provider (AS-QUADRA-061). ');
$ax += cidrblock($address, '104.254.61.0/24', 'Quadranet, not an access provider (AS-QUADRA-062). ');
$ax += cidrblock($address, '104.255.220.0/22', 'Quadranet, not an access provider (AS-QUADRA-063). ');
$ax += cidrblock($address, '104.255.225.0/24', 'Quadranet, not an access provider (AS-QUADRA-064). ');
$ax += cidrblock($address, '107.150.0.0/20', 'Quadranet, not an access provider (AS-QUADRA-065). ');
$ax += cidrblock($address, '107.150.16.0/22', 'Quadranet, not an access provider (AS-QUADRA-066). ');
$ax += cidrblock($address, '107.150.20.0/23', 'Quadranet, not an access provider (AS-QUADRA-067). ');
$ax += cidrblock($address, '107.150.25.0/24', 'Quadranet, not an access provider (AS-QUADRA-068). ');
$ax += cidrblock($address, '107.150.26.0/24', 'Quadranet, not an access provider (AS-QUADRA-069). ');
$ax += cidrblock($address, '107.150.30.0/23', 'Quadranet, not an access provider (AS-QUADRA-070). ');
$ax += cidrblock($address, '107.161.80.0/20', 'Quadranet, not an access provider (AS-QUADRA-071). ');
$ax += cidrblock($address, '107.167.32.0/19', 'Quadranet, not an access provider (AS-QUADRA-072). ');
$ax += cidrblock($address, '107.178.140.0/22', 'Quadranet, not an access provider (AS-QUADRA-073). ');
$ax += cidrblock($address, '107.181.77.0/24', 'Quadranet, not an access provider (AS-QUADRA-074). ');
$ax += cidrblock($address, '138.128.192.0/20', 'Quadranet, not an access provider (AS-QUADRA-075). ');
$ax += cidrblock($address, '138.128.220.0/22', 'Quadranet, not an access provider (AS-QUADRA-076). ');
$ax += cidrblock($address, '146.71.32.0/20', 'Quadranet, not an access provider (AS-QUADRA-077). ');
$ax += cidrblock($address, '146.148.160.0/21', 'Quadranet, not an access provider (AS-QUADRA-078). ');
$ax += cidrblock($address, '154.16.108.0/22', 'Quadranet, not an access provider (AS-QUADRA-079). ');
$ax += cidrblock($address, '154.16.160.0/22', 'Quadranet, not an access provider (AS-QUADRA-080). ');
$ax += cidrblock($address, '154.16.166.0/24', 'Quadranet, not an access provider (AS-QUADRA-081). ');
$ax += cidrblock($address, '155.94.128.0/17', 'Quadranet, not an access provider (AS-QUADRA-082). ');
$ax += cidrblock($address, '155.254.38.0/24', 'Quadranet, not an access provider (AS-QUADRA-083). ');
$ax += cidrblock($address, '160.202.168.0/22', 'Quadranet, not an access provider (AS-QUADRA-084). ');
$ax += cidrblock($address, '162.211.65.0/24', 'Quadranet, not an access provider (AS-QUADRA-085). ');
$ax += cidrblock($address, '162.211.67.0/24', 'Quadranet, not an access provider (AS-QUADRA-086). ');
$ax += cidrblock($address, '162.218.208.0/22', 'Quadranet, not an access provider (AS-QUADRA-087). ');
$ax += cidrblock($address, '162.220.8.0/21', 'Quadranet, not an access provider (AS-QUADRA-088). ');
$ax += cidrblock($address, '162.220.244.0/24', 'Quadranet, not an access provider (AS-QUADRA-089). ');
$ax += cidrblock($address, '162.245.184.0/21', 'Quadranet, not an access provider (AS-QUADRA-090). ');
$ax += cidrblock($address, '162.253.178.0/23', 'Quadranet, not an access provider (AS-QUADRA-091). ');
$ax += cidrblock($address, '167.160.36.0/24', 'Quadranet, not an access provider (AS-QUADRA-092). ');
$ax += cidrblock($address, '167.160.160.0/19', 'Quadranet, not an access provider (AS-QUADRA-093). ');
$ax += cidrblock($address, '172.97.70.0/24', 'Quadranet, not an access provider (AS-QUADRA-094). ');
$ax += cidrblock($address, '172.110.24.0/24', 'Quadranet, not an access provider (AS-QUADRA-095). ');
$ax += cidrblock($address, '173.44.32.0/19', 'Quadranet, not an access provider (AS-QUADRA-096). ');
$ax += cidrblock($address, '173.205.80.0/20', 'Quadranet, not an access provider (AS-QUADRA-097). ');
$ax += cidrblock($address, '173.254.192.0/18', 'Quadranet, not an access provider (AS-QUADRA-098). ');
$ax += cidrblock($address, '183.182.10.0/24', 'Quadranet, not an access provider (AS-QUADRA-99). ');
$ax += cidrblock($address, '185.73.128.0/22', 'Quadranet, not an access provider (AS-QUADRA-100). ');
$ax += cidrblock($address, '185.121.152.0/24', 'Quadranet, not an access provider (AS-QUADRA-101). ');
$ax += cidrblock($address, '192.52.166.0/23', 'Quadranet, not an access provider (AS-QUADRA-102). ');
$ax += cidrblock($address, '192.119.140.0/22', 'Quadranet, not an access provider (AS-QUADRA-103). ');
$ax += cidrblock($address, '192.161.48.0/20', 'Quadranet, not an access provider (AS-QUADRA-104). ');
$ax += cidrblock($address, '192.161.160.0/19', 'Quadranet, not an access provider (AS-QUADRA-105). ');
$ax += cidrblock($address, '192.169.6.0/23', 'Quadranet, not an access provider (AS-QUADRA-106). ');
$ax += cidrblock($address, '192.189.2.0/24', 'Quadranet, not an access provider (AS-QUADRA-107). ');
$ax += cidrblock($address, '192.225.224.0/22', 'Quadranet, not an access provider (AS-QUADRA-108). ');
$ax += cidrblock($address, '192.225.228.0/23', 'Quadranet, not an access provider (AS-QUADRA-109). ');
$ax += cidrblock($address, '193.17.68.0/24', 'Quadranet, not an access provider (AS-QUADRA-110). ');
$ax += cidrblock($address, '193.30.161.0/24', 'Quadranet, not an access provider (AS-QUADRA-111). ');
$ax += cidrblock($address, '193.200.30.0/24', 'Quadranet, not an access provider (AS-QUADRA-112). ');
$ax += cidrblock($address, '195.137.220.0/23', 'Quadranet, not an access provider (AS-QUADRA-113). ');
$ax += cidrblock($address, '198.55.96.0/19', 'Quadranet, not an access provider (AS-QUADRA-114). ');
$ax += cidrblock($address, '198.96.88.0/21', 'Quadranet, not an access provider (AS-QUADRA-115). ');
$ax += cidrblock($address, '198.175.228.0/24', 'Quadranet, not an access provider (AS-QUADRA-116). ');
$ax += cidrblock($address, '198.180.167.0/24', 'Quadranet, not an access provider (AS-QUADRA-117). ');
$ax += cidrblock($address, '199.89.0.0/23', 'Quadranet, not an access provider (AS-QUADRA-118). ');
$ax += cidrblock($address, '199.180.254.0/23', 'Quadranet, not an access provider (AS-QUADRA-119). ');
$ax += cidrblock($address, '199.202.223.0/24', 'Quadranet, not an access provider (AS-QUADRA-120). ');
$ax += cidrblock($address, '199.249.182.0/24', 'Quadranet, not an access provider (AS-QUADRA-121). ');
$ax += cidrblock($address, '202.131.55.0/24', 'Quadranet, not an access provider (AS-QUADRA-122). ');
$ax += cidrblock($address, '203.7.164.0/24', 'Quadranet, not an access provider (AS-QUADRA-123). ');
$ax += cidrblock($address, '204.44.64.0/18', 'Quadranet, not an access provider (AS-QUADRA-124). ');
$ax += cidrblock($address, '204.152.192.0/19', 'Quadranet, not an access provider (AS-QUADRA-125). ');
$ax += cidrblock($address, '206.126.96.0/24', 'Quadranet, not an access provider (AS-QUADRA-126). ');
$ax += cidrblock($address, '207.246.200.0/24', 'Quadranet, not an access provider (AS-QUADRA-127). ');
$ax += cidrblock($address, '216.45.48.0/20', 'Quadranet, not an access provider (AS-QUADRA-128). ');
$ax += cidrblock($address, '216.144.224.0/20', 'Quadranet, not an access provider (AS-QUADRA-129). ');
$ax += cidrblock($address, '218.246.130.0/24', 'Quadranet, not an access provider (AS-QUADRA-130). ');


// ColoCrossing
// AS36352 (updated 2016.06.19)
$ax += cidrblock($address, '5.226.171.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-000). ');
$ax += cidrblock($address, '8.17.250.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-001). ');
$ax += cidrblock($address, '8.17.252.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-002). ');
$ax += cidrblock($address, '23.94.0.0/15', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-003). ');
$ax += cidrblock($address, '23.229.96.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-004). ');
$ax += cidrblock($address, '23.236.240.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-005). ');
$ax += cidrblock($address, '23.249.160.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-006). ');
$ax += cidrblock($address, '23.250.112.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-007). ');
$ax += cidrblock($address, '23.254.88.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-008). ');
$ax += cidrblock($address, '23.254.96.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-009). ');
$ax += cidrblock($address, '23.254.104.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-010). ');
$ax += cidrblock($address, '23.254.106.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-011). ');
$ax += cidrblock($address, '23.254.112.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-012). ');
$ax += cidrblock($address, '43.245.196.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-013). ');
$ax += cidrblock($address, '45.40.32.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-014). ');
$ax += cidrblock($address, '45.57.240.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-015). ');
$ax += cidrblock($address, '45.57.244.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-016). ');
$ax += cidrblock($address, '45.57.248.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-017). ');
$ax += cidrblock($address, '45.74.2.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-018). ');
$ax += cidrblock($address, '65.99.193.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-019). ');
$ax += cidrblock($address, '65.99.246.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-020). ');
$ax += cidrblock($address, '66.225.194.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-021). ');
$ax += cidrblock($address, '66.225.198.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-022). ');
$ax += cidrblock($address, '66.225.231.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-023). ');
$ax += cidrblock($address, '66.225.232.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-024). ');
$ax += cidrblock($address, '69.31.134.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-025). ');
$ax += cidrblock($address, '72.249.94.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-026). ');
$ax += cidrblock($address, '72.249.124.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-027). ');
$ax += cidrblock($address, '75.102.10.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-028). ');
$ax += cidrblock($address, '75.102.27.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-029). ');
$ax += cidrblock($address, '75.102.34.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-030). ');
$ax += cidrblock($address, '75.102.38.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-031). ');
$ax += cidrblock($address, '75.127.0.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-032). ');
$ax += cidrblock($address, '96.8.112.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-033). ');
$ax += cidrblock($address, '104.128.231.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-034). ');
$ax += cidrblock($address, '104.128.232.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-035). ');
$ax += cidrblock($address, '104.145.231.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-036). ');
$ax += cidrblock($address, '104.145.232.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-037). ');
$ax += cidrblock($address, '104.145.234.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-038). ');
$ax += cidrblock($address, '104.145.237.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-039). ');
$ax += cidrblock($address, '104.145.238.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-040). ');
$ax += cidrblock($address, '104.168.0.0/17', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-041). ');
$ax += cidrblock($address, '104.227.192.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-042). ');
$ax += cidrblock($address, '104.232.32.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-043). ');
$ax += cidrblock($address, '104.250.124.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-044). ');
$ax += cidrblock($address, '104.250.126.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-045). ');
$ax += cidrblock($address, '107.161.144.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-046). ');
$ax += cidrblock($address, '107.161.152.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-047). ');
$ax += cidrblock($address, '107.161.155.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-048). ');
$ax += cidrblock($address, '107.161.156.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-049). ');
$ax += cidrblock($address, '107.172.0.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-050). ');
$ax += cidrblock($address, '107.172.16.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-051). ');
$ax += cidrblock($address, '107.172.24.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-052). ');
$ax += cidrblock($address, '107.172.28.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-053). ');
$ax += cidrblock($address, '107.172.32.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-054). ');
$ax += cidrblock($address, '107.172.64.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-055). ');
$ax += cidrblock($address, '107.172.128.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-056). ');
$ax += cidrblock($address, '107.172.136.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-057). ');
$ax += cidrblock($address, '107.172.138.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-058). ');
$ax += cidrblock($address, '107.172.140.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-059). ');
$ax += cidrblock($address, '107.172.144.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-060). ');
$ax += cidrblock($address, '107.172.149.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-061). ');
$ax += cidrblock($address, '107.172.150.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-062). ');
$ax += cidrblock($address, '107.172.152.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-063). ');
$ax += cidrblock($address, '107.172.154.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-064). ');
$ax += cidrblock($address, '107.172.158.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-065). ');
$ax += cidrblock($address, '107.172.160.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-066). ');
$ax += cidrblock($address, '107.172.192.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-067). ');
$ax += cidrblock($address, '107.173.0.0/16', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-068). ');
$ax += cidrblock($address, '107.174.0.0/17', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-069). ');
$ax += cidrblock($address, '107.174.128.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-070). ');
$ax += cidrblock($address, '107.174.192.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-071). ');
$ax += cidrblock($address, '107.174.224.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-072). ');
$ax += cidrblock($address, '107.174.240.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-073). ');
$ax += cidrblock($address, '107.174.252.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-074). ');
$ax += cidrblock($address, '107.175.0.0/17', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-075). ');
$ax += cidrblock($address, '107.175.128.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-076). ');
$ax += cidrblock($address, '107.175.192.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-077). ');
$ax += cidrblock($address, '107.175.224.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-078). ');
$ax += cidrblock($address, '107.175.240.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-079). ');
$ax += cidrblock($address, '107.175.248.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-080). ');
$ax += cidrblock($address, '107.175.253.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-081). ');
$ax += cidrblock($address, '107.175.254.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-082). ');
$ax += cidrblock($address, '108.174.48.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-083). ');
$ax += cidrblock($address, '138.128.112.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-084). ');
$ax += cidrblock($address, '162.218.88.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-085). ');
$ax += cidrblock($address, '162.221.176.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-086). ');
$ax += cidrblock($address, '172.87.240.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-087). ');
$ax += cidrblock($address, '172.102.160.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-088). ');
$ax += cidrblock($address, '172.245.0.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-089). ');
$ax += cidrblock($address, '172.245.32.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-090). ');
$ax += cidrblock($address, '172.245.50.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-091). ');
$ax += cidrblock($address, '172.245.52.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-092). ');
$ax += cidrblock($address, '172.245.56.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-093). ');
$ax += cidrblock($address, '172.245.64.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-094). ');
$ax += cidrblock($address, '172.245.128.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-095). ');
$ax += cidrblock($address, '172.245.160.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-096). ');
$ax += cidrblock($address, '172.245.167.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-097). ');
$ax += cidrblock($address, '172.245.168.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-098). ');
$ax += cidrblock($address, '172.245.173.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-99). ');
$ax += cidrblock($address, '172.245.174.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-100). ');
$ax += cidrblock($address, '172.245.176.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-101). ');
$ax += cidrblock($address, '172.245.184.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-102). ');
$ax += cidrblock($address, '172.245.189.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-103). ');
$ax += cidrblock($address, '172.245.190.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-104). ');
$ax += cidrblock($address, '172.245.193.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-105). ');
$ax += cidrblock($address, '172.245.194.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-106). ');
$ax += cidrblock($address, '172.245.196.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-107). ');
$ax += cidrblock($address, '172.245.208.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-108). ');
$ax += cidrblock($address, '172.245.224.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-109). ');
$ax += cidrblock($address, '179.61.192.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-110). ');
$ax += cidrblock($address, '179.61.253.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-111). ');
$ax += cidrblock($address, '191.101.50.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-112). ');
$ax += cidrblock($address, '192.3.0.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-113). ');
$ax += cidrblock($address, '192.3.67.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-114). ');
$ax += cidrblock($address, '192.3.68.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-115). ');
$ax += cidrblock($address, '192.3.70.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-116). ');
$ax += cidrblock($address, '192.3.73.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-117). ');
$ax += cidrblock($address, '192.3.76.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-118). ');
$ax += cidrblock($address, '192.3.80.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-119). ');
$ax += cidrblock($address, '192.3.96.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-120). ');
$ax += cidrblock($address, '192.3.128.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-121). ');
$ax += cidrblock($address, '192.3.192.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-122). ');
$ax += cidrblock($address, '192.3.228.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-123). ');
$ax += cidrblock($address, '192.3.232.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-124). ');
$ax += cidrblock($address, '192.3.240.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-125). ');
$ax += cidrblock($address, '192.157.30.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-126). ');
$ax += cidrblock($address, '192.210.128.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-127). ');
$ax += cidrblock($address, '192.210.144.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-128). ');
$ax += cidrblock($address, '192.210.160.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-129). ');
$ax += cidrblock($address, '192.210.192.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-130). ');
$ax += cidrblock($address, '192.210.226.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-131). ');
$ax += cidrblock($address, '192.210.228.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-132). ');
$ax += cidrblock($address, '192.210.232.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-133). ');
$ax += cidrblock($address, '192.210.240.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-134). ');
$ax += cidrblock($address, '192.227.128.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-135). ');
$ax += cidrblock($address, '192.227.144.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-136). ');
$ax += cidrblock($address, '192.227.149.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-137). ');
$ax += cidrblock($address, '192.227.152.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-138). ');
$ax += cidrblock($address, '192.227.158.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-139). ');
$ax += cidrblock($address, '192.227.160.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-140). ');
$ax += cidrblock($address, '192.227.192.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-141). ');
$ax += cidrblock($address, '198.12.64.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-142). ');
$ax += cidrblock($address, '198.23.128.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-143). ');
$ax += cidrblock($address, '198.23.160.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-144). ');
$ax += cidrblock($address, '198.23.164.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-145). ');
$ax += cidrblock($address, '198.23.168.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-146). ');
$ax += cidrblock($address, '198.23.176.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-147). ');
$ax += cidrblock($address, '198.23.192.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-148). ');
$ax += cidrblock($address, '198.46.128.0/19', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-149). ');
$ax += cidrblock($address, '198.46.160.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-150). ');
$ax += cidrblock($address, '198.46.168.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-151). ');
$ax += cidrblock($address, '198.46.176.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-152). ');
$ax += cidrblock($address, '198.46.192.0/18', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-153). ');
$ax += cidrblock($address, '198.143.9.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-154). ');
$ax += cidrblock($address, '198.143.12.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-155). ');
$ax += cidrblock($address, '198.144.176.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-156). ');
$ax += cidrblock($address, '198.206.8.0/21', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-157). ');
$ax += cidrblock($address, '199.21.112.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-158). ');
$ax += cidrblock($address, '199.188.100.0/22', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-159). ');
$ax += cidrblock($address, '204.86.16.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-160). ');
$ax += cidrblock($address, '205.234.152.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-161). ');
$ax += cidrblock($address, '205.234.159.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-162). ');
$ax += cidrblock($address, '205.234.203.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-163). ');
$ax += cidrblock($address, '206.123.95.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-164). ');
$ax += cidrblock($address, '206.217.128.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-165). ');
$ax += cidrblock($address, '207.210.239.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-166). ');
$ax += cidrblock($address, '207.210.254.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-167). ');
$ax += cidrblock($address, '216.170.112.0/20', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-168). ');
$ax += cidrblock($address, '216.246.49.0/24', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-169). ');
$ax += cidrblock($address, '216.246.108.0/23', 'Colocrossing Network, not an access provider (ASN-36352-COLOCROSSING-170). ');


// Serveryou Network (updated 2016.01.22 / checked 2016.03.20)
// AS11282
$ax += cidrblock($address, '104.251.224.0/21', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-00). ');
$ax += cidrblock($address, '104.251.232.0/22', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-01). ');
$ax += cidrblock($address, '104.251.236.0/23', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-02). ');
$ax += cidrblock($address, '122.10.120.0/21', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-03). ');
$ax += cidrblock($address, '192.0.16.0/20', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-04). ');
$ax += cidrblock($address, '192.249.80.0/22', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-05). ');
$ax += cidrblock($address, '198.1.128.0/18', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-06). ');
$ax += cidrblock($address, '198.15.128.0/17', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-07). ');
$ax += cidrblock($address, '198.44.224.0/20', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-08). ');
$ax += cidrblock($address, '198.44.252.0/23', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-09). ');
$ax += cidrblock($address, '198.105.160.0/19', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-10). ');
$ax += cidrblock($address, '198.177.56.0/21', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-11). ');
$ax += cidrblock($address, '199.231.64.0/21', 'Serveryou Network, not an access provider (ASN-11282-SERVERYOU-12). ');


// Hostspace Networks
// AS26484 (updated 2016.06.09)
$ax += cidrblock($address, '23.226.54.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-00). ');
$ax += cidrblock($address, '23.226.57.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-01). ');
$ax += cidrblock($address, '23.234.0.0/19', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-02). ');
$ax += cidrblock($address, '23.234.32.0/21', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-03). ');
$ax += cidrblock($address, '23.234.48.0/21', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-04). ');
$ax += cidrblock($address, '23.234.60.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-05). ');
$ax += cidrblock($address, '23.235.165.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-06). ');
$ax += cidrblock($address, '23.235.170.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-07). ');
$ax += cidrblock($address, '23.248.198.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-08). ');
$ax += cidrblock($address, '23.248.201.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-09). ');
$ax += cidrblock($address, '23.248.202.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-10). ');
$ax += cidrblock($address, '23.248.205.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-11). ');
$ax += cidrblock($address, '23.248.206.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-12). ');
$ax += cidrblock($address, '23.248.227.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-13). ');
$ax += cidrblock($address, '23.248.242.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-14). ');
$ax += cidrblock($address, '23.252.160.0/20', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-15). ');
$ax += cidrblock($address, '43.228.232.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-16). ');
$ax += cidrblock($address, '43.230.112.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-17). ');
$ax += cidrblock($address, '43.230.140.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-18). ');
$ax += cidrblock($address, '43.230.144.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-19). ');
$ax += cidrblock($address, '45.61.240.0/20', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-20). ');
$ax += cidrblock($address, '66.102.253.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-21). ');
$ax += cidrblock($address, '98.159.100.0/23', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-22). ');
$ax += cidrblock($address, '103.41.184.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-23). ');
$ax += cidrblock($address, '103.47.240.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-24). ');
$ax += cidrblock($address, '103.49.156.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-25). ');
$ax += cidrblock($address, '103.49.208.0/21', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-26). ');
$ax += cidrblock($address, '103.53.7.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-27). ');
$ax += cidrblock($address, '162.211.180.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-28). ');
$ax += cidrblock($address, '162.212.180.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-29). ');
$ax += cidrblock($address, '162.251.92.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-30). ');
$ax += cidrblock($address, '192.126.112.0/21', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-31). ');
$ax += cidrblock($address, '192.126.120.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-32). ');
$ax += cidrblock($address, '192.126.126.0/23', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-33). ');
$ax += cidrblock($address, '192.151.230.0/23', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-34). ');
$ax += cidrblock($address, '198.44.248.0/22', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-35). ');
$ax += cidrblock($address, '198.177.127.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-36). ');
$ax += cidrblock($address, '207.254.182.0/24', 'Hostspace Networks, not an access provider (ASN-26484-HOSTSPACE-37). ');


// Connexions4London Ltd
// AS25577 (updated 2016.06.02)
$ax += cidrblock($address, '5.133.184.0/21', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-00). ');
$ax += cidrblock($address, '5.152.176.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-01). ');
$ax += cidrblock($address, '31.3.208.0/20', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-02). ');
$ax += cidrblock($address, '37.58.24.0/21', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-03). ');
$ax += cidrblock($address, '62.69.143.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-04). ');
$ax += cidrblock($address, '81.27.64.0/19', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-05). ');
$ax += cidrblock($address, '82.197.64.0/19', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-06). ');
$ax += cidrblock($address, '84.45.0.0/17', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-07). ');
$ax += cidrblock($address, '85.159.88.0/21', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-08). ');
$ax += cidrblock($address, '87.247.138.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-09). ');
$ax += cidrblock($address, '91.195.112.0/23', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-10). ');
$ax += cidrblock($address, '91.206.118.0/23', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-11). ');
$ax += cidrblock($address, '91.212.108.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-12). ');
$ax += cidrblock($address, '91.213.200.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-13). ');
$ax += cidrblock($address, '91.217.212.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-14). ');
$ax += cidrblock($address, '91.247.73.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-15). ');
$ax += cidrblock($address, '109.104.96.0/19', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-16). ');
$ax += cidrblock($address, '179.48.128.0/19', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-17). ');
$ax += cidrblock($address, '179.63.0.0/20', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-18). ');
$ax += cidrblock($address, '179.63.32.0/20', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-19). ');
$ax += cidrblock($address, '185.5.88.0/22', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-20). ');
$ax += cidrblock($address, '185.23.56.0/22', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-21). ');
$ax += cidrblock($address, '185.55.252.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-22). ');
$ax += cidrblock($address, '185.67.140.0/22', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-23). ');
$ax += cidrblock($address, '185.115.120.0/22', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-24). ');
$ax += cidrblock($address, '192.160.10.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-25). ');
$ax += cidrblock($address, '193.27.42.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-26). ');
$ax += cidrblock($address, '193.35.157.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-27). ');
$ax += cidrblock($address, '193.46.61.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-28). ');
$ax += cidrblock($address, '193.104.108.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-29). ');
$ax += cidrblock($address, '193.105.51.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-30). ');
$ax += cidrblock($address, '193.105.61.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-31). ');
$ax += cidrblock($address, '193.105.172.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-32). ');
$ax += cidrblock($address, '193.109.220.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-33). ');
$ax += cidrblock($address, '193.218.160.0/20', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-34). ');
$ax += cidrblock($address, '194.9.28.0/23', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-35). ');
$ax += cidrblock($address, '194.50.54.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-36). ');
$ax += cidrblock($address, '195.189.12.0/22', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-37). ');
$ax += cidrblock($address, '195.226.201.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-38). ');
$ax += cidrblock($address, '195.230.19.0/24', 'Connexions4London Ltd; Cloud services (ASN-25577-C4LND-39). ');


// SingleHop, Inc
// AS32475 (updated 2016.06.02)
$ax += cidrblock($address, '23.91.112.0/21', 'Singlehop Network (ASN-32475-SINGLEHOP-00). ');
$ax += cidrblock($address, '37.60.224.0/20', 'Singlehop Network (ASN-32475-SINGLEHOP-01). ');
$ax += cidrblock($address, '37.60.240.0/22', 'Singlehop Network (ASN-32475-SINGLEHOP-02). ');
$ax += cidrblock($address, '37.60.244.0/23', 'Singlehop Network (ASN-32475-SINGLEHOP-03). ');
$ax += cidrblock($address, '37.60.247.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-04). ');
$ax += cidrblock($address, '37.60.248.0/22', 'Singlehop Network (ASN-32475-SINGLEHOP-05). ');
$ax += cidrblock($address, '37.60.252.0/23', 'Singlehop Network (ASN-32475-SINGLEHOP-06). ');
$ax += cidrblock($address, '37.60.255.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-07). ');
$ax += cidrblock($address, '45.74.57.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-08). ');
$ax += cidrblock($address, '65.60.0.0/18', 'Singlehop Network (ASN-32475-SINGLEHOP-09). ');
$ax += cidrblock($address, '66.103.16.0/20', 'Singlehop Network (ASN-32475-SINGLEHOP-10). ');
$ax += cidrblock($address, '67.212.160.0/19', 'Singlehop Network (ASN-32475-SINGLEHOP-11). ');
$ax += cidrblock($address, '69.175.0.0/17', 'Singlehop Network (ASN-32475-SINGLEHOP-12). ');
$ax += cidrblock($address, '77.104.135.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-13). ');
$ax += cidrblock($address, '77.104.136.0/22', 'Singlehop Network (ASN-32475-SINGLEHOP-14). ');
$ax += cidrblock($address, '77.104.141.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-15). ');
$ax += cidrblock($address, '77.104.144.0/22', 'Singlehop Network (ASN-32475-SINGLEHOP-16). ');
$ax += cidrblock($address, '77.104.148.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-17). ');
$ax += cidrblock($address, '96.127.128.0/18', 'Singlehop Network (ASN-32475-SINGLEHOP-18). ');
$ax += cidrblock($address, '99.198.96.0/19', 'Singlehop Network (ASN-32475-SINGLEHOP-19). ');
$ax += cidrblock($address, '104.171.12.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-20). ');
$ax += cidrblock($address, '104.200.153.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-21). ');
$ax += cidrblock($address, '104.200.155.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-22). ');
$ax += cidrblock($address, '104.219.72.0/22', 'Singlehop Network (ASN-32475-SINGLEHOP-23). ');
$ax += cidrblock($address, '107.6.128.0/18', 'Singlehop Network (ASN-32475-SINGLEHOP-24). ');
$ax += cidrblock($address, '108.163.192.0/18', 'Singlehop Network (ASN-32475-SINGLEHOP-25). ');
$ax += cidrblock($address, '108.178.0.0/18', 'Singlehop Network (ASN-32475-SINGLEHOP-26). ');
$ax += cidrblock($address, '109.73.224.0/20', 'Singlehop Network (ASN-32475-SINGLEHOP-27). ');
$ax += cidrblock($address, '109.199.96.0/19', 'Singlehop Network (ASN-32475-SINGLEHOP-28). ');
$ax += cidrblock($address, '147.75.129.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-29). ');
$ax += cidrblock($address, '162.244.165.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-30). ');
$ax += cidrblock($address, '162.244.166.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-31). ');
$ax += cidrblock($address, '162.253.224.0/22', 'Singlehop Network (ASN-32475-SINGLEHOP-32). ');
$ax += cidrblock($address, '172.94.44.0/23', 'Singlehop Network (ASN-32475-SINGLEHOP-33). ');
$ax += cidrblock($address, '173.236.0.0/17', 'Singlehop Network (ASN-32475-SINGLEHOP-34). ');
$ax += cidrblock($address, '181.215.237.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-35). ');
$ax += cidrblock($address, '181.224.128.0/20', 'Singlehop Network (ASN-32475-SINGLEHOP-36). ');
$ax += cidrblock($address, '181.224.144.0/22', 'Singlehop Network (ASN-32475-SINGLEHOP-37). ');
$ax += cidrblock($address, '181.224.148.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-38). ');
$ax += cidrblock($address, '181.224.152.0/22', 'Singlehop Network (ASN-32475-SINGLEHOP-39). ');
$ax += cidrblock($address, '184.154.0.0/16', 'Singlehop Network (ASN-32475-SINGLEHOP-40). ');
$ax += cidrblock($address, '185.21.133.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-41). ');
$ax += cidrblock($address, '185.21.134.0/23', 'Singlehop Network (ASN-32475-SINGLEHOP-42). ');
$ax += cidrblock($address, '185.56.84.0/22', 'Singlehop Network (ASN-32475-SINGLEHOP-43). ');
$ax += cidrblock($address, '185.62.236.0/22', 'Singlehop Network (ASN-32475-SINGLEHOP-44). ');
$ax += cidrblock($address, '185.126.96.0/23', 'Singlehop Network (ASN-32475-SINGLEHOP-45). ');
$ax += cidrblock($address, '185.145.47.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-46). ');
$ax += cidrblock($address, '192.92.97.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-47). ');
$ax += cidrblock($address, '198.20.64.0/18', 'Singlehop Network (ASN-32475-SINGLEHOP-48). ');
$ax += cidrblock($address, '198.91.80.0/20', 'Singlehop Network (ASN-32475-SINGLEHOP-49). ');
$ax += cidrblock($address, '198.143.128.0/18', 'Singlehop Network (ASN-32475-SINGLEHOP-50). ');
$ax += cidrblock($address, '199.26.192.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-51). ');
$ax += cidrblock($address, '209.222.115.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-52). ');
$ax += cidrblock($address, '216.104.32.0/20', 'Singlehop Network (ASN-32475-SINGLEHOP-53). ');
$ax += cidrblock($address, '216.151.166.0/24', 'Singlehop Network (ASN-32475-SINGLEHOP-54). ');


// eUKhost LTD (updated 2016.01.22 / checked 2016.03.13)
// AS29550
$ax += cidrblock($address, '31.193.128.0/20', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-00). ');
$ax += cidrblock($address, '85.234.128.0/19', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-01). ');
$ax += cidrblock($address, '91.186.0.0/19', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-02). ');
$ax += cidrblock($address, '92.48.64.0/18', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-03). ');
$ax += cidrblock($address, '94.76.192.0/18', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-04). ');
$ax += cidrblock($address, '109.75.168.0/21', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-05). ');
$ax += cidrblock($address, '109.203.96.0/19', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-06). ');
$ax += cidrblock($address, '115.124.105.0/24', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-07). ');
$ax += cidrblock($address, '115.124.110.0/23', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-08). ');
$ax += cidrblock($address, '115.124.116.0/23', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-09). ');
$ax += cidrblock($address, '151.236.32.0/19', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-10). ');
$ax += cidrblock($address, '158.255.40.0/21', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-11). ');
$ax += cidrblock($address, '185.2.4.0/22', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-12). ');
$ax += cidrblock($address, '185.17.252.0/22', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-13). ');
$ax += cidrblock($address, '213.175.192.0/19', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-14). ');
$ax += cidrblock($address, '213.229.64.0/18', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-15). ');
$ax += cidrblock($address, '217.112.80.0/20', 'Cloud services linked to captcha crackers (ASN-29550-eUKhost-16). ');


// Total Web Solutions Ltd (updated 2016.01.22 / checked 2016.03.13)
// AS8669
$ax += cidrblock($address, '195.206.160.0/23', 'Cloud services linked to captcha crackers (ASN-8669-TOTALWEB-0). ');
$ax += cidrblock($address, '195.206.162.0/24', 'Cloud services linked to captcha crackers (ASN-8669-TOTALWEB-1). ');
$ax += cidrblock($address, '195.206.168.0/23', 'Cloud services linked to captcha crackers (ASN-8669-TOTALWEB-2). ');


// Pulsant (Scotland) Ltd (updated 2016.05.22)
// AS12703
$ax += cidrblock($address, '5.153.64.0/19', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-00). ');
$ax += cidrblock($address, '5.172.152.0/21', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-01). ');
$ax += cidrblock($address, '31.170.120.0/21', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-02). ');
$ax += cidrblock($address, '37.75.232.0/22', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-03). ');
$ax += cidrblock($address, '37.75.236.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-04). ');
$ax += cidrblock($address, '46.249.192.0/19', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-05). ');
$ax += cidrblock($address, '84.19.224.0/19', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-06). ');
$ax += cidrblock($address, '87.246.64.0/18', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-07). ');
$ax += cidrblock($address, '91.103.216.0/21', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-08). ');
$ax += cidrblock($address, '91.186.28.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-09). ');
$ax += cidrblock($address, '91.198.3.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-10). ');
$ax += cidrblock($address, '91.207.50.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-11). ');
$ax += cidrblock($address, '91.209.178.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-12). ');
$ax += cidrblock($address, '91.228.251.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-13). ');
$ax += cidrblock($address, '91.230.168.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-14). ');
$ax += cidrblock($address, '91.238.160.0/22', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-15). ');
$ax += cidrblock($address, '91.238.164.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-16). ');
$ax += cidrblock($address, '91.239.73.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-17). ');
$ax += cidrblock($address, '91.241.0.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-18). ');
$ax += cidrblock($address, '91.244.126.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-19). ');
$ax += cidrblock($address, '94.126.120.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-20). ');
$ax += cidrblock($address, '185.10.200.0/22', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-21). ');
$ax += cidrblock($address, '185.28.90.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-22). ');
$ax += cidrblock($address, '185.29.44.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-23). ');
$ax += cidrblock($address, '185.29.224.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-24). ');
$ax += cidrblock($address, '185.38.104.0/22', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-25). ');
$ax += cidrblock($address, '185.43.48.0/22', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-26). ');
$ax += cidrblock($address, '185.43.76.0/22', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-27). ');
$ax += cidrblock($address, '185.64.88.0/22', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-28). ');
$ax += cidrblock($address, '185.68.112.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-29). ');
$ax += cidrblock($address, '185.71.184.0/22', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-30). ');
$ax += cidrblock($address, '185.76.44.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-31). ');
$ax += cidrblock($address, '185.94.184.0/22', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-32). ');
$ax += cidrblock($address, '185.143.76.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-33). ');
$ax += cidrblock($address, '188.68.164.0/22', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-34). ');
$ax += cidrblock($address, '193.29.223.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-35). ');
$ax += cidrblock($address, '193.187.55.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-36). ');
$ax += cidrblock($address, '193.219.115.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-37). ');
$ax += cidrblock($address, '194.150.194.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-38). ');
$ax += cidrblock($address, '195.47.244.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-39). ');
$ax += cidrblock($address, '195.68.228.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-40). ');
$ax += cidrblock($address, '195.242.154.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-41). ');
$ax += cidrblock($address, '195.242.236.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-42). ');
$ax += cidrblock($address, '195.242.238.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-43). ');
$ax += cidrblock($address, '195.248.70.0/24', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-44). ');
$ax += cidrblock($address, '203.62.208.0/23', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-45). ');
$ax += cidrblock($address, '212.20.224.0/19', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-46). ');
$ax += cidrblock($address, '217.30.112.0/20', 'Cloud services linked to captcha crackers (ASN-12703-PULSANT-47). ');


// Private Layer INC (updated 2016.03.13)
// AS51852
$ax += cidrblock($address, '31.7.56.0/21', 'Private Layer INC (ASN-PRIVATELAYER-51852-00). ');
$ax += cidrblock($address, '31.44.189.0/24', 'Private Layer INC (ASN-PRIVATELAYER-51852-01). ');
$ax += cidrblock($address, '46.19.136.0/21', 'Private Layer INC (ASN-PRIVATELAYER-51852-02). ');
$ax += cidrblock($address, '46.102.152.0/24', 'Private Layer INC (ASN-PRIVATELAYER-51852-03). ');
$ax += cidrblock($address, '81.17.16.0/20', 'Private Layer INC (ASN-PRIVATELAYER-51852-04). ');
$ax += cidrblock($address, '141.255.160.0/21', 'Private Layer INC (ASN-PRIVATELAYER-51852-05). ');
$ax += cidrblock($address, '172.111.182.0/24', 'Private Layer INC (ASN-PRIVATELAYER-51852-06). ');
$ax += cidrblock($address, '176.223.111.0/24', 'Private Layer INC (ASN-PRIVATELAYER-51852-07). ');
$ax += cidrblock($address, '179.43.128.0/18', 'Private Layer INC (ASN-PRIVATELAYER-51852-08). ');
$ax += cidrblock($address, '185.12.44.0/22', 'Private Layer INC (ASN-PRIVATELAYER-51852-09). ');
$ax += cidrblock($address, '190.211.252.0/22', 'Private Layer INC (ASN-PRIVATELAYER-51852-10). ');


// PSYCHZ.NET (updated 2016.07.02)
// AS40676
$ax += cidrblock($address, '5.8.62.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-000). ');
$ax += cidrblock($address, '5.101.50.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-001). ');
$ax += cidrblock($address, '5.101.52.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-002). ');
$ax += cidrblock($address, '5.101.56.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-003). ');
$ax += cidrblock($address, '5.101.63.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-004). ');
$ax += cidrblock($address, '23.91.0.0/19', 'Not authorized to access this site (ASN-40676-PSYCHZ-005). ');
$ax += cidrblock($address, '23.228.192.0/18', 'Not authorized to access this site (ASN-40676-PSYCHZ-006). ');
$ax += cidrblock($address, '23.238.128.0/17', 'Not authorized to access this site (ASN-40676-PSYCHZ-007). ');
$ax += cidrblock($address, '23.251.32.0/19', 'Not authorized to access this site (ASN-40676-PSYCHZ-008). ');
$ax += cidrblock($address, '31.44.185.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-009). ');
$ax += cidrblock($address, '31.184.230.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-010). ');
$ax += cidrblock($address, '31.187.69.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-011). ');
$ax += cidrblock($address, '37.9.50.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-012). ');
$ax += cidrblock($address, '43.224.154.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-013). ');
$ax += cidrblock($address, '43.246.114.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-014). ');
$ax += cidrblock($address, '43.250.72.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-015). ');
$ax += cidrblock($address, '45.34.0.0/15', 'Not authorized to access this site (ASN-40676-PSYCHZ-016). ');
$ax += cidrblock($address, '45.58.61.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-017). ');
$ax += cidrblock($address, '45.59.112.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-018). ');
$ax += cidrblock($address, '45.74.1.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-019). ');
$ax += cidrblock($address, '45.74.5.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-020). ');
$ax += cidrblock($address, '45.74.6.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-021). ');
$ax += cidrblock($address, '45.74.8.0/21', 'Not authorized to access this site (ASN-40676-PSYCHZ-022). ');
$ax += cidrblock($address, '45.74.16.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-023). ');
$ax += cidrblock($address, '45.113.80.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-024). ');
$ax += cidrblock($address, '45.125.164.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-025). ');
$ax += cidrblock($address, '46.161.15.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-026). ');
$ax += cidrblock($address, '46.161.30.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-027). ');
$ax += cidrblock($address, '46.161.47.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-028). ');
$ax += cidrblock($address, '49.246.226.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-029). ');
$ax += cidrblock($address, '49.246.234.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-030). ');
$ax += cidrblock($address, '64.64.113.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-031). ');
$ax += cidrblock($address, '69.165.64.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-032). ');
$ax += cidrblock($address, '69.165.72.0/21', 'Not authorized to access this site (ASN-40676-PSYCHZ-033). ');
$ax += cidrblock($address, '74.117.56.0/21', 'Not authorized to access this site (ASN-40676-PSYCHZ-034). ');
$ax += cidrblock($address, '82.118.227.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-035). ');
$ax += cidrblock($address, '82.118.228.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-036). ');
$ax += cidrblock($address, '96.9.245.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-037). ');
$ax += cidrblock($address, '98.159.226.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-038). ');
$ax += cidrblock($address, '103.11.66.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-039). ');
$ax += cidrblock($address, '103.59.108.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-040). ');
$ax += cidrblock($address, '103.207.40.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-041). ');
$ax += cidrblock($address, '103.214.70.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-042). ');
$ax += cidrblock($address, '103.231.184.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-043). ');
$ax += cidrblock($address, '103.241.213.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-044). ');
$ax += cidrblock($address, '103.249.71.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-045). ');
$ax += cidrblock($address, '103.251.91.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-046). ');
$ax += cidrblock($address, '104.128.112.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-047). ');
$ax += cidrblock($address, '104.128.235.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-048). ');
$ax += cidrblock($address, '104.143.128.0/19', 'Not authorized to access this site (ASN-40676-PSYCHZ-049). ');
$ax += cidrblock($address, '104.149.0.0/16', 'Not authorized to access this site (ASN-40676-PSYCHZ-050). ');
$ax += cidrblock($address, '104.167.21.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-051). ');
$ax += cidrblock($address, '104.193.212.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-052). ');
$ax += cidrblock($address, '104.216.0.0/15', 'Not authorized to access this site (ASN-40676-PSYCHZ-053). ');
$ax += cidrblock($address, '104.244.152.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-054). ');
$ax += cidrblock($address, '104.244.157.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-055). ');
$ax += cidrblock($address, '104.250.127.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-056). ');
$ax += cidrblock($address, '104.250.166.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-057). ');
$ax += cidrblock($address, '104.250.168.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-058). ');
$ax += cidrblock($address, '104.250.170.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-059). ');
$ax += cidrblock($address, '104.250.181.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-060). ');
$ax += cidrblock($address, '104.250.184.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-061). ');
$ax += cidrblock($address, '104.250.186.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-062). ');
$ax += cidrblock($address, '104.254.56.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-063). ');
$ax += cidrblock($address, '104.254.62.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-064). ');
$ax += cidrblock($address, '104.254.188.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-065). ');
$ax += cidrblock($address, '107.151.192.0/18', 'Not authorized to access this site (ASN-40676-PSYCHZ-066). ');
$ax += cidrblock($address, '107.160.0.0/16', 'Not authorized to access this site (ASN-40676-PSYCHZ-067). ');
$ax += cidrblock($address, '107.178.144.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-068). ');
$ax += cidrblock($address, '107.178.160.0/19', 'Not authorized to access this site (ASN-40676-PSYCHZ-069). ');
$ax += cidrblock($address, '107.181.134.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-070). ');
$ax += cidrblock($address, '107.190.226.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-071). ');
$ax += cidrblock($address, '107.190.228.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-072). ');
$ax += cidrblock($address, '108.171.240.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-073). ');
$ax += cidrblock($address, '123.108.128.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-074). ');
$ax += cidrblock($address, '136.0.111.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-075). ');
$ax += cidrblock($address, '138.122.225.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-076). ');
$ax += cidrblock($address, '138.122.227.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-077). ');
$ax += cidrblock($address, '141.95.4.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-078). ');
$ax += cidrblock($address, '142.147.88.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-079). ');
$ax += cidrblock($address, '144.48.80.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-080). ');
$ax += cidrblock($address, '144.48.82.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-081). ');
$ax += cidrblock($address, '144.172.68.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-082). ');
$ax += cidrblock($address, '146.148.128.0/19', 'Not authorized to access this site (ASN-40676-PSYCHZ-083). ');
$ax += cidrblock($address, '146.148.176.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-084). ');
$ax += cidrblock($address, '146.148.192.0/18', 'Not authorized to access this site (ASN-40676-PSYCHZ-085). ');
$ax += cidrblock($address, '146.185.220.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-086). ');
$ax += cidrblock($address, '150.242.36.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-087). ');
$ax += cidrblock($address, '154.16.120.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-088). ');
$ax += cidrblock($address, '154.16.164.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-089). ');
$ax += cidrblock($address, '154.16.204.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-090). ');
$ax += cidrblock($address, '154.16.207.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-091). ');
$ax += cidrblock($address, '154.16.209.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-092). ');
$ax += cidrblock($address, '154.16.211.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-093). ');
$ax += cidrblock($address, '154.16.252.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-094). ');
$ax += cidrblock($address, '154.127.53.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-095). ');
$ax += cidrblock($address, '162.250.140.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-096). ');
$ax += cidrblock($address, '162.253.209.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-097). ');
$ax += cidrblock($address, '162.253.210.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-098). ');
$ax += cidrblock($address, '162.253.212.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-99). ');
$ax += cidrblock($address, '167.160.84.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-100). ');
$ax += cidrblock($address, '172.81.100.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-101). ');
$ax += cidrblock($address, '172.81.104.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-102). ');
$ax += cidrblock($address, '172.86.148.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-103). ');
$ax += cidrblock($address, '172.93.121.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-104). ');
$ax += cidrblock($address, '172.94.23.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-105). ');
$ax += cidrblock($address, '172.94.24.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-106). ');
$ax += cidrblock($address, '172.94.26.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-107). ');
$ax += cidrblock($address, '172.94.31.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-108). ');
$ax += cidrblock($address, '172.94.32.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-109). ');
$ax += cidrblock($address, '172.94.34.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-110). ');
$ax += cidrblock($address, '172.94.36.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-111). ');
$ax += cidrblock($address, '172.94.38.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-112). ');
$ax += cidrblock($address, '172.97.64.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-113). ');
$ax += cidrblock($address, '172.97.66.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-114). ');
$ax += cidrblock($address, '172.98.213.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-115). ');
$ax += cidrblock($address, '172.106.0.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-116). ');
$ax += cidrblock($address, '172.106.16.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-117). ');
$ax += cidrblock($address, '172.106.20.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-118). ');
$ax += cidrblock($address, '172.106.24.0/21', 'Not authorized to access this site (ASN-40676-PSYCHZ-119). ');
$ax += cidrblock($address, '172.106.34.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-120). ');
$ax += cidrblock($address, '172.106.36.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-121). ');
$ax += cidrblock($address, '172.106.40.0/21', 'Not authorized to access this site (ASN-40676-PSYCHZ-122). ');
$ax += cidrblock($address, '172.106.48.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-123). ');
$ax += cidrblock($address, '172.106.64.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-124). ');
$ax += cidrblock($address, '172.106.80.0/21', 'Not authorized to access this site (ASN-40676-PSYCHZ-125). ');
$ax += cidrblock($address, '172.106.90.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-126). ');
$ax += cidrblock($address, '172.106.92.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-127). ');
$ax += cidrblock($address, '172.106.96.0/19', 'Not authorized to access this site (ASN-40676-PSYCHZ-128). ');
$ax += cidrblock($address, '172.106.128.0/18', 'Not authorized to access this site (ASN-40676-PSYCHZ-129). ');
$ax += cidrblock($address, '172.106.192.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-130). ');
$ax += cidrblock($address, '172.111.235.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-131). ');
$ax += cidrblock($address, '173.224.208.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-132). ');
$ax += cidrblock($address, '176.126.64.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-133). ');
$ax += cidrblock($address, '176.126.73.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-134). ');
$ax += cidrblock($address, '176.126.76.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-135). ');
$ax += cidrblock($address, '176.126.78.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-136). ');
$ax += cidrblock($address, '176.126.87.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-137). ');
$ax += cidrblock($address, '179.61.197.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-138). ');
$ax += cidrblock($address, '179.61.199.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-139). ');
$ax += cidrblock($address, '179.61.232.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-140). ');
$ax += cidrblock($address, '179.61.238.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-141). ');
$ax += cidrblock($address, '181.214.245.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-142). ');
$ax += cidrblock($address, '181.214.251.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-143). ');
$ax += cidrblock($address, '181.215.194.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-144). ');
$ax += cidrblock($address, '181.215.196.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-145). ');
$ax += cidrblock($address, '183.182.10.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-146). ');
$ax += cidrblock($address, '183.182.18.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-147). ');
$ax += cidrblock($address, '183.182.20.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-148). ');
$ax += cidrblock($address, '183.182.22.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-149). ');
$ax += cidrblock($address, '185.74.64.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-150). ');
$ax += cidrblock($address, '185.74.66.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-151). ');
$ax += cidrblock($address, '185.101.218.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-152). ');
$ax += cidrblock($address, '185.121.163.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-153). ');
$ax += cidrblock($address, '185.147.34.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-154). ');
$ax += cidrblock($address, '191.96.195.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-155). ');
$ax += cidrblock($address, '191.96.211.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-156). ');
$ax += cidrblock($address, '191.96.215.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-157). ');
$ax += cidrblock($address, '191.96.220.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-158). ');
$ax += cidrblock($address, '191.96.224.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-159). ');
$ax += cidrblock($address, '191.96.230.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-160). ');
$ax += cidrblock($address, '191.96.233.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-161). ');
$ax += cidrblock($address, '191.96.238.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-162). ');
$ax += cidrblock($address, '191.101.33.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-163). ');
$ax += cidrblock($address, '191.101.168.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-164). ');
$ax += cidrblock($address, '191.101.171.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-165). ');
$ax += cidrblock($address, '192.81.248.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-166). ');
$ax += cidrblock($address, '192.81.250.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-167). ');
$ax += cidrblock($address, '192.126.124.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-168). ');
$ax += cidrblock($address, '192.184.32.0/19', 'Not authorized to access this site (ASN-40676-PSYCHZ-169). ');
$ax += cidrblock($address, '192.209.63.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-170). ');
$ax += cidrblock($address, '192.210.48.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-171). ');
$ax += cidrblock($address, '198.13.96.0/19', 'Not authorized to access this site (ASN-40676-PSYCHZ-172). ');
$ax += cidrblock($address, '198.44.160.0/19', 'Not authorized to access this site (ASN-40676-PSYCHZ-173). ');
$ax += cidrblock($address, '199.15.112.0/21', 'Not authorized to access this site (ASN-40676-PSYCHZ-174). ');
$ax += cidrblock($address, '199.43.207.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-175). ');
$ax += cidrblock($address, '199.47.39.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-176). ');
$ax += cidrblock($address, '199.71.212.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-177). ');
$ax += cidrblock($address, '199.83.88.0/21', 'Not authorized to access this site (ASN-40676-PSYCHZ-178). ');
$ax += cidrblock($address, '199.119.200.0/21', 'Not authorized to access this site (ASN-40676-PSYCHZ-179). ');
$ax += cidrblock($address, '199.212.86.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-180). ');
$ax += cidrblock($address, '199.245.100.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-181). ');
$ax += cidrblock($address, '202.14.224.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-182). ');
$ax += cidrblock($address, '206.123.131.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-183). ');
$ax += cidrblock($address, '206.123.132.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-184). ');
$ax += cidrblock($address, '206.123.140.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-185). ');
$ax += cidrblock($address, '208.87.240.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-186). ');
$ax += cidrblock($address, '210.16.100.0/24', 'Not authorized to access this site (ASN-40676-PSYCHZ-187). ');
$ax += cidrblock($address, '211.155.64.0/23', 'Not authorized to access this site (ASN-40676-PSYCHZ-188). ');
$ax += cidrblock($address, '216.24.192.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-189). ');
$ax += cidrblock($address, '216.99.144.0/20', 'Not authorized to access this site (ASN-40676-PSYCHZ-190). ');
$ax += cidrblock($address, '218.246.140.0/22', 'Not authorized to access this site (ASN-40676-PSYCHZ-191). ');


// ALNET-AS PP SKS-Lugan (updated 2016.04.25)
// AS35804
$ax += cidrblock($address, '91.200.12.0/22', 'ALNET SKS-Lugan (AS-35804-ALNET-0). ');
$ax += cidrblock($address, '91.202.212.0/22', 'ALNET SKS-Lugan (AS-35804-ALNET-1). ');
$ax += cidrblock($address, '91.210.31.0/24', 'ALNET SKS-Lugan (AS-35804-ALNET-2). ');
$ax += cidrblock($address, '193.110.144.0/24', 'ALNET SKS-Lugan (AS-35804-ALNET-3). ');
$ax += cidrblock($address, '193.110.168.0/23', 'ALNET SKS-Lugan (AS-35804-ALNET-4). ');
$ax += cidrblock($address, '194.79.60.0/22', 'ALNET SKS-Lugan (AS-35804-ALNET-5). ');
$ax += cidrblock($address, '194.145.220.0/23', 'ALNET SKS-Lugan (AS-35804-ALNET-6). ');
$ax += cidrblock($address, '213.111.128.0/18', 'ALNET SKS-Lugan (AS-35804-ALNET-7). ');


// MTS-INDIA-IN (updated 2016.01.22 / checked 2016.03.13)
// Allows spammer botnets to run wild on it's 116.202.0.0/15 block, possibly more.
// AS131222
$ax += cidrblock($address, '103.18.64.0/22', 'MTS-INDIA (ASN-131222-00). ');
$ax += cidrblock($address, '116.202.0.0/19', 'MTS-INDIA (ASN-131222-01). ');
$ax += cidrblock($address, '116.202.32.0/20', 'MTS-INDIA (ASN-131222-02). ');
$ax += cidrblock($address, '116.202.48.0/21', 'MTS-INDIA (ASN-131222-03). ');
$ax += cidrblock($address, '116.202.64.0/18', 'MTS-INDIA (ASN-131222-04). ');
$ax += cidrblock($address, '116.202.128.0/17', 'MTS-INDIA (ASN-131222-05). ');
$ax += cidrblock($address, '116.203.0.0/16', 'MTS-INDIA (ASN-131222-06). ');
$ax += cidrblock($address, '163.47.12.0/22', 'MTS-INDIA (ASN-131222-07). ');
$ax += cidrblock($address, '180.149.32.0/22', 'MTS-INDIA (ASN-131222-08). ');
$ax += cidrblock($address, '180.149.40.0/22', 'MTS-INDIA (ASN-131222-09). ');
$ax += cidrblock($address, '180.215.0.0/16', 'MTS-INDIA (ASN-131222-10). ');


// Versaweb, LLC
// AS36114 (updated 2016.04.03)
$ax += cidrblock($address, '72.46.128.0/19', 'Versaweb, LLC (ASN-36114-VERSAWEB-00). ');
$ax += cidrblock($address, '76.164.192.0/19', 'Versaweb, LLC (ASN-36114-VERSAWEB-01). ');
$ax += cidrblock($address, '76.164.224.0/21', 'Versaweb, LLC (ASN-36114-VERSAWEB-02). ');
$ax += cidrblock($address, '76.164.232.0/23', 'Versaweb, LLC (ASN-36114-VERSAWEB-03). ');
$ax += cidrblock($address, '76.164.236.0/22', 'Versaweb, LLC (ASN-36114-VERSAWEB-04). ');
$ax += cidrblock($address, '104.36.224.0/21', 'Versaweb, LLC (ASN-36114-VERSAWEB-05). ');
$ax += cidrblock($address, '104.143.0.0/20', 'Versaweb, LLC (ASN-36114-VERSAWEB-06). ');
$ax += cidrblock($address, '104.194.0.0/19', 'Versaweb, LLC (ASN-36114-VERSAWEB-07). ');
$ax += cidrblock($address, '104.238.192.0/18', 'Versaweb, LLC (ASN-36114-VERSAWEB-08). ');
$ax += cidrblock($address, '162.216.176.0/22', 'Versaweb, LLC (ASN-36114-VERSAWEB-09). ');
$ax += cidrblock($address, '162.220.247.0/24', 'Versaweb, LLC (ASN-36114-VERSAWEB-10). ');
$ax += cidrblock($address, '162.222.128.0/21', 'Versaweb, LLC (ASN-36114-VERSAWEB-11). ');
$ax += cidrblock($address, '162.255.180.0/22', 'Versaweb, LLC (ASN-36114-VERSAWEB-12). ');
$ax += cidrblock($address, '172.96.128.0/19', 'Versaweb, LLC (ASN-36114-VERSAWEB-13). ');
$ax += cidrblock($address, '208.64.24.0/21', 'Versaweb, LLC (ASN-36114-VERSAWEB-14). ');
$ax += cidrblock($address, '208.66.72.0/21', 'Versaweb, LLC (ASN-36114-VERSAWEB-15). ');


// DataWagon LLC
// AS27176 (updated 2016.06.09)
$ax += cidrblock($address, '1.3.3.0/24', 'DataWagon LLC; Access denied (ASN-27176-DATAWAGON-0). ');
$ax += cidrblock($address, '45.119.208.0/22', 'DataWagon LLC; Access denied (ASN-27176-DATAWAGON-1). ');
$ax += cidrblock($address, '103.60.12.0/22', 'DataWagon LLC; Access denied (ASN-27176-DATAWAGON-2). ');
$ax += cidrblock($address, '104.192.0.0/22', 'DataWagon LLC; Access denied (ASN-27176-DATAWAGON-3). ');
$ax += cidrblock($address, '104.219.232.0/21', 'DataWagon LLC; Access denied (ASN-27176-DATAWAGON-4). ');
$ax += cidrblock($address, '172.81.128.0/21', 'DataWagon LLC; Access denied (ASN-27176-DATAWAGON-5). ');
$ax += cidrblock($address, '209.66.128.0/20', 'DataWagon LLC; Access denied (ASN-27176-DATAWAGON-6). ');


// VolumeDrive
// AS46664 (updated 2016.06.09)
$ax += cidrblock($address, '74.118.192.0/22', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-00). ');
$ax += cidrblock($address, '104.37.44.0/22', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-01). ');
$ax += cidrblock($address, '104.193.8.0/22', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-02). ');
$ax += cidrblock($address, '104.245.96.0/21', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-03). ');
$ax += cidrblock($address, '104.255.64.0/21', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-04). ');
$ax += cidrblock($address, '107.182.16.0/20', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-05). ');
$ax += cidrblock($address, '142.0.32.0/21', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-06). ');
$ax += cidrblock($address, '142.0.40.0/22', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-07). ');
$ax += cidrblock($address, '142.0.44.0/23', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-08). ');
$ax += cidrblock($address, '142.0.46.0/24', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-09). ');
$ax += cidrblock($address, '162.213.24.0/21', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-10). ');
$ax += cidrblock($address, '162.248.72.0/21', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-11). ');
$ax += cidrblock($address, '173.242.112.0/20', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-12). ');
$ax += cidrblock($address, '192.69.88.0/21', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-13). ');
$ax += cidrblock($address, '199.19.104.0/21', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-14). ');
$ax += cidrblock($address, '199.115.228.0/22', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-15). ');
$ax += cidrblock($address, '199.168.136.0/21', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-16). ');
$ax += cidrblock($address, '199.180.112.0/21', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-17). ');
$ax += cidrblock($address, '199.254.168.0/24', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-18). ');
$ax += cidrblock($address, '204.124.180.0/22', 'VolumeDrive; Access denied (ASN-46664-VOLUMEDRIVE-19). ');


// WorldStream
// AS49981 (updated 2016.05.21)
$ax += cidrblock($address, '86.105.18.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-00). ');
$ax += cidrblock($address, '89.42.212.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-01). ');
$ax += cidrblock($address, '91.193.75.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-02). ');
$ax += cidrblock($address, '91.212.229.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-03). ');
$ax += cidrblock($address, '91.226.31.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-04). ');
$ax += cidrblock($address, '91.227.154.0/23', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-05). ');
$ax += cidrblock($address, '91.229.23.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-06). ');
$ax += cidrblock($address, '91.232.105.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-07). ');
$ax += cidrblock($address, '93.119.123.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-08). ');
$ax += cidrblock($address, '93.170.77.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-09). ');
$ax += cidrblock($address, '93.190.136.0/21', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-10). ');
$ax += cidrblock($address, '94.177.12.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-11). ');
$ax += cidrblock($address, '95.156.251.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-12). ');
$ax += cidrblock($address, '103.44.75.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-13). ');
$ax += cidrblock($address, '109.236.80.0/20', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-14). ');
$ax += cidrblock($address, '154.16.17.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-15). ');
$ax += cidrblock($address, '176.61.129.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-16). ');
$ax += cidrblock($address, '185.2.80.0/22', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-17). ');
$ax += cidrblock($address, '185.28.38.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-18). ');
$ax += cidrblock($address, '185.73.112.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-19). ');
$ax += cidrblock($address, '185.81.98.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-20). ');
$ax += cidrblock($address, '185.94.29.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-21). ');
$ax += cidrblock($address, '185.105.192.0/22', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-22). ');
$ax += cidrblock($address, '185.119.254.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-23). ');
$ax += cidrblock($address, '191.101.243.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-24). ');
$ax += cidrblock($address, '191.101.250.0/23', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-25). ');
$ax += cidrblock($address, '192.71.151.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-26). ');
$ax += cidrblock($address, '192.76.138.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-27). ');
$ax += cidrblock($address, '193.30.245.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-28). ');
$ax += cidrblock($address, '193.200.164.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-29). ');
$ax += cidrblock($address, '195.128.184.0/23', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-30). ');
$ax += cidrblock($address, '198.105.117.0/24', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-31). ');
$ax += cidrblock($address, '217.23.0.0/20', 'Worldstream; Access denied (ASN-49981-WORLDSTREAM-32). ');


// UOL (updated 2016.06.09)
// AS7162
$ax += cidrblock($address, '186.234.0.0/18', 'AS7162, attacked SbS (ASN-7162-UOL-00). ');
$ax += cidrblock($address, '186.234.64.0/20', 'AS7162, attacked SbS (ASN-7162-UOL-01). ');
$ax += cidrblock($address, '186.234.127.0/24', 'AS7162, attacked SbS (ASN-7162-UOL-02). ');
$ax += cidrblock($address, '186.234.128.0/18', 'AS7162, attacked SbS (ASN-7162-UOL-03). ');
$ax += cidrblock($address, '186.234.195.0/24', 'AS7162, attacked SbS (ASN-7162-UOL-04). ');
$ax += cidrblock($address, '186.234.196.0/24', 'AS7162, attacked SbS (ASN-7162-UOL-05). ');
$ax += cidrblock($address, '186.234.211.0/24', 'AS7162, attacked SbS (ASN-7162-UOL-06). ');
$ax += cidrblock($address, '187.17.64.0/18', 'AS7162, attacked SbS (ASN-7162-UOL-07). ');
$ax += cidrblock($address, '189.38.56.0/21', 'AS7162, attacked SbS (ASN-7162-UOL-08). ');
$ax += cidrblock($address, '200.98.0.0/16', 'AS7162, attacked SbS (ASN-7162-UOL-09). ');
$ax += cidrblock($address, '200.147.0.0/16', 'AS7162, attacked SbS (ASN-7162-UOL-10). ');
$ax += cidrblock($address, '200.187.192.0/18', 'AS7162, attacked SbS (ASN-7162-UOL-11). ');
$ax += cidrblock($address, '200.221.0.0/16', 'AS7162, attacked SbS (ASN-7162-UOL-12). ');
$ax += cidrblock($address, '201.85.123.0/24', 'AS7162, attacked SbS (ASN-7162-UOL-13). ');


// Choopa, LLC
// AS20473 (updated 2016.06.17)
$ax += cidrblock($address, '4.79.145.0/24', 'Choopa Networks (ASN-20473-CHOOPA-000). ');
$ax += cidrblock($address, '8.2.0.0/24', 'Choopa Networks (ASN-20473-CHOOPA-001). ');
$ax += cidrblock($address, '8.2.120.0/23', 'Choopa Networks (ASN-20473-CHOOPA-002). ');
$ax += cidrblock($address, '8.2.122.0/24', 'Choopa Networks (ASN-20473-CHOOPA-003). ');
$ax += cidrblock($address, '8.3.5.0/24', 'Choopa Networks (ASN-20473-CHOOPA-004). ');
$ax += cidrblock($address, '8.3.6.0/23', 'Choopa Networks (ASN-20473-CHOOPA-005). ');
$ax += cidrblock($address, '8.3.28.0/23', 'Choopa Networks (ASN-20473-CHOOPA-006). ');
$ax += cidrblock($address, '8.6.2.0/23', 'Choopa Networks (ASN-20473-CHOOPA-007). ');
$ax += cidrblock($address, '8.6.8.0/23', 'Choopa Networks (ASN-20473-CHOOPA-008). ');
$ax += cidrblock($address, '8.6.15.0/24', 'Choopa Networks (ASN-20473-CHOOPA-009). ');
$ax += cidrblock($address, '8.6.193.0/24', 'Choopa Networks (ASN-20473-CHOOPA-010). ');
$ax += cidrblock($address, '8.7.233.0/24', 'Choopa Networks (ASN-20473-CHOOPA-011). ');
$ax += cidrblock($address, '8.9.3.0/24', 'Choopa Networks (ASN-20473-CHOOPA-012). ');
$ax += cidrblock($address, '8.9.4.0/23', 'Choopa Networks (ASN-20473-CHOOPA-013). ');
$ax += cidrblock($address, '8.9.6.0/24', 'Choopa Networks (ASN-20473-CHOOPA-014). ');
$ax += cidrblock($address, '8.9.8.0/23', 'Choopa Networks (ASN-20473-CHOOPA-015). ');
$ax += cidrblock($address, '8.9.11.0/24', 'Choopa Networks (ASN-20473-CHOOPA-016). ');
$ax += cidrblock($address, '8.9.15.0/24', 'Choopa Networks (ASN-20473-CHOOPA-017). ');
$ax += cidrblock($address, '8.9.16.0/23', 'Choopa Networks (ASN-20473-CHOOPA-018). ');
$ax += cidrblock($address, '8.9.30.0/23', 'Choopa Networks (ASN-20473-CHOOPA-019). ');
$ax += cidrblock($address, '8.9.36.0/23', 'Choopa Networks (ASN-20473-CHOOPA-020). ');
$ax += cidrblock($address, '8.12.16.0/21', 'Choopa Networks (ASN-20473-CHOOPA-021). ');
$ax += cidrblock($address, '8.12.64.0/23', 'Choopa Networks (ASN-20473-CHOOPA-022). ');
$ax += cidrblock($address, '8.12.68.0/24', 'Choopa Networks (ASN-20473-CHOOPA-023). ');
$ax += cidrblock($address, '8.18.92.0/23', 'Choopa Networks (ASN-20473-CHOOPA-024). ');
$ax += cidrblock($address, '43.224.32.0/22', 'Choopa Networks (ASN-20473-CHOOPA-025). ');
$ax += cidrblock($address, '44.34.96.0/24', 'Choopa Networks (ASN-20473-CHOOPA-026). ');
$ax += cidrblock($address, '45.32.0.0/18', 'Choopa Networks (ASN-20473-CHOOPA-027). ');
$ax += cidrblock($address, '45.32.64.0/19', 'Choopa Networks (ASN-20473-CHOOPA-028). ');
$ax += cidrblock($address, '45.32.128.0/17', 'Choopa Networks (ASN-20473-CHOOPA-029). ');
$ax += cidrblock($address, '45.43.2.0/23', 'Choopa Networks (ASN-20473-CHOOPA-030). ');
$ax += cidrblock($address, '45.43.10.0/23', 'Choopa Networks (ASN-20473-CHOOPA-031). ');
$ax += cidrblock($address, '45.43.14.0/23', 'Choopa Networks (ASN-20473-CHOOPA-032). ');
$ax += cidrblock($address, '45.43.18.0/23', 'Choopa Networks (ASN-20473-CHOOPA-033). ');
$ax += cidrblock($address, '45.43.20.0/24', 'Choopa Networks (ASN-20473-CHOOPA-034). ');
$ax += cidrblock($address, '45.56.148.0/23', 'Choopa Networks (ASN-20473-CHOOPA-035). ');
$ax += cidrblock($address, '45.58.112.0/20', 'Choopa Networks (ASN-20473-CHOOPA-036). ');
$ax += cidrblock($address, '45.59.17.0/24', 'Choopa Networks (ASN-20473-CHOOPA-037). ');
$ax += cidrblock($address, '45.59.23.0/24', 'Choopa Networks (ASN-20473-CHOOPA-038). ');
$ax += cidrblock($address, '45.63.0.0/19', 'Choopa Networks (ASN-20473-CHOOPA-039). ');
$ax += cidrblock($address, '45.63.32.0/21', 'Choopa Networks (ASN-20473-CHOOPA-040). ');
$ax += cidrblock($address, '45.63.40.0/22', 'Choopa Networks (ASN-20473-CHOOPA-041). ');
$ax += cidrblock($address, '45.63.45.0/24', 'Choopa Networks (ASN-20473-CHOOPA-042). ');
$ax += cidrblock($address, '45.63.48.0/20', 'Choopa Networks (ASN-20473-CHOOPA-043). ');
$ax += cidrblock($address, '45.63.64.0/18', 'Choopa Networks (ASN-20473-CHOOPA-044). ');
$ax += cidrblock($address, '45.76.0.0/15', 'Choopa Networks (ASN-20473-CHOOPA-045). ');
$ax += cidrblock($address, '45.117.156.0/22', 'Choopa Networks (ASN-20473-CHOOPA-046). ');
$ax += cidrblock($address, '45.126.208.0/22', 'Choopa Networks (ASN-20473-CHOOPA-047). ');
$ax += cidrblock($address, '62.67.42.0/24', 'Choopa Networks (ASN-20473-CHOOPA-048). ');
$ax += cidrblock($address, '63.208.142.0/24', 'Choopa Networks (ASN-20473-CHOOPA-049). ');
$ax += cidrblock($address, '63.209.32.0/22', 'Choopa Networks (ASN-20473-CHOOPA-050). ');
$ax += cidrblock($address, '63.209.36.0/23', 'Choopa Networks (ASN-20473-CHOOPA-051). ');
$ax += cidrblock($address, '63.210.145.0/24', 'Choopa Networks (ASN-20473-CHOOPA-052). ');
$ax += cidrblock($address, '63.210.148.0/23', 'Choopa Networks (ASN-20473-CHOOPA-053). ');
$ax += cidrblock($address, '63.211.105.0/24', 'Choopa Networks (ASN-20473-CHOOPA-054). ');
$ax += cidrblock($address, '63.211.110.0/23', 'Choopa Networks (ASN-20473-CHOOPA-055). ');
$ax += cidrblock($address, '63.211.221.0/24', 'Choopa Networks (ASN-20473-CHOOPA-056). ');
$ax += cidrblock($address, '63.215.74.0/24', 'Choopa Networks (ASN-20473-CHOOPA-057). ');
$ax += cidrblock($address, '64.154.38.0/24', 'Choopa Networks (ASN-20473-CHOOPA-058). ');
$ax += cidrblock($address, '64.156.14.0/24', 'Choopa Networks (ASN-20473-CHOOPA-059). ');
$ax += cidrblock($address, '64.237.32.0/19', 'Choopa Networks (ASN-20473-CHOOPA-060). ');
$ax += cidrblock($address, '66.11.112.0/24', 'Choopa Networks (ASN-20473-CHOOPA-061). ');
$ax += cidrblock($address, '66.11.114.0/24', 'Choopa Networks (ASN-20473-CHOOPA-062). ');
$ax += cidrblock($address, '66.11.116.0/24', 'Choopa Networks (ASN-20473-CHOOPA-063). ');
$ax += cidrblock($address, '66.55.128.0/19', 'Choopa Networks (ASN-20473-CHOOPA-064). ');
$ax += cidrblock($address, '68.232.160.0/19', 'Choopa Networks (ASN-20473-CHOOPA-065). ');
$ax += cidrblock($address, '85.190.153.0/24', 'Choopa Networks (ASN-20473-CHOOPA-066). ');
$ax += cidrblock($address, '85.203.21.0/24', 'Choopa Networks (ASN-20473-CHOOPA-067). ');
$ax += cidrblock($address, '89.167.134.0/24', 'Choopa Networks (ASN-20473-CHOOPA-068). ');
$ax += cidrblock($address, '103.43.72.0/22', 'Choopa Networks (ASN-20473-CHOOPA-069). ');
$ax += cidrblock($address, '103.195.100.0/22', 'Choopa Networks (ASN-20473-CHOOPA-070). ');
$ax += cidrblock($address, '103.214.69.0/24', 'Choopa Networks (ASN-20473-CHOOPA-071). ');
$ax += cidrblock($address, '103.236.149.0/24', 'Choopa Networks (ASN-20473-CHOOPA-072). ');
$ax += cidrblock($address, '104.156.224.0/19', 'Choopa Networks (ASN-20473-CHOOPA-073). ');
$ax += cidrblock($address, '104.207.128.0/19', 'Choopa Networks (ASN-20473-CHOOPA-074). ');
$ax += cidrblock($address, '104.238.128.0/18', 'Choopa Networks (ASN-20473-CHOOPA-075). ');
$ax += cidrblock($address, '104.243.32.0/20', 'Choopa Networks (ASN-20473-CHOOPA-076). ');
$ax += cidrblock($address, '104.250.164.0/24', 'Choopa Networks (ASN-20473-CHOOPA-077). ');
$ax += cidrblock($address, '104.250.188.0/24', 'Choopa Networks (ASN-20473-CHOOPA-078). ');
$ax += cidrblock($address, '104.251.85.0/24', 'Choopa Networks (ASN-20473-CHOOPA-079). ');
$ax += cidrblock($address, '104.251.91.0/24', 'Choopa Networks (ASN-20473-CHOOPA-080). ');
$ax += cidrblock($address, '104.255.224.0/24', 'Choopa Networks (ASN-20473-CHOOPA-081). ');
$ax += cidrblock($address, '104.255.226.0/24', 'Choopa Networks (ASN-20473-CHOOPA-082). ');
$ax += cidrblock($address, '104.255.228.0/24', 'Choopa Networks (ASN-20473-CHOOPA-083). ');
$ax += cidrblock($address, '104.255.230.0/24', 'Choopa Networks (ASN-20473-CHOOPA-084). ');
$ax += cidrblock($address, '107.181.69.0/24', 'Choopa Networks (ASN-20473-CHOOPA-085). ');
$ax += cidrblock($address, '107.181.148.0/24', 'Choopa Networks (ASN-20473-CHOOPA-086). ');
$ax += cidrblock($address, '107.191.32.0/19', 'Choopa Networks (ASN-20473-CHOOPA-087). ');
$ax += cidrblock($address, '108.61.0.0/18', 'Choopa Networks (ASN-20473-CHOOPA-088). ');
$ax += cidrblock($address, '108.61.64.0/19', 'Choopa Networks (ASN-20473-CHOOPA-089). ');
$ax += cidrblock($address, '108.61.96.0/22', 'Choopa Networks (ASN-20473-CHOOPA-090). ');
$ax += cidrblock($address, '108.61.100.0/23', 'Choopa Networks (ASN-20473-CHOOPA-091). ');
$ax += cidrblock($address, '108.61.103.0/24', 'Choopa Networks (ASN-20473-CHOOPA-092). ');
$ax += cidrblock($address, '108.61.104.0/21', 'Choopa Networks (ASN-20473-CHOOPA-093). ');
$ax += cidrblock($address, '108.61.112.0/20', 'Choopa Networks (ASN-20473-CHOOPA-094). ');
$ax += cidrblock($address, '108.61.128.0/19', 'Choopa Networks (ASN-20473-CHOOPA-095). ');
$ax += cidrblock($address, '108.61.160.0/20', 'Choopa Networks (ASN-20473-CHOOPA-096). ');
$ax += cidrblock($address, '108.61.176.0/21', 'Choopa Networks (ASN-20473-CHOOPA-097). ');
$ax += cidrblock($address, '108.61.184.0/23', 'Choopa Networks (ASN-20473-CHOOPA-098). ');
$ax += cidrblock($address, '108.61.188.0/22', 'Choopa Networks (ASN-20473-CHOOPA-99). ');
$ax += cidrblock($address, '108.61.192.0/19', 'Choopa Networks (ASN-20473-CHOOPA-100). ');
$ax += cidrblock($address, '108.61.224.0/20', 'Choopa Networks (ASN-20473-CHOOPA-101). ');
$ax += cidrblock($address, '108.61.240.0/22', 'Choopa Networks (ASN-20473-CHOOPA-102). ');
$ax += cidrblock($address, '108.61.245.0/24', 'Choopa Networks (ASN-20473-CHOOPA-103). ');
$ax += cidrblock($address, '108.61.246.0/23', 'Choopa Networks (ASN-20473-CHOOPA-104). ');
$ax += cidrblock($address, '108.61.249.0/24', 'Choopa Networks (ASN-20473-CHOOPA-105). ');
$ax += cidrblock($address, '108.61.250.0/23', 'Choopa Networks (ASN-20473-CHOOPA-106). ');
$ax += cidrblock($address, '108.61.252.0/22', 'Choopa Networks (ASN-20473-CHOOPA-107). ');
$ax += cidrblock($address, '144.208.126.0/23', 'Choopa Networks (ASN-20473-CHOOPA-110). ');
$ax += cidrblock($address, '154.16.216.0/24', 'Choopa Networks (ASN-20473-CHOOPA-111). ');
$ax += cidrblock($address, '157.97.120.0/24', 'Choopa Networks (ASN-20473-CHOOPA-112). ');
$ax += cidrblock($address, '162.220.219.0/24', 'Choopa Networks (ASN-20473-CHOOPA-113). ');
$ax += cidrblock($address, '162.253.176.0/24', 'Choopa Networks (ASN-20473-CHOOPA-114). ');
$ax += cidrblock($address, '172.86.144.0/24', 'Choopa Networks (ASN-20473-CHOOPA-115). ');
$ax += cidrblock($address, '172.93.96.0/20', 'Choopa Networks (ASN-20473-CHOOPA-116). ');
$ax += cidrblock($address, '172.94.37.0/24', 'Choopa Networks (ASN-20473-CHOOPA-117). ');
$ax += cidrblock($address, '172.94.40.0/23', 'Choopa Networks (ASN-20473-CHOOPA-118). ');
$ax += cidrblock($address, '172.98.210.0/24', 'Choopa Networks (ASN-20473-CHOOPA-119). ');
$ax += cidrblock($address, '172.98.215.0/24', 'Choopa Networks (ASN-20473-CHOOPA-120). ');
$ax += cidrblock($address, '172.110.16.0/24', 'Choopa Networks (ASN-20473-CHOOPA-121). ');
$ax += cidrblock($address, '172.111.151.0/24', 'Choopa Networks (ASN-20473-CHOOPA-122). ');
$ax += cidrblock($address, '173.199.64.0/18', 'Choopa Networks (ASN-20473-CHOOPA-123). ');
$ax += cidrblock($address, '173.239.198.0/24', 'Choopa Networks (ASN-20473-CHOOPA-124). ');
$ax += cidrblock($address, '185.35.78.0/24', 'Choopa Networks (ASN-20473-CHOOPA-125). ');
$ax += cidrblock($address, '185.92.220.0/22', 'Choopa Networks (ASN-20473-CHOOPA-126). ');
$ax += cidrblock($address, '190.102.111.0/24', 'Choopa Networks (ASN-20473-CHOOPA-127). ');
$ax += cidrblock($address, '191.96.255.0/24', 'Choopa Networks (ASN-20473-CHOOPA-128). ');
$ax += cidrblock($address, '191.101.28.0/24', 'Choopa Networks (ASN-20473-CHOOPA-129). ');
$ax += cidrblock($address, '191.101.183.0/24', 'Choopa Networks (ASN-20473-CHOOPA-130). ');
$ax += cidrblock($address, '192.154.213.0/24', 'Choopa Networks (ASN-20473-CHOOPA-131). ');
$ax += cidrblock($address, '192.154.214.0/24', 'Choopa Networks (ASN-20473-CHOOPA-132). ');
$ax += cidrblock($address, '192.209.62.0/24', 'Choopa Networks (ASN-20473-CHOOPA-133). ');
$ax += cidrblock($address, '193.34.134.0/24', 'Choopa Networks (ASN-20473-CHOOPA-134). ');
$ax += cidrblock($address, '195.122.134.0/23', 'Choopa Networks (ASN-20473-CHOOPA-135). ');
$ax += cidrblock($address, '198.17.215.0/24', 'Choopa Networks (ASN-20473-CHOOPA-136). ');
$ax += cidrblock($address, '199.48.176.0/22', 'Choopa Networks (ASN-20473-CHOOPA-137). ');
$ax += cidrblock($address, '199.48.183.0/24', 'Choopa Networks (ASN-20473-CHOOPA-138). ');
$ax += cidrblock($address, '205.234.250.0/24', 'Choopa Networks (ASN-20473-CHOOPA-139). ');
$ax += cidrblock($address, '206.221.176.0/20', 'Choopa Networks (ASN-20473-CHOOPA-140). ');
$ax += cidrblock($address, '208.167.224.0/19', 'Choopa Networks (ASN-20473-CHOOPA-141). ');
$ax += cidrblock($address, '209.182.110.0/24', 'Choopa Networks (ASN-20473-CHOOPA-142). ');
$ax += cidrblock($address, '209.222.0.0/20', 'Choopa Networks (ASN-20473-CHOOPA-143). ');
$ax += cidrblock($address, '209.222.16.0/21', 'Choopa Networks (ASN-20473-CHOOPA-144). ');
$ax += cidrblock($address, '209.222.24.0/22', 'Choopa Networks (ASN-20473-CHOOPA-145). ');
$ax += cidrblock($address, '209.222.29.0/24', 'Choopa Networks (ASN-20473-CHOOPA-146). ');
$ax += cidrblock($address, '209.222.30.0/24', 'Choopa Networks (ASN-20473-CHOOPA-147). ');
$ax += cidrblock($address, '209.222.96.0/20', 'Choopa Networks (ASN-20473-CHOOPA-148). ');
$ax += cidrblock($address, '209.246.142.0/23', 'Choopa Networks (ASN-20473-CHOOPA-149). ');
$ax += cidrblock($address, '209.247.83.0/24', 'Choopa Networks (ASN-20473-CHOOPA-150). ');
$ax += cidrblock($address, '212.187.208.0/23', 'Choopa Networks (ASN-20473-CHOOPA-151). ');
$ax += cidrblock($address, '212.187.246.0/23', 'Choopa Networks (ASN-20473-CHOOPA-152). ');
$ax += cidrblock($address, '216.155.128.0/19', 'Choopa Networks (ASN-20473-CHOOPA-153). ');
$ax += cidrblock($address, '217.163.10.0/23', 'Choopa Networks (ASN-20473-CHOOPA-154). ');
$ax += cidrblock($address, '217.163.22.0/23', 'Choopa Networks (ASN-20473-CHOOPA-155). ');
$ax += cidrblock($address, '217.163.24.0/21', 'Choopa Networks (ASN-20473-CHOOPA-156). ');


// Krypt Technologies
// Refer spambotsecurity.com/forum/viewtopic.php?f=7&t=3273
// AS35908 (updated 2016.07.09)
$ax += cidrblock($address, '23.91.192.0/19', 'Krypt Technologies (ASN-35908-KRYPT-00). ');
$ax += cidrblock($address, '23.251.0.0/19', 'Krypt Technologies (ASN-35908-KRYPT-01). ');
$ax += cidrblock($address, '66.186.32.0/19', 'Krypt Technologies (ASN-35908-KRYPT-02). ');
$ax += cidrblock($address, '67.43.144.0/20', 'Krypt Technologies (ASN-35908-KRYPT-03). ');
$ax += cidrblock($address, '67.198.128.0/17', 'Krypt Technologies (ASN-35908-KRYPT-04). ');
$ax += cidrblock($address, '67.229.0.0/16', 'Krypt Technologies (ASN-35908-KRYPT-05). ');
$ax += cidrblock($address, '74.222.128.0/18', 'Krypt Technologies (ASN-35908-KRYPT-06). ');
$ax += cidrblock($address, '96.62.0.0/16', 'Krypt Technologies (ASN-35908-KRYPT-07). ');
$ax += cidrblock($address, '98.126.0.0/16', 'Krypt Technologies (ASN-35908-KRYPT-08). ');
$ax += cidrblock($address, '100.43.128.0/18', 'Krypt Technologies (ASN-35908-KRYPT-09). ');
$ax += cidrblock($address, '103.233.81.0/24', 'Krypt Technologies (ASN-35908-KRYPT-10). ');
$ax += cidrblock($address, '104.200.192.0/19', 'Krypt Technologies (ASN-35908-KRYPT-11). ');
$ax += cidrblock($address, '107.6.192.0/18', 'Krypt Technologies (ASN-35908-KRYPT-12). ');
$ax += cidrblock($address, '110.34.128.0/17', 'Krypt Technologies (ASN-35908-KRYPT-13). ');
$ax += cidrblock($address, '146.82.146.0/23', 'Krypt Technologies (ASN-35908-KRYPT-14). ');
$ax += cidrblock($address, '173.214.0.0/17', 'Krypt Technologies (ASN-35908-KRYPT-15). ');
$ax += cidrblock($address, '174.139.0.0/16', 'Krypt Technologies (ASN-35908-KRYPT-16). ');
$ax += cidrblock($address, '184.75.176.0/20', 'Krypt Technologies (ASN-35908-KRYPT-17). ');
$ax += cidrblock($address, '184.83.0.0/16', 'Krypt Technologies (ASN-35908-KRYPT-18). ');
$ax += cidrblock($address, '184.164.192.0/19', 'Krypt Technologies (ASN-35908-KRYPT-19). ');
$ax += cidrblock($address, '192.155.160.0/20', 'Krypt Technologies (ASN-35908-KRYPT-20). ');
$ax += cidrblock($address, '192.174.96.0/19', 'Krypt Technologies (ASN-35908-KRYPT-21). ');
$ax += cidrblock($address, '192.250.192.0/20', 'Krypt Technologies (ASN-35908-KRYPT-22). ');
$ax += cidrblock($address, '192.250.240.0/20', 'Krypt Technologies (ASN-35908-KRYPT-23). ');
$ax += cidrblock($address, '198.61.96.0/19', 'Krypt Technologies (ASN-35908-KRYPT-24). ');
$ax += cidrblock($address, '209.11.240.0/20', 'Krypt Technologies (ASN-35908-KRYPT-25). ');


// Netinternet Bilgisayar ve Telekomunikasyon San. ve Tic. Ltd. Sti.
// Refer spambotsecurity.com/forum/viewtopic.php?f=7&t=3553
// AS51559 (updated 2016.05.21)
$ax += cidrblock($address, '31.192.208.0/21', 'ASN not permitted here (ASN-51559-00). ');
$ax += cidrblock($address, '89.43.28.0/22', 'ASN not permitted here (ASN-51559-01). ');
$ax += cidrblock($address, '91.227.4.0/23', 'ASN not permitted here (ASN-51559-02). ');
$ax += cidrblock($address, '91.227.6.0/24', 'ASN not permitted here (ASN-51559-03). ');
$ax += cidrblock($address, '91.229.35.0/24', 'ASN not permitted here (ASN-51559-04). ');
$ax += cidrblock($address, '91.229.44.0/23', 'ASN not permitted here (ASN-51559-05). ');
$ax += cidrblock($address, '94.102.0.0/20', 'ASN not permitted here (ASN-51559-06). ');
$ax += cidrblock($address, '95.173.160.0/19', 'ASN not permitted here (ASN-51559-07). ');
$ax += cidrblock($address, '159.253.32.0/20', 'ASN not permitted here (ASN-51559-08). ');
$ax += cidrblock($address, '185.83.144.0/22', 'ASN not permitted here (ASN-51559-09). ');
$ax += cidrblock($address, '185.95.84.0/22', 'ASN not permitted here (ASN-51559-10). ');
$ax += cidrblock($address, '185.106.208.0/22', 'ASN not permitted here (ASN-51559-11). ');
$ax += cidrblock($address, '185.126.216.0/23', 'ASN not permitted here (ASN-51559-12). ');
$ax += cidrblock($address, '185.146.88.0/22', 'ASN not permitted here (ASN-51559-13). ');
$ax += cidrblock($address, '185.149.100.0/22', 'ASN not permitted here (ASN-51559-14). ');


// Contabo GmbH (Cloud provider)
// AS51167 (updated 2016.07.09)
$ax += cidrblock($address, '5.189.128.0/18', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-00). ');
$ax += cidrblock($address, '37.139.52.0/24', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-01). ');
$ax += cidrblock($address, '79.143.176.0/20', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-02). ');
$ax += cidrblock($address, '80.241.208.0/20', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-03). ');
$ax += cidrblock($address, '91.194.90.0/23', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-04). ');
$ax += cidrblock($address, '91.198.138.0/24', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-05). ');
$ax += cidrblock($address, '91.205.172.0/22', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-06). ');
$ax += cidrblock($address, '95.212.0.0/17', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-07). ');
$ax += cidrblock($address, '95.212.208.0/20', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-08). ');
$ax += cidrblock($address, '95.212.224.0/19', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-09). ');
$ax += cidrblock($address, '173.212.192.0/18', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-10). ');
$ax += cidrblock($address, '177.85.96.0/24', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-11). ');
$ax += cidrblock($address, '177.85.101.0/24', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-12). ');
$ax += cidrblock($address, '177.85.102.0/23', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-13). ');
$ax += cidrblock($address, '178.238.224.0/20', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-14). ');
$ax += cidrblock($address, '185.2.100.0/22', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-15). ');
$ax += cidrblock($address, '185.36.64.0/22', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-16). ');
$ax += cidrblock($address, '193.34.144.0/23', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-17). ');
$ax += cidrblock($address, '193.37.152.0/24', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-18). ');
$ax += cidrblock($address, '193.164.131.0/24', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-19). ');
$ax += cidrblock($address, '193.164.132.0/23', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-20). ');
$ax += cidrblock($address, '193.200.241.0/24', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-21). ');
$ax += cidrblock($address, '196.54.8.0/24', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-22). ');
$ax += cidrblock($address, '213.136.64.0/19', 'Contabo GmbH, cloud provider (ASN-51167-CONTABO-23). ');


// AltusHost B.V. (Cloud provider)
// AS51430 (updated 2016.07.02)
$ax += cidrblock($address, '5.62.20.0/24', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-00). ');
$ax += cidrblock($address, '31.3.152.0/21', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-01). ');
$ax += cidrblock($address, '37.46.112.0/23', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-02). ');
$ax += cidrblock($address, '37.46.115.0/24', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-03). ');
$ax += cidrblock($address, '37.46.116.0/22', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-04). ');
$ax += cidrblock($address, '37.46.120.0/21', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-05). ');
$ax += cidrblock($address, '45.74.35.0/24', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-06). ');
$ax += cidrblock($address, '45.74.37.0/24', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-07). ');
$ax += cidrblock($address, '79.142.64.0/20', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-08). ');
$ax += cidrblock($address, '91.214.44.0/22', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-09). ');
$ax += cidrblock($address, '128.127.104.0/21', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-10). ');
$ax += cidrblock($address, '172.94.30.0/24', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-11). ');
$ax += cidrblock($address, '172.94.50.0/23', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-13). ');
$ax += cidrblock($address, '172.94.52.0/22', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-14). ');
$ax += cidrblock($address, '172.94.56.0/23', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-15). ');
$ax += cidrblock($address, '172.111.154.0/24', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-16). ');
$ax += cidrblock($address, '185.2.28.0/22', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-17). ');
$ax += cidrblock($address, '185.10.56.0/22', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-18). ');
$ax += cidrblock($address, '194.152.52.0/24', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-19). ');
$ax += cidrblock($address, '212.146.180.0/22', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-20). ');
$ax += cidrblock($address, '212.146.184.0/22', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-21). ');
$ax += cidrblock($address, '212.146.188.0/23', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-22). ');
$ax += cidrblock($address, '213.5.64.0/21', 'AltusHost B.V., cloud provider (ASN-51430-ALTUSHOST-23). ');


// Unit-IS Ltd.
// AS59564 (updated 2016.07.09)
$ax += cidrblock($address, '46.243.140.0/24', 'Unit-IS Banned, 10HiT-IC 3a6opoHeHo (ASN-59564-UNITIS-0). ');
$ax += cidrblock($address, '46.243.142.0/24', 'Unit-IS Banned, 10HiT-IC 3a6opoHeHo (ASN-59564-UNITIS-1). ');
$ax += cidrblock($address, '188.72.101.0/24', 'Unit-IS Banned, 10HiT-IC 3a6opoHeHo (ASN-59564-UNITIS-2). ');
$ax += cidrblock($address, '195.211.152.0/22', 'Unit-IS Banned, 10HiT-IC 3a6opoHeHo (ASN-59564-UNITIS-3). ');


// Siftlogic LLC (updated 77g / checked 2016.07.09)
$ax += cidrblock($address, '23.90.192.0/18', 'Siftlogic (NET-SIFT-0). ');
$ax += cidrblock($address, '192.119.48.0/20', 'Siftlogic (NET-SIFT-1). ');
$ax += cidrblock($address, '192.196.192.0/20', 'Siftlogic (NET-SIFT-2). ');


// INFOKOM Ltd
// AS48226 (updated 2016.03.10 / checked 2016.07.09)
$ax += cidrblock($address, '81.161.32.0/20', 'ASN not permitted here (ASN-48226-INFOKOM-00). ');
$ax += cidrblock($address, '91.241.68.0/23', 'ASN not permitted here (ASN-48226-INFOKOM-01). ');


// Total Server Solutions L.L.C.
// AS46562 (updated 2016.07.13)
$ax += cidrblock($address, '66.71.240.0/20', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-00). ');
$ax += cidrblock($address, '67.210.254.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-01). ');
$ax += cidrblock($address, '74.119.144.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-02). ');
$ax += cidrblock($address, '98.142.208.0/20', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-03). ');
$ax += cidrblock($address, '104.153.72.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-04). ');
$ax += cidrblock($address, '104.200.129.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-05). ');
$ax += cidrblock($address, '104.200.130.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-06). ');
$ax += cidrblock($address, '104.200.132.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-07). ');
$ax += cidrblock($address, '104.200.136.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-08). ');
$ax += cidrblock($address, '104.200.140.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-09). ');
$ax += cidrblock($address, '104.200.142.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-10). ');
$ax += cidrblock($address, '104.200.145.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-11). ');
$ax += cidrblock($address, '104.200.146.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-12). ');
$ax += cidrblock($address, '104.200.148.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-13). ');
$ax += cidrblock($address, '104.200.152.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-14). ');
$ax += cidrblock($address, '104.200.154.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-15). ');
$ax += cidrblock($address, '104.200.159.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-16). ');
$ax += cidrblock($address, '107.152.96.0/20', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-17). ');
$ax += cidrblock($address, '107.181.160.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-18). ');
$ax += cidrblock($address, '107.181.164.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-19). ');
$ax += cidrblock($address, '107.181.168.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-20). ');
$ax += cidrblock($address, '107.181.170.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-21). ');
$ax += cidrblock($address, '107.181.172.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-22). ');
$ax += cidrblock($address, '107.181.176.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-23). ');
$ax += cidrblock($address, '107.181.179.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-24). ');
$ax += cidrblock($address, '107.181.180.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-25). ');
$ax += cidrblock($address, '107.181.184.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-26). ');
$ax += cidrblock($address, '107.181.189.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-27). ');
$ax += cidrblock($address, '107.181.190.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-28). ');
$ax += cidrblock($address, '130.185.170.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-29). ');
$ax += cidrblock($address, '162.211.66.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-30). ');
$ax += cidrblock($address, '162.216.44.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-31). ');
$ax += cidrblock($address, '162.251.247.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-32). ');
$ax += cidrblock($address, '162.253.177.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-33). ');
$ax += cidrblock($address, '172.98.64.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-34). ');
$ax += cidrblock($address, '172.98.70.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-35). ');
$ax += cidrblock($address, '172.98.72.0/21', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-36). ');
$ax += cidrblock($address, '172.98.80.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-37). ');
$ax += cidrblock($address, '172.98.84.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-38). ');
$ax += cidrblock($address, '172.98.88.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-39). ');
$ax += cidrblock($address, '172.98.90.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-40). ');
$ax += cidrblock($address, '172.98.92.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-41). ');
$ax += cidrblock($address, '181.114.240.0/20', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-42). ');
$ax += cidrblock($address, '184.170.240.0/20', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-43). ');
$ax += cidrblock($address, '192.40.56.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-44). ');
$ax += cidrblock($address, '192.111.128.0/20', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-45). ');
$ax += cidrblock($address, '192.223.10.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-46). ');
$ax += cidrblock($address, '192.252.208.0/21', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-47). ');
$ax += cidrblock($address, '192.252.216.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-48). ');
$ax += cidrblock($address, '192.252.220.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-49). ');
$ax += cidrblock($address, '192.252.222.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-50). ');
$ax += cidrblock($address, '193.124.240.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-51). ');
$ax += cidrblock($address, '194.58.24.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-52). ');
$ax += cidrblock($address, '194.58.216.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-53). ');
$ax += cidrblock($address, '194.135.48.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-54). ');
$ax += cidrblock($address, '198.8.80.0/20', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-55). ');
$ax += cidrblock($address, '198.147.20.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-56). ');
$ax += cidrblock($address, '199.36.220.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-57). ');
$ax += cidrblock($address, '199.58.184.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-58). ');
$ax += cidrblock($address, '199.116.112.0/21', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-59). ');
$ax += cidrblock($address, '199.168.160.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-60). ');
$ax += cidrblock($address, '199.168.164.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-61). ');
$ax += cidrblock($address, '199.180.248.0/23', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-62). ');
$ax += cidrblock($address, '199.180.250.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-63). ');
$ax += cidrblock($address, '199.187.208.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-64). ');
$ax += cidrblock($address, '199.229.248.0/21', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-65). ');
$ax += cidrblock($address, '206.206.89.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-66). ');
$ax += cidrblock($address, '206.220.172.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-67). ');
$ax += cidrblock($address, '207.66.105.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-68). ');
$ax += cidrblock($address, '207.188.179.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-69). ');
$ax += cidrblock($address, '208.78.40.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-70). ');
$ax += cidrblock($address, '208.84.152.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-71). ');
$ax += cidrblock($address, '208.93.192.0/22', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-72). ');
$ax += cidrblock($address, '209.140.20.0/24', 'Total Server Solutions L.L.C; Access denied (ASN-46562-TOTALSERVER-73). ');


// RAM Host
// AS53841 (updated 2016.07.13)
$ax += cidrblock($address, '199.180.251.0/24', 'RAM Host; Access denied (ASN-53841-RAMHOST-0). ');
$ax += cidrblock($address, '199.180.252.0/23', 'RAM Host; Access denied (ASN-53841-RAMHOST-1). ');


// Micfo, LLC.
// AS53889 (updated 2016.05.26)
$ax += cidrblock($address, '8.29.120.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-000). ');
$ax += cidrblock($address, '23.232.128.0/17', 'Micfo; Cloud provider (ASN-53889-MICFO-001). ');
$ax += cidrblock($address, '23.247.128.0/17', 'Micfo; Cloud provider (ASN-53889-MICFO-002). ');
$ax += cidrblock($address, '24.235.4.0/23', 'Micfo; Cloud provider (ASN-53889-MICFO-003). ');
$ax += cidrblock($address, '45.41.7.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-004). ');
$ax += cidrblock($address, '45.41.44.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-005). ');
$ax += cidrblock($address, '45.41.48.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-006). ');
$ax += cidrblock($address, '45.41.60.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-007). ');
$ax += cidrblock($address, '45.42.191.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-008). ');
$ax += cidrblock($address, '45.42.237.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-09). ');
$ax += cidrblock($address, '45.59.131.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-010). ');
$ax += cidrblock($address, '45.59.156.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-011). ');
$ax += cidrblock($address, '45.59.186.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-012). ');
$ax += cidrblock($address, '45.61.33.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-013). ');
$ax += cidrblock($address, '45.61.37.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-014). ');
$ax += cidrblock($address, '45.61.42.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-015). ');
$ax += cidrblock($address, '45.61.46.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-016). ');
$ax += cidrblock($address, '45.62.35.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-017). ');
$ax += cidrblock($address, '45.62.47.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-018). ');
$ax += cidrblock($address, '45.62.55.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-019). ');
$ax += cidrblock($address, '45.62.61.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-020). ');
$ax += cidrblock($address, '52.119.3.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-021). ');
$ax += cidrblock($address, '64.85.24.0/22', 'Micfo; Cloud provider (ASN-53889-MICFO-022). ');
$ax += cidrblock($address, '66.133.72.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-023). ');
$ax += cidrblock($address, '66.171.32.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-024). ');
$ax += cidrblock($address, '67.17.32.0/20', 'Micfo; Cloud provider (ASN-53889-MICFO-025). ');
$ax += cidrblock($address, '69.161.192.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-026). ');
$ax += cidrblock($address, '72.35.240.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-027). ');
$ax += cidrblock($address, '104.37.2.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-028). ');
$ax += cidrblock($address, '104.37.7.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-029). ');
$ax += cidrblock($address, '104.128.138.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-030). ');
$ax += cidrblock($address, '104.143.218.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-031). ');
$ax += cidrblock($address, '104.156.208.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-032). ');
$ax += cidrblock($address, '104.207.64.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-033). ');
$ax += cidrblock($address, '104.222.132.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-034). ');
$ax += cidrblock($address, '104.224.28.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-035). ');
$ax += cidrblock($address, '104.237.88.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-036). ');
$ax += cidrblock($address, '104.243.240.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-037). ');
$ax += cidrblock($address, '104.243.242.0/23', 'Micfo; Cloud provider (ASN-53889-MICFO-038). ');
$ax += cidrblock($address, '104.243.244.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-039). ');
$ax += cidrblock($address, '104.243.247.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-040). ');
$ax += cidrblock($address, '104.247.7.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-041). ');
$ax += cidrblock($address, '104.247.21.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-042). ');
$ax += cidrblock($address, '104.247.99.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-043). ');
$ax += cidrblock($address, '104.247.121.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-044). ');
$ax += cidrblock($address, '104.249.139.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-045). ');
$ax += cidrblock($address, '104.250.165.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-046). ');
$ax += cidrblock($address, '104.250.167.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-047). ');
$ax += cidrblock($address, '104.250.169.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-048). ');
$ax += cidrblock($address, '104.250.173.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-049). ');
$ax += cidrblock($address, '104.250.176.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-050). ');
$ax += cidrblock($address, '104.250.187.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-051). ');
$ax += cidrblock($address, '104.250.191.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-052). ');
$ax += cidrblock($address, '104.250.226.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-053). ');
$ax += cidrblock($address, '104.250.231.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-054). ');
$ax += cidrblock($address, '104.250.246.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-055). ');
$ax += cidrblock($address, '107.153.0.0/16', 'Micfo; Cloud provider (ASN-53889-MICFO-056). ');
$ax += cidrblock($address, '107.168.0.0/15', 'Micfo; Cloud provider (ASN-53889-MICFO-057). ');
$ax += cidrblock($address, '135.84.208.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-058). ');
$ax += cidrblock($address, '144.208.116.0/22', 'Micfo; Cloud provider (ASN-53889-MICFO-059). ');
$ax += cidrblock($address, '144.208.120.0/22', 'Micfo; Cloud provider (ASN-53889-MICFO-060). ');
$ax += cidrblock($address, '146.88.192.0/22', 'Micfo; Cloud provider (ASN-53889-MICFO-061). ');
$ax += cidrblock($address, '148.59.232.0/22', 'Micfo; Cloud provider (ASN-53889-MICFO-062). ');
$ax += cidrblock($address, '155.254.111.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-063). ');
$ax += cidrblock($address, '155.254.203.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-064). ');
$ax += cidrblock($address, '165.84.224.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-065). ');
$ax += cidrblock($address, '172.94.42.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-066). ');
$ax += cidrblock($address, '172.94.65.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-067). ');
$ax += cidrblock($address, '172.110.149.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-068). ');
$ax += cidrblock($address, '172.110.150.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-069). ');
$ax += cidrblock($address, '172.111.133.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-070). ');
$ax += cidrblock($address, '172.111.169.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-071). ');
$ax += cidrblock($address, '173.44.31.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-072). ');
$ax += cidrblock($address, '192.64.24.0/22', 'Micfo; Cloud provider (ASN-53889-MICFO-073). ');
$ax += cidrblock($address, '192.69.248.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-074). ');
$ax += cidrblock($address, '192.77.240.0/20', 'Micfo; Cloud provider (ASN-53889-MICFO-075). ');
$ax += cidrblock($address, '192.144.133.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-076). ');
$ax += cidrblock($address, '192.144.134.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-077). ');
$ax += cidrblock($address, '192.171.24.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-078). ');
$ax += cidrblock($address, '192.171.224.0/19', 'Micfo; Cloud provider (ASN-53889-MICFO-079). ');
$ax += cidrblock($address, '192.200.16.0/20', 'Micfo; Cloud provider (ASN-53889-MICFO-080). ');
$ax += cidrblock($address, '192.230.32.0/19', 'Micfo; Cloud provider (ASN-53889-MICFO-081). ');
$ax += cidrblock($address, '192.240.192.0/18', 'Micfo; Cloud provider (ASN-53889-MICFO-082). ');
$ax += cidrblock($address, '192.255.64.0/18', 'Micfo; Cloud provider (ASN-53889-MICFO-083). ');
$ax += cidrblock($address, '198.22.224.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-084). ');
$ax += cidrblock($address, '198.52.32.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-085). ');
$ax += cidrblock($address, '199.189.248.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-086). ');
$ax += cidrblock($address, '199.223.116.0/22', 'Micfo; Cloud provider (ASN-53889-MICFO-087). ');
$ax += cidrblock($address, '199.241.120.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-088). ');
$ax += cidrblock($address, '204.62.120.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-089). ');
$ax += cidrblock($address, '205.234.120.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-090). ');
$ax += cidrblock($address, '206.144.64.0/22', 'Micfo; Cloud provider (ASN-53889-MICFO-091). ');
$ax += cidrblock($address, '206.144.68.0/23', 'Micfo; Cloud provider (ASN-53889-MICFO-092). ');
$ax += cidrblock($address, '206.144.71.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-093). ');
$ax += cidrblock($address, '206.144.72.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-094). ');
$ax += cidrblock($address, '206.144.80.0/20', 'Micfo; Cloud provider (ASN-53889-MICFO-095). ');
$ax += cidrblock($address, '206.144.161.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-096). ');
$ax += cidrblock($address, '206.144.162.0/23', 'Micfo; Cloud provider (ASN-53889-MICFO-097). ');
$ax += cidrblock($address, '206.144.164.0/22', 'Micfo; Cloud provider (ASN-53889-MICFO-098). ');
$ax += cidrblock($address, '206.144.168.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-99). ');
$ax += cidrblock($address, '206.144.176.0/20', 'Micfo; Cloud provider (ASN-53889-MICFO-100). ');
$ax += cidrblock($address, '206.144.192.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-101). ');
$ax += cidrblock($address, '206.144.208.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-102). ');
$ax += cidrblock($address, '206.225.132.0/22', 'Micfo; Cloud provider (ASN-53889-MICFO-103). ');
$ax += cidrblock($address, '207.89.16.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-104). ');
$ax += cidrblock($address, '208.87.164.0/23', 'Micfo; Cloud provider (ASN-53889-MICFO-105). ');
$ax += cidrblock($address, '209.161.110.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-106). ');
$ax += cidrblock($address, '209.251.249.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-107). ');
$ax += cidrblock($address, '213.159.14.0/23', 'Micfo; Cloud provider (ASN-53889-MICFO-108). ');
$ax += cidrblock($address, '216.99.219.0/24', 'Micfo; Cloud provider (ASN-53889-MICFO-109). ');
$ax += cidrblock($address, '216.162.40.0/21', 'Micfo; Cloud provider (ASN-53889-MICFO-110). ');


// MULTACOM CORPORATION
// AS35916 (updated 2016.04.03)
$ax += cidrblock($address, '23.234.192.0/18', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-00). ');
$ax += cidrblock($address, '23.236.72.0/24', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-01). ');
$ax += cidrblock($address, '23.236.78.0/23', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-02). ');
$ax += cidrblock($address, '38.98.34.0/23', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-03). ');
$ax += cidrblock($address, '38.106.52.0/24', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-04). ');
$ax += cidrblock($address, '45.199.0.0/16', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-05). ');
$ax += cidrblock($address, '64.27.0.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-06). ');
$ax += cidrblock($address, '64.69.32.0/20', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-07). ');
$ax += cidrblock($address, '66.152.160.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-08). ');
$ax += cidrblock($address, '72.44.64.0/20', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-09). ');
$ax += cidrblock($address, '96.43.80.0/20', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-10). ');
$ax += cidrblock($address, '96.45.160.0/20', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-11). ');
$ax += cidrblock($address, '100.42.64.0/20', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-12). ');
$ax += cidrblock($address, '103.249.2.0/24', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-13). ');
$ax += cidrblock($address, '103.251.46.0/24', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-14). ');
$ax += cidrblock($address, '104.194.224.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-15). ');
$ax += cidrblock($address, '107.150.192.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-16). ');
$ax += cidrblock($address, '108.166.192.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-17). ');
$ax += cidrblock($address, '130.222.0.0/16', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-18). ');
$ax += cidrblock($address, '154.81.0.0/16', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-19). ');
$ax += cidrblock($address, '154.82.0.0/15', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-20). ');
$ax += cidrblock($address, '154.84.0.0/14', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-21). ');
$ax += cidrblock($address, '154.88.0.0/16', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-22). ');
$ax += cidrblock($address, '154.90.0.0/16', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-23). ');
$ax += cidrblock($address, '154.92.0.0/14', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-24). ');
$ax += cidrblock($address, '156.232.0.0/13', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-25). ');
$ax += cidrblock($address, '162.219.224.0/22', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-26). ');
$ax += cidrblock($address, '170.178.192.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-27). ');
$ax += cidrblock($address, '173.82.0.0/16', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-28). ');
$ax += cidrblock($address, '178.236.228.0/22', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-29). ');
$ax += cidrblock($address, '198.52.96.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-30). ');
$ax += cidrblock($address, '198.74.96.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-31). ');
$ax += cidrblock($address, '198.148.96.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-32). ');
$ax += cidrblock($address, '198.177.122.0/23', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-33). ');
$ax += cidrblock($address, '198.211.0.0/18', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-34). ');
$ax += cidrblock($address, '204.13.152.0/22', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-35). ');
$ax += cidrblock($address, '204.15.72.0/21', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-36). ');
$ax += cidrblock($address, '206.125.40.0/21', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-37). ');
$ax += cidrblock($address, '208.64.224.0/21', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-38). ');
$ax += cidrblock($address, '208.70.72.0/21', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-39). ');
$ax += cidrblock($address, '208.162.36.0/22', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-40). ');
$ax += cidrblock($address, '208.162.40.0/24', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-41). ');
$ax += cidrblock($address, '216.24.240.0/20', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-42). ');
$ax += cidrblock($address, '216.127.160.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-43). ');
$ax += cidrblock($address, '216.240.128.0/19', 'MULTACOM CORPORATION (ASN-35916-MULTACOM-44). ');


// Rose Hosting
// AS6428 (updated 2016.04.03)
$ax += cidrblock($address, '64.39.224.0/20', 'Rose Hosting (ASN-6428-ROSE-00). ');
$ax += cidrblock($address, '199.102.166.0/24', 'Rose Hosting (ASN-6428-ROSE-01). ');
$ax += cidrblock($address, '205.159.194.0/24', 'Rose Hosting (ASN-6428-ROSE-02). ');
$ax += cidrblock($address, '205.242.92.0/23', 'Rose Hosting (ASN-6428-ROSE-03). ');
$ax += cidrblock($address, '205.242.176.0/20', 'Rose Hosting (ASN-6428-ROSE-04). ');
$ax += cidrblock($address, '206.196.96.0/19', 'Rose Hosting (ASN-6428-ROSE-05). ');
$ax += cidrblock($address, '206.197.251.0/24', 'Rose Hosting (ASN-6428-ROSE-06). ');
$ax += cidrblock($address, '206.225.0.0/19', 'Rose Hosting (ASN-6428-ROSE-07). ');
$ax += cidrblock($address, '207.244.192.0/18', 'Rose Hosting (ASN-6428-ROSE-08). ');
$ax += cidrblock($address, '208.16.24.0/21', 'Rose Hosting (ASN-6428-ROSE-09). ');
$ax += cidrblock($address, '208.19.224.0/20', 'Rose Hosting (ASN-6428-ROSE-10). ');
$ax += cidrblock($address, '209.16.202.0/23', 'Rose Hosting (ASN-6428-ROSE-11). ');
$ax += cidrblock($address, '209.126.0.0/18', 'Rose Hosting (ASN-6428-ROSE-12). ');
$ax += cidrblock($address, '209.126.64.0/19', 'Rose Hosting (ASN-6428-ROSE-13). ');
$ax += cidrblock($address, '209.135.128.0/19', 'Rose Hosting (ASN-6428-ROSE-14). ');
$ax += cidrblock($address, '209.144.40.0/22', 'Rose Hosting (ASN-6428-ROSE-15). ');
$ax += cidrblock($address, '209.145.32.0/19', 'Rose Hosting (ASN-6428-ROSE-16). ');
$ax += cidrblock($address, '209.223.72.0/22', 'Rose Hosting (ASN-6428-ROSE-17). ');
$ax += cidrblock($address, '209.223.90.0/23', 'Rose Hosting (ASN-6428-ROSE-18). ');
$ax += cidrblock($address, '209.223.92.0/23', 'Rose Hosting (ASN-6428-ROSE-19). ');
$ax += cidrblock($address, '216.87.32.0/19', 'Rose Hosting (ASN-6428-ROSE-20). ');
$ax += cidrblock($address, '216.88.184.0/21', 'Rose Hosting (ASN-6428-ROSE-21). ');
$ax += cidrblock($address, '216.89.144.0/22', 'Rose Hosting (ASN-6428-ROSE-22). ');
$ax += cidrblock($address, '216.89.168.0/21', 'Rose Hosting (ASN-6428-ROSE-23). ');
$ax += cidrblock($address, '216.114.64.0/20', 'Rose Hosting (ASN-6428-ROSE-24). ');


// Latisys-Irvine, LLC
// AS5693 (updated 2016.04.03)
$ax += cidrblock($address, '63.251.206.0/24', 'Latisys-Irvine (ASN-5693-LIRV-00). ');
$ax += cidrblock($address, '74.118.120.0/22', 'Latisys-Irvine (ASN-5693-LIRV-01). ');
$ax += cidrblock($address, '153.43.254.0/23', 'Latisys-Irvine (ASN-5693-LIRV-02). ');
$ax += cidrblock($address, '173.0.160.0/20', 'Latisys-Irvine (ASN-5693-LIRV-03). ');
$ax += cidrblock($address, '192.100.29.0/24', 'Latisys-Irvine (ASN-5693-LIRV-04). ');
$ax += cidrblock($address, '192.198.180.0/24', 'Latisys-Irvine (ASN-5693-LIRV-05). ');
$ax += cidrblock($address, '192.243.39.0/24', 'Latisys-Irvine (ASN-5693-LIRV-06). ');
$ax += cidrblock($address, '205.159.67.0/24', 'Latisys-Irvine (ASN-5693-LIRV-07). ');
$ax += cidrblock($address, '206.82.192.0/19', 'Latisys-Irvine (ASN-5693-LIRV-08). ');
$ax += cidrblock($address, '206.220.208.0/22', 'Latisys-Irvine (ASN-5693-LIRV-09). ');
$ax += cidrblock($address, '207.38.0.0/17', 'Latisys-Irvine (ASN-5693-LIRV-10). ');
$ax += cidrblock($address, '209.80.0.0/18', 'Latisys-Irvine (ASN-5693-LIRV-11). ');
$ax += cidrblock($address, '216.23.160.0/19', 'Latisys-Irvine (ASN-5693-LIRV-12). ');
$ax += cidrblock($address, '216.55.64.0/20', 'Latisys-Irvine (ASN-5693-LIRV-13). ');
$ax += cidrblock($address, '216.158.96.0/20', 'Latisys-Irvine (ASN-5693-LIRV-14). ');
$ax += cidrblock($address, '216.211.226.0/23', 'Latisys-Irvine (ASN-5693-LIRV-15). ');
$ax += cidrblock($address, '216.211.237.0/24', 'Latisys-Irvine (ASN-5693-LIRV-16). ');
$ax += cidrblock($address, '216.211.238.0/24', 'Latisys-Irvine (ASN-5693-LIRV-17). ');


// PCCW Global / Beyond The Network America, Inc
// AS3491, AS6279, AS7262 (updated 2016.07.20)
$ax += cidrblock($address, '23.32.176.0/20', 'PCCW Global (AS-PCCW-00). ');
$ax += cidrblock($address, '23.33.44.0/22', 'PCCW Global (AS-PCCW-01). ');
$ax += cidrblock($address, '23.33.80.0/20', 'PCCW Global (AS-PCCW-02). ');
$ax += cidrblock($address, '23.46.16.0/23', 'PCCW Global (AS-PCCW-03). ');
$ax += cidrblock($address, '23.60.78.0/23', 'PCCW Global (AS-PCCW-04). ');
$ax += cidrblock($address, '23.60.112.0/20', 'PCCW Global (AS-PCCW-05). ');
$ax += cidrblock($address, '23.60.128.0/20', 'PCCW Global (AS-PCCW-06). ');
$ax += cidrblock($address, '23.60.144.0/22', 'PCCW Global (AS-PCCW-07). ');
$ax += cidrblock($address, '41.79.244.0/22', 'PCCW Global (AS-PCCW-08). ');
$ax += cidrblock($address, '41.79.248.0/23', 'PCCW Global (AS-PCCW-09). ');
$ax += cidrblock($address, '41.221.208.0/20', 'PCCW Global (AS-PCCW-10). ');
$ax += cidrblock($address, '63.216.0.0/13', 'PCCW Global (AS-PCCW-11). ');
$ax += cidrblock($address, '65.72.0.0/18', 'PCCW Global (AS-PCCW-12). ');
$ax += cidrblock($address, '65.72.64.0/20', 'PCCW Global (AS-PCCW-13). ');
$ax += cidrblock($address, '69.1.80.0/24', 'PCCW Global (AS-PCCW-14). ');
$ax += cidrblock($address, '69.1.86.0/23', 'PCCW Global (AS-PCCW-15). ');
$ax += cidrblock($address, '69.1.88.0/24', 'PCCW Global (AS-PCCW-16). ');
$ax += cidrblock($address, '103.20.192.0/22', 'PCCW Global (AS-PCCW-17). ');
$ax += cidrblock($address, '104.95.20.0/22', 'PCCW Global (AS-PCCW-18). ');
$ax += cidrblock($address, '104.95.24.0/21', 'PCCW Global (AS-PCCW-19). ');
$ax += cidrblock($address, '104.95.32.0/19', 'PCCW Global (AS-PCCW-20). ');
$ax += cidrblock($address, '104.95.64.0/19', 'PCCW Global (AS-PCCW-21). ');
$ax += cidrblock($address, '104.99.60.0/22', 'PCCW Global (AS-PCCW-22). ');
$ax += cidrblock($address, '104.99.96.0/19', 'PCCW Global (AS-PCCW-23). ');
$ax += cidrblock($address, '104.99.128.0/23', 'PCCW Global (AS-PCCW-24). ');
$ax += cidrblock($address, '112.78.49.0/24', 'PCCW Global (AS-PCCW-25). ');
$ax += cidrblock($address, '112.121.42.0/24', 'PCCW Global (AS-PCCW-26). ');
$ax += cidrblock($address, '113.29.44.0/24', 'PCCW Global (AS-PCCW-27). ');
$ax += cidrblock($address, '116.66.216.0/21', 'PCCW Global (AS-PCCW-28). ');
$ax += cidrblock($address, '121.50.191.0/24', 'PCCW Global (AS-PCCW-29). ');
$ax += cidrblock($address, '122.10.203.0/24', 'PCCW Global (AS-PCCW-30). ');
$ax += cidrblock($address, '123.108.119.0/24', 'PCCW Global (AS-PCCW-31). ');
$ax += cidrblock($address, '146.222.18.0/24', 'PCCW Global (AS-PCCW-32). ');
$ax += cidrblock($address, '146.222.35.0/24', 'PCCW Global (AS-PCCW-33). ');
$ax += cidrblock($address, '146.222.187.0/24', 'PCCW Global (AS-PCCW-34). ');
$ax += cidrblock($address, '146.222.194.0/24', 'PCCW Global (AS-PCCW-35). ');
$ax += cidrblock($address, '149.134.175.0/24', 'PCCW Global (AS-PCCW-36). ');
$ax += cidrblock($address, '169.239.144.0/22', 'PCCW Global (AS-PCCW-37). ');
$ax += cidrblock($address, '192.221.77.0/24', 'PCCW Global (AS-PCCW-38). ');
$ax += cidrblock($address, '196.216.156.0/24', 'PCCW Global (AS-PCCW-39). ');
$ax += cidrblock($address, '198.69.128.0/20', 'PCCW Global (AS-PCCW-40). ');
$ax += cidrblock($address, '199.0.216.0/21', 'PCCW Global (AS-PCCW-41). ');
$ax += cidrblock($address, '202.183.39.0/24', 'PCCW Global (AS-PCCW-42). ');
$ax += cidrblock($address, '203.5.148.0/24', 'PCCW Global (AS-PCCW-43). ');
$ax += cidrblock($address, '203.30.26.0/23', 'PCCW Global (AS-PCCW-44). ');
$ax += cidrblock($address, '204.180.160.0/19', 'PCCW Global (AS-PCCW-45). ');
$ax += cidrblock($address, '205.161.96.0/20', 'PCCW Global (AS-PCCW-46). ');
$ax += cidrblock($address, '205.177.0.0/16', 'PCCW Global (AS-PCCW-47). ');
$ax += cidrblock($address, '205.252.0.0/16', 'PCCW Global (AS-PCCW-48). ');
$ax += cidrblock($address, '206.161.0.0/16', 'PCCW Global (AS-PCCW-49). ');
$ax += cidrblock($address, '207.176.0.0/17', 'PCCW Global (AS-PCCW-50). ');
$ax += cidrblock($address, '207.226.0.0/16', 'PCCW Global (AS-PCCW-51). ');
$ax += cidrblock($address, '209.8.0.0/15', 'PCCW Global (AS-PCCW-52). ');
$ax += cidrblock($address, '209.170.64.0/23', 'PCCW Global (AS-PCCW-53). ');
$ax += cidrblock($address, '213.248.118.0/23', 'PCCW Global (AS-PCCW-54). ');
$ax += cidrblock($address, '213.248.120.0/23', 'PCCW Global (AS-PCCW-55). ');
$ax += cidrblock($address, '217.113.64.0/19', 'PCCW Global (AS-PCCW-56). ');
$ax += cidrblock($address, '217.156.160.0/21', 'PCCW Global (AS-PCCW-57). ');


// Drake Holdings LLC
// AS62540 (updated 2016.04.25 / checked 2016.05.22)
$ax += cidrblock($address, '192.92.196.0/24', 'Drake Holdings; Access denied (ASN-62540-DRAKE-0). ');
$ax += cidrblock($address, '204.79.180.0/24', 'Drake Holdings; Access denied (ASN-62540-DRAKE-1). ');


// Sia Nano IT
// AS43513 (updated 2016.04.25)
$ax += cidrblock($address, '31.170.16.0/21', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-00). ');
$ax += cidrblock($address, '46.19.144.0/21', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-01). ');
$ax += cidrblock($address, '80.250.48.0/20', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-02). ');
$ax += cidrblock($address, '85.31.96.0/21', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-03). ');
$ax += cidrblock($address, '85.254.5.0/24', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-04). ');
$ax += cidrblock($address, '85.254.16.0/22', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-05). ');
$ax += cidrblock($address, '85.254.24.0/22', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-06). ');
$ax += cidrblock($address, '85.254.32.0/21', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-07). ');
$ax += cidrblock($address, '85.254.142.0/23', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-08). ');
$ax += cidrblock($address, '85.254.145.0/24', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-09). ');
$ax += cidrblock($address, '86.63.160.0/19', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-10). ');
$ax += cidrblock($address, '87.246.128.0/20', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-11). ');
$ax += cidrblock($address, '89.248.80.0/20', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-12). ');
$ax += cidrblock($address, '91.203.68.0/22', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-13). ');
$ax += cidrblock($address, '141.136.0.0/21', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-14). ');
$ax += cidrblock($address, '159.148.102.0/24', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-15). ');
$ax += cidrblock($address, '159.148.198.0/23', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-16). ');
$ax += cidrblock($address, '159.148.200.0/24', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-17). ');
$ax += cidrblock($address, '178.249.32.0/21', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-18). ');
$ax += cidrblock($address, '185.71.128.0/22', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-19). ');
$ax += cidrblock($address, '185.72.84.0/22', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-20). ');
$ax += cidrblock($address, '185.80.236.0/22', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-21). ');
$ax += cidrblock($address, '188.92.72.0/21', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-22). ');
$ax += cidrblock($address, '193.46.236.0/24', 'Sia Nano IT; Access denied (ASN-43513-SIANANO-23). ');


// Sharktech
// AS46844 (updated 2016.05.20)
$ax += cidrblock($address, '45.58.128.0/19', 'Sharktech; Access denied (ASN-46844-SHARKTECH-00). ');
$ax += cidrblock($address, '45.58.160.0/20', 'Sharktech; Access denied (ASN-46844-SHARKTECH-01). ');
$ax += cidrblock($address, '45.58.176.0/21', 'Sharktech; Access denied (ASN-46844-SHARKTECH-02). ');
$ax += cidrblock($address, '45.58.184.0/23', 'Sharktech; Access denied (ASN-46844-SHARKTECH-03). ');
$ax += cidrblock($address, '45.58.186.0/24', 'Sharktech; Access denied (ASN-46844-SHARKTECH-04). ');
$ax += cidrblock($address, '45.58.188.0/22', 'Sharktech; Access denied (ASN-46844-SHARKTECH-05). ');
$ax += cidrblock($address, '64.32.0.0/19', 'Sharktech; Access denied (ASN-46844-SHARKTECH-06). ');
$ax += cidrblock($address, '67.21.64.0/19', 'Sharktech; Access denied (ASN-46844-SHARKTECH-07). ');
$ax += cidrblock($address, '70.39.64.0/18', 'Sharktech; Access denied (ASN-46844-SHARKTECH-08). ');
$ax += cidrblock($address, '91.236.182.0/24', 'Sharktech; Access denied (ASN-46844-SHARKTECH-09). ');
$ax += cidrblock($address, '103.9.116.0/22', 'Sharktech; Access denied (ASN-46844-SHARKTECH-10). ');
$ax += cidrblock($address, '104.37.244.0/22', 'Sharktech; Access denied (ASN-46844-SHARKTECH-11). ');
$ax += cidrblock($address, '104.160.160.0/19', 'Sharktech; Access denied (ASN-46844-SHARKTECH-12). ');
$ax += cidrblock($address, '104.201.64.0/18', 'Sharktech; Access denied (ASN-46844-SHARKTECH-13). ');
$ax += cidrblock($address, '107.167.0.0/20', 'Sharktech; Access denied (ASN-46844-SHARKTECH-14). ');
$ax += cidrblock($address, '107.167.16.0/21', 'Sharktech; Access denied (ASN-46844-SHARKTECH-15). ');
$ax += cidrblock($address, '107.167.24.0/22', 'Sharktech; Access denied (ASN-46844-SHARKTECH-16). ');
$ax += cidrblock($address, '107.167.28.0/24', 'Sharktech; Access denied (ASN-46844-SHARKTECH-17). ');
$ax += cidrblock($address, '107.167.30.0/24', 'Sharktech; Access denied (ASN-46844-SHARKTECH-18). ');
$ax += cidrblock($address, '170.178.160.0/19', 'Sharktech; Access denied (ASN-46844-SHARKTECH-19). ');
$ax += cidrblock($address, '174.128.224.0/19', 'Sharktech; Access denied (ASN-46844-SHARKTECH-20). ');
$ax += cidrblock($address, '193.235.66.0/24', 'Sharktech; Access denied (ASN-46844-SHARKTECH-21). ');
$ax += cidrblock($address, '198.148.80.0/20', 'Sharktech; Access denied (ASN-46844-SHARKTECH-22). ');
$ax += cidrblock($address, '199.115.96.0/21', 'Sharktech; Access denied (ASN-46844-SHARKTECH-23). ');
$ax += cidrblock($address, '202.59.250.0/23', 'Sharktech; Access denied (ASN-46844-SHARKTECH-24). ');
$ax += cidrblock($address, '204.16.169.0/24', 'Sharktech; Access denied (ASN-46844-SHARKTECH-25). ');
$ax += cidrblock($address, '204.188.192.0/18', 'Sharktech; Access denied (ASN-46844-SHARKTECH-26). ');
$ax += cidrblock($address, '208.98.0.0/18', 'Sharktech; Access denied (ASN-46844-SHARKTECH-27). ');
$ax += cidrblock($address, '216.18.229.0/24', 'Sharktech; Access denied (ASN-46844-SHARKTECH-28). ');


// Sun Network (Hong Kong) Limited
// AS38197 (updated 2016.05.20)
$ax += cidrblock($address, '10.0.40.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-000). ');
$ax += cidrblock($address, '10.0.45.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-001). ');
$ax += cidrblock($address, '10.0.46.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-002). ');
$ax += cidrblock($address, '10.7.51.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-003). ');
$ax += cidrblock($address, '10.9.70.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-004). ');
$ax += cidrblock($address, '10.27.56.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-005). ');
$ax += cidrblock($address, '10.33.88.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-006). ');
$ax += cidrblock($address, '10.140.66.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-007). ');
$ax += cidrblock($address, '14.192.4.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-008). ');
$ax += cidrblock($address, '23.224.224.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-09). ');
$ax += cidrblock($address, '23.226.48.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-010). ');
$ax += cidrblock($address, '23.226.52.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-011). ');
$ax += cidrblock($address, '23.226.55.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-012). ');
$ax += cidrblock($address, '23.226.56.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-013). ');
$ax += cidrblock($address, '23.226.58.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-014). ');
$ax += cidrblock($address, '23.226.60.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-015). ');
$ax += cidrblock($address, '23.226.176.0/20', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-016). ');
$ax += cidrblock($address, '23.234.44.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-017). ');
$ax += cidrblock($address, '23.235.128.0/19', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-018). ');
$ax += cidrblock($address, '23.235.172.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-019). ');
$ax += cidrblock($address, '23.235.176.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-020). ');
$ax += cidrblock($address, '23.235.184.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-021). ');
$ax += cidrblock($address, '27.0.192.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-022). ');
$ax += cidrblock($address, '43.224.140.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-023). ');
$ax += cidrblock($address, '43.224.224.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-024). ');
$ax += cidrblock($address, '43.225.28.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-025). ');
$ax += cidrblock($address, '43.225.124.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-026). ');
$ax += cidrblock($address, '43.226.16.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-027). ');
$ax += cidrblock($address, '43.229.112.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-028). ');
$ax += cidrblock($address, '43.229.120.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-029). ');
$ax += cidrblock($address, '43.229.212.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-030). ');
$ax += cidrblock($address, '43.230.168.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-031). ');
$ax += cidrblock($address, '43.240.36.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-032). ');
$ax += cidrblock($address, '43.240.48.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-033). ');
$ax += cidrblock($address, '43.240.236.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-034). ');
$ax += cidrblock($address, '43.241.45.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-035). ');
$ax += cidrblock($address, '43.241.46.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-036). ');
$ax += cidrblock($address, '43.241.157.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-037). ');
$ax += cidrblock($address, '43.241.159.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-038). ');
$ax += cidrblock($address, '43.242.200.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-039). ');
$ax += cidrblock($address, '43.243.28.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-040). ');
$ax += cidrblock($address, '43.243.32.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-041). ');
$ax += cidrblock($address, '43.243.72.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-042). ');
$ax += cidrblock($address, '43.243.92.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-043). ');
$ax += cidrblock($address, '43.243.100.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-044). ');
$ax += cidrblock($address, '43.243.108.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-045). ');
$ax += cidrblock($address, '43.243.188.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-046). ');
$ax += cidrblock($address, '43.243.220.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-047). ');
$ax += cidrblock($address, '43.246.212.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-048). ');
$ax += cidrblock($address, '43.248.8.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-049). ');
$ax += cidrblock($address, '43.248.172.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-050). ');
$ax += cidrblock($address, '43.249.24.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-051). ');
$ax += cidrblock($address, '43.249.172.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-052). ');
$ax += cidrblock($address, '43.249.204.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-053). ');
$ax += cidrblock($address, '43.251.104.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-054). ');
$ax += cidrblock($address, '43.251.224.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-055). ');
$ax += cidrblock($address, '45.64.52.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-056). ');
$ax += cidrblock($address, '45.64.108.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-057). ');
$ax += cidrblock($address, '45.113.0.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-058). ');
$ax += cidrblock($address, '45.113.108.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-059). ');
$ax += cidrblock($address, '45.113.160.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-060). ');
$ax += cidrblock($address, '45.114.104.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-061). ');
$ax += cidrblock($address, '45.114.168.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-062). ');
$ax += cidrblock($address, '45.114.205.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-063). ');
$ax += cidrblock($address, '45.114.206.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-064). ');
$ax += cidrblock($address, '45.115.40.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-065). ');
$ax += cidrblock($address, '45.115.124.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-066). ');
$ax += cidrblock($address, '45.116.212.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-067). ');
$ax += cidrblock($address, '45.117.40.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-068). ');
$ax += cidrblock($address, '45.117.192.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-069). ');
$ax += cidrblock($address, '45.120.80.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-070). ');
$ax += cidrblock($address, '45.120.184.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-071). ');
$ax += cidrblock($address, '45.125.28.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-072). ');
$ax += cidrblock($address, '45.125.104.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-073). ');
$ax += cidrblock($address, '45.127.36.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-074). ');
$ax += cidrblock($address, '45.127.124.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-075). ');
$ax += cidrblock($address, '45.127.126.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-076). ');
$ax += cidrblock($address, '45.127.176.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-077). ');
$ax += cidrblock($address, '103.1.40.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-078). ');
$ax += cidrblock($address, '103.9.252.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-079). ');
$ax += cidrblock($address, '103.12.68.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-080). ');
$ax += cidrblock($address, '103.12.92.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-081). ');
$ax += cidrblock($address, '103.12.148.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-082). ');
$ax += cidrblock($address, '103.14.100.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-083). ');
$ax += cidrblock($address, '103.14.112.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-084). ');
$ax += cidrblock($address, '103.19.188.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-085). ');
$ax += cidrblock($address, '103.24.204.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-086). ');
$ax += cidrblock($address, '103.26.124.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-087). ');
$ax += cidrblock($address, '103.35.200.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-088). ');
$ax += cidrblock($address, '103.36.20.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-089). ');
$ax += cidrblock($address, '103.37.0.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-090). ');
$ax += cidrblock($address, '103.37.40.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-091). ');
$ax += cidrblock($address, '103.37.85.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-092). ');
$ax += cidrblock($address, '103.37.87.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-093). ');
$ax += cidrblock($address, '103.38.80.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-094). ');
$ax += cidrblock($address, '103.39.16.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-095). ');
$ax += cidrblock($address, '103.39.76.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-096). ');
$ax += cidrblock($address, '103.40.8.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-097). ');
$ax += cidrblock($address, '103.40.112.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-098). ');
$ax += cidrblock($address, '103.41.4.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-99). ');
$ax += cidrblock($address, '103.41.64.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-100). ');
$ax += cidrblock($address, '103.42.176.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-101). ');
$ax += cidrblock($address, '103.43.8.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-102). ');
$ax += cidrblock($address, '103.43.164.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-103). ');
$ax += cidrblock($address, '103.43.232.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-104). ');
$ax += cidrblock($address, '103.44.20.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-105). ');
$ax += cidrblock($address, '103.44.88.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-106). ');
$ax += cidrblock($address, '103.45.64.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-107). ');
$ax += cidrblock($address, '103.48.20.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-108). ');
$ax += cidrblock($address, '103.48.132.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-109). ');
$ax += cidrblock($address, '103.48.144.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-110). ');
$ax += cidrblock($address, '103.49.8.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-111). ');
$ax += cidrblock($address, '103.49.248.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-112). ');
$ax += cidrblock($address, '103.52.152.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-113). ');
$ax += cidrblock($address, '103.53.4.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-114). ');
$ax += cidrblock($address, '103.53.6.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-115). ');
$ax += cidrblock($address, '103.54.60.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-116). ');
$ax += cidrblock($address, '103.54.124.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-117). ');
$ax += cidrblock($address, '103.54.176.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-118). ');
$ax += cidrblock($address, '103.55.28.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-119). ');
$ax += cidrblock($address, '103.55.128.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-120). ');
$ax += cidrblock($address, '103.57.24.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-121). ');
$ax += cidrblock($address, '103.57.228.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-122). ');
$ax += cidrblock($address, '103.60.148.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-123). ');
$ax += cidrblock($address, '103.61.0.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-124). ');
$ax += cidrblock($address, '103.193.144.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-125). ');
$ax += cidrblock($address, '103.193.150.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-126). ');
$ax += cidrblock($address, '103.193.240.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-127). ');
$ax += cidrblock($address, '103.195.192.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-128). ');
$ax += cidrblock($address, '103.196.60.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-129). ');
$ax += cidrblock($address, '103.196.120.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-130). ');
$ax += cidrblock($address, '103.200.32.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-131). ');
$ax += cidrblock($address, '103.200.124.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-132). ');
$ax += cidrblock($address, '103.203.52.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-133). ');
$ax += cidrblock($address, '103.203.148.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-134). ');
$ax += cidrblock($address, '103.204.76.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-135). ');
$ax += cidrblock($address, '103.205.4.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-136). ');
$ax += cidrblock($address, '103.205.240.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-137). ');
$ax += cidrblock($address, '103.206.36.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-138). ');
$ax += cidrblock($address, '103.206.108.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-139). ');
$ax += cidrblock($address, '103.208.32.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-140). ');
$ax += cidrblock($address, '103.211.68.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-141). ');
$ax += cidrblock($address, '103.211.124.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-142). ');
$ax += cidrblock($address, '103.212.104.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-143). ');
$ax += cidrblock($address, '103.214.164.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-144). ');
$ax += cidrblock($address, '103.214.224.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-145). ');
$ax += cidrblock($address, '103.215.4.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-146). ');
$ax += cidrblock($address, '103.215.76.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-147). ');
$ax += cidrblock($address, '103.215.212.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-148). ');
$ax += cidrblock($address, '103.224.16.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-149). ');
$ax += cidrblock($address, '103.229.180.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-150). ');
$ax += cidrblock($address, '103.230.228.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-151). ');
$ax += cidrblock($address, '103.230.240.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-152). ');
$ax += cidrblock($address, '103.231.28.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-153). ');
$ax += cidrblock($address, '103.231.104.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-154). ');
$ax += cidrblock($address, '103.231.164.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-155). ');
$ax += cidrblock($address, '103.231.185.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-156). ');
$ax += cidrblock($address, '103.231.186.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-157). ');
$ax += cidrblock($address, '103.233.184.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-158). ');
$ax += cidrblock($address, '103.233.248.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-159). ');
$ax += cidrblock($address, '103.241.72.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-160). ');
$ax += cidrblock($address, '103.248.36.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-161). ');
$ax += cidrblock($address, '103.253.140.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-162). ');
$ax += cidrblock($address, '103.254.108.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-163). ');
$ax += cidrblock($address, '107.151.64.0/18', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-164). ');
$ax += cidrblock($address, '112.213.96.0/19', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-165). ');
$ax += cidrblock($address, '115.42.60.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-166). ');
$ax += cidrblock($address, '116.193.164.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-167). ');
$ax += cidrblock($address, '116.213.40.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-168). ');
$ax += cidrblock($address, '117.18.0.0/20', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-169). ');
$ax += cidrblock($address, '121.54.160.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-170). ');
$ax += cidrblock($address, '121.54.168.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-171). ');
$ax += cidrblock($address, '121.127.224.0/19', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-172). ');
$ax += cidrblock($address, '122.9.64.0/18', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-173). ');
$ax += cidrblock($address, '122.9.128.0/17', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-174). ');
$ax += cidrblock($address, '122.10.0.0/18', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-175). ');
$ax += cidrblock($address, '122.10.68.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-176). ');
$ax += cidrblock($address, '122.10.72.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-177). ');
$ax += cidrblock($address, '123.60.0.0/17', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-178). ');
$ax += cidrblock($address, '123.60.128.0/20', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-179). ');
$ax += cidrblock($address, '123.60.144.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-180). ');
$ax += cidrblock($address, '123.60.148.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-181). ');
$ax += cidrblock($address, '123.60.150.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-182). ');
$ax += cidrblock($address, '123.60.152.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-183). ');
$ax += cidrblock($address, '123.60.160.0/19', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-184). ');
$ax += cidrblock($address, '123.60.192.0/18', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-185). ');
$ax += cidrblock($address, '123.255.88.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-186). ');
$ax += cidrblock($address, '139.5.208.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-187). ');
$ax += cidrblock($address, '144.48.124.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-188). ');
$ax += cidrblock($address, '144.48.172.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-189). ');
$ax += cidrblock($address, '144.48.192.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-190). ');
$ax += cidrblock($address, '144.48.236.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-191). ');
$ax += cidrblock($address, '157.119.92.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-192). ');
$ax += cidrblock($address, '160.202.44.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-193). ');
$ax += cidrblock($address, '160.238.84.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-194). ');
$ax += cidrblock($address, '162.209.240.0/20', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-195). ');
$ax += cidrblock($address, '172.16.0.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-196). ');
$ax += cidrblock($address, '172.16.8.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-197). ');
$ax += cidrblock($address, '172.16.10.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-198). ');
$ax += cidrblock($address, '172.16.12.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-199). ');
$ax += cidrblock($address, '172.16.14.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-200). ');
$ax += cidrblock($address, '172.16.21.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-201). ');
$ax += cidrblock($address, '172.16.22.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-202). ');
$ax += cidrblock($address, '172.16.24.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-203). ');
$ax += cidrblock($address, '172.16.26.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-204). ');
$ax += cidrblock($address, '172.16.31.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-205). ');
$ax += cidrblock($address, '172.16.32.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-206). ');
$ax += cidrblock($address, '172.16.36.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-207). ');
$ax += cidrblock($address, '172.16.38.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-208). ');
$ax += cidrblock($address, '172.16.51.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-209). ');
$ax += cidrblock($address, '172.16.52.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-210). ');
$ax += cidrblock($address, '172.16.56.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-211). ');
$ax += cidrblock($address, '172.16.58.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-212). ');
$ax += cidrblock($address, '172.16.121.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-213). ');
$ax += cidrblock($address, '172.16.122.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-214). ');
$ax += cidrblock($address, '172.16.124.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-215). ');
$ax += cidrblock($address, '172.16.126.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-216). ');
$ax += cidrblock($address, '172.16.131.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-217). ');
$ax += cidrblock($address, '172.16.132.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-218). ');
$ax += cidrblock($address, '172.16.136.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-219). ');
$ax += cidrblock($address, '172.16.138.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-220). ');
$ax += cidrblock($address, '172.16.151.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-221). ');
$ax += cidrblock($address, '172.16.152.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-222). ');
$ax += cidrblock($address, '172.16.156.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-223). ');
$ax += cidrblock($address, '172.16.158.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-224). ');
$ax += cidrblock($address, '172.16.250.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-225). ');
$ax += cidrblock($address, '172.17.0.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-226). ');
$ax += cidrblock($address, '172.17.8.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-227). ');
$ax += cidrblock($address, '172.17.44.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-228). ');
$ax += cidrblock($address, '172.17.46.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-229). ');
$ax += cidrblock($address, '172.17.60.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-230). ');
$ax += cidrblock($address, '172.17.200.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-231). ');
$ax += cidrblock($address, '172.17.251.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-232). ');
$ax += cidrblock($address, '172.18.8.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-233). ');
$ax += cidrblock($address, '172.18.14.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-234). ');
$ax += cidrblock($address, '172.18.18.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-235). ');
$ax += cidrblock($address, '172.20.0.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-236). ');
$ax += cidrblock($address, '172.20.20.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-237). ');
$ax += cidrblock($address, '172.20.109.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-238). ');
$ax += cidrblock($address, '172.20.119.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-239). ');
$ax += cidrblock($address, '172.20.129.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-240). ');
$ax += cidrblock($address, '172.20.159.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-241). ');
$ax += cidrblock($address, '172.20.160.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-242). ');
$ax += cidrblock($address, '172.20.230.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-243). ');
$ax += cidrblock($address, '172.25.208.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-244). ');
$ax += cidrblock($address, '172.25.240.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-245). ');
$ax += cidrblock($address, '172.25.242.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-246). ');
$ax += cidrblock($address, '172.25.246.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-247). ');
$ax += cidrblock($address, '172.25.248.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-248). ');
$ax += cidrblock($address, '172.29.200.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-249). ');
$ax += cidrblock($address, '172.30.0.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-250). ');
$ax += cidrblock($address, '172.31.66.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-251). ');
$ax += cidrblock($address, '172.31.100.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-252). ');
$ax += cidrblock($address, '172.31.120.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-253). ');
$ax += cidrblock($address, '172.247.134.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-254). ');
$ax += cidrblock($address, '172.247.136.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-255). ');
$ax += cidrblock($address, '172.247.140.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-256). ');
$ax += cidrblock($address, '172.247.150.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-257). ');
$ax += cidrblock($address, '172.247.152.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-258). ');
$ax += cidrblock($address, '172.247.160.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-259). ');
$ax += cidrblock($address, '172.247.164.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-260). ');
$ax += cidrblock($address, '175.176.180.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-261). ');
$ax += cidrblock($address, '182.161.60.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-262). ');
$ax += cidrblock($address, '192.61.80.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-263). ');
$ax += cidrblock($address, '192.151.226.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-264). ');
$ax += cidrblock($address, '192.151.228.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-265). ');
$ax += cidrblock($address, '192.151.232.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-266). ');
$ax += cidrblock($address, '192.151.236.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-267). ');
$ax += cidrblock($address, '192.151.238.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-268). ');
$ax += cidrblock($address, '192.151.248.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-269). ');
$ax += cidrblock($address, '192.161.88.0/24', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-270). ');
$ax += cidrblock($address, '192.168.64.0/19', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-271). ');
$ax += cidrblock($address, '192.249.84.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-272). ');
$ax += cidrblock($address, '198.44.240.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-273). ');
$ax += cidrblock($address, '202.40.160.0/23', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-274). ');
$ax += cidrblock($address, '202.89.0.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-275). ');
$ax += cidrblock($address, '202.146.216.0/21', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-276). ');
$ax += cidrblock($address, '202.165.120.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-277). ');
$ax += cidrblock($address, '203.76.240.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-278). ');
$ax += cidrblock($address, '203.189.236.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-279). ');
$ax += cidrblock($address, '210.56.48.0/20', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-280). ');
$ax += cidrblock($address, '223.26.48.0/20', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-281). ');
$ax += cidrblock($address, '223.130.8.0/22', 'Sun Network; Access denied (ASN-38197-SUNNETWORK-282). ');


// HT
// AS26658 (updated 2016.05.20)
$ax += cidrblock($address, '14.192.20.0/22', 'HT; Access denied (ASN-26658-HT-00). ');
$ax += cidrblock($address, '27.0.156.0/22', 'HT; Access denied (ASN-26658-HT-01). ');
$ax += cidrblock($address, '43.239.160.0/22', 'HT; Access denied (ASN-26658-HT-02). ');
$ax += cidrblock($address, '43.246.116.0/22', 'HT; Access denied (ASN-26658-HT-03). ');
$ax += cidrblock($address, '45.33.240.0/20', 'HT; Access denied (ASN-26658-HT-04). ');
$ax += cidrblock($address, '45.41.80.0/20', 'HT; Access denied (ASN-26658-HT-05). ');
$ax += cidrblock($address, '45.42.80.0/20', 'HT; Access denied (ASN-26658-HT-06). ');
$ax += cidrblock($address, '45.43.224.0/20', 'HT; Access denied (ASN-26658-HT-07). ');
$ax += cidrblock($address, '45.120.204.0/22', 'HT; Access denied (ASN-26658-HT-08). ');
$ax += cidrblock($address, '45.125.108.0/22', 'HT; Access denied (ASN-26658-HT-09). ');
$ax += cidrblock($address, '45.126.228.0/22', 'HT; Access denied (ASN-26658-HT-10). ');
$ax += cidrblock($address, '45.127.160.0/22', 'HT; Access denied (ASN-26658-HT-11). ');
$ax += cidrblock($address, '59.152.48.0/22', 'HT; Access denied (ASN-26658-HT-12). ');
$ax += cidrblock($address, '59.153.48.0/22', 'HT; Access denied (ASN-26658-HT-13). ');
$ax += cidrblock($address, '59.153.144.0/22', 'HT; Access denied (ASN-26658-HT-14). ');
$ax += cidrblock($address, '59.153.160.0/22', 'HT; Access denied (ASN-26658-HT-15). ');
$ax += cidrblock($address, '103.4.20.0/22', 'HT; Access denied (ASN-26658-HT-16). ');
$ax += cidrblock($address, '103.4.24.0/22', 'HT; Access denied (ASN-26658-HT-17). ');
$ax += cidrblock($address, '103.10.172.0/22', 'HT; Access denied (ASN-26658-HT-18). ');
$ax += cidrblock($address, '103.21.8.0/22', 'HT; Access denied (ASN-26658-HT-19). ');
$ax += cidrblock($address, '103.35.76.0/22', 'HT; Access denied (ASN-26658-HT-20). ');
$ax += cidrblock($address, '103.35.184.0/22', 'HT; Access denied (ASN-26658-HT-21). ');
$ax += cidrblock($address, '103.61.20.0/22', 'HT; Access denied (ASN-26658-HT-22). ');
$ax += cidrblock($address, '103.193.244.0/22', 'HT; Access denied (ASN-26658-HT-23). ');
$ax += cidrblock($address, '103.195.116.0/22', 'HT; Access denied (ASN-26658-HT-24). ');
$ax += cidrblock($address, '103.196.100.0/22', 'HT; Access denied (ASN-26658-HT-25). ');
$ax += cidrblock($address, '103.197.168.0/22', 'HT; Access denied (ASN-26658-HT-26). ');
$ax += cidrblock($address, '103.197.192.0/22', 'HT; Access denied (ASN-26658-HT-27). ');
$ax += cidrblock($address, '103.197.216.0/22', 'HT; Access denied (ASN-26658-HT-28). ');
$ax += cidrblock($address, '103.198.44.0/22', 'HT; Access denied (ASN-26658-HT-29). ');
$ax += cidrblock($address, '103.198.188.0/22', 'HT; Access denied (ASN-26658-HT-30). ');
$ax += cidrblock($address, '103.198.204.0/22', 'HT; Access denied (ASN-26658-HT-31). ');
$ax += cidrblock($address, '103.199.244.0/22', 'HT; Access denied (ASN-26658-HT-32). ');
$ax += cidrblock($address, '103.201.68.0/22', 'HT; Access denied (ASN-26658-HT-33). ');
$ax += cidrblock($address, '103.202.48.0/22', 'HT; Access denied (ASN-26658-HT-34). ');
$ax += cidrblock($address, '103.204.108.0/22', 'HT; Access denied (ASN-26658-HT-35). ');
$ax += cidrblock($address, '103.204.252.0/22', 'HT; Access denied (ASN-26658-HT-36). ');
$ax += cidrblock($address, '103.205.0.0/22', 'HT; Access denied (ASN-26658-HT-37). ');
$ax += cidrblock($address, '103.205.164.0/22', 'HT; Access denied (ASN-26658-HT-38). ');
$ax += cidrblock($address, '103.206.124.0/22', 'HT; Access denied (ASN-26658-HT-39). ');
$ax += cidrblock($address, '103.207.24.0/22', 'HT; Access denied (ASN-26658-HT-40). ');
$ax += cidrblock($address, '103.207.116.0/22', 'HT; Access denied (ASN-26658-HT-41). ');
$ax += cidrblock($address, '103.208.8.0/22', 'HT; Access denied (ASN-26658-HT-42). ');
$ax += cidrblock($address, '103.212.72.0/22', 'HT; Access denied (ASN-26658-HT-43). ');
$ax += cidrblock($address, '104.232.64.0/20', 'HT; Access denied (ASN-26658-HT-44). ');
$ax += cidrblock($address, '104.232.96.0/20', 'HT; Access denied (ASN-26658-HT-45). ');
$ax += cidrblock($address, '104.243.128.0/20', 'HT; Access denied (ASN-26658-HT-46). ');
$ax += cidrblock($address, '111.92.184.0/22', 'HT; Access denied (ASN-26658-HT-47). ');
$ax += cidrblock($address, '121.46.80.0/22', 'HT; Access denied (ASN-26658-HT-48). ');
$ax += cidrblock($address, '139.5.180.0/22', 'HT; Access denied (ASN-26658-HT-49). ');
$ax += cidrblock($address, '172.87.192.0/19', 'HT; Access denied (ASN-26658-HT-50). ');
$ax += cidrblock($address, '175.158.100.0/22', 'HT; Access denied (ASN-26658-HT-51). ');
$ax += cidrblock($address, '198.180.198.0/24', 'HT; Access denied (ASN-26658-HT-52). ');
$ax += cidrblock($address, '202.9.60.0/22', 'HT; Access denied (ASN-26658-HT-53). ');
$ax += cidrblock($address, '202.14.4.0/22', 'HT; Access denied (ASN-26658-HT-54). ');
$ax += cidrblock($address, '202.88.36.0/22', 'HT; Access denied (ASN-26658-HT-55). ');
$ax += cidrblock($address, '202.160.152.0/22', 'HT; Access denied (ASN-26658-HT-56). ');
$ax += cidrblock($address, '203.76.232.0/21', 'HT; Access denied (ASN-26658-HT-57). ');
$ax += cidrblock($address, '203.82.28.0/22', 'HT; Access denied (ASN-26658-HT-58). ');
$ax += cidrblock($address, '203.176.124.0/22', 'HT; Access denied (ASN-26658-HT-59). ');
$ax += cidrblock($address, '210.16.96.0/22', 'HT; Access denied (ASN-26658-HT-60). ');
$ax += cidrblock($address, '216.12.160.0/20', 'HT; Access denied (ASN-26658-HT-61). ');
$ax += cidrblock($address, '220.158.224.0/22', 'HT; Access denied (ASN-26658-HT-62). ');
$ax += cidrblock($address, '220.158.244.0/22', 'HT; Access denied (ASN-26658-HT-63). ');
$ax += cidrblock($address, '220.158.252.0/22', 'HT; Access denied (ASN-26658-HT-64). ');


// VpsQuan L.L.C
// AS62468 (updated 2016.05.20)
$ax += cidrblock($address, '43.224.148.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-00). ');
$ax += cidrblock($address, '43.225.56.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-01). ');
$ax += cidrblock($address, '43.225.140.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-02). ');
$ax += cidrblock($address, '43.249.8.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-03). ');
$ax += cidrblock($address, '43.250.172.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-04). ');
$ax += cidrblock($address, '43.251.116.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-05). ');
$ax += cidrblock($address, '43.255.104.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-06). ');
$ax += cidrblock($address, '45.114.12.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-07). ');
$ax += cidrblock($address, '45.119.92.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-08). ');
$ax += cidrblock($address, '45.119.124.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-09). ');
$ax += cidrblock($address, '45.120.220.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-10). ');
$ax += cidrblock($address, '45.121.212.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-11). ');
$ax += cidrblock($address, '69.165.64.0/20', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-12). ');
$ax += cidrblock($address, '103.40.100.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-13). ');
$ax += cidrblock($address, '103.42.28.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-14). ');
$ax += cidrblock($address, '103.42.180.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-15). ');
$ax += cidrblock($address, '103.43.172.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-16). ');
$ax += cidrblock($address, '103.53.216.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-17). ');
$ax += cidrblock($address, '103.62.52.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-18). ');
$ax += cidrblock($address, '103.225.84.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-19). ');
$ax += cidrblock($address, '103.228.128.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-20). ');
$ax += cidrblock($address, '103.229.28.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-21). ');
$ax += cidrblock($address, '103.230.120.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-22). ');
$ax += cidrblock($address, '103.239.72.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-23). ');
$ax += cidrblock($address, '103.240.156.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-24). ');
$ax += cidrblock($address, '103.252.16.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-25). ');
$ax += cidrblock($address, '103.254.72.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-26). ');
$ax += cidrblock($address, '103.255.60.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-27). ');
$ax += cidrblock($address, '198.44.160.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-28). ');
$ax += cidrblock($address, '198.44.164.0/23', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-29). ');
$ax += cidrblock($address, '198.44.166.0/24', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-30). ');
$ax += cidrblock($address, '198.44.168.0/22', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-31). ');
$ax += cidrblock($address, '198.44.172.0/24', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-32). ');
$ax += cidrblock($address, '198.44.176.0/23', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-33). ');
$ax += cidrblock($address, '198.44.179.0/24', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-34). ');
$ax += cidrblock($address, '198.44.185.0/24', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-35). ');
$ax += cidrblock($address, '198.44.188.0/23', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-36). ');
$ax += cidrblock($address, '198.44.190.0/24', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-37). ');
$ax += cidrblock($address, '203.167.20.0/24', 'VpsQuan L.L.C; Access denied (ASN-62468-VPSQUAN-38). ');


// Trellian Pty. Limited
// AS133618 (updated 2016.05.20)
$ax += cidrblock($address, '103.224.182.0/23', 'Trellian; Access denied (ASN-133618-TRELLIAN-0). ');
$ax += cidrblock($address, '103.224.212.0/23', 'Trellian; Access denied (ASN-133618-TRELLIAN-1). ');


// INTERIA.PL Sp z.o.o
// AS133618 (updated 2016.05.20)
$ax += cidrblock($address, '185.69.192.0/22', 'INTERIA.PL; Access denied (ASN-133618-INTERIA-0). ');
$ax += cidrblock($address, '217.74.64.0/20', 'INTERIA.PL; Access denied (ASN-133618-INTERIA-1). ');


// ShangHai AnchNet Tec
// AS58879 (updated 2016.05.20)
$ax += cidrblock($address, '43.231.184.0/23', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-00). ');
$ax += cidrblock($address, '43.231.186.0/24', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-01). ');
$ax += cidrblock($address, '43.249.80.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-02). ');
$ax += cidrblock($address, '45.119.52.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-03). ');
$ax += cidrblock($address, '45.125.34.0/24', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-04). ');
$ax += cidrblock($address, '45.127.127.0/24', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-05). ');
$ax += cidrblock($address, '45.248.84.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-06). ');
$ax += cidrblock($address, '103.20.250.0/23', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-07). ');
$ax += cidrblock($address, '103.36.136.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-08). ');
$ax += cidrblock($address, '103.36.168.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-09). ');
$ax += cidrblock($address, '103.36.172.0/23', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-10). ');
$ax += cidrblock($address, '103.40.160.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-11). ');
$ax += cidrblock($address, '103.50.252.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-12). ');
$ax += cidrblock($address, '103.59.100.0/23', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-13). ');
$ax += cidrblock($address, '103.205.8.0/23', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-14). ');
$ax += cidrblock($address, '103.213.244.0/23', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-15). ');
$ax += cidrblock($address, '103.214.140.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-16). ');
$ax += cidrblock($address, '103.214.168.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-17). ');
$ax += cidrblock($address, '103.214.192.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-18). ');
$ax += cidrblock($address, '103.236.220.0/24', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-19). ');
$ax += cidrblock($address, '103.249.104.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-20). ');
$ax += cidrblock($address, '118.184.0.0/21', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-21). ');
$ax += cidrblock($address, '118.184.11.0/24', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-22). ');
$ax += cidrblock($address, '118.184.12.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-23). ');
$ax += cidrblock($address, '118.184.16.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-24). ');
$ax += cidrblock($address, '118.184.20.0/23', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-25). ');
$ax += cidrblock($address, '118.184.23.0/24', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-26). ');
$ax += cidrblock($address, '118.184.24.0/21', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-27). ');
$ax += cidrblock($address, '118.184.32.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-28). ');
$ax += cidrblock($address, '118.193.128.0/17', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-29). ');
$ax += cidrblock($address, '144.48.4.0/23', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-30). ');
$ax += cidrblock($address, '144.48.140.0/22', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-31). ');
$ax += cidrblock($address, '198.177.121.0/24', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-32). ');
$ax += cidrblock($address, '198.177.124.0/24', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-33). ');
$ax += cidrblock($address, '198.177.126.0/24', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-34). ');
$ax += cidrblock($address, '202.58.104.0/23', 'ShangHai AnchNet; Access denied (ASN-58879-ANCHNET-35). ');


// Computer Network Information Center
// AS7497 (updated 2016.05.20)
$ax += cidrblock($address, '36.254.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-00). ');
$ax += cidrblock($address, '42.197.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-01). ');
$ax += cidrblock($address, '42.198.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-02). ');
$ax += cidrblock($address, '42.199.0.0/18', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-03). ');
$ax += cidrblock($address, '43.224.184.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-04). ');
$ax += cidrblock($address, '43.250.16.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-05). ');
$ax += cidrblock($address, '43.250.100.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-06). ');
$ax += cidrblock($address, '43.250.108.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-07). ');
$ax += cidrblock($address, '49.210.0.0/15', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-08). ');
$ax += cidrblock($address, '49.220.0.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-09). ');
$ax += cidrblock($address, '49.222.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-10). ');
$ax += cidrblock($address, '60.245.128.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-11). ');
$ax += cidrblock($address, '101.126.128.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-12). ');
$ax += cidrblock($address, '101.130.0.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-13). ');
$ax += cidrblock($address, '101.252.0.0/15', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-14). ');
$ax += cidrblock($address, '103.2.208.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-15). ');
$ax += cidrblock($address, '103.41.148.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-16). ');
$ax += cidrblock($address, '103.41.152.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-17). ');
$ax += cidrblock($address, '103.41.220.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-18). ');
$ax += cidrblock($address, '103.41.224.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-19). ');
$ax += cidrblock($address, '103.43.208.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-20). ');
$ax += cidrblock($address, '103.252.28.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-21). ');
$ax += cidrblock($address, '113.130.96.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-22). ');
$ax += cidrblock($address, '113.130.112.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-23). ');
$ax += cidrblock($address, '114.66.80.0/23', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-24). ');
$ax += cidrblock($address, '114.113.204.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-25). ');
$ax += cidrblock($address, '115.172.0.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-26). ');
$ax += cidrblock($address, '115.172.96.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-27). ');
$ax += cidrblock($address, '115.175.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-28). ');
$ax += cidrblock($address, '115.190.0.0/15', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-29). ');
$ax += cidrblock($address, '116.90.184.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-30). ');
$ax += cidrblock($address, '116.213.96.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-31). ');
$ax += cidrblock($address, '116.215.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-32). ');
$ax += cidrblock($address, '117.78.64.0/18', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-33). ');
$ax += cidrblock($address, '117.78.128.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-34). ');
$ax += cidrblock($address, '117.103.16.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-35). ');
$ax += cidrblock($address, '118.196.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-36). ');
$ax += cidrblock($address, '118.197.0.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-37). ');
$ax += cidrblock($address, '119.78.0.0/15', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-38). ');
$ax += cidrblock($address, '119.232.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-39). ');
$ax += cidrblock($address, '119.233.0.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-40). ');
$ax += cidrblock($address, '121.58.144.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-41). ');
$ax += cidrblock($address, '121.68.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-42). ');
$ax += cidrblock($address, '124.15.0.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-43). ');
$ax += cidrblock($address, '124.16.0.0/15', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-44). ');
$ax += cidrblock($address, '124.204.0.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-45). ');
$ax += cidrblock($address, '150.242.4.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-46). ');
$ax += cidrblock($address, '159.226.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-47). ');
$ax += cidrblock($address, '175.189.0.0/16', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-48). ');
$ax += cidrblock($address, '175.191.128.0/18', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-49). ');
$ax += cidrblock($address, '180.88.0.0/18', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-50). ');
$ax += cidrblock($address, '180.90.0.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-51). ');
$ax += cidrblock($address, '180.91.160.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-52). ');
$ax += cidrblock($address, '202.38.128.0/23', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-53). ');
$ax += cidrblock($address, '202.90.224.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-54). ');
$ax += cidrblock($address, '202.122.32.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-55). ');
$ax += cidrblock($address, '202.127.0.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-56). ');
$ax += cidrblock($address, '202.127.16.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-57). ');
$ax += cidrblock($address, '202.127.144.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-58). ');
$ax += cidrblock($address, '202.127.160.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-59). ');
$ax += cidrblock($address, '202.127.200.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-60). ');
$ax += cidrblock($address, '202.152.176.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-61). ');
$ax += cidrblock($address, '202.152.184.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-62). ');
$ax += cidrblock($address, '203.83.56.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-63). ');
$ax += cidrblock($address, '210.72.0.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-64). ');
$ax += cidrblock($address, '210.72.128.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-65). ');
$ax += cidrblock($address, '210.73.0.0/18', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-66). ');
$ax += cidrblock($address, '210.74.192.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-67). ');
$ax += cidrblock($address, '210.75.160.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-68). ');
$ax += cidrblock($address, '210.75.224.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-69). ');
$ax += cidrblock($address, '210.76.192.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-70). ');
$ax += cidrblock($address, '210.77.0.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-71). ');
$ax += cidrblock($address, '210.77.64.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-72). ');
$ax += cidrblock($address, '211.147.192.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-73). ');
$ax += cidrblock($address, '211.156.64.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-74). ');
$ax += cidrblock($address, '211.156.160.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-75). ');
$ax += cidrblock($address, '211.157.24.0/22', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-76). ');
$ax += cidrblock($address, '211.161.120.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-77). ');
$ax += cidrblock($address, '211.161.144.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-78). ');
$ax += cidrblock($address, '211.161.160.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-79). ');
$ax += cidrblock($address, '211.162.48.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-80). ');
$ax += cidrblock($address, '211.162.234.0/23', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-81). ');
$ax += cidrblock($address, '211.167.160.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-82). ');
$ax += cidrblock($address, '218.244.64.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-83). ');
$ax += cidrblock($address, '219.235.128.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-84). ');
$ax += cidrblock($address, '220.113.64.0/18', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-85). ');
$ax += cidrblock($address, '220.115.0.0/21', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-86). ');
$ax += cidrblock($address, '220.115.144.0/20', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-87). ');
$ax += cidrblock($address, '220.115.160.0/19', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-88). ');
$ax += cidrblock($address, '223.192.0.0/15', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-89). ');
$ax += cidrblock($address, '223.208.128.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-90). ');
$ax += cidrblock($address, '223.209.128.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-91). ');
$ax += cidrblock($address, '223.211.0.0/17', 'Computer Network Information Center; Access denied (ASN-7497-CSTNET-92). ');


// Take 2 Hosting, Inc
// AS20248 (updated 2016.05.20)
$ax += cidrblock($address, '23.231.128.0/17', 'Take 2 Hosting, Inc; Access denied (ASN-20248-TAKE2HOSTING-0). ');
$ax += cidrblock($address, '38.99.70.0/24', 'Take 2 Hosting, Inc; Access denied (ASN-20248-TAKE2HOSTING-1). ');
$ax += cidrblock($address, '50.115.128.0/20', 'Take 2 Hosting, Inc; Access denied (ASN-20248-TAKE2HOSTING-2). ');
$ax += cidrblock($address, '74.82.160.0/19', 'Take 2 Hosting, Inc; Access denied (ASN-20248-TAKE2HOSTING-3). ');
$ax += cidrblock($address, '107.163.0.0/16', 'Take 2 Hosting, Inc; Access denied (ASN-20248-TAKE2HOSTING-4). ');
$ax += cidrblock($address, '173.252.192.0/18', 'Take 2 Hosting, Inc; Access denied (ASN-20248-TAKE2HOSTING-5). ');
$ax += cidrblock($address, '192.186.0.0/18', 'Take 2 Hosting, Inc; Access denied (ASN-20248-TAKE2HOSTING-6). ');
$ax += cidrblock($address, '198.144.240.0/20', 'Take 2 Hosting, Inc; Access denied (ASN-20248-TAKE2HOSTING-7). ');
$ax += cidrblock($address, '204.74.208.0/20', 'Take 2 Hosting, Inc; Access denied (ASN-20248-TAKE2HOSTING-8). ');


// Global Frag Networks
// AS46573 (updated 2016.05.20)
$ax += cidrblock($address, '23.228.64.0/18', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-000). ');
$ax += cidrblock($address, '23.247.0.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-001). ');
$ax += cidrblock($address, '23.247.9.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-002). ');
$ax += cidrblock($address, '23.247.10.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-003). ');
$ax += cidrblock($address, '23.247.12.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-004). ');
$ax += cidrblock($address, '23.247.14.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-005). ');
$ax += cidrblock($address, '23.247.16.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-006). ');
$ax += cidrblock($address, '23.247.20.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-007). ');
$ax += cidrblock($address, '23.247.32.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-008). ');
$ax += cidrblock($address, '23.247.55.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-09). ');
$ax += cidrblock($address, '23.247.62.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-010). ');
$ax += cidrblock($address, '23.247.64.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-011). ');
$ax += cidrblock($address, '23.247.73.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-012). ');
$ax += cidrblock($address, '23.247.77.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-013). ');
$ax += cidrblock($address, '23.247.79.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-014). ');
$ax += cidrblock($address, '23.247.80.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-015). ');
$ax += cidrblock($address, '23.247.89.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-016). ');
$ax += cidrblock($address, '23.247.90.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-017). ');
$ax += cidrblock($address, '23.247.92.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-018). ');
$ax += cidrblock($address, '23.247.95.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-019). ');
$ax += cidrblock($address, '23.247.96.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-020). ');
$ax += cidrblock($address, '23.247.99.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-021). ');
$ax += cidrblock($address, '23.247.100.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-022). ');
$ax += cidrblock($address, '23.247.104.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-023). ');
$ax += cidrblock($address, '23.247.107.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-024). ');
$ax += cidrblock($address, '23.247.108.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-025). ');
$ax += cidrblock($address, '23.247.115.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-026). ');
$ax += cidrblock($address, '23.247.116.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-027). ');
$ax += cidrblock($address, '23.247.120.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-028). ');
$ax += cidrblock($address, '23.247.124.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-029). ');
$ax += cidrblock($address, '23.247.126.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-030). ');
$ax += cidrblock($address, '104.148.1.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-031). ');
$ax += cidrblock($address, '104.148.2.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-032). ');
$ax += cidrblock($address, '104.148.4.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-033). ');
$ax += cidrblock($address, '104.148.9.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-034). ');
$ax += cidrblock($address, '104.148.10.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-035). ');
$ax += cidrblock($address, '104.148.12.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-036). ');
$ax += cidrblock($address, '104.148.16.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-037). ');
$ax += cidrblock($address, '104.148.24.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-038). ');
$ax += cidrblock($address, '104.148.26.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-039). ');
$ax += cidrblock($address, '104.148.28.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-040). ');
$ax += cidrblock($address, '104.148.30.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-041). ');
$ax += cidrblock($address, '104.148.32.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-042). ');
$ax += cidrblock($address, '104.148.42.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-043). ');
$ax += cidrblock($address, '104.148.44.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-044). ');
$ax += cidrblock($address, '104.148.47.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-045). ');
$ax += cidrblock($address, '104.148.48.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-046). ');
$ax += cidrblock($address, '104.148.57.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-047). ');
$ax += cidrblock($address, '104.148.58.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-048). ');
$ax += cidrblock($address, '104.148.60.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-049). ');
$ax += cidrblock($address, '104.148.64.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-050). ');
$ax += cidrblock($address, '104.148.68.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-051). ');
$ax += cidrblock($address, '104.148.71.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-052). ');
$ax += cidrblock($address, '104.148.74.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-053). ');
$ax += cidrblock($address, '104.148.76.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-054). ');
$ax += cidrblock($address, '104.148.80.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-055). ');
$ax += cidrblock($address, '104.148.84.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-056). ');
$ax += cidrblock($address, '104.148.88.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-057). ');
$ax += cidrblock($address, '104.148.92.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-058). ');
$ax += cidrblock($address, '104.148.94.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-059). ');
$ax += cidrblock($address, '104.148.96.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-060). ');
$ax += cidrblock($address, '104.148.99.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-061). ');
$ax += cidrblock($address, '104.148.100.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-062). ');
$ax += cidrblock($address, '104.148.104.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-063). ');
$ax += cidrblock($address, '104.148.108.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-064). ');
$ax += cidrblock($address, '104.148.112.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-065). ');
$ax += cidrblock($address, '104.148.116.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-066). ');
$ax += cidrblock($address, '104.148.119.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-067). ');
$ax += cidrblock($address, '104.148.120.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-068). ');
$ax += cidrblock($address, '104.148.122.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-069). ');
$ax += cidrblock($address, '104.148.124.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-070). ');
$ax += cidrblock($address, '104.223.128.0/20', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-071). ');
$ax += cidrblock($address, '104.223.144.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-072). ');
$ax += cidrblock($address, '104.223.149.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-073). ');
$ax += cidrblock($address, '104.223.150.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-074). ');
$ax += cidrblock($address, '104.223.152.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-075). ');
$ax += cidrblock($address, '104.223.160.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-076). ');
$ax += cidrblock($address, '104.223.165.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-077). ');
$ax += cidrblock($address, '104.223.168.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-078). ');
$ax += cidrblock($address, '104.223.173.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-079). ');
$ax += cidrblock($address, '104.223.174.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-080). ');
$ax += cidrblock($address, '104.223.176.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-081). ');
$ax += cidrblock($address, '104.223.181.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-082). ');
$ax += cidrblock($address, '104.223.182.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-083). ');
$ax += cidrblock($address, '104.223.184.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-084). ');
$ax += cidrblock($address, '104.223.192.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-085). ');
$ax += cidrblock($address, '104.223.196.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-086). ');
$ax += cidrblock($address, '104.223.200.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-087). ');
$ax += cidrblock($address, '104.223.208.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-088). ');
$ax += cidrblock($address, '104.223.220.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-089). ');
$ax += cidrblock($address, '104.223.222.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-090). ');
$ax += cidrblock($address, '104.223.224.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-091). ');
$ax += cidrblock($address, '104.223.226.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-092). ');
$ax += cidrblock($address, '104.223.228.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-093). ');
$ax += cidrblock($address, '104.223.230.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-094). ');
$ax += cidrblock($address, '104.223.233.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-095). ');
$ax += cidrblock($address, '104.223.234.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-096). ');
$ax += cidrblock($address, '104.223.236.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-097). ');
$ax += cidrblock($address, '104.223.238.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-098). ');
$ax += cidrblock($address, '104.223.240.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-99). ');
$ax += cidrblock($address, '104.223.242.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-100). ');
$ax += cidrblock($address, '104.223.244.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-101). ');
$ax += cidrblock($address, '104.223.248.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-102). ');
$ax += cidrblock($address, '104.223.250.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-103). ');
$ax += cidrblock($address, '104.223.252.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-104). ');
$ax += cidrblock($address, '107.179.2.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-105). ');
$ax += cidrblock($address, '107.179.4.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-106). ');
$ax += cidrblock($address, '107.179.8.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-107). ');
$ax += cidrblock($address, '107.179.10.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-108). ');
$ax += cidrblock($address, '107.179.12.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-109). ');
$ax += cidrblock($address, '107.179.16.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-110). ');
$ax += cidrblock($address, '107.179.20.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-111). ');
$ax += cidrblock($address, '107.179.23.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-112). ');
$ax += cidrblock($address, '107.179.24.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-113). ');
$ax += cidrblock($address, '107.179.32.0/20', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-114). ');
$ax += cidrblock($address, '107.179.48.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-115). ');
$ax += cidrblock($address, '107.179.60.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-116). ');
$ax += cidrblock($address, '107.179.64.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-117). ');
$ax += cidrblock($address, '107.179.68.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-118). ');
$ax += cidrblock($address, '107.179.70.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-119). ');
$ax += cidrblock($address, '107.179.72.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-120). ');
$ax += cidrblock($address, '107.179.76.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-121). ');
$ax += cidrblock($address, '107.179.78.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-122). ');
$ax += cidrblock($address, '107.179.80.0/20', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-123). ');
$ax += cidrblock($address, '107.179.96.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-124). ');
$ax += cidrblock($address, '107.179.98.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-125). ');
$ax += cidrblock($address, '107.179.100.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-126). ');
$ax += cidrblock($address, '107.179.104.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-127). ');
$ax += cidrblock($address, '107.179.106.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-128). ');
$ax += cidrblock($address, '107.179.108.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-129). ');
$ax += cidrblock($address, '107.179.110.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-130). ');
$ax += cidrblock($address, '107.179.112.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-131). ');
$ax += cidrblock($address, '107.179.116.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-132). ');
$ax += cidrblock($address, '107.179.118.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-133). ');
$ax += cidrblock($address, '107.179.121.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-134). ');
$ax += cidrblock($address, '107.179.122.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-135). ');
$ax += cidrblock($address, '107.179.124.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-136). ');
$ax += cidrblock($address, '107.179.126.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-137). ');
$ax += cidrblock($address, '154.16.197.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-138). ');
$ax += cidrblock($address, '157.52.128.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-139). ');
$ax += cidrblock($address, '157.52.133.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-140). ');
$ax += cidrblock($address, '157.52.135.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-141). ');
$ax += cidrblock($address, '157.52.137.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-142). ');
$ax += cidrblock($address, '157.52.141.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-143). ');
$ax += cidrblock($address, '157.52.142.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-144). ');
$ax += cidrblock($address, '157.52.144.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-145). ');
$ax += cidrblock($address, '157.52.148.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-146). ');
$ax += cidrblock($address, '157.52.151.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-147). ');
$ax += cidrblock($address, '157.52.152.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-148). ');
$ax += cidrblock($address, '157.52.160.0/20', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-149). ');
$ax += cidrblock($address, '157.52.176.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-150). ');
$ax += cidrblock($address, '157.52.185.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-151). ');
$ax += cidrblock($address, '157.52.188.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-152). ');
$ax += cidrblock($address, '157.52.192.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-153). ');
$ax += cidrblock($address, '157.52.196.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-154). ');
$ax += cidrblock($address, '157.52.198.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-155). ');
$ax += cidrblock($address, '157.52.200.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-156). ');
$ax += cidrblock($address, '157.52.208.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-157). ');
$ax += cidrblock($address, '157.52.216.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-158). ');
$ax += cidrblock($address, '157.52.219.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-159). ');
$ax += cidrblock($address, '157.52.221.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-160). ');
$ax += cidrblock($address, '157.52.223.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-161). ');
$ax += cidrblock($address, '157.52.224.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-162). ');
$ax += cidrblock($address, '157.52.230.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-163). ');
$ax += cidrblock($address, '157.52.232.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-164). ');
$ax += cidrblock($address, '157.52.235.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-165). ');
$ax += cidrblock($address, '157.52.236.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-166). ');
$ax += cidrblock($address, '157.52.239.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-167). ');
$ax += cidrblock($address, '157.52.240.0/22', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-168). ');
$ax += cidrblock($address, '157.52.244.0/23', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-169). ');
$ax += cidrblock($address, '157.52.246.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-170). ');
$ax += cidrblock($address, '157.52.248.0/21', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-171). ');
$ax += cidrblock($address, '192.135.255.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-172). ');
$ax += cidrblock($address, '192.200.192.0/19', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-173). ');
$ax += cidrblock($address, '199.10.64.0/24', 'Global Frag Networks; Access denied (ASN-46573-FRAGNET-174). ');


// Royal Network Technology and Rainbow Network Ltd
// AS133731, AS134121 (updated 2016.05.20)
$ax += cidrblock($address, '1.32.216.0/24', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-00). ');
$ax += cidrblock($address, '14.1.96.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-01). ');
$ax += cidrblock($address, '43.224.248.0/23', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-02). ');
$ax += cidrblock($address, '43.225.47.0/24', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-03). ');
$ax += cidrblock($address, '43.240.12.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-04). ');
$ax += cidrblock($address, '43.242.130.0/24', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-05). ');
$ax += cidrblock($address, '43.243.171.0/24', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-06). ');
$ax += cidrblock($address, '43.251.16.0/23', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-07). ');
$ax += cidrblock($address, '43.252.228.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-08). ');
$ax += cidrblock($address, '43.254.216.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-09). ');
$ax += cidrblock($address, '45.64.74.0/23', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-10). ');
$ax += cidrblock($address, '45.64.112.0/23', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-11). ');
$ax += cidrblock($address, '45.114.8.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-12). ');
$ax += cidrblock($address, '45.116.76.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-13). ');
$ax += cidrblock($address, '45.120.158.0/24', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-14). ');
$ax += cidrblock($address, '45.124.24.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-15). ');
$ax += cidrblock($address, '45.125.12.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-16). ');
$ax += cidrblock($address, '45.125.16.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-17). ');
$ax += cidrblock($address, '45.125.32.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-18). ');
$ax += cidrblock($address, '45.127.96.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-19). ');
$ax += cidrblock($address, '103.12.76.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-20). ');
$ax += cidrblock($address, '103.21.136.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-21). ');
$ax += cidrblock($address, '103.24.0.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-22). ');
$ax += cidrblock($address, '103.30.40.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-23). ');
$ax += cidrblock($address, '103.39.108.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-24). ');
$ax += cidrblock($address, '103.49.92.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-25). ');
$ax += cidrblock($address, '103.51.144.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-26). ');
$ax += cidrblock($address, '103.55.24.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-27). ');
$ax += cidrblock($address, '103.56.112.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-28). ');
$ax += cidrblock($address, '103.59.102.0/23', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-29). ');
$ax += cidrblock($address, '103.193.148.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-30). ');
$ax += cidrblock($address, '103.195.148.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-31). ');
$ax += cidrblock($address, '103.197.24.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-32). ');
$ax += cidrblock($address, '103.200.28.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-33). ');
$ax += cidrblock($address, '103.212.32.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-34). ');
$ax += cidrblock($address, '103.213.248.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-35). ');
$ax += cidrblock($address, '103.214.172.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-36). ');
$ax += cidrblock($address, '103.224.80.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-37). ');
$ax += cidrblock($address, '103.226.124.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-38). ');
$ax += cidrblock($address, '103.229.116.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-39). ');
$ax += cidrblock($address, '103.229.124.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-40). ');
$ax += cidrblock($address, '103.231.12.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-41). ');
$ax += cidrblock($address, '103.238.224.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-42). ');
$ax += cidrblock($address, '103.240.180.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-43). ');
$ax += cidrblock($address, '103.240.200.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-44). ');
$ax += cidrblock($address, '103.241.48.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-45). ');
$ax += cidrblock($address, '103.242.0.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-46). ');
$ax += cidrblock($address, '103.242.132.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-47). ');
$ax += cidrblock($address, '103.243.24.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-48). ');
$ax += cidrblock($address, '103.243.128.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-49). ');
$ax += cidrblock($address, '103.244.88.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-50). ');
$ax += cidrblock($address, '103.246.244.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-51). ');
$ax += cidrblock($address, '122.10.80.0/20', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-52). ');
$ax += cidrblock($address, '122.10.112.0/21', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-53). ');
$ax += cidrblock($address, '123.108.108.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-54). ');
$ax += cidrblock($address, '123.254.104.0/21', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-55). ');
$ax += cidrblock($address, '146.196.80.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-56). ');
$ax += cidrblock($address, '150.129.80.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-57). ');
$ax += cidrblock($address, '182.237.0.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-58). ');
$ax += cidrblock($address, '202.181.24.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-59). ');
$ax += cidrblock($address, '203.189.232.0/22', 'Royal Network Technology and Rainbow Network Ltd; Access denied (AS-ROYALRAINBOW-60). ');


// CommuniLink Internet
// AS38277 (updated 2016.05.20)
$ax += cidrblock($address, '43.252.40.0/22', 'CommuniLink Internet; Access denied (ASN-38277-COMMUNILINK-0). ');
$ax += cidrblock($address, '43.252.164.0/22', 'CommuniLink Internet; Access denied (ASN-38277-COMMUNILINK-1). ');
$ax += cidrblock($address, '45.121.20.0/22', 'CommuniLink Internet; Access denied (ASN-38277-COMMUNILINK-2). ');
$ax += cidrblock($address, '58.82.192.0/18', 'CommuniLink Internet; Access denied (ASN-38277-COMMUNILINK-3). ');
$ax += cidrblock($address, '103.28.44.0/22', 'CommuniLink Internet; Access denied (ASN-38277-COMMUNILINK-4). ');
$ax += cidrblock($address, '103.228.28.0/22', 'CommuniLink Internet; Access denied (ASN-38277-COMMUNILINK-5). ');
$ax += cidrblock($address, '103.251.236.0/22', 'CommuniLink Internet; Access denied (ASN-38277-COMMUNILINK-6). ');
$ax += cidrblock($address, '203.124.8.0/21', 'CommuniLink Internet; Access denied (ASN-38277-COMMUNILINK-7). ');


// Çizgi Telekomünikasyon
// AS34619 (updated 2016.05.20)
$ax += cidrblock($address, '37.148.208.0/21', 'Cizgi Telekomunikasyon; Access denied (ASN-34619-CIZGI-0). ');
$ax += cidrblock($address, '80.253.244.0/23', 'Cizgi Telekomunikasyon; Access denied (ASN-34619-CIZGI-1). ');
$ax += cidrblock($address, '85.159.64.0/21', 'Cizgi Telekomunikasyon; Access denied (ASN-34619-CIZGI-2). ');
$ax += cidrblock($address, '89.19.0.0/19', 'Cizgi Telekomunikasyon; Access denied (ASN-34619-CIZGI-3). ');
$ax += cidrblock($address, '94.73.128.0/18', 'Cizgi Telekomunikasyon; Access denied (ASN-34619-CIZGI-4). ');
$ax += cidrblock($address, '185.22.184.0/22', 'Cizgi Telekomunikasyon; Access denied (ASN-34619-CIZGI-5). ');
$ax += cidrblock($address, '185.135.40.0/24', 'Cizgi Telekomunikasyon; Access denied (ASN-34619-CIZGI-6). ');
$ax += cidrblock($address, '185.135.44.0/24', 'Cizgi Telekomunikasyon; Access denied (ASN-34619-CIZGI-7). ');


// Unified Layer
// AS46606 (updated 2016.05.21)
$ax += cidrblock($address, '50.87.0.0/16', 'Unified Layer (ASN-46606-UNIHM-00). ');
$ax += cidrblock($address, '66.147.240.0/20', 'Unified Layer (ASN-46606-UNIHM-01). ');
$ax += cidrblock($address, '67.20.64.0/18', 'Unified Layer (ASN-46606-UNIHM-02). ');
$ax += cidrblock($address, '67.222.32.0/19', 'Unified Layer (ASN-46606-UNIHM-03). ');
$ax += cidrblock($address, '69.27.164.0/23', 'Unified Layer (ASN-46606-UNIHM-04). ');
$ax += cidrblock($address, '69.89.16.0/20', 'Unified Layer (ASN-46606-UNIHM-05). ');
$ax += cidrblock($address, '69.195.64.0/18', 'Unified Layer (ASN-46606-UNIHM-06). ');
$ax += cidrblock($address, '70.40.192.0/19', 'Unified Layer (ASN-46606-UNIHM-07). ');
$ax += cidrblock($address, '74.220.192.0/19', 'Unified Layer (ASN-46606-UNIHM-08). ');
$ax += cidrblock($address, '142.4.0.0/19', 'Unified Layer (ASN-46606-UNIHM-09). ');
$ax += cidrblock($address, '162.144.0.0/16', 'Unified Layer (ASN-46606-UNIHM-10). ');
$ax += cidrblock($address, '162.214.0.0/15', 'Unified Layer (ASN-46606-UNIHM-11). ');
$ax += cidrblock($address, '162.240.0.0/15', 'Unified Layer (ASN-46606-UNIHM-12). ');
$ax += cidrblock($address, '173.254.0.0/17', 'Unified Layer (ASN-46606-UNIHM-13). ');
$ax += cidrblock($address, '192.163.192.0/18', 'Unified Layer (ASN-46606-UNIHM-14). ');
$ax += cidrblock($address, '192.185.224.0/19', 'Unified Layer (ASN-46606-UNIHM-15). ');
$ax += cidrblock($address, '192.232.192.0/18', 'Unified Layer (ASN-46606-UNIHM-16). ');
$ax += cidrblock($address, '192.254.128.0/17', 'Unified Layer (ASN-46606-UNIHM-17). ');
$ax += cidrblock($address, '198.1.64.0/18', 'Unified Layer (ASN-46606-UNIHM-18). ');
$ax += cidrblock($address, '198.20.224.0/19', 'Unified Layer (ASN-46606-UNIHM-19). ');
$ax += cidrblock($address, '198.57.128.0/17', 'Unified Layer (ASN-46606-UNIHM-20). ');
$ax += cidrblock($address, '198.154.192.0/18', 'Unified Layer (ASN-46606-UNIHM-21). ');


// World4You Internet Services
// AS38955 (updated 2016.05.21)
$ax += cidrblock($address, '81.19.144.0/20', 'World4You Internet Services; Access denied (ASN-38955-WORLD4YOU-0). ');
$ax += cidrblock($address, '178.23.80.0/21', 'World4You Internet Services; Access denied (ASN-38955-WORLD4YOU-1). ');
$ax += cidrblock($address, '185.16.190.0/24', 'World4You Internet Services; Access denied (ASN-38955-WORLD4YOU-2). ');


// Confluence Networks Inc
// AS40034 (updated 2016.05.21)
$ax += cidrblock($address, '5.100.152.0/22', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-00). ');
$ax += cidrblock($address, '5.100.158.0/23', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-01). ');
$ax += cidrblock($address, '50.58.197.0/24', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-02). ');
$ax += cidrblock($address, '104.254.96.0/22', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-03). ');
$ax += cidrblock($address, '141.8.224.0/21', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-04). ');
$ax += cidrblock($address, '162.210.68.0/22', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-05). ');
$ax += cidrblock($address, '162.215.252.0/22', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-06). ');
$ax += cidrblock($address, '162.222.224.0/22', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-07). ');
$ax += cidrblock($address, '162.251.80.0/21', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-08). ');
$ax += cidrblock($address, '199.79.60.0/22', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-09). ');
$ax += cidrblock($address, '199.191.50.0/23', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-10). ');
$ax += cidrblock($address, '204.11.56.0/22', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-11). ');
$ax += cidrblock($address, '207.174.212.0/22', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-12). ');
$ax += cidrblock($address, '208.73.208.0/22', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-13). ');
$ax += cidrblock($address, '208.91.196.0/22', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-14). ');
$ax += cidrblock($address, '209.99.17.0/24', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-15). ');
$ax += cidrblock($address, '209.99.45.0/24', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-16). ');
$ax += cidrblock($address, '209.99.64.0/23', 'Confluence Networks Inc; Access denied (ASN-40034-CONFLUENCE-17). ');


// Agava Ltd
// AS43146 (updated 2016.05.21)
$ax += cidrblock($address, '80.78.240.0/23', 'Agava Ltd; Access denied (ASN-43146-AGAVA-0). ');
$ax += cidrblock($address, '80.78.244.0/22', 'Agava Ltd; Access denied (ASN-43146-AGAVA-1). ');
$ax += cidrblock($address, '80.78.248.0/21', 'Agava Ltd; Access denied (ASN-43146-AGAVA-2). ');
$ax += cidrblock($address, '89.108.64.0/18', 'Agava Ltd; Access denied (ASN-43146-AGAVA-3). ');
$ax += cidrblock($address, '185.46.8.0/22', 'Agava Ltd; Access denied (ASN-43146-AGAVA-4). ');


// IQHost Ltd
// AS50465 (updated 2016.05.21)
$ax += cidrblock($address, '193.106.172.0/22', 'IQHost Ltd; Access denied (ASN-50465-IQHOST-0). ');


// Avesta Networks LLC
// AS54444 (updated 2016.05.21)
$ax += cidrblock($address, '142.0.68.0/22', 'Avesta Networks LLC; Access denied (ASN-54444-AVESTA-0). ');
$ax += cidrblock($address, '142.0.72.0/24', 'Avesta Networks LLC; Access denied (ASN-54444-AVESTA-1). ');
$ax += cidrblock($address, '142.0.79.0/24', 'Avesta Networks LLC; Access denied (ASN-54444-AVESTA-2). ');
$ax += cidrblock($address, '199.127.99.0/24', 'Avesta Networks LLC; Access denied (ASN-54444-AVESTA-3). ');
$ax += cidrblock($address, '199.127.103.0/24', 'Avesta Networks LLC; Access denied (ASN-54444-AVESTA-4). ');


// Hosting Operator eServer.ru Ltd
// AS42244 (updated 2016.05.21)
$ax += cidrblock($address, '5.45.80.0/22', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-00). ');
$ax += cidrblock($address, '37.143.12.0/22', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-01). ');
$ax += cidrblock($address, '46.254.16.0/22', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-02). ');
$ax += cidrblock($address, '46.254.23.0/24', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-03). ');
$ax += cidrblock($address, '80.77.168.0/23', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-04). ');
$ax += cidrblock($address, '91.189.80.0/23', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-05). ');
$ax += cidrblock($address, '91.189.82.0/24', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-06). ');
$ax += cidrblock($address, '91.189.84.0/22', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-07). ');
$ax += cidrblock($address, '91.218.230.0/23', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-08). ');
$ax += cidrblock($address, '95.183.8.0/22', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-09). ');
$ax += cidrblock($address, '178.218.208.0/20', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-10). ');
$ax += cidrblock($address, '185.22.234.0/23', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-11). ');
$ax += cidrblock($address, '185.115.140.0/24', 'Hosting Operator eServer.ru Ltd; Access denied (ASN-42244-eSERVER-12). ');


// Webzilla B.V
// AS35415 (updated 2016.05.21)
$ax += cidrblock($address, '46.30.40.0/21', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-00). ');
$ax += cidrblock($address, '78.140.128.0/18', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-01). ');
$ax += cidrblock($address, '88.85.64.0/19', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-02). ');
$ax += cidrblock($address, '91.205.156.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-03). ');
$ax += cidrblock($address, '91.226.124.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-04). ');
$ax += cidrblock($address, '91.226.127.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-05). ');
$ax += cidrblock($address, '93.170.134.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-06). ');
$ax += cidrblock($address, '94.103.80.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-07). ');
$ax += cidrblock($address, '94.103.82.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-08). ');
$ax += cidrblock($address, '95.142.32.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-09). ');
$ax += cidrblock($address, '95.215.8.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-10). ');
$ax += cidrblock($address, '109.234.32.0/21', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-11). ');
$ax += cidrblock($address, '146.120.224.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-12). ');
$ax += cidrblock($address, '178.208.73.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-13). ');
$ax += cidrblock($address, '178.208.74.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-14). ');
$ax += cidrblock($address, '178.208.76.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-15). ');
$ax += cidrblock($address, '178.208.80.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-16). ');
$ax += cidrblock($address, '178.208.84.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-17). ');
$ax += cidrblock($address, '178.208.88.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-18). ');
$ax += cidrblock($address, '178.208.93.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-19). ');
$ax += cidrblock($address, '181.215.3.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-20). ');
$ax += cidrblock($address, '185.49.144.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-21). ');
$ax += cidrblock($address, '185.106.240.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-22). ');
$ax += cidrblock($address, '185.117.132.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-23). ');
$ax += cidrblock($address, '185.117.134.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-24). ');
$ax += cidrblock($address, '188.42.160.0/21', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-25). ');
$ax += cidrblock($address, '188.42.224.0/21', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-26). ');
$ax += cidrblock($address, '188.42.232.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-27). ');
$ax += cidrblock($address, '188.42.236.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-28). ');
$ax += cidrblock($address, '188.42.239.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-29). ');
$ax += cidrblock($address, '188.164.248.0/21', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-30). ');
$ax += cidrblock($address, '193.105.200.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-31). ');
$ax += cidrblock($address, '193.169.41.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-32). ');
$ax += cidrblock($address, '193.194.116.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-33). ');
$ax += cidrblock($address, '194.187.96.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-34). ');
$ax += cidrblock($address, '195.178.4.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-35). ');
$ax += cidrblock($address, '195.225.55.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-36). ');
$ax += cidrblock($address, '195.234.98.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-37). ');
$ax += cidrblock($address, '198.175.15.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-38). ');
$ax += cidrblock($address, '206.54.160.0/21', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-39). ');
$ax += cidrblock($address, '206.54.168.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-40). ');
$ax += cidrblock($address, '206.54.173.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-41). ');
$ax += cidrblock($address, '206.54.175.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-42). ');
$ax += cidrblock($address, '206.54.176.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-43). ');
$ax += cidrblock($address, '206.54.178.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-44). ');
$ax += cidrblock($address, '206.54.181.0/24', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-45). ');
$ax += cidrblock($address, '206.54.182.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-46). ');
$ax += cidrblock($address, '208.69.112.0/22', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-47). ');
$ax += cidrblock($address, '208.69.116.0/23', 'Webzilla B.V; Access denied (ASN-35415-WEBZILLA-48). ');


// Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi
// AS42807 (updated 2016.05.21)
$ax += cidrblock($address, '31.207.80.0/21', 'Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-AEROTEK-0). ');
$ax += cidrblock($address, '37.230.104.0/21', 'Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-AEROTEK-1). ');
$ax += cidrblock($address, '94.199.200.0/21', 'Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-AEROTEK-2). ');
$ax += cidrblock($address, '109.232.216.0/21', 'Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-AEROTEK-3). ');
$ax += cidrblock($address, '185.15.40.0/22', 'Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-AEROTEK-4). ');
$ax += cidrblock($address, '213.159.28.0/22', 'Aerotek Bilisim Taahhut Sanayi ve Ticaret Limited Sirketi; Access denied (ASN-42807-AEROTEK-5). ');


// CJSC Registrar R01
// AS41126 (updated 2016.05.21)
$ax += cidrblock($address, '89.111.176.0/20', 'CJSC Registrar R01; Access denied (ASN-41126-0). ');


// Init7
// AS13030 (updated 2016.05.21)
$ax += cidrblock($address, '37.17.232.0/21', 'Init7; Access denied (ASN-13030-INIT7-00). ');
$ax += cidrblock($address, '64.35.8.0/22', 'Init7; Access denied (ASN-13030-INIT7-01). ');
$ax += cidrblock($address, '77.109.128.0/18', 'Init7; Access denied (ASN-13030-INIT7-02). ');
$ax += cidrblock($address, '82.197.160.0/19', 'Init7; Access denied (ASN-13030-INIT7-03). ');
$ax += cidrblock($address, '85.195.208.0/20', 'Init7; Access denied (ASN-13030-INIT7-04). ');
$ax += cidrblock($address, '85.195.224.0/19', 'Init7; Access denied (ASN-13030-INIT7-05). ');
$ax += cidrblock($address, '87.239.208.0/21', 'Init7; Access denied (ASN-13030-INIT7-06). ');
$ax += cidrblock($address, '91.198.8.0/24', 'Init7; Access denied (ASN-13030-INIT7-07). ');
$ax += cidrblock($address, '91.198.154.0/24', 'Init7; Access denied (ASN-13030-INIT7-08). ');
$ax += cidrblock($address, '91.209.98.0/24', 'Init7; Access denied (ASN-13030-INIT7-09). ');
$ax += cidrblock($address, '91.238.144.0/24', 'Init7; Access denied (ASN-13030-INIT7-10). ');
$ax += cidrblock($address, '178.250.128.0/21', 'Init7; Access denied (ASN-13030-INIT7-11). ');
$ax += cidrblock($address, '185.35.28.0/22', 'Init7; Access denied (ASN-13030-INIT7-12). ');
$ax += cidrblock($address, '185.78.120.0/24', 'Init7; Access denied (ASN-13030-INIT7-13). ');
$ax += cidrblock($address, '185.78.122.0/24', 'Init7; Access denied (ASN-13030-INIT7-14). ');
$ax += cidrblock($address, '185.85.248.0/22', 'Init7; Access denied (ASN-13030-INIT7-15). ');
$ax += cidrblock($address, '193.47.153.0/24', 'Init7; Access denied (ASN-13030-INIT7-16). ');
$ax += cidrblock($address, '193.222.255.0/24', 'Init7; Access denied (ASN-13030-INIT7-17). ');
$ax += cidrblock($address, '193.223.80.0/20', 'Init7; Access denied (ASN-13030-INIT7-18). ');
$ax += cidrblock($address, '195.8.117.0/24', 'Init7; Access denied (ASN-13030-INIT7-19). ');
$ax += cidrblock($address, '195.8.210.0/23', 'Init7; Access denied (ASN-13030-INIT7-20). ');
$ax += cidrblock($address, '195.191.240.0/23', 'Init7; Access denied (ASN-13030-INIT7-21). ');
$ax += cidrblock($address, '195.211.32.0/22', 'Init7; Access denied (ASN-13030-INIT7-22). ');
$ax += cidrblock($address, '212.51.128.0/19', 'Init7; Access denied (ASN-13030-INIT7-23). ');
$ax += cidrblock($address, '213.144.128.0/19', 'Init7; Access denied (ASN-13030-INIT7-24). ');
$ax += cidrblock($address, '216.185.39.0/24', 'Init7; Access denied (ASN-13030-INIT7-25). ');


// K SERVERS LTD
// AS14576 (updated 2016.05.21)
$ax += cidrblock($address, '31.148.219.0/24', 'K SERVERS LTD; Access denied (ASN-14576-KSERVERS-0). ');
$ax += cidrblock($address, '31.148.220.0/24', 'K SERVERS LTD; Access denied (ASN-14576-KSERVERS-1). ');
$ax += cidrblock($address, '93.170.13.0/24', 'K SERVERS LTD; Access denied (ASN-14576-KSERVERS-2). ');
$ax += cidrblock($address, '104.193.252.0/22', 'K SERVERS LTD; Access denied (ASN-14576-KSERVERS-3). ');
$ax += cidrblock($address, '162.244.32.0/22', 'K SERVERS LTD; Access denied (ASN-14576-KSERVERS-4). ');
$ax += cidrblock($address, '185.104.8.0/22', 'K SERVERS LTD; Access denied (ASN-14576-KSERVERS-5). ');
$ax += cidrblock($address, '185.130.104.0/22', 'K SERVERS LTD; Access denied (ASN-14576-KSERVERS-6). ');
$ax += cidrblock($address, '193.0.201.0/24', 'K SERVERS LTD; Access denied (ASN-14576-KSERVERS-7). ');
$ax += cidrblock($address, '204.155.28.0/22', 'K SERVERS LTD; Access denied (ASN-14576-KSERVERS-8). ');


// RamNode LLC
// AS3842 (updated 2016.05.24)
$ax += cidrblock($address, '23.226.224.0/20', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-00). ');
$ax += cidrblock($address, '107.161.16.0/20', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-01). ');
$ax += cidrblock($address, '107.191.96.0/20', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-02). ');
$ax += cidrblock($address, '107.191.114.0/23', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-03). ');
$ax += cidrblock($address, '107.191.116.0/22', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-04). ');
$ax += cidrblock($address, '107.191.120.0/21', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-05). ');
$ax += cidrblock($address, '167.88.112.0/21', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-06). ');
$ax += cidrblock($address, '167.88.120.0/22', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-07). ');
$ax += cidrblock($address, '167.88.124.0/23', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-08). ');
$ax += cidrblock($address, '168.235.64.0/19', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-09). ');
$ax += cidrblock($address, '192.30.32.0/22', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-10). ');
$ax += cidrblock($address, '192.73.232.0/21', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-11). ');
$ax += cidrblock($address, '192.184.80.0/20', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-12). ');
$ax += cidrblock($address, '192.249.56.0/21', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-13). ');
$ax += cidrblock($address, '199.241.28.0/22', 'RamNode LLC; Not an access provider (ASN-3842-RAMNODE-14). ');


// RouteLabel V.O.F.
// AS3842 (updated 2016.05.24)
$ax += cidrblock($address, '81.4.100.0/22', 'RouteLabel V.O.F.; Access denied (ASN-3842-ROUTELABEL-0). ');
$ax += cidrblock($address, '81.4.104.0/21', 'RouteLabel V.O.F.; Access denied (ASN-3842-ROUTELABEL-1). ');
$ax += cidrblock($address, '81.4.120.0/21', 'RouteLabel V.O.F.; Access denied (ASN-3842-ROUTELABEL-2). ');
$ax += cidrblock($address, '176.56.224.0/20', 'RouteLabel V.O.F.; Access denied (ASN-3842-ROUTELABEL-3). ');
$ax += cidrblock($address, '185.34.216.0/23', 'RouteLabel V.O.F.; Access denied (ASN-3842-ROUTELABEL-4). ');
$ax += cidrblock($address, '185.52.0.0/22', 'RouteLabel V.O.F.; Access denied (ASN-3842-ROUTELABEL-5). ');
$ax += cidrblock($address, '185.122.192.0/22', 'RouteLabel V.O.F.; Access denied (ASN-3842-ROUTELABEL-6). ');
$ax += cidrblock($address, '185.142.76.0/22', 'RouteLabel V.O.F.; Access denied (ASN-3842-ROUTELABEL-7). ');


// MnogoByte LLC
// AS42632 (updated 2016.05.24)
$ax += cidrblock($address, '46.161.31.0/24', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-00). ');
$ax += cidrblock($address, '77.220.160.0/19', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-01). ');
$ax += cidrblock($address, '83.222.96.0/20', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-02). ');
$ax += cidrblock($address, '83.222.112.0/21', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-03). ');
$ax += cidrblock($address, '91.215.138.0/24', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-04). ');
$ax += cidrblock($address, '146.185.254.0/23', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-05). ');
$ax += cidrblock($address, '146.255.192.0/22', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-06). ');
$ax += cidrblock($address, '146.255.196.0/23', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-07). ');
$ax += cidrblock($address, '146.255.200.0/23', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-08). ');
$ax += cidrblock($address, '146.255.216.0/21', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-09). ');
$ax += cidrblock($address, '176.58.32.0/21', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-10). ');
$ax += cidrblock($address, '176.58.40.0/24', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-11). ');
$ax += cidrblock($address, '178.170.189.0/24', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-12). ');
$ax += cidrblock($address, '185.91.175.0/24', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-13). ');
$ax += cidrblock($address, '185.102.139.0/24', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-14). ');
$ax += cidrblock($address, '193.26.217.0/24', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-15). ');
$ax += cidrblock($address, '194.1.236.0/22', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-16). ');
$ax += cidrblock($address, '212.76.128.0/20', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-17). ');
$ax += cidrblock($address, '212.76.144.0/22', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-18). ');
$ax += cidrblock($address, '212.76.152.0/21', 'MnogoByte LLC; Access denied (ASN-42632-MNOGO-19). ');


// Biznes-Host.pl
// AS198414 (updated 2016.05.24)
$ax += cidrblock($address, '91.189.32.0/21', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-00). ');
$ax += cidrblock($address, '91.196.48.0/22', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-01). ');
$ax += cidrblock($address, '91.228.196.0/22', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-02). ');
$ax += cidrblock($address, '91.234.146.0/24', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-03). ');
$ax += cidrblock($address, '91.237.52.0/24', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-04). ');
$ax += cidrblock($address, '91.239.66.0/23', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-05). ');
$ax += cidrblock($address, '155.133.24.0/22', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-06). ');
$ax += cidrblock($address, '155.133.40.0/21', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-07). ');
$ax += cidrblock($address, '185.5.96.0/22', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-08). ');
$ax += cidrblock($address, '185.25.148.0/22', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-09). ');
$ax += cidrblock($address, '185.49.12.0/22', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-10). ');
$ax += cidrblock($address, '193.17.184.0/24', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-11). ');
$ax += cidrblock($address, '195.64.158.0/23', 'Biznes-Host.pl; Access denied (ASN-98414-BIZNESHOST-12). ');


// Yes Networks Unlimited Ltd
// AS24700 (updated 2016.05.24)
$ax += cidrblock($address, '46.174.190.0/23', 'Yes Networks Unlimited Ltd; Access denied (ASN-24700-YESNETWORKS-0). ');


// Staminus Communications
// AS25761 (updated 2016.05.24)
$ax += cidrblock($address, '69.197.0.0/18', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-00). ');
$ax += cidrblock($address, '72.8.128.0/18', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-01). ');
$ax += cidrblock($address, '72.20.0.0/18', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-02). ');
$ax += cidrblock($address, '131.100.228.0/24', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-03). ');
$ax += cidrblock($address, '131.100.230.0/23', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-04). ');
$ax += cidrblock($address, '162.220.32.0/22', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-05). ');
$ax += cidrblock($address, '177.93.104.0/21', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-06). ');
$ax += cidrblock($address, '187.108.192.0/20', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-07). ');
$ax += cidrblock($address, '199.192.72.0/21', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-08). ');
$ax += cidrblock($address, '199.241.193.0/24', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-09). ');
$ax += cidrblock($address, '199.241.194.0/23', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-10). ');
$ax += cidrblock($address, '199.241.196.0/24', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-11). ');
$ax += cidrblock($address, '199.241.198.0/23', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-12). ');
$ax += cidrblock($address, '201.150.116.0/22', 'Staminus Communications; Access denied (ASN-25761-STAMINUS-13). ');


// Enzu Inc
// AS18978 (updated 2016.05.24)
$ax += cidrblock($address, '23.88.0.0/15', 'Enzu Inc; Access denied (ASN-18978-ENZU-00). ');
$ax += cidrblock($address, '23.244.0.0/15', 'Enzu Inc; Access denied (ASN-18978-ENZU-01). ');
$ax += cidrblock($address, '38.126.44.0/23', 'Enzu Inc; Access denied (ASN-18978-ENZU-02). ');
$ax += cidrblock($address, '45.33.144.0/20', 'Enzu Inc; Access denied (ASN-18978-ENZU-03). ');
$ax += cidrblock($address, '45.59.20.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-04). ');
$ax += cidrblock($address, '45.59.27.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-05). ');
$ax += cidrblock($address, '45.74.0.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-06). ');
$ax += cidrblock($address, '104.151.0.0/16', 'Enzu Inc; Access denied (ASN-18978-ENZU-07). ');
$ax += cidrblock($address, '104.202.0.0/15', 'Enzu Inc; Access denied (ASN-18978-ENZU-08). ');
$ax += cidrblock($address, '104.250.162.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-09). ');
$ax += cidrblock($address, '104.250.189.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-10). ');
$ax += cidrblock($address, '104.250.190.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-11). ');
$ax += cidrblock($address, '107.183.0.0/16', 'Enzu Inc; Access denied (ASN-18978-ENZU-12). ');
$ax += cidrblock($address, '108.60.198.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-13). ');
$ax += cidrblock($address, '172.94.16.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-14). ');
$ax += cidrblock($address, '172.94.22.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-15). ');
$ax += cidrblock($address, '172.102.205.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-16). ');
$ax += cidrblock($address, '172.102.215.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-17). ');
$ax += cidrblock($address, '172.111.156.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-18). ');
$ax += cidrblock($address, '172.111.163.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-19). ');
$ax += cidrblock($address, '172.246.0.0/16', 'Enzu Inc; Access denied (ASN-18978-ENZU-20). ');
$ax += cidrblock($address, '184.105.219.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-21). ');
$ax += cidrblock($address, '192.80.128.0/19', 'Enzu Inc; Access denied (ASN-18978-ENZU-22). ');
$ax += cidrblock($address, '192.80.160.0/20', 'Enzu Inc; Access denied (ASN-18978-ENZU-23). ');
$ax += cidrblock($address, '192.80.176.0/21', 'Enzu Inc; Access denied (ASN-18978-ENZU-24). ');
$ax += cidrblock($address, '192.80.184.0/22', 'Enzu Inc; Access denied (ASN-18978-ENZU-25). ');
$ax += cidrblock($address, '192.80.188.0/23', 'Enzu Inc; Access denied (ASN-18978-ENZU-26). ');
$ax += cidrblock($address, '192.80.190.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-27). ');
$ax += cidrblock($address, '192.157.192.0/18', 'Enzu Inc; Access denied (ASN-18978-ENZU-28). ');
$ax += cidrblock($address, '198.56.128.0/17', 'Enzu Inc; Access denied (ASN-18978-ENZU-29). ');
$ax += cidrblock($address, '198.71.80.0/20', 'Enzu Inc; Access denied (ASN-18978-ENZU-30). ');
$ax += cidrblock($address, '198.98.96.0/19', 'Enzu Inc; Access denied (ASN-18978-ENZU-31). ');
$ax += cidrblock($address, '199.48.68.0/22', 'Enzu Inc; Access denied (ASN-18978-ENZU-32). ');
$ax += cidrblock($address, '199.188.72.0/22', 'Enzu Inc; Access denied (ASN-18978-ENZU-33). ');
$ax += cidrblock($address, '199.193.248.0/21', 'Enzu Inc; Access denied (ASN-18978-ENZU-34). ');
$ax += cidrblock($address, '199.229.232.0/22', 'Enzu Inc; Access denied (ASN-18978-ENZU-35). ');
$ax += cidrblock($address, '199.231.208.0/21', 'Enzu Inc; Access denied (ASN-18978-ENZU-36). ');
$ax += cidrblock($address, '206.123.130.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-37). ');
$ax += cidrblock($address, '206.123.134.0/23', 'Enzu Inc; Access denied (ASN-18978-ENZU-38). ');
$ax += cidrblock($address, '206.123.137.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-39). ');
$ax += cidrblock($address, '206.123.139.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-40). ');
$ax += cidrblock($address, '206.123.148.0/23', 'Enzu Inc; Access denied (ASN-18978-ENZU-41). ');
$ax += cidrblock($address, '207.189.160.0/21', 'Enzu Inc; Access denied (ASN-18978-ENZU-42). ');
$ax += cidrblock($address, '216.158.192.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-43). ');
$ax += cidrblock($address, '216.158.194.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-44). ');
$ax += cidrblock($address, '216.158.196.0/23', 'Enzu Inc; Access denied (ASN-18978-ENZU-45). ');
$ax += cidrblock($address, '216.158.199.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-46). ');
$ax += cidrblock($address, '216.158.200.0/22', 'Enzu Inc; Access denied (ASN-18978-ENZU-47). ');
$ax += cidrblock($address, '216.158.204.0/23', 'Enzu Inc; Access denied (ASN-18978-ENZU-48). ');
$ax += cidrblock($address, '216.158.207.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-49). ');
$ax += cidrblock($address, '216.158.208.0/23', 'Enzu Inc; Access denied (ASN-18978-ENZU-50). ');
$ax += cidrblock($address, '216.158.211.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-51). ');
$ax += cidrblock($address, '216.158.212.0/22', 'Enzu Inc; Access denied (ASN-18978-ENZU-52). ');
$ax += cidrblock($address, '216.158.216.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-53). ');
$ax += cidrblock($address, '216.158.218.0/23', 'Enzu Inc; Access denied (ASN-18978-ENZU-54). ');
$ax += cidrblock($address, '216.158.220.0/23', 'Enzu Inc; Access denied (ASN-18978-ENZU-55). ');
$ax += cidrblock($address, '216.158.222.0/24', 'Enzu Inc; Access denied (ASN-18978-ENZU-56). ');


// EGIHosting
// AS18779 (updated 2016.05.24)
$ax += cidrblock($address, '23.27.0.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-00). ');
$ax += cidrblock($address, '23.27.4.0/23', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-01). ');
$ax += cidrblock($address, '23.27.7.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-02). ');
$ax += cidrblock($address, '23.27.8.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-03). ');
$ax += cidrblock($address, '23.27.12.0/23', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-04). ');
$ax += cidrblock($address, '23.27.16.0/23', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-05). ');
$ax += cidrblock($address, '23.27.20.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-06). ');
$ax += cidrblock($address, '23.27.24.0/21', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-07). ');
$ax += cidrblock($address, '23.27.32.0/19', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-08). ');
$ax += cidrblock($address, '23.27.64.0/18', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-09). ');
$ax += cidrblock($address, '23.27.128.0/18', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-10). ');
$ax += cidrblock($address, '23.27.192.0/20', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-11). ');
$ax += cidrblock($address, '23.27.208.0/21', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-12). ');
$ax += cidrblock($address, '23.27.216.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-13). ');
$ax += cidrblock($address, '23.27.228.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-14). ');
$ax += cidrblock($address, '23.27.232.0/21', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-15). ');
$ax += cidrblock($address, '23.27.240.0/20', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-16). ');
$ax += cidrblock($address, '23.230.0.0/16', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-17). ');
$ax += cidrblock($address, '31.187.66.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-18). ');
$ax += cidrblock($address, '38.72.200.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-19). ');
$ax += cidrblock($address, '45.38.0.0/15', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-20). ');
$ax += cidrblock($address, '45.59.18.0/23', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-21). ');
$ax += cidrblock($address, '45.59.28.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-22). ');
$ax += cidrblock($address, '45.59.30.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-23). ');
$ax += cidrblock($address, '50.117.0.0/18', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-24). ');
$ax += cidrblock($address, '50.117.64.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-25). ');
$ax += cidrblock($address, '50.117.69.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-26). ');
$ax += cidrblock($address, '50.117.70.0/23', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-27). ');
$ax += cidrblock($address, '50.117.72.0/21', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-28). ');
$ax += cidrblock($address, '50.117.80.0/20', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-29). ');
$ax += cidrblock($address, '50.117.96.0/19', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-30). ');
$ax += cidrblock($address, '50.118.128.0/19', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-31). ');
$ax += cidrblock($address, '50.118.160.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-32). ');
$ax += cidrblock($address, '50.118.162.0/23', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-33). ');
$ax += cidrblock($address, '50.118.164.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-34). ');
$ax += cidrblock($address, '50.118.168.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-35). ');
$ax += cidrblock($address, '50.118.172.0/23', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-36). ');
$ax += cidrblock($address, '50.118.176.0/20', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-37). ');
$ax += cidrblock($address, '50.118.192.0/18', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-38). ');
$ax += cidrblock($address, '63.141.222.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-39). ');
$ax += cidrblock($address, '65.49.93.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-40). ');
$ax += cidrblock($address, '66.160.191.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-41). ');
$ax += cidrblock($address, '67.220.233.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-42). ');
$ax += cidrblock($address, '68.68.96.0/20', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-43). ');
$ax += cidrblock($address, '69.46.64.0/19', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-44). ');
$ax += cidrblock($address, '69.176.80.0/20', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-45). ');
$ax += cidrblock($address, '72.13.80.0/20', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-46). ');
$ax += cidrblock($address, '72.52.76.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-47). ');
$ax += cidrblock($address, '74.82.43.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-48). ');
$ax += cidrblock($address, '74.114.88.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-49). ');
$ax += cidrblock($address, '74.115.0.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-50). ');
$ax += cidrblock($address, '77.237.228.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-51). ');
$ax += cidrblock($address, '96.43.96.0/20', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-52). ');
$ax += cidrblock($address, '103.232.215.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-53). ');
$ax += cidrblock($address, '104.160.230.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-54). ');
$ax += cidrblock($address, '104.160.235.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-55). ');
$ax += cidrblock($address, '104.160.243.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-56). ');
$ax += cidrblock($address, '104.160.250.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-57). ');
$ax += cidrblock($address, '104.164.0.0/15', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-58). ');
$ax += cidrblock($address, '104.252.0.0/15', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-59). ');
$ax += cidrblock($address, '107.164.0.0/15', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-60). ');
$ax += cidrblock($address, '107.186.0.0/15', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-61). ');
$ax += cidrblock($address, '108.171.32.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-62). ');
$ax += cidrblock($address, '108.171.42.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-63). ');
$ax += cidrblock($address, '108.171.52.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-64). ');
$ax += cidrblock($address, '108.171.62.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-65). ');
$ax += cidrblock($address, '136.0.0.0/16', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-66). ');
$ax += cidrblock($address, '142.111.0.0/16', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-67). ');
$ax += cidrblock($address, '142.252.0.0/16', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-68). ');
$ax += cidrblock($address, '166.88.0.0/16', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-69). ');
$ax += cidrblock($address, '172.85.97.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-70). ');
$ax += cidrblock($address, '172.98.188.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-71). ');
$ax += cidrblock($address, '172.98.191.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-72). ');
$ax += cidrblock($address, '172.120.0.0/15', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-73). ');
$ax += cidrblock($address, '172.252.0.0/16', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-74). ');
$ax += cidrblock($address, '173.245.64.0/19', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-75). ');
$ax += cidrblock($address, '178.18.16.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-76). ');
$ax += cidrblock($address, '178.18.26.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-77). ');
$ax += cidrblock($address, '192.92.114.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-78). ');
$ax += cidrblock($address, '192.177.0.0/16', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-79). ');
$ax += cidrblock($address, '194.110.214.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-80). ');
$ax += cidrblock($address, '199.4.215.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-81). ');
$ax += cidrblock($address, '202.69.240.0/20', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-82). ');
$ax += cidrblock($address, '202.83.4.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-83). ');
$ax += cidrblock($address, '202.83.8.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-84). ');
$ax += cidrblock($address, '205.159.189.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-85). ');
$ax += cidrblock($address, '205.164.0.0/18', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-86). ');
$ax += cidrblock($address, '208.80.4.0/22', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-87). ');
$ax += cidrblock($address, '209.73.128.0/19', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-88). ');
$ax += cidrblock($address, '216.83.32.0/19', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-89). ');
$ax += cidrblock($address, '216.158.193.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-90). ');
$ax += cidrblock($address, '216.158.223.0/24', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-91). ');
$ax += cidrblock($address, '216.172.128.0/19', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-92). ');
$ax += cidrblock($address, '216.224.112.0/20', 'EGIHosting; Access denied (ASN-18779-EGIHOSTING-93). ');


// Hosting Solutions International, Inc
// AS30083 (updated 2016.05.24)
$ax += cidrblock($address, '50.30.32.0/20', 'Hosting Solutions International, Inc; Access denied (ASN-30083-HSI-0). ');
$ax += cidrblock($address, '69.64.32.0/19', 'Hosting Solutions International, Inc; Access denied (ASN-30083-HSI-1). ');
$ax += cidrblock($address, '173.224.112.0/20', 'Hosting Solutions International, Inc; Access denied (ASN-30083-HSI-2). ');
$ax += cidrblock($address, '199.189.84.0/22', 'Hosting Solutions International, Inc; Access denied (ASN-30083-HSI-3). ');
$ax += cidrblock($address, '199.217.112.0/21', 'Hosting Solutions International, Inc; Access denied (ASN-30083-HSI-4). ');
$ax += cidrblock($address, '209.126.96.0/19', 'Hosting Solutions International, Inc; Access denied (ASN-30083-HSI-5). ');
$ax += cidrblock($address, '209.239.112.0/20', 'Hosting Solutions International, Inc; Access denied (ASN-30083-HSI-6). ');


// ONLINE S.A.S.
// AS12876 (updated 2016.05.24)
$ax += cidrblock($address, '62.4.0.0/19', 'ONLINE S.A.S.; Access denied (ASN-12876-ONLINESAS-0). ');
$ax += cidrblock($address, '62.210.0.0/16', 'ONLINE S.A.S.; Access denied (ASN-12876-ONLINESAS-1). ');
$ax += cidrblock($address, '163.172.0.0/16', 'ONLINE S.A.S.; Access denied (ASN-12876-ONLINESAS-2). ');
$ax += cidrblock($address, '195.154.0.0/16', 'ONLINE S.A.S.; Access denied (ASN-12876-ONLINESAS-3). ');
$ax += cidrblock($address, '212.47.224.0/19', 'ONLINE S.A.S.; Access denied (ASN-12876-ONLINESAS-4). ');
$ax += cidrblock($address, '212.83.128.0/18', 'ONLINE S.A.S.; Access denied (ASN-12876-ONLINESAS-5). ');
$ax += cidrblock($address, '212.129.0.0/18', 'ONLINE S.A.S.; Access denied (ASN-12876-ONLINESAS-6). ');


// HZ Hosting Ltd (formerly: Fortunix Networks L.P.)
// AS59711 (updated 2016.05.24)
$ax += cidrblock($address, '5.149.248.0/23', 'HZ Hosting Ltd; Access denied (ASN-59711-HZHOSTING-0). ');
$ax += cidrblock($address, '5.149.254.0/23', 'HZ Hosting Ltd; Access denied (ASN-59711-HZHOSTING-1). ');
$ax += cidrblock($address, '185.80.52.0/22', 'HZ Hosting Ltd; Access denied (ASN-59711-HZHOSTING-2). ');
$ax += cidrblock($address, '185.81.114.0/23', 'HZ Hosting Ltd; Access denied (ASN-59711-HZHOSTING-3). ');
$ax += cidrblock($address, '200.7.96.0/23', 'HZ Hosting Ltd; Access denied (ASN-59711-HZHOSTING-4). ');


// FranTech Solutions
// AS53667 (updated 2016.05.26)
$ax += cidrblock($address, '104.244.72.0/21', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-00). ');
$ax += cidrblock($address, '107.189.0.0/21', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-01). ');
$ax += cidrblock($address, '107.189.8.0/24', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-02). ');
$ax += cidrblock($address, '162.244.92.0/22', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-03). ');
$ax += cidrblock($address, '162.245.0.0/21', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-04). ');
$ax += cidrblock($address, '167.88.164.0/22', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-05). ');
$ax += cidrblock($address, '198.98.48.0/20', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-06). ');
$ax += cidrblock($address, '199.19.224.0/22', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-07). ');
$ax += cidrblock($address, '199.195.248.0/21', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-08). ');
$ax += cidrblock($address, '205.185.112.0/20', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-09). ');
$ax += cidrblock($address, '209.141.32.0/19', 'FranTech Solutions; Not an access provider (ASN-53667-FRANTECH-10). ');


// Contina
// AS63008 (updated 2016.05.26)
$ax += cidrblock($address, '23.232.133.0/24', 'Contina; Access denied (ASN-63008-CONTINA-000). ');
$ax += cidrblock($address, '23.232.139.0/24', 'Contina; Access denied (ASN-63008-CONTINA-001). ');
$ax += cidrblock($address, '23.232.149.0/24', 'Contina; Access denied (ASN-63008-CONTINA-002). ');
$ax += cidrblock($address, '23.232.160.0/24', 'Contina; Access denied (ASN-63008-CONTINA-003). ');
$ax += cidrblock($address, '23.232.165.0/24', 'Contina; Access denied (ASN-63008-CONTINA-004). ');
$ax += cidrblock($address, '23.232.175.0/24', 'Contina; Access denied (ASN-63008-CONTINA-005). ');
$ax += cidrblock($address, '23.232.193.0/24', 'Contina; Access denied (ASN-63008-CONTINA-006). ');
$ax += cidrblock($address, '23.232.254.0/24', 'Contina; Access denied (ASN-63008-CONTINA-007). ');
$ax += cidrblock($address, '23.247.135.0/24', 'Contina; Access denied (ASN-63008-CONTINA-008). ');
$ax += cidrblock($address, '23.247.136.0/24', 'Contina; Access denied (ASN-63008-CONTINA-09). ');
$ax += cidrblock($address, '23.247.142.0/24', 'Contina; Access denied (ASN-63008-CONTINA-010). ');
$ax += cidrblock($address, '23.247.183.0/24', 'Contina; Access denied (ASN-63008-CONTINA-011). ');
$ax += cidrblock($address, '23.247.184.0/23', 'Contina; Access denied (ASN-63008-CONTINA-012). ');
$ax += cidrblock($address, '23.247.201.0/24', 'Contina; Access denied (ASN-63008-CONTINA-013). ');
$ax += cidrblock($address, '23.247.202.0/23', 'Contina; Access denied (ASN-63008-CONTINA-014). ');
$ax += cidrblock($address, '23.247.211.0/24', 'Contina; Access denied (ASN-63008-CONTINA-015). ');
$ax += cidrblock($address, '23.247.212.0/23', 'Contina; Access denied (ASN-63008-CONTINA-016). ');
$ax += cidrblock($address, '23.247.222.0/23', 'Contina; Access denied (ASN-63008-CONTINA-017). ');
$ax += cidrblock($address, '23.247.224.0/24', 'Contina; Access denied (ASN-63008-CONTINA-018). ');
$ax += cidrblock($address, '23.247.237.0/24', 'Contina; Access denied (ASN-63008-CONTINA-019). ');
$ax += cidrblock($address, '23.247.238.0/23', 'Contina; Access denied (ASN-63008-CONTINA-020). ');
$ax += cidrblock($address, '45.41.198.0/24', 'Contina; Access denied (ASN-63008-CONTINA-021). ');
$ax += cidrblock($address, '45.41.211.0/24', 'Contina; Access denied (ASN-63008-CONTINA-022). ');
$ax += cidrblock($address, '45.42.197.0/24', 'Contina; Access denied (ASN-63008-CONTINA-023). ');
$ax += cidrblock($address, '45.42.222.0/24', 'Contina; Access denied (ASN-63008-CONTINA-024). ');
$ax += cidrblock($address, '45.45.128.0/17', 'Contina; Access denied (ASN-63008-CONTINA-025). ');
$ax += cidrblock($address, '45.61.35.0/24', 'Contina; Access denied (ASN-63008-CONTINA-026). ');
$ax += cidrblock($address, '45.62.42.0/24', 'Contina; Access denied (ASN-63008-CONTINA-027). ');
$ax += cidrblock($address, '64.85.26.0/23', 'Contina; Access denied (ASN-63008-CONTINA-028). ');
$ax += cidrblock($address, '66.171.32.0/23', 'Contina; Access denied (ASN-63008-CONTINA-029). ');
$ax += cidrblock($address, '69.161.197.0/24', 'Contina; Access denied (ASN-63008-CONTINA-030). ');
$ax += cidrblock($address, '104.143.30.0/24', 'Contina; Access denied (ASN-63008-CONTINA-031). ');
$ax += cidrblock($address, '104.166.98.0/24', 'Contina; Access denied (ASN-63008-CONTINA-032). ');
$ax += cidrblock($address, '104.166.117.0/24', 'Contina; Access denied (ASN-63008-CONTINA-033). ');
$ax += cidrblock($address, '104.167.192.0/18', 'Contina; Access denied (ASN-63008-CONTINA-034). ');
$ax += cidrblock($address, '104.207.73.0/24', 'Contina; Access denied (ASN-63008-CONTINA-035). ');
$ax += cidrblock($address, '104.207.80.0/24', 'Contina; Access denied (ASN-63008-CONTINA-036). ');
$ax += cidrblock($address, '104.207.93.0/24', 'Contina; Access denied (ASN-63008-CONTINA-037). ');
$ax += cidrblock($address, '104.222.206.0/24', 'Contina; Access denied (ASN-63008-CONTINA-038). ');
$ax += cidrblock($address, '104.237.84.0/24', 'Contina; Access denied (ASN-63008-CONTINA-039). ');
$ax += cidrblock($address, '104.237.86.0/24', 'Contina; Access denied (ASN-63008-CONTINA-040). ');
$ax += cidrblock($address, '104.237.95.0/24', 'Contina; Access denied (ASN-63008-CONTINA-041). ');
$ax += cidrblock($address, '104.249.128.0/18', 'Contina; Access denied (ASN-63008-CONTINA-042). ');
$ax += cidrblock($address, '107.153.6.0/23', 'Contina; Access denied (ASN-63008-CONTINA-043). ');
$ax += cidrblock($address, '107.153.13.0/24', 'Contina; Access denied (ASN-63008-CONTINA-044). ');
$ax += cidrblock($address, '107.153.28.0/24', 'Contina; Access denied (ASN-63008-CONTINA-045). ');
$ax += cidrblock($address, '107.153.110.0/24', 'Contina; Access denied (ASN-63008-CONTINA-046). ');
$ax += cidrblock($address, '107.153.126.0/24', 'Contina; Access denied (ASN-63008-CONTINA-047). ');
$ax += cidrblock($address, '107.153.249.0/24', 'Contina; Access denied (ASN-63008-CONTINA-048). ');
$ax += cidrblock($address, '107.153.251.0/24', 'Contina; Access denied (ASN-63008-CONTINA-049). ');
$ax += cidrblock($address, '107.153.255.0/24', 'Contina; Access denied (ASN-63008-CONTINA-050). ');
$ax += cidrblock($address, '107.168.1.0/24', 'Contina; Access denied (ASN-63008-CONTINA-051). ');
$ax += cidrblock($address, '107.168.3.0/24', 'Contina; Access denied (ASN-63008-CONTINA-052). ');
$ax += cidrblock($address, '107.168.4.0/24', 'Contina; Access denied (ASN-63008-CONTINA-053). ');
$ax += cidrblock($address, '107.168.41.0/24', 'Contina; Access denied (ASN-63008-CONTINA-054). ');
$ax += cidrblock($address, '107.168.50.0/24', 'Contina; Access denied (ASN-63008-CONTINA-055). ');
$ax += cidrblock($address, '107.168.55.0/24', 'Contina; Access denied (ASN-63008-CONTINA-056). ');
$ax += cidrblock($address, '107.168.56.0/24', 'Contina; Access denied (ASN-63008-CONTINA-057). ');
$ax += cidrblock($address, '107.168.58.0/24', 'Contina; Access denied (ASN-63008-CONTINA-058). ');
$ax += cidrblock($address, '107.168.71.0/24', 'Contina; Access denied (ASN-63008-CONTINA-059). ');
$ax += cidrblock($address, '107.168.72.0/24', 'Contina; Access denied (ASN-63008-CONTINA-060). ');
$ax += cidrblock($address, '107.168.127.0/24', 'Contina; Access denied (ASN-63008-CONTINA-061). ');
$ax += cidrblock($address, '107.169.246.0/24', 'Contina; Access denied (ASN-63008-CONTINA-062). ');
$ax += cidrblock($address, '107.169.253.0/24', 'Contina; Access denied (ASN-63008-CONTINA-063). ');
$ax += cidrblock($address, '107.181.64.0/20', 'Contina; Access denied (ASN-63008-CONTINA-064). ');
$ax += cidrblock($address, '107.182.115.0/24', 'Contina; Access denied (ASN-63008-CONTINA-065). ');
$ax += cidrblock($address, '135.84.214.0/24', 'Contina; Access denied (ASN-63008-CONTINA-066). ');
$ax += cidrblock($address, '155.254.117.0/24', 'Contina; Access denied (ASN-63008-CONTINA-067). ');
$ax += cidrblock($address, '155.254.192.0/18', 'Contina; Access denied (ASN-63008-CONTINA-068). ');
$ax += cidrblock($address, '165.84.224.0/23', 'Contina; Access denied (ASN-63008-CONTINA-069). ');
$ax += cidrblock($address, '167.88.100.0/24', 'Contina; Access denied (ASN-63008-CONTINA-070). ');
$ax += cidrblock($address, '167.160.96.0/19', 'Contina; Access denied (ASN-63008-CONTINA-071). ');
$ax += cidrblock($address, '172.82.0.0/17', 'Contina; Access denied (ASN-63008-CONTINA-072). ');
$ax += cidrblock($address, '172.97.88.0/24', 'Contina; Access denied (ASN-63008-CONTINA-073). ');
$ax += cidrblock($address, '172.97.92.0/24', 'Contina; Access denied (ASN-63008-CONTINA-074). ');
$ax += cidrblock($address, '172.97.94.0/24', 'Contina; Access denied (ASN-63008-CONTINA-075). ');
$ax += cidrblock($address, '172.98.3.0/24', 'Contina; Access denied (ASN-63008-CONTINA-076). ');
$ax += cidrblock($address, '172.98.35.0/24', 'Contina; Access denied (ASN-63008-CONTINA-077). ');
$ax += cidrblock($address, '172.102.134.0/24', 'Contina; Access denied (ASN-63008-CONTINA-078). ');
$ax += cidrblock($address, '172.110.170.0/23', 'Contina; Access denied (ASN-63008-CONTINA-079). ');
$ax += cidrblock($address, '192.64.24.0/24', 'Contina; Access denied (ASN-63008-CONTINA-080). ');
$ax += cidrblock($address, '192.64.26.0/24', 'Contina; Access denied (ASN-63008-CONTINA-081). ');
$ax += cidrblock($address, '192.69.251.0/24', 'Contina; Access denied (ASN-63008-CONTINA-082). ');
$ax += cidrblock($address, '192.77.248.0/24', 'Contina; Access denied (ASN-63008-CONTINA-083). ');
$ax += cidrblock($address, '192.144.156.0/23', 'Contina; Access denied (ASN-63008-CONTINA-084). ');
$ax += cidrblock($address, '192.144.188.0/23', 'Contina; Access denied (ASN-63008-CONTINA-085). ');
$ax += cidrblock($address, '192.144.220.0/23', 'Contina; Access denied (ASN-63008-CONTINA-086). ');
$ax += cidrblock($address, '192.171.30.0/23', 'Contina; Access denied (ASN-63008-CONTINA-087). ');
$ax += cidrblock($address, '192.171.227.0/24', 'Contina; Access denied (ASN-63008-CONTINA-088). ');
$ax += cidrblock($address, '192.200.26.0/24', 'Contina; Access denied (ASN-63008-CONTINA-089). ');
$ax += cidrblock($address, '192.200.29.0/24', 'Contina; Access denied (ASN-63008-CONTINA-090). ');
$ax += cidrblock($address, '192.200.31.0/24', 'Contina; Access denied (ASN-63008-CONTINA-091). ');
$ax += cidrblock($address, '192.230.39.0/24', 'Contina; Access denied (ASN-63008-CONTINA-092). ');
$ax += cidrblock($address, '192.230.61.0/24', 'Contina; Access denied (ASN-63008-CONTINA-093). ');
$ax += cidrblock($address, '192.240.192.0/24', 'Contina; Access denied (ASN-63008-CONTINA-094). ');
$ax += cidrblock($address, '192.240.212.0/24', 'Contina; Access denied (ASN-63008-CONTINA-095). ');
$ax += cidrblock($address, '192.240.245.0/24', 'Contina; Access denied (ASN-63008-CONTINA-096). ');
$ax += cidrblock($address, '192.255.70.0/24', 'Contina; Access denied (ASN-63008-CONTINA-097). ');
$ax += cidrblock($address, '192.255.74.0/24', 'Contina; Access denied (ASN-63008-CONTINA-098). ');
$ax += cidrblock($address, '192.255.93.0/24', 'Contina; Access denied (ASN-63008-CONTINA-99). ');
$ax += cidrblock($address, '192.255.108.0/24', 'Contina; Access denied (ASN-63008-CONTINA-100). ');
$ax += cidrblock($address, '204.62.122.0/24', 'Contina; Access denied (ASN-63008-CONTINA-101). ');
$ax += cidrblock($address, '205.234.120.0/23', 'Contina; Access denied (ASN-63008-CONTINA-102). ');
$ax += cidrblock($address, '205.234.126.0/23', 'Contina; Access denied (ASN-63008-CONTINA-103). ');
$ax += cidrblock($address, '206.225.135.0/24', 'Contina; Access denied (ASN-63008-CONTINA-104). ');
$ax += cidrblock($address, '207.89.22.0/23', 'Contina; Access denied (ASN-63008-CONTINA-105). ');
$ax += cidrblock($address, '216.162.43.0/24', 'Contina; Access denied (ASN-63008-CONTINA-106). ');


// Continuum Data Centers, LLC
// AS53264 (updated 2016.05.26)
$ax += cidrblock($address, '64.79.96.0/20', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-00). ');
$ax += cidrblock($address, '64.187.232.0/21', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-01). ');
$ax += cidrblock($address, '74.117.236.0/22', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-02). ');
$ax += cidrblock($address, '74.119.216.0/22', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-03). ');
$ax += cidrblock($address, '74.121.180.0/22', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-04). ');
$ax += cidrblock($address, '74.122.192.0/21', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-05). ');
$ax += cidrblock($address, '162.244.132.0/22', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-06). ');
$ax += cidrblock($address, '173.243.112.0/20', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-07). ');
$ax += cidrblock($address, '192.208.176.0/20', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-08). ');
$ax += cidrblock($address, '198.50.24.0/21', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-09). ');
$ax += cidrblock($address, '199.16.8.0/21', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-10). ');
$ax += cidrblock($address, '199.96.80.0/21', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-11). ');
$ax += cidrblock($address, '199.192.200.0/21', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-12). ');
$ax += cidrblock($address, '210.16.102.0/24', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-13). ');
$ax += cidrblock($address, '216.107.144.0/20', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-14). ');
$ax += cidrblock($address, '216.231.128.0/20', 'Continuum Data Centers; Access denied (ASN-53264-CONTINUUM-15). ');


// ESDS Software Solution
// AS45815 (updated 2016.05.26)
$ax += cidrblock($address, '103.212.120.0/23', 'ESDS Software Solution; Access denied (ASN-45815-ESDS-0). ');
$ax += cidrblock($address, '103.249.99.0/24', 'ESDS Software Solution; Access denied (ASN-45815-ESDS-1). ');
$ax += cidrblock($address, '115.124.96.0/21', 'ESDS Software Solution; Access denied (ASN-45815-ESDS-2). ');
$ax += cidrblock($address, '115.124.104.0/24', 'ESDS Software Solution; Access denied (ASN-45815-ESDS-3). ');
$ax += cidrblock($address, '115.124.106.0/23', 'ESDS Software Solution; Access denied (ASN-45815-ESDS-4). ');
$ax += cidrblock($address, '115.124.108.0/23', 'ESDS Software Solution; Access denied (ASN-45815-ESDS-5). ');
$ax += cidrblock($address, '115.124.112.0/24', 'ESDS Software Solution; Access denied (ASN-45815-ESDS-6). ');
$ax += cidrblock($address, '115.124.114.0/23', 'ESDS Software Solution; Access denied (ASN-45815-ESDS-7). ');
$ax += cidrblock($address, '115.124.120.0/21', 'ESDS Software Solution; Access denied (ASN-45815-ESDS-8). ');


// QuickPacket, LLC
// AS46261 (updated 2016.05.26)
$ax += cidrblock($address, '23.251.224.0/19', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-00). ');
$ax += cidrblock($address, '45.43.192.0/19', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-01). ');
$ax += cidrblock($address, '45.59.21.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-02). ');
$ax += cidrblock($address, '45.59.25.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-03). ');
$ax += cidrblock($address, '59.152.124.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-04). ');
$ax += cidrblock($address, '63.221.88.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-05). ');
$ax += cidrblock($address, '67.220.224.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-06). ');
$ax += cidrblock($address, '67.220.240.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-07). ');
$ax += cidrblock($address, '67.220.244.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-08). ');
$ax += cidrblock($address, '103.203.40.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-09). ');
$ax += cidrblock($address, '104.160.224.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-10). ');
$ax += cidrblock($address, '104.160.228.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-11). ');
$ax += cidrblock($address, '104.160.231.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-12). ');
$ax += cidrblock($address, '104.160.232.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-13). ');
$ax += cidrblock($address, '104.160.234.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-14). ');
$ax += cidrblock($address, '104.160.236.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-15). ');
$ax += cidrblock($address, '104.160.238.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-16). ');
$ax += cidrblock($address, '104.160.240.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-17). ');
$ax += cidrblock($address, '104.160.242.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-18). ');
$ax += cidrblock($address, '104.160.244.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-19). ');
$ax += cidrblock($address, '104.160.246.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-20). ');
$ax += cidrblock($address, '104.160.249.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-21). ');
$ax += cidrblock($address, '104.160.251.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-22). ');
$ax += cidrblock($address, '104.160.252.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-23). ');
$ax += cidrblock($address, '104.166.64.0/19', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-24). ');
$ax += cidrblock($address, '104.247.192.0/19', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-25). ');
$ax += cidrblock($address, '104.251.81.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-26). ');
$ax += cidrblock($address, '107.161.112.0/20', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-27). ');
$ax += cidrblock($address, '107.181.130.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-28). ');
$ax += cidrblock($address, '114.31.211.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-29). ');
$ax += cidrblock($address, '155.254.60.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-30). ');
$ax += cidrblock($address, '160.202.64.0/18', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-31). ');
$ax += cidrblock($address, '162.210.36.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-32). ');
$ax += cidrblock($address, '162.213.215.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-33). ');
$ax += cidrblock($address, '162.217.172.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-34). ');
$ax += cidrblock($address, '162.223.28.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-35). ');
$ax += cidrblock($address, '162.248.208.0/21', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-36). ');
$ax += cidrblock($address, '170.75.144.0/20', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-37). ');
$ax += cidrblock($address, '172.82.128.0/18', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-38). ');
$ax += cidrblock($address, '172.85.96.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-39). ');
$ax += cidrblock($address, '172.85.98.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-40). ');
$ax += cidrblock($address, '172.85.100.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-41). ');
$ax += cidrblock($address, '172.85.104.0/21', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-42). ');
$ax += cidrblock($address, '172.98.162.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-43). ');
$ax += cidrblock($address, '172.98.164.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-44). ');
$ax += cidrblock($address, '172.98.171.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-45). ');
$ax += cidrblock($address, '172.98.172.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-46). ');
$ax += cidrblock($address, '172.98.181.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-47). ');
$ax += cidrblock($address, '172.98.184.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-48). ');
$ax += cidrblock($address, '172.102.192.0/20', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-49). ');
$ax += cidrblock($address, '172.102.208.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-50). ');
$ax += cidrblock($address, '172.102.217.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-51). ');
$ax += cidrblock($address, '172.102.220.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-52). ');
$ax += cidrblock($address, '173.246.160.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-53). ');
$ax += cidrblock($address, '173.246.163.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-54). ');
$ax += cidrblock($address, '173.246.164.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-55). ');
$ax += cidrblock($address, '173.246.168.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-56). ');
$ax += cidrblock($address, '173.246.171.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-57). ');
$ax += cidrblock($address, '173.246.172.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-58). ');
$ax += cidrblock($address, '173.246.176.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-59). ');
$ax += cidrblock($address, '173.246.183.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-60). ');
$ax += cidrblock($address, '173.246.184.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-61). ');
$ax += cidrblock($address, '173.246.188.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-62). ');
$ax += cidrblock($address, '173.246.190.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-63). ');
$ax += cidrblock($address, '192.225.96.0/22', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-64). ');
$ax += cidrblock($address, '192.225.102.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-65). ');
$ax += cidrblock($address, '192.225.105.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-66). ');
$ax += cidrblock($address, '192.225.106.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-67). ');
$ax += cidrblock($address, '192.225.110.0/23', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-68). ');
$ax += cidrblock($address, '199.101.96.0/21', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-69). ');
$ax += cidrblock($address, '199.233.232.0/21', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-70). ');
$ax += cidrblock($address, '216.158.195.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-71). ');
$ax += cidrblock($address, '216.158.206.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-72). ');
$ax += cidrblock($address, '216.158.217.0/24', 'QuickPacket, LLC; Access denied (ASN-46261-QUICKPACKET-73). ');


// ScaleUp Technologies GmbH & Co. KG
// AS29014 (updated 2016.05.27)
$ax += cidrblock($address, '81.28.224.0/21', 'ScaleUp Technologies; Access denied (ASN-S29014-SCALEUP-0). ');
$ax += cidrblock($address, '81.28.232.0/22', 'ScaleUp Technologies; Access denied (ASN-S29014-SCALEUP-1). ');
$ax += cidrblock($address, '81.28.237.0/24', 'ScaleUp Technologies; Access denied (ASN-S29014-SCALEUP-2). ');
$ax += cidrblock($address, '85.158.0.0/21', 'ScaleUp Technologies; Access denied (ASN-S29014-SCALEUP-3). ');
$ax += cidrblock($address, '93.92.128.0/21', 'ScaleUp Technologies; Access denied (ASN-S29014-SCALEUP-4). ');
$ax += cidrblock($address, '185.8.8.0/22', 'ScaleUp Technologies; Access denied (ASN-S29014-SCALEUP-5). ');
$ax += cidrblock($address, '193.41.116.0/23', 'ScaleUp Technologies; Access denied (ASN-S29014-SCALEUP-6). ');
$ax += cidrblock($address, '193.53.23.0/24', 'ScaleUp Technologies; Access denied (ASN-S29014-SCALEUP-7). ');
$ax += cidrblock($address, '195.177.232.0/23', 'ScaleUp Technologies; Access denied (ASN-S29014-SCALEUP-8). ');


// HIVELOCITY VENTURES CORP
// AS29802 (updated 2016.05.27)
$ax += cidrblock($address, '5.62.152.0/21', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-00). ');
$ax += cidrblock($address, '23.111.128.0/21', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-01). ');
$ax += cidrblock($address, '23.111.144.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-02). ');
$ax += cidrblock($address, '37.9.44.0/22', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-03). ');
$ax += cidrblock($address, '38.112.194.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-04). ');
$ax += cidrblock($address, '64.140.144.0/22', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-05). ');
$ax += cidrblock($address, '66.96.80.0/20', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-06). ');
$ax += cidrblock($address, '66.232.96.0/19', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-07). ');
$ax += cidrblock($address, '68.233.224.0/19', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-08). ');
$ax += cidrblock($address, '69.46.0.0/19', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-09). ');
$ax += cidrblock($address, '74.50.96.0/19', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-10). ');
$ax += cidrblock($address, '79.110.28.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-11). ');
$ax += cidrblock($address, '79.110.31.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-12). ');
$ax += cidrblock($address, '79.133.106.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-13). ');
$ax += cidrblock($address, '91.204.14.0/23', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-14). ');
$ax += cidrblock($address, '91.209.57.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-15). ');
$ax += cidrblock($address, '95.181.218.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-16). ');
$ax += cidrblock($address, '96.31.64.0/19', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-17). ');
$ax += cidrblock($address, '104.156.48.0/20', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-18). ');
$ax += cidrblock($address, '104.238.58.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-19). ');
$ax += cidrblock($address, '162.216.4.0/22', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-20). ');
$ax += cidrblock($address, '162.220.56.0/21', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-21). ');
$ax += cidrblock($address, '162.252.80.0/21', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-22). ');
$ax += cidrblock($address, '162.254.144.0/21', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-23). ');
$ax += cidrblock($address, '172.86.147.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-24). ');
$ax += cidrblock($address, '179.61.12.0/23', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-25). ');
$ax += cidrblock($address, '179.61.14.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-26). ');
$ax += cidrblock($address, '185.13.32.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-27). ');
$ax += cidrblock($address, '185.14.194.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-28). ');
$ax += cidrblock($address, '185.89.100.0/23', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-29). ');
$ax += cidrblock($address, '185.101.69.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-30). ');
$ax += cidrblock($address, '185.101.70.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-31). ');
$ax += cidrblock($address, '190.115.96.0/20', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-32). ');
$ax += cidrblock($address, '192.124.119.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-33). ');
$ax += cidrblock($address, '193.9.28.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-34). ');
$ax += cidrblock($address, '198.178.120.0/21', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-35). ');
$ax += cidrblock($address, '199.47.151.0/24', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-36). ');
$ax += cidrblock($address, '199.59.144.0/22', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-37). ');
$ax += cidrblock($address, '199.119.100.0/22', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-38). ');
$ax += cidrblock($address, '199.167.144.0/21', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-39). ');
$ax += cidrblock($address, '199.193.112.0/21', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-40). ');
$ax += cidrblock($address, '203.132.24.0/22', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-41). ');
$ax += cidrblock($address, '206.51.224.0/20', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-42). ');
$ax += cidrblock($address, '209.133.192.0/19', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-43). ');
$ax += cidrblock($address, '216.109.224.0/20', 'HIVELOCITY VENTURES CORP; Access denied (ASN-29802-HIVELOCITY-44). ');


// XT GLOBAL NETWORKS LTD
// AS48095 (updated 2016.05.27)
$ax += cidrblock($address, '31.14.0.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-000). ');
$ax += cidrblock($address, '31.14.24.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-001). ');
$ax += cidrblock($address, '31.14.68.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-002). ');
$ax += cidrblock($address, '31.14.72.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-003). ');
$ax += cidrblock($address, '31.14.103.0/24', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-004). ');
$ax += cidrblock($address, '31.14.168.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-005). ');
$ax += cidrblock($address, '31.14.208.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-006). ');
$ax += cidrblock($address, '31.14.240.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-007). ');
$ax += cidrblock($address, '31.14.248.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-008). ');
$ax += cidrblock($address, '31.14.255.0/24', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-009). ');
$ax += cidrblock($address, '37.153.140.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-010). ');
$ax += cidrblock($address, '37.153.144.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-011). ');
$ax += cidrblock($address, '37.153.152.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-012). ');
$ax += cidrblock($address, '37.153.160.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-013). ');
$ax += cidrblock($address, '37.153.168.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-014). ');
$ax += cidrblock($address, '37.156.72.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-015). ');
$ax += cidrblock($address, '37.156.104.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-016). ');
$ax += cidrblock($address, '37.156.184.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-017). ');
$ax += cidrblock($address, '37.156.216.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-018). ');
$ax += cidrblock($address, '37.156.228.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-019). ');
$ax += cidrblock($address, '37.156.252.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-020). ');
$ax += cidrblock($address, '46.102.96.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-021). ');
$ax += cidrblock($address, '46.102.160.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-022). ');
$ax += cidrblock($address, '77.81.92.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-023). ');
$ax += cidrblock($address, '77.81.124.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-024). ');
$ax += cidrblock($address, '77.81.160.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-025). ');
$ax += cidrblock($address, '77.81.167.0/24', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-026). ');
$ax += cidrblock($address, '77.81.168.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-027). ');
$ax += cidrblock($address, '84.247.4.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-028). ');
$ax += cidrblock($address, '84.247.40.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-029). ');
$ax += cidrblock($address, '85.204.64.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-030). ');
$ax += cidrblock($address, '85.204.112.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-031). ');
$ax += cidrblock($address, '85.204.148.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-032). ');
$ax += cidrblock($address, '85.204.152.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-033). ');
$ax += cidrblock($address, '85.204.160.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-034). ');
$ax += cidrblock($address, '85.204.168.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-035). ');
$ax += cidrblock($address, '86.104.20.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-036). ');
$ax += cidrblock($address, '86.104.68.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-037). ');
$ax += cidrblock($address, '86.104.76.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-038). ');
$ax += cidrblock($address, '86.104.112.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-039). ');
$ax += cidrblock($address, '86.104.120.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-040). ');
$ax += cidrblock($address, '86.104.168.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-041). ');
$ax += cidrblock($address, '86.104.248.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-042). ');
$ax += cidrblock($address, '86.105.20.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-043). ');
$ax += cidrblock($address, '86.105.188.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-044). ');
$ax += cidrblock($address, '86.105.200.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-045). ');
$ax += cidrblock($address, '86.105.248.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-046). ');
$ax += cidrblock($address, '86.106.0.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-047). ');
$ax += cidrblock($address, '86.106.16.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-048). ');
$ax += cidrblock($address, '86.106.64.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-049). ');
$ax += cidrblock($address, '89.32.64.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-050). ');
$ax += cidrblock($address, '89.32.80.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-051). ');
$ax += cidrblock($address, '89.32.112.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-052). ');
$ax += cidrblock($address, '89.32.120.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-053). ');
$ax += cidrblock($address, '89.32.132.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-054). ');
$ax += cidrblock($address, '89.32.176.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-055). ');
$ax += cidrblock($address, '89.32.192.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-056). ');
$ax += cidrblock($address, '89.32.208.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-057). ');
$ax += cidrblock($address, '89.32.248.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-058). ');
$ax += cidrblock($address, '89.33.40.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-059). ');
$ax += cidrblock($address, '89.33.68.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-060). ');
$ax += cidrblock($address, '89.34.164.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-061). ');
$ax += cidrblock($address, '89.35.28.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-062). ');
$ax += cidrblock($address, '89.35.96.0/20', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-063). ');
$ax += cidrblock($address, '89.35.136.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-064). ');
$ax += cidrblock($address, '89.35.196.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-065). ');
$ax += cidrblock($address, '89.36.0.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-066). ');
$ax += cidrblock($address, '89.36.32.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-067). ');
$ax += cidrblock($address, '89.36.40.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-068). ');
$ax += cidrblock($address, '89.36.64.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-069). ');
$ax += cidrblock($address, '89.36.168.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-070). ');
$ax += cidrblock($address, '89.36.236.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-071). ');
$ax += cidrblock($address, '89.37.64.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-072). ');
$ax += cidrblock($address, '89.37.72.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-073). ');
$ax += cidrblock($address, '89.37.84.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-074). ');
$ax += cidrblock($address, '89.37.88.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-075). ');
$ax += cidrblock($address, '89.37.228.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-076). ');
$ax += cidrblock($address, '89.37.236.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-077). ');
$ax += cidrblock($address, '89.38.16.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-078). ');
$ax += cidrblock($address, '89.38.28.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-079). ');
$ax += cidrblock($address, '89.38.96.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-080). ');
$ax += cidrblock($address, '89.38.160.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-081). ');
$ax += cidrblock($address, '89.38.176.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-082). ');
$ax += cidrblock($address, '89.38.216.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-083). ');
$ax += cidrblock($address, '89.39.24.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-084). ');
$ax += cidrblock($address, '89.39.104.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-085). ');
$ax += cidrblock($address, '89.39.136.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-086). ');
$ax += cidrblock($address, '89.39.160.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-087). ');
$ax += cidrblock($address, '89.39.180.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-088). ');
$ax += cidrblock($address, '89.39.208.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-089). ');
$ax += cidrblock($address, '89.39.216.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-090). ');
$ax += cidrblock($address, '89.40.0.0/20', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-091). ');
$ax += cidrblock($address, '89.41.44.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-092). ');
$ax += cidrblock($address, '89.41.52.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-093). ');
$ax += cidrblock($address, '89.42.120.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-094). ');
$ax += cidrblock($address, '89.42.164.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-095). ');
$ax += cidrblock($address, '89.42.208.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-096). ');
$ax += cidrblock($address, '89.42.236.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-097). ');
$ax += cidrblock($address, '89.43.56.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-098). ');
$ax += cidrblock($address, '89.43.112.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-99). ');
$ax += cidrblock($address, '89.43.184.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-100). ');
$ax += cidrblock($address, '89.44.16.0/20', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-101). ');
$ax += cidrblock($address, '89.44.32.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-102). ');
$ax += cidrblock($address, '89.44.40.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-103). ');
$ax += cidrblock($address, '89.44.48.0/20', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-104). ');
$ax += cidrblock($address, '89.44.72.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-105). ');
$ax += cidrblock($address, '89.44.92.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-106). ');
$ax += cidrblock($address, '89.44.96.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-107). ');
$ax += cidrblock($address, '89.44.156.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-108). ');
$ax += cidrblock($address, '89.44.216.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-109). ');
$ax += cidrblock($address, '89.45.120.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-110). ');
$ax += cidrblock($address, '89.46.32.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-111). ');
$ax += cidrblock($address, '89.46.88.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-112). ');
$ax += cidrblock($address, '89.46.144.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-113). ');
$ax += cidrblock($address, '89.46.252.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-114). ');
$ax += cidrblock($address, '89.47.16.0/20', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-115). ');
$ax += cidrblock($address, '89.47.44.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-116). ');
$ax += cidrblock($address, '89.47.160.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-117). ');
$ax += cidrblock($address, '89.47.236.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-118). ');
$ax += cidrblock($address, '92.114.4.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-119). ');
$ax += cidrblock($address, '92.114.36.0/24', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-120). ');
$ax += cidrblock($address, '92.114.53.0/24', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-121). ');
$ax += cidrblock($address, '92.114.56.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-122). ');
$ax += cidrblock($address, '92.114.83.0/24', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-123). ');
$ax += cidrblock($address, '92.114.100.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-124). ');
$ax += cidrblock($address, '93.113.120.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-125). ');
$ax += cidrblock($address, '93.113.216.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-126). ');
$ax += cidrblock($address, '93.114.196.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-127). ');
$ax += cidrblock($address, '93.114.236.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-128). ');
$ax += cidrblock($address, '93.115.128.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-129). ');
$ax += cidrblock($address, '93.115.192.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-130). ');
$ax += cidrblock($address, '93.117.80.0/20', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-131). ');
$ax += cidrblock($address, '93.118.64.0/20', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-132). ');
$ax += cidrblock($address, '93.119.16.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-133). ');
$ax += cidrblock($address, '94.176.44.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-134). ');
$ax += cidrblock($address, '94.176.107.0/24', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-135). ');
$ax += cidrblock($address, '94.176.172.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-136). ');
$ax += cidrblock($address, '94.176.232.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-137). ');
$ax += cidrblock($address, '94.177.24.0/23', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-138). ');
$ax += cidrblock($address, '94.177.68.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-139). ');
$ax += cidrblock($address, '94.177.104.0/23', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-140). ');
$ax += cidrblock($address, '176.223.68.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-141). ');
$ax += cidrblock($address, '176.223.104.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-142). ');
$ax += cidrblock($address, '176.223.128.0/20', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-143). ');
$ax += cidrblock($address, '176.223.172.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-144). ');
$ax += cidrblock($address, '176.223.176.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-145). ');
$ax += cidrblock($address, '185.77.248.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-146). ');
$ax += cidrblock($address, '188.208.0.0/20', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-147). ');
$ax += cidrblock($address, '188.208.40.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-148). ');
$ax += cidrblock($address, '188.208.216.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-149). ');
$ax += cidrblock($address, '188.210.208.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-150). ');
$ax += cidrblock($address, '188.211.160.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-151). ');
$ax += cidrblock($address, '188.212.20.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-152). ');
$ax += cidrblock($address, '188.212.32.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-153). ');
$ax += cidrblock($address, '188.213.136.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-154). ');
$ax += cidrblock($address, '188.214.8.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-155). ');
$ax += cidrblock($address, '188.214.48.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-156). ');
$ax += cidrblock($address, '188.215.20.0/22', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-157). ');
$ax += cidrblock($address, '188.215.224.0/21', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-158). ');
$ax += cidrblock($address, '188.240.128.0/20', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-159). ');
$ax += cidrblock($address, '188.247.228.0/23', 'XT GLOBAL NETWORKS LTD; Access denied (ASN-48095-XTGLOBAL-160). ');


// Datacenter IP, LLC
// AS13739 (updated 2016.05.27)
$ax += cidrblock($address, '104.143.72.0/21', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-00). ');
$ax += cidrblock($address, '162.219.40.0/22', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-01). ');
$ax += cidrblock($address, '162.252.180.0/22', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-02). ');
$ax += cidrblock($address, '192.74.128.0/22', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-03). ');
$ax += cidrblock($address, '192.74.132.0/23', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-04). ');
$ax += cidrblock($address, '192.126.128.0/17', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-05). ');
$ax += cidrblock($address, '192.184.0.0/22', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-06). ');
$ax += cidrblock($address, '198.60.200.0/21', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-07). ');
$ax += cidrblock($address, '198.144.108.0/22', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-08). ');
$ax += cidrblock($address, '199.36.104.0/21', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-09). ');
$ax += cidrblock($address, '199.104.64.0/23', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-10). ');
$ax += cidrblock($address, '208.110.128.0/19', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-11). ');
$ax += cidrblock($address, '216.162.192.0/19', 'Datacenter IP, LLC; Access denied (ASN-13739-DATACENTER-12). ');


// MBA DATACENTERS S.L.
// AS43578 (updated 2016.05.27)
$ax += cidrblock($address, '5.226.172.0/24', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-00). ');
$ax += cidrblock($address, '77.246.176.0/24', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-01). ');
$ax += cidrblock($address, '77.246.179.0/24', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-02). ');
$ax += cidrblock($address, '77.246.181.0/24', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-03). ');
$ax += cidrblock($address, '77.246.182.0/23', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-04). ');
$ax += cidrblock($address, '77.246.188.0/24', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-05). ');
$ax += cidrblock($address, '77.246.190.0/23', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-06). ');
$ax += cidrblock($address, '154.16.158.0/24', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-07). ');
$ax += cidrblock($address, '181.214.90.0/23', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-08). ');
$ax += cidrblock($address, '191.96.102.0/24', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-09). ');
$ax += cidrblock($address, '217.113.247.0/24', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-10). ');
$ax += cidrblock($address, '217.113.248.0/24', 'MBA DATACENTERS S.L.; Access denied (ASN-43578-MBA-11). ');


// CachedNet LLC
// AS46805 (updated 2016.05.27)
$ax += cidrblock($address, '23.92.112.0/20', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-00). ');
$ax += cidrblock($address, '104.160.0.0/19', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-01). ');
$ax += cidrblock($address, '107.150.64.0/20', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-02). ');
$ax += cidrblock($address, '107.150.80.0/21', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-03). ');
$ax += cidrblock($address, '107.150.88.0/22', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-04). ');
$ax += cidrblock($address, '107.150.92.0/23', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-05). ');
$ax += cidrblock($address, '107.150.94.0/24', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-06). ');
$ax += cidrblock($address, '162.212.168.0/21', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-07). ');
$ax += cidrblock($address, '192.40.88.0/22', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-08). ');
$ax += cidrblock($address, '192.40.92.0/23', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-09). ');
$ax += cidrblock($address, '192.40.95.0/24', 'CachedNet LLC; Access denied (ASN-46805-CACHEDNET-10). ');


// Hawk Host Inc
// AS20068 (updated 2016.05.27)
$ax += cidrblock($address, '198.252.106.0/23', 'Hawk Host Inc; Access denied (ASN-20068-HAWKHOST-0). ');
$ax += cidrblock($address, '198.252.108.0/24', 'Hawk Host Inc; Access denied (ASN-20068-HAWKHOST-1). ');


// CariNet, Inc
// AS10439 (updated 2016.05.27)
$ax += cidrblock($address, '66.240.192.0/18', 'CariNet, Inc; Access denied (ASN-10439-CARINET-0). ');
$ax += cidrblock($address, '71.6.128.0/17', 'CariNet, Inc; Access denied (ASN-10439-CARINET-1). ');
$ax += cidrblock($address, '135.84.216.0/24', 'CariNet, Inc; Access denied (ASN-10439-CARINET-2). ');
$ax += cidrblock($address, '206.123.141.0/24', 'CariNet, Inc; Access denied (ASN-10439-CARINET-3). ');
$ax += cidrblock($address, '206.123.142.0/24', 'CariNet, Inc; Access denied (ASN-10439-CARINET-4). ');
$ax += cidrblock($address, '209.126.128.0/17', 'CariNet, Inc; Access denied (ASN-10439-CARINET-5). ');
$ax += cidrblock($address, '216.75.0.0/18', 'CariNet, Inc; Access denied (ASN-10439-CARINET-6). ');
$ax += cidrblock($address, '216.98.128.0/19', 'CariNet, Inc; Access denied (ASN-10439-CARINET-7). ');


// Proxy Pipe, Inc
// AS27458 (updated 2016.05.27)
$ax += cidrblock($address, '31.187.72.0/22', 'Proxy Pipe, Inc; Access denied (ASN-27458-PROXYPIPE-0). ');
$ax += cidrblock($address, '31.220.12.0/23', 'Proxy Pipe, Inc; Access denied (ASN-27458-PROXYPIPE-1). ');
$ax += cidrblock($address, '31.220.14.0/24', 'Proxy Pipe, Inc; Access denied (ASN-27458-PROXYPIPE-2). ');
$ax += cidrblock($address, '192.150.57.0/24', 'Proxy Pipe, Inc; Access denied (ASN-27458-PROXYPIPE-3). ');
$ax += cidrblock($address, '202.165.124.0/23', 'Proxy Pipe, Inc; Access denied (ASN-27458-PROXYPIPE-4). ');


// UK-2 Limited
// AS13213 (updated 2016.05.30)
$ax += cidrblock($address, '31.24.224.0/21', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-00). ');
$ax += cidrblock($address, '37.123.112.0/21', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-01). ');
$ax += cidrblock($address, '37.130.225.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-02). ');
$ax += cidrblock($address, '37.130.226.0/23', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-03). ');
$ax += cidrblock($address, '37.130.228.0/22', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-04). ');
$ax += cidrblock($address, '46.23.64.0/20', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-05). ');
$ax += cidrblock($address, '46.28.48.0/21', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-06). ');
$ax += cidrblock($address, '46.102.148.0/22', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-07). ');
$ax += cidrblock($address, '69.168.225.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-08). ');
$ax += cidrblock($address, '77.92.64.0/19', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-09). ');
$ax += cidrblock($address, '82.163.72.0/21', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-10). ');
$ax += cidrblock($address, '83.170.64.0/18', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-11). ');
$ax += cidrblock($address, '84.247.32.0/22', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-12). ');
$ax += cidrblock($address, '85.203.22.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-13). ');
$ax += cidrblock($address, '88.202.224.0/21', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-14). ');
$ax += cidrblock($address, '89.39.150.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-15). ');
$ax += cidrblock($address, '89.43.68.0/23', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-16). ');
$ax += cidrblock($address, '91.109.240.0/21', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-17). ');
$ax += cidrblock($address, '104.200.156.0/23', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-18). ');
$ax += cidrblock($address, '104.200.158.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-19). ');
$ax += cidrblock($address, '104.245.10.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-20). ');
$ax += cidrblock($address, '104.250.177.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-21). ');
$ax += cidrblock($address, '104.250.180.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-22). ');
$ax += cidrblock($address, '104.250.182.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-23). ');
$ax += cidrblock($address, '109.123.64.0/18', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-24). ');
$ax += cidrblock($address, '142.147.91.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-25). ');
$ax += cidrblock($address, '142.147.92.0/23', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-26). ');
$ax += cidrblock($address, '142.147.94.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-27). ');
$ax += cidrblock($address, '172.98.68.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-28). ');
$ax += cidrblock($address, '172.98.83.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-29). ');
$ax += cidrblock($address, '176.67.160.0/20', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-30). ');
$ax += cidrblock($address, '185.2.136.0/22', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-31). ');
$ax += cidrblock($address, '185.7.227.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-32). ');
$ax += cidrblock($address, '185.9.50.0/23', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-33). ');
$ax += cidrblock($address, '185.35.148.0/22', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-34). ');
$ax += cidrblock($address, '185.38.184.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-35). ');
$ax += cidrblock($address, '185.80.220.0/22', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-36). ');
$ax += cidrblock($address, '185.102.220.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-37). ');
$ax += cidrblock($address, '185.125.64.0/22', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-38). ');
$ax += cidrblock($address, '185.152.0.0/23', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-39). ');
$ax += cidrblock($address, '188.72.97.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-40). ');
$ax += cidrblock($address, '188.72.105.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-41). ');
$ax += cidrblock($address, '188.212.120.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-42). ');
$ax += cidrblock($address, '190.105.192.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-43). ');
$ax += cidrblock($address, '190.121.210.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-44). ');
$ax += cidrblock($address, '191.101.17.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-45). ');
$ax += cidrblock($address, '193.150.8.0/22', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-46). ');
$ax += cidrblock($address, '194.70.234.0/24', 'UK-2 Limited; Access denied (ASN-13213-UK2LIMITED-47). ');


// Reasonnet IP Networks B.V.
// AS25525 (updated 2016.05.30)
$ax += cidrblock($address, '62.84.244.0/22', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-00). ');
$ax += cidrblock($address, '79.99.24.0/21', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-01). ');
$ax += cidrblock($address, '83.98.128.0/18', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-02). ');
$ax += cidrblock($address, '83.98.192.0/19', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-03). ');
$ax += cidrblock($address, '85.92.128.0/19', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-04). ');
$ax += cidrblock($address, '87.237.99.0/24', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-05). ');
$ax += cidrblock($address, '87.237.103.0/24', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-06). ');
$ax += cidrblock($address, '89.18.160.0/19', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-07). ');
$ax += cidrblock($address, '89.30.128.0/17', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-08). ');
$ax += cidrblock($address, '91.199.137.0/24', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-09). ');
$ax += cidrblock($address, '91.216.104.0/24', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-10). ');
$ax += cidrblock($address, '93.175.176.0/20', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-11). ');
$ax += cidrblock($address, '128.140.220.0/22', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-12). ');
$ax += cidrblock($address, '173.239.62.0/23', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-13). ');
$ax += cidrblock($address, '178.248.174.0/23', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-14). ');
$ax += cidrblock($address, '193.33.214.0/23', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-15). ');
$ax += cidrblock($address, '193.84.176.0/24', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-16). ');
$ax += cidrblock($address, '193.189.141.0/24', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-17). ');
$ax += cidrblock($address, '194.145.119.0/24', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-18). ');
$ax += cidrblock($address, '194.146.127.0/24', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-19). ');
$ax += cidrblock($address, '195.234.173.0/24', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-20). ');
$ax += cidrblock($address, '213.189.0.0/19', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-21). ');
$ax += cidrblock($address, '213.247.32.0/19', 'Reasonnet IP Networks; Access denied (ASN-25525-REASONNET-22). ');


// IT7 Networks Inc
// AS25820 (updated 2016.05.30)
$ax += cidrblock($address, '23.83.224.0/19', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-00). ');
$ax += cidrblock($address, '23.105.192.0/19', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-01). ');
$ax += cidrblock($address, '23.252.98.0/23', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-02). ');
$ax += cidrblock($address, '23.252.101.0/24', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-03). ');
$ax += cidrblock($address, '23.252.102.0/23', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-04). ');
$ax += cidrblock($address, '45.62.112.0/20', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-05). ');
$ax += cidrblock($address, '45.78.0.0/18', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-06). ');
$ax += cidrblock($address, '74.121.148.0/22', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-07). ');
$ax += cidrblock($address, '104.128.80.0/20', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-08). ');
$ax += cidrblock($address, '104.160.32.0/22', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-09). ');
$ax += cidrblock($address, '104.160.40.0/21', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-10). ');
$ax += cidrblock($address, '104.194.64.0/21', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-11). ');
$ax += cidrblock($address, '104.194.72.0/22', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-12). ');
$ax += cidrblock($address, '104.194.80.0/20', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-13). ');
$ax += cidrblock($address, '104.224.136.0/22', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-14). ');
$ax += cidrblock($address, '104.224.144.0/22', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-15). ');
$ax += cidrblock($address, '104.224.168.0/21', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-16). ');
$ax += cidrblock($address, '104.224.176.0/20', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-17). ');
$ax += cidrblock($address, '107.182.176.0/20', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-18). ');
$ax += cidrblock($address, '138.128.208.0/21', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-19). ');
$ax += cidrblock($address, '138.128.216.0/22', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-20). ');
$ax += cidrblock($address, '144.168.56.0/21', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-21). ');
$ax += cidrblock($address, '162.211.224.0/22', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-22). ');
$ax += cidrblock($address, '192.243.112.0/20', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-23). ');
$ax += cidrblock($address, '198.35.44.0/22', 'IT7 Networks Inc; Access denied (ASN-25820-IT7NETWORKS-24). ');


// OPTICAL TECHNOLOGIES S.A.C.
// AS27843 (updated 2016.05.30)
$ax += cidrblock($address, '143.0.248.0/22', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-00). ');
$ax += cidrblock($address, '143.208.132.0/22', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-01). ');
$ax += cidrblock($address, '161.132.96.0/19', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-02). ');
$ax += cidrblock($address, '161.132.192.0/19', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-03). ');
$ax += cidrblock($address, '167.249.8.0/22', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-04). ');
$ax += cidrblock($address, '168.121.44.0/22', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-05). ');
$ax += cidrblock($address, '168.121.48.0/22', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-06). ');
$ax += cidrblock($address, '168.121.220.0/22', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-07). ');
$ax += cidrblock($address, '168.121.236.0/22', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-08). ');
$ax += cidrblock($address, '168.181.8.0/22', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-09). ');
$ax += cidrblock($address, '168.205.132.0/22', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-10). ');
$ax += cidrblock($address, '181.177.224.0/19', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-11). ');
$ax += cidrblock($address, '190.12.64.0/19', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-12). ');
$ax += cidrblock($address, '190.102.128.0/19', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-13). ');
$ax += cidrblock($address, '191.98.128.0/18', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-14). ');
$ax += cidrblock($address, '200.10.130.0/24', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-15). ');
$ax += cidrblock($address, '200.16.0.0/22', 'OPTICAL TECHNOLOGIES S.A.C.; Access denied (ASN-27843-OPTICAL-16). ');


// Hosting Services Inc
// AS29302 (updated 2016.05.30)
$ax += cidrblock($address, '5.63.144.0/21', 'Hosting Services Inc; Access denied (ASN-29302-HOSTINGSERVICES-0). ');
$ax += cidrblock($address, '146.185.16.0/20', 'Hosting Services Inc; Access denied (ASN-29302-HOSTINGSERVICES-1). ');


// Awareness Software Limited
// AS34931 (updated 2016.05.30)
$ax += cidrblock($address, '85.159.248.0/21', 'Awareness Software Limited; Access denied (ASN-34931-AWARENESS-0). ');
$ax += cidrblock($address, '89.28.168.0/21', 'Awareness Software Limited; Access denied (ASN-34931-AWARENESS-1). ');
$ax += cidrblock($address, '149.255.56.0/21', 'Awareness Software Limited; Access denied (ASN-34931-AWARENESS-2). ');
$ax += cidrblock($address, '194.9.32.0/23', 'Awareness Software Limited; Access denied (ASN-34931-AWARENESS-3). ');


// Incero LLC
// AS54540 (updated 2016.05.30)
$ax += cidrblock($address, '23.29.112.0/20', 'Incero LLC; Access denied (ASN-54540-INCERO-00). ');
$ax += cidrblock($address, '23.92.65.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-01). ');
$ax += cidrblock($address, '23.92.66.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-02). ');
$ax += cidrblock($address, '23.92.68.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-03). ');
$ax += cidrblock($address, '23.92.72.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-04). ');
$ax += cidrblock($address, '23.92.76.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-05). ');
$ax += cidrblock($address, '23.92.79.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-06). ');
$ax += cidrblock($address, '23.227.160.0/21', 'Incero LLC; Access denied (ASN-54540-INCERO-07). ');
$ax += cidrblock($address, '23.227.168.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-08). ');
$ax += cidrblock($address, '23.227.172.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-09). ');
$ax += cidrblock($address, '23.227.175.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-10). ');
$ax += cidrblock($address, '23.227.176.0/20', 'Incero LLC; Access denied (ASN-54540-INCERO-11). ');
$ax += cidrblock($address, '45.59.121.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-12). ');
$ax += cidrblock($address, '63.142.250.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-13). ');
$ax += cidrblock($address, '63.142.252.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-14). ');
$ax += cidrblock($address, '64.140.150.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-15). ');
$ax += cidrblock($address, '64.140.152.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-16). ');
$ax += cidrblock($address, '64.140.157.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-17). ');
$ax += cidrblock($address, '64.140.158.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-18). ');
$ax += cidrblock($address, '66.11.119.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-19). ');
$ax += cidrblock($address, '66.11.122.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-20). ');
$ax += cidrblock($address, '104.193.224.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-21). ');
$ax += cidrblock($address, '104.237.0.0/21', 'Incero LLC; Access denied (ASN-54540-INCERO-22). ');
$ax += cidrblock($address, '104.251.212.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-23). ');
$ax += cidrblock($address, '104.251.216.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-24). ');
$ax += cidrblock($address, '104.251.222.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-25). ');
$ax += cidrblock($address, '104.255.229.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-26). ');
$ax += cidrblock($address, '104.255.231.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-27). ');
$ax += cidrblock($address, '107.155.64.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-28). ');
$ax += cidrblock($address, '107.155.66.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-29). ');
$ax += cidrblock($address, '107.155.68.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-30). ');
$ax += cidrblock($address, '107.155.72.0/21', 'Incero LLC; Access denied (ASN-54540-INCERO-31). ');
$ax += cidrblock($address, '107.155.80.0/20', 'Incero LLC; Access denied (ASN-54540-INCERO-32). ');
$ax += cidrblock($address, '107.155.96.0/20', 'Incero LLC; Access denied (ASN-54540-INCERO-33). ');
$ax += cidrblock($address, '107.155.112.0/21', 'Incero LLC; Access denied (ASN-54540-INCERO-34). ');
$ax += cidrblock($address, '107.155.120.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-35). ');
$ax += cidrblock($address, '107.155.122.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-36). ');
$ax += cidrblock($address, '107.155.124.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-37). ');
$ax += cidrblock($address, '144.168.32.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-38). ');
$ax += cidrblock($address, '144.168.37.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-39). ');
$ax += cidrblock($address, '144.168.38.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-40). ');
$ax += cidrblock($address, '144.168.40.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-41). ');
$ax += cidrblock($address, '144.168.43.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-42). ');
$ax += cidrblock($address, '144.168.44.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-43). ');
$ax += cidrblock($address, '154.16.81.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-44). ');
$ax += cidrblock($address, '154.16.83.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-45). ');
$ax += cidrblock($address, '162.212.56.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-46). ');
$ax += cidrblock($address, '162.213.192.0/21', 'Incero LLC; Access denied (ASN-54540-INCERO-47). ');
$ax += cidrblock($address, '162.250.144.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-48). ');
$ax += cidrblock($address, '162.250.232.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-49). ');
$ax += cidrblock($address, '172.110.4.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-50). ');
$ax += cidrblock($address, '172.110.8.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-51). ');
$ax += cidrblock($address, '172.110.11.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-52). ');
$ax += cidrblock($address, '172.110.13.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-53). ');
$ax += cidrblock($address, '172.110.15.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-54). ');
$ax += cidrblock($address, '172.110.17.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-55). ');
$ax += cidrblock($address, '172.110.18.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-56). ');
$ax += cidrblock($address, '172.110.20.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-57). ');
$ax += cidrblock($address, '172.110.25.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-58). ');
$ax += cidrblock($address, '172.110.27.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-59). ');
$ax += cidrblock($address, '172.110.28.0/22', 'Incero LLC; Access denied (ASN-54540-INCERO-60). ');
$ax += cidrblock($address, '192.211.48.0/20', 'Incero LLC; Access denied (ASN-54540-INCERO-61). ');
$ax += cidrblock($address, '194.71.169.0/24', 'Incero LLC; Access denied (ASN-54540-INCERO-62). ');
$ax += cidrblock($address, '199.181.238.0/23', 'Incero LLC; Access denied (ASN-54540-INCERO-63). ');


// Linode, LLC
// AS63949 (updated 2016.05.30)
$ax += cidrblock($address, '23.92.16.0/21', 'Linode, LLC; Access denied (ASN-63949-LINODE-00). ');
$ax += cidrblock($address, '23.92.24.0/22', 'Linode, LLC; Access denied (ASN-63949-LINODE-01). ');
$ax += cidrblock($address, '23.239.0.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-02). ');
$ax += cidrblock($address, '23.239.20.0/22', 'Linode, LLC; Access denied (ASN-63949-LINODE-03). ');
$ax += cidrblock($address, '45.33.32.0/19', 'Linode, LLC; Access denied (ASN-63949-LINODE-04). ');
$ax += cidrblock($address, '45.33.64.0/19', 'Linode, LLC; Access denied (ASN-63949-LINODE-05). ');
$ax += cidrblock($address, '45.33.104.0/21', 'Linode, LLC; Access denied (ASN-63949-LINODE-06). ');
$ax += cidrblock($address, '45.56.80.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-07). ');
$ax += cidrblock($address, '45.56.96.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-08). ');
$ax += cidrblock($address, '45.79.64.0/18', 'Linode, LLC; Access denied (ASN-63949-LINODE-09). ');
$ax += cidrblock($address, '45.79.128.0/18', 'Linode, LLC; Access denied (ASN-63949-LINODE-10). ');
$ax += cidrblock($address, '45.79.224.0/19', 'Linode, LLC; Access denied (ASN-63949-LINODE-11). ');
$ax += cidrblock($address, '45.118.132.0/22', 'Linode, LLC; Access denied (ASN-63949-LINODE-12). ');
$ax += cidrblock($address, '50.116.0.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-13). ');
$ax += cidrblock($address, '50.116.48.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-14). ');
$ax += cidrblock($address, '64.62.190.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-15). ');
$ax += cidrblock($address, '64.62.228.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-16). ');
$ax += cidrblock($address, '64.62.231.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-17). ');
$ax += cidrblock($address, '64.71.152.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-18). ');
$ax += cidrblock($address, '65.19.178.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-19). ');
$ax += cidrblock($address, '65.49.60.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-20). ');
$ax += cidrblock($address, '66.29.91.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-21). ');
$ax += cidrblock($address, '66.160.141.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-22). ');
$ax += cidrblock($address, '66.175.208.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-23). ');
$ax += cidrblock($address, '66.220.1.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-24). ');
$ax += cidrblock($address, '66.228.32.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-25). ');
$ax += cidrblock($address, '66.246.75.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-26). ');
$ax += cidrblock($address, '66.246.76.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-27). ');
$ax += cidrblock($address, '66.246.138.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-28). ');
$ax += cidrblock($address, '69.164.208.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-29). ');
$ax += cidrblock($address, '70.47.152.0/21', 'Linode, LLC; Access denied (ASN-63949-LINODE-30). ');
$ax += cidrblock($address, '74.82.2.0/23', 'Linode, LLC; Access denied (ASN-63949-LINODE-31). ');
$ax += cidrblock($address, '74.82.5.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-32). ');
$ax += cidrblock($address, '74.207.240.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-33). ');
$ax += cidrblock($address, '85.90.244.0/22', 'Linode, LLC; Access denied (ASN-63949-LINODE-34). ');
$ax += cidrblock($address, '96.126.96.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-35). ');
$ax += cidrblock($address, '97.107.128.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-36). ');
$ax += cidrblock($address, '103.3.60.0/22', 'Linode, LLC; Access denied (ASN-63949-LINODE-37). ');
$ax += cidrblock($address, '104.200.24.0/21', 'Linode, LLC; Access denied (ASN-63949-LINODE-38). ');
$ax += cidrblock($address, '104.237.144.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-39). ');
$ax += cidrblock($address, '139.162.0.0/18', 'Linode, LLC; Access denied (ASN-63949-LINODE-40). ');
$ax += cidrblock($address, '139.162.128.0/18', 'Linode, LLC; Access denied (ASN-63949-LINODE-41). ');
$ax += cidrblock($address, '162.216.16.0/22', 'Linode, LLC; Access denied (ASN-63949-LINODE-42). ');
$ax += cidrblock($address, '173.230.144.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-43). ');
$ax += cidrblock($address, '173.255.208.0/20', 'Linode, LLC; Access denied (ASN-63949-LINODE-44). ');
$ax += cidrblock($address, '173.255.224.0/19', 'Linode, LLC; Access denied (ASN-63949-LINODE-45). ');
$ax += cidrblock($address, '192.81.128.0/21', 'Linode, LLC; Access denied (ASN-63949-LINODE-46). ');
$ax += cidrblock($address, '192.155.80.0/21', 'Linode, LLC; Access denied (ASN-63949-LINODE-47). ');
$ax += cidrblock($address, '192.155.88.0/22', 'Linode, LLC; Access denied (ASN-63949-LINODE-48). ');
$ax += cidrblock($address, '198.74.48.0/22', 'Linode, LLC; Access denied (ASN-63949-LINODE-49). ');
$ax += cidrblock($address, '198.74.56.0/21', 'Linode, LLC; Access denied (ASN-63949-LINODE-50). ');
$ax += cidrblock($address, '207.192.68.0/22', 'Linode, LLC; Access denied (ASN-63949-LINODE-51). ');
$ax += cidrblock($address, '207.192.72.0/22', 'Linode, LLC; Access denied (ASN-63949-LINODE-52). ');
$ax += cidrblock($address, '209.123.162.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-53). ');
$ax += cidrblock($address, '209.123.234.0/24', 'Linode, LLC; Access denied (ASN-63949-LINODE-54). ');


// Cyber Wurx LLC
// AS22653 (updated 2016.06.09)
$ax += cidrblock($address, '66.154.0.0/18', 'Cyber Wurx LLC; Access denied (ASN-22653-CYBERWURX-0). ');
$ax += cidrblock($address, '66.154.64.0/19', 'Cyber Wurx LLC; Access denied (ASN-22653-CYBERWURX-1). ');
$ax += cidrblock($address, '69.5.112.0/23', 'Cyber Wurx LLC; Access denied (ASN-22653-CYBERWURX-2). ');
$ax += cidrblock($address, '69.61.0.0/17', 'Cyber Wurx LLC; Access denied (ASN-22653-CYBERWURX-3). ');
$ax += cidrblock($address, '103.196.26.0/23', 'Cyber Wurx LLC; Access denied (ASN-22653-CYBERWURX-4). ');
$ax += cidrblock($address, '103.197.90.0/23', 'Cyber Wurx LLC; Access denied (ASN-22653-CYBERWURX-5). ');
$ax += cidrblock($address, '206.130.88.0/24', 'Cyber Wurx LLC; Access denied (ASN-22653-CYBERWURX-6). ');
$ax += cidrblock($address, '209.124.64.0/19', 'Cyber Wurx LLC; Access denied (ASN-22653-CYBERWURX-7). ');
$ax += cidrblock($address, '216.137.144.0/20', 'Cyber Wurx LLC; Access denied (ASN-22653-CYBERWURX-8). ');
$ax += cidrblock($address, '220.158.192.0/22', 'Cyber Wurx LLC; Access denied (ASN-22653-CYBERWURX-9). ');


// Host Sailor Ltd.
// AS60117 (updated 2016.06.09)
$ax += cidrblock($address, '131.72.136.0/22', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-00). ');
$ax += cidrblock($address, '138.99.216.0/22', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-01). ');
$ax += cidrblock($address, '158.46.128.0/19', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-02). ');
$ax += cidrblock($address, '161.123.192.0/18', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-03). ');
$ax += cidrblock($address, '178.171.48.0/24', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-04). ');
$ax += cidrblock($address, '178.171.57.0/24', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-05). ');
$ax += cidrblock($address, '178.171.58.0/23', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-06). ');
$ax += cidrblock($address, '178.171.60.0/22', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-07). ');
$ax += cidrblock($address, '185.45.192.0/23', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-08). ');
$ax += cidrblock($address, '185.82.200.0/22', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-09). ');
$ax += cidrblock($address, '185.91.148.0/22', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-10). ');
$ax += cidrblock($address, '185.106.120.0/22', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-11). ');
$ax += cidrblock($address, '185.117.72.0/22', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-12). ');
$ax += cidrblock($address, '185.121.154.0/24', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-13). ');
$ax += cidrblock($address, '185.141.24.0/22', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-14). ');
$ax += cidrblock($address, '185.146.32.0/22', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-15). ');
$ax += cidrblock($address, '212.68.172.0/22', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-16). ');
$ax += cidrblock($address, '212.68.176.0/20', 'Host Sailor Ltd; Access denied (ASN-60117-HOSTSAILOR-17). ');


// Digital Energy Technologies Chile SpA
// AS61440 (updated 2016.06.09)
$ax += cidrblock($address, '104.243.241.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-000). ');
$ax += cidrblock($address, '138.99.120.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-001). ');
$ax += cidrblock($address, '154.16.19.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-002). ');
$ax += cidrblock($address, '154.16.104.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-003). ');
$ax += cidrblock($address, '154.16.120.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-004). ');
$ax += cidrblock($address, '154.16.133.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-005). ');
$ax += cidrblock($address, '154.16.134.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-006). ');
$ax += cidrblock($address, '154.16.136.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-007). ');
$ax += cidrblock($address, '154.16.140.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-008). ');
$ax += cidrblock($address, '154.16.144.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-009). ');
$ax += cidrblock($address, '154.16.152.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-010). ');
$ax += cidrblock($address, '154.16.160.0/19', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-011). ');
$ax += cidrblock($address, '154.16.192.0/18', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-012). ');
$ax += cidrblock($address, '154.127.48.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-013). ');
$ax += cidrblock($address, '154.127.52.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-014). ');
$ax += cidrblock($address, '172.94.56.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-017). ');
$ax += cidrblock($address, '172.94.117.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-018). ');
$ax += cidrblock($address, '172.111.131.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-019). ');
$ax += cidrblock($address, '172.111.132.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-020). ');
$ax += cidrblock($address, '179.61.195.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-021). ');
$ax += cidrblock($address, '179.61.205.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-024). ');
$ax += cidrblock($address, '179.61.207.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-025). ');
$ax += cidrblock($address, '179.61.209.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-026). ');
$ax += cidrblock($address, '179.61.211.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-027). ');
$ax += cidrblock($address, '179.61.212.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-028). ');
$ax += cidrblock($address, '179.61.220.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-029). ');
$ax += cidrblock($address, '179.61.222.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-030). ');
$ax += cidrblock($address, '179.61.236.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-032). ');
$ax += cidrblock($address, '179.61.241.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-034). ');
$ax += cidrblock($address, '179.61.243.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-035). ');
$ax += cidrblock($address, '179.61.244.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-036). ');
$ax += cidrblock($address, '179.61.249.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-037). ');
$ax += cidrblock($address, '179.61.254.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-038). ');
$ax += cidrblock($address, '181.41.192.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-039). ');
$ax += cidrblock($address, '181.41.194.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-040). ');
$ax += cidrblock($address, '181.41.196.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-041). ');
$ax += cidrblock($address, '181.41.200.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-042). ');
$ax += cidrblock($address, '181.41.208.0/20', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-043). ');
$ax += cidrblock($address, '181.214.0.0/19', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-044). ');
$ax += cidrblock($address, '181.214.32.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-045). ');
$ax += cidrblock($address, '181.214.34.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-046). ');
$ax += cidrblock($address, '181.214.36.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-047). ');
$ax += cidrblock($address, '181.214.38.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-048). ');
$ax += cidrblock($address, '181.214.40.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-049). ');
$ax += cidrblock($address, '181.214.48.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-050). ');
$ax += cidrblock($address, '181.214.51.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-051). ');
$ax += cidrblock($address, '181.214.58.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-052). ');
$ax += cidrblock($address, '181.214.60.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-053). ');
$ax += cidrblock($address, '181.214.64.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-054). ');
$ax += cidrblock($address, '181.214.68.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-055). ');
$ax += cidrblock($address, '181.214.248.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-057). ');
$ax += cidrblock($address, '181.215.0.0/18', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-058). ');
$ax += cidrblock($address, '181.215.88.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-059). ');
$ax += cidrblock($address, '181.215.96.0/19', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-060). ');
$ax += cidrblock($address, '181.215.128.0/19', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-061). ');
$ax += cidrblock($address, '181.215.160.0/20', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-062). ');
$ax += cidrblock($address, '181.215.192.0/20', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-063). ');
$ax += cidrblock($address, '181.215.240.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-064). ');
$ax += cidrblock($address, '181.215.252.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-065). ');
$ax += cidrblock($address, '191.96.0.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-066). ');
$ax += cidrblock($address, '191.96.8.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-067). ');
$ax += cidrblock($address, '191.96.13.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-068). ');
$ax += cidrblock($address, '191.96.15.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-069). ');
$ax += cidrblock($address, '191.96.16.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-070). ');
$ax += cidrblock($address, '191.96.20.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-071). ');
$ax += cidrblock($address, '191.96.22.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-072). ');
$ax += cidrblock($address, '191.96.24.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-073). ');
$ax += cidrblock($address, '191.96.26.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-074). ');
$ax += cidrblock($address, '191.96.28.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-075). ');
$ax += cidrblock($address, '191.96.32.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-076). ');
$ax += cidrblock($address, '191.96.62.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-077). ');
$ax += cidrblock($address, '191.96.64.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-078). ');
$ax += cidrblock($address, '191.96.68.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-079). ');
$ax += cidrblock($address, '191.96.92.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-080). ');
$ax += cidrblock($address, '191.96.98.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-081). ');
$ax += cidrblock($address, '191.96.112.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-082). ');
$ax += cidrblock($address, '191.96.122.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-083). ');
$ax += cidrblock($address, '191.96.128.0/18', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-084). ');
$ax += cidrblock($address, '191.96.192.0/20', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-085). ');
$ax += cidrblock($address, '191.96.208.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-086). ');
$ax += cidrblock($address, '191.96.216.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-088). ');
$ax += cidrblock($address, '191.96.228.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-090). ');
$ax += cidrblock($address, '191.96.232.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-092). ');
$ax += cidrblock($address, '191.96.244.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-093). ');
$ax += cidrblock($address, '191.96.248.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-094). ');
$ax += cidrblock($address, '191.101.0.0/20', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-095). ');
$ax += cidrblock($address, '191.101.18.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-096). ');
$ax += cidrblock($address, '191.101.32.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-097). ');
$ax += cidrblock($address, '191.101.48.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-098). ');
$ax += cidrblock($address, '191.101.56.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-99). ');
$ax += cidrblock($address, '191.101.62.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-100). ');
$ax += cidrblock($address, '191.101.136.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-101). ');
$ax += cidrblock($address, '191.101.144.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-102). ');
$ax += cidrblock($address, '191.101.152.0/21', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-103). ');
$ax += cidrblock($address, '191.101.160.0/20', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-104). ');
$ax += cidrblock($address, '191.101.190.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-105). ');
$ax += cidrblock($address, '191.101.208.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-106). ');
$ax += cidrblock($address, '191.101.224.0/20', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-107). ');
$ax += cidrblock($address, '191.101.241.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-108). ');
$ax += cidrblock($address, '191.101.244.0/24', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-109). ');
$ax += cidrblock($address, '191.101.246.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-110). ');
$ax += cidrblock($address, '191.101.248.0/23', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-111). ');
$ax += cidrblock($address, '191.101.252.0/22', 'Digital Energy Technologies Chile SpA; Access denied (ASN-61440-DETECH-112). ');


// Host Europe GmbH
// AS20738 (updated 2016.06.09)
$ax += cidrblock($address, '37.122.208.0/21', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-00). ');
$ax += cidrblock($address, '46.32.224.0/19', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-01). ');
$ax += cidrblock($address, '79.170.40.0/21', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-02). ');
$ax += cidrblock($address, '80.90.192.0/20', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-03). ');
$ax += cidrblock($address, '81.21.64.0/20', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-04). ');
$ax += cidrblock($address, '91.109.0.0/20', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-05). ');
$ax += cidrblock($address, '92.60.112.0/20', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-06). ');
$ax += cidrblock($address, '94.136.32.0/19', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-07). ');
$ax += cidrblock($address, '95.131.64.0/21', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-08). ');
$ax += cidrblock($address, '109.104.64.0/19', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-09). ');
$ax += cidrblock($address, '176.32.224.0/21', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-10). ');
$ax += cidrblock($address, '212.48.64.0/19', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-11). ');
$ax += cidrblock($address, '212.67.192.0/19', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-12). ');
$ax += cidrblock($address, '217.8.240.0/20', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-13). ');
$ax += cidrblock($address, '217.199.160.0/19', 'Host Europe GmbH; Access denied (ASN-20738-HOSTEUROPE-14). ');


// Nazwa.pl Sp.z.o.o.
// AS15967 (updated 2016.06.17)
$ax += cidrblock($address, '77.55.0.0/16', 'Nazwa.pl Sp.z.o.o.; Access denied (ASN-15967-NAZWA-0). ');
$ax += cidrblock($address, '85.128.128.0/17', 'Nazwa.pl Sp.z.o.o.; Access denied (ASN-15967-NAZWA-1). ');


// eSited Solutions
// AS22552 (updated 2016.06.17)
$ax += cidrblock($address, '23.27.19.0/24', 'eSited Solutions; Access denied (ASN-22552-eSITED-00). ');
$ax += cidrblock($address, '23.249.176.0/20', 'eSited Solutions; Access denied (ASN-22552-eSITED-01). ');
$ax += cidrblock($address, '45.121.136.0/22', 'eSited Solutions; Access denied (ASN-22552-eSITED-02). ');
$ax += cidrblock($address, '66.254.160.0/19', 'eSited Solutions; Access denied (ASN-22552-eSITED-03). ');
$ax += cidrblock($address, '69.87.192.0/20', 'eSited Solutions; Access denied (ASN-22552-eSITED-04). ');
$ax += cidrblock($address, '103.24.152.0/22', 'eSited Solutions; Access denied (ASN-22552-eSITED-05). ');
$ax += cidrblock($address, '103.61.236.0/22', 'eSited Solutions; Access denied (ASN-22552-eSITED-06). ');
$ax += cidrblock($address, '104.167.64.0/19', 'eSited Solutions; Access denied (ASN-22552-eSITED-07). ');
$ax += cidrblock($address, '104.171.176.0/20', 'eSited Solutions; Access denied (ASN-22552-eSITED-08). ');
$ax += cidrblock($address, '104.171.224.0/24', 'eSited Solutions; Access denied (ASN-22552-eSITED-09). ');
$ax += cidrblock($address, '104.171.226.0/23', 'eSited Solutions; Access denied (ASN-22552-eSITED-10). ');
$ax += cidrblock($address, '104.171.228.0/22', 'eSited Solutions; Access denied (ASN-22552-eSITED-11). ');
$ax += cidrblock($address, '104.171.232.0/21', 'eSited Solutions; Access denied (ASN-22552-eSITED-12). ');
$ax += cidrblock($address, '104.195.0.0/18', 'eSited Solutions; Access denied (ASN-22552-eSITED-13). ');
$ax += cidrblock($address, '104.200.160.0/19', 'eSited Solutions; Access denied (ASN-22552-eSITED-14). ');
$ax += cidrblock($address, '104.201.0.0/18', 'eSited Solutions; Access denied (ASN-22552-eSITED-15). ');
$ax += cidrblock($address, '104.221.128.0/17', 'eSited Solutions; Access denied (ASN-22552-eSITED-16). ');
$ax += cidrblock($address, '104.222.224.0/19', 'eSited Solutions; Access denied (ASN-22552-eSITED-17). ');
$ax += cidrblock($address, '104.224.192.0/18', 'eSited Solutions; Access denied (ASN-22552-eSITED-18). ');
$ax += cidrblock($address, '104.232.128.0/19', 'eSited Solutions; Access denied (ASN-22552-eSITED-19). ');
$ax += cidrblock($address, '104.237.64.0/20', 'eSited Solutions; Access denied (ASN-22552-eSITED-20). ');
$ax += cidrblock($address, '104.251.48.0/24', 'eSited Solutions; Access denied (ASN-22552-eSITED-21). ');
$ax += cidrblock($address, '107.178.128.0/21', 'eSited Solutions; Access denied (ASN-22552-eSITED-22). ');
$ax += cidrblock($address, '107.178.136.0/22', 'eSited Solutions; Access denied (ASN-22552-eSITED-23). ');
$ax += cidrblock($address, '107.190.232.0/21', 'eSited Solutions; Access denied (ASN-22552-eSITED-24). ');
$ax += cidrblock($address, '146.71.48.0/20', 'eSited Solutions; Access denied (ASN-22552-eSITED-25). ');
$ax += cidrblock($address, '146.148.168.0/21', 'eSited Solutions; Access denied (ASN-22552-eSITED-26). ');
$ax += cidrblock($address, '162.211.92.0/22', 'eSited Solutions; Access denied (ASN-22552-eSITED-27). ');
$ax += cidrblock($address, '162.245.228.0/22', 'eSited Solutions; Access denied (ASN-22552-eSITED-28). ');
$ax += cidrblock($address, '162.247.232.0/21', 'eSited Solutions; Access denied (ASN-22552-eSITED-29). ');
$ax += cidrblock($address, '167.88.192.0/20', 'eSited Solutions; Access denied (ASN-22552-eSITED-30). ');
$ax += cidrblock($address, '172.80.0.0/17', 'eSited Solutions; Access denied (ASN-22552-eSITED-31). ');
$ax += cidrblock($address, '192.119.136.0/22', 'eSited Solutions; Access denied (ASN-22552-eSITED-32). ');
$ax += cidrblock($address, '192.225.232.0/21', 'eSited Solutions; Access denied (ASN-22552-eSITED-33). ');
$ax += cidrblock($address, '198.44.191.0/24', 'eSited Solutions; Access denied (ASN-22552-eSITED-34). ');
$ax += cidrblock($address, '199.87.232.0/21', 'eSited Solutions; Access denied (ASN-22552-eSITED-35). ');
$ax += cidrblock($address, '208.92.88.0/22', 'eSited Solutions; Access denied (ASN-22552-eSITED-36). ');


// The Endurance International Group, Inc.
// AS29873 (updated 2016.06.17)
$ax += cidrblock($address, '38.113.1.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-00). ');
$ax += cidrblock($address, '38.113.20.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-01). ');
$ax += cidrblock($address, '50.201.183.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-02). ');
$ax += cidrblock($address, '64.79.192.0/19', 'Endurance International; Access denied (ASN-29873-ENDURANCE-03). ');
$ax += cidrblock($address, '64.150.160.0/23', 'Endurance International; Access denied (ASN-29873-ENDURANCE-04). ');
$ax += cidrblock($address, '64.150.162.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-05). ');
$ax += cidrblock($address, '64.150.164.0/22', 'Endurance International; Access denied (ASN-29873-ENDURANCE-06). ');
$ax += cidrblock($address, '64.150.168.0/21', 'Endurance International; Access denied (ASN-29873-ENDURANCE-07). ');
$ax += cidrblock($address, '65.254.224.0/19', 'Endurance International; Access denied (ASN-29873-ENDURANCE-08). ');
$ax += cidrblock($address, '66.11.224.0/21', 'Endurance International; Access denied (ASN-29873-ENDURANCE-09). ');
$ax += cidrblock($address, '66.11.234.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-10). ');
$ax += cidrblock($address, '66.11.236.0/22', 'Endurance International; Access denied (ASN-29873-ENDURANCE-11). ');
$ax += cidrblock($address, '66.96.128.0/18', 'Endurance International; Access denied (ASN-29873-ENDURANCE-12). ');
$ax += cidrblock($address, '66.235.192.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-13). ');
$ax += cidrblock($address, '66.235.196.0/22', 'Endurance International; Access denied (ASN-29873-ENDURANCE-14). ');
$ax += cidrblock($address, '66.235.202.0/23', 'Endurance International; Access denied (ASN-29873-ENDURANCE-15). ');
$ax += cidrblock($address, '66.235.215.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-16). ');
$ax += cidrblock($address, '66.235.216.0/21', 'Endurance International; Access denied (ASN-29873-ENDURANCE-17). ');
$ax += cidrblock($address, '66.242.16.0/20', 'Endurance International; Access denied (ASN-29873-ENDURANCE-18). ');
$ax += cidrblock($address, '66.249.0.0/19', 'Endurance International; Access denied (ASN-29873-ENDURANCE-19). ');
$ax += cidrblock($address, '67.23.138.0/23', 'Endurance International; Access denied (ASN-29873-ENDURANCE-20). ');
$ax += cidrblock($address, '67.223.224.0/19', 'Endurance International; Access denied (ASN-29873-ENDURANCE-21). ');
$ax += cidrblock($address, '72.22.66.0/23', 'Endurance International; Access denied (ASN-29873-ENDURANCE-22). ');
$ax += cidrblock($address, '72.22.72.0/23', 'Endurance International; Access denied (ASN-29873-ENDURANCE-23). ');
$ax += cidrblock($address, '72.22.76.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-24). ');
$ax += cidrblock($address, '72.22.78.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-25). ');
$ax += cidrblock($address, '72.22.80.0/22', 'Endurance International; Access denied (ASN-29873-ENDURANCE-26). ');
$ax += cidrblock($address, '72.22.88.0/22', 'Endurance International; Access denied (ASN-29873-ENDURANCE-27). ');
$ax += cidrblock($address, '72.22.94.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-28). ');
$ax += cidrblock($address, '74.126.192.0/20', 'Endurance International; Access denied (ASN-29873-ENDURANCE-29). ');
$ax += cidrblock($address, '206.125.208.0/20', 'Endurance International; Access denied (ASN-29873-ENDURANCE-30). ');
$ax += cidrblock($address, '207.148.224.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-31). ');
$ax += cidrblock($address, '207.148.226.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-32). ');
$ax += cidrblock($address, '207.148.228.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-33). ');
$ax += cidrblock($address, '207.148.230.0/23', 'Endurance International; Access denied (ASN-29873-ENDURANCE-34). ');
$ax += cidrblock($address, '207.148.232.0/21', 'Endurance International; Access denied (ASN-29873-ENDURANCE-35). ');
$ax += cidrblock($address, '207.148.240.0/21', 'Endurance International; Access denied (ASN-29873-ENDURANCE-36). ');
$ax += cidrblock($address, '207.148.248.0/24', 'Endurance International; Access denied (ASN-29873-ENDURANCE-37). ');
$ax += cidrblock($address, '207.148.250.0/23', 'Endurance International; Access denied (ASN-29873-ENDURANCE-38). ');
$ax += cidrblock($address, '207.148.254.0/23', 'Endurance International; Access denied (ASN-29873-ENDURANCE-39). ');
$ax += cidrblock($address, '209.34.160.0/21', 'Endurance International; Access denied (ASN-29873-ENDURANCE-40). ');
$ax += cidrblock($address, '209.34.168.0/22', 'Endurance International; Access denied (ASN-29873-ENDURANCE-41). ');
$ax += cidrblock($address, '209.34.172.0/23', 'Endurance International; Access denied (ASN-29873-ENDURANCE-42). ');
$ax += cidrblock($address, '209.40.192.0/20', 'Endurance International; Access denied (ASN-29873-ENDURANCE-43). ');
$ax += cidrblock($address, '209.59.192.0/19', 'Endurance International; Access denied (ASN-29873-ENDURANCE-44). ');


// Equinix Asia Pacific
// AS17819 (updated 2016.07.02)
$ax += cidrblock($address, '5.152.179.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-00). ');
$ax += cidrblock($address, '5.152.180.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-01). ');
$ax += cidrblock($address, '14.102.156.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-02). ');
$ax += cidrblock($address, '27.111.160.0/19', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-03). ');
$ax += cidrblock($address, '27.111.192.0/20', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-04). ');
$ax += cidrblock($address, '27.111.240.0/20', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-05). ');
$ax += cidrblock($address, '45.116.132.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-06). ');
$ax += cidrblock($address, '45.116.135.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-07). ');
$ax += cidrblock($address, '101.0.20.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-08). ');
$ax += cidrblock($address, '101.0.26.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-09). ');
$ax += cidrblock($address, '101.0.29.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-10). ');
$ax += cidrblock($address, '101.0.31.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-11). ');
$ax += cidrblock($address, '103.3.18.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-12). ');
$ax += cidrblock($address, '103.5.251.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-13). ');
$ax += cidrblock($address, '103.6.62.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-14). ');
$ax += cidrblock($address, '103.7.208.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-15). ');
$ax += cidrblock($address, '103.9.92.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-16). ');
$ax += cidrblock($address, '103.9.164.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-17). ');
$ax += cidrblock($address, '103.10.36.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-18). ');
$ax += cidrblock($address, '103.11.4.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-19). ');
$ax += cidrblock($address, '103.13.47.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-20). ');
$ax += cidrblock($address, '103.13.68.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-21). ');
$ax += cidrblock($address, '103.14.116.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-22). ');
$ax += cidrblock($address, '103.19.60.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-23). ');
$ax += cidrblock($address, '103.23.221.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-24). ');
$ax += cidrblock($address, '103.28.171.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-25). ');
$ax += cidrblock($address, '103.31.20.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-26). ');
$ax += cidrblock($address, '103.35.224.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-27). ');
$ax += cidrblock($address, '103.37.132.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-28). ');
$ax += cidrblock($address, '103.40.216.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-29). ');
$ax += cidrblock($address, '103.54.132.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-30). ');
$ax += cidrblock($address, '103.60.191.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-31). ');
$ax += cidrblock($address, '103.66.60.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-32). ');
$ax += cidrblock($address, '103.195.128.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-33). ');
$ax += cidrblock($address, '103.204.67.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-34). ');
$ax += cidrblock($address, '103.239.19.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-35). ');
$ax += cidrblock($address, '103.245.4.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-36). ');
$ax += cidrblock($address, '103.245.6.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-37). ');
$ax += cidrblock($address, '103.250.72.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-38). ');
$ax += cidrblock($address, '103.254.24.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-39). ');
$ax += cidrblock($address, '119.27.0.0/19', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-40). ');
$ax += cidrblock($address, '119.27.32.0/20', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-41). ');
$ax += cidrblock($address, '119.27.50.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-42). ');
$ax += cidrblock($address, '119.27.52.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-43). ');
$ax += cidrblock($address, '119.27.56.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-44). ');
$ax += cidrblock($address, '119.27.60.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-45). ');
$ax += cidrblock($address, '122.50.64.0/19', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-46). ');
$ax += cidrblock($address, '122.50.104.0/21', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-47). ');
$ax += cidrblock($address, '122.50.120.0/21', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-48). ');
$ax += cidrblock($address, '133.152.0.0/17', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-49). ');
$ax += cidrblock($address, '133.152.128.0/18', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-50). ');
$ax += cidrblock($address, '178.237.168.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-51). ');
$ax += cidrblock($address, '180.148.24.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-52). ');
$ax += cidrblock($address, '180.189.0.0/20', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-53). ');
$ax += cidrblock($address, '180.189.16.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-54). ');
$ax += cidrblock($address, '180.189.24.0/21', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-55). ');
$ax += cidrblock($address, '180.189.32.0/20', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-56). ');
$ax += cidrblock($address, '180.189.48.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-57). ');
$ax += cidrblock($address, '180.189.56.0/21', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-58). ');
$ax += cidrblock($address, '180.189.140.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-59). ');
$ax += cidrblock($address, '183.177.0.0/19', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-60). ');
$ax += cidrblock($address, '183.177.32.0/20', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-61). ');
$ax += cidrblock($address, '185.93.57.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-62). ');
$ax += cidrblock($address, '192.48.18.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-63). ');
$ax += cidrblock($address, '192.48.20.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-64). ');
$ax += cidrblock($address, '192.48.23.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-65). ');
$ax += cidrblock($address, '192.48.25.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-66). ');
$ax += cidrblock($address, '192.170.106.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-67). ');
$ax += cidrblock($address, '192.221.84.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-68). ');
$ax += cidrblock($address, '202.53.141.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-69). ');
$ax += cidrblock($address, '202.147.64.0/19', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-70). ');
$ax += cidrblock($address, '202.167.224.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-71). ');
$ax += cidrblock($address, '202.167.230.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-72). ');
$ax += cidrblock($address, '202.167.232.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-73). ');
$ax += cidrblock($address, '202.167.234.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-74). ');
$ax += cidrblock($address, '202.167.236.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-75). ');
$ax += cidrblock($address, '202.167.240.0/21', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-76). ');
$ax += cidrblock($address, '202.167.248.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-77). ');
$ax += cidrblock($address, '202.167.250.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-78). ');
$ax += cidrblock($address, '202.167.252.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-79). ');
$ax += cidrblock($address, '202.177.192.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-80). ');
$ax += cidrblock($address, '202.177.195.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-81). ');
$ax += cidrblock($address, '202.177.196.0/22', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-82). ');
$ax += cidrblock($address, '202.177.200.0/21', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-83). ');
$ax += cidrblock($address, '202.177.208.0/21', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-84). ');
$ax += cidrblock($address, '202.177.216.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-85). ');
$ax += cidrblock($address, '202.177.221.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-86). ');
$ax += cidrblock($address, '202.177.222.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-87). ');
$ax += cidrblock($address, '202.240.242.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-88). ');
$ax += cidrblock($address, '203.12.5.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-89). ');
$ax += cidrblock($address, '203.99.146.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-90). ');
$ax += cidrblock($address, '203.190.224.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-91). ');
$ax += cidrblock($address, '203.190.226.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-92). ');
$ax += cidrblock($address, '203.190.228.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-93). ');
$ax += cidrblock($address, '203.190.231.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-94). ');
$ax += cidrblock($address, '203.190.232.0/21', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-95). ');
$ax += cidrblock($address, '216.179.142.0/23', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-96). ');
$ax += cidrblock($address, '216.179.149.0/24', 'Equinix Asia Pacific; Access denied (ASN-17819-EQUINIX-97). ');


// Atlantic.net, Inc.
// AS6364 (updated 2016.07.02)
$ax += cidrblock($address, '45.58.32.0/20', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-00). ');
$ax += cidrblock($address, '69.28.64.0/20', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-01). ');
$ax += cidrblock($address, '69.28.80.0/23', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-02). ');
$ax += cidrblock($address, '69.28.84.0/22', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-03). ');
$ax += cidrblock($address, '69.28.88.0/21', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-04). ');
$ax += cidrblock($address, '69.87.216.0/23', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-05). ');
$ax += cidrblock($address, '69.87.218.0/24', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-06). ');
$ax += cidrblock($address, '69.87.220.0/23', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-07). ');
$ax += cidrblock($address, '104.219.52.0/22', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-08). ');
$ax += cidrblock($address, '104.245.32.0/22', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-09). ');
$ax += cidrblock($address, '104.245.36.0/24', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-10). ');
$ax += cidrblock($address, '104.245.38.0/23', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-11). ');
$ax += cidrblock($address, '107.190.176.0/20', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-12). ');
$ax += cidrblock($address, '209.26.48.0/21', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-13). ');
$ax += cidrblock($address, '209.208.0.0/17', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-14). ');
$ax += cidrblock($address, '216.98.0.0/20', 'Atlantic.net, Inc; Access denied (ASN-6364-ATLANTIC-15). ');


// DataCorpore Servios e Representaes
// AS28271 (updated 2016.07.02)
$ax += cidrblock($address, '177.47.96.0/19', 'DataCorpore Servios e Representaes; Access denied (ASN-28271-DATACORPORE-0). ');
$ax += cidrblock($address, '177.52.102.0/24', 'DataCorpore Servios e Representaes; Access denied (ASN-28271-DATACORPORE-1). ');
$ax += cidrblock($address, '177.223.192.0/19', 'DataCorpore Servios e Representaes; Access denied (ASN-28271-DATACORPORE-2). ');
$ax += cidrblock($address, '189.84.16.0/20', 'DataCorpore Servios e Representaes; Access denied (ASN-28271-DATACORPORE-3). ');
$ax += cidrblock($address, '191.243.196.0/23', 'DataCorpore Servios e Representaes; Access denied (ASN-28271-DATACORPORE-4). ');
$ax += cidrblock($address, '191.243.198.0/24', 'DataCorpore Servios e Representaes; Access denied (ASN-28271-DATACORPORE-5). ');
$ax += cidrblock($address, '201.33.16.0/20', 'DataCorpore Servios e Representaes; Access denied (ASN-28271-DATACORPORE-6). ');


// Vieira Arts Ltda ME
// AS263511 (updated 2016.07.02)
$ax += cidrblock($address, '191.241.60.0/22', 'Vieira Arts Ltda ME; Access denied (ASN-263511-VIEIRA-0). ');
$ax += cidrblock($address, '191.243.196.0/22', 'Vieira Arts Ltda ME; Access denied (ASN-263511-VIEIRA-1). ');


// NEPHAX Spolka jawna Arkadiusz Kawalec Michal Podsiadly
// AS43333 (updated 2016.07.10)
$ax += cidrblock($address, '91.203.132.0/22', 'NEPHAX Spolka jawna Arkadiusz Kawalec Michal Podsiadly (ASN-43333-NEPHAX-0). ');
$ax += cidrblock($address, '188.116.0.0/18', 'NEPHAX Spolka jawna Arkadiusz Kawalec Michal Podsiadly (ASN-43333-NEPHAX-1). ');
$ax += cidrblock($address, '193.143.121.0/24', 'NEPHAX Spolka jawna Arkadiusz Kawalec Michal Podsiadly (ASN-43333-NEPHAX-2). ');


// Panamaserver.com
// AS52284 (updated 2016.07.10)
$ax += cidrblock($address, '190.123.34.0/23', 'Panamaserver.com; Access denied (ASN-52284-PANAMA-0). ');
$ax += cidrblock($address, '190.123.36.0/22', 'Panamaserver.com; Access denied (ASN-52284-PANAMA-1). ');
$ax += cidrblock($address, '190.123.40.0/21', 'Panamaserver.com; Access denied (ASN-52284-PANAMA-2). ');
$ax += cidrblock($address, '200.63.40.0/22', 'Panamaserver.com; Access denied (ASN-52284-PANAMA-3). ');
$ax += cidrblock($address, '200.63.45.0/24', 'Panamaserver.com; Access denied (ASN-52284-PANAMA-4). ');
$ax += cidrblock($address, '200.63.46.0/23', 'Panamaserver.com; Access denied (ASN-52284-PANAMA-5). ');
$ax += cidrblock($address, '201.190.129.0/24', 'Panamaserver.com; Access denied (ASN-52284-PANAMA-6). ');
$ax += cidrblock($address, '201.190.136.0/24', 'Panamaserver.com; Access denied (ASN-52284-PANAMA-7). ');
$ax += cidrblock($address, '201.190.223.0/24', 'Panamaserver.com; Access denied (ASN-52284-PANAMA-8). ');
$ax += cidrblock($address, '201.190.255.0/24', 'Panamaserver.com; Access denied (ASN-52284-PANAMA-9). ');


// Bird Hosting Inc.
// AS19133 (updated 2016.07.10)
$ax += cidrblock($address, '71.19.224.0/21', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-00). ');
$ax += cidrblock($address, '71.19.232.0/22', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-01). ');
$ax += cidrblock($address, '71.19.236.0/23', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-02). ');
$ax += cidrblock($address, '71.19.238.0/24', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-03). ');
$ax += cidrblock($address, '192.64.72.0/21', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-04). ');
$ax += cidrblock($address, '204.11.16.0/22', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-05). ');
$ax += cidrblock($address, '204.11.96.0/23', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-06). ');
$ax += cidrblock($address, '204.11.98.0/24', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-07). ');
$ax += cidrblock($address, '204.11.100.0/22', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-08). ');
$ax += cidrblock($address, '207.14.35.0/24', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-09). ');
$ax += cidrblock($address, '208.65.200.0/22', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-10). ');
$ax += cidrblock($address, '208.93.16.0/21', 'Bird Hosting Inc; Access denied (ASN-19133-BIRD-11). ');


// Data Room, Inc
// AS19624 (updated 2016.07.10)
$ax += cidrblock($address, '31.14.40.0/23', 'Data Room, Inc; Access denied (ASN-19624-DATAROOM-0). ');
$ax += cidrblock($address, '38.96.148.0/24', 'Data Room, Inc; Access denied (ASN-19624-DATAROOM-1). ');
$ax += cidrblock($address, '38.96.174.0/23', 'Data Room, Inc; Access denied (ASN-19624-DATAROOM-2). ');
$ax += cidrblock($address, '89.39.149.0/24', 'Data Room, Inc; Access denied (ASN-19624-DATAROOM-3). ');
$ax += cidrblock($address, '162.244.80.0/22', 'Data Room, Inc; Access denied (ASN-19624-DATAROOM-4). ');
$ax += cidrblock($address, '185.105.4.0/22', 'Data Room, Inc; Access denied (ASN-19624-DATAROOM-5). ');


// Zayo Bandwidth Inc
// AS6461 (updated 2016.07.20)
$ax += cidrblock($address, '23.2.8.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-000). ');
$ax += cidrblock($address, '23.2.40.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-001). ');
$ax += cidrblock($address, '23.2.144.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-002). ');
$ax += cidrblock($address, '23.35.16.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-003). ');
$ax += cidrblock($address, '23.35.224.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-004). ');
$ax += cidrblock($address, '23.39.144.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-005). ');
$ax += cidrblock($address, '23.39.176.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-006). ');
$ax += cidrblock($address, '23.41.166.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-007). ');
$ax += cidrblock($address, '23.41.168.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-008). ');
$ax += cidrblock($address, '23.66.4.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-009). ');
$ax += cidrblock($address, '23.193.16.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-010). ');
$ax += cidrblock($address, '24.219.64.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-011). ');
$ax += cidrblock($address, '63.208.55.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-012). ');
$ax += cidrblock($address, '64.84.32.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-013). ');
$ax += cidrblock($address, '64.124.0.0/15', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-014). ');
$ax += cidrblock($address, '66.62.115.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-015). ');
$ax += cidrblock($address, '66.62.116.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-016). ');
$ax += cidrblock($address, '66.62.118.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-017). ');
$ax += cidrblock($address, '66.62.238.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-018). ');
$ax += cidrblock($address, '66.62.240.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-019). ');
$ax += cidrblock($address, '66.62.244.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-020). ');
$ax += cidrblock($address, '66.118.96.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-021). ');
$ax += cidrblock($address, '66.213.143.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-022). ');
$ax += cidrblock($address, '66.243.218.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-023). ');
$ax += cidrblock($address, '67.158.167.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-024). ');
$ax += cidrblock($address, '67.213.171.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-025). ');
$ax += cidrblock($address, '67.213.174.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-026). ');
$ax += cidrblock($address, '69.8.176.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-027). ');
$ax += cidrblock($address, '69.195.5.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-028). ');
$ax += cidrblock($address, '71.161.66.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-029). ');
$ax += cidrblock($address, '71.161.68.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-030). ');
$ax += cidrblock($address, '71.161.72.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-031). ');
$ax += cidrblock($address, '72.10.84.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-032). ');
$ax += cidrblock($address, '72.20.212.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-033). ');
$ax += cidrblock($address, '72.162.132.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-034). ');
$ax += cidrblock($address, '74.114.161.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-035). ');
$ax += cidrblock($address, '74.114.162.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-036). ');
$ax += cidrblock($address, '74.114.164.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-037). ');
$ax += cidrblock($address, '74.116.16.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-038). ');
$ax += cidrblock($address, '74.122.96.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-039). ');
$ax += cidrblock($address, '76.78.89.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-040). ');
$ax += cidrblock($address, '79.141.32.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-041). ');
$ax += cidrblock($address, '82.98.192.0/21', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-042). ');
$ax += cidrblock($address, '82.98.232.0/21', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-043). ');
$ax += cidrblock($address, '82.98.240.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-044). ');
$ax += cidrblock($address, '83.245.12.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-045). ');
$ax += cidrblock($address, '83.245.53.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-046). ');
$ax += cidrblock($address, '83.245.57.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-047). ');
$ax += cidrblock($address, '91.195.122.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-048). ');
$ax += cidrblock($address, '91.209.71.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-049). ');
$ax += cidrblock($address, '93.91.32.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-050). ');
$ax += cidrblock($address, '93.93.232.0/21', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-051). ');
$ax += cidrblock($address, '94.31.0.0/18', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-052). ');
$ax += cidrblock($address, '98.142.126.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-053). ');
$ax += cidrblock($address, '104.77.161.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-054). ');
$ax += cidrblock($address, '104.94.194.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-055). ');
$ax += cidrblock($address, '104.94.196.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-056). ');
$ax += cidrblock($address, '104.94.200.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-057). ');
$ax += cidrblock($address, '104.94.204.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-058). ');
$ax += cidrblock($address, '104.94.208.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-059). ');
$ax += cidrblock($address, '104.94.224.0/19', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-060). ');
$ax += cidrblock($address, '104.95.0.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-061). ');
$ax += cidrblock($address, '104.143.172.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-062). ');
$ax += cidrblock($address, '104.241.44.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-063). ');
$ax += cidrblock($address, '108.169.212.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-064). ');
$ax += cidrblock($address, '108.169.214.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-065). ');
$ax += cidrblock($address, '109.70.224.0/21', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-066). ');
$ax += cidrblock($address, '116.206.72.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-067). ');
$ax += cidrblock($address, '116.206.85.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-068). ');
$ax += cidrblock($address, '116.206.103.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-069). ');
$ax += cidrblock($address, '128.177.0.0/16', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-070). ');
$ax += cidrblock($address, '129.192.40.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-071). ');
$ax += cidrblock($address, '129.192.46.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-072). ');
$ax += cidrblock($address, '129.192.56.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-073). ');
$ax += cidrblock($address, '129.192.169.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-074). ');
$ax += cidrblock($address, '129.192.170.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-075). ');
$ax += cidrblock($address, '129.192.183.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-076). ');
$ax += cidrblock($address, '134.113.224.0/21', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-077). ');
$ax += cidrblock($address, '142.131.188.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-078). ');
$ax += cidrblock($address, '143.220.32.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-079). ');
$ax += cidrblock($address, '148.188.192.0/21', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-080). ');
$ax += cidrblock($address, '157.154.8.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-081). ');
$ax += cidrblock($address, '159.182.54.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-082). ');
$ax += cidrblock($address, '162.65.246.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-083). ');
$ax += cidrblock($address, '162.211.103.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-084). ');
$ax += cidrblock($address, '162.242.32.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-085). ');
$ax += cidrblock($address, '162.242.60.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-086). ');
$ax += cidrblock($address, '162.245.96.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-087). ');
$ax += cidrblock($address, '165.173.4.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-088). ');
$ax += cidrblock($address, '165.173.60.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-089). ');
$ax += cidrblock($address, '165.173.64.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-090). ');
$ax += cidrblock($address, '165.173.96.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-091). ');
$ax += cidrblock($address, '165.173.222.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-092). ');
$ax += cidrblock($address, '165.173.232.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-093). ');
$ax += cidrblock($address, '167.110.66.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-094). ');
$ax += cidrblock($address, '170.109.16.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-095). ');
$ax += cidrblock($address, '173.46.64.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-096). ');
$ax += cidrblock($address, '173.192.248.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-097). ');
$ax += cidrblock($address, '173.192.251.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-098). ');
$ax += cidrblock($address, '178.237.112.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-99). ');
$ax += cidrblock($address, '184.28.78.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-100). ');
$ax += cidrblock($address, '185.104.80.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-101). ');
$ax += cidrblock($address, '192.64.248.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-102). ');
$ax += cidrblock($address, '192.100.72.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-103). ');
$ax += cidrblock($address, '192.149.234.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-104). ');
$ax += cidrblock($address, '192.197.156.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-105). ');
$ax += cidrblock($address, '193.104.4.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-106). ');
$ax += cidrblock($address, '194.0.158.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-107). ');
$ax += cidrblock($address, '194.9.40.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-108). ');
$ax += cidrblock($address, '194.60.224.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-109). ');
$ax += cidrblock($address, '198.52.92.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-110). ');
$ax += cidrblock($address, '198.90.96.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-111). ');
$ax += cidrblock($address, '198.174.36.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-112). ');
$ax += cidrblock($address, '198.184.157.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-113). ');
$ax += cidrblock($address, '198.184.158.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-114). ');
$ax += cidrblock($address, '198.202.148.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-115). ');
$ax += cidrblock($address, '199.30.83.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-116). ');
$ax += cidrblock($address, '199.87.52.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-117). ');
$ax += cidrblock($address, '199.87.192.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-118). ');
$ax += cidrblock($address, '199.119.160.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-119). ');
$ax += cidrblock($address, '199.164.185.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-120). ');
$ax += cidrblock($address, '199.231.6.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-121). ');
$ax += cidrblock($address, '204.9.72.0/21', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-122). ');
$ax += cidrblock($address, '204.122.8.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-123). ');
$ax += cidrblock($address, '204.227.66.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-124). ');
$ax += cidrblock($address, '204.227.68.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-125). ');
$ax += cidrblock($address, '204.227.70.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-126). ');
$ax += cidrblock($address, '204.227.73.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-127). ');
$ax += cidrblock($address, '205.153.231.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-128). ');
$ax += cidrblock($address, '205.159.249.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-129). ');
$ax += cidrblock($address, '206.9.76.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-130). ');
$ax += cidrblock($address, '206.9.88.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-131). ');
$ax += cidrblock($address, '206.165.102.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-132). ');
$ax += cidrblock($address, '206.219.64.0/19', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-133). ');
$ax += cidrblock($address, '207.126.96.0/19', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-134). ');
$ax += cidrblock($address, '208.67.192.0/21', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-135). ');
$ax += cidrblock($address, '208.83.248.0/21', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-136). ');
$ax += cidrblock($address, '208.117.255.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-137). ');
$ax += cidrblock($address, '208.184.0.0/15', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-138). ');
$ax += cidrblock($address, '209.66.64.0/18', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-139). ');
$ax += cidrblock($address, '209.82.174.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-140). ');
$ax += cidrblock($address, '209.82.179.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-141). ');
$ax += cidrblock($address, '209.82.180.0/22', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-142). ');
$ax += cidrblock($address, '209.90.52.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-143). ');
$ax += cidrblock($address, '209.105.17.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-144). ');
$ax += cidrblock($address, '209.105.134.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-145). ');
$ax += cidrblock($address, '209.133.0.0/17', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-146). ');
$ax += cidrblock($address, '209.177.64.0/20', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-147). ');
$ax += cidrblock($address, '209.183.190.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-148). ');
$ax += cidrblock($address, '209.221.48.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-149). ');
$ax += cidrblock($address, '209.249.0.0/16', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-150). ');
$ax += cidrblock($address, '213.152.224.0/19', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-151). ');
$ax += cidrblock($address, '213.161.64.0/19', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-152). ');
$ax += cidrblock($address, '216.119.0.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-153). ');
$ax += cidrblock($address, '216.119.25.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-154). ');
$ax += cidrblock($address, '216.119.26.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-155). ');
$ax += cidrblock($address, '216.119.50.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-156). ');
$ax += cidrblock($address, '216.166.140.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-157). ');
$ax += cidrblock($address, '216.200.0.0/16', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-158). ');
$ax += cidrblock($address, '216.221.236.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-159). ');
$ax += cidrblock($address, '216.221.238.0/23', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-160). ');
$ax += cidrblock($address, '216.222.120.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-161). ');
$ax += cidrblock($address, '216.227.77.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-162). ');
$ax += cidrblock($address, '216.235.141.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-163). ');
$ax += cidrblock($address, '216.235.142.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-164). ');
$ax += cidrblock($address, '216.235.154.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-165). ');
$ax += cidrblock($address, '216.245.31.0/24', 'Zayo Bandwidth Inc; Access denied (ASN-6461-ZAYO-166). ');


// TeNeT Scientific Production Enterprise LLC
// AS6876 (updated 2016.07.20)
$ax += cidrblock($address, '31.31.96.0/19', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-00). ');
$ax += cidrblock($address, '37.203.0.0/19', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-01). ');
$ax += cidrblock($address, '62.16.0.0/19', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-02). ');
$ax += cidrblock($address, '79.140.0.0/20', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-03). ');
$ax += cidrblock($address, '85.238.96.0/19', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-04). ');
$ax += cidrblock($address, '91.194.78.0/23', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-05). ');
$ax += cidrblock($address, '95.46.107.0/24', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-06). ');
$ax += cidrblock($address, '130.0.32.0/19', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-07). ');
$ax += cidrblock($address, '176.119.64.0/18', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-08). ');
$ax += cidrblock($address, '185.23.104.0/22', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-09). ');
$ax += cidrblock($address, '185.145.104.0/22', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-10). ');
$ax += cidrblock($address, '188.115.128.0/18', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-11). ');
$ax += cidrblock($address, '195.138.64.0/19', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-12). ');
$ax += cidrblock($address, '212.178.0.0/19', 'TeNeT Scientific Production Enterprise LLC; Access denied (ASN-6876-TENET-13). ');


// Bay Area Internet Solutions
// AS7151 (updated 2016.07.20)
$ax += cidrblock($address, '69.163.64.0/20', 'Bay Area Internet Solutions; Access denied (ASN-7151-BAYAREAIS-0). ');
$ax += cidrblock($address, '72.20.96.0/19', 'Bay Area Internet Solutions; Access denied (ASN-7151-BAYAREAIS-1). ');
$ax += cidrblock($address, '72.172.176.0/20', 'Bay Area Internet Solutions; Access denied (ASN-7151-BAYAREAIS-2). ');
$ax += cidrblock($address, '157.133.208.0/24', 'Bay Area Internet Solutions; Access denied (ASN-7151-BAYAREAIS-3). ');
$ax += cidrblock($address, '169.145.100.0/23', 'Bay Area Internet Solutions; Access denied (ASN-7151-BAYAREAIS-4). ');
$ax += cidrblock($address, '169.145.112.0/24', 'Bay Area Internet Solutions; Access denied (ASN-7151-BAYAREAIS-5). ');
$ax += cidrblock($address, '209.128.64.0/18', 'Bay Area Internet Solutions; Access denied (ASN-7151-BAYAREAIS-6). ');


// USinternetworking Inc
// AS11329 (updated 2016.07.20)
$ax += cidrblock($address, '198.50.63.0/24', 'USinternetworking Inc; Access denied (ASN-11329-USINTERNETWORKING-0). ');
$ax += cidrblock($address, '206.16.10.0/23', 'USinternetworking Inc; Access denied (ASN-11329-USINTERNETWORKING-1). ');
$ax += cidrblock($address, '206.17.80.0/20', 'USinternetworking Inc; Access denied (ASN-11329-USINTERNETWORKING-2). ');
$ax += cidrblock($address, '209.62.144.0/20', 'USinternetworking Inc; Access denied (ASN-11329-USINTERNETWORKING-3). ');
$ax += cidrblock($address, '209.135.32.0/19', 'USinternetworking Inc; Access denied (ASN-11329-USINTERNETWORKING-4). ');


// Link11 GmbH
// AS34309 (updated 2016.07.20)
$ax += cidrblock($address, '5.83.160.0/23', 'Link11 GmbH; Access denied (ASN-34309-LINK11-00). ');
$ax += cidrblock($address, '31.214.142.0/23', 'Link11 GmbH; Access denied (ASN-34309-LINK11-01). ');
$ax += cidrblock($address, '37.10.96.0/21', 'Link11 GmbH; Access denied (ASN-34309-LINK11-02). ');
$ax += cidrblock($address, '37.10.104.0/22', 'Link11 GmbH; Access denied (ASN-34309-LINK11-03). ');
$ax += cidrblock($address, '37.10.118.0/23', 'Link11 GmbH; Access denied (ASN-34309-LINK11-04). ');
$ax += cidrblock($address, '37.10.120.0/22', 'Link11 GmbH; Access denied (ASN-34309-LINK11-05). ');
$ax += cidrblock($address, '38.93.238.0/24', 'Link11 GmbH; Access denied (ASN-34309-LINK11-06). ');
$ax += cidrblock($address, '46.251.234.0/23', 'Link11 GmbH; Access denied (ASN-34309-LINK11-07). ');
$ax += cidrblock($address, '78.143.0.0/18', 'Link11 GmbH; Access denied (ASN-34309-LINK11-08). ');
$ax += cidrblock($address, '80.95.144.0/20', 'Link11 GmbH; Access denied (ASN-34309-LINK11-09). ');
$ax += cidrblock($address, '85.131.128.0/17', 'Link11 GmbH; Access denied (ASN-34309-LINK11-10). ');
$ax += cidrblock($address, '85.190.128.0/20', 'Link11 GmbH; Access denied (ASN-34309-LINK11-11). ');
$ax += cidrblock($address, '85.190.144.0/22', 'Link11 GmbH; Access denied (ASN-34309-LINK11-12). ');
$ax += cidrblock($address, '85.190.148.0/23', 'Link11 GmbH; Access denied (ASN-34309-LINK11-13). ');
$ax += cidrblock($address, '85.190.150.0/24', 'Link11 GmbH; Access denied (ASN-34309-LINK11-14). ');
$ax += cidrblock($address, '85.190.160.0/20', 'Link11 GmbH; Access denied (ASN-34309-LINK11-15). ');
$ax += cidrblock($address, '91.216.162.0/24', 'Link11 GmbH; Access denied (ASN-34309-LINK11-16). ');
$ax += cidrblock($address, '128.65.208.0/20', 'Link11 GmbH; Access denied (ASN-34309-LINK11-17). ');
$ax += cidrblock($address, '134.255.208.0/23', 'Link11 GmbH; Access denied (ASN-34309-LINK11-18). ');
$ax += cidrblock($address, '134.255.212.0/23', 'Link11 GmbH; Access denied (ASN-34309-LINK11-19). ');
$ax += cidrblock($address, '193.235.62.0/24', 'Link11 GmbH; Access denied (ASN-34309-LINK11-20). ');
$ax += cidrblock($address, '194.169.211.0/24', 'Link11 GmbH; Access denied (ASN-34309-LINK11-21). ');
$ax += cidrblock($address, '195.82.158.0/23', 'Link11 GmbH; Access denied (ASN-34309-LINK11-22). ');
$ax += cidrblock($address, '217.198.128.0/20', 'Link11 GmbH; Access denied (ASN-34309-LINK11-23). ');


// Trans-IX B.V.
// AS30870 (updated 2016.07.24)
$ax += cidrblock($address, '79.99.26.0/24', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-00). ');
$ax += cidrblock($address, '83.98.136.0/23', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-01). ');
$ax += cidrblock($address, '83.98.148.0/24', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-02). ');
$ax += cidrblock($address, '83.98.154.0/23', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-03). ');
$ax += cidrblock($address, '83.98.167.0/24', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-04). ');
$ax += cidrblock($address, '83.98.182.0/23', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-05). ');
$ax += cidrblock($address, '83.98.209.0/24', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-06). ');
$ax += cidrblock($address, '83.98.216.0/22', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-07). ');
$ax += cidrblock($address, '83.98.220.0/23', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-08). ');
$ax += cidrblock($address, '84.244.153.0/24', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-09). ');
$ax += cidrblock($address, '84.244.170.0/23', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-10). ');
$ax += cidrblock($address, '87.101.0.0/20', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-11). ');
$ax += cidrblock($address, '89.30.150.0/23', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-12). ');
$ax += cidrblock($address, '89.30.154.0/23', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-13). ');
$ax += cidrblock($address, '91.199.58.0/24', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-14). ');
$ax += cidrblock($address, '185.40.56.0/22', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-15). ');
$ax += cidrblock($address, '185.58.236.0/22', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-16). ');
$ax += cidrblock($address, '185.108.116.0/22', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-17). ');
$ax += cidrblock($address, '194.30.160.0/24', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-18). ');
$ax += cidrblock($address, '194.48.214.0/24', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-19). ');
$ax += cidrblock($address, '195.93.238.0/23', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-20). ');
$ax += cidrblock($address, '213.247.55.0/24', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-21). ');
$ax += cidrblock($address, '213.247.57.0/24', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-22). ');
$ax += cidrblock($address, '213.247.62.0/23', 'Trans-IX B.V; Access denied (ASN-30870-TRANSIX-23). ');


// Keyweb AG
// AS31103 (updated 2016.07.24)
$ax += cidrblock($address, '62.141.48.0/20', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-00). ');
$ax += cidrblock($address, '84.19.160.0/19', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-01). ');
$ax += cidrblock($address, '87.118.64.0/18', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-02). ');
$ax += cidrblock($address, '91.213.60.0/24', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-03). ');
$ax += cidrblock($address, '95.169.160.0/19', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-04). ');
$ax += cidrblock($address, '185.133.236.0/22', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-05). ');
$ax += cidrblock($address, '192.109.205.0/24', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-06). ');
$ax += cidrblock($address, '193.16.98.0/24', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-07). ');
$ax += cidrblock($address, '193.22.254.0/24', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-08). ');
$ax += cidrblock($address, '195.160.228.0/22', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-09). ');
$ax += cidrblock($address, '217.114.208.0/20', 'Keyweb AG; Access denied (ASN-31103-KEYWEBAG-10). ');


// STARNET S.R.L
// AS31252 (updated 2016.07.24)
$ax += cidrblock($address, '37.233.0.0/18', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-00). ');
$ax += cidrblock($address, '87.248.160.0/19', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-01). ');
$ax += cidrblock($address, '89.28.0.0/17', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-02). ');
$ax += cidrblock($address, '92.114.0.0/24', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-03). ');
$ax += cidrblock($address, '95.65.0.0/17', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-04). ');
$ax += cidrblock($address, '178.18.32.0/20', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-05). ');
$ax += cidrblock($address, '178.168.0.0/17', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-06). ');
$ax += cidrblock($address, '185.17.224.0/22', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-07). ');
$ax += cidrblock($address, '185.70.188.0/22', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-08). ');
$ax += cidrblock($address, '188.138.128.0/17', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-09). ');
$ax += cidrblock($address, '188.244.16.0/20', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-10). ');
$ax += cidrblock($address, '194.28.76.0/22', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-11). ');
$ax += cidrblock($address, '195.93.218.0/23', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-12). ');
$ax += cidrblock($address, '195.245.219.0/24', 'StarNet S.R.L; Access denied (ASN-31252-STARNET-13). ');


// Przedsiebiorstwo "PROMAX" Spolka Jawna Zofia Formanek-Mroczkowska Wieslaw Okroj
// AS31423 (updated 2016.07.24)
$ax += cidrblock($address, '77.89.64.0/18', 'AS31423 Access denied (ASN-31423-PROMAX-0). ');
$ax += cidrblock($address, '87.248.64.0/19', 'AS31423 Access denied (ASN-31423-PROMAX-1). ');
$ax += cidrblock($address, '185.22.8.0/22', 'AS31423 Access denied (ASN-31423-PROMAX-2). ');
$ax += cidrblock($address, '193.151.96.0/22', 'AS31423 Access denied (ASN-31423-PROMAX-3). ');
$ax += cidrblock($address, '194.106.214.0/23', 'AS31423 Access denied (ASN-31423-PROMAX-4). ');
$ax += cidrblock($address, '217.173.0.0/20', 'AS31423 Access denied (ASN-31423-PROMAX-5). ');


// *More, and smaller bad networks to avoid...
$ax += cidrblock($address, '70.39.128.0/17', 'packetexchange is a cloud service, not an access provider. '); //75a
$ax += cidrblock($address, '91.236.74.0/23', 'ELAN-AS Spamslingers (ELAN-AS). '); //75a
$ax += cidrblock($address, '173.0.0.0/20', 'ProXPN, anonymous proxy/vpn network (ProXPN). '); // Updated 75a; Checked: 2016.05.26 (Good)
$ax += cidrblock($address, '202.46.32.0/19', 'ShenZhen Sunrise Technology Co, bot like activity. '); //74a fixed 74c
$ax += iprange($address, '195.216.160.0', '195.216.191.255', 'a JUNIK. ');
$ax += iprange($address, '213.182.192.0', '213.182.223.255', 'b JUNIK. ');
$ax += iprange($address, '87.245.192.0', '87.245.255.255', 'RETN. ');
$ax += iprange($address, '64.116.161.0', '64.116.161.255', 'a Eveloz. ');
$ax += iprange($address, '64.117.234.0', '64.117.234.255', 'b Eveloz. ');
$ax += iprange($address, '190.122.160.0', '190.122.175.255', 'c Eveloz. ');
$ax += iprange($address, '190.123.32.0', '190.123.47.255', 'd Eveloz. ');
$ax += iprange($address, '200.63.40.0', '200.63.47.255', 'e Eveloz. ');
$ax += iprange($address, '200.105.34.0', '200.105.44.255', 'f Eveloz. ');
$ax += iprange($address, '200.115.128.0', '200.115.159.255', 'g Eveloz. ');
$ax += iprange($address, '201.218.208.0', '201.218.208.255', 'h Eveloz. ');
$ax += iprange($address, '66.186.0.0', '66.186.31.255', 'a Alchemy Communications. ');
$ax += iprange($address, '66.226.0.0', '66.226.31.255', 'b Alchemy Communications. ');
$ax += iprange($address, '72.26.96.0', '72.26.127.255', 'c Alchemy Communications. ');
$ax += iprange($address, '205.144.160.0', '205.144.175.255', 'd Alchemy Communications. ');
$ax += iprange($address, '208.76.216.0', '208.76.219.255', 'e Alchemy Communications. ');
$ax += iprange($address, '208.118.48.0', '208.118.63.255', 'f Alchemy Communications. ');
$ax += iprange($address, '209.132.192.0', '209.132.255.255', 'g Alchemy Communications. ');
$ax += iprange($address, '216.250.112.0', '216.250.127.255', 'h Alchemy Communications. ');
$ax += cidrblock($address, '46.229.160.0/20', 'Semrush Botnetwork (SEM-01). '); //74d
$ax += cidrblock($address, '46.19.168.0/23', 'Network has ethical issues (ASN-6Li-2H-0). '); //74d
$ax += cidrblock($address, '208.74.204.0/22', 'Network has ethical issues (ASN-6Li-2H-1). '); //74d
$ax += cidrblock($address, '38.99.82.0/24', 'Fieldtech Inc (BADNET-FTI). '); //77b
$ax += cidrblock($address, '14.96.0.0/14', 'TATAINDICOM-IN (Site Scraper) (BADNET-TATA). '); //77g


// RBN IP and IP Range Blocks
$ax += iprange($address, '77.51.0.0', '77.51.59.255', 'RBN. ');
$ax += iprange($address, '77.92.88.0', '77.92.89.255', 'RBN. ');
$ax += iprange($address, '77.105.0.0', '77.105.63.255', 'RBN. ');
$ax += iprange($address, '78.24.24.234', '78.25.191.255', 'RBN. '); //split 72
$ax += iprange($address, '78.37.128.0', '78.37.191.255', 'RBN. ');
$ax += iprange($address, '78.110.175.0', '78.110.175.255', 'RBN. ');
$ax += iprange($address, '78.129.202.0', '78.129.203.255', 'RBN. ');
$ax += iprange($address, '78.157.140.0', '78.157.143.255', 'RBN. ');
$ax += iprange($address, '79.174.64.0', '79.174.95.255', 'RBN. ');
$ax += iprange($address, '79.175.64.0', '79.175.127.255', 'RBN. ');
$ax += iprange($address, '83.167.98.0', '83.167.100.255', 'RBN. ');
$ax += iprange($address, '83.167.104.0', '83.167.109.255', 'RBN. ');
$ax += iprange($address, '83.167.127.0', '83.167.127.255', 'RBN. ');
$ax += iprange($address, '85.249.0.0', '85.251.255.255', 'RBN. ');
$ax += iprange($address, '89.108.64.0', '89.108.127.255', 'RBN. ');
$ax += iprange($address, '89.113.72.0', '89.113.79.255', 'RBN. ');
$ax += iprange($address, '89.254.192.0', '89.254.255.255', 'RBN. ');
$ax += iprange($address, '91.204.72.0', '91.204.75.255', 'RBN. ');
$ax += iprange($address, '91.205.65.0', '91.205.127.255', 'RBN. ');
$ax += iprange($address, '91.205.168.0', '91.205.168.255', 'RBN. ');
$ax += cidrblock($address, '91.212.124.0/24', 'RBN. ');
$ax += iprange($address, '91.212.196.0', '91.212.255.255', 'RBN. ');
$ax += iprange($address, '92.38.128.0', '92.38.255.255', 'RBN. ');
$ax += iprange($address, '92.241.0.0', '92.241.191.255', 'RBN. ');
$ax += iprange($address, '93.174.88.0', '93.174.94.255', 'RBN. ');
$ax += iprange($address, '94.142.128.0', '94.142.129.255', 'RBN. ');
$ax += iprange($address, '94.181.0.0', '94.181.255.255', 'RBN. ');
$ax += iprange($address, '109.121.0.0', '109.121.63.255', 'RBN. ');
$ax += iprange($address, '188.134.0.0', '188.134.15.255', 'RBN. ');
$ax += iprange($address, '193.53.87.0', '193.53.89.255', 'RBN. ');
$ax += cidrblock($address, '193.105.210.0/24', 'RBN. '); //70e
$ax += iprange($address, '193.109.248.0', '193.109.249.255', 'RBN. ');
$ax += iprange($address, '193.189.126.0', '193.189.127.255', 'RBN. ');
$ax += iprange($address, '194.106.188.0', '194.106.191.255', 'RBN. ');
$ax += iprange($address, '194.165.42.0', '194.165.42.255', 'RBN. ');
$ax += iprange($address, '195.2.252.0', '195.2.253.255', 'RBN. ');
$ax += iprange($address, '195.88.0.0', '195.88.255.255', 'RBN. ');
$ax += iprange($address, '195.189.80.0', '195.189.83.255', 'RBN. ');
$ax += iprange($address, '208.64.24.0', '208.64.27.255', 'RBN. ');
$ax += iprange($address, '212.15.65.0', '212.15.255.255', 'RBN. ');
$ax += iprange($address, '212.152.60.128', '212.152.63.255', 'RBN. ');
$ax += iprange($address, '213.219.192.0', '213.219.255.255', 'RBN. ');
$ax += iprange($address, '213.248.0.0', '213.248.63.255', 'RBN. ');


// Query Test
$ax += inmatch($query, 'xbadipx', 'Test Trigger to test function BADIP. ');
