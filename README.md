# Re:VIEW Shippable Heroku sample
「[Re:VIEW](https://github.com/kmuto/review)」を「[Shippable](https://app.shippable.com/)」でビルドして「[Heroku](https://www.heroku.com/)」にデプロイするサンプルです。

articlesディレクトリ内のRe:VIEWのファイル（Re:VIEWのreview-initで生成されるサンプルファイル）を、  
ShippableでPDFにビルド（review-pdfmaker）するための設定ファイル「shippable.yml」と、
（ビルドには[vvakame/docker-review](https://github.com/vvakame/docker-review)を使用）
生成したPDFファイルをHerokuで公開するためのWebサーバー（sinatra）をまとめたリポジトリです。

ローカルにRubyやTexなどを入れなくても、PDF生成が可能です。

# 使い方

1. GitHub、Shippable、Herokuのアカウントを用意する

2. このリポジトリをローカルにcloneする

3. 自分のGitHubにリポジトリを作成する

4. Shippableで、GitHubと連携し、4.で作成したリポジトリのBuildを有効にする

5. Herokuでappを作成して（ソースはShippableからデプロイします）、
   shippable.ymlの「env.global.APP_NAME」に作成したappの名前を設定する。
  （「your-heroku-app-name」を置き換える）

6. HerokuのappのSettings > Config VariablesにBasic認証のUserNameとPasswordを設定する
   キー BASIC_AUTH_USERNAME, BASIC_AUTH_PASSWORD

7. shippableのDeployment Keyを、herokuのアカウントに登録

8. あとは3.で作成したGitHubのリポジトリにpushするたびに、masterブランチのarticles以下がPDFにビルドされて、herokuにデプロイされます。
   ブラウザでアクセスして、生成されたPDFを見てください。
