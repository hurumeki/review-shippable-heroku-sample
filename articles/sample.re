={first} my first Re:VIEW

//lead{

"Hello, Re:VIEW."

//}

== What's Re:VIEW

@<b>{Re:VIEW} is a converter from simple markup documents into various formats.

You can generate documents as follows:

 * text with tagging
 * LaTeX
 * HTML
 * XML

You can install Re:VIEW with:

 1. RubyGems
 2. Git
 3. Subversion

 //texequation{
   \sum_{i=1}^nf_n(x)
 //}

//image[cover][cover]

For more information, see @<tt>{https://github.com/kmuto/review/wiki/}.


={second} my second Re:VIEW

https://github.com/kmuto/review
https://github.com/kmuto/review/blob/master/doc/format.ja.md

https://github.com/hurumeki/review-shippable-test
https://hurumeki-review-shippable-test.herokuapp.com/

https://app.shippable.com/
https://www.heroku.com/

https://ja.wikipedia.org/wiki/%E7%B6%99%E7%B6%9A%E7%9A%84%E3%82%A4%E3%83%B3%E3%83%86%E3%82%B0%E3%83%AC%E3%83%BC%E3%82%B7%E3%83%A7%E3%83%B3

ディレクトリ
root
|-/articles
| |- catalog.yml
| |- config.yml
| |- hurumeki.re
| |- nagomi.re
| |-/images
|   |- hurumeki-1.png
| |-/dist
|   |- book.pdf
|
|-/app
| |- app.rb
|
|- Gemfile
|- shippable.yml
|- README.md

articles以下のファイルが各執筆者のファイル
ファイルは、本にしたときの章の単位とする
ファイル名は、"#{執筆者名}.re"とする
一人で複数の記事を書く場合は、"#{執筆者名}-#{執筆者ごとの連番(1～)}.re"とする
ファイルの文字コードはUTF-8、改行コードはLF




必ず、最初の行は = から始める。（=が各章になるため）
必ず、最初の行の = には、{名前}とする。

例:
={hurumeki} Re:Viewから始まる同人生活
