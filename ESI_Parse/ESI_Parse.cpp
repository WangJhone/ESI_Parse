// ESI_Parse.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "tinyxml2.h"
#include <iostream>
#include <string>

using namespace std;
using namespace tinyxml2;


#define XMLPATH "E:/VSEtherCAT/ESI_Parse/ESI/DM3E_V1.70_Example.xml"




bool getXMLDeclaration(const char* xpath,string& declaration){
	
	XMLDocument doc;
	if (doc.LoadFile(xpath))
	{
		cout << "load xml file failed" << endl;
		return false;
	}
	XMLNode* dec = doc.FirstChild();
	if (dec)
	{
		XMLDeclaration* decl = dec->ToDeclaration();
		if (decl)
		{
			declaration = decl->Value();
			return true;
		}
	}
	return false;
}


int Parse_ESI(const char* xmlpath) {
	XMLDocument doc;
	if (doc.LoadFile(xmlpath))
	{
		cout << "load xml file failed" << endl;
		return doc.ErrorID();
	}
	XMLElement* EtherCATInfo = doc.RootElement();
	if (EtherCATInfo)
	{
		const XMLAttribute* attribute;
		XMLElement* Vendor = EtherCATInfo->FirstChildElement();//找到第一个一级节点
		while (Vendor)
		{
			attribute = Vendor->FirstAttribute();//得到一级节点的第一个属性
			while (attribute)
			{
				cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
				attribute = attribute->Next();//指向下一个属性
			}

			Vendor = Vendor->NextSiblingElement();//指向第一级下一个的兄弟节点
		}
	}
	else
	{
		cout << "bad xml file,please check it" << endl;
		return doc.ErrorID();
	}
	
}



int main()
{
	cout << Parse_ESI(XMLPATH) << endl;
	
	return 0;
}


