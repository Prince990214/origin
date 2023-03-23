import math

VList = ['"SGXCP_MSG1_BYTE1',
         '"SGXCP_MSG1_BYTE2',
         '"SGXCP_MSG1_BYTE3',
         '"SGXCP_MSG1_BYTE4',
         '"SGXCP_MSG1_BYTE5',
         '"SGXCP_MSG1_BYTE6',
         '"SGXCP_MSG1_BYTE7',
         '"SGXCP_MSG1_BYTE8',
         '"SGXCP_MSG2_BYTE1',
         '"SGXCP_MSG2_BYTE2',
         '"SGXCP_MSG2_BYTE3',
         '"SGXCP_MSG2_BYTE4',
         '"SGXCP_MSG2_BYTE5',
         '"SGXCP_MSG2_BYTE6',
         '"SGXCP_MSG2_BYTE7',
         '"SGXCP_MSG2_BYTE8',
         '"SGXCP_MSG3_BYTE1',
         '"SGXCP_MSG3_BYTE2',
         '"SGXCP_MSG3_BYTE3',
         '"SGXCP_MSG3_BYTE4',
         '"SGXCP_MSG3_BYTE5',
         '"SGXCP_MSG3_BYTE6',
         '"SGXCP_MSG3_BYTE7',
         '"SGXCP_MSG3_BYTE8',
         '"SGXCP_MSG4_BYTE1',
         '"SGXCP_MSG4_BYTE2',
         '"SGXCP_MSG4_BYTE3',
         '"SGXCP_MSG4_BYTE4',
         '"SGXCP_MSG4_BYTE5',
         '"SGXCP_MSG4_BYTE6',
         '"SGXCP_MSG4_BYTE7',
         '"SGXCP_MSG4_BYTE8',
         '"SGXCP_MSG5_BYTE1',
         '"SGXCP_MSG5_BYTE2',
         '"SGXCP_MSG5_BYTE3',
         '"SGXCP_MSG5_BYTE4',
         '"SGXCP_MSG5_BYTE5',
         '"SGXCP_MSG5_BYTE6',
         '"SGXCP_MSG5_BYTE7',
         '"SGXCP_MSG5_BYTE8',
         '"SGXCP_MSG6_BYTE1',
         '"SGXCP_MSG6_BYTE2',
         '"SGXCP_MSG6_BYTE3',
         '"SGXCP_MSG6_BYTE4',
         '"SGXCP_MSG6_BYTE5',
         '"SGXCP_MSG6_BYTE6',
         '"SGXCP_MSG6_BYTE7',
         '"SGXCP_MSG6_BYTE8',
         '"SGXCP_MSG7_BYTE1',
         '"SGXCP_MSG7_BYTE2',
         '"SGXCP_MSG7_BYTE3',
         '"SGXCP_MSG7_BYTE4',
         '"SGXCP_MSG7_BYTE5',
         '"SGXCP_MSG7_BYTE6',
         '"SGXCP_MSG7_BYTE7',
         '"SGXCP_MSG7_BYTE8',
         '"SGXCP_MSG8_BYTE1',
         '"SGXCP_MSG8_BYTE2',
         '"SGXCP_MSG8_BYTE3',
         '"SGXCP_MSG8_BYTE4',
         '"SGXCP_MSG8_BYTE5',
         '"SGXCP_MSG8_BYTE6',
         '"SGXCP_MSG8_BYTE7',
         '"SGXCP_MSG8_BYTE8',
         '"SGXCP_MSG9_BYTE1',
         '"SGXCP_MSG9_BYTE2',
         '"SGXCP_MSG9_BYTE3',
         '"SGXCP_MSG9_BYTE4',
         '"SGXCP_MSG9_BYTE5',
         '"SGXCP_MSG9_BYTE6',
         '"SGXCP_MSG9_BYTE7',
         '"SGXCP_MSG9_BYTE8',
         '"SGXCP_MSG10_BYTE1',
         '"SGXCP_MSG10_BYTE2',
         '"SGXCP_MSG10_BYTE3',
         '"SGXCP_MSG10_BYTE4',
         '"SGXCP_MSG10_BYTE5',
         '"SGXCP_MSG10_BYTE6',
         '"SGXCP_MSG10_BYTE7',
         '"SGXCP_MSG10_BYTE8',
         '"SGXCP_MSG11_BYTE1',
         '"SGXCP_MSG11_BYTE2',
         '"SGXCP_MSG11_BYTE3',
         '"SGXCP_MSG11_BYTE4',
         '"SGXCP_MSG11_BYTE5',
         '"SGXCP_MSG11_BYTE6',
         '"SGXCP_MSG11_BYTE7',
         '"SGXCP_MSG11_BYTE8',
         '"SGXCP_MSG12_BYTE1',
         '"SGXCP_MSG12_BYTE2',
         '"SGXCP_MSG12_BYTE3',
         '"SGXCP_MSG12_BYTE4',
         '"SGXCP_MSG12_BYTE5',
         '"SGXCP_MSG12_BYTE6',
         '"SGXCP_MSG12_BYTE7',
         '"SGXCP_MSG12_BYTE8',
         '"SGXCP_MSG13_BYTE1',
         '"SGXCP_MSG13_BYTE2',
         '"SGXCP_MSG13_BYTE3',
         '"SGXCP_MSG13_BYTE4',
         '"SGXCP_MSG13_BYTE5',
         '"SGXCP_MSG13_BYTE6',
         '"SGXCP_MSG13_BYTE7',
         '"SGXCP_MSG13_BYTE8',
         '"SGXCP_MSG14_BYTE1',
         '"SGXCP_MSG14_BYTE2',
         '"SGXCP_MSG14_BYTE3',
         '"SGXCP_MSG14_BYTE4',
         '"SGXCP_MSG14_BYTE5',
         '"SGXCP_MSG14_BYTE6',
         '"SGXCP_MSG14_BYTE7',
         '"SGXCP_MSG14_BYTE8',
         '"SGXCP_MSG15_BYTE1',
         '"SGXCP_MSG15_BYTE2',
         '"SGXCP_MSG15_BYTE3',
         '"SGXCP_MSG15_BYTE4',
         '"SGXCP_MSG15_BYTE5',
         '"SGXCP_MSG15_BYTE6',
         '"SGXCP_MSG15_BYTE7',
         '"SGXCP_MSG15_BYTE8',
         '"SGXCP_MSG16_BYTE1',
         '"SGXCP_MSG16_BYTE2',
         '"SGXCP_MSG16_BYTE3',
         '"SGXCP_MSG16_BYTE4',
         '"SGXCP_MSG16_BYTE5',
         '"SGXCP_MSG16_BYTE6',
         '"SGXCP_MSG16_BYTE7',
         '"SGXCP_MSG16_BYTE8',
         '"SGXCP_MSG17_BYTE1',
         '"SGXCP_MSG17_BYTE2',
         '"SGXCP_MSG17_BYTE3',
         '"SGXCP_MSG17_BYTE4',
         '"SGXCP_MSG17_BYTE5',
         '"SGXCP_MSG17_BYTE6',
         '"SGXCP_MSG17_BYTE7',
         '"SGXCP_MSG17_BYTE8',
         '"SGXCP_MSG18_BYTE1',
         '"SGXCP_MSG18_BYTE2',
         '"SGXCP_MSG18_BYTE3',
         '"SGXCP_MSG18_BYTE4',
         '"SGXCP_MSG18_BYTE5',
         '"SGXCP_MSG18_BYTE6',
         '"SGXCP_MSG18_BYTE7',
         '"SGXCP_MSG18_BYTE8',
         '"SGXCP_MSG19_BYTE1',
         '"SGXCP_MSG19_BYTE2',
         '"SGXCP_MSG19_BYTE3',
         '"SGXCP_MSG19_BYTE4',
         '"SGXCP_MSG19_BYTE5',
         '"SGXCP_MSG19_BYTE6',
         '"SGXCP_MSG19_BYTE7',
         '"SGXCP_MSG19_BYTE8',
         '"SGXCP_MSG20_BYTE1',
         '"SGXCP_MSG20_BYTE2',
         '"SGXCP_MSG20_BYTE3',
         '"SGXCP_MSG20_BYTE4',
         '"SGXCP_MSG20_BYTE5',
         '"SGXCP_MSG20_BYTE6',
         '"SGXCP_MSG20_BYTE7',
         '"SGXCP_MSG20_BYTE8']

LList = [4,
         4,
         3,
         12,
         3,
         12,
         8,
         2,
         4,
         9,
         8,
         8,
         14,
         2,
         14,
         16,
         2,
         2,
         2,
         16,
         16,
         14,
         2,
         14,
         1,
         3,
         2,
         1,
         14
         ]

SNum = 0
def CodeReplace(RT):
    global SNum
    with open(r'b.xdm', 'r', encoding='UTF-8') as file:
        # 使用 read() 函数读取文件内容并将它们存储在一个新变量中
        data = file.read()

        # 使用 replace() 函数搜索和替换文本
        Signal = '"ComSignal_' + str(SNum)
        SNum = SNum + 1
        data = data.replace(Signal, VList[RT], 1)
        # LenNum = LList[RT] // 8 + 1
        # print(LenNum)
        # ByteNum = LenNum * 8
        # print(ByteNum)
        # Type = 'ICS_PL_U' + str(ByteNum)
        # print(Type)
        # data = data.replace('ICS_PL_UX', Type, 1)

    # 以只写模式打开文本文件以写入替换的内容
    with open(r'b.xdm', 'w', encoding='UTF-8') as file:
        # 在文本文件中写入替换的数据
        file.write(data)

    # 打印文本已替换
    print(Signal, "被替换为", VList[RT])


def ReplaceTimes(RT):
    i = 0
    while i < RT:
        CodeReplace(i)
        i = i + 1


if __name__ == '__main__':
    # Num = len(VList)
    # print(Num)
    # ReplaceTimes(160)
    t = 2
    template = "hello%syourwe%sbsiteis%s" % ("大", "http://b",t)
    print(template)
