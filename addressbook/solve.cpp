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
	int now = 0, i, j, p;//now:ct �±�
	wstring prov[] = { L"����",L"�Ϻ�",L"���",L"����",L"���ɹ�",L"�½�",L"����",L"����",L"����",L"����",L"����",L"������",L"�ӱ�",L"����",L"����",L"����",L"ɽ��",L"ɽ��",L"����",L"����",L"����",L"�ຣ",L"�㽭",L"����",L"����",L"�Ĵ�",L"����",L"����",L"����",L"����",L"�㶫",L"̨��",L"���",L"����" };
	wstring cit[] = { L"��ɽ",L"�ػʵ�",L"����",L"��̨",L"����",L"�żҿ�",L"�е�",L"����",L"�ȷ�",L"��ˮ",L"̫ԭ",L"��ͬ",L"��Ȫ",L"����",L"����",L"˷��",L"����",L"�˳�",L"����",L"�ٷ�",L"����",L"���ͺ���",L"��ͷ",L"�ں�",L"���",L"ͨ��",L"������˹",L"���ױ���",L"�����׶�",L"�����첼",L"����",L"����",L"��ɽ",L"��˳",L"��Ϫ",L"����",L"����",L"Ӫ��",L"����",L"����",L"�̽�",L"����",L"����",L"��«��",L"����",L"����",L"��ƽ",L"��Դ",L"ͨ��",L"��ɽ",L"��ԭ",L"�׳�",L"������",L"�������",L"����",L"�׸�",L"˫Ѽɽ",L"����",L"����",L"��ľ˹",L"��̨��",L"ĵ����",L"�ں�",L"�绯",L"���˰���",L"�Ͼ�",L"����",L"����",L"����",L"����",L"��ͨ",L"���Ƹ�",L"����",L"�γ�",L"����",L"��",L"̩��",L"��Ǩ",L"����",L"����",L"����",L"����",L"����",L"����",L"��",L"����",L"��ɽ",L"̨��",L"��ˮ",L"�Ϸ�",L"�ߺ�",L"����",L"����",L"��ɽ",L"����",L"ͭ��",L"����",L"��ɽ",L"����",L"����",L"����",L"����",L"����",L"����",L"����",L"����",L"����",L"����",L"����",L"����",L"Ȫ��",L"����",L"��ƽ",L"����",L"����",L"�ϲ�",L"������",L"Ƽ��",L"�Ž�",L"����",L"ӥ̶",L"����",L"����",L"�˴�",L"����",L"����",L"����",L"�ൺ",L"�Ͳ�",L"��ׯ",L"��Ӫ",L"��̨",L"Ϋ��",L"����",L"����",L"̩��",L"����",L"����",L"����",L"����",L"�ĳ�",L"����",L"����",L"֣��",L"����",L"����",L"ƽ��ɽ",L"����",L"�ױ�",L"����",L"����",L"���",L"���",L"���",L"����Ͽ",L"����",L"����",L"����",L"�ܿ�",L"פ���",L"�人",L"��ʯ",L"�差",L"ʮ��",L"����",L"�˲�",L"����",L"����",L"Т��",L"�Ƹ�",L"����",L"����",L"��ɳ",L"����",L"��̶",L"����",L"����",L"����",L"����",L"�żҽ�",L"����",L"����",L"����",L"����",L"¦��",L"����",L"����",L"�麣",L"��ͷ",L"�ع�",L"��ɽ",L"����",L"տ��",L"ï��",L"����",L"����",L"÷��",L"��β",L"��Դ",L"����",L"��Զ",L"��ݸ",L"��ɽ",L"����",L"����",L"�Ƹ�",L"����",L"����",L"����",L"����",L"����",L"���Ǹ�",L"����",L"���",L"����",L"��ɫ",L"����",L"�ӳ�",L"����",L"����",L"����",L"����",L"�ɶ�",L"�Թ�",L"��֦��",L"����",L"����",L"����",L"��Ԫ",L"����",L"�ڽ�",L"��ɽ",L"�ϳ�",L"�˱�",L"�㰲",L"����",L"üɽ",L"�Ű�",L"����",L"����",L"����",L"����ˮ",L"����",L"��˳",L"ͭ��",L"�Ͻ�",L"ǭ����",L"ǭ����",L"ǭ��",L"����",L"����",L"��Ϫ",L"��ɽ",L"��ͨ",L"����",L"�ն�",L"�ٲ�",L"����",L"����",L"ɽ��",L"�տ���",L"����",L"��֥",L"����",L"ͭ��",L"����",L"����",L"μ��",L"�Ӱ�",L"����",L"����",L"����",L"����",L"����",L"������",L"���",L"����",L"��ˮ",L"����",L"��Ҵ",L"ƽ��",L"��Ȫ",L"����",L"����",L"¤��",L"����",L"����",L"����",L"ʯ��ɽ",L"����",L"��ԭ",L"����",L"��³ľ��",L"��������",L"��³��",L"����",L"����",L"���˰���",L"������",L"��ʲ",L"����",L"����",L"����̩",L"�ӱ߳�����",L"��ʩ����������",L"��������������",L"���Ļ���",L"���ϲ���",L"���β���",L"��ɽ����",L"���Ӳ���Ǽ��",L"ǭ�������嶱��",L"ǭ�ϲ���������",L"ǭ���ϲ���������",L"��������",L"���������",L"���������ɹ�",L"���������ɹ�",L"�������տ¶�����",L"���ϲ���",L"��������",L"���ϲ���",L"�������",L"��������",L"�����ɹ������",L"�������",L"��������",L"�������",L"ŭ��������",L"��˫���ɴ���",L"��ɽ׳������",L"�º���徰����",L"��ӹ���������",L"�˰�",L"���ֹ���",L"������" };
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
				ct[now + 1] += L"��";
			}
			else if (p >= 4 && p < 9)
			{
				if (p == 5)
				{
					ct[now] += L"ά���";
				}
				else if (p == 8)
				{
					ct[now] += L"����";
				}
				else if (p == 6)
				{
					ct[now] += L"׳��";
				}
				ct[now] += L"������";
			}
			else if (p >= 9)
			{
				ct[now] += L"ʡ";
			}
			//�ر�����������
			pos += prov[p].length();
			if (add[pos] == L'ʡ')
			{
				pos++;
			}
			else if (add[pos] == L'��' && add[pos + 1] == L'��')
			{
				pos += 3;
			}
			else if (add[pos] == L'��')
			{
				pos++;
			}
			else if (add[pos] == L'׳')
			{
				pos += 2;
				if (add[pos] == L'��'&& add[pos + 1] == L'��')
					pos += 3;
			}
			else if (add[pos] == L'��')
			{
				pos += 2;
				if (add[pos] == L'��'&& add[pos + 1] == L'��')
					pos += 3;
			}
			else if (add[pos] == L'ά')
			{
				pos += 3;
				if (add[pos] == L'��'&& add[pos + 1] == L'��')
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
				ct[now] += L"��";
			}
			else if (i >= 303 && i < 333)
			{
				ct[now] += L"������";
			}
			else if (i >= 296 && i < 303)
			{
				ct[now] += L"����";
			}
			else
			{
				ct[now] += L"��";
			}
			if (add[pos] == L'��')
			{
				pos++;
			}
			else if (add[pos] == L'��' && add[pos + 1] == L'��')
			{
				pos += 2;
			}
			else if (add[pos] == L'��' && add[pos + 1] == L'��')
			{
				pos += 3;
			}
			else if (add[pos] == L'��')
				pos++;
			break;
		}
	}
	now++;
	//san
	wstring san = L"";
	for (i = pos; i < add.length(); i++)
	{
		if (add[i] == L'��' || add[i] == L'��' || add[i] == L'��' || add[i] == L'��')
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
		if (add[i] == L'��' || add[i] == L'��' || add[i] == L'��' || add[i] == L'��' || add[i] == L'��')
		{

			for (j = pos; j <= i; j++)
				si += add[j];
			pos = i + 1;
			if (add[i + 1] == L'��' && add[i] == L'��')
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
			if (add[i] == L'·' || add[i] == L'��' || add[i] == L'��' || add[i] == L'��' || add[i] == L'��' || add[i] == L'��')
			{
				for (j = pos; j <= i; j++)
				{
					wu += add[j];
				}
				pos = i + 1;
				if (add[i] == L'��' || add[i + 1] == L'ͬ')
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
			if (add[i] == L'��')
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
	answ += L"����";
	answ += L'"';
	answ += L':';
	answ += L'"';
	answ += name;
	answ += L'"';
	answ += L',';
	answ += L'"';
	answ += L"�ֻ�";
	answ += L'"';
	answ += L':' + L'"';
	answ += phon;
	answ += L'"' + L',' + L'"' + L"��ַ" + L'"';
	answ += L":[";
	//	wcout << L"{" << L'"' << L"����" << L'"' << L':' << L'"' << name << L'"' << L',' << L'"' << L"�ֻ�" << L'"' << L':' << L'"' << phon << L'"' << L',' << L'"' << L"��ַ" << L'"' << L":[";
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
