[Variables]
Latitude=28.388019
Longitude=79.420368

; Units of measure. This must be one of the following lower case letters:
; e		This is "Imperial", using Fahrenheit for temperatures.
; m		This is "Metric", using Celsius for temperatures.
; h		This is "Hybrid", used primarily in the UK. Celsius for temperatures, but miles for distances.
;Units=e
Units=m
;Units=h
; How often to update the weather information. Default and recommended is 600, which would be 10 minutes.
UpdateRate=600
Language=en-US
; Date and time formats you desire.
; See https://docs.rainmeter.net/manual/measures/time/#FormatCodes 
; For formatting codes to use.
; DON'T CHANGE ANYTHING BELOW HERE NOT AT ALL!!
APIKey=71f92ea9dd2f4790b92ea9dd2f779061
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/124.0.0.0 Safari/537.36 Edg/124.0.0.0
CommonSubstitute='"':"","^null$":"","\\u002F":"/","\\u005C":"\","\\u003C":"<","\\u003E":">"
URLSite=https://api.weather.com/v3/aggcommon/v3-wx-observations-current;v3-wx-forecast-daily-15day;v3alertsHeadlines;v3-location-point?format=json&geocode=#Latitude#,#Longitude#&units=#Units#&language=en-US&apiKey=#APIKey#
