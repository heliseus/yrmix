#include <fstream>
#include "defaultdatafordb.h"

namespace dex {

std::list<DefaultCountry> dex::DefaultDataForDb::dataCountries()
{
    std::list<DefaultCountry> countries;

    countries.push_back({"AF", "Afghanistan", "AFN"});
    countries.push_back({"AX", "Åland Islands", "EUR"});
    countries.push_back({"AL", "Albania", "ALL"});
    countries.push_back({"DZ", "Algeria", "DZD"});
    countries.push_back({"AS", "American Samoa", "USD"});
    countries.push_back({"AD", "Andorra", "EUR"});
    countries.push_back({"AO", "Angola", "AOA"});
    countries.push_back({"AI", "Anguilla", "XCD"});
    countries.push_back({"AG", "Antigua and Barbuda", "XCD"});
    countries.push_back({"AR", "Argentina", "ARS"});
    countries.push_back({"AM", "Armenia", "AMD"});
    countries.push_back({"AW", "Aruba", "AWG"});
    countries.push_back({"AU", "Australia", "AUD"});
    countries.push_back({"AT", "Austria", "EUR"});
    countries.push_back({"AZ", "Azerbaijan", "AZN"});
    countries.push_back({"BS", "Bahamas", "BSD"});
    countries.push_back({"BH", "Bahrain", "BHD"});
    countries.push_back({"BD", "Bangladesh", "BDT"});
    countries.push_back({"BB", "Barbados", "BBD"});
    countries.push_back({"BY", "Belarus", "BYN"});
    countries.push_back({"BE", "Belgium", "EUR"});
    countries.push_back({"BZ", "Belize", "BZD"});
    countries.push_back({"BJ", "Benin", "XOF"});
    countries.push_back({"BM", "Bermuda", "BMD"});
    countries.push_back({"BT", "Bhutan", "BTN"});
    countries.push_back({"BO", "Bolivia", "BOB"});
    countries.push_back({"BQ", "Caribbean Netherlands", "USD"});
    countries.push_back({"BA", "Bosnia and Herzegovina", "BAM"});
    countries.push_back({"BW", "Botswana", "BWP"});
    countries.push_back({"BV", "Bouvet Island", "NOK"});
    countries.push_back({"BR", "Brazil", "BRL"});
    countries.push_back({"IO", "British Indian Ocean Territory", "USD"});
    countries.push_back({"BN", "Brunei Darussalam", "BND"});
    countries.push_back({"BG", "Bulgaria", "BGN"});
    countries.push_back({"BF", "Burkina Faso", "XOF"});
    countries.push_back({"BI", "Burundi", "BIF"});
    countries.push_back({"KH", "Cambodia", "KHR"});
    countries.push_back({"CM", "Cameroon", "XAF"});
    countries.push_back({"CA", "Canada", "CAD"});
    countries.push_back({"CV", "Cape Verde", "CVE"});
    countries.push_back({"KY", "Cayman Islands", "KYD"});
    countries.push_back({"CF", "CAR", "XAF"});
    countries.push_back({"TD", "Chad", "XAF"});
    countries.push_back({"CL", "Chile", "CLP"});
    countries.push_back({"CN", "China", "CNY"});
    countries.push_back({"CX", "Christmas Island", "AUD"});
    countries.push_back({"CC", "Cocos Islands", "AUD"});
    countries.push_back({"CO", "Colombia", "COP"});
    countries.push_back({"KM", "Comoros", "KMF"});
    countries.push_back({"CG", "Congo", "CDF"});
    countries.push_back({"CD", "Congo", "CDF"});
    countries.push_back({"CK", "Cook Islands", "NZD"});
    countries.push_back({"CR", "Costa Rica", "CRC"});
    countries.push_back({"CI", "Côte d'Ivoire", "XOF"});
    countries.push_back({"HR", "Croatia", "HRK"});
    countries.push_back({"CU", "Cuba", "CUP"});
    countries.push_back({"CW", "Curaçao", "ANG"});
    countries.push_back({"CY", "Cyprus", "EUR"});
    countries.push_back({"CZ", "Czechia", "CZK"});
    countries.push_back({"DK", "Denmark", "DKK"});
    countries.push_back({"DJ", "Djibouti", "DJF"});
    countries.push_back({"DM", "Dominica", "DOP"});
    countries.push_back({"DO", "Dominican Republic", "DOP"});
    countries.push_back({"EC", "Ecuador", "USD"});
    countries.push_back({"EG", "Egypt", "EGP"});
    countries.push_back({"SV", "El Salvador", "USD"});
    countries.push_back({"GQ", "Equatorial Guinea", "XAF"});
    countries.push_back({"ER", "Eritrea", "ERN"});
    countries.push_back({"EE", "Estonia", "EUR"});
    countries.push_back({"ET", "Ethiopia", "ETB"});
    countries.push_back({"FK", "Falkland Islands", "FKP"});
    countries.push_back({"FO", "Faroe Islands", "DKK"});
    countries.push_back({"FJ", "Fiji", "FJD"});
    countries.push_back({"FI", "Finland", "EUR"});
    countries.push_back({"FR", "France", "EUR"});
    countries.push_back({"GF", "French Guiana", "EUR"});
    countries.push_back({"PF", "French Polynesia", "XPF"});
    countries.push_back({"TF", "French Southern Territories", "EUR"});
    countries.push_back({"GA", "Gabon", "XAF"});
    countries.push_back({"GM", "Gambia", "GMD"});
    countries.push_back({"GE", "Georgia", "GEL"});
    countries.push_back({"DE", "Germany", "EUR"});
    countries.push_back({"GH", "Ghana", "GHS"});
    countries.push_back({"GI", "Gibraltar", "GIP"});
    countries.push_back({"GR", "Greece", "EUR"});
    countries.push_back({"GL", "Greenland", "DKK"});
    countries.push_back({"GD", "Grenada", "XCD"});
    countries.push_back({"GP", "Guadeloupe", "EUR"});
    countries.push_back({"GU", "Guam", "USD"});
    countries.push_back({"GT", "Guatemala", "GTQ"});
    countries.push_back({"GG", "Guernsey", "GBP"});
    countries.push_back({"GN", "Guinea", "GNF"});
    countries.push_back({"GW", "Guinea-Bissau", "XOF"});
    countries.push_back({"GY", "Guyana", "GYD"});
    countries.push_back({"HT", "Haiti", "HTG"});
    countries.push_back({"HM", "Heard Island and McDonald Islands", "AUD"});
    countries.push_back({"VA", "Holy See", "EUR"});
    countries.push_back({"HN", "Honduras", "HNL"});
    countries.push_back({"HK", "Hong Kong", "HKD"});
    countries.push_back({"HU", "Hungary", "HUF"});
    countries.push_back({"IS", "Iceland", "ISK"});
    countries.push_back({"IN", "India", "INR"});
    countries.push_back({"ID", "Indonesia", "IDR"});
    countries.push_back({"IR", "Iran", "IRR"});
    countries.push_back({"IQ", "Iraq", "IQD"});
    countries.push_back({"IE", "Ireland", "EUR"});
    countries.push_back({"IM", "Isle of Man", "GBP"});
    countries.push_back({"IL", "Israel", "ILS"});
    countries.push_back({"IT", "Italy", "EUR"});
    countries.push_back({"JM", "Jamaica", "JMD"});
    countries.push_back({"JP", "Japan", "JPY"});
    countries.push_back({"JE", "Jersey", "GBP"});
    countries.push_back({"JO", "Jordan", "JOD"});
    countries.push_back({"KZ", "Kazakhstan", "KZT"});
    countries.push_back({"KE", "Kenya", "KES"});
    countries.push_back({"KI", "Kiribati", "AUD"});
    countries.push_back({"KP", "North Korea", "KPW"});
    countries.push_back({"KR", "South Korea", "KRW"});
    countries.push_back({"KW", "Kuwait", "KWD"});
    countries.push_back({"KG", "Kyrgyzstan", "KGS"});
    countries.push_back({"LA", "Laos", "LAK"});
    countries.push_back({"LV", "Latvia", "EUR"});
    countries.push_back({"LB", "Lebanon", "LBP"});
    countries.push_back({"LS", "Lesotho", "LSL"});
    countries.push_back({"LR", "Liberia", "LRD"});
    countries.push_back({"LY", "Libya", "LYD"});
    countries.push_back({"LI", "Liechtenstein", "CHF"});
    countries.push_back({"LT", "Lithuania", "EUR"});
    countries.push_back({"LU", "Luxembourg", "EUR"});
    countries.push_back({"MO", "Macao", "MOP"});
    countries.push_back({"MK", "Macedonia", "MKD"});
    countries.push_back({"MG", "Madagascar", "MGA"});
    countries.push_back({"MW", "Malawi", "MWK"});
    countries.push_back({"MY", "Malaysia", "MYR"});
    countries.push_back({"MV", "Maldives", "MVR"});
    countries.push_back({"ML", "Mali", "XOF"});
    countries.push_back({"MT", "Malta", "EUR"});
    countries.push_back({"MH", "Marshall Islands", "USD"});
    countries.push_back({"MQ", "Martinique", "EUR"});
    countries.push_back({"MR", "Mauritania", "MRO"});
    countries.push_back({"MU", "Mauritius", "MUR"});
    countries.push_back({"YT", "Mayotte", "EUR"});
    countries.push_back({"MX", "Mexico", "MXN"});
    countries.push_back({"FM", "Micronesia", "USD"});
    countries.push_back({"MD", "Moldova", "MDL"});
    countries.push_back({"MC", "Monaco", "EUR"});
    countries.push_back({"MN", "Mongolia", "MNT"});
    countries.push_back({"ME", "Montenegro", "EUR"});
    countries.push_back({"MS", "Montserrat", "XCD"});
    countries.push_back({"MA", "Morocco", "MAD"});
    countries.push_back({"MZ", "Mozambique", "MZN"});
    countries.push_back({"MM", "Myanmar", "MMK"});
    countries.push_back({"NA", "Namibia", "NAD"});
    countries.push_back({"NR", "Nauru", "AUD"});
    countries.push_back({"NP", "Nepal", "NPR"});
    countries.push_back({"NL", "Netherlands", "ANG"});
    countries.push_back({"NC", "New Caledonia", "XPF"});
    countries.push_back({"NZ", "New Zealand", "NZD"});
    countries.push_back({"NI", "Nicaragua", "NIO"});
    countries.push_back({"NE", "Niger", "NGN"});
    countries.push_back({"NG", "Nigeria", "NGN"});
    countries.push_back({"NU", "Niue", "NZD"});
    countries.push_back({"NF", "Norfolk Island", "AUD"});
    countries.push_back({"MP", "Northern Mariana Islands", "USD"});
    countries.push_back({"NO", "Norway", "NOK"});
    countries.push_back({"OM", "Oman", "OMR"});
    countries.push_back({"PK", "Pakistan", "PKR"});
    countries.push_back({"PW", "Palau", "USD"});
    countries.push_back({"PS", "Palestine", "EGP"});
    countries.push_back({"PA", "Panama", "PAB"});
    countries.push_back({"PG", "Papua New Guinea", "PGK"});
    countries.push_back({"PY", "Paraguay", "PYG"});
    countries.push_back({"PE", "Peru", "PEN"});
    countries.push_back({"PH", "Philippines", "PHP"});
    countries.push_back({"PN", "Pitcairn", "NZD"});
    countries.push_back({"PL", "Poland", "PLN"});
    countries.push_back({"PT", "Portugal", "EUR"});
    countries.push_back({"PR", "Puerto Rico", "USD"});
    countries.push_back({"QA", "Qatar", "QAR"});
    countries.push_back({"RE", "Réunion", "EUR"});
    countries.push_back({"RO", "Romania", "RON"});
    countries.push_back({"RU", "Russia", "RUB"});
    countries.push_back({"RW", "Rwanda", "RWF"});
    countries.push_back({"BL", "Saint Barthélemy", "EUR"});
    countries.push_back({"SH", "Saint Helena, Ascension and Tristan da Cunha", "SHP"});
    countries.push_back({"KN", "Saint Kitts and Nevis", "XCD"});
    countries.push_back({"LC", "Saint Lucia", "XCD"});
    countries.push_back({"MF", "Saint Martin", "EUR"});
    countries.push_back({"PM", "Saint Pierre and Miquelon", "EUR"});
    countries.push_back({"VC", "Saint Vincent and the Grenadines", "XCD"});
    countries.push_back({"WS", "Samoa", "USD"});
    countries.push_back({"SM", "San Marino", "EUR"});
    countries.push_back({"ST", "Sao Tome and Principe", "STD"});
    countries.push_back({"SA", "Saudi Arabia", "SAR"});
    countries.push_back({"SN", "Senegal", "XOF"});
    countries.push_back({"RS", "Serbia", "RSD"});
    countries.push_back({"SC", "Seychelles", "SCR"});
    countries.push_back({"SL", "Sierra Leone", "SLL"});
    countries.push_back({"SG", "Singapore", "SGD"});
    countries.push_back({"SX", "Sint Maarten", "ANG"});
    countries.push_back({"SK", "Slovakia", "EUR"});
    countries.push_back({"SI", "Slovenia", "EUR"});
    countries.push_back({"SB", "Solomon Islands", "SBD"});
    countries.push_back({"SO", "Somalia", "SOS"});
    countries.push_back({"ZA", "South Africa", "ZAR"});
    countries.push_back({"SS", "South Sudan", "SSP"});
    countries.push_back({"ES", "Spain", "EUR"});
    countries.push_back({"LK", "Sri Lanka", "LKR"});
    countries.push_back({"SD", "Sudan", "SDG"});
    countries.push_back({"SR", "Suriname", "SRD"});
    countries.push_back({"SJ", "Svalbard and Jan Mayen", "NOK"});
    countries.push_back({"SZ", "Swaziland", "SZL"});
    countries.push_back({"SE", "Sweden", "SEK"});
    countries.push_back({"CH", "Switzerland", "CHF"});
    countries.push_back({"SY", "Syrian", "SYP"});
    countries.push_back({"TW", "Taiwan", "TWD"});
    countries.push_back({"TJ", "Tajikistan", "TJS"});
    countries.push_back({"TZ", "Tanzania", "TZS"});
    countries.push_back({"TH", "Thailand", "THB"});
    countries.push_back({"TL", "Timor-Leste", "USD"});
    countries.push_back({"TG", "Togo", "XOF"});
    countries.push_back({"TK", "Tokelau", "NZD"});
    countries.push_back({"TO", "Tonga", "TOP"});
    countries.push_back({"TT", "Trinidad and Tobago", "TTD"});
    countries.push_back({"TN", "Tunisia", "TND"});
    countries.push_back({"TR", "Turkey", "TRY"});
    countries.push_back({"TM", "Turkmenistan", "TMT"});
    countries.push_back({"TC", "Turks and Caicos Islands", "USD"});
    countries.push_back({"TV", "Tuvalu", "AUD"});
    countries.push_back({"UG", "Uganda", "UGX"});
    countries.push_back({"UA", "Ukraine", "UAH"});
    countries.push_back({"AE", "UAE", "AED"});
    countries.push_back({"GB", "United Kingdom", "GBP"});
    countries.push_back({"US", "USA", "USD"});
    countries.push_back({"UM", "United States Minor Outlying Islands", "USD"});
    countries.push_back({"UY", "Uruguay", "UYU"});
    countries.push_back({"UZ", "Uzbekistan", "UZS"});
    countries.push_back({"VU", "Vanuatu", "VUV"});
    countries.push_back({"VE", "Venezuela", "VEF"});
    countries.push_back({"VN", "Viet Nam", "VND"});
    countries.push_back({"VG", "British Virgin Islands", "USD"});
    countries.push_back({"VI", "U.S. Virgin Islands", "USD"});
    countries.push_back({"WF", "Wallis and Futuna", "XPF"});
    countries.push_back({"EH", "Western Sahara", "MAD"});
    countries.push_back({"YE", "Yemen", "YER"});
    countries.push_back({"ZM", "Zambia", "ZMK"});
    countries.push_back({"ZW", "Zimbabwe", "ZWD"});

    return countries;
}

std::list<DefaultCurrency> DefaultDataForDb::dataCurrencies()
{
    std::list<DefaultCurrency> currencies;

    currencies.push_back({"AED", "United Arab Emirates dirham", "د.إ"});
    currencies.push_back({"AFN", "Afghani", "؋"});
    currencies.push_back({"ALL", "Lek", "L"});
    currencies.push_back({"AMD", "Armenian Dram", "֏", true, 1});
    currencies.push_back({"ANG", "Netherlands Antillian Guilder", "ƒ"});
    currencies.push_back({"AOA", "Kwanza", "Kz"});
    currencies.push_back({"ARS", "Argentine Peso", "$"});
    currencies.push_back({"AUD", "Australian Dollar", "$", true, 1});
    currencies.push_back({"AWG", "Aruban Guilder", "ƒ"});
    currencies.push_back({"AZN", "Azerbaijanian Manat", "\uf158", true, 1});
    currencies.push_back({"BAM", "Convertible Marks", "КМ"});
    currencies.push_back({"BBD", "Barbados Dollar", "$"});
    currencies.push_back({"BDT", "Bangladeshi Taka", "৳"});
    currencies.push_back({"BGN", "Bulgarian Lev", "лв"});
    currencies.push_back({"BHD", "Bahraini Dinar", ".د.ب"});
    currencies.push_back({"BIF", "Burundian Franc", "Fr"});
    currencies.push_back({"BMD", "Bermudian Dollar", "$"});
    currencies.push_back({"BND", "Brunei Dollar", "$"});
    currencies.push_back({"BRL", "Brazilian Real", "R$", true, 1});
    currencies.push_back({"BSD", "Bahamian Dollar", "$"});
    currencies.push_back({"BTN", "Ngultrum", "Nu."});
    currencies.push_back({"BWP", "Pula", "P"});
    currencies.push_back({"BYN", "Belarussian Ruble", "Br", true, 1});
    currencies.push_back({"BZD", "Belize Dollar", "$"});
    currencies.push_back({"CAD", "Canadian Dollar", "$", true, 1});
    currencies.push_back({"CDF", "Franc Congolais", "Fr"});
    currencies.push_back({"CHF", "Swiss Franc", "Fr", true, 1});
    currencies.push_back({"CLP", "Chilean Peso", "$", true, 1});
    currencies.push_back({"CNY", "Yuan Renminbi", "元", true, 1});
    currencies.push_back({"COP", "Colombian Peso", "$"});
    currencies.push_back({"CRC", "Costa Rican Colon", "₡"});
    currencies.push_back({"CUP", "Cuban Peso", "$"});
    currencies.push_back({"CVE", "Cape Verde Escudo", "Esc"});
    currencies.push_back({"CZK", "Czech Koruna", "Kč", true, 1});
    currencies.push_back({"DJF", "Djibouti Franc", "Fr"});
    currencies.push_back({"DKK", "Danish Krone", "kr"});
    currencies.push_back({"DOP", "Dominican Peso", "$"});
    currencies.push_back({"DZD", "Algerian Dinar", "د.ج"});
    currencies.push_back({"EGP", "Egyptian Pound", "ج.م"});
    currencies.push_back({"ERN", "Nakfa", "Nfk"});
    currencies.push_back({"ETB", "Ethiopian Birr", "Br"});
    currencies.push_back({"EUR", "Euro", "€", true, 1});
    currencies.push_back({"FJD", "Fiji Dollar", "$"});
    currencies.push_back({"FKP", "Falkland Islands Pound", "£"});
    currencies.push_back({"GBP", "Pound Sterling", "£", true, 1});
    currencies.push_back({"GEL", "Lari", "ლ", true, 1});
    currencies.push_back({"GHS", "Cedi", "₵"});
    currencies.push_back({"GIP", "Gibraltar pound", "£"});
    currencies.push_back({"GMD", "Dalasi", "D"});
    currencies.push_back({"GNF", "Guinea Franc", "Fr"});
    currencies.push_back({"GTQ", "Quetzal", "Q"});
    currencies.push_back({"GYD", "Guyana Dollar", "$"});
    currencies.push_back({"HKD", "Hong Kong Dollar", "$", true, 1});
    currencies.push_back({"HNL", "Lempira", "L"});
    currencies.push_back({"HRK", "Croatian Kuna", "kn"});
    currencies.push_back({"HTG", "Haiti Gourde", "G"});
    currencies.push_back({"HUF", "Forint", "Ft", true, 1});
    currencies.push_back({"IDR", "Rupiah", "Rp", true, 1});
    currencies.push_back({"ILS", "New Israeli Shekel", "₪", true, 1});
    currencies.push_back({"INR", "Indian Rupee", "₹", true, 1});
    currencies.push_back({"IQD", "Iraqi Dinar", "ع.د"});
    currencies.push_back({"ISK", "Iceland Krona", "kr"});
    currencies.push_back({"JMD", "Jamaican Dollar", "$"});
    currencies.push_back({"JOD", "Jordanian Dinar", "د.ا"});
    currencies.push_back({"JPY", "Japanese yen", "¥", true, 1});
    currencies.push_back({"KES", "Kenyan Shilling", "Sh"});
    currencies.push_back({"KGS", "Som", "лв", true, 1});
    currencies.push_back({"KHR", "Riel", "៛"});
    currencies.push_back({"KMF", "Comoro Franc", "Fr"});
    currencies.push_back({"KRW", "South Korean won", "₩", true, 1});
    currencies.push_back({"KWD", "Kuwaiti Dinar", "د.ك"});
    currencies.push_back({"KYD", "Cayman Islands Dollar", "$"});
    currencies.push_back({"KZT", "Tenge", "₸", true, 1});
    currencies.push_back({"LAK", "Kip", "₭"});
    currencies.push_back({"LBP", "Lebanese Pound", "ل.ل"});
    currencies.push_back({"LKR", "Sri Lanka Rupee", "රු"});
    currencies.push_back({"LRD", "Liberian Dollar", "$"});
    currencies.push_back({"LSL", "Loti", "L"});
    currencies.push_back({"LYD", "Libyan Dinar", "ل.د"});
    currencies.push_back({"MAD", "Moroccan Dirham", "د.م."});
    currencies.push_back({"MDL", "Moldovan leu", "L"});
    currencies.push_back({"MGA", "Malagasy Ariary", "Ar"});
    currencies.push_back({"MMK", "Kyat", "Ks"});
    currencies.push_back({"MNT", "Tugrik", "₮"});
    currencies.push_back({"MOP", "Pataca", "P"});
    currencies.push_back({"MRO", "Ouguiya", "UM"});
    currencies.push_back({"MUR", "Mauritius Rupee", "₨"});
    currencies.push_back({"MVR", "Rufiyaa", ".ރ"});
    currencies.push_back({"MWK", "Kwacha", "MK"});
    currencies.push_back({"MXN", "Mexican Peso", "$", true, 1});
    currencies.push_back({"MYR", "Malaysian Ringgit", "RM", true, 1});
    currencies.push_back({"MZN", "Metical", "MT"});
    currencies.push_back({"NAD", "Namibian Dollar", "$"});
    currencies.push_back({"NGN", "Naira", "₦"});
    currencies.push_back({"NIO", "Cordoba Oro", "C$"});
    currencies.push_back({"NOK", "Norwegian Krone", "kr", true, 1});
    currencies.push_back({"NPR", "Nepalese Rupee", "₨"});
    currencies.push_back({"NZD", "New Zealand Dollar", "$", true, 1});
    currencies.push_back({"OMR", "Rial Omani", "ر.ع."});
    currencies.push_back({"PAB", "Balboa", "B/."});
    currencies.push_back({"PEN", "Nuevo Sol", "S/."});
    currencies.push_back({"PGK", "Kina", "K"});
    currencies.push_back({"PHP", "Philippine Peso", "₱", true, 1});
    currencies.push_back({"PKR", "Pakistan Rupee", "₨", true, 1});
    currencies.push_back({"PLN", "Zloty", "zł", true, 1});
    currencies.push_back({"PYG", "Guarani", "₲"});
    currencies.push_back({"QAR", "Qatari Rial", "ر.ق"});
    currencies.push_back({"RON", "Romanian New Leu", "lei"});
    currencies.push_back({"RSD", "Serbian Dinar", "din."});
    currencies.push_back({"RUB", "Russian Ruble", "\uf158", true, 0});
    currencies.push_back({"RWF", "Rwanda Franc", "Fr"});
    currencies.push_back({"SAR", "Saudi Riyal", "ر.س"});
    currencies.push_back({"SBD", "Solomon Islands Dollar", "$"});
    currencies.push_back({"SCR", "Seychelles Rupee", "₨"});
    currencies.push_back({"SDG", "Sudanese Pound", "ج.س."});
    currencies.push_back({"SEK", "Swedish Krona", "kr", true, 1});
    currencies.push_back({"SGD", "Singapore Dollar", "$", true, 1});
    currencies.push_back({"SLL", "Leone", "Le"});
    currencies.push_back({"SOS", "Somali Shilling", "Sh"});
    currencies.push_back({"SRD", "Surinam Dollar", "$"});
    currencies.push_back({"SSP", "South Sudanese pound", "£"});
    currencies.push_back({"STD", "Dobra", "Db"});
    currencies.push_back({"SYP", "Syrian Pound", "ل.س"});
    currencies.push_back({"SZL", "Lilangeni", "L"});
    currencies.push_back({"THB", "Baht", "฿", true, 1});
    currencies.push_back({"TJS", "Somoni", "ЅМ", true, 1});
    currencies.push_back({"TMT", "Manat", "m", true, 1});
    currencies.push_back({"TND", "Tunisian Dinar", "د.ت"});
    currencies.push_back({"TOP", "Pa'anga", "T$"});
    currencies.push_back({"TRY", "New Turkish Lira", "₺", true, 1});
    currencies.push_back({"TTD", "Trinidad and Tobago Dollar", "$"});
    currencies.push_back({"TWD", "New Taiwan dollar", "$", true, 1});
    currencies.push_back({"UAH", "Hryvnia", "₴", true, 1});
    currencies.push_back({"UGX", "Uganda Shilling", "Sh"});
    currencies.push_back({"USD", "US Dollar", "$", true, 1});
    currencies.push_back({"UYU", "Peso Uruguayo", "$"});
    currencies.push_back({"UZS", "Uzbekistan Som", "so’m", true, 1});
    currencies.push_back({"VND", "Vietnamese đồng", "₫"});
    currencies.push_back({"VUV", "Vatu", "Vt"});
    currencies.push_back({"XAF", "CFA Franc BEAC", "Fr"});
    currencies.push_back({"XCD", "East Caribbean Dollar", "$"});
    currencies.push_back({"XOF", "CFA Franc BCEAO", "Fr"});
    currencies.push_back({"XPF", "CFP franc", "Fr"});
    currencies.push_back({"YER", "Yemeni Rial", "﷼"});
    currencies.push_back({"ZAR", "South African Rand", "R", true, 1});
    currencies.push_back({"ZMK", "Kwacha", "ZK"});
    currencies.push_back({"ZWD", "Zimbabwe Dollar", "$"});

    return currencies;
}

std::list<DefaultPaymentMethod> DefaultDataForDb::dataPaymentMethods() {
    std::list<DefaultPaymentMethod> payments;

    payments.push_back({1, "Cash", "Cash payment", 1});
    payments.push_back({128, "Online", "Online payment", 0});

    return payments;
}

}
