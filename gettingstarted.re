= Getting Started!
== Noodlとは
Noodlとは、スウェーデンのデザイン・イノベーションファーム「TOPP」が
開発したUI/UXプロトタイピングツールです。

=== Noodlの特徴
 * コードを書かなくても使うことができる
 * UI構築やアニメーション表現が得意
 * MQTTやHTPPなどのプロトコルを使って通信ができる

Noodlについて： @<href>{https://tensorx.co.jp/noodl-jp/}

== Noodl2.0のインストール
下記URLを参考に、登録・インストールをしてください。
現在Noodl2.0はクローズドβ版で、使用するには下記URLに記載されている手順に従って登録し、招待を受ける必要があります
（2020年2月現在）。
@<href>{https://qiita.com/noodl-tokyo/items/e8d9e945c60433019026}

== サンプルをクローン・インポートする
まずは、これから本書で紹介する4つのプロジェクトが含まれている、サンプルリポジトリをダウンロードしましょう。

=== GitHubからサンプルをクローン
下記からサンプルをダウンロードしてください。

@<href>{https://github.com/noodl-community/tbf08-mensho}

==== Zipファイルをダウンロードする場合
//image[gettingstarted/gettingstarted2][Zipファイルをダウンロードする場合][scale=0.5]{
//}

==== gitコマンドでクローンする場合
//listnum[gitclone][gitコマンドでクローンする場合]{
  $ git clone https://github.com/noodl-community/tbf08-mensho.git
//}

==== サンプルリポジトリの内容

//table[rep][サンプルリポジトリの内容]{
XXX	                  第2章 受付嬢（システム）をプロトタイピング！
balanceball	          第3章 Ongaq.jsとmicro:bitを使ってアゲアゲ⤴︎なものを作ろう
DragShimizu	          第4章 Noodlからobniz上の清水さんを動かす
abyss	                第5章 清水をのぞくとき清水もまたこちらをのぞいているのだ
//}

=== Noodlにプロジェクトをインポートする
 * Noodl2.0を立ち上げてログイン
 * 「Project」タブをクリック
 * 「Import existing project」をクリック
 * タイトルを付け、「Pick project folder」をクリック
 * インポートしたいサンプルを選択
 ※インポート時の注意：「project.json」がある階層のひとつ上のディレクトリ（ex:「balanceball」など）を選択する。

//image[gettingstarted/gettingstarted1][プロジェクトのインポート時に選択すべきディレクトリ][scale=1.0]{
//}
