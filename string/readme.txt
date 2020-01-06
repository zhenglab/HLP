eg1：
给定一个文件name.txt，每行存储“姓名 电话号码”，要求：
1、对姓名进行排序；
2、只输出不同的姓名。




eg2：
字符串操作符




eg3：
过滤一行开头和结尾的所有非英文字符。
例如：strinfo=" //*---Hello Word!......------"


python: re.sub('[^\w]','',strinfo)




eg4：
用一个string子串来替换指定string中的另一个子串。
例如：strinfo="This is Winter, Winter is a programmer. Do you know Winter?"
把“Winter”替换为“wende”。

python: strinfo.replace('Winter','wende')

