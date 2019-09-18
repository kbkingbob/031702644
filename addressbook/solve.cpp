#include "solve.h"
void solve::todo(wstring &answ)
{
	wcout.imbue(locale("chs"));
	FILE *stream1;
	freopen_s(&stream1, "2.txt", "w", stdout);
	//		wcout << int(fl);
	if (fl)
		answ += L'[';
	//wcout << L'[';
	if (!fl)
		answ += L',';
	//wcout << L',';
	int now = 0, i, j, p;//now:ct 下标
	wstring prov[] = { L"北京",L"上海",L"天津",L"重庆",L"内蒙古",L"新疆",L"广西",L"西藏",L"宁夏",L"辽宁",L"吉林",L"黑龙江",L"河北",L"河南",L"湖北",L"湖南",L"山东",L"山西",L"陕西",L"江苏",L"甘肃",L"青海",L"浙江",L"安徽",L"云南",L"四川",L"贵州",L"江西",L"福建",L"海南",L"广东",L"台湾",L"香港",L"澳门" };
	wstring cit[] = { L"唐山",L"秦皇岛",L"邯郸",L"邢台",L"保定",L"张家口",L"承德",L"沧州",L"廊坊",L"衡水",L"太原",L"大同",L"阳泉",L"长治",L"晋城",L"朔州",L"晋中",L"运城",L"忻州",L"临汾",L"吕梁",L"呼和浩特",L"包头",L"乌海",L"赤峰",L"通辽",L"鄂尔多斯",L"呼伦贝尔",L"巴彦淖尔",L"乌兰察布",L"沈阳",L"大连",L"鞍山",L"抚顺",L"本溪",L"丹东",L"锦州",L"营口",L"阜新",L"辽阳",L"盘锦",L"铁岭",L"朝阳",L"葫芦岛",L"长春",L"吉林",L"四平",L"辽源",L"通化",L"白山",L"松原",L"白城",L"哈尔滨",L"齐齐哈尔",L"鸡西",L"鹤岗",L"双鸭山",L"大庆",L"伊春",L"佳木斯",L"七台河",L"牡丹江",L"黑河",L"绥化",L"大兴安岭",L"南京",L"无锡",L"徐州",L"常州",L"苏州",L"南通",L"连云港",L"淮安",L"盐城",L"扬州",L"镇江",L"泰州",L"宿迁",L"杭州",L"宁波",L"温州",L"嘉兴",L"湖州",L"绍兴",L"金华",L"衢州",L"舟山",L"台州",L"丽水",L"合肥",L"芜湖",L"蚌埠",L"淮南",L"马鞍山",L"淮北",L"铜陵",L"安庆",L"黄山",L"滁州",L"阜阳",L"宿州",L"巢湖",L"六安",L"亳州",L"池州",L"宣城",L"福州",L"厦门",L"莆田",L"三明",L"泉州",L"漳州",L"南平",L"龙岩",L"宁德",L"南昌",L"景德镇",L"萍乡",L"九江",L"新余",L"鹰潭",L"赣州",L"吉安",L"宜春",L"抚州",L"上饶",L"济南",L"青岛",L"淄博",L"枣庄",L"东营",L"烟台",L"潍坊",L"威海",L"济宁",L"泰安",L"日照",L"莱芜",L"临沂",L"德州",L"聊城",L"滨州",L"菏泽",L"郑州",L"开封",L"洛阳",L"平顶山",L"焦作",L"鹤壁",L"新乡",L"安阳",L"濮阳",L"许昌",L"漯河",L"三门峡",L"南阳",L"商丘",L"信阳",L"周口",L"驻马店",L"武汉",L"黄石",L"襄樊",L"十堰",L"荆州",L"宜昌",L"荆门",L"鄂州",L"孝感",L"黄冈",L"咸宁",L"随州",L"长沙",L"株洲",L"湘潭",L"衡阳",L"邵阳",L"岳阳",L"常德",L"张家界",L"益阳",L"郴州",L"永州",L"怀化",L"娄底",L"广州",L"深圳",L"珠海",L"汕头",L"韶关",L"佛山",L"江门",L"湛江",L"茂名",L"肇庆",L"惠州",L"梅州",L"汕尾",L"河源",L"阳江",L"清远",L"东莞",L"中山",L"潮州",L"揭阳",L"云浮",L"南宁",L"柳州",L"桂林",L"梧州",L"北海",L"防城港",L"钦州",L"贵港",L"玉林",L"百色",L"贺州",L"河池",L"来宾",L"崇左",L"海口",L"三亚",L"成都",L"自贡",L"攀枝花",L"泸州",L"德阳",L"绵阳",L"广元",L"遂宁",L"内江",L"乐山",L"南充",L"宜宾",L"广安",L"达州",L"眉山",L"雅安",L"巴中",L"资阳",L"贵阳",L"六盘水",L"遵义",L"安顺",L"铜仁",L"毕节",L"黔西南",L"黔东南",L"黔南",L"昆明",L"曲靖",L"玉溪",L"保山",L"昭通",L"丽江",L"普洱",L"临沧",L"拉萨",L"昌都",L"山南",L"日喀则",L"那曲",L"林芝",L"西安",L"铜川",L"宝鸡",L"咸阳",L"渭南",L"延安",L"汉中",L"榆林",L"安康",L"商洛",L"兰州",L"嘉峪关",L"金昌",L"白银",L"天水",L"武威",L"张掖",L"平凉",L"酒泉",L"庆阳",L"定西",L"陇南",L"西宁",L"海东",L"银川",L"石嘴山",L"吴忠",L"固原",L"中卫",L"乌鲁木齐",L"克拉玛依",L"吐鲁番",L"哈密",L"和田",L"大兴安岭",L"阿克苏",L"喀什",L"塔城",L"阿里",L"阿勒泰",L"延边朝鲜族",L"恩施土家族苗族",L"湘西土家族苗族",L"临夏回族",L"甘南藏族",L"甘孜藏族",L"凉山彝族",L"阿坝藏族羌族",L"黔东南苗族侗族",L"黔南布依族苗族",L"黔西南布依族苗族",L"昌吉回族",L"伊犁哈萨克",L"博尔塔拉蒙古",L"巴音郭楞蒙古",L"克孜勒苏柯尔克孜",L"黄南藏族",L"海北藏族",L"海南藏族",L"果洛藏族",L"玉树藏族",L"海西蒙古族藏族",L"迪庆藏族",L"楚雄彝族",L"大理白族",L"怒江傈僳族",L"西双版纳傣族",L"文山壮族苗族",L"德宏傣族景颇族",L"红河哈尼族彝族",L"兴安",L"锡林郭勒",L"阿拉善" };
	//sheng
	wstring ct[10];
	bool flag = 0;
	int pos = 0;//string position
	ct[0] = L"";
	for (p = 0; p < 34; p++)
	{
		for (i = 0; i < prov[p].length(); i++)
		{
			if (prov[p][i] != add[now + i])
			{
				break;
			}
		}
		if (i == prov[p].length())
		{
			ct[now] = prov[p];
			if (p < 4)
			{
				ct[now + 1] = prov[p];
				ct[now + 1] += L"市";
			}
			else if (p >= 4 && p < 9)
			{
				if (p == 5)
				{
					ct[now] += L"维吾尔";
				}
				else if (p == 8)
				{
					ct[now] += L"回族";
				}
				else if (p == 6)
				{
					ct[now] += L"壮族";
				}
				ct[now] += L"自治区";
			}
			else if (p >= 9)
			{
				ct[now] += L"省";
			}
			//特别行政区不用
			pos += prov[p].length();
			if (add[pos] == L'省')
			{
				pos++;
			}
			else if (add[pos] == L'自' && add[pos + 1] == L'治')
			{
				pos += 3;
			}
			else if (add[pos] == L'市')
			{
				pos++;
			}
			else if (add[pos] == L'壮')
			{
				pos += 2;
				if (add[pos] == L'自'&& add[pos + 1] == L'治')
					pos += 3;
			}
			else if (add[pos] == L'回')
			{
				pos += 2;
				if (add[pos] == L'自'&& add[pos + 1] == L'治')
					pos += 3;
			}
			else if (add[pos] == L'维')
			{
				pos += 3;
				if (add[pos] == L'自'&& add[pos + 1] == L'治')
					pos += 3;
			}
			break;
		}
	}
	now++;
	//shi
	flag = 0;
	ct[1] = L"";
	for (i = 0; i < 336; i++)
	{
		for (j = 0; j < cit[i].length(); j++)
		{
			if (add[j + pos] != cit[i][j])
				break;
		}
		if (j == cit[i].length())
		{
			flag = 1;
			ct[now] = cit[i];
			pos += cit[i].length();
			if (i >= 333)
			{
				ct[now] += L"盟";
			}
			else if (i >= 303 && i < 333)
			{
				ct[now] += L"自治州";
			}
			else if (i >= 296 && i < 303)
			{
				ct[now] += L"地区";
			}
			else
			{
				ct[now] += L"市";
			}
			if (add[pos] == L'盟')
			{
				pos++;
			}
			else if (add[pos] == L'地' && add[pos + 1] == L'区')
			{
				pos += 2;
			}
			else if (add[pos] == L'自' && add[pos + 1] == L'治')
			{
				pos += 3;
			}
			else if (add[pos] == L'市')
				pos++;
			break;
		}
	}
	now++;
	//san
	wstring san = L"";
	for (i = pos; i < add.length(); i++)
	{
		if (add[i] == L'区' || add[i] == L'县' || add[i] == L'市' || add[i] == L'旗')
		{
			for (j = pos; j <= i; j++)
				san += add[j];
			pos = i + 1;
			break;
		}
	}
	ct[now++] = san;
	//si
	wstring si = L"";
	for (i = pos; i < add.length(); i++)
	{
		if (add[i] == L'镇' || add[i] == L'乡' || add[i] == L'道' || add[i] == L'街' || add[i] == L'村')
		{

			for (j = pos; j <= i; j++)
				si += add[j];
			pos = i + 1;
			if (add[i + 1] == L'道' && add[i] == L'街')
			{
				si += add[i + 1];
				pos++;
			}
			break;
		}
	}
	ct[now++] = si;
	//wu
	wstring wu = L"";
	if (op == L"1")
	{
		for (i = pos; i < add.length(); i++)
		{
			wu += add[i];
		}
		ct[now++] = wu;
	}
	else
	{
		for (i = pos; i < add.length(); i++)
		{
			if (add[i] == L'路' || add[i] == L'巷' || add[i] == L'街' || add[i] == L'道' || add[i] == L'胡' || add[i] == L'里')
			{
				for (j = pos; j <= i; j++)
				{
					wu += add[j];
				}
				pos = i + 1;
				if (add[i] == L'胡' || add[i + 1] == L'同')
				{
					wu += add[i + 1];
					pos++;
				}
				break;
			}
		}
		ct[now++] = wu;
		//liu
		wstring liu = L"";

		for (i = pos; i < add.length(); i++)
		{
			if (add[i] == L'号')
			{
				//	wcout << add[pos] << L"0000";
				for (j = pos; j <= i; j++)
				{
					liu += add[j];
					//						cout << add[j];
				}
				pos = i + 1;
				break;
			}
		}
		ct[now++] = liu;
		//qi
		wstring qi = L"";
		for (i = pos; i < add.length(); i++)
		{
			qi += add[i];
		}
		ct[now++] = qi;
	}
	answ += L'{';
	answ += L'"';
	answ += L"姓名";
	answ += L'"';
	answ += L':';
	answ += L'"';
	answ += name;
	answ += L'"';
	answ += L',';
	answ += L'"';
	answ += L"手机";
	answ += L'"';
	answ += L':' + L'"';
	answ += phon;
	answ += L'"' + L',' + L'"' + L"地址" + L'"';
	answ += L":[";
	//	wcout << L"{" << L'"' << L"姓名" << L'"' << L':' << L'"' << name << L'"' << L',' << L'"' << L"手机" << L'"' << L':' << L'"' << phon << L'"' << L',' << L'"' << L"地址" << L'"' << L":[";
	if (op == L"1")
	{
		for (i = 0; i < 5; i++)
		{
			answ += L'"';
			answ += ct[i];
			answ += L'"';
			//				wcout << L'"' << ct[i] << L'"';
			if (i != 4)
			{
				answ += L',';
				//	wcout << L',';
			}
		}
	}
	else
	{
		for (i = 0; i < 7; i++)
		{
			answ += L'"';
			answ += ct[i];
			answ += L'"';
			//wcout << L'"' << ct[i] << L'"';
			if (i != 6)
			{
				answ += L',';
				//	wcout << L',';
			}
		}
	}
	answ += L"]}";
	//		wcout << L"]}";


}
