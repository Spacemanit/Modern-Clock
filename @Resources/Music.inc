[TitleMeasure]
Measure=Plugin
Group=Measures
Plugin=#Plugin#
PlayerName=#PlayerName#
PlayerType=Title
UpdateDivider=(#BatterySaverMode# = 0 ? 2 : 5)
OnChangeAction=[!UpdateMeasureGroup Measures][!UpdateMeterGroup Text][!Redraw]

[CoverMeasure]
Measure=Plugin
Group=Measures
Plugin=#Plugin#
PlayerName=#PlayerName#
PlayerType=Cover
CoverPath=#@#Images/Music/cover.jpg

[ArtistMeasure]
Measure=Plugin
Group=Measures
Plugin=#Plugin#
PlayerName=#PlayerName#
PlayerType=Artist
