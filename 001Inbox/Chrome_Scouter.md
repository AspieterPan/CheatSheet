---
Aliases: 
Tags: ["Tool", "ChromeExtension"]
DateCreated: 2023-07-25T11:23
DateModified: 2023-07-25T17:29
---
# Chrome_Scouter

## Introduce
---
- Chrome 插件
- 划词翻译
- 特色：
	- 集成了 ChatGPT，可以自定义输出
	- 给出语境中的意思，而不是仅仅查字典
	- 与 Anki 联动，快速将所查单词

## 展望
---
- Scouter 的本质是
	1. 将浏览器上选中的内容，加上 Prompt 后发送给 ChatGPT
	2. 展现出 ChatGPT 返回的数据
	3. 将数据传入到 Anki
- 那么我就有了一个想法：
	- 可以将学习场景拓展到所有需要背诵的内容
		- 也就是选中一段文字后，利用 Prompt 生成 Anki 卡片，再导入到 Anki 中
	- 这样就有了一个快速制作 Anki 卡片的途径
	- 毕竟 Anki 的弱点之一就是制卡太麻烦了
- 并且 Scouter 可以自己设定 Prompt，
	- 也就是说我不需要自己重新开发一个新的 Chrome 插件，只需要在 Scouter 里面自己写一个 Prompt，就可以完成在网页中快速做成 Anki 卡片
- 实验了一下后发现，Scouter 制作的 Anki 卡片正面固定是选择的内容，反面固定是 ChatGPT 生成的回答，跟我需要制作填空卡的需求有一点不一致
	- 已经在 [Discord](https://discord.com/channels/1105695182411812944/1105695648306692186/1133335780186656819) 上向作者反馈了
