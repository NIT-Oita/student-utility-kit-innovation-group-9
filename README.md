# 学生生活支援キット開発プロジェクト (Student Utility Kit Innovation)

> ⚠️ **NOTICE / 注意**
> このREADMEはテンプレートです。**自分たちのプロジェクトの内容に書き換えてください**。
> （タイトル、テーマ、メンバー名、ファイル名、ビルド手順、デモ動画リンクなどを差し替える）
> *This is a template. Please edit and customize every section for your actual project.*

---

## 1. プロジェクト概要

学校生活の中にある「身近な不便」を1つ選び、**C言語・Makefile・Git** を活用して解決するコマンドラインツールを3人1組で開発する。

- 期間: 約一ヶ月
- 班構成: 3名
- 評価: 100点満点

---

## 2. テーマ一覧（班ごとに1つ・重複なし）

| 01 | 課題管理 (TODO) | 締切と優先度から課題を優先順位付け |

---

## 3. 班構成（役割分担）

| メンバー | 役割 | 担当ファイル |
|---|---|---|
| **田邊** | メインロジック（計算・判定） | `logic.c` `logic.h` |
| **小股** | データ管理（ファイルI/O） | `storage.c` `storage.h` |
| **池田** | UI（メニュー・入力チェック） | `ui.c` `main.c` |

全員がGitで互いのプルリクエストをレビュー。

---

## 4. ビルド方法

### 必要なもの

- C コンパイラ (`gcc` または `clang`)
- `make`
- Git

### プラットフォーム別セットアップ

**Windows (MSYS2 / MinGW)**
```bash
pacman -S mingw-w64-x86_64-gcc make
```

**macOS**
```bash
xcode-select --install
```

**Linux (Ubuntu)**
```bash
sudo apt install build-essential
```

### ビルドと実行

```bash
git clone https://github.com/<your-account>/<your-repo>.git
cd <your-repo>
make          # コンパイル
./taskman     # 実行（Windowsは taskman.exe）
```

### Makefile ターゲット

| コマンド | 動作 |
|---|---|
| `make` | コンパイル＆リンク |
| `make run` | ビルドして実行 |
| `make clean` | 中間ファイルを削除 |
| `make zip` | 提出用ZIPを作成 |

---

## 5. プロジェクト構成

```
your-project/
├── Makefile
├── README.md
├── .gitignore
├── src/
│   ├── main.c
│   ├── ui.c   ui.h
│   ├── logic.c logic.h
│   ├── storage.c
│   └──data.csv
└── tests/
    └── test_004.c
```

---

## 6. データ形式（例）

`data.csv` の形式（自分のプロジェクトに合わせて書き換える）:

```csv
title,deadline,priority,done
教科名,2026-05-13,5,0
```

---

## 7. Gitワークフロー

```bash
git pull origin main                    # 最新を取得
git checkout -b feat/<feature-name>     # 機能ごとにブランチ
# ... コード変更 ...
git commit -m "add: <意味のあるメッセージ>"
git push -u origin feat/<feature-name>  # PR作成 → レビュー → マージ
```

main ブランチには直接 push しない。

---

## 8. テストチェックリスト

- [O] 負の数値や0を入力しても落ちない
- [O] 空入力（Enterのみ）を処理できる
- [O] 不正な日付（例: `2026/13/40`）を検出
- [O] データファイルが無い場合に新規作成
- [O] 壊れたデータ行を無視・警告
- [O] 上限を超えた入力を拒否

推奨コンパイルオプション:
```bash
gcc -Wall -Wextra -fsanitize=address ...
```

---

## 9. 評価基準（100点）

| 項目 | 配点 | 内容 |
|---|---:|---|
| 機能性 | 30 | 全機能が正しく動作 |
| コード品質 | 20 | モジュール化・警告ゼロ・命名 |
| Git共同作業 | 15 | ブランチ・PR・3人均等のコミット |
| テスト・堅牢性 | 15 | 不正入力で落ちない |
| ドキュメント | 10 | README・Makefile・コメント |
| デモ・独創性 | 10 | 5分ライブデモ |
| **合計** | **100** | 合格: 60点／優秀: 85点以上 |

---


---

## 10. メンバー / Members

> **編集してください** — Edit this section

- **メンバー 田邊** — 氏名 (学籍番号) — `s2526@oita.kosen-ac.jp`
- **メンバー 小股** — 氏名 (学籍番号) — `s2513@oita.kosen-ac.jp`
- **メンバー 池田** — 氏名 (学籍番号) — `s2504@oita.kosen-ac.jp`

班番号: **Group 9 (要記入)**

---

## 12. デモ動画 / Demo

> プロジェクト完成後、ここにデモ動画またはスクリーンショットを追加してください。

---

## ライセンス

学内提出用。商用利用なし。
